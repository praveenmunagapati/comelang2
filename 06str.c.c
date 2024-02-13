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
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
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
right_value10 = (void*)0;
right_value11 = (void*)0;
    __dec_obj6=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(value))));
    if(__dec_obj6) { __dec_obj6 = come_decrement_ref_count(__dec_obj6, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
    if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { right_value10 = come_decrement_ref_count(right_value10, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value10, right_value10 = (void*)0;
    __freed_obj__ = 0;
    self->sline=sline;
    __dec_obj7=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value11=__builtin_string(info->sname))));
    if(__dec_obj7) { __dec_obj7 = come_decrement_ref_count(__dec_obj7, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
    if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { right_value11 = come_decrement_ref_count(right_value11, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value11, right_value11 = (void*)0;
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
right_value12 = (void*)0;
right_value13 = (void*)0;
memset(&buf_5, 0, sizeof(struct buffer*));
memset(&p_6, 0, sizeof(char*));
right_value14 = (void*)0;
    buf_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value12=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 28, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value12, right_value12 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value13);
    if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value13, right_value13 = (void*)0;
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
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
    if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { right_value14 = come_decrement_ref_count(right_value14, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value14, right_value14 = (void*)0;
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
right_value15 = (void*)0;
    __result10__ = __result_obj__ = ((char*)(right_value15=__builtin_string("sStrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
    if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value15, right_value15 = (void*)0;
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
right_value16 = (void*)0;
memset(&come_value_7, 0, sizeof(struct CVALUE*));
right_value17 = (void*)0;
right_value18 = (void*)0;
right_value19 = (void*)0;
    come_value_7=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value16=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 53, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
    if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value16, right_value16 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj8=come_value_7->c_value;
    come_value_7->c_value=(char*)come_increment_ref_count(((char*)(right_value17=xsprintf("\"%s\"",self->value))));
    if(__dec_obj8) { __dec_obj8 = come_decrement_ref_count(__dec_obj8, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value17);
    if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { right_value17 = come_decrement_ref_count(right_value17, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value17, right_value17 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj9=come_value_7->type;
    come_value_7->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value19=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value18=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 56, "struct sType")))),"char*",(_Bool)0,info))));
    if(__dec_obj9) { come_call_finalizer(sType_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
    if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value18, right_value18 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value19);
    if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value19, right_value19 = (void*)0;
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
right_value20 = (void*)0;
memset(&litem_14, 0, sizeof(struct list_item$1CVALUEph*));
right_value21 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1CVALUEph*));
right_value22 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional26=self->len==0,        _if_conditional26) {
            litem_14=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value20=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282, "struct list_item$1CVALUEph"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
            if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value20, right_value20 = (void*)0;
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
                litem_15=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value21=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value21, right_value21 = (void*)0;
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
                litem_16=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value22=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 302, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
                if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value22, right_value22 = (void*)0;
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
right_value23 = (void*)0;
    __result14__ = __result_obj__ = ((char*)(right_value23=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
    if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { right_value23 = come_decrement_ref_count(right_value23, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value23, right_value23 = (void*)0;
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
right_value24 = (void*)0;
right_value32 = (void*)0;
right_value33 = (void*)0;
    __dec_obj13=self->value;
    self->value=(char*)come_increment_ref_count(((char*)(right_value24=__builtin_string(value))));
    if(__dec_obj13) { __dec_obj13 = come_decrement_ref_count(__dec_obj13, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value24);
    if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { right_value24 = come_decrement_ref_count(right_value24, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value24, right_value24 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj17=self->exps;
    self->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value32=list$1sNodephp_clone(exps))));
    if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
    if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value32, right_value32 = (void*)0;
    __freed_obj__ = 0;
    self->sline=sline;
    __dec_obj18=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value33=__builtin_string(info->sname))));
    if(__dec_obj18) { __dec_obj18 = come_decrement_ref_count(__dec_obj18, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value33);
    if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { right_value33 = come_decrement_ref_count(right_value33, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value33, right_value33 = (void*)0;
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
right_value25 = (void*)0;
right_value26 = (void*)0;
memset(&result_17, 0, sizeof(struct list$1sNodeph*));
memset(&it_18, 0, sizeof(struct list_item$1sNodeph*));
right_value31 = (void*)0;
        if(_if_conditional29=self==((void*)0),        _if_conditional29) {
            __result15__ = __result_obj__ = ((void*)0);
            return __result15__;
        }
        result_17=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value26=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value25=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
        if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value25, right_value25 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value26);
        if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value26, right_value26 = (void*)0;
        __freed_obj__ = 0;
        it_18=self->head;
        while(_while_condtional5=it_18!=((void*)0),        _while_condtional5) {
            list$1sNodeph_add(result_17,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=sNode_clone(it_18->item)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { right_value31 = come_decrement_ref_count(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value31, right_value31 = (void*)0;
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
right_value27 = (void*)0;
memset(&litem_19, 0, sizeof(struct list_item$1sNodeph*));
right_value28 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value29 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
                if(_if_conditional30=self->len==0,                _if_conditional30) {
                    litem_19=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                    if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value27, right_value27 = (void*)0;
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
                        litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value28, right_value28 = (void*)0;
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
                        litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                        if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value29, right_value29 = (void*)0;
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
right_value30 = (void*)0;
memset(&result_22, 0, sizeof(struct sNode*));
                if(_if_conditional32=self==(void*)0,                _if_conditional32) {
                    __result18__ = __result_obj__ = (void*)0;
                    return __result18__;
                }
                result_22=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
                if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { right_value30 = come_decrement_ref_count(right_value30, ((struct sNode*)right_value30)->finalize, ((struct sNode*)right_value30)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value30, right_value30 = (void*)0;
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
right_value34 = (void*)0;
    __result23__ = __result_obj__ = ((char*)(right_value34=__builtin_string("sSStringNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
    if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { right_value34 = come_decrement_ref_count(right_value34, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value34, right_value34 = (void*)0;
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
void* right_value40;
_Bool _if_conditional69;
struct sType* obj_type_35;
_Bool _if_conditional70;
struct sType* obj_type2_36;
void* right_value41;
void* right_value42;
char* __dec_obj19;
void* right_value43;
void* right_value44;
struct buffer* buf2_37;
void* right_value45;
void* right_value46;
struct sType* type_38;
void* right_value47;
void* right_value48;
char* c_value_39;
void* right_value49;
void* right_value50;
struct sType* type2_40;
void* right_value51;
char* __dec_obj20;
void* right_value52;
char* __dec_obj21;
void* right_value80;
struct sType* __dec_obj41;
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value35 = (void*)0;
memset(&come_value_23, 0, sizeof(struct CVALUE*));
right_value36 = (void*)0;
right_value37 = (void*)0;
memset(&buf_24, 0, sizeof(struct buffer*));
memset(&o2_saved_25, 0, sizeof(struct list$1sNodeph*));
memset(&it_28, 0, sizeof(struct sNode*));
right_value38 = (void*)0;
memset(&come_value_31, 0, sizeof(struct CVALUE*));
right_value39 = (void*)0;
memset(&method_name_32, 0, sizeof(char*));
right_value40 = (void*)0;
memset(&obj_type_35, 0, sizeof(struct sType*));
memset(&obj_type2_36, 0, sizeof(struct sType*));
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value44 = (void*)0;
memset(&buf2_37, 0, sizeof(struct buffer*));
right_value45 = (void*)0;
right_value46 = (void*)0;
memset(&type_38, 0, sizeof(struct sType*));
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&c_value_39, 0, sizeof(char*));
right_value49 = (void*)0;
right_value50 = (void*)0;
memset(&type2_40, 0, sizeof(struct sType*));
right_value51 = (void*)0;
right_value52 = (void*)0;
right_value80 = (void*)0;
    come_value_23=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value35=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 109, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
    if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value35, right_value35 = (void*)0;
    __freed_obj__ = 0;
    buf_24=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value37=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 111, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
    if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value36, right_value36 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value37);
    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value37, right_value37 = (void*)0;
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
            __right_value_freed_obj[0] = right_value38, right_value38 = (void*)0;
            __freed_obj__ = 0;
            dec_stack_ptr(1,info);
            method_name_32=(char*)come_increment_ref_count(((char*)(right_value39=create_method_name(come_value_31->type,(_Bool)0,"to_string",info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { right_value39 = come_decrement_ref_count(right_value39, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value39, right_value39 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional69=((struct sFun*)(right_value40=map$2charphsFunph_at(info->funcs,method_name_32,((void*)0))))==((void*)0),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40),
            (right_value40 && right_value40 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sFun_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value40, right_value40 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional69) {
                obj_type_35=come_value_31->type->mNoSolvedGenericsType->v1;
                if(_if_conditional70=obj_type_35&&list$1sTypeph_length(obj_type_35->mGenericsTypes)>0,                _if_conditional70) {
                    obj_type2_36=come_value_31->type;
                    __dec_obj19=method_name_32;
                    method_name_32=(char*)come_increment_ref_count(((char*)(right_value42=make_generics_function(obj_type2_36,(char*)come_increment_ref_count(((char*)(right_value41=__builtin_string("to_string")))),info))));
                    if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
                    if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value41, right_value41 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value42);
                    if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value42, right_value42 = (void*)0;
                    __freed_obj__ = 0;
                }
                else {
                    err_msg(info,"require to_string implementation(%s)",come_value_31->type->mClass->mName);
                    exit(1);
                }
            }
            buf2_37=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 140, "struct buffer"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43, right_value43 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value44);
            if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value44, right_value44 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(buf2_37,method_name_32);
            buffer_append_str(buf2_37,"(");
            buffer_append_str(buf2_37,come_value_31->c_value);
            buffer_append_str(buf2_37,")");
            type_38=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value45=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 147, "struct sType")))),"char*",(_Bool)0,info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
            if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value45, right_value45 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
            if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value46, right_value46 = (void*)0;
            __freed_obj__ = 0;
            type_38->mHeap=(_Bool)1;
            c_value_39=(char*)come_increment_ref_count(((char*)(right_value48=append_object_to_right_values(((char*)(right_value47=buffer_to_string(buf2_37))),(struct sType*)come_increment_ref_count(type_38),info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
            if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value47, right_value47 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value48);
            if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value48, right_value48 = (void*)0;
            __freed_obj__ = 0;
            buffer_append_str(buf_24,",");
            buffer_append_str(buf_24,c_value_39);
            if(come_value_31 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_31, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(method_name_32 && !__freed_obj__) { method_name_32 = come_decrement_ref_count(method_name_32, (void*)0, (void*)0, 0, 0, 0); }
            if(buf2_37 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf2_37, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_38 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_38, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(c_value_39 && !__freed_obj__) { c_value_39 = come_decrement_ref_count(c_value_39, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(o2_saved_25 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,o2_saved_25, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    buffer_append_str(buf_24,")");
    type2_40=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value49=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 159, "struct sType")))),"char*",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
    if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value49, right_value49 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value50);
    if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value50, right_value50 = (void*)0;
    __freed_obj__ = 0;
    type2_40->mHeap=(_Bool)1;
    __dec_obj20=come_value_23->c_value;
    come_value_23->c_value=(char*)come_increment_ref_count(((char*)(right_value51=buffer_to_string(buf_24))));
    if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
    if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value51, right_value51 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj21=come_value_23->c_value;
    come_value_23->c_value=(char*)come_increment_ref_count(((char*)(right_value52=append_object_to_right_values(come_value_23->c_value,(struct sType*)come_increment_ref_count(type2_40),info))));
    if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
    if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value52, right_value52 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj41=come_value_23->type;
    come_value_23->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(type2_40))));
    if(__dec_obj41) { come_call_finalizer(sType_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value80, right_value80 = (void*)0;
    __freed_obj__ = 0;
    come_value_23->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_23));
    add_come_last_code(info,"%s;\n",come_value_23->c_value);
    __result50__ = (_Bool)1;
    if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_40, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result50__;
    if(come_value_23 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_23, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_24 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_24, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_40 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_40, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional51;
struct sFun* __result33__;
_Bool _if_conditional67;
_Bool _if_conditional68;
struct sFun* __result34__;
struct sFun* __result35__;
struct sFun* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_33, 0, sizeof(unsigned int));
memset(&it_34, 0, sizeof(unsigned int));
                hash_33=string_get_hash_key(((char*)key))%self->size;
                it_34=hash_33;
                while(_while_condtional6=(_Bool)1,                _while_condtional6) {
                    if(_if_conditional50=self->item_existance[it_34],                    _if_conditional50) {
                        if(_if_conditional51=string_equals(self->keys[it_34],key),                        _if_conditional51) {
                            __result33__ = __result_obj__ = self->items[it_34];
                            if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result33__;
                        }
                        it_34++;
                        if(_if_conditional67=it_34>=self->size,                        _if_conditional67) {
                            it_34=0;
                        }
                        else {
                            if(_if_conditional68=it_34==hash_33,                            _if_conditional68) {
                                __result34__ = __result_obj__ = default_value;
                                if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result34__;
                            }
                        }
                    }
                    else {
                        __result35__ = __result_obj__ = default_value;
                        if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result35__;
                    }
                }
                __result36__ = __result_obj__ = default_value;
                if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result36__;
                if(default_value && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional52;
_Bool _if_conditional53;
_Bool _if_conditional54;
_Bool _if_conditional55;
_Bool _if_conditional56;
_Bool _if_conditional57;
_Bool _if_conditional58;
_Bool _if_conditional61;
_Bool _if_conditional62;
_Bool _if_conditional63;
_Bool _if_conditional64;
_Bool _if_conditional65;
_Bool _if_conditional66;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional52=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional52) {
                                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional53) {
                                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional54=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional54) {
                                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional55=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional55) {
                                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional56=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional56) {
                                    if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional57=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional57) {
                                    if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional58=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional58) {
                                    if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional61=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional61) {
                                    if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional62=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional62) {
                                    if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional63=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional63) {
                                    if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional64=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional64) {
                                    if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional65=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional65) {
                                    if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional66=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional66) {
                                    if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional59;
_Bool _if_conditional60;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional59=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional59) {
                                            if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional60=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional60) {
                                            if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __result37__ = self->len;
                    return __result37__;
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional71;
struct sType* __result38__;
void* right_value53;
struct sType* result_41;
_Bool _if_conditional72;
_Bool _if_conditional73;
void* right_value56;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional77;
void* right_value57;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional78;
void* right_value58;
char* __dec_obj25;
_Bool _if_conditional79;
void* right_value65;
struct list$1sTypeph* __dec_obj29;
_Bool _if_conditional83;
void* right_value66;
struct list$1sNodeph* __dec_obj30;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value67;
struct list$1sTypeph* __dec_obj31;
_Bool _if_conditional86;
void* right_value74;
struct list$1charph* __dec_obj35;
_Bool _if_conditional90;
void* right_value75;
struct tuple1$1sTypeph* __dec_obj36;
_Bool _if_conditional91;
_Bool _if_conditional92;
void* right_value76;
struct sNode* __dec_obj37;
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
void* right_value77;
struct sNode* __dec_obj38;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional119;
void* right_value78;
char* __dec_obj39;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
_Bool _if_conditional127;
_Bool _if_conditional128;
void* right_value79;
char* __dec_obj40;
struct sType* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value53 = (void*)0;
memset(&result_41, 0, sizeof(struct sType*));
right_value56 = (void*)0;
right_value57 = (void*)0;
right_value58 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
        if(_if_conditional71=self==(void*)0,        _if_conditional71) {
            __result38__ = __result_obj__ = (void*)0;
            return __result38__;
        }
        result_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value53=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
        if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value53, right_value53 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_41->mClass=self->mClass;
        }
        if(_if_conditional73=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional73) {
            __dec_obj23=result_41->mNoSolvedGenericsType;
            result_41->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value56=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
            if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value56, right_value56 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional77=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional77) {
            __dec_obj24=result_41->mOriginalLoadVarType;
            result_41->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj24) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
            if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value57, right_value57 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional78=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional78) {
            __dec_obj25=result_41->mGenericsName;
            result_41->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value58=string_clone(self->mGenericsName))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
            if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value58, right_value58 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional79=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional79) {
            __dec_obj29=result_41->mGenericsTypes;
            result_41->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value65=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj29) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65, right_value65 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional83=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional83) {
            __dec_obj30=result_41->mArrayNum;
            result_41->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value66=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj30) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
            if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value66, right_value66 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_41->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional85=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional85) {
            __dec_obj31=result_41->mParamTypes;
            result_41->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value67=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj31) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj31, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
            if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value67, right_value67 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional86=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional86) {
            __dec_obj35=result_41->mParamNames;
            result_41->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value74=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj35) { come_call_finalizer(list$1charph_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
            if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value74, right_value74 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional90=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional90) {
            __dec_obj36=result_41->mResultType;
            result_41->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value75=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj36) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75);
            if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value75, right_value75 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_41->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional92=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional92) {
            __dec_obj37=result_41->mAlignas;
            result_41->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNode_clone(self->mAlignas))));
            if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, ((struct sNode*)__dec_obj37)->finalize, ((struct sNode*)__dec_obj37)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { right_value76 = come_decrement_ref_count(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value76, right_value76 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_41->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            result_41->mShort=self->mShort;
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_41->mLong=self->mLong;
        }
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            result_41->mLongLong=self->mLongLong;
        }
        if(_if_conditional97=self!=((void*)0),        _if_conditional97) {
            result_41->mConstant=self->mConstant;
        }
        if(_if_conditional98=self!=((void*)0),        _if_conditional98) {
            result_41->mRegister=self->mRegister;
        }
        if(_if_conditional99=self!=((void*)0),        _if_conditional99) {
            result_41->mVolatile=self->mVolatile;
        }
        if(_if_conditional100=self!=((void*)0),        _if_conditional100) {
            result_41->mStatic=self->mStatic;
        }
        if(_if_conditional101=self!=((void*)0),        _if_conditional101) {
            result_41->mExtern=self->mExtern;
        }
        if(_if_conditional102=self!=((void*)0),        _if_conditional102) {
            result_41->mRestrict=self->mRestrict;
        }
        if(_if_conditional103=self!=((void*)0),        _if_conditional103) {
            result_41->mImmutable=self->mImmutable;
        }
        if(_if_conditional104=self!=((void*)0),        _if_conditional104) {
            result_41->mHeap=self->mHeap;
        }
        if(_if_conditional105=self!=((void*)0),        _if_conditional105) {
            result_41->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional106=self!=((void*)0),        _if_conditional106) {
            result_41->mDelegate=self->mDelegate;
        }
        if(_if_conditional107=self!=((void*)0),        _if_conditional107) {
            result_41->mShare=self->mShare;
        }
        if(_if_conditional108=self!=((void*)0),        _if_conditional108) {
            result_41->mClone=self->mClone;
        }
        if(_if_conditional109=self!=((void*)0),        _if_conditional109) {
            result_41->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional110=self!=((void*)0),        _if_conditional110) {
            result_41->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional111=self!=((void*)0),        _if_conditional111) {
            result_41->mRefference=self->mRefference;
        }
        if(_if_conditional112=self!=((void*)0),        _if_conditional112) {
            result_41->mException=self->mException;
        }
        if(_if_conditional113=self!=((void*)0),        _if_conditional113) {
            result_41->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional114=self!=((void*)0),        _if_conditional114) {
            result_41->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional115=self!=((void*)0),        _if_conditional115) {
            result_41->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional116=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional116) {
            __dec_obj38=result_41->mSizeNum;
            result_41->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value77=sNode_clone(self->mSizeNum))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, ((struct sNode*)__dec_obj38)->finalize, ((struct sNode*)__dec_obj38)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, ((struct sNode*)right_value77)->finalize, ((struct sNode*)right_value77)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value77, right_value77 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional117=self!=((void*)0),        _if_conditional117) {
            result_41->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional118=self!=((void*)0),        _if_conditional118) {
            result_41->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional119=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional119) {
            __dec_obj39=result_41->mOriginalTypeName;
            result_41->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(self->mOriginalTypeName))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value78, right_value78 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional120=self!=((void*)0),        _if_conditional120) {
            result_41->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional121=self!=((void*)0),        _if_conditional121) {
            result_41->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional122=self!=((void*)0),        _if_conditional122) {
            result_41->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional123=self!=((void*)0),        _if_conditional123) {
            result_41->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional124=self!=((void*)0),        _if_conditional124) {
            result_41->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional125=self!=((void*)0),        _if_conditional125) {
            result_41->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional126=self!=((void*)0),        _if_conditional126) {
            result_41->mInline=self->mInline;
        }
        if(_if_conditional127=self!=((void*)0),        _if_conditional127) {
            result_41->mNullValue=self->mNullValue;
        }
        if(_if_conditional128=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional128) {
            __dec_obj40=result_41->mAsmName;
            result_41->mAsmName=(char*)come_increment_ref_count(((char*)(right_value79=string_clone(self->mAsmName))));
            if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value79, right_value79 = (void*)0;
            __freed_obj__ = 0;
        }
        __result49__ = __result_obj__ = result_41;
        if(result_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_41, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result49__;
        if(result_41 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional74;
struct tuple1$1sTypeph* __result39__;
void* right_value54;
struct tuple1$1sTypeph* result_42;
_Bool _if_conditional76;
void* right_value55;
struct sType* __dec_obj22;
struct tuple1$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value54 = (void*)0;
memset(&result_42, 0, sizeof(struct tuple1$1sTypeph*));
right_value55 = (void*)0;
                if(_if_conditional74=self==(void*)0,                _if_conditional74) {
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                result_42=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value54=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54, right_value54 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional76=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional76) {
                    __dec_obj22=result_42->v1;
                    result_42->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(self->v1))));
                    if(__dec_obj22) { come_call_finalizer(sType_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                    if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value55, right_value55 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result40__ = __result_obj__ = result_42;
                if(result_42 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_42, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result40__;
                if(result_42 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,result_42, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional75;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional75=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional75) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional80;
struct list$1sTypeph* __result41__;
void* right_value59;
void* right_value60;
struct list$1sTypeph* result_43;
struct list_item$1sTypeph* it_44;
_Bool _while_condtional7;
void* right_value64;
struct list$1sTypeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value59 = (void*)0;
right_value60 = (void*)0;
memset(&result_43, 0, sizeof(struct list$1sTypeph*));
memset(&it_44, 0, sizeof(struct list_item$1sTypeph*));
right_value64 = (void*)0;
                if(_if_conditional80=self==((void*)0),                _if_conditional80) {
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                result_43=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value60=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value59=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value59, right_value59 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value60, right_value60 = (void*)0;
                __freed_obj__ = 0;
                it_44=self->head;
                while(_while_condtional7=it_44!=((void*)0),                _while_condtional7) {
                    list$1sTypeph_add(result_43,(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(it_44->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                    if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value64, right_value64 = (void*)0;
                    __freed_obj__ = 0;
                    it_44=it_44->next;
                }
                __result44__ = __result_obj__ = result_43;
                if(result_43 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result44__;
                if(result_43 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,result_43, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sTypeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result42__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result42__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional81;
void* right_value61;
struct list_item$1sTypeph* litem_45;
struct sType* __dec_obj26;
_Bool _if_conditional82;
void* right_value62;
struct list_item$1sTypeph* litem_46;
struct sType* __dec_obj27;
void* right_value63;
struct list_item$1sTypeph* litem_47;
struct sType* __dec_obj28;
struct list$1sTypeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value61 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1sTypeph*));
right_value62 = (void*)0;
memset(&litem_46, 0, sizeof(struct list_item$1sTypeph*));
right_value63 = (void*)0;
memset(&litem_47, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional81=self->len==0,                        _if_conditional81) {
                            litem_45=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value61=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
                            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value61, right_value61 = (void*)0;
                            __freed_obj__ = 0;
                            litem_45->prev=((void*)0);
                            litem_45->next=((void*)0);
                            __dec_obj26=litem_45->item;
                            litem_45->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj26) { come_call_finalizer(sType_finalize,__dec_obj26, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_45;
                            self->head=litem_45;
                        }
                        else {
                            if(_if_conditional82=self->len==1,                            _if_conditional82) {
                                litem_46=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value62=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value62, right_value62 = (void*)0;
                                __freed_obj__ = 0;
                                litem_46->prev=self->head;
                                litem_46->next=((void*)0);
                                __dec_obj27=litem_46->item;
                                litem_46->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj27) { come_call_finalizer(sType_finalize,__dec_obj27, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_46;
                                self->head->next=litem_46;
                            }
                            else {
                                litem_47=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value63=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
                                if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value63, right_value63 = (void*)0;
                                __freed_obj__ = 0;
                                litem_47->prev=self->tail;
                                litem_47->next=((void*)0);
                                __dec_obj28=litem_47->item;
                                litem_47->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail->next=litem_47;
                                self->tail=litem_47;
                            }
                        }
                        self->len++;
                        __result43__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result43__;
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
_Bool _if_conditional87;
struct list$1charph* __result45__;
void* right_value68;
void* right_value69;
struct list$1charph* result_48;
struct list_item$1charph* it_49;
_Bool _while_condtional8;
void* right_value73;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&result_48, 0, sizeof(struct list$1charph*));
memset(&it_49, 0, sizeof(struct list_item$1charph*));
right_value73 = (void*)0;
                if(_if_conditional87=self==((void*)0),                _if_conditional87) {
                    __result45__ = __result_obj__ = ((void*)0);
                    return __result45__;
                }
                result_48=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value69=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value68=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
                if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value68, right_value68 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value69);
                if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value69, right_value69 = (void*)0;
                __freed_obj__ = 0;
                it_49=self->head;
                while(_while_condtional8=it_49!=((void*)0),                _while_condtional8) {
                    list$1charph_add(result_48,(char*)come_increment_ref_count(((char*)(right_value73=string_clone(it_49->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
                    if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value73, right_value73 = (void*)0;
                    __freed_obj__ = 0;
                    it_49=it_49->next;
                }
                __result48__ = __result_obj__ = result_48;
                if(result_48 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_48, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result48__;
                if(result_48 && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,result_48, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1charph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result46__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result46__;
                    if(self && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional88;
void* right_value70;
struct list_item$1charph* litem_50;
char* __dec_obj32;
_Bool _if_conditional89;
void* right_value71;
struct list_item$1charph* litem_51;
char* __dec_obj33;
void* right_value72;
struct list_item$1charph* litem_52;
char* __dec_obj34;
struct list$1charph* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value70 = (void*)0;
memset(&litem_50, 0, sizeof(struct list_item$1charph*));
right_value71 = (void*)0;
memset(&litem_51, 0, sizeof(struct list_item$1charph*));
right_value72 = (void*)0;
memset(&litem_52, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional88=self->len==0,                        _if_conditional88) {
                            litem_50=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value70=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
                            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value70, right_value70 = (void*)0;
                            __freed_obj__ = 0;
                            litem_50->prev=((void*)0);
                            litem_50->next=((void*)0);
                            __dec_obj32=litem_50->item;
                            litem_50->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_50;
                            self->head=litem_50;
                        }
                        else {
                            if(_if_conditional89=self->len==1,                            _if_conditional89) {
                                litem_51=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value71=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
                                if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value71, right_value71 = (void*)0;
                                __freed_obj__ = 0;
                                litem_51->prev=self->head;
                                litem_51->next=((void*)0);
                                __dec_obj33=litem_51->item;
                                litem_51->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_51;
                                self->head->next=litem_51;
                            }
                            else {
                                litem_52=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value72=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
                                if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value72, right_value72 = (void*)0;
                                __freed_obj__ = 0;
                                litem_52->prev=self->tail;
                                litem_52->next=((void*)0);
                                __dec_obj34=litem_52->item;
                                litem_52->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
                                self->tail->next=litem_52;
                                self->tail=litem_52;
                            }
                        }
                        self->len++;
                        __result47__ = __result_obj__ = self;
                        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, (void*)0, (void*)0, 0, 1, 0); }
                        return __result47__;
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
int __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result51__ = self->sline;
    return __result51__;
}

char* sSStringNode_sname(struct sSStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value81;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value81 = (void*)0;
    __result52__ = __result_obj__ = ((char*)(right_value81=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value81, right_value81 = (void*)0;
    __freed_obj__ = 0;
    return __result52__;
}

struct sCharNode* sCharNode_initialize(struct sCharNode* self, int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
char* __dec_obj42;
struct sCharNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value82 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj42=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(info->sname))));
    if(__dec_obj42) { __dec_obj42 = come_decrement_ref_count(__dec_obj42, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82, right_value82 = (void*)0;
    __freed_obj__ = 0;
    __result53__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result53__;
    if(self && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result54__ = (_Bool)0;
    return __result54__;
}

char* sCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value83 = (void*)0;
    __result55__ = __result_obj__ = ((char*)(right_value83=__builtin_string("sCharNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83, right_value83 = (void*)0;
    __freed_obj__ = 0;
    return __result55__;
}

_Bool sCharNode_compile(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value84;
struct CVALUE* come_value_53;
void* right_value85;
char* __dec_obj43;
void* right_value86;
void* right_value87;
struct sType* __dec_obj44;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value84 = (void*)0;
memset(&come_value_53, 0, sizeof(struct CVALUE*));
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
    come_value_53=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 213, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value84, right_value84 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj43=come_value_53->c_value;
    come_value_53->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%d",self->value))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value85, right_value85 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj44=come_value_53->type;
    come_value_53->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 216, "struct sType")))),"char",(_Bool)0,info))));
    if(__dec_obj44) { come_call_finalizer(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value86, right_value86 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value87, right_value87 = (void*)0;
    __freed_obj__ = 0;
    come_value_53->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_53));
    add_come_last_code(info,"%s;\n",come_value_53->c_value);
    __result56__ = (_Bool)1;
    if(come_value_53 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_53, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result56__;
    if(come_value_53 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_53, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCharNode_sline(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result57__ = self->sline;
    return __result57__;
}

char* sCharNode_sname(struct sCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value88;
char* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value88 = (void*)0;
    __result58__ = __result_obj__ = ((char*)(right_value88=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88, right_value88 = (void*)0;
    __freed_obj__ = 0;
    return __result58__;
}

struct sWCharNode* sWCharNode_initialize(struct sWCharNode* self, unsigned int value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value89;
char* __dec_obj45;
struct sWCharNode* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value89 = (void*)0;
    self->value=value;
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(info->sname))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89, right_value89 = (void*)0;
    __freed_obj__ = 0;
    __result59__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result59__;
    if(self && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sWCharNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result60__ = (_Bool)0;
    return __result60__;
}

char* sWCharNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value90;
char* __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value90 = (void*)0;
    __result61__ = __result_obj__ = ((char*)(right_value90=__builtin_string("sWCharNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { right_value90 = come_decrement_ref_count(right_value90, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value90, right_value90 = (void*)0;
    __freed_obj__ = 0;
    return __result61__;
}

_Bool sWCharNode_compile(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value91;
struct CVALUE* come_value_54;
void* right_value92;
char* __dec_obj46;
void* right_value93;
void* right_value94;
struct sType* __dec_obj47;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value91 = (void*)0;
memset(&come_value_54, 0, sizeof(struct CVALUE*));
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
    come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 265, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value91, right_value91 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj46=come_value_54->c_value;
    come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("L'%lc'",self->value))));
    if(__dec_obj46) { __dec_obj46 = come_decrement_ref_count(__dec_obj46, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value92, right_value92 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj47=come_value_54->type;
    come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value93=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 268, "struct sType")))),"wchar_t",(_Bool)0,info))));
    if(__dec_obj47) { come_call_finalizer(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93, right_value93 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value94, right_value94 = (void*)0;
    __freed_obj__ = 0;
    come_value_54->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
    add_come_last_code(info,"%s;\n",come_value_54->c_value);
    __result62__ = (_Bool)1;
    if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result62__;
    if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWCharNode_sline(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result63__ = self->sline;
    return __result63__;
}

char* sWCharNode_sname(struct sWCharNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value95;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value95 = (void*)0;
    __result64__ = __result_obj__ = ((char*)(right_value95=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95, right_value95 = (void*)0;
    __freed_obj__ = 0;
    return __result64__;
}

struct sWStringNode* sWStringNode_initialize(struct sWStringNode* self, unsigned int* value, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int* __dec_obj48;
void* right_value96;
char* __dec_obj49;
struct sWStringNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value96 = (void*)0;
    __dec_obj48=self->value;
    self->value=(unsigned int*)come_increment_ref_count(value);
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    self->sline=sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(info->sname))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96, right_value96 = (void*)0;
    __freed_obj__ = 0;
    __result65__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
    return __result65__;
    if(self && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sWStringNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result66__ = (_Bool)0;
    return __result66__;
}

char* sWStringNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value97;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value97 = (void*)0;
    __result67__ = __result_obj__ = ((char*)(right_value97=__builtin_string("sWStringNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97, right_value97 = (void*)0;
    __freed_obj__ = 0;
    return __result67__;
}

_Bool sWStringNode_compile(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value98;
struct CVALUE* come_value_55;
void* right_value99;
char* __dec_obj50;
void* right_value100;
void* right_value101;
struct sType* __dec_obj51;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value98 = (void*)0;
memset(&come_value_55, 0, sizeof(struct CVALUE*));
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
    come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 317, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value98, right_value98 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj50=come_value_55->c_value;
    come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("L'%ls'",self->value))));
    if(__dec_obj50) { __dec_obj50 = come_decrement_ref_count(__dec_obj50, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value99, right_value99 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj51=come_value_55->type;
    come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 320, "struct sType")))),"wchar_t*",(_Bool)0,info))));
    if(__dec_obj51) { come_call_finalizer(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100, right_value100 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value101, right_value101 = (void*)0;
    __freed_obj__ = 0;
    come_value_55->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
    add_come_last_code(info,"%s;\n",come_value_55->c_value);
    __result68__ = (_Bool)1;
    if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result68__;
    if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sWStringNode_sline(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result69__ = self->sline;
    return __result69__;
}

char* sWStringNode_sname(struct sWStringNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value102;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value102 = (void*)0;
    __result70__ = __result_obj__ = ((char*)(right_value102=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value102, right_value102 = (void*)0;
    __freed_obj__ = 0;
    return __result70__;
}

struct sRegexNode* sRegexNode_initialize(struct sRegexNode* self, char* str, _Bool global, _Bool ignore_case, int sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
char* __dec_obj52;
void* right_value104;
char* __dec_obj53;
struct sRegexNode* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value103 = (void*)0;
right_value104 = (void*)0;
    __dec_obj52=self->str;
    self->str=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(str))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value103, right_value103 = (void*)0;
    __freed_obj__ = 0;
    self->global=global;
    self->ignore_case=ignore_case;
    self->sline=sline;
    __dec_obj53=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value104=__builtin_string(info->sname))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value104, right_value104 = (void*)0;
    __freed_obj__ = 0;
    __result71__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
    return __result71__;
    if(self && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(str && !__freed_obj__) { str = come_decrement_ref_count(str, (void*)0, (void*)0, 0, 1, 0); }
}

_Bool sRegexNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result72__ = (_Bool)0;
    return __result72__;
}

char* sRegexNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value105;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value105 = (void*)0;
    __result73__ = __result_obj__ = ((char*)(right_value105=__builtin_string("sRegexNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value105, right_value105 = (void*)0;
    __freed_obj__ = 0;
    return __result73__;
}

_Bool sRegexNode_compile(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value106;
struct CVALUE* come_value_56;
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
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value106 = (void*)0;
memset(&come_value_56, 0, sizeof(struct CVALUE*));
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
    come_value_56=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value106=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 374, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106, right_value106 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj54=come_value_56->c_value;
    come_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("charp_to_regex(\"%s\", %s, 0, %s, 0, 0, 0, 0, 0)",self->str,self->ignore_case?((char*)(right_value107=__builtin_string("1"))):((char*)(right_value108=__builtin_string("0"))),self->global?((char*)(right_value109=__builtin_string("1"))):((char*)(right_value110=__builtin_string("0")))))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107, right_value107 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value108, right_value108 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value109, right_value109 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { right_value110 = come_decrement_ref_count(right_value110, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value110, right_value110 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value111, right_value111 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj55=come_value_56->type;
    come_value_56->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value112=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 377, "struct sType")))),"come_regex",(_Bool)0,info))));
    if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
    if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value112, right_value112 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value113);
    if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value113, right_value113 = (void*)0;
    __freed_obj__ = 0;
    come_value_56->type->mPointerNum=1;
    come_value_56->type->mHeap=(_Bool)1;
    come_value_56->var=((void*)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_56));
    add_come_last_code(info,"%s;\n",come_value_56->c_value);
    __dec_obj56=come_value_56->c_value;
    come_value_56->c_value=(char*)come_increment_ref_count(((char*)(right_value114=append_object_to_right_values(come_value_56->c_value,(struct sType*)come_increment_ref_count(come_value_56->type),info))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value114);
    if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { right_value114 = come_decrement_ref_count(right_value114, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value114, right_value114 = (void*)0;
    __freed_obj__ = 0;
    __result74__ = (_Bool)1;
    if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result74__;
    if(come_value_56 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_56, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRegexNode_sline(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = self->sline;
    return __result75__;
}

char* sRegexNode_sname(struct sRegexNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value115;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value115 = (void*)0;
    __result76__ = __result_obj__ = ((char*)(right_value115=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115, right_value115 = (void*)0;
    __freed_obj__ = 0;
    return __result76__;
}

struct sListNode* sListNode_initialize(struct sListNode* self, struct list$1sNodeph* list_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj57;
void* right_value116;
char* __dec_obj58;
struct sListNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value116 = (void*)0;
    __dec_obj57=self->list_elements;
    self->list_elements=(struct list$1sNodeph*)come_increment_ref_count(list_elements);
    if(__dec_obj57) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(info->sname))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116, right_value116 = (void*)0;
    __freed_obj__ = 0;
    __result77__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result77__;
    if(self && !__freed_obj__) { come_call_finalizer(sListNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sListNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result78__ = (_Bool)0;
    return __result78__;
}

char* sListNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
char* __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value117 = (void*)0;
    __result79__ = __result_obj__ = ((char*)(right_value117=__builtin_string("sListNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117, right_value117 = (void*)0;
    __freed_obj__ = 0;
    return __result79__;
}

_Bool sListNode_compile(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* list_elements_57;
void* right_value118;
void* right_value119;
struct list$1CVALUEph* params_60;
struct sType* list_element_type_61;
struct list$1sNodeph* o2_saved_62;
struct sNode* it_63;
_Bool _for_condtionalA2;
_Bool _if_conditional137;
_Bool __result81__;
void* right_value120;
struct CVALUE* come_value_64;
void* right_value121;
struct sType* __dec_obj59;
void* right_value122;
struct sType* type_values_65;
void* right_value126;
static int list_value_num_69=0;
void* right_value127;
char* var_name_70;
void* right_value128;
struct sVar* var__71;
void* right_value129;
void* right_value130;
void* right_value131;
struct buffer* source_72;
int i_73;
struct list$1CVALUEph* o2_saved_74;
struct CVALUE* it_77;
_Bool _for_condtionalA3;
_Bool _if_conditional144;
void* right_value132;
void* right_value133;
void* right_value134;
void* right_value135;
void* right_value136;
void* right_value137;
void* right_value138;
struct sType* list_type_83;
void* right_value142;
void* right_value143;
struct sType* obj_type_87;
char* fun_name_88;
void* right_value144;
void* right_value145;
void* right_value146;
char* generics_fun_name_89;
void* right_value147;
struct sFun* fun_90;
_Bool _if_conditional149;
void* right_value148;
void* right_value149;
char* __dec_obj66;
void* right_value150;
_Bool _if_conditional150;
_Bool __result94__;
void* right_value151;
struct sType* result_type_91;
struct sType* type_92;
void* right_value152;
struct CVALUE* obj_value_93;
void* right_value153;
void* right_value154;
struct buffer* num_string_94;
void* right_value155;
struct sType* type2_95;
void* right_value156;
char* type_name_96;
void* right_value157;
void* right_value158;
char* __dec_obj67;
void* right_value159;
struct sType* type3_97;
void* right_value160;
struct sType* __dec_obj68;
void* right_value161;
char* __dec_obj69;
void* right_value162;
void* right_value163;
struct list$1CVALUEph* come_params_98;
void* right_value164;
_Bool _if_conditional153;
void* right_value165;
void* right_value166;
struct CVALUE* come_value2_102;
void* right_value167;
char* __dec_obj70;
struct sType* __dec_obj71;
void* right_value168;
struct CVALUE* come_value3_103;
void* right_value169;
char* __dec_obj72;
struct sType* __dec_obj73;
void* right_value170;
void* right_value171;
struct buffer* buf_104;
int j_105;
struct list$1CVALUEph* o2_saved_106;
struct CVALUE* it_107;
_Bool _for_condtionalA4;
_Bool _if_conditional154;
void* right_value172;
struct CVALUE* come_value4_108;
void* right_value173;
char* __dec_obj74;
_Bool _if_conditional155;
void* right_value174;
void* right_value175;
char* __dec_obj75;
void* right_value176;
struct sType* __dec_obj76;
void* right_value177;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&list_elements_57, 0, sizeof(struct list$1sNodeph*));
right_value118 = (void*)0;
right_value119 = (void*)0;
memset(&params_60, 0, sizeof(struct list$1CVALUEph*));
memset(&list_element_type_61, 0, sizeof(struct sType*));
memset(&o2_saved_62, 0, sizeof(struct list$1sNodeph*));
memset(&it_63, 0, sizeof(struct sNode*));
right_value120 = (void*)0;
memset(&come_value_64, 0, sizeof(struct CVALUE*));
right_value121 = (void*)0;
right_value122 = (void*)0;
memset(&type_values_65, 0, sizeof(struct sType*));
right_value126 = (void*)0;
right_value127 = (void*)0;
memset(&var_name_70, 0, sizeof(char*));
right_value128 = (void*)0;
memset(&var__71, 0, sizeof(struct sVar*));
right_value129 = (void*)0;
right_value130 = (void*)0;
right_value131 = (void*)0;
memset(&source_72, 0, sizeof(struct buffer*));
memset(&i_73, 0, sizeof(int));
memset(&o2_saved_74, 0, sizeof(struct list$1CVALUEph*));
memset(&it_77, 0, sizeof(struct CVALUE*));
right_value132 = (void*)0;
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
right_value138 = (void*)0;
memset(&list_type_83, 0, sizeof(struct sType*));
right_value142 = (void*)0;
right_value143 = (void*)0;
memset(&obj_type_87, 0, sizeof(struct sType*));
memset(&fun_name_88, 0, sizeof(char*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
memset(&generics_fun_name_89, 0, sizeof(char*));
right_value147 = (void*)0;
memset(&fun_90, 0, sizeof(struct sFun*));
right_value148 = (void*)0;
right_value149 = (void*)0;
right_value150 = (void*)0;
right_value151 = (void*)0;
memset(&result_type_91, 0, sizeof(struct sType*));
memset(&type_92, 0, sizeof(struct sType*));
right_value152 = (void*)0;
memset(&obj_value_93, 0, sizeof(struct CVALUE*));
right_value153 = (void*)0;
right_value154 = (void*)0;
memset(&num_string_94, 0, sizeof(struct buffer*));
right_value155 = (void*)0;
memset(&type2_95, 0, sizeof(struct sType*));
right_value156 = (void*)0;
memset(&type_name_96, 0, sizeof(char*));
right_value157 = (void*)0;
right_value158 = (void*)0;
right_value159 = (void*)0;
memset(&type3_97, 0, sizeof(struct sType*));
right_value160 = (void*)0;
right_value161 = (void*)0;
right_value162 = (void*)0;
right_value163 = (void*)0;
memset(&come_params_98, 0, sizeof(struct list$1CVALUEph*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
memset(&come_value2_102, 0, sizeof(struct CVALUE*));
right_value167 = (void*)0;
right_value168 = (void*)0;
memset(&come_value3_103, 0, sizeof(struct CVALUE*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
memset(&buf_104, 0, sizeof(struct buffer*));
memset(&j_105, 0, sizeof(int));
memset(&o2_saved_106, 0, sizeof(struct list$1CVALUEph*));
memset(&it_107, 0, sizeof(struct CVALUE*));
right_value172 = (void*)0;
memset(&come_value4_108, 0, sizeof(struct CVALUE*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
    list_elements_57=self->list_elements;
    params_60=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value119=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value118=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 432, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118, right_value118 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value119, right_value119 = (void*)0;
    __freed_obj__ = 0;
    for(
    o2_saved_62=(list_elements_57),it_63=list$1sNodeph_begin((o2_saved_62)) ,    0;    _for_condtionalA2=    !list$1sNodeph_end((o2_saved_62)) ,    _for_condtionalA2;    it_63=list$1sNodeph_next((o2_saved_62)) ,    0    ){
        if(_if_conditional137=!node_compile(it_63,info),        _if_conditional137) {
            __result81__ = (_Bool)0;
            if(params_60 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result81__;
        }
        come_value_64=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
        if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value120, right_value120 = (void*)0;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(params_60,(struct CVALUE*)come_increment_ref_count(come_value_64));
        __dec_obj59=list_element_type_61;
        list_element_type_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(come_value_64->type))));
        if(__dec_obj59) { come_call_finalizer(sType_finalize,__dec_obj59, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value121, right_value121 = (void*)0;
        __freed_obj__ = 0;
        if(come_value_64 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_64, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_values_65=(struct sType*)come_increment_ref_count(((struct sType*)(right_value122=sType_clone(list_element_type_61))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122, right_value122 = (void*)0;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(type_values_65->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=create_int_node(list$1CVALUEph_length(params_60),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value126, right_value126 = (void*)0;
    __freed_obj__ = 0;
    type_values_65->mHeap=(_Bool)0;
    var_name_70=(char*)come_increment_ref_count(((char*)(right_value127=xsprintf("__list_values%d__",++list_value_num_69))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127, right_value127 = (void*)0;
    __freed_obj__ = 0;
    add_variable_to_table(var_name_70,(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_clone(type_values_65)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value128, right_value128 = (void*)0;
    __freed_obj__ = 0;
    var__71=get_variable_from_table(info->lv_table,var_name_70);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value129=make_define_var(type_values_65,var__71->mCValueName,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value129, right_value129 = (void*)0;
    __freed_obj__ = 0;
    source_72=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value131=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value130=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 461, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value130, right_value130 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value131, right_value131 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(source_72,"{");
    i_73=0;
    for(
    o2_saved_74=(struct list$1CVALUEph*)come_increment_ref_count((params_60)),it_77=list$1CVALUEph_begin((o2_saved_74)) ,    0;    _for_condtionalA3=    !list$1CVALUEph_end((o2_saved_74)) ,    _for_condtionalA3;    it_77=list$1CVALUEph_next((o2_saved_74)) ,    0    ){
        if(_if_conditional144=list_element_type_61->mHeap,        _if_conditional144) {
            buffer_append_str(source_72,((char*)(right_value133=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__71->mCValueName,i_73,((struct CVALUE*)(right_value132=list$1CVALUEphp_operator_load_element(params_60,i_73)))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
            if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value132, right_value132 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value133);
            if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value133, right_value133 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(source_72,((char*)(right_value135=xsprintf("%s[%d]=%s;\n",var__71->mCValueName,i_73,((struct CVALUE*)(right_value134=list$1CVALUEphp_operator_load_element(params_60,i_73)))->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
            if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value134, right_value134 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value135);
            if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value135, right_value135 = (void*)0;
            __freed_obj__ = 0;
        }
        i_73++;
    }
    if(o2_saved_74 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(source_72,"}");
    add_come_code(info,"%s",((char*)(right_value136=buffer_to_string(source_72))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136, right_value136 = (void*)0;
    __freed_obj__ = 0;
    list_type_83=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value137=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 480, "struct sType")))),"list",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value137, right_value137 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value138, right_value138 = (void*)0;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(list_type_83->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value142=sType_clone(list_element_type_61)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value142, right_value142 = (void*)0;
    __freed_obj__ = 0;
    obj_type_87=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(list_type_83))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
    if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value143, right_value143 = (void*)0;
    __freed_obj__ = 0;
    fun_name_88="initialize_with_values";
    generics_fun_name_89=(char*)come_increment_ref_count(((char*)(right_value146=string_to_string(((char*)(right_value145=make_generics_function(obj_type_87,(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(fun_name_88)))),info)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value144, right_value144 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value145, right_value145 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value146, right_value146 = (void*)0;
    __freed_obj__ = 0;
    fun_90=((struct sFun*)(right_value147=map$2charphsFunph_at(info->funcs,generics_fun_name_89,((void*)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147, right_value147 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional149=fun_90==((void*)0),    _if_conditional149) {
        __dec_obj66=generics_fun_name_89;
        generics_fun_name_89=(char*)come_increment_ref_count(((char*)(right_value149=create_method_name(obj_type_87,(_Bool)0,((char*)(right_value148=__builtin_string(fun_name_88))),info))));
        if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
        if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value148, right_value148 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value149);
        if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value149, right_value149 = (void*)0;
        __freed_obj__ = 0;
        fun_90=((struct sFun*)(right_value150=map$2charphsFunph_at(info->funcs,generics_fun_name_89,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
        if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value150, right_value150 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional150=fun_90==((void*)0),        _if_conditional150) {
            err_msg(info,"function not found(%s) at method(%s)(1)\n",generics_fun_name_89,info->come_fun->mName);
            __result94__ = (_Bool)1;
            if(params_60 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_60, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_element_type_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_61, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_values_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_65, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_70 && !__freed_obj__) { var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, 0); }
            if(source_72 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_72, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(list_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_89 && !__freed_obj__) { generics_fun_name_89 = come_decrement_ref_count(generics_fun_name_89, (void*)0, (void*)0, 0, 0, 0); }
            return __result94__;
        }
    }
    result_type_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(fun_90->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value151, right_value151 = (void*)0;
    __freed_obj__ = 0;
    result_type_91->mStatic=(_Bool)0;
    type_92=list_type_83;
    obj_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 506, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value152, right_value152 = (void*)0;
    __freed_obj__ = 0;
    num_string_94=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value154=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value153=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 508, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
    if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value153, right_value153 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value154, right_value154 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(num_string_94,"1");
    type2_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=solve_generics(type_92,type_92,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value155, right_value155 = (void*)0;
    __freed_obj__ = 0;
    type_name_96=(char*)come_increment_ref_count(((char*)(right_value156=make_type_name_string(type2_95,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value156, right_value156 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj67=obj_value_93->c_value;
    obj_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_96,type_name_96,((char*)(right_value157=buffer_to_string(num_string_94))),info->sname,info->sline,type_name_96))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value157, right_value157 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value158, right_value158 = (void*)0;
    __freed_obj__ = 0;
    type3_97=(struct sType*)come_increment_ref_count(((struct sType*)(right_value159=sType_clone(type2_95))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value159, right_value159 = (void*)0;
    __freed_obj__ = 0;
    type3_97->mPointerNum++;
    type3_97->mHeap=(_Bool)1;
    type2_95->mHeap=(_Bool)1;
    __dec_obj68=obj_value_93->type;
    obj_value_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(type2_95))));
    if(__dec_obj68) { come_call_finalizer(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160, right_value160 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj69=obj_value_93->c_value;
    obj_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value161=append_object_to_right_values(obj_value_93->c_value,(struct sType*)come_increment_ref_count(type3_97),info))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { right_value161 = come_decrement_ref_count(right_value161, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161, right_value161 = (void*)0;
    __freed_obj__ = 0;
    obj_value_93->type->mPointerNum++;
    obj_value_93->var=((void*)0);
    come_params_98=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value163=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value162=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 527, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162, right_value162 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value163);
    if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value163, right_value163 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional153=((struct sType*)(right_value164=list$1sTypephp_operator_load_element(fun_90->mParamTypes,0)))->mHeap&&obj_value_93->type->mHeap,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164),
    (right_value164 && right_value164 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value164, right_value164 = (void*)0, 
    __freed_obj__ = 0, 
    _if_conditional153) {
        std_move(((struct sType*)(right_value165=list$1sTypephp_operator_load_element(fun_90->mParamTypes,0))),obj_value_93->type,obj_value_93,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value165, right_value165 = (void*)0;
        __freed_obj__ = 0;
    }
    list$1CVALUEph_push_back(come_params_98,(struct CVALUE*)come_increment_ref_count(obj_value_93));
    come_value2_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 534, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value166, right_value166 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj70=come_value2_102->c_value;
    come_value2_102->c_value=(char*)come_increment_ref_count(((char*)(right_value167=xsprintf("%d",list$1CVALUEph_length(params_60)))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value167, right_value167 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj71=come_value2_102->type;
    come_value2_102->type=((void*)0);
    if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value2_102->var=((void*)0);
    list$1CVALUEph_push_back(come_params_98,(struct CVALUE*)come_increment_ref_count(come_value2_102));
    come_value3_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 542, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value168, right_value168 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj72=come_value3_103->c_value;
    come_value3_103->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s",var__71->mCValueName))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value169, right_value169 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj73=come_value3_103->type;
    come_value3_103->type=((void*)0);
    if(__dec_obj73) { come_call_finalizer(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value3_103->var=((void*)0);
    list$1CVALUEph_push_back(come_params_98,(struct CVALUE*)come_increment_ref_count(come_value3_103));
    buf_104=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value171=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value170=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 550, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value170, right_value170 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value171, right_value171 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(buf_104,generics_fun_name_89);
    buffer_append_str(buf_104,"(");
    j_105=0;
    for(
    o2_saved_106=(struct list$1CVALUEph*)come_increment_ref_count((come_params_98)),it_107=list$1CVALUEph_begin((o2_saved_106)) ,    0;    _for_condtionalA4=    !list$1CVALUEph_end((o2_saved_106)) ,    _for_condtionalA4;    it_107=list$1CVALUEph_next((o2_saved_106)) ,    0    ){
        buffer_append_str(buf_104,it_107->c_value);
        if(_if_conditional154=j_105!=list$1CVALUEph_length(come_params_98)-1,        _if_conditional154) {
            buffer_append_str(buf_104,",");
        }
        j_105++;
    }
    if(o2_saved_106 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(buf_104,")");
    come_value4_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 567, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172, right_value172 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj74=come_value4_108->c_value;
    come_value4_108->c_value=(char*)come_increment_ref_count(((char*)(right_value173=buffer_to_string(buf_104))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
    if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value173, right_value173 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional155=result_type_91->mHeap,    _if_conditional155) {
        __dec_obj75=come_value4_108->c_value;
        come_value4_108->c_value=(char*)come_increment_ref_count(((char*)(right_value175=append_object_to_right_values(((char*)(right_value174=buffer_to_string(buf_104))),(struct sType*)come_increment_ref_count(result_type_91),info))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value174, right_value174 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value175);
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value175, right_value175 = (void*)0;
        __freed_obj__ = 0;
    }
    __dec_obj76=come_value4_108->type;
    come_value4_108->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(result_type_91))));
    if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value176, right_value176 = (void*)0;
    __freed_obj__ = 0;
    come_value4_108->type->mStatic=(_Bool)0;
    come_value4_108->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value177=buffer_to_string(buf_104))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value177, right_value177 = (void*)0;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value4_108));
    __result97__ = (_Bool)1;
    if(params_60 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_60, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_70 && !__freed_obj__) { var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, 0); }
    if(source_72 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_89 && !__freed_obj__) { generics_fun_name_89 = come_decrement_ref_count(generics_fun_name_89, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_91 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_94 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_96 && !__freed_obj__) { type_name_96 = come_decrement_ref_count(type_name_96, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_98 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_104 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_108 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result97__;
    if(params_60 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,params_60, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_element_type_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_element_type_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_values_65 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_values_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_70 && !__freed_obj__) { var_name_70 = come_decrement_ref_count(var_name_70, (void*)0, (void*)0, 0, 0, 0); }
    if(source_72 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(list_type_83 && !__freed_obj__) { come_call_finalizer(sType_finalize,list_type_83, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_87 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_89 && !__freed_obj__) { generics_fun_name_89 = come_decrement_ref_count(generics_fun_name_89, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_91 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_91, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_94 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_95 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_96 && !__freed_obj__) { type_name_96 = come_decrement_ref_count(type_name_96, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_98 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_104 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_108 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_108, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_initialize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1CVALUEph* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result80__ = __result_obj__ = self;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result80__;
        if(self && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list$1CVALUEphp_finalize(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list_item$1CVALUEph* it_58;
_Bool _while_condtional9;
struct list_item$1CVALUEph* prev_it_59;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_58, 0, sizeof(struct list_item$1CVALUEph*));
memset(&prev_it_59, 0, sizeof(struct list_item$1CVALUEph*));
            it_58=self->head;
            while(_while_condtional9=it_58!=((void*)0),            _while_condtional9) {
                prev_it_59=it_58;
                it_58=it_58->next;
                if(prev_it_59 && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,prev_it_59, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct list$1sNodeph* list$1sNodeph_push_back(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
void* right_value123;
struct list_item$1sNodeph* litem_66;
struct sNode* __dec_obj60;
_Bool _if_conditional139;
void* right_value124;
struct list_item$1sNodeph* litem_67;
struct sNode* __dec_obj61;
void* right_value125;
struct list_item$1sNodeph* litem_68;
struct sNode* __dec_obj62;
struct list$1sNodeph* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value123 = (void*)0;
memset(&litem_66, 0, sizeof(struct list_item$1sNodeph*));
right_value124 = (void*)0;
memset(&litem_67, 0, sizeof(struct list_item$1sNodeph*));
right_value125 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1sNodeph*));
        if(_if_conditional138=self->len==0,        _if_conditional138) {
            litem_66=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value123=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 282, "struct list_item$1sNodeph"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
            if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value123, right_value123 = (void*)0;
            __freed_obj__ = 0;
            litem_66->prev=((void*)0);
            litem_66->next=((void*)0);
            __dec_obj60=litem_66->item;
            litem_66->item=(struct sNode*)come_increment_ref_count(item);
            if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0); }
            self->tail=litem_66;
            self->head=litem_66;
        }
        else {
            if(_if_conditional139=self->len==1,            _if_conditional139) {
                litem_67=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value124=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 292, "struct list_item$1sNodeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
                if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value124, right_value124 = (void*)0;
                __freed_obj__ = 0;
                litem_67->prev=self->head;
                litem_67->next=((void*)0);
                __dec_obj61=litem_67->item;
                litem_67->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0); }
                self->tail=litem_67;
                self->head->next=litem_67;
            }
            else {
                litem_68=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value125=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 302, "struct list_item$1sNodeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
                if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value125, right_value125 = (void*)0;
                __freed_obj__ = 0;
                litem_68->prev=self->tail;
                litem_68->next=((void*)0);
                __dec_obj62=litem_68->item;
                litem_68->item=(struct sNode*)come_increment_ref_count(item);
                if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0); }
                self->tail->next=litem_68;
                self->tail=litem_68;
            }
        }
        self->len++;
        __result82__ = __result_obj__ = self;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
        return __result82__;
        if(item && !__freed_obj__) { item = come_decrement_ref_count(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0); } 
}

static int list$1CVALUEph_length(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result83__ = self->len;
        return __result83__;
}

static struct CVALUE* list$1CVALUEph_begin(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional140;
struct CVALUE* result_75;
struct CVALUE* __result84__;
_Bool _if_conditional141;
struct CVALUE* __result85__;
struct CVALUE* result_76;
struct CVALUE* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_75, 0, sizeof(struct CVALUE*));
memset(&result_76, 0, sizeof(struct CVALUE*));
        if(_if_conditional140=self==((void*)0),        _if_conditional140) {
            memset(&result_75,0,sizeof(struct CVALUE*));
            __result84__ = __result_obj__ = result_75;
            return __result84__;
        }
        self->it=self->head;
        if(_if_conditional141=self->it,        _if_conditional141) {
            __result85__ = __result_obj__ = self->it->item;
            return __result85__;
        }
        memset(&result_76,0,sizeof(struct CVALUE*));
        __result86__ = __result_obj__ = result_76;
        return __result86__;
}

static _Bool list$1CVALUEph_end(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result87__ = self==((void*)0)||self->it==((void*)0);
        return __result87__;
}

static struct CVALUE* list$1CVALUEph_next(struct list$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
struct CVALUE* result_78;
struct CVALUE* __result88__;
_Bool _if_conditional143;
struct CVALUE* __result89__;
struct CVALUE* result_79;
struct CVALUE* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_78, 0, sizeof(struct CVALUE*));
memset(&result_79, 0, sizeof(struct CVALUE*));
        if(_if_conditional142=self==((void*)0)||self->it==((void*)0),        _if_conditional142) {
            memset(&result_78,0,sizeof(struct CVALUE*));
            __result88__ = __result_obj__ = result_78;
            return __result88__;
        }
        self->it=self->it->next;
        if(_if_conditional143=self->it,        _if_conditional143) {
            __result89__ = __result_obj__ = self->it->item;
            return __result89__;
        }
        memset(&result_79,0,sizeof(struct CVALUE*));
        __result90__ = __result_obj__ = result_79;
        return __result90__;
}

static struct CVALUE* list$1CVALUEphp_operator_load_element(struct list$1CVALUEph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional145;
struct list_item$1CVALUEph* it_80;
int i_81;
_Bool _while_condtional10;
_Bool _if_conditional146;
struct CVALUE* __result91__;
struct CVALUE* default_value_82;
struct CVALUE* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_80, 0, sizeof(struct list_item$1CVALUEph*));
memset(&i_81, 0, sizeof(int));
memset(&default_value_82, 0, sizeof(struct CVALUE*));
                if(_if_conditional145=position<0,                _if_conditional145) {
                    position+=self->len;
                }
                it_80=self->head;
                i_81=0;
                while(_while_condtional10=it_80!=((void*)0),                _while_condtional10) {
                    if(_if_conditional146=position==i_81,                    _if_conditional146) {
                        __result91__ = __result_obj__ = it_80->item;
                        return __result91__;
                    }
                    it_80=it_80->next;
                    i_81++;
                }
                memset(&default_value_82,0,sizeof(struct CVALUE*));
                __result92__ = __result_obj__ = default_value_82;
                if(default_value_82 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_82, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result92__;
                if(default_value_82 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,default_value_82, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1sTypeph* list$1sTypeph_push_back(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional147;
void* right_value139;
struct list_item$1sTypeph* litem_84;
struct sType* __dec_obj63;
_Bool _if_conditional148;
void* right_value140;
struct list_item$1sTypeph* litem_85;
struct sType* __dec_obj64;
void* right_value141;
struct list_item$1sTypeph* litem_86;
struct sType* __dec_obj65;
struct list$1sTypeph* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value139 = (void*)0;
memset(&litem_84, 0, sizeof(struct list_item$1sTypeph*));
right_value140 = (void*)0;
memset(&litem_85, 0, sizeof(struct list_item$1sTypeph*));
right_value141 = (void*)0;
memset(&litem_86, 0, sizeof(struct list_item$1sTypeph*));
        if(_if_conditional147=self->len==0,        _if_conditional147) {
            litem_84=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value139=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 282, "struct list_item$1sTypeph"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
            if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value139, right_value139 = (void*)0;
            __freed_obj__ = 0;
            litem_84->prev=((void*)0);
            litem_84->next=((void*)0);
            __dec_obj63=litem_84->item;
            litem_84->item=(struct sType*)come_increment_ref_count(item);
            if(__dec_obj63) { come_call_finalizer(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0); }
            self->tail=litem_84;
            self->head=litem_84;
        }
        else {
            if(_if_conditional148=self->len==1,            _if_conditional148) {
                litem_85=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value140=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 292, "struct list_item$1sTypeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
                if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value140, right_value140 = (void*)0;
                __freed_obj__ = 0;
                litem_85->prev=self->head;
                litem_85->next=((void*)0);
                __dec_obj64=litem_85->item;
                litem_85->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj64) { come_call_finalizer(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_85;
                self->head->next=litem_85;
            }
            else {
                litem_86=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value141=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 302, "struct list_item$1sTypeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
                if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value141, right_value141 = (void*)0;
                __freed_obj__ = 0;
                litem_86->prev=self->tail;
                litem_86->next=((void*)0);
                __dec_obj65=litem_86->item;
                litem_86->item=(struct sType*)come_increment_ref_count(item);
                if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail->next=litem_86;
                self->tail=litem_86;
            }
        }
        self->len++;
        __result93__ = __result_obj__ = self;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result93__;
        if(item && !__freed_obj__) { come_call_finalizer(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional151;
struct list_item$1sTypeph* it_99;
int i_100;
_Bool _while_condtional11;
_Bool _if_conditional152;
struct sType* __result95__;
struct sType* default_value_101;
struct sType* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_99, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_100, 0, sizeof(int));
memset(&default_value_101, 0, sizeof(struct sType*));
        if(_if_conditional151=position<0,        _if_conditional151) {
            position+=self->len;
        }
        it_99=self->head;
        i_100=0;
        while(_while_condtional11=it_99!=((void*)0),        _while_condtional11) {
            if(_if_conditional152=position==i_100,            _if_conditional152) {
                __result95__ = __result_obj__ = it_99->item;
                return __result95__;
            }
            it_99=it_99->next;
            i_100++;
        }
        memset(&default_value_101,0,sizeof(struct sType*));
        __result96__ = __result_obj__ = default_value_101;
        if(default_value_101 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_101, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result96__;
        if(default_value_101 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sListNode_sline(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result98__ = self->sline;
    return __result98__;
}

char* sListNode_sname(struct sListNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value178;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value178 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value178=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value178, right_value178 = (void*)0;
    __freed_obj__ = 0;
    return __result99__;
}

struct sTupleNode* sTupleNode_initialize(struct sTupleNode* self, struct list$1sNodeph* tuple_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj77;
void* right_value179;
char* __dec_obj78;
struct sTupleNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value179 = (void*)0;
    __dec_obj77=self->tuple_elements;
    self->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(tuple_elements);
    if(__dec_obj77) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value179=__builtin_string(info->sname))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value179, right_value179 = (void*)0;
    __freed_obj__ = 0;
    __result100__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result100__;
    if(self && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sTupleNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result101__ = (_Bool)0;
    return __result101__;
}

char* sTupleNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value180;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value180 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value180=__builtin_string("sTupleNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180, right_value180 = (void*)0;
    __freed_obj__ = 0;
    return __result102__;
}

_Bool sTupleNode_compile(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* tuple_elements_109;
void* right_value181;
void* right_value182;
struct list$1sTypeph* tuple_types_110;
void* right_value183;
void* right_value184;
struct list$1CVALUEph* tuple_values_111;
struct list$1sNodeph* o2_saved_112;
struct sNode* it_113;
_Bool _for_condtionalA5;
_Bool _if_conditional158;
_Bool __result103__;
void* right_value185;
struct CVALUE* come_value_114;
void* right_value189;
void* right_value190;
void* right_value191;
void* right_value192;
void* right_value193;
struct sType* type_116;
struct list$1sTypeph* o2_saved_117;
struct sType* it_120;
_Bool _for_condtionalA6;
void* right_value194;
void* right_value195;
struct CVALUE* obj_value_123;
void* right_value196;
void* right_value197;
struct buffer* num_string_124;
void* right_value198;
struct sType* type2_125;
void* right_value199;
char* type_name_126;
void* right_value200;
void* right_value201;
char* __dec_obj81;
void* right_value202;
struct sType* type3_127;
void* right_value203;
struct sType* __dec_obj82;
void* right_value204;
char* __dec_obj83;
void* right_value205;
struct sType* obj_type_128;
char* fun_name_129;
void* right_value206;
void* right_value207;
void* right_value208;
char* generics_fun_name_130;
void* right_value209;
struct sFun* fun_131;
_Bool _if_conditional167;
void* right_value210;
void* right_value211;
char* __dec_obj84;
void* right_value212;
_Bool _if_conditional168;
_Bool __result113__;
void* right_value213;
struct sType* result_type_132;
void* right_value214;
void* right_value215;
struct list$1CVALUEph* come_params_133;
void* right_value216;
_Bool _if_conditional169;
void* right_value217;
int i_134;
struct list$1CVALUEph* o2_saved_135;
struct CVALUE* it_136;
_Bool _for_condtionalA7;
void* right_value218;
struct CVALUE* come_value_137;
void* right_value219;
void* right_value220;
_Bool _if_conditional170;
void* right_value221;
void* right_value222;
void* right_value223;
struct buffer* buf_138;
int j_139;
struct list$1CVALUEph* o2_saved_140;
struct CVALUE* it_141;
_Bool _for_condtionalA8;
_Bool _if_conditional171;
void* right_value224;
struct CVALUE* come_value2_142;
void* right_value225;
char* __dec_obj85;
_Bool _if_conditional172;
void* right_value226;
void* right_value227;
char* __dec_obj86;
void* right_value228;
struct sType* __dec_obj87;
void* right_value229;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&tuple_elements_109, 0, sizeof(struct list$1sNodeph*));
right_value181 = (void*)0;
right_value182 = (void*)0;
memset(&tuple_types_110, 0, sizeof(struct list$1sTypeph*));
right_value183 = (void*)0;
right_value184 = (void*)0;
memset(&tuple_values_111, 0, sizeof(struct list$1CVALUEph*));
memset(&o2_saved_112, 0, sizeof(struct list$1sNodeph*));
memset(&it_113, 0, sizeof(struct sNode*));
right_value185 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
right_value190 = (void*)0;
right_value191 = (void*)0;
right_value192 = (void*)0;
right_value193 = (void*)0;
memset(&type_116, 0, sizeof(struct sType*));
memset(&o2_saved_117, 0, sizeof(struct list$1sTypeph*));
memset(&it_120, 0, sizeof(struct sType*));
right_value194 = (void*)0;
right_value195 = (void*)0;
memset(&obj_value_123, 0, sizeof(struct CVALUE*));
right_value196 = (void*)0;
right_value197 = (void*)0;
memset(&num_string_124, 0, sizeof(struct buffer*));
right_value198 = (void*)0;
memset(&type2_125, 0, sizeof(struct sType*));
right_value199 = (void*)0;
memset(&type_name_126, 0, sizeof(char*));
right_value200 = (void*)0;
right_value201 = (void*)0;
right_value202 = (void*)0;
memset(&type3_127, 0, sizeof(struct sType*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
memset(&obj_type_128, 0, sizeof(struct sType*));
memset(&fun_name_129, 0, sizeof(char*));
right_value206 = (void*)0;
right_value207 = (void*)0;
right_value208 = (void*)0;
memset(&generics_fun_name_130, 0, sizeof(char*));
right_value209 = (void*)0;
memset(&fun_131, 0, sizeof(struct sFun*));
right_value210 = (void*)0;
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
memset(&result_type_132, 0, sizeof(struct sType*));
right_value214 = (void*)0;
right_value215 = (void*)0;
memset(&come_params_133, 0, sizeof(struct list$1CVALUEph*));
right_value216 = (void*)0;
right_value217 = (void*)0;
memset(&i_134, 0, sizeof(int));
memset(&o2_saved_135, 0, sizeof(struct list$1CVALUEph*));
memset(&it_136, 0, sizeof(struct CVALUE*));
right_value218 = (void*)0;
memset(&come_value_137, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
memset(&buf_138, 0, sizeof(struct buffer*));
memset(&j_139, 0, sizeof(int));
memset(&o2_saved_140, 0, sizeof(struct list$1CVALUEph*));
memset(&it_141, 0, sizeof(struct CVALUE*));
right_value224 = (void*)0;
memset(&come_value2_142, 0, sizeof(struct CVALUE*));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
right_value228 = (void*)0;
right_value229 = (void*)0;
    tuple_elements_109=self->tuple_elements;
    tuple_types_110=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value182=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value181=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 626, "struct list$1sTypeph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value181, right_value181 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value182, right_value182 = (void*)0;
    __freed_obj__ = 0;
    tuple_values_111=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value184=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value183=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 627, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
    if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value183, right_value183 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value184, right_value184 = (void*)0;
    __freed_obj__ = 0;
    for(
    o2_saved_112=(tuple_elements_109),it_113=list$1sNodeph_begin((o2_saved_112)) ,    0;    _for_condtionalA5=    !list$1sNodeph_end((o2_saved_112)) ,    _for_condtionalA5;    it_113=list$1sNodeph_next((o2_saved_112)) ,    0    ){
        if(_if_conditional158=!node_compile(it_113,info),        _if_conditional158) {
            __result103__ = (_Bool)0;
            if(tuple_types_110 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_110, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_111 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_111, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result103__;
        }
        come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value185=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value185, right_value185 = (void*)0;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_111,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=CVALUE_clone(come_value_114)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
        if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value189, right_value189 = (void*)0;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_110,(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(come_value_114->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
        if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value190, right_value190 = (void*)0;
        __freed_obj__ = 0;
        if(come_value_114 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    type_116=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value191=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 641, "struct sType")))),((char*)(right_value192=xsprintf("tuple%d",list$1sTypeph_length(tuple_types_110)))),(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value191, right_value191 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value192, right_value192 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value193);
    if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value193, right_value193 = (void*)0;
    __freed_obj__ = 0;
    for(
    o2_saved_117=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_110)),it_120=list$1sTypeph_begin((o2_saved_117)) ,    0;    _for_condtionalA6=    !list$1sTypeph_end((o2_saved_117)) ,    _for_condtionalA6;    it_120=list$1sTypeph_next((o2_saved_117)) ,    0    ){
        list$1sTypeph_push_back(type_116->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(it_120)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value194, right_value194 = (void*)0;
        __freed_obj__ = 0;
    }
    if(o2_saved_117 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    obj_value_123=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value195=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 647, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value195, right_value195 = (void*)0;
    __freed_obj__ = 0;
    num_string_124=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value197=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value196=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 649, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value196, right_value196 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value197, right_value197 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(num_string_124,"1");
    type2_125=(struct sType*)come_increment_ref_count(((struct sType*)(right_value198=solve_generics(type_116,type_116,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198, right_value198 = (void*)0;
    __freed_obj__ = 0;
    type_name_126=(char*)come_increment_ref_count(((char*)(right_value199=make_type_name_string(type2_125,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value199, right_value199 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj81=obj_value_123->c_value;
    obj_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_126,type_name_126,((char*)(right_value200=buffer_to_string(num_string_124))),info->sname,info->sline,type_name_126))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value200, right_value200 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { right_value201 = come_decrement_ref_count(right_value201, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value201, right_value201 = (void*)0;
    __freed_obj__ = 0;
    type3_127=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(type2_125))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202, right_value202 = (void*)0;
    __freed_obj__ = 0;
    type3_127->mPointerNum++;
    type3_127->mHeap=(_Bool)1;
    type2_125->mHeap=(_Bool)1;
    __dec_obj82=obj_value_123->type;
    obj_value_123->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(type2_125))));
    if(__dec_obj82) { come_call_finalizer(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
    if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value203, right_value203 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj83=obj_value_123->c_value;
    obj_value_123->c_value=(char*)come_increment_ref_count(((char*)(right_value204=append_object_to_right_values(obj_value_123->c_value,(struct sType*)come_increment_ref_count(type3_127),info))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value204, right_value204 = (void*)0;
    __freed_obj__ = 0;
    obj_value_123->type->mPointerNum++;
    obj_value_123->var=((void*)0);
    obj_type_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(type2_125))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value205, right_value205 = (void*)0;
    __freed_obj__ = 0;
    fun_name_129="initialize";
    generics_fun_name_130=(char*)come_increment_ref_count(((char*)(right_value208=string_to_string(((char*)(right_value207=make_generics_function(obj_type_128,(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(fun_name_129)))),info)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value206, right_value206 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value207, right_value207 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value208, right_value208 = (void*)0;
    __freed_obj__ = 0;
    fun_131=((struct sFun*)(right_value209=map$2charphsFunph_at(info->funcs,generics_fun_name_130,((void*)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value209, right_value209 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional167=fun_131==((void*)0),    _if_conditional167) {
        __dec_obj84=generics_fun_name_130;
        generics_fun_name_130=(char*)come_increment_ref_count(((char*)(right_value211=create_method_name(obj_type_128,(_Bool)0,((char*)(right_value210=__builtin_string(fun_name_129))),info))));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
        if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value210, right_value210 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { right_value211 = come_decrement_ref_count(right_value211, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value211, right_value211 = (void*)0;
        __freed_obj__ = 0;
        fun_131=((struct sFun*)(right_value212=map$2charphsFunph_at(info->funcs,generics_fun_name_130,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value212, right_value212 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional168=fun_131==((void*)0),        _if_conditional168) {
            err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_130,info->come_fun->mName);
            __result113__ = (_Bool)1;
            if(tuple_types_110 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_110, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_111 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_111, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_116 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(num_string_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_124, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type2_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_125, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(type_name_126 && !__freed_obj__) { type_name_126 = come_decrement_ref_count(type_name_126, (void*)0, (void*)0, 0, 0, 0); }
            if(type3_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_127, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_128 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_128, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_130 && !__freed_obj__) { generics_fun_name_130 = come_decrement_ref_count(generics_fun_name_130, (void*)0, (void*)0, 0, 0, 0); }
            return __result113__;
        }
    }
    result_type_132=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(fun_131->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
    if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value213, right_value213 = (void*)0;
    __freed_obj__ = 0;
    result_type_132->mStatic=(_Bool)0;
    come_params_133=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value215=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value214=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 689, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value214, right_value214 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value215, right_value215 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional169=((struct sType*)(right_value216=list$1sTypephp_operator_load_element(fun_131->mParamTypes,0)))->mHeap&&obj_value_123->type->mHeap,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216),
    (right_value216 && right_value216 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value216, right_value216 = (void*)0, 
    __freed_obj__ = 0, 
    _if_conditional169) {
        std_move(((struct sType*)(right_value217=list$1sTypephp_operator_load_element(fun_131->mParamTypes,0))),obj_value_123->type,obj_value_123,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
        if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value217, right_value217 = (void*)0;
        __freed_obj__ = 0;
    }
    list$1CVALUEph_push_back(come_params_133,(struct CVALUE*)come_increment_ref_count(obj_value_123));
    i_134=1;
    for(
    o2_saved_135=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_111)),it_136=list$1CVALUEph_begin((o2_saved_135)) ,    0;    _for_condtionalA7=    !list$1CVALUEph_end((o2_saved_135)) ,    _for_condtionalA7;    it_136=list$1CVALUEph_next((o2_saved_135)) ,    0    ){
        come_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=CVALUE_clone(it_136))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
        if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value218, right_value218 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional170=((struct sType*)(right_value219=list$1sTypephp_operator_load_element(fun_131->mParamTypes,i_134)))&&((struct sType*)(right_value220=list$1sTypephp_operator_load_element(fun_131->mParamTypes,i_134)))->mHeap&&come_value_137->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219),
        (right_value219 && right_value219 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value219, right_value219 = (void*)0, 
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value220),
        (right_value220 && right_value220 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[1] = right_value220, right_value220 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional170) {
            std_move(((struct sType*)(right_value221=list$1sTypephp_operator_load_element(fun_131->mParamTypes,i_134))),come_value_137->type,come_value_137,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
            if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value221, right_value221 = (void*)0;
            __freed_obj__ = 0;
        }
        list$1CVALUEph_push_back(come_params_133,(struct CVALUE*)come_increment_ref_count(come_value_137));
        i_134++;
        if(come_value_137 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(o2_saved_135 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    buf_138=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value223=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value222=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 708, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value222, right_value222 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value223, right_value223 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(buf_138,generics_fun_name_130);
    buffer_append_str(buf_138,"(");
    j_139=0;
    for(
    o2_saved_140=(struct list$1CVALUEph*)come_increment_ref_count((come_params_133)),it_141=list$1CVALUEph_begin((o2_saved_140)) ,    0;    _for_condtionalA8=    !list$1CVALUEph_end((o2_saved_140)) ,    _for_condtionalA8;    it_141=list$1CVALUEph_next((o2_saved_140)) ,    0    ){
        buffer_append_str(buf_138,it_141->c_value);
        if(_if_conditional171=j_139!=list$1CVALUEph_length(come_params_133)-1,        _if_conditional171) {
            buffer_append_str(buf_138,",");
        }
        j_139++;
    }
    if(o2_saved_140 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(buf_138,")");
    come_value2_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 725, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value224, right_value224 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj85=come_value2_142->c_value;
    come_value2_142->c_value=(char*)come_increment_ref_count(((char*)(right_value225=buffer_to_string(buf_138))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value225, right_value225 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional172=result_type_132->mHeap,    _if_conditional172) {
        __dec_obj86=come_value2_142->c_value;
        come_value2_142->c_value=(char*)come_increment_ref_count(((char*)(right_value227=append_object_to_right_values(((char*)(right_value226=buffer_to_string(buf_138))),(struct sType*)come_increment_ref_count(result_type_132),info))));
        if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
        if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value226, right_value226 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value227);
        if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value227, right_value227 = (void*)0;
        __freed_obj__ = 0;
    }
    __dec_obj87=come_value2_142->type;
    come_value2_142->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(result_type_132))));
    if(__dec_obj87) { come_call_finalizer(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value228, right_value228 = (void*)0;
    __freed_obj__ = 0;
    come_value2_142->type->mStatic=(_Bool)0;
    come_value2_142->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value229=buffer_to_string(buf_138))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value229, right_value229 = (void*)0;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_142));
    __result114__ = (_Bool)1;
    if(tuple_types_110 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_111 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_116 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_126 && !__freed_obj__) { type_name_126 = come_decrement_ref_count(type_name_126, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_128 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_130 && !__freed_obj__) { generics_fun_name_130 = come_decrement_ref_count(generics_fun_name_130, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_133 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_138 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result114__;
    if(tuple_types_110 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_111 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_116 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_123 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_123, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_124 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_125 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_126 && !__freed_obj__) { type_name_126 = come_decrement_ref_count(type_name_126, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_127 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_128 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_130 && !__freed_obj__) { generics_fun_name_130 = come_decrement_ref_count(generics_fun_name_130, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_132 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_133 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_138 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_142, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct CVALUE* CVALUE_clone(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional159;
struct CVALUE* __result104__;
void* right_value186;
struct CVALUE* result_115;
_Bool _if_conditional160;
void* right_value187;
char* __dec_obj79;
_Bool _if_conditional161;
void* right_value188;
struct sType* __dec_obj80;
_Bool _if_conditional162;
struct CVALUE* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value186 = (void*)0;
memset(&result_115, 0, sizeof(struct CVALUE*));
right_value187 = (void*)0;
right_value188 = (void*)0;
            if(_if_conditional159=self==(void*)0,            _if_conditional159) {
                __result104__ = __result_obj__ = (void*)0;
                return __result104__;
            }
            result_115=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "CVALUE_clone", 3, "struct CVALUE"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
            if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value186, right_value186 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional160=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional160) {
                __dec_obj79=result_115->c_value;
                result_115->c_value=(char*)come_increment_ref_count(((char*)(right_value187=string_clone(self->c_value))));
                if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
                if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value187, right_value187 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional161=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional161) {
                __dec_obj80=result_115->type;
                result_115->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value188=sType_clone(self->type))));
                if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
                if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value188, right_value188 = (void*)0;
                __freed_obj__ = 0;
            }
            if(_if_conditional162=self!=((void*)0),            _if_conditional162) {
                result_115->var=self->var;
            }
            __result105__ = __result_obj__ = result_115;
            if(result_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_115, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result105__;
            if(result_115 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,result_115, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sType* list$1sTypeph_begin(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional163;
struct sType* result_118;
struct sType* __result106__;
_Bool _if_conditional164;
struct sType* __result107__;
struct sType* result_119;
struct sType* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_118, 0, sizeof(struct sType*));
memset(&result_119, 0, sizeof(struct sType*));
        if(_if_conditional163=self==((void*)0),        _if_conditional163) {
            memset(&result_118,0,sizeof(struct sType*));
            __result106__ = __result_obj__ = result_118;
            return __result106__;
        }
        self->it=self->head;
        if(_if_conditional164=self->it,        _if_conditional164) {
            __result107__ = __result_obj__ = self->it->item;
            return __result107__;
        }
        memset(&result_119,0,sizeof(struct sType*));
        __result108__ = __result_obj__ = result_119;
        return __result108__;
}

static _Bool list$1sTypeph_end(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result109__ = self==((void*)0)||self->it==((void*)0);
        return __result109__;
}

static struct sType* list$1sTypeph_next(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional165;
struct sType* result_121;
struct sType* __result110__;
_Bool _if_conditional166;
struct sType* __result111__;
struct sType* result_122;
struct sType* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&result_121, 0, sizeof(struct sType*));
memset(&result_122, 0, sizeof(struct sType*));
        if(_if_conditional165=self==((void*)0)||self->it==((void*)0),        _if_conditional165) {
            memset(&result_121,0,sizeof(struct sType*));
            __result110__ = __result_obj__ = result_121;
            return __result110__;
        }
        self->it=self->it->next;
        if(_if_conditional166=self->it,        _if_conditional166) {
            __result111__ = __result_obj__ = self->it->item;
            return __result111__;
        }
        memset(&result_122,0,sizeof(struct sType*));
        __result112__ = __result_obj__ = result_122;
        return __result112__;
}

int sTupleNode_sline(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = self->sline;
    return __result115__;
}

char* sTupleNode_sname(struct sTupleNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value230;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value230 = (void*)0;
    __result116__ = __result_obj__ = ((char*)(right_value230=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value230, right_value230 = (void*)0;
    __freed_obj__ = 0;
    return __result116__;
}

struct sNoneNode* sNoneNode_initialize(struct sNoneNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value231;
struct sNode* __dec_obj88;
void* right_value232;
char* __dec_obj89;
struct sNoneNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value231 = (void*)0;
right_value232 = (void*)0;
    __dec_obj88=self->value;
    self->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value231=sNode_clone(value))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, ((struct sNode*)right_value231)->finalize, ((struct sNode*)right_value231)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value231, right_value231 = (void*)0;
    __freed_obj__ = 0;
    self->sline=info->sline;
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string(info->sname))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { right_value232 = come_decrement_ref_count(right_value232, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value232, right_value232 = (void*)0;
    __freed_obj__ = 0;
    __result117__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    return __result117__;
    if(self && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_none_object(struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value233;
void* right_value234;
struct sNode* _inf_value1;
struct sNoneNode* _inf_obj_value1;
void* right_value238;
struct sNode* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value238 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 773, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNoneNode*)(right_value234=sNoneNode_initialize((struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value233=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "06str.c", 773, "struct sNoneNode")))),(struct sNode*)come_increment_ref_count(exp),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNoneNode_finalize;
    _inf_value1->clone=(void*)sNoneNode_clone;
    _inf_value1->compile=(void*)sNoneNode_compile;
    _inf_value1->sline=(void*)sNoneNode_sline;
    _inf_value1->sname=(void*)sNoneNode_sname;
    _inf_value1->terminated=(void*)sNoneNode_terminated;
    _inf_value1->kind=(void*)sNoneNode_kind;
    __result120__ = __result_obj__ = ((struct sNode*)(right_value238=_inf_value1));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value233, right_value233 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value234, right_value234 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value238, right_value238 = (void*)0;
    __freed_obj__ = 0;
    return __result120__;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sNoneNode_finalize(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional175;
_Bool _if_conditional176;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional175=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional175) {
            if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional176=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional176) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sNoneNode* sNoneNode_clone(struct sNoneNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional177;
struct sNoneNode* __result118__;
void* right_value235;
struct sNoneNode* result_143;
_Bool _if_conditional178;
void* right_value236;
struct sNode* __dec_obj90;
_Bool _if_conditional179;
_Bool _if_conditional180;
void* right_value237;
char* __dec_obj91;
struct sNoneNode* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value235 = (void*)0;
memset(&result_143, 0, sizeof(struct sNoneNode*));
right_value236 = (void*)0;
right_value237 = (void*)0;
        if(_if_conditional177=self==(void*)0,        _if_conditional177) {
            __result118__ = __result_obj__ = (void*)0;
            return __result118__;
        }
        result_143=(struct sNoneNode*)come_increment_ref_count(((struct sNoneNode*)(right_value235=(struct sNoneNode*)come_calloc(1, sizeof(struct sNoneNode)*(1), "sNoneNode_clone", 3, "struct sNoneNode"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
        if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value235, right_value235 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional178=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional178) {
            __dec_obj90=result_143->value;
            result_143->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=sNode_clone(self->value))));
            if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
            if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value236, right_value236 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional179=self!=((void*)0),        _if_conditional179) {
            result_143->sline=self->sline;
        }
        if(_if_conditional180=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional180) {
            __dec_obj91=result_143->sname;
            result_143->sname=(char*)come_increment_ref_count(((char*)(right_value237=string_clone(self->sname))));
            if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
            if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value237, right_value237 = (void*)0;
            __freed_obj__ = 0;
        }
        __result119__ = __result_obj__ = result_143;
        if(result_143 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_143, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result119__;
        if(result_143 && !__freed_obj__) { come_call_finalizer(sNoneNode_finalize,result_143, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sNoneNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result121__ = (_Bool)0;
    return __result121__;
}

char* sNoneNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value239;
char* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value239 = (void*)0;
    __result122__ = __result_obj__ = ((char*)(right_value239=__builtin_string("sNoneNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value239, right_value239 = (void*)0;
    __freed_obj__ = 0;
    return __result122__;
}

_Bool sNoneNode_compile(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value240;
void* right_value241;
struct list$1sTypeph* tuple_types_144;
void* right_value242;
void* right_value243;
struct list$1CVALUEph* tuple_values_145;
_Bool _if_conditional181;
_Bool __result123__;
void* right_value244;
struct CVALUE* come_value_146;
_Bool _if_conditional182;
void* right_value248;
void* right_value249;
void* right_value250;
struct sNode* false_node_150;
_Bool _if_conditional185;
_Bool __result125__;
void* right_value251;
struct CVALUE* come_value2_151;
void* right_value252;
void* right_value253;
void* right_value254;
void* right_value255;
struct sType* type_152;
struct list$1sTypeph* o2_saved_153;
struct sType* it_154;
_Bool _for_condtionalA9;
void* right_value256;
void* right_value257;
struct CVALUE* obj_value_155;
void* right_value258;
void* right_value259;
struct buffer* num_string_156;
void* right_value260;
struct sType* type2_157;
void* right_value261;
char* type_name_158;
void* right_value262;
void* right_value263;
char* __dec_obj95;
void* right_value264;
struct sType* type3_159;
void* right_value265;
struct sType* __dec_obj96;
void* right_value266;
char* __dec_obj97;
void* right_value267;
struct sType* obj_type_160;
char* fun_name_161;
void* right_value268;
void* right_value269;
void* right_value270;
char* generics_fun_name_162;
void* right_value271;
struct sFun* fun_163;
_Bool _if_conditional186;
void* right_value272;
void* right_value273;
char* __dec_obj98;
void* right_value274;
_Bool _if_conditional187;
_Bool __result126__;
void* right_value275;
struct sType* result_type_164;
void* right_value276;
void* right_value277;
struct list$1CVALUEph* come_params_165;
void* right_value278;
_Bool _if_conditional188;
void* right_value279;
int i_166;
struct list$1CVALUEph* o2_saved_167;
struct CVALUE* it_168;
_Bool _for_condtionalA10;
void* right_value280;
struct CVALUE* come_value_169;
void* right_value281;
void* right_value282;
_Bool _if_conditional189;
void* right_value283;
void* right_value284;
void* right_value285;
struct buffer* buf_170;
int j_171;
struct list$1CVALUEph* o2_saved_172;
struct CVALUE* it_173;
_Bool _for_condtionalA11;
_Bool _if_conditional190;
void* right_value286;
struct CVALUE* come_value3_174;
void* right_value287;
char* __dec_obj99;
_Bool _if_conditional191;
void* right_value288;
void* right_value289;
char* __dec_obj100;
_Bool _if_conditional192;
void* right_value290;
void* right_value291;
void* right_value292;
void* right_value293;
char* __dec_obj101;
void* right_value294;
struct sType* __dec_obj102;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value240 = (void*)0;
right_value241 = (void*)0;
memset(&tuple_types_144, 0, sizeof(struct list$1sTypeph*));
right_value242 = (void*)0;
right_value243 = (void*)0;
memset(&tuple_values_145, 0, sizeof(struct list$1CVALUEph*));
right_value244 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
right_value248 = (void*)0;
right_value249 = (void*)0;
right_value250 = (void*)0;
memset(&false_node_150, 0, sizeof(struct sNode*));
right_value251 = (void*)0;
memset(&come_value2_151, 0, sizeof(struct CVALUE*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
memset(&type_152, 0, sizeof(struct sType*));
memset(&o2_saved_153, 0, sizeof(struct list$1sTypeph*));
memset(&it_154, 0, sizeof(struct sType*));
right_value256 = (void*)0;
right_value257 = (void*)0;
memset(&obj_value_155, 0, sizeof(struct CVALUE*));
right_value258 = (void*)0;
right_value259 = (void*)0;
memset(&num_string_156, 0, sizeof(struct buffer*));
right_value260 = (void*)0;
memset(&type2_157, 0, sizeof(struct sType*));
right_value261 = (void*)0;
memset(&type_name_158, 0, sizeof(char*));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
memset(&type3_159, 0, sizeof(struct sType*));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
memset(&obj_type_160, 0, sizeof(struct sType*));
memset(&fun_name_161, 0, sizeof(char*));
right_value268 = (void*)0;
right_value269 = (void*)0;
right_value270 = (void*)0;
memset(&generics_fun_name_162, 0, sizeof(char*));
right_value271 = (void*)0;
memset(&fun_163, 0, sizeof(struct sFun*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
memset(&result_type_164, 0, sizeof(struct sType*));
right_value276 = (void*)0;
right_value277 = (void*)0;
memset(&come_params_165, 0, sizeof(struct list$1CVALUEph*));
right_value278 = (void*)0;
right_value279 = (void*)0;
memset(&i_166, 0, sizeof(int));
memset(&o2_saved_167, 0, sizeof(struct list$1CVALUEph*));
memset(&it_168, 0, sizeof(struct CVALUE*));
right_value280 = (void*)0;
memset(&come_value_169, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
memset(&buf_170, 0, sizeof(struct buffer*));
memset(&j_171, 0, sizeof(int));
memset(&o2_saved_172, 0, sizeof(struct list$1CVALUEph*));
memset(&it_173, 0, sizeof(struct CVALUE*));
right_value286 = (void*)0;
memset(&come_value3_174, 0, sizeof(struct CVALUE*));
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value290 = (void*)0;
right_value291 = (void*)0;
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
    tuple_types_144=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value241=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value240=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 788, "struct list$1sTypeph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value240, right_value240 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value241, right_value241 = (void*)0;
    __freed_obj__ = 0;
    tuple_values_145=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value243=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value242=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 789, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242, right_value242 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value243, right_value243 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional181=!node_compile(self->value,info),    _if_conditional181) {
        __result123__ = (_Bool)0;
        if(tuple_types_144 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_144, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_145 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_145, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result123__;
    }
    come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value244, right_value244 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional182=come_value_146->type->mNoSolvedGenericsType&&come_value_146->type->mNoSolvedGenericsType->v1&&string_operator_equals(come_value_146->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional182) {
        list$1CVALUEph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_146));
    }
    else {
        list$1CVALUEph_push_back(tuple_values_145,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=CVALUE_clone(come_value_146)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
        if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value248, right_value248 = (void*)0;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_144,(struct sType*)come_increment_ref_count(((struct sType*)(right_value249=sType_clone(come_value_146->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
        if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value249, right_value249 = (void*)0;
        __freed_obj__ = 0;
        false_node_150=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value250=create_false_object(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
        if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, ((struct sNode*)right_value250)->finalize, ((struct sNode*)right_value250)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value250, right_value250 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional185=!node_compile(false_node_150,info),        _if_conditional185) {
            __result125__ = (_Bool)0;
            if(false_node_150 && !__freed_obj__) { false_node_150 = come_decrement_ref_count(false_node_150, ((struct sNode*)false_node_150)->finalize, ((struct sNode*)false_node_150)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_144 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_144, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_145 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_145, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result125__;
        }
        come_value2_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value251, right_value251 = (void*)0;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_145,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=CVALUE_clone(come_value2_151)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value252, right_value252 = (void*)0;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_144,(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(come_value2_151->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253, right_value253 = (void*)0;
        __freed_obj__ = 0;
        type_152=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value254=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 817, "struct sType")))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value254, right_value254 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value255, right_value255 = (void*)0;
        __freed_obj__ = 0;
        for(
        o2_saved_153=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_144)),it_154=list$1sTypeph_begin((o2_saved_153)) ,        0;        _for_condtionalA9=        !list$1sTypeph_end((o2_saved_153)) ,        _for_condtionalA9;        it_154=list$1sTypeph_next((o2_saved_153)) ,        0        ){
            list$1sTypeph_push_back(type_152->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value256=sType_clone(it_154)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
            if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value256, right_value256 = (void*)0;
            __freed_obj__ = 0;
        }
        if(o2_saved_153 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_153, (void*)0, (void*)0, 0, 0, 0, 0); }
        obj_value_155=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value257=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 823, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
        if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value257, right_value257 = (void*)0;
        __freed_obj__ = 0;
        num_string_156=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value259=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value258=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 825, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
        if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value258, right_value258 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value259);
        if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value259, right_value259 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(num_string_156,"1");
        type2_157=(struct sType*)come_increment_ref_count(((struct sType*)(right_value260=solve_generics(type_152,type_152,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
        if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value260, right_value260 = (void*)0;
        __freed_obj__ = 0;
        type_name_158=(char*)come_increment_ref_count(((char*)(right_value261=make_type_name_string(type2_157,(_Bool)0,(_Bool)1,(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { right_value261 = come_decrement_ref_count(right_value261, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value261, right_value261 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj95=obj_value_155->c_value;
        obj_value_155->c_value=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_158,type_name_158,((char*)(right_value262=buffer_to_string(num_string_156))),info->sname,info->sline,type_name_158))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value262, right_value262 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value263, right_value263 = (void*)0;
        __freed_obj__ = 0;
        type3_159=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(type2_157))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value264, right_value264 = (void*)0;
        __freed_obj__ = 0;
        type3_159->mPointerNum++;
        type3_159->mHeap=(_Bool)1;
        type2_157->mHeap=(_Bool)1;
        __dec_obj96=obj_value_155->type;
        obj_value_155->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(type_152))));
        if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value265, right_value265 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj97=obj_value_155->c_value;
        obj_value_155->c_value=(char*)come_increment_ref_count(((char*)(right_value266=append_object_to_right_values(obj_value_155->c_value,(struct sType*)come_increment_ref_count(type3_159),info))));
        if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
        if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value266, right_value266 = (void*)0;
        __freed_obj__ = 0;
        obj_value_155->type->mPointerNum++;
        obj_value_155->var=((void*)0);
        obj_type_160=(struct sType*)come_increment_ref_count(((struct sType*)(right_value267=sType_clone(type2_157))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
        if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value267, right_value267 = (void*)0;
        __freed_obj__ = 0;
        fun_name_161="initialize";
        generics_fun_name_162=(char*)come_increment_ref_count(((char*)(right_value270=string_to_string(((char*)(right_value269=make_generics_function(obj_type_160,(char*)come_increment_ref_count(((char*)(right_value268=__builtin_string(fun_name_161)))),info)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
        if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value268, right_value268 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value269);
        if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value269, right_value269 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value270);
        if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value270, right_value270 = (void*)0;
        __freed_obj__ = 0;
        fun_163=((struct sFun*)(right_value271=map$2charphsFunph_at(info->funcs,generics_fun_name_162,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value271, right_value271 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional186=fun_163==((void*)0),        _if_conditional186) {
            __dec_obj98=generics_fun_name_162;
            generics_fun_name_162=(char*)come_increment_ref_count(((char*)(right_value273=create_method_name(obj_type_160,(_Bool)0,((char*)(right_value272=__builtin_string(fun_name_161))),info))));
            if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
            if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value272, right_value272 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value273);
            if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value273, right_value273 = (void*)0;
            __freed_obj__ = 0;
            fun_163=((struct sFun*)(right_value274=map$2charphsFunph_at(info->funcs,generics_fun_name_162,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
            if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value274, right_value274 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional187=fun_163==((void*)0),            _if_conditional187) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_162,info->come_fun->mName);
                __result126__ = (_Bool)1;
                if(false_node_150 && !__freed_obj__) { false_node_150 = come_decrement_ref_count(false_node_150, ((struct sNode*)false_node_150)->finalize, ((struct sNode*)false_node_150)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_151 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_151, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_152 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_152, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_155 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_155, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_156 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_156, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_157 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_157, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_158 && !__freed_obj__) { type_name_158 = come_decrement_ref_count(type_name_158, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_159, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_160 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_160, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_162 && !__freed_obj__) { generics_fun_name_162 = come_decrement_ref_count(generics_fun_name_162, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_144 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_144, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_145 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_145, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result126__;
            }
        }
        result_type_164=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(fun_163->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value275, right_value275 = (void*)0;
        __freed_obj__ = 0;
        result_type_164->mStatic=(_Bool)0;
        come_params_165=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value277=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value276=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 865, "struct list$1CVALUEph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
        if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value276, right_value276 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value277);
        if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value277, right_value277 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional188=((struct sType*)(right_value278=list$1sTypephp_operator_load_element(fun_163->mParamTypes,0)))->mHeap&&obj_value_155->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278),
        (right_value278 && right_value278 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value278, right_value278 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional188) {
            std_move(((struct sType*)(right_value279=list$1sTypephp_operator_load_element(fun_163->mParamTypes,0))),obj_value_155->type,obj_value_155,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
            if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value279, right_value279 = (void*)0;
            __freed_obj__ = 0;
        }
        list$1CVALUEph_push_back(come_params_165,(struct CVALUE*)come_increment_ref_count(obj_value_155));
        i_166=1;
        for(
        o2_saved_167=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_145)),it_168=list$1CVALUEph_begin((o2_saved_167)) ,        0;        _for_condtionalA10=        !list$1CVALUEph_end((o2_saved_167)) ,        _for_condtionalA10;        it_168=list$1CVALUEph_next((o2_saved_167)) ,        0        ){
            come_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=CVALUE_clone(it_168))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
            if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value280, right_value280 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional189=((struct sType*)(right_value281=list$1sTypephp_operator_load_element(fun_163->mParamTypes,i_166)))&&((struct sType*)(right_value282=list$1sTypephp_operator_load_element(fun_163->mParamTypes,i_166)))->mHeap&&come_value_169->type->mHeap,            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281),
            (right_value281 && right_value281 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value281, right_value281 = (void*)0, 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value282),
            (right_value282 && right_value282 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value282, right_value282 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional189) {
                std_move(((struct sType*)(right_value283=list$1sTypephp_operator_load_element(fun_163->mParamTypes,i_166))),come_value_169->type,come_value_169,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
                if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value283, right_value283 = (void*)0;
                __freed_obj__ = 0;
            }
            list$1CVALUEph_push_back(come_params_165,(struct CVALUE*)come_increment_ref_count(come_value_169));
            i_166++;
            if(come_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_167 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_167, (void*)0, (void*)0, 0, 0, 0, 0); }
        buf_170=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value285=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value284=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 884, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value284, right_value284 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value285);
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value285, right_value285 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(buf_170,generics_fun_name_162);
        buffer_append_str(buf_170,"(");
        j_171=0;
        for(
        o2_saved_172=(struct list$1CVALUEph*)come_increment_ref_count((come_params_165)),it_173=list$1CVALUEph_begin((o2_saved_172)) ,        0;        _for_condtionalA11=        !list$1CVALUEph_end((o2_saved_172)) ,        _for_condtionalA11;        it_173=list$1CVALUEph_next((o2_saved_172)) ,        0        ){
            buffer_append_str(buf_170,it_173->c_value);
            if(_if_conditional190=j_171!=list$1CVALUEph_length(come_params_165)-1,            _if_conditional190) {
                buffer_append_str(buf_170,",");
            }
            j_171++;
        }
        if(o2_saved_172 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_172, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_170,")");
        come_value3_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 901, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
        if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value286, right_value286 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj99=come_value3_174->c_value;
        come_value3_174->c_value=(char*)come_increment_ref_count(((char*)(right_value287=buffer_to_string(buf_170))));
        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
        if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value287, right_value287 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional191=result_type_164->mHeap,        _if_conditional191) {
            __dec_obj100=come_value3_174->c_value;
            come_value3_174->c_value=(char*)come_increment_ref_count(((char*)(right_value289=append_object_to_right_values(((char*)(right_value288=buffer_to_string(buf_170))),(struct sType*)come_increment_ref_count(result_type_164),info))));
            if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
            if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value288, right_value288 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value289);
            if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value289, right_value289 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional192=gComeDebug,        _if_conditional192) {
            __dec_obj101=come_value3_174->c_value;
            come_value3_174->c_value=(char*)come_increment_ref_count(((char*)(right_value293=xsprintf("(come_save_stackframe(\"\%s\", \%s), \%s)",((char*)(right_value290=string_to_string(info->sname))),((char*)(right_value291=int_to_string(info->sline))),((char*)(right_value292=string_to_string(come_value3_174->c_value)))))));
            if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
            if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value290, right_value290 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value291);
            if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { right_value291 = come_decrement_ref_count(right_value291, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value291, right_value291 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value292);
            if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value292, right_value292 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value293);
            if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[3] = right_value293, right_value293 = (void*)0;
            __freed_obj__ = 0;
        }
        __dec_obj102=come_value3_174->type;
        come_value3_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(result_type_164))));
        if(__dec_obj102) { come_call_finalizer(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value294, right_value294 = (void*)0;
        __freed_obj__ = 0;
        come_value3_174->type->mStatic=(_Bool)0;
        come_value3_174->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value3_174->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value3_174));
        if(false_node_150 && !__freed_obj__) { false_node_150 = come_decrement_ref_count(false_node_150, ((struct sNode*)false_node_150)->finalize, ((struct sNode*)false_node_150)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_151 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_152 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_152, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_155 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_155, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_156 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_156, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_157 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_157, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_158 && !__freed_obj__) { type_name_158 = come_decrement_ref_count(type_name_158, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_159 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_160 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_160, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_162 && !__freed_obj__) { generics_fun_name_162 = come_decrement_ref_count(generics_fun_name_162, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_164 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_164, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_165 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_165, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_170 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_170, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result127__ = (_Bool)1;
    if(tuple_types_144 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_145 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result127__;
    if(tuple_types_144 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_145 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_146 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_add(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional183;
void* right_value245;
struct list_item$1CVALUEph* litem_147;
struct CVALUE* __dec_obj92;
_Bool _if_conditional184;
void* right_value246;
struct list_item$1CVALUEph* litem_148;
struct CVALUE* __dec_obj93;
void* right_value247;
struct list_item$1CVALUEph* litem_149;
struct CVALUE* __dec_obj94;
struct list$1CVALUEph* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value245 = (void*)0;
memset(&litem_147, 0, sizeof(struct list_item$1CVALUEph*));
right_value246 = (void*)0;
memset(&litem_148, 0, sizeof(struct list_item$1CVALUEph*));
right_value247 = (void*)0;
memset(&litem_149, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional183=self->len==0,            _if_conditional183) {
                litem_147=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value245=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 212, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
                if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value245, right_value245 = (void*)0;
                __freed_obj__ = 0;
                litem_147->prev=((void*)0);
                litem_147->next=((void*)0);
                __dec_obj92=litem_147->item;
                litem_147->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj92) { come_call_finalizer(CVALUE_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_147;
                self->head=litem_147;
            }
            else {
                if(_if_conditional184=self->len==1,                _if_conditional184) {
                    litem_148=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value246=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 222, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
                    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value246, right_value246 = (void*)0;
                    __freed_obj__ = 0;
                    litem_148->prev=self->head;
                    litem_148->next=((void*)0);
                    __dec_obj93=litem_148->item;
                    litem_148->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj93) { come_call_finalizer(CVALUE_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_148;
                    self->head->next=litem_148;
                }
                else {
                    litem_149=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value247=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 232, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
                    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value247, right_value247 = (void*)0;
                    __freed_obj__ = 0;
                    litem_149->prev=self->tail;
                    litem_149->next=((void*)0);
                    __dec_obj94=litem_149->item;
                    litem_149->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj94) { come_call_finalizer(CVALUE_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_149;
                    self->tail=litem_149;
                }
            }
            self->len++;
            __result124__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result124__;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

int sNoneNode_sline(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = self->sline;
    return __result128__;
}

char* sNoneNode_sname(struct sNoneNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value295;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value295 = (void*)0;
    __result129__ = __result_obj__ = ((char*)(right_value295=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value295, right_value295 = (void*)0;
    __freed_obj__ = 0;
    return __result129__;
}

struct sSomeNode* sSomeNode_initialize(struct sSomeNode* self, struct sNode* value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* __dec_obj103;
void* right_value296;
char* __dec_obj104;
struct sSomeNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value296 = (void*)0;
    __dec_obj103=self->value;
    self->value=(struct sNode*)come_increment_ref_count(value);
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
    self->sline=info->sline;
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string(info->sname))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value296, right_value296 = (void*)0;
    __freed_obj__ = 0;
    __result130__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
    return __result130__;
    if(self && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value && !__freed_obj__) { value = come_decrement_ref_count(value, ((struct sNode*)value)->finalize, ((struct sNode*)value)->_protocol_obj, 0, 1, 0); } 
}

struct sNode* create_some_object(struct sNode* exp, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value297;
void* right_value298;
struct sNode* _inf_value2;
struct sSomeNode* _inf_obj_value2;
void* right_value302;
struct sNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value297 = (void*)0;
right_value298 = (void*)0;
right_value302 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 955, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sSomeNode*)(right_value298=sSomeNode_initialize((struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value297=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "06str.c", 955, "struct sSomeNode")))),(struct sNode*)come_increment_ref_count(exp),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sSomeNode_finalize;
    _inf_value2->clone=(void*)sSomeNode_clone;
    _inf_value2->compile=(void*)sSomeNode_compile;
    _inf_value2->sline=(void*)sSomeNode_sline;
    _inf_value2->sname=(void*)sSomeNode_sname;
    _inf_value2->terminated=(void*)sSomeNode_terminated;
    _inf_value2->kind=(void*)sSomeNode_kind;
    __result133__ = __result_obj__ = ((struct sNode*)(right_value302=_inf_value2));
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value297, right_value297 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value298, right_value298 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, ((struct sNode*)right_value302)->finalize, ((struct sNode*)right_value302)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value302, right_value302 = (void*)0;
    __freed_obj__ = 0;
    return __result133__;
    if(exp && !__freed_obj__) { exp = come_decrement_ref_count(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0); } 
}

static void sSomeNode_finalize(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional195;
_Bool _if_conditional196;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional195=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional195) {
            if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, ((struct sNode*)self->value)->finalize, ((struct sNode*)self->value)->_protocol_obj, 0, 0, 0); } 
        }
        if(_if_conditional196=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional196) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sSomeNode* sSomeNode_clone(struct sSomeNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional197;
struct sSomeNode* __result131__;
void* right_value299;
struct sSomeNode* result_175;
_Bool _if_conditional198;
void* right_value300;
struct sNode* __dec_obj105;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value301;
char* __dec_obj106;
struct sSomeNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value299 = (void*)0;
memset(&result_175, 0, sizeof(struct sSomeNode*));
right_value300 = (void*)0;
right_value301 = (void*)0;
        if(_if_conditional197=self==(void*)0,        _if_conditional197) {
            __result131__ = __result_obj__ = (void*)0;
            return __result131__;
        }
        result_175=(struct sSomeNode*)come_increment_ref_count(((struct sSomeNode*)(right_value299=(struct sSomeNode*)come_calloc(1, sizeof(struct sSomeNode)*(1), "sSomeNode_clone", 3, "struct sSomeNode"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
        if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value299, right_value299 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional198=self!=((void*)0)&&self->value!=((void*)0),        _if_conditional198) {
            __dec_obj105=result_175->value;
            result_175->value=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value300=sNode_clone(self->value))));
            if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
            if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, ((struct sNode*)right_value300)->finalize, ((struct sNode*)right_value300)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value300, right_value300 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional199=self!=((void*)0),        _if_conditional199) {
            result_175->sline=self->sline;
        }
        if(_if_conditional200=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional200) {
            __dec_obj106=result_175->sname;
            result_175->sname=(char*)come_increment_ref_count(((char*)(right_value301=string_clone(self->sname))));
            if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
            if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { right_value301 = come_decrement_ref_count(right_value301, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value301, right_value301 = (void*)0;
            __freed_obj__ = 0;
        }
        __result132__ = __result_obj__ = result_175;
        if(result_175 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result132__;
        if(result_175 && !__freed_obj__) { come_call_finalizer(sSomeNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 0, 0); }
}

_Bool sSomeNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result134__ = (_Bool)0;
    return __result134__;
}

char* sSomeNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value303;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value303 = (void*)0;
    __result135__ = __result_obj__ = ((char*)(right_value303=__builtin_string("sSomeNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
    if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value303, right_value303 = (void*)0;
    __freed_obj__ = 0;
    return __result135__;
}

_Bool sSomeNode_compile(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value304;
void* right_value305;
struct list$1sTypeph* tuple_types_176;
void* right_value306;
void* right_value307;
struct list$1CVALUEph* tuple_values_177;
_Bool _if_conditional201;
_Bool __result136__;
void* right_value308;
struct CVALUE* come_value_178;
_Bool _if_conditional202;
struct tuple1$1sTypeph* mNoSolvedGenericsType_179;
void* right_value309;
void* right_value310;
void* right_value311;
struct sNode* true_node_180;
_Bool _if_conditional203;
_Bool __result137__;
void* right_value312;
struct CVALUE* come_value2_181;
void* right_value313;
void* right_value314;
void* right_value315;
void* right_value316;
struct sType* type_182;
struct list$1sTypeph* o2_saved_183;
struct sType* it_184;
_Bool _for_condtionalA12;
void* right_value317;
void* right_value318;
struct CVALUE* obj_value_185;
void* right_value319;
void* right_value320;
struct buffer* num_string_186;
void* right_value321;
struct sType* type2_187;
void* right_value322;
char* type_name_188;
void* right_value323;
void* right_value324;
char* __dec_obj107;
void* right_value325;
struct sType* type3_189;
void* right_value326;
struct sType* __dec_obj108;
void* right_value327;
char* __dec_obj109;
void* right_value328;
struct sType* obj_type_190;
char* fun_name_191;
void* right_value329;
void* right_value330;
void* right_value331;
char* generics_fun_name_192;
void* right_value332;
struct sFun* fun_193;
_Bool _if_conditional204;
void* right_value333;
void* right_value334;
char* __dec_obj110;
void* right_value335;
_Bool _if_conditional205;
_Bool __result138__;
void* right_value336;
struct sType* result_type_194;
void* right_value337;
void* right_value338;
struct list$1CVALUEph* come_params_195;
void* right_value339;
_Bool _if_conditional206;
void* right_value340;
int i_196;
struct list$1CVALUEph* o2_saved_197;
struct CVALUE* it_198;
_Bool _for_condtionalA13;
void* right_value341;
struct CVALUE* come_value_199;
void* right_value342;
void* right_value343;
_Bool _if_conditional207;
void* right_value344;
void* right_value345;
void* right_value346;
struct buffer* buf_200;
int j_201;
struct list$1CVALUEph* o2_saved_202;
struct CVALUE* it_203;
_Bool _for_condtionalA14;
_Bool _if_conditional208;
void* right_value347;
struct CVALUE* come_value3_204;
void* right_value348;
char* __dec_obj111;
_Bool _if_conditional209;
void* right_value349;
void* right_value350;
char* __dec_obj112;
void* right_value351;
struct sType* __dec_obj113;
void* right_value352;
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value304 = (void*)0;
right_value305 = (void*)0;
memset(&tuple_types_176, 0, sizeof(struct list$1sTypeph*));
right_value306 = (void*)0;
right_value307 = (void*)0;
memset(&tuple_values_177, 0, sizeof(struct list$1CVALUEph*));
right_value308 = (void*)0;
memset(&come_value_178, 0, sizeof(struct CVALUE*));
memset(&mNoSolvedGenericsType_179, 0, sizeof(struct tuple1$1sTypeph*));
right_value309 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&true_node_180, 0, sizeof(struct sNode*));
right_value312 = (void*)0;
memset(&come_value2_181, 0, sizeof(struct CVALUE*));
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
memset(&type_182, 0, sizeof(struct sType*));
memset(&o2_saved_183, 0, sizeof(struct list$1sTypeph*));
memset(&it_184, 0, sizeof(struct sType*));
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&obj_value_185, 0, sizeof(struct CVALUE*));
right_value319 = (void*)0;
right_value320 = (void*)0;
memset(&num_string_186, 0, sizeof(struct buffer*));
right_value321 = (void*)0;
memset(&type2_187, 0, sizeof(struct sType*));
right_value322 = (void*)0;
memset(&type_name_188, 0, sizeof(char*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&type3_189, 0, sizeof(struct sType*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
memset(&obj_type_190, 0, sizeof(struct sType*));
memset(&fun_name_191, 0, sizeof(char*));
right_value329 = (void*)0;
right_value330 = (void*)0;
right_value331 = (void*)0;
memset(&generics_fun_name_192, 0, sizeof(char*));
right_value332 = (void*)0;
memset(&fun_193, 0, sizeof(struct sFun*));
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
memset(&result_type_194, 0, sizeof(struct sType*));
right_value337 = (void*)0;
right_value338 = (void*)0;
memset(&come_params_195, 0, sizeof(struct list$1CVALUEph*));
right_value339 = (void*)0;
right_value340 = (void*)0;
memset(&i_196, 0, sizeof(int));
memset(&o2_saved_197, 0, sizeof(struct list$1CVALUEph*));
memset(&it_198, 0, sizeof(struct CVALUE*));
right_value341 = (void*)0;
memset(&come_value_199, 0, sizeof(struct CVALUE*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
memset(&buf_200, 0, sizeof(struct buffer*));
memset(&j_201, 0, sizeof(int));
memset(&o2_saved_202, 0, sizeof(struct list$1CVALUEph*));
memset(&it_203, 0, sizeof(struct CVALUE*));
right_value347 = (void*)0;
memset(&come_value3_204, 0, sizeof(struct CVALUE*));
right_value348 = (void*)0;
right_value349 = (void*)0;
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
    tuple_types_176=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value305=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value304=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "06str.c", 970, "struct list$1sTypeph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value304, right_value304 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value305);
    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value305, right_value305 = (void*)0;
    __freed_obj__ = 0;
    tuple_values_177=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value307=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value306=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 971, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value306, right_value306 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value307);
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value307, right_value307 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional201=!node_compile(self->value,info),    _if_conditional201) {
        __result136__ = (_Bool)0;
        if(tuple_types_176 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_176, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(tuple_values_177 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_177, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result136__;
    }
    come_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value308=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value308, right_value308 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    if(_if_conditional202=come_value_178->type->mNoSolvedGenericsType&&come_value_178->type->mNoSolvedGenericsType->v1&&string_operator_equals(come_value_178->type->mNoSolvedGenericsType->v1->mClass->mName,"optional"),    _if_conditional202) {
        list$1CVALUEph_add(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_178));
    }
    else {
        list$1CVALUEph_push_back(tuple_values_177,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value309=CVALUE_clone(come_value_178)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
        if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value309, right_value309 = (void*)0;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_176,(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(come_value_178->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
        if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value310, right_value310 = (void*)0;
        __freed_obj__ = 0;
        true_node_180=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=create_true_object(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { right_value311 = come_decrement_ref_count(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value311, right_value311 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional203=!node_compile(true_node_180,info),        _if_conditional203) {
            __result137__ = (_Bool)0;
            if(mNoSolvedGenericsType_179 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_179, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(true_node_180 && !__freed_obj__) { true_node_180 = come_decrement_ref_count(true_node_180, ((struct sNode*)true_node_180)->finalize, ((struct sNode*)true_node_180)->_protocol_obj, 0, 0, 0); } 
            if(tuple_types_176 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_176, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(tuple_values_177 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_177, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(come_value_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_178, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result137__;
        }
        come_value2_181=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value312, right_value312 = (void*)0;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(tuple_values_177,(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value313=CVALUE_clone(come_value2_181)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value313, right_value313 = (void*)0;
        __freed_obj__ = 0;
        list$1sTypeph_push_back(tuple_types_176,(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(come_value2_181->type)))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value314, right_value314 = (void*)0;
        __freed_obj__ = 0;
        type_182=(struct sType*)come_increment_ref_count(((struct sType*)(right_value316=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value315=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1001, "struct sType")))),"optional",(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value315, right_value315 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value316);
        if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value316, right_value316 = (void*)0;
        __freed_obj__ = 0;
        for(
        o2_saved_183=(struct list$1sTypeph*)come_increment_ref_count((tuple_types_176)),it_184=list$1sTypeph_begin((o2_saved_183)) ,        0;        _for_condtionalA12=        !list$1sTypeph_end((o2_saved_183)) ,        _for_condtionalA12;        it_184=list$1sTypeph_next((o2_saved_183)) ,        0        ){
            list$1sTypeph_push_back(type_182->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value317=sType_clone(it_184)))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317);
            if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value317, right_value317 = (void*)0;
            __freed_obj__ = 0;
        }
        if(o2_saved_183 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,o2_saved_183, (void*)0, (void*)0, 0, 0, 0, 0); }
        obj_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1007, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value318);
        if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value318, right_value318 = (void*)0;
        __freed_obj__ = 0;
        num_string_186=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value320=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value319=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1009, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319);
        if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value319, right_value319 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value320);
        if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value320, right_value320 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(num_string_186,"1");
        type2_187=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=solve_generics(type_182,type_182,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321);
        if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value321, right_value321 = (void*)0;
        __freed_obj__ = 0;
        type_name_188=(char*)come_increment_ref_count(((char*)(right_value322=make_type_name_string(type2_187,(_Bool)0,(_Bool)1,(_Bool)0,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
        if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value322, right_value322 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj107=obj_value_185->c_value;
        obj_value_185->c_value=(char*)come_increment_ref_count(((char*)(right_value324=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_188,type_name_188,((char*)(right_value323=buffer_to_string(num_string_186))),info->sname,info->sline,type_name_188))));
        if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
        if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { right_value323 = come_decrement_ref_count(right_value323, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value323, right_value323 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value324);
        if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value324, right_value324 = (void*)0;
        __freed_obj__ = 0;
        type3_189=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_clone(type2_187))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
        if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value325, right_value325 = (void*)0;
        __freed_obj__ = 0;
        type3_189->mPointerNum++;
        type3_189->mHeap=(_Bool)1;
        type2_187->mHeap=(_Bool)1;
        __dec_obj108=obj_value_185->type;
        obj_value_185->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_clone(type2_187))));
        if(__dec_obj108) { come_call_finalizer(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326);
        if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value326, right_value326 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj109=obj_value_185->c_value;
        obj_value_185->c_value=(char*)come_increment_ref_count(((char*)(right_value327=append_object_to_right_values(obj_value_185->c_value,(struct sType*)come_increment_ref_count(type3_189),info))));
        if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
        if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value327, right_value327 = (void*)0;
        __freed_obj__ = 0;
        obj_value_185->type->mPointerNum++;
        obj_value_185->var=((void*)0);
        obj_type_190=(struct sType*)come_increment_ref_count(((struct sType*)(right_value328=sType_clone(type2_187))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
        if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value328, right_value328 = (void*)0;
        __freed_obj__ = 0;
        fun_name_191="initialize";
        generics_fun_name_192=(char*)come_increment_ref_count(((char*)(right_value331=string_to_string(((char*)(right_value330=make_generics_function(obj_type_190,(char*)come_increment_ref_count(((char*)(right_value329=__builtin_string(fun_name_191)))),info)))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
        if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value329, right_value329 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value330);
        if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value330, right_value330 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value331);
        if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value331, right_value331 = (void*)0;
        __freed_obj__ = 0;
        fun_193=((struct sFun*)(right_value332=map$2charphsFunph_at(info->funcs,generics_fun_name_192,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332);
        if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value332, right_value332 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional204=fun_193==((void*)0),        _if_conditional204) {
            __dec_obj110=generics_fun_name_192;
            generics_fun_name_192=(char*)come_increment_ref_count(((char*)(right_value334=create_method_name(obj_type_190,(_Bool)0,((char*)(right_value333=__builtin_string(fun_name_191))),info))));
            if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
            if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { right_value333 = come_decrement_ref_count(right_value333, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value333, right_value333 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value334);
            if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value334, right_value334 = (void*)0;
            __freed_obj__ = 0;
            fun_193=((struct sFun*)(right_value335=map$2charphsFunph_at(info->funcs,generics_fun_name_192,((void*)0))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
            if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value335, right_value335 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional205=fun_193==((void*)0),            _if_conditional205) {
                err_msg(info,"function not found(%s) at method(%s)(2)\n",generics_fun_name_192,info->come_fun->mName);
                __result138__ = (_Bool)1;
                if(mNoSolvedGenericsType_179 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_179, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(true_node_180 && !__freed_obj__) { true_node_180 = come_decrement_ref_count(true_node_180, ((struct sNode*)true_node_180)->finalize, ((struct sNode*)true_node_180)->_protocol_obj, 0, 0, 0); } 
                if(come_value2_181 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_181, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_182 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_182, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_value_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(num_string_186 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_186, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type2_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_187, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(type_name_188 && !__freed_obj__) { type_name_188 = come_decrement_ref_count(type_name_188, (void*)0, (void*)0, 0, 0, 0); }
                if(type3_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_189, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(obj_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(generics_fun_name_192 && !__freed_obj__) { generics_fun_name_192 = come_decrement_ref_count(generics_fun_name_192, (void*)0, (void*)0, 0, 0, 0); }
                if(tuple_types_176 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_176, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(tuple_values_177 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_177, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(come_value_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_178, (void*)0, (void*)0, 0, 0, 0, 0); }
                return __result138__;
            }
        }
        result_type_194=(struct sType*)come_increment_ref_count(((struct sType*)(right_value336=sType_clone(fun_193->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
        if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value336, right_value336 = (void*)0;
        __freed_obj__ = 0;
        result_type_194->mStatic=(_Bool)0;
        come_params_195=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value338=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value337=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1049, "struct list$1CVALUEph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
        if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value337, right_value337 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value338);
        if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value338, right_value338 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional206=((struct sType*)(right_value339=list$1sTypephp_operator_load_element(fun_193->mParamTypes,0)))->mHeap&&obj_value_185->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339),
        (right_value339 && right_value339 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value339, right_value339 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional206) {
            std_move(((struct sType*)(right_value340=list$1sTypephp_operator_load_element(fun_193->mParamTypes,0))),obj_value_185->type,obj_value_185,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
            if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value340, right_value340 = (void*)0;
            __freed_obj__ = 0;
        }
        list$1CVALUEph_push_back(come_params_195,(struct CVALUE*)come_increment_ref_count(obj_value_185));
        i_196=1;
        for(
        o2_saved_197=(struct list$1CVALUEph*)come_increment_ref_count((tuple_values_177)),it_198=list$1CVALUEph_begin((o2_saved_197)) ,        0;        _for_condtionalA13=        !list$1CVALUEph_end((o2_saved_197)) ,        _for_condtionalA13;        it_198=list$1CVALUEph_next((o2_saved_197)) ,        0        ){
            come_value_199=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value341=CVALUE_clone(it_198))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value341, right_value341 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional207=((struct sType*)(right_value342=list$1sTypephp_operator_load_element(fun_193->mParamTypes,i_196)))&&((struct sType*)(right_value343=list$1sTypephp_operator_load_element(fun_193->mParamTypes,i_196)))->mHeap&&come_value_199->type->mHeap,            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value342),
            (right_value342 && right_value342 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value342, right_value342 = (void*)0, 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value343),
            (right_value343 && right_value343 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0):0,
            __right_value_freed_obj[1] = right_value343, right_value343 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional207) {
                std_move(((struct sType*)(right_value344=list$1sTypephp_operator_load_element(fun_193->mParamTypes,i_196))),come_value_199->type,come_value_199,info);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value344);
                if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value344, right_value344 = (void*)0;
                __freed_obj__ = 0;
            }
            list$1CVALUEph_push_back(come_params_195,(struct CVALUE*)come_increment_ref_count(come_value_199));
            i_196++;
            if(come_value_199 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_199, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(o2_saved_197 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_197, (void*)0, (void*)0, 0, 0, 0, 0); }
        buf_200=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value346=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value345=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1068, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
        if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value345, right_value345 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value346);
        if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value346, right_value346 = (void*)0;
        __freed_obj__ = 0;
        buffer_append_str(buf_200,generics_fun_name_192);
        buffer_append_str(buf_200,"(");
        j_201=0;
        for(
        o2_saved_202=(struct list$1CVALUEph*)come_increment_ref_count((come_params_195)),it_203=list$1CVALUEph_begin((o2_saved_202)) ,        0;        _for_condtionalA14=        !list$1CVALUEph_end((o2_saved_202)) ,        _for_condtionalA14;        it_203=list$1CVALUEph_next((o2_saved_202)) ,        0        ){
            buffer_append_str(buf_200,it_203->c_value);
            if(_if_conditional208=j_201!=list$1CVALUEph_length(come_params_195)-1,            _if_conditional208) {
                buffer_append_str(buf_200,",");
            }
            j_201++;
        }
        if(o2_saved_202 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_202, (void*)0, (void*)0, 0, 0, 0, 0); }
        buffer_append_str(buf_200,")");
        come_value3_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value347=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1085, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
        if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value347, right_value347 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj111=come_value3_204->c_value;
        come_value3_204->c_value=(char*)come_increment_ref_count(((char*)(right_value348=buffer_to_string(buf_200))));
        if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
        if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value348, right_value348 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional209=result_type_194->mHeap,        _if_conditional209) {
            __dec_obj112=come_value3_204->c_value;
            come_value3_204->c_value=(char*)come_increment_ref_count(((char*)(right_value350=append_object_to_right_values(((char*)(right_value349=buffer_to_string(buf_200))),(struct sType*)come_increment_ref_count(result_type_194),info))));
            if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
            if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { right_value349 = come_decrement_ref_count(right_value349, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value349, right_value349 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value350);
            if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { right_value350 = come_decrement_ref_count(right_value350, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value350, right_value350 = (void*)0;
            __freed_obj__ = 0;
        }
        __dec_obj113=come_value3_204->type;
        come_value3_204->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value351=sType_clone(result_type_194))));
        if(__dec_obj113) { come_call_finalizer(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value351);
        if(right_value351 && right_value351 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value351, right_value351 = (void*)0;
        __freed_obj__ = 0;
        come_value3_204->type->mStatic=(_Bool)0;
        come_value3_204->var=((void*)0);
        add_come_last_code(info,"%s;\n",((char*)(right_value352=buffer_to_string(buf_200))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value352);
        if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { right_value352 = come_decrement_ref_count(right_value352, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value352, right_value352 = (void*)0;
        __freed_obj__ = 0;
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value3_204));
        if(mNoSolvedGenericsType_179 && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,mNoSolvedGenericsType_179, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(true_node_180 && !__freed_obj__) { true_node_180 = come_decrement_ref_count(true_node_180, ((struct sNode*)true_node_180)->finalize, ((struct sNode*)true_node_180)->_protocol_obj, 0, 0, 0); } 
        if(come_value2_181 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_181, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_182 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_182, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_value_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(num_string_186 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_186, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type2_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_187, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type_name_188 && !__freed_obj__) { type_name_188 = come_decrement_ref_count(type_name_188, (void*)0, (void*)0, 0, 0, 0); }
        if(type3_189 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_189, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(obj_type_190 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_190, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(generics_fun_name_192 && !__freed_obj__) { generics_fun_name_192 = come_decrement_ref_count(generics_fun_name_192, (void*)0, (void*)0, 0, 0, 0); }
        if(result_type_194 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_194, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_params_195 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_195, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(buf_200 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_200, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value3_204 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_204, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result139__ = (_Bool)1;
    if(tuple_types_176 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_176, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_177 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result139__;
    if(tuple_types_176 && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,tuple_types_176, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(tuple_values_177 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,tuple_values_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_178, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSomeNode_sline(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result140__ = self->sline;
    return __result140__;
}

char* sSomeNode_sname(struct sSomeNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value353;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value353 = (void*)0;
    __result141__ = __result_obj__ = ((char*)(right_value353=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value353);
    if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value353, right_value353 = (void*)0;
    __freed_obj__ = 0;
    return __result141__;
}

struct sMapNode* sMapNode_initialize(struct sMapNode* self, struct list$1sNodeph* map_key_elements, struct list$1sNodeph* map_elements, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* __dec_obj114;
struct list$1sNodeph* __dec_obj115;
void* right_value354;
char* __dec_obj116;
struct sMapNode* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value354 = (void*)0;
    __dec_obj114=self->map_key_elements;
    self->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(map_key_elements);
    if(__dec_obj114) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj114, (void*)0, (void*)0, 0, 0, 0, 0); }
    __dec_obj115=self->map_elements;
    self->map_elements=(struct list$1sNodeph*)come_increment_ref_count(map_elements);
    if(__dec_obj115) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
    self->sline=info->sline;
    __dec_obj116=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string(info->sname))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value354, right_value354 = (void*)0;
    __freed_obj__ = 0;
    __result142__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result142__;
    if(self && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_key_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sMapNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result143__ = (_Bool)0;
    return __result143__;
}

char* sMapNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value355;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value355 = (void*)0;
    __result144__ = __result_obj__ = ((char*)(right_value355=__builtin_string("sMapNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
    if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value355, right_value355 = (void*)0;
    __freed_obj__ = 0;
    return __result144__;
}

_Bool sMapNode_compile(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct list$1sNodeph* map_key_elements_205;
struct list$1sNodeph* map_elements_206;
void* right_value356;
void* right_value357;
struct list$1CVALUEph* key_params_207;
void* right_value358;
void* right_value359;
struct list$1CVALUEph* element_params_208;
struct sType* map_key_type_209;
struct sType* map_element_type_210;
int i_211;
_Bool _for_condtionalA15;
void* right_value360;
struct sNode* key_elements_215;
void* right_value361;
struct sNode* elements_216;
_Bool _if_conditional215;
_Bool __result147__;
void* right_value362;
struct CVALUE* come_value_217;
_Bool _if_conditional216;
_Bool __result148__;
void* right_value363;
struct CVALUE* come_value2_218;
void* right_value364;
struct sType* __dec_obj117;
void* right_value365;
struct sType* __dec_obj118;
static int map_value_num_219=0;
void* right_value366;
struct sType* key_type_values_220;
void* right_value367;
void* right_value368;
char* var_name_221;
void* right_value369;
struct sVar* var__222;
void* right_value370;
void* right_value371;
struct sType* element_type_values_223;
void* right_value372;
void* right_value373;
char* var_name2_224;
void* right_value374;
struct sVar* var2__225;
void* right_value375;
void* right_value376;
void* right_value377;
struct buffer* source_226;
int i_227;
_Bool _for_condtionalA16;
void* right_value378;
struct CVALUE* key_param_228;
void* right_value379;
struct CVALUE* element_param_229;
_Bool _if_conditional217;
void* right_value380;
void* right_value381;
_Bool _if_conditional218;
void* right_value382;
void* right_value383;
void* right_value384;
void* right_value385;
void* right_value386;
struct sType* map_type_230;
void* right_value387;
void* right_value388;
void* right_value389;
struct sType* obj_type_231;
char* fun_name_232;
void* right_value390;
void* right_value391;
void* right_value392;
char* generics_fun_name_233;
void* right_value393;
struct sFun* fun_234;
_Bool _if_conditional219;
void* right_value394;
void* right_value395;
char* __dec_obj119;
void* right_value396;
_Bool _if_conditional220;
_Bool __result149__;
void* right_value397;
struct sType* result_type_235;
struct sType* type_236;
void* right_value398;
struct CVALUE* obj_value_237;
void* right_value399;
void* right_value400;
struct buffer* num_string_238;
void* right_value401;
struct sType* type2_239;
void* right_value402;
char* type_name_240;
void* right_value403;
void* right_value404;
char* __dec_obj120;
void* right_value405;
struct sType* type3_241;
void* right_value406;
struct sType* __dec_obj121;
void* right_value407;
char* __dec_obj122;
void* right_value408;
void* right_value409;
struct list$1CVALUEph* come_params_242;
void* right_value410;
_Bool _if_conditional221;
void* right_value411;
void* right_value412;
struct CVALUE* come_value2_243;
void* right_value413;
char* __dec_obj123;
struct sType* __dec_obj124;
void* right_value414;
struct CVALUE* come_value3_244;
void* right_value415;
char* __dec_obj125;
struct sType* __dec_obj126;
void* right_value416;
struct CVALUE* come_value4_245;
void* right_value417;
char* __dec_obj127;
struct sType* __dec_obj128;
void* right_value418;
void* right_value419;
struct buffer* buf_246;
int j_247;
struct list$1CVALUEph* o2_saved_248;
struct CVALUE* it_249;
_Bool _for_condtionalA17;
_Bool _if_conditional222;
void* right_value420;
struct CVALUE* come_value5_250;
void* right_value421;
char* __dec_obj129;
_Bool _if_conditional223;
void* right_value422;
void* right_value423;
char* __dec_obj130;
void* right_value424;
struct sType* __dec_obj131;
void* right_value425;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&map_key_elements_205, 0, sizeof(struct list$1sNodeph*));
memset(&map_elements_206, 0, sizeof(struct list$1sNodeph*));
right_value356 = (void*)0;
right_value357 = (void*)0;
memset(&key_params_207, 0, sizeof(struct list$1CVALUEph*));
right_value358 = (void*)0;
right_value359 = (void*)0;
memset(&element_params_208, 0, sizeof(struct list$1CVALUEph*));
memset(&map_key_type_209, 0, sizeof(struct sType*));
memset(&map_element_type_210, 0, sizeof(struct sType*));
memset(&i_211, 0, sizeof(int));
right_value360 = (void*)0;
memset(&key_elements_215, 0, sizeof(struct sNode*));
right_value361 = (void*)0;
memset(&elements_216, 0, sizeof(struct sNode*));
right_value362 = (void*)0;
memset(&come_value_217, 0, sizeof(struct CVALUE*));
right_value363 = (void*)0;
memset(&come_value2_218, 0, sizeof(struct CVALUE*));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
memset(&key_type_values_220, 0, sizeof(struct sType*));
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&var_name_221, 0, sizeof(char*));
right_value369 = (void*)0;
memset(&var__222, 0, sizeof(struct sVar*));
right_value370 = (void*)0;
right_value371 = (void*)0;
memset(&element_type_values_223, 0, sizeof(struct sType*));
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&var_name2_224, 0, sizeof(char*));
right_value374 = (void*)0;
memset(&var2__225, 0, sizeof(struct sVar*));
right_value375 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&source_226, 0, sizeof(struct buffer*));
memset(&i_227, 0, sizeof(int));
right_value378 = (void*)0;
memset(&key_param_228, 0, sizeof(struct CVALUE*));
right_value379 = (void*)0;
memset(&element_param_229, 0, sizeof(struct CVALUE*));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value386 = (void*)0;
memset(&map_type_230, 0, sizeof(struct sType*));
right_value387 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
memset(&obj_type_231, 0, sizeof(struct sType*));
memset(&fun_name_232, 0, sizeof(char*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value392 = (void*)0;
memset(&generics_fun_name_233, 0, sizeof(char*));
right_value393 = (void*)0;
memset(&fun_234, 0, sizeof(struct sFun*));
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&result_type_235, 0, sizeof(struct sType*));
memset(&type_236, 0, sizeof(struct sType*));
right_value398 = (void*)0;
memset(&obj_value_237, 0, sizeof(struct CVALUE*));
right_value399 = (void*)0;
right_value400 = (void*)0;
memset(&num_string_238, 0, sizeof(struct buffer*));
right_value401 = (void*)0;
memset(&type2_239, 0, sizeof(struct sType*));
right_value402 = (void*)0;
memset(&type_name_240, 0, sizeof(char*));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&type3_241, 0, sizeof(struct sType*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
memset(&come_params_242, 0, sizeof(struct list$1CVALUEph*));
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&come_value2_243, 0, sizeof(struct CVALUE*));
right_value413 = (void*)0;
right_value414 = (void*)0;
memset(&come_value3_244, 0, sizeof(struct CVALUE*));
right_value415 = (void*)0;
right_value416 = (void*)0;
memset(&come_value4_245, 0, sizeof(struct CVALUE*));
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value419 = (void*)0;
memset(&buf_246, 0, sizeof(struct buffer*));
memset(&j_247, 0, sizeof(int));
memset(&o2_saved_248, 0, sizeof(struct list$1CVALUEph*));
memset(&it_249, 0, sizeof(struct CVALUE*));
right_value420 = (void*)0;
memset(&come_value5_250, 0, sizeof(struct CVALUE*));
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
    map_key_elements_205=self->map_key_elements;
    map_elements_206=self->map_elements;
    key_params_207=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value357=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value356=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1149, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
    if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value356, right_value356 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value357);
    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value357, right_value357 = (void*)0;
    __freed_obj__ = 0;
    element_params_208=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value359=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value358=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1150, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value358);
    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value358, right_value358 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value359);
    if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value359, right_value359 = (void*)0;
    __freed_obj__ = 0;
    for(
    i_211=0 ,    0;    _for_condtionalA15=    i_211<list$1sNodeph_length(map_key_elements_205) ,    _for_condtionalA15;    i_211++ ,    0    ){
        key_elements_215=((struct sNode*)(right_value360=list$1sNodephp_operator_load_element(map_key_elements_205,i_211)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value360);
        if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value360, right_value360 = (void*)0;
        __freed_obj__ = 0;
        elements_216=((struct sNode*)(right_value361=list$1sNodephp_operator_load_element(map_elements_206,i_211)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
        if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value361, right_value361 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional215=!node_compile(key_elements_215,info),        _if_conditional215) {
            __result147__ = (_Bool)0;
            if(key_params_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_208, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result147__;
        }
        come_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value362=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
        if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value362, right_value362 = (void*)0;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(key_params_207,(struct CVALUE*)come_increment_ref_count(come_value_217));
        if(_if_conditional216=!node_compile(elements_216,info),        _if_conditional216) {
            __result148__ = (_Bool)0;
            if(come_value_217 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_217, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_params_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_208, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            return __result148__;
        }
        come_value2_218=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value363=get_value_from_stack(-1,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
        if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value363, right_value363 = (void*)0;
        __freed_obj__ = 0;
        dec_stack_ptr(1,info);
        list$1CVALUEph_push_back(element_params_208,(struct CVALUE*)come_increment_ref_count(come_value2_218));
        __dec_obj117=map_key_type_209;
        map_key_type_209=(struct sType*)come_increment_ref_count(((struct sType*)(right_value364=sType_clone(come_value_217->type))));
        if(__dec_obj117) { come_call_finalizer(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
        if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value364, right_value364 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj118=map_element_type_210;
        map_element_type_210=(struct sType*)come_increment_ref_count(((struct sType*)(right_value365=sType_clone(come_value2_218->type))));
        if(__dec_obj118) { come_call_finalizer(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
        if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value365, right_value365 = (void*)0;
        __freed_obj__ = 0;
        if(come_value_217 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_217, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(come_value2_218 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    key_type_values_220=(struct sType*)come_increment_ref_count(((struct sType*)(right_value366=sType_clone(map_key_type_209))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
    if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value366, right_value366 = (void*)0;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(key_type_values_220->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=create_int_node(list$1CVALUEph_length(key_params_207),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
    if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value367, right_value367 = (void*)0;
    __freed_obj__ = 0;
    key_type_values_220->mHeap=(_Bool)0;
    var_name_221=(char*)come_increment_ref_count(((char*)(right_value368=xsprintf("__map_keys%d__",++map_value_num_219))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
    if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value368, right_value368 = (void*)0;
    __freed_obj__ = 0;
    add_variable_to_table(var_name_221,(struct sType*)come_increment_ref_count(((struct sType*)(right_value369=sType_clone(key_type_values_220)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
    if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value369, right_value369 = (void*)0;
    __freed_obj__ = 0;
    var__222=get_variable_from_table(info->lv_table,var_name_221);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value370=make_define_var(key_type_values_220,var__222->mCValueName,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
    if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value370, right_value370 = (void*)0;
    __freed_obj__ = 0;
    element_type_values_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value371=sType_clone(map_element_type_210))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
    if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value371, right_value371 = (void*)0;
    __freed_obj__ = 0;
    list$1sNodeph_push_back(element_type_values_223->mArrayNum,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=create_int_node(list$1CVALUEph_length(element_params_208),info)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value372, right_value372 = (void*)0;
    __freed_obj__ = 0;
    element_type_values_223->mHeap=(_Bool)0;
    var_name2_224=(char*)come_increment_ref_count(((char*)(right_value373=xsprintf("__map_element%d__",map_value_num_219))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
    if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value373, right_value373 = (void*)0;
    __freed_obj__ = 0;
    add_variable_to_table(var_name2_224,(struct sType*)come_increment_ref_count(((struct sType*)(right_value374=sType_clone(element_type_values_223)))),info);
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
    if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value374, right_value374 = (void*)0;
    __freed_obj__ = 0;
    var2__225=get_variable_from_table(info->lv_table,var_name2_224);
    add_come_code_at_function_head(info,"%s;\n",((char*)(right_value375=make_define_var(element_type_values_223,var2__225->mCValueName,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
    if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value375, right_value375 = (void*)0;
    __freed_obj__ = 0;
    source_226=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value377=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value376=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1206, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value376);
    if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value376, right_value376 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value377);
    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value377, right_value377 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(source_226,"{");
    for(
    i_227=0 ,    0;    _for_condtionalA16=    i_227<list$1CVALUEph_length(key_params_207) ,    _for_condtionalA16;    i_227++ ,    0    ){
        key_param_228=((struct CVALUE*)(right_value378=list$1CVALUEphp_operator_load_element(key_params_207,i_227)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
        if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value378, right_value378 = (void*)0;
        __freed_obj__ = 0;
        element_param_229=((struct CVALUE*)(right_value379=list$1CVALUEphp_operator_load_element(element_params_208,i_227)));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value379);
        if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value379, right_value379 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional217=map_key_type_209->mHeap,        _if_conditional217) {
            buffer_append_str(source_226,((char*)(right_value380=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var__222->mCValueName,i_227,key_param_228->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value380);
            if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value380, right_value380 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(source_226,((char*)(right_value381=xsprintf("%s[%d]=%s;\n",var__222->mCValueName,i_227,key_param_228->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value381);
            if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { right_value381 = come_decrement_ref_count(right_value381, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value381, right_value381 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional218=map_element_type_210->mHeap,        _if_conditional218) {
            buffer_append_str(source_226,((char*)(right_value382=xsprintf("%s[%d]=come_increment_ref_count(%s);\n",var2__225->mCValueName,i_227,element_param_229->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value382);
            if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value382, right_value382 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            buffer_append_str(source_226,((char*)(right_value383=xsprintf("%s[%d]=%s;\n",var2__225->mCValueName,i_227,element_param_229->c_value))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value383);
            if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value383, right_value383 = (void*)0;
            __freed_obj__ = 0;
        }
    }
    buffer_append_str(source_226,"}");
    add_come_code(info,"%s",((char*)(right_value384=buffer_to_string(source_226))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
    if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value384, right_value384 = (void*)0;
    __freed_obj__ = 0;
    map_type_230=(struct sType*)come_increment_ref_count(((struct sType*)(right_value386=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value385=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "06str.c", 1233, "struct sType")))),"map",(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value385);
    if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value385, right_value385 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value386);
    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value386, right_value386 = (void*)0;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(map_type_230->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value387=sType_clone(map_key_type_209)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
    if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value387, right_value387 = (void*)0;
    __freed_obj__ = 0;
    list$1sTypeph_push_back(map_type_230->mGenericsTypes,(struct sType*)come_increment_ref_count(((struct sType*)(right_value388=sType_clone(map_element_type_210)))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value388);
    if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value388, right_value388 = (void*)0;
    __freed_obj__ = 0;
    obj_type_231=(struct sType*)come_increment_ref_count(((struct sType*)(right_value389=sType_clone(map_type_230))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value389);
    if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value389, right_value389 = (void*)0;
    __freed_obj__ = 0;
    fun_name_232="initialize_with_values";
    generics_fun_name_233=(char*)come_increment_ref_count(((char*)(right_value392=string_to_string(((char*)(right_value391=make_generics_function(obj_type_231,(char*)come_increment_ref_count(((char*)(right_value390=__builtin_string(fun_name_232)))),info)))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value390);
    if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { right_value390 = come_decrement_ref_count(right_value390, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value390, right_value390 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value391);
    if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { right_value391 = come_decrement_ref_count(right_value391, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value391, right_value391 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value392);
    if(right_value392 && right_value392 != __result_obj__ && !__freed_obj__) { right_value392 = come_decrement_ref_count(right_value392, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value392, right_value392 = (void*)0;
    __freed_obj__ = 0;
    fun_234=((struct sFun*)(right_value393=map$2charphsFunph_at(info->funcs,generics_fun_name_233,((void*)0))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value393);
    if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value393, right_value393 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional219=fun_234==((void*)0),    _if_conditional219) {
        __dec_obj119=generics_fun_name_233;
        generics_fun_name_233=(char*)come_increment_ref_count(((char*)(right_value395=create_method_name(obj_type_231,(_Bool)0,((char*)(right_value394=__builtin_string(fun_name_232))),info))));
        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value394);
        if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { right_value394 = come_decrement_ref_count(right_value394, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value394, right_value394 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value395);
        if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { right_value395 = come_decrement_ref_count(right_value395, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value395, right_value395 = (void*)0;
        __freed_obj__ = 0;
        fun_234=((struct sFun*)(right_value396=map$2charphsFunph_at(info->funcs,generics_fun_name_233,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value396);
        if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value396, right_value396 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional220=fun_234==((void*)0),        _if_conditional220) {
            err_msg(info,"function not found(%s) at method(%s)(3)\n",generics_fun_name_233,info->come_fun->mName);
            __result149__ = (_Bool)1;
            if(key_params_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(element_params_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_208, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_key_type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_element_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(key_type_values_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_220, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name_221 && !__freed_obj__) { var_name_221 = come_decrement_ref_count(var_name_221, (void*)0, (void*)0, 0, 0, 0); }
            if(element_type_values_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_223, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(var_name2_224 && !__freed_obj__) { var_name2_224 = come_decrement_ref_count(var_name2_224, (void*)0, (void*)0, 0, 0, 0); }
            if(source_226 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_226, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(map_type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(obj_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
            if(generics_fun_name_233 && !__freed_obj__) { generics_fun_name_233 = come_decrement_ref_count(generics_fun_name_233, (void*)0, (void*)0, 0, 0, 0); }
            return __result149__;
        }
    }
    result_type_235=(struct sType*)come_increment_ref_count(((struct sType*)(right_value397=sType_clone(fun_234->mResultType))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value397);
    if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value397, right_value397 = (void*)0;
    __freed_obj__ = 0;
    result_type_235->mStatic=(_Bool)0;
    type_236=map_type_230;
    obj_value_237=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value398=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1260, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value398);
    if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value398, right_value398 = (void*)0;
    __freed_obj__ = 0;
    num_string_238=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value400=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value399=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1262, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value399);
    if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value399, right_value399 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value400);
    if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value400, right_value400 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(num_string_238,"1");
    type2_239=(struct sType*)come_increment_ref_count(((struct sType*)(right_value401=solve_generics(type_236,type_236,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value401);
    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value401, right_value401 = (void*)0;
    __freed_obj__ = 0;
    type_name_240=(char*)come_increment_ref_count(((char*)(right_value402=make_type_name_string(type2_239,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value402);
    if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value402, right_value402 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj120=obj_value_237->c_value;
    obj_value_237->c_value=(char*)come_increment_ref_count(((char*)(right_value404=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_240,type_name_240,((char*)(right_value403=buffer_to_string(num_string_238))),info->sname,info->sline,type_name_240))));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value403);
    if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { right_value403 = come_decrement_ref_count(right_value403, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value403, right_value403 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value404);
    if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value404, right_value404 = (void*)0;
    __freed_obj__ = 0;
    type3_241=(struct sType*)come_increment_ref_count(((struct sType*)(right_value405=sType_clone(type2_239))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
    if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value405, right_value405 = (void*)0;
    __freed_obj__ = 0;
    type3_241->mPointerNum++;
    type3_241->mHeap=(_Bool)1;
    type2_239->mHeap=(_Bool)1;
    __dec_obj121=obj_value_237->type;
    obj_value_237->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value406=sType_clone(type2_239))));
    if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value406);
    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value406, right_value406 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj122=obj_value_237->c_value;
    obj_value_237->c_value=(char*)come_increment_ref_count(((char*)(right_value407=append_object_to_right_values(obj_value_237->c_value,(struct sType*)come_increment_ref_count(type3_241),info))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value407);
    if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { right_value407 = come_decrement_ref_count(right_value407, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value407, right_value407 = (void*)0;
    __freed_obj__ = 0;
    obj_value_237->type->mPointerNum++;
    obj_value_237->var=((void*)0);
    come_params_242=(struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value409=list$1CVALUEph_initialize((struct list$1CVALUEph*)come_increment_ref_count(((struct list$1CVALUEph*)(right_value408=(struct list$1CVALUEph*)come_calloc(1, sizeof(struct list$1CVALUEph)*(1), "06str.c", 1281, "struct list$1CVALUEph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value408);
    if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value408, right_value408 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value409);
    if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value409, right_value409 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional221=((struct sType*)(right_value410=list$1sTypephp_operator_load_element(fun_234->mParamTypes,0)))->mHeap&&obj_value_237->type->mHeap,    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value410),
    (right_value410 && right_value410 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0):0,
    __right_value_freed_obj[0] = right_value410, right_value410 = (void*)0, 
    __freed_obj__ = 0, 
    _if_conditional221) {
        std_move(((struct sType*)(right_value411=list$1sTypephp_operator_load_element(fun_234->mParamTypes,0))),obj_value_237->type,obj_value_237,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value411);
        if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value411, right_value411 = (void*)0;
        __freed_obj__ = 0;
    }
    list$1CVALUEph_push_back(come_params_242,(struct CVALUE*)come_increment_ref_count(obj_value_237));
    come_value2_243=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value412=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1288, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value412, right_value412 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj123=come_value2_243->c_value;
    come_value2_243->c_value=(char*)come_increment_ref_count(((char*)(right_value413=xsprintf("%d",list$1CVALUEph_length(key_params_207)))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value413);
    if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value413, right_value413 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj124=come_value2_243->type;
    come_value2_243->type=((void*)0);
    if(__dec_obj124) { come_call_finalizer(sType_finalize,__dec_obj124, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value2_243->var=((void*)0);
    list$1CVALUEph_push_back(come_params_242,(struct CVALUE*)come_increment_ref_count(come_value2_243));
    come_value3_244=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value414=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1296, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414);
    if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value414, right_value414 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj125=come_value3_244->c_value;
    come_value3_244->c_value=(char*)come_increment_ref_count(((char*)(right_value415=xsprintf("%s",var__222->mCValueName))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value415);
    if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { right_value415 = come_decrement_ref_count(right_value415, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value415, right_value415 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj126=come_value3_244->type;
    come_value3_244->type=((void*)0);
    if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value3_244->var=((void*)0);
    list$1CVALUEph_push_back(come_params_242,(struct CVALUE*)come_increment_ref_count(come_value3_244));
    come_value4_245=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value416=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1304, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value416);
    if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value416, right_value416 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj127=come_value4_245->c_value;
    come_value4_245->c_value=(char*)come_increment_ref_count(((char*)(right_value417=xsprintf("%s",var2__225->mCValueName))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value417);
    if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value417, right_value417 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj128=come_value4_245->type;
    come_value4_245->type=((void*)0);
    if(__dec_obj128) { come_call_finalizer(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0); }
    come_value4_245->var=((void*)0);
    list$1CVALUEph_push_back(come_params_242,(struct CVALUE*)come_increment_ref_count(come_value4_245));
    buf_246=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value419=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value418=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1312, "struct buffer"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value418);
    if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value418, right_value418 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value419);
    if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value419, right_value419 = (void*)0;
    __freed_obj__ = 0;
    buffer_append_str(buf_246,generics_fun_name_233);
    buffer_append_str(buf_246,"(");
    j_247=0;
    for(
    o2_saved_248=(struct list$1CVALUEph*)come_increment_ref_count((come_params_242)),it_249=list$1CVALUEph_begin((o2_saved_248)) ,    0;    _for_condtionalA17=    !list$1CVALUEph_end((o2_saved_248)) ,    _for_condtionalA17;    it_249=list$1CVALUEph_next((o2_saved_248)) ,    0    ){
        buffer_append_str(buf_246,it_249->c_value);
        if(_if_conditional222=j_247!=list$1CVALUEph_length(come_params_242)-1,        _if_conditional222) {
            buffer_append_str(buf_246,",");
        }
        j_247++;
    }
    if(o2_saved_248 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,o2_saved_248, (void*)0, (void*)0, 0, 0, 0, 0); }
    buffer_append_str(buf_246,")");
    come_value5_250=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value420=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "06str.c", 1329, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value420);
    if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value420, right_value420 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj129=come_value5_250->c_value;
    come_value5_250->c_value=(char*)come_increment_ref_count(((char*)(right_value421=buffer_to_string(buf_246))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value421);
    if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { right_value421 = come_decrement_ref_count(right_value421, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value421, right_value421 = (void*)0;
    __freed_obj__ = 0;
    if(_if_conditional223=result_type_235->mHeap,    _if_conditional223) {
        __dec_obj130=come_value5_250->c_value;
        come_value5_250->c_value=(char*)come_increment_ref_count(((char*)(right_value423=append_object_to_right_values(((char*)(right_value422=buffer_to_string(buf_246))),(struct sType*)come_increment_ref_count(result_type_235),info))));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value422);
        if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { right_value422 = come_decrement_ref_count(right_value422, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value422, right_value422 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value423);
        if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { right_value423 = come_decrement_ref_count(right_value423, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value423, right_value423 = (void*)0;
        __freed_obj__ = 0;
    }
    __dec_obj131=come_value5_250->type;
    come_value5_250->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value424=sType_clone(result_type_235))));
    if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value424);
    if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value424, right_value424 = (void*)0;
    __freed_obj__ = 0;
    come_value5_250->type->mStatic=(_Bool)0;
    come_value5_250->var=((void*)0);
    add_come_last_code(info,"%s;\n",((char*)(right_value425=buffer_to_string(buf_246))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value425);
    if(right_value425 && right_value425 != __result_obj__ && !__freed_obj__) { right_value425 = come_decrement_ref_count(right_value425, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value425, right_value425 = (void*)0;
    __freed_obj__ = 0;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value5_250));
    __result150__ = (_Bool)1;
    if(key_params_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_220, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_221 && !__freed_obj__) { var_name_221 = come_decrement_ref_count(var_name_221, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_224 && !__freed_obj__) { var_name2_224 = come_decrement_ref_count(var_name2_224, (void*)0, (void*)0, 0, 0, 0); }
    if(source_226 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_233 && !__freed_obj__) { generics_fun_name_233 = come_decrement_ref_count(generics_fun_name_233, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_237 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_237, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_238 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_239 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_240 && !__freed_obj__) { type_name_240 = come_decrement_ref_count(type_name_240, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_241 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_241, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_242 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_242, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_243 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_244 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_245 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_246 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_250 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_250, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result150__;
    if(key_params_207 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,key_params_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(element_params_208 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,element_params_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_key_type_209 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_key_type_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_element_type_210 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_element_type_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(key_type_values_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,key_type_values_220, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name_221 && !__freed_obj__) { var_name_221 = come_decrement_ref_count(var_name_221, (void*)0, (void*)0, 0, 0, 0); }
    if(element_type_values_223 && !__freed_obj__) { come_call_finalizer(sType_finalize,element_type_values_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(var_name2_224 && !__freed_obj__) { var_name2_224 = come_decrement_ref_count(var_name2_224, (void*)0, (void*)0, 0, 0, 0); }
    if(source_226 && !__freed_obj__) { come_call_finalizer(buffer_finalize,source_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(map_type_230 && !__freed_obj__) { come_call_finalizer(sType_finalize,map_type_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_type_231 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(generics_fun_name_233 && !__freed_obj__) { generics_fun_name_233 = come_decrement_ref_count(generics_fun_name_233, (void*)0, (void*)0, 0, 0, 0); }
    if(result_type_235 && !__freed_obj__) { come_call_finalizer(sType_finalize,result_type_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(obj_value_237 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,obj_value_237, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(num_string_238 && !__freed_obj__) { come_call_finalizer(buffer_finalize,num_string_238, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type2_239 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_239, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_name_240 && !__freed_obj__) { type_name_240 = come_decrement_ref_count(type_name_240, (void*)0, (void*)0, 0, 0, 0); }
    if(type3_241 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_241, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_params_242 && !__freed_obj__) { come_call_finalizer(list$1CVALUEphp_finalize,come_params_242, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value2_243 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value2_243, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value3_244 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value3_244, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value4_245 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value4_245, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(buf_246 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_246, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value5_250 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value5_250, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct sNode* list$1sNodephp_operator_load_element(struct list$1sNodeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional213;
struct list_item$1sNodeph* it_212;
int i_213;
_Bool _while_condtional12;
_Bool _if_conditional214;
struct sNode* __result145__;
struct sNode* default_value_214;
struct sNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_212, 0, sizeof(struct list_item$1sNodeph*));
memset(&i_213, 0, sizeof(int));
memset(&default_value_214, 0, sizeof(struct sNode*));
            if(_if_conditional213=position<0,            _if_conditional213) {
                position+=self->len;
            }
            it_212=self->head;
            i_213=0;
            while(_while_condtional12=it_212!=((void*)0),            _while_condtional12) {
                if(_if_conditional214=position==i_213,                _if_conditional214) {
                    __result145__ = __result_obj__ = it_212->item;
                    return __result145__;
                }
                it_212=it_212->next;
                i_213++;
            }
            memset(&default_value_214,0,sizeof(struct sNode*));
            __result146__ = __result_obj__ = default_value_214;
            if(default_value_214 && !__freed_obj__) { default_value_214 = come_decrement_ref_count(default_value_214, ((struct sNode*)default_value_214)->finalize, ((struct sNode*)default_value_214)->_protocol_obj, 0, 1, 0); } 
            return __result146__;
            if(default_value_214 && !__freed_obj__) { default_value_214 = come_decrement_ref_count(default_value_214, ((struct sNode*)default_value_214)->finalize, ((struct sNode*)default_value_214)->_protocol_obj, 0, 0, 0); } 
}

int sMapNode_sline(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = self->sline;
    return __result151__;
}

char* sMapNode_sname(struct sMapNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value426;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value426 = (void*)0;
    __result152__ = __result_obj__ = ((char*)(right_value426=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value426);
    if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { right_value426 = come_decrement_ref_count(right_value426, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value426, right_value426 = (void*)0;
    __freed_obj__ = 0;
    return __result152__;
}

struct sNode* expression_node_v98(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional224;
int sline_251;
void* right_value427;
void* right_value428;
struct list$1sNodeph* exps_252;
void* right_value429;
void* right_value430;
struct buffer* value_253;
char* head_of_last_line_254;
_Bool _while_condtional13;
_Bool _if_conditional225;
_Bool _if_conditional226;
_Bool _if_conditional227;
_Bool _if_conditional228;
_Bool _if_conditional229;
_Bool _if_conditional230;
int len_255;
_Bool _while_condtional14;
_Bool _if_conditional231;
_Bool _while_condtional15;
_Bool _if_conditional232;
void* right_value431;
struct sNode* exp_256;
_Bool _if_conditional233;
_Bool _if_conditional234;
int sline2_257;
_Bool _if_conditional235;
void* right_value432;
void* right_value433;
void* right_value434;
struct sNode* _inf_value3;
struct sSStringNode* _inf_obj_value3;
void* right_value439;
struct sNode* __result155__;
_Bool _if_conditional244;
int sline_259;
void* right_value440;
void* right_value441;
struct buffer* value_260;
_Bool _while_condtional16;
_Bool _if_conditional245;
char* p_261;
int sline_262;
_Bool _if_conditional246;
_Bool _if_conditional247;
_Bool _if_conditional248;
_Bool _if_conditional249;
int sline2_263;
_Bool _if_conditional250;
void* right_value442;
void* right_value443;
void* right_value444;
struct sNode* _inf_value4;
struct sStrNode* _inf_obj_value4;
void* right_value448;
struct sNode* __result158__;
_Bool _if_conditional257;
int sline_265;
void* right_value449;
void* right_value450;
struct buffer* buf_266;
_Bool _while_condtional17;
_Bool _if_conditional258;
_Bool _if_conditional259;
_Bool _if_conditional260;
_Bool global_267;
_Bool ignore_case_268;
_Bool _while_condtional18;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value451;
void* right_value452;
void* right_value453;
struct sNode* _inf_value5;
struct sRegexNode* _inf_obj_value5;
void* right_value457;
struct sNode* __result161__;
_Bool _if_conditional271;
int c_270;
_Bool _if_conditional272;
_Bool _if_conditional273;
int n_271;
_Bool _while_condtional19;
_Bool _if_conditional274;
int n_272;
_Bool _while_condtional20;
_Bool _while_condtional21;
unsigned long long int n_275;
_Bool _if_conditional275;
void* right_value458;
void* right_value459;
struct sNode* _inf_value6;
struct sCharNode* _inf_obj_value6;
void* right_value462;
struct sNode* __result164__;
_Bool _if_conditional281;
unsigned int c_277;
_Bool _if_conditional282;
_Bool _if_conditional283;
int n_278;
_Bool _while_condtional22;
_Bool _if_conditional284;
int n_279;
_Bool _while_condtional23;
_Bool _while_condtional24;
unsigned long long int n_282;
unsigned char p2_283;
_Bool _if_conditional285;
int size_284;
_Bool _if_conditional286;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value463;
void* right_value464;
struct sNode* _inf_value7;
struct sWCharNode* _inf_obj_value7;
void* right_value467;
struct sNode* __result167__;
_Bool _if_conditional294;
int sline_287;
void* right_value468;
void* right_value469;
struct buffer* value_288;
_Bool _while_condtional25;
_Bool _if_conditional295;
char* p_289;
int sline_290;
_Bool _if_conditional296;
_Bool _if_conditional297;
_Bool _if_conditional298;
int len_291;
int n_292;
_Bool _while_condtional26;
_Bool _if_conditional299;
_Bool _while_condtional27;
unsigned long int lont_295;
int n_296;
_Bool _if_conditional300;
int sline2_297;
_Bool _if_conditional301;
int len_298;
void* right_value470;
unsigned int* wstr_299;
char* str_300;
_Bool _if_conditional302;
void* right_value471;
void* right_value472;
struct sNode* _inf_value8;
struct sWStringNode* _inf_obj_value8;
void* right_value476;
struct sNode* __result170__;
_Bool _if_conditional309;
int sline_302;
void* right_value477;
void* right_value478;
struct list$1sNodeph* exps_303;
void* right_value479;
void* right_value480;
struct buffer* value_304;
_Bool _while_condtional28;
_Bool _if_conditional310;
char* p_305;
int sline_306;
_Bool _if_conditional311;
_Bool _if_conditional312;
_Bool _if_conditional313;
void* right_value481;
struct sNode* exp_307;
char* p_308;
_Bool _while_condtional29;
_Bool _if_conditional314;
_Bool _if_conditional315;
int len_309;
_Bool _while_condtional30;
_Bool _if_conditional316;
_Bool _while_condtional31;
_Bool _if_conditional317;
void* right_value482;
struct sNode* exp_310;
_Bool _if_conditional318;
_Bool _if_conditional319;
int sline2_311;
_Bool _if_conditional320;
void* right_value483;
void* right_value484;
void* right_value485;
struct sNode* _inf_value9;
struct sSStringNode* _inf_obj_value9;
void* right_value490;
struct sNode* __result173__;
_Bool _if_conditional329;
char* p_313;
_Bool no_comma_314;
void* right_value491;
struct sNode* node_315;
char* p2_316;
void* right_value492;
void* right_value493;
struct buffer* first_element_source_317;
void* right_value494;
void* right_value495;
struct list$1sNodeph* list_elements_318;
void* right_value496;
void* right_value497;
struct list$1sNodeph* map_keys_319;
void* right_value498;
void* right_value499;
struct list$1sNodeph* map_elements_320;
_Bool _if_conditional330;
_Bool no_comma_321;
void* right_value500;
struct sNode* node2_322;
_Bool _if_conditional331;
void* right_value501;
void* right_value502;
struct sNode* _inf_value10;
struct sMapNode* _inf_obj_value10;
void* right_value507;
struct sNode* __result176__;
_Bool _while_condtional32;
_Bool no_comma_324;
void* right_value508;
struct sNode* node2_325;
void* right_value509;
struct sNode* node3_326;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional342;
void* right_value510;
void* right_value511;
struct sNode* _inf_value11;
struct sMapNode* _inf_obj_value11;
void* right_value516;
struct sNode* __result179__;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _while_condtional33;
_Bool no_comma_328;
void* right_value517;
struct sNode* node2_329;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
void* right_value518;
void* right_value519;
struct sNode* _inf_value12;
struct sListNode* _inf_obj_value12;
void* right_value523;
struct sNode* __result182__;
void* right_value524;
struct sNode* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&sline_251, 0, sizeof(int));
right_value427 = (void*)0;
right_value428 = (void*)0;
memset(&exps_252, 0, sizeof(struct list$1sNodeph*));
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&value_253, 0, sizeof(struct buffer*));
memset(&head_of_last_line_254, 0, sizeof(char*));
memset(&len_255, 0, sizeof(int));
right_value431 = (void*)0;
memset(&exp_256, 0, sizeof(struct sNode*));
memset(&sline2_257, 0, sizeof(int));
right_value432 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value439 = (void*)0;
memset(&sline_259, 0, sizeof(int));
right_value440 = (void*)0;
right_value441 = (void*)0;
memset(&value_260, 0, sizeof(struct buffer*));
memset(&p_261, 0, sizeof(char*));
memset(&sline_262, 0, sizeof(int));
memset(&sline2_263, 0, sizeof(int));
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value448 = (void*)0;
memset(&sline_265, 0, sizeof(int));
right_value449 = (void*)0;
right_value450 = (void*)0;
memset(&buf_266, 0, sizeof(struct buffer*));
memset(&global_267, 0, sizeof(_Bool));
memset(&ignore_case_268, 0, sizeof(_Bool));
right_value451 = (void*)0;
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value457 = (void*)0;
memset(&c_270, 0, sizeof(int));
memset(&n_271, 0, sizeof(int));
memset(&n_272, 0, sizeof(int));
memset(&n_275, 0, sizeof(unsigned long long int));
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value462 = (void*)0;
memset(&c_277, 0, sizeof(unsigned int));
memset(&n_278, 0, sizeof(int));
memset(&n_279, 0, sizeof(int));
memset(&n_282, 0, sizeof(unsigned long long int));
memset(&p2_283, 0, sizeof(unsigned char));
memset(&size_284, 0, sizeof(int));
right_value463 = (void*)0;
right_value464 = (void*)0;
right_value467 = (void*)0;
memset(&sline_287, 0, sizeof(int));
right_value468 = (void*)0;
right_value469 = (void*)0;
memset(&value_288, 0, sizeof(struct buffer*));
memset(&p_289, 0, sizeof(char*));
memset(&sline_290, 0, sizeof(int));
memset(&len_291, 0, sizeof(int));
memset(&n_292, 0, sizeof(int));
memset(&lont_295, 0, sizeof(unsigned long int));
memset(&n_296, 0, sizeof(int));
memset(&sline2_297, 0, sizeof(int));
memset(&len_298, 0, sizeof(int));
right_value470 = (void*)0;
memset(&wstr_299, 0, sizeof(unsigned int*));
memset(&str_300, 0, sizeof(char*));
right_value471 = (void*)0;
right_value472 = (void*)0;
right_value476 = (void*)0;
memset(&sline_302, 0, sizeof(int));
right_value477 = (void*)0;
right_value478 = (void*)0;
memset(&exps_303, 0, sizeof(struct list$1sNodeph*));
right_value479 = (void*)0;
right_value480 = (void*)0;
memset(&value_304, 0, sizeof(struct buffer*));
memset(&p_305, 0, sizeof(char*));
memset(&sline_306, 0, sizeof(int));
right_value481 = (void*)0;
memset(&exp_307, 0, sizeof(struct sNode*));
memset(&p_308, 0, sizeof(char*));
memset(&len_309, 0, sizeof(int));
right_value482 = (void*)0;
memset(&exp_310, 0, sizeof(struct sNode*));
memset(&sline2_311, 0, sizeof(int));
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value490 = (void*)0;
memset(&p_313, 0, sizeof(char*));
memset(&no_comma_314, 0, sizeof(_Bool));
right_value491 = (void*)0;
memset(&node_315, 0, sizeof(struct sNode*));
memset(&p2_316, 0, sizeof(char*));
right_value492 = (void*)0;
right_value493 = (void*)0;
memset(&first_element_source_317, 0, sizeof(struct buffer*));
right_value494 = (void*)0;
right_value495 = (void*)0;
memset(&list_elements_318, 0, sizeof(struct list$1sNodeph*));
right_value496 = (void*)0;
right_value497 = (void*)0;
memset(&map_keys_319, 0, sizeof(struct list$1sNodeph*));
right_value498 = (void*)0;
right_value499 = (void*)0;
memset(&map_elements_320, 0, sizeof(struct list$1sNodeph*));
memset(&no_comma_321, 0, sizeof(_Bool));
right_value500 = (void*)0;
memset(&node2_322, 0, sizeof(struct sNode*));
right_value501 = (void*)0;
right_value502 = (void*)0;
right_value507 = (void*)0;
memset(&no_comma_324, 0, sizeof(_Bool));
right_value508 = (void*)0;
memset(&node2_325, 0, sizeof(struct sNode*));
right_value509 = (void*)0;
memset(&node3_326, 0, sizeof(struct sNode*));
right_value510 = (void*)0;
right_value511 = (void*)0;
right_value516 = (void*)0;
memset(&no_comma_328, 0, sizeof(_Bool));
right_value517 = (void*)0;
memset(&node2_329, 0, sizeof(struct sNode*));
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
    if(_if_conditional224=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34&&*(info->p+3)==10,    _if_conditional224) {
        info->p+=4;
        info->sline++;
        sline_251=info->sline;
        exps_252=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value428=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value427=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 1367, "struct list$1sNodeph"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value427);
        if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value427, right_value427 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value428);
        if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value428, right_value428 = (void*)0;
        __freed_obj__ = 0;
        value_253=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value430=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value429=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1368, "struct buffer"))))))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value429);
        if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value429, right_value429 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value430);
        if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value430, right_value430 = (void*)0;
        __freed_obj__ = 0;
        head_of_last_line_254=((void*)0);
        while(_while_condtional13=1,        _while_condtional13) {
            if(_if_conditional225=*info->p==34&&*(info->p+1)==34&&*(info->p+2)==34,            _if_conditional225) {
                if(_if_conditional226=head_of_last_line_254,                _if_conditional226) {
                    buffer_trim(value_253,info->p-head_of_last_line_254);
                }
                info->p+=3;
                skip_spaces_and_lf(info);
                break;
            }
            else {
                if(_if_conditional227=*info->p==37,                _if_conditional227) {
                    buffer_append_char(value_253,37);
                    buffer_append_char(value_253,37);
                    info->p++;
                }
                else {
                    if(_if_conditional228=*info->p==34,                    _if_conditional228) {
                        buffer_append_char(value_253,92);
                        buffer_append_char(value_253,34);
                        info->p++;
                    }
                    else {
                        if(_if_conditional229=*info->p==92,                        _if_conditional229) {
                            buffer_append_char(value_253,92);
                            info->p++;
                            if(_if_conditional230=xisdigit(*info->p),                            _if_conditional230) {
                                len_255=0;
                                while(_while_condtional14=xisdigit(*info->p)&&len_255<3,                                _while_condtional14) {
                                    buffer_append_char(value_253,*info->p);
                                    info->p++;
                                    len_255++;
                                }
                            }
                            else {
                                if(_if_conditional231=*info->p==120||*info->p==88,                                _if_conditional231) {
                                    buffer_append_char(value_253,*info->p);
                                    info->p++;
                                    while(_while_condtional15=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional15) {
                                        buffer_append_char(value_253,*info->p);
                                        info->p++;
                                    }
                                }
                                else {
                                    if(_if_conditional232=*info->p==123,                                    _if_conditional232) {
                                        info->p++;
                                        exp_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value431);
                                        if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { right_value431 = come_decrement_ref_count(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value431, right_value431 = (void*)0;
                                        __freed_obj__ = 0;
                                        list$1sNodeph_add(exps_252,(struct sNode*)come_increment_ref_count(exp_256));
                                        if(_if_conditional233=*info->p==125,                                        _if_conditional233) {
                                            info->p++;
                                        }
                                        buffer_append_str(value_253,"%s");
                                        if(exp_256 && !__freed_obj__) { exp_256 = come_decrement_ref_count(exp_256, ((struct sNode*)exp_256)->finalize, ((struct sNode*)exp_256)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        switch (*info->p) {
                                            case 48:
                                            buffer_append_char(value_253,*info->p);
                                            info->p++;
                                            break;
                                            case 110:
                                            buffer_append_char(value_253,*info->p);
                                            info->p++;
                                            break;
                                            case 116:
                                            buffer_append_char(value_253,*info->p);
                                            info->p++;
                                            break;
                                            case 114:
                                            buffer_append_char(value_253,*info->p);
                                            info->p++;
                                            break;
                                            case 118:
                                            buffer_append_char(value_253,*info->p);
                                            info->p++;
                                            break;
                                            case 102:
                                            buffer_append_char(value_253,*info->p);
                                            info->p++;
                                            break;
                                            case 97:
                                            buffer_append_char(value_253,*info->p);
                                            info->p++;
                                            break;
                                            case 98:
                                            buffer_append_char(value_253,*info->p);
                                            info->p++;
                                            break;
                                            case 92:
                                            buffer_append_char(value_253,*info->p);
                                            info->p++;
                                            break;
                                            default:
                                            buffer_append_char(value_253,*info->p);
                                            info->p++;
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                        else {
                            if(_if_conditional234=*info->p==0,                            _if_conditional234) {
                                sline2_257=info->sline;
                                info->sline=sline_251;
                                err_msg(info,"close \" to make embbeded string value");
                                exit(2);
                            }
                            else {
                                if(_if_conditional235=*info->p==10,                                _if_conditional235) {
                                    buffer_append_char(value_253,92);
                                    buffer_append_char(value_253,110);
                                    info->p++;
                                    info->sline++;
                                    head_of_last_line_254=info->p;
                                }
                                else {
                                    buffer_append_char(value_253,*info->p);
                                    info->p++;
                                }
                            }
                        }
                    }
                }
            }
        }
        skip_spaces_and_lf(info);
        _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1516, "struct sNode");
        _inf_obj_value3=come_increment_ref_count(((struct sSStringNode*)(right_value434=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value432=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 1516, "struct sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value433=buffer_to_string(value_253)))),(struct list$1sNodeph*)come_increment_ref_count(exps_252),sline_251,info))));
        _inf_value3->_protocol_obj=_inf_obj_value3;
        _inf_value3->finalize=(void*)sSStringNode_finalize;
        _inf_value3->clone=(void*)sSStringNode_clone;
        _inf_value3->compile=(void*)sSStringNode_compile;
        _inf_value3->sline=(void*)sSStringNode_sline;
        _inf_value3->sname=(void*)sSStringNode_sname;
        _inf_value3->terminated=(void*)sSStringNode_terminated;
        _inf_value3->kind=(void*)sSStringNode_kind;
        __result155__ = __result_obj__ = ((struct sNode*)(right_value439=_inf_value3));
        if(exps_252 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_252, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_253 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_253, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value432);
        if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value432, right_value432 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value433);
        if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value433, right_value433 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value434);
        if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value434, right_value434 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value439);
        if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { right_value439 = come_decrement_ref_count(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[3] = right_value439, right_value439 = (void*)0;
        __freed_obj__ = 0;
        return __result155__;
        if(exps_252 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_252, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value_253 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_253, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    else {
        if(_if_conditional244=*info->p==34,        _if_conditional244) {
            info->p++;
            sline_259=info->sline;
            value_260=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value441=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value440=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1524, "struct buffer"))))))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value440);
            if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value440, right_value440 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value441);
            if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value441, right_value441 = (void*)0;
            __freed_obj__ = 0;
            while(_while_condtional16=1,            _while_condtional16) {
                if(_if_conditional245=*info->p==34,                _if_conditional245) {
                    info->p++;
                    p_261=info->p;
                    sline_262=info->sline;
                    skip_spaces_and_lf(info);
                    parse_sharp_v5(info);
                    if(_if_conditional246=*info->p==34,                    _if_conditional246) {
                        info->p++;
                    }
                    else {
                        info->p=p_261;
                        info->sline=sline_262;
                        break;
                    }
                }
                else {
                    if(_if_conditional247=*info->p==92,                    _if_conditional247) {
                        buffer_append_char(value_260,92);
                        info->p++;
                        if(_if_conditional248=*info->p==34,                        _if_conditional248) {
                            buffer_append_char(value_260,34);
                            info->p++;
                        }
                        else {
                            buffer_append_char(value_260,*info->p);
                            info->p++;
                        }
                    }
                    else {
                        if(_if_conditional249=*info->p==0,                        _if_conditional249) {
                            sline2_263=info->sline;
                            info->sline=sline_259;
                            err_msg(info,"close \" to make c string value");
                            info->sline=sline2_263;
                            exit(2);
                        }
                        else {
                            if(_if_conditional250=*info->p==10,                            _if_conditional250) {
                                info->sline++;
                            }
                            buffer_append_char(value_260,*info->p);
                            info->p++;
                        }
                    }
                }
            }
            skip_spaces_and_lf(info);
            _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1576, "struct sNode");
            _inf_obj_value4=come_increment_ref_count(((struct sStrNode*)(right_value444=sStrNode_initialize((struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value442=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "06str.c", 1576, "struct sStrNode")))),(char*)come_increment_ref_count(((char*)(right_value443=buffer_to_string(value_260)))),sline_259,info))));
            _inf_value4->_protocol_obj=_inf_obj_value4;
            _inf_value4->finalize=(void*)sStrNode_finalize;
            _inf_value4->clone=(void*)sStrNode_clone;
            _inf_value4->compile=(void*)sStrNode_compile;
            _inf_value4->sline=(void*)sStrNode_sline;
            _inf_value4->sname=(void*)sStrNode_sname;
            _inf_value4->terminated=(void*)sStrNode_terminated;
            _inf_value4->kind=(void*)sStrNode_kind;
            __result158__ = __result_obj__ = ((struct sNode*)(right_value448=_inf_value4));
            if(value_260 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_260, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value442);
            if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value442, right_value442 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value443);
            if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { right_value443 = come_decrement_ref_count(right_value443, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value443, right_value443 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value444);
            if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value444, right_value444 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value448);
            if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { right_value448 = come_decrement_ref_count(right_value448, ((struct sNode*)right_value448)->finalize, ((struct sNode*)right_value448)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value448, right_value448 = (void*)0;
            __freed_obj__ = 0;
            return __result158__;
            if(value_260 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_260, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        else {
            if(_if_conditional257=*info->p==47,            _if_conditional257) {
                info->p++;
                sline_265=info->sline;
                buf_266=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value450=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value449=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1583, "struct buffer"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value449);
                if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value449, right_value449 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value450);
                if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value450, right_value450 = (void*)0;
                __freed_obj__ = 0;
                while(_while_condtional17=(_Bool)1,                _while_condtional17) {
                    if(_if_conditional258=*info->p==92&&*(info->p+1)==47,                    _if_conditional258) {
                        info->p++;
                        buffer_append_char(buf_266,*info->p);
                        info->p++;
                    }
                    else {
                        if(_if_conditional259=*info->p==47,                        _if_conditional259) {
                            info->p++;
                            break;
                        }
                        else {
                            if(_if_conditional260=*info->p==0,                            _if_conditional260) {
                                err_msg(info,"require closing / for regex");
                                exit(5);
                            }
                            else {
                                buffer_append_char(buf_266,*info->p);
                                info->p++;
                            }
                        }
                    }
                }
                global_267=(_Bool)0;
                ignore_case_268=(_Bool)0;
                while(_while_condtional18=*info->p==103||*info->p==105,                _while_condtional18) {
                    if(_if_conditional261=*info->p==103,                    _if_conditional261) {
                        info->p++;
                        global_267=(_Bool)1;
                    }
                    else {
                        if(_if_conditional262=*info->p==105,                        _if_conditional262) {
                            info->p++;
                            ignore_case_268=(_Bool)1;
                        }
                        else {
                            break;
                        }
                    }
                }
                skip_spaces_and_lf(info);
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1622, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sRegexNode*)(right_value453=sRegexNode_initialize((struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value451=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "06str.c", 1622, "struct sRegexNode")))),(char*)come_increment_ref_count(((char*)(right_value452=buffer_to_string(buf_266)))),global_267,ignore_case_268,sline_265,info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sRegexNode_finalize;
                _inf_value5->clone=(void*)sRegexNode_clone;
                _inf_value5->compile=(void*)sRegexNode_compile;
                _inf_value5->sline=(void*)sRegexNode_sline;
                _inf_value5->sname=(void*)sRegexNode_sname;
                _inf_value5->terminated=(void*)sRegexNode_terminated;
                _inf_value5->kind=(void*)sRegexNode_kind;
                __result161__ = __result_obj__ = ((struct sNode*)(right_value457=_inf_value5));
                if(buf_266 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_266, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value451);
                if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value451, right_value451 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value452);
                if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value452, right_value452 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value453);
                if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value453, right_value453 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value457);
                if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { right_value457 = come_decrement_ref_count(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value457, right_value457 = (void*)0;
                __freed_obj__ = 0;
                return __result161__;
                if(buf_266 && !__freed_obj__) { come_call_finalizer(buffer_finalize,buf_266, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            else {
                if(_if_conditional271=*info->p==39,                _if_conditional271) {
                    info->p++;
                    if(_if_conditional272=*info->p==92,                    _if_conditional272) {
                        info->p++;
                        if(_if_conditional273=xisdigit(*info->p),                        _if_conditional273) {
                            n_271=0;
                            while(_while_condtional19=xisdigit(*info->p),                            _while_condtional19) {
                                n_271=n_271*8+*info->p-48;
                                info->p++;
                            }
                            c_270=n_271;
                        }
                        else {
                            switch (*info->p) {
                                case 110:
                                c_270=10;
                                info->p++;
                                break;
                                case 116:
                                c_270=9;
                                info->p++;
                                break;
                                case 114:
                                c_270=13;
                                info->p++;
                                break;
                                case 97:
                                c_270=7;
                                info->p++;
                                break;
                                case 102:
                                c_270=12;
                                info->p++;
                                break;
                                case 118:
                                c_270=11;
                                info->p++;
                                break;
                                case 98:
                                c_270=8;
                                info->p++;
                                break;
                                case 92:
                                c_270=92;
                                info->p++;
                                break;
                                case 48:
                                c_270=0;
                                info->p++;
                                if(_if_conditional274=xisdigit(*info->p),                                _if_conditional274) {
                                    n_272=0;
                                    while(_while_condtional20=xisdigit(*info->p),                                    _while_condtional20) {
                                        n_272=n_272*8+*info->p-48;
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                    }
                                    c_270=n_272;
                                }
                                break;
                                case 120:
                                case 88:
                                {
                                    info->p++;
                                    char buf_273[128];
                                    memset(&buf_273, 0, sizeof(char)                                    *(128)                                    );
                                    strncpy(buf_273,"0x",128);
                                    while(_while_condtional21=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                    _while_condtional21) {
                                        char buf2_274[2];
                                        memset(&buf2_274, 0, sizeof(char)                                        *(2)                                        );
                                        buf2_274[0]=*info->p;
                                        buf2_274[1]=0;
                                        info->p++;
                                        strncat(buf_273,buf2_274,128);
                                    }
                                    n_275=strtoll(buf_273,((void*)0),0);
                                    c_270=n_275;
                                }
                                break;
                                default:
                                c_270=*info->p;
                                info->p++;
                                break;
                            }
                        }
                    }
                    else {
                        c_270=*info->p;
                        info->p++;
                    }
                    if(_if_conditional275=*info->p!=39,                    _if_conditional275) {
                        err_msg(info,"close \' to make character value");
                    }
                    else {
                        info->p++;
                        skip_spaces_and_lf(info);
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1739, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sCharNode*)(right_value459=sCharNode_initialize((struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value458=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "06str.c", 1739, "struct sCharNode")))),c_270,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sCharNode_finalize;
                        _inf_value6->clone=(void*)sCharNode_clone;
                        _inf_value6->compile=(void*)sCharNode_compile;
                        _inf_value6->sline=(void*)sCharNode_sline;
                        _inf_value6->sname=(void*)sCharNode_sname;
                        _inf_value6->terminated=(void*)sCharNode_terminated;
                        _inf_value6->kind=(void*)sCharNode_kind;
                        __result164__ = __result_obj__ = ((struct sNode*)(right_value462=_inf_value6));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value458);
                        if(right_value458 && right_value458 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value458, right_value458 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value459);
                        if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value459, right_value459 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value462);
                        if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { right_value462 = come_decrement_ref_count(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value462, right_value462 = (void*)0;
                        __freed_obj__ = 0;
                        return __result164__;
                    }
                }
                else {
                    if(_if_conditional281=*info->p==76&&*(info->p+1)==39,                    _if_conditional281) {
                        info->p+=2;
                        if(_if_conditional282=*info->p==92,                        _if_conditional282) {
                            info->p++;
                            if(_if_conditional283=xisdigit(*info->p),                            _if_conditional283) {
                                n_278=0;
                                while(_while_condtional22=xisdigit(*info->p),                                _while_condtional22) {
                                    n_278=n_278*8+*info->p-48;
                                    info->p++;
                                }
                                c_277=n_278;
                            }
                            else {
                                switch (*info->p) {
                                    case 110:
                                    c_277=10;
                                    info->p++;
                                    break;
                                    case 116:
                                    c_277=9;
                                    info->p++;
                                    break;
                                    case 114:
                                    c_277=13;
                                    info->p++;
                                    break;
                                    case 97:
                                    c_277=7;
                                    info->p++;
                                    break;
                                    case 92:
                                    c_277=92;
                                    info->p++;
                                    break;
                                    case 48:
                                    c_277=0;
                                    info->p++;
                                    if(_if_conditional284=xisdigit(*info->p),                                    _if_conditional284) {
                                        n_279=0;
                                        while(_while_condtional23=xisdigit(*info->p),                                        _while_condtional23) {
                                            n_279=n_279*8+*info->p-48;
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                        }
                                        c_277=n_279;
                                    }
                                    break;
                                    case 120:
                                    case 88:
                                    {
                                        info->p++;
                                        char buf_280[128];
                                        memset(&buf_280, 0, sizeof(char)                                        *(128)                                        );
                                        strncpy(buf_280,"0x",128);
                                        while(_while_condtional24=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                        _while_condtional24) {
                                            char buf2_281[2];
                                            memset(&buf2_281, 0, sizeof(char)                                            *(2)                                            );
                                            buf2_281[0]=*info->p;
                                            buf2_281[1]=0;
                                            info->p++;
                                            strncat(buf_280,buf2_281,128);
                                        }
                                        n_282=strtoll(buf_280,((void*)0),0);
                                        c_277=n_282;
                                    }
                                    break;
                                    default:
                                    c_277=*info->p;
                                    info->p++;
                                    break;
                                }
                            }
                        }
                        else {
                            p2_283=*(unsigned char*)info->p;
                            if(_if_conditional285=p2_283>127,                            _if_conditional285) {
                                char str_285[4+1];
                                memset(&str_285, 0, sizeof(char)                                *(4+1)                                );
                                size_284=((p2_283&128)>>7)+((p2_283&64)>>6)+((p2_283&32)>>5)+((p2_283&16)>>4);
                                if(_if_conditional286=size_284>4,                                _if_conditional286) {
                                    err_msg(info,"invalid utf-8 character. MB_LEN_MAX");
                                    info->err_num++;
                                }
                                else {
                                    memcpy(str_285,info->p,size_284);
                                    str_285[size_284]=0;
                                    if(_if_conditional287=mbtowc(&c_277,str_285,size_284)<0,                                    _if_conditional287) {
                                        perror("mbtowc");
                                        err_msg(info,"invalid utf-8 character. mbtowc");
                                        info->err_num++;
                                        c_277=0;
                                    }
                                    info->p+=size_284;
                                }
                            }
                            else {
                                c_277=*info->p;
                                info->p++;
                            }
                        }
                        if(_if_conditional288=*info->p!=39,                        _if_conditional288) {
                            err_msg(info,"close \' to make character value");
                            info->err_num++;
                        }
                        else {
                            info->p++;
                            skip_spaces_and_lf(info);
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 1875, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sWCharNode*)(right_value464=sWCharNode_initialize((struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value463=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "06str.c", 1875, "struct sWCharNode")))),c_277,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sWCharNode_finalize;
                            _inf_value7->clone=(void*)sWCharNode_clone;
                            _inf_value7->compile=(void*)sWCharNode_compile;
                            _inf_value7->sline=(void*)sWCharNode_sline;
                            _inf_value7->sname=(void*)sWCharNode_sname;
                            _inf_value7->terminated=(void*)sWCharNode_terminated;
                            _inf_value7->kind=(void*)sWCharNode_kind;
                            __result167__ = __result_obj__ = ((struct sNode*)(right_value467=_inf_value7));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value463);
                            if(right_value463 && right_value463 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value463, right_value463 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value464);
                            if(right_value464 && right_value464 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value464, right_value464 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value467);
                            if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { right_value467 = come_decrement_ref_count(right_value467, ((struct sNode*)right_value467)->finalize, ((struct sNode*)right_value467)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value467, right_value467 = (void*)0;
                            __freed_obj__ = 0;
                            return __result167__;
                        }
                    }
                    else {
                        if(_if_conditional294=*info->p==76&&*(info->p+1)==34,                        _if_conditional294) {
                            info->p+=2;
                            sline_287=info->sline;
                            value_288=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value469=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value468=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 1884, "struct buffer"))))))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value468);
                            if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value468, right_value468 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value469);
                            if(right_value469 && right_value469 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value469, right_value469 = (void*)0;
                            __freed_obj__ = 0;
                            while(_while_condtional25=1,                            _while_condtional25) {
                                if(_if_conditional295=*info->p==34,                                _if_conditional295) {
                                    info->p++;
                                    p_289=info->p;
                                    sline_290=info->sline;
                                    skip_spaces_and_lf(info);
                                    if(_if_conditional296=*info->p==34,                                    _if_conditional296) {
                                        info->p++;
                                    }
                                    else {
                                        info->p=p_289;
                                        info->sline=sline_290;
                                        break;
                                    }
                                }
                                else {
                                    if(_if_conditional297=*info->p==92,                                    _if_conditional297) {
                                        info->p++;
                                        if(_if_conditional298=xisdigit(*info->p),                                        _if_conditional298) {
                                            len_291=0;
                                            n_292=0;
                                            while(_while_condtional26=xisdigit(*info->p)&&len_291<3,                                            _while_condtional26) {
                                                n_292=n_292*8+*info->p-48;
                                                info->p++;
                                                len_291++;
                                            }
                                            buffer_append_char(value_288,n_292);
                                        }
                                        else {
                                            if(_if_conditional299=*info->p==120||*info->p==88,                                            _if_conditional299) {
                                                info->p++;
                                                char buf_293[128];
                                                memset(&buf_293, 0, sizeof(char)                                                *(128)                                                );
                                                strncpy(buf_293,"0x",128);
                                                while(_while_condtional27=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                _while_condtional27) {
                                                    char buf2_294[2];
                                                    memset(&buf2_294, 0, sizeof(char)                                                    *(2)                                                    );
                                                    buf2_294[0]=*info->p;
                                                    buf2_294[1]=0;
                                                    info->p++;
                                                    strncat(buf_293,buf2_294,128);
                                                }
                                                n_296=strtoll(buf_293,((void*)0),0);
                                                buffer_append_char(value_288,(char)n_296);
                                            }
                                            else {
                                                switch (*info->p) {
                                                    case 48:
                                                    buffer_append_char(value_288,0);
                                                    info->p++;
                                                    break;
                                                    case 110:
                                                    buffer_append_char(value_288,10);
                                                    info->p++;
                                                    break;
                                                    case 116:
                                                    buffer_append_char(value_288,9);
                                                    info->p++;
                                                    break;
                                                    case 114:
                                                    buffer_append_char(value_288,13);
                                                    info->p++;
                                                    break;
                                                    case 118:
                                                    buffer_append_char(value_288,11);
                                                    info->p++;
                                                    break;
                                                    case 102:
                                                    buffer_append_char(value_288,12);
                                                    info->p++;
                                                    break;
                                                    case 97:
                                                    buffer_append_char(value_288,7);
                                                    info->p++;
                                                    break;
                                                    case 98:
                                                    buffer_append_char(value_288,8);
                                                    info->p++;
                                                    break;
                                                    case 92:
                                                    buffer_append_char(value_288,92);
                                                    info->p++;
                                                    break;
                                                    default:
                                                    buffer_append_char(value_288,*info->p);
                                                    info->p++;
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else {
                                        if(_if_conditional300=*info->p==0,                                        _if_conditional300) {
                                            sline2_297=info->sline;
                                            info->sline=sline_287;
                                            err_msg(info,"close \" to make c string value");
                                            exit(2);
                                        }
                                        else {
                                            if(_if_conditional301=*info->p==10,                                            _if_conditional301) {
                                                info->sline++;
                                            }
                                            buffer_append_char(value_288,*info->p);
                                            info->p++;
                                        }
                                    }
                                }
                            }
                            skip_spaces_and_lf(info);
                            len_298=value_288->len;
                            wstr_299=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value470=(unsigned int*)come_calloc(1, sizeof(unsigned int)*(1*(len_298+1)), "06str.c", 2007, "unsigned int"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value470);
                            if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { right_value470 = come_decrement_ref_count(right_value470, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value470, right_value470 = (void*)0;
                            __freed_obj__ = 0;
                            str_300=value_288->buf;
                            if(_if_conditional302=mbstowcs(wstr_299,str_300,len_298+1)<0,                            _if_conditional302) {
                                perror("mbstowcs");
                                exit(1);
                            }
                            wstr_299[len_298]=0;
                            _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2018, "struct sNode");
                            _inf_obj_value8=come_increment_ref_count(((struct sWStringNode*)(right_value472=sWStringNode_initialize((struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value471=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "06str.c", 2018, "struct sWStringNode")))),(unsigned int*)come_increment_ref_count(wstr_299),sline_287,info))));
                            _inf_value8->_protocol_obj=_inf_obj_value8;
                            _inf_value8->finalize=(void*)sWStringNode_finalize;
                            _inf_value8->clone=(void*)sWStringNode_clone;
                            _inf_value8->compile=(void*)sWStringNode_compile;
                            _inf_value8->sline=(void*)sWStringNode_sline;
                            _inf_value8->sname=(void*)sWStringNode_sname;
                            _inf_value8->terminated=(void*)sWStringNode_terminated;
                            _inf_value8->kind=(void*)sWStringNode_kind;
                            __result170__ = __result_obj__ = ((struct sNode*)(right_value476=_inf_value8));
                            if(value_288 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_288, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_299 && !__freed_obj__) { wstr_299 = come_decrement_ref_count(wstr_299, (void*)0, (void*)0, 0, 0, 0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value471);
                            if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value471, right_value471 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value472);
                            if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value472, right_value472 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value476);
                            if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { right_value476 = come_decrement_ref_count(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value476, right_value476 = (void*)0;
                            __freed_obj__ = 0;
                            return __result170__;
                            if(value_288 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_288, (void*)0, (void*)0, 0, 0, 0, 0); }
                            if(wstr_299 && !__freed_obj__) { wstr_299 = come_decrement_ref_count(wstr_299, (void*)0, (void*)0, 0, 0, 0); }
                        }
                        else {
                            if(_if_conditional309=(*info->p==115||*info->p==83)&&*(info->p+1)==34,                            _if_conditional309) {
                                info->p+=2;
                                sline_302=info->sline;
                                exps_303=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value478=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value477=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2026, "struct list$1sNodeph"))))))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value477);
                                if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value477, right_value477 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value478);
                                if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value478, right_value478 = (void*)0;
                                __freed_obj__ = 0;
                                value_304=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value480=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value479=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2027, "struct buffer"))))))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value479);
                                if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value479, right_value479 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value480);
                                if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value480, right_value480 = (void*)0;
                                __freed_obj__ = 0;
                                while(_while_condtional28=1,                                _while_condtional28) {
                                    if(_if_conditional310=*info->p==34,                                    _if_conditional310) {
                                        info->p++;
                                        p_305=info->p;
                                        sline_306=info->sline;
                                        skip_spaces_and_lf(info);
                                        if(_if_conditional311=*info->p==34,                                        _if_conditional311) {
                                            info->p++;
                                        }
                                        else {
                                            info->p=p_305;
                                            info->sline=sline_306;
                                            break;
                                        }
                                    }
                                    else {
                                        if(_if_conditional312=*info->p==37,                                        _if_conditional312) {
                                            buffer_append_char(value_304,37);
                                            buffer_append_char(value_304,37);
                                            info->p++;
                                        }
                                        else {
                                            if(_if_conditional313=*info->p==36,                                            _if_conditional313) {
                                                info->p++;
                                                exp_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value481=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value481);
                                                if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { right_value481 = come_decrement_ref_count(right_value481, ((struct sNode*)right_value481)->finalize, ((struct sNode*)right_value481)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value481, right_value481 = (void*)0;
                                                __freed_obj__ = 0;
                                                list$1sNodeph_add(exps_303,(struct sNode*)come_increment_ref_count(exp_307));
                                                buffer_append_str(value_304,"%s");
                                                p_308=info->p-1;
                                                while(_while_condtional29=*p_308==32||*p_308==9,                                                _while_condtional29) {
                                                    p_308--;
                                                }
                                                info->p=p_308+1;
                                                if(exp_307 && !__freed_obj__) { exp_307 = come_decrement_ref_count(exp_307, ((struct sNode*)exp_307)->finalize, ((struct sNode*)exp_307)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            else {
                                                if(_if_conditional314=*info->p==92,                                                _if_conditional314) {
                                                    buffer_append_char(value_304,92);
                                                    info->p++;
                                                    if(_if_conditional315=xisdigit(*info->p),                                                    _if_conditional315) {
                                                        len_309=0;
                                                        while(_while_condtional30=xisdigit(*info->p)&&len_309<3,                                                        _while_condtional30) {
                                                            buffer_append_char(value_304,*info->p);
                                                            info->p++;
                                                            len_309++;
                                                        }
                                                    }
                                                    else {
                                                        if(_if_conditional316=*info->p==120||*info->p==88,                                                        _if_conditional316) {
                                                            buffer_append_char(value_304,*info->p);
                                                            info->p++;
                                                            while(_while_condtional31=*info->p>=48&&*info->p<=57||*info->p>=97&&*info->p<=102||*info->p>=65&&*info->p<=70,                                                            _while_condtional31) {
                                                                buffer_append_char(value_304,*info->p);
                                                                info->p++;
                                                            }
                                                        }
                                                        else {
                                                            if(_if_conditional317=*info->p==123,                                                            _if_conditional317) {
                                                                info->p++;
                                                                exp_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value482=expression_v13(info))));
                                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value482);
                                                                if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { right_value482 = come_decrement_ref_count(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0); } 
                                                                __right_value_freed_obj[0] = right_value482, right_value482 = (void*)0;
                                                                __freed_obj__ = 0;
                                                                list$1sNodeph_add(exps_303,(struct sNode*)come_increment_ref_count(exp_310));
                                                                if(_if_conditional318=*info->p==125,                                                                _if_conditional318) {
                                                                    info->p++;
                                                                }
                                                                buffer_append_str(value_304,"%s");
                                                                if(exp_310 && !__freed_obj__) { exp_310 = come_decrement_ref_count(exp_310, ((struct sNode*)exp_310)->finalize, ((struct sNode*)exp_310)->_protocol_obj, 0, 0, 0); } 
                                                            }
                                                            else {
                                                                switch (*info->p) {
                                                                    case 48:
                                                                    buffer_append_char(value_304,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 110:
                                                                    buffer_append_char(value_304,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 116:
                                                                    buffer_append_char(value_304,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 114:
                                                                    buffer_append_char(value_304,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 118:
                                                                    buffer_append_char(value_304,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 102:
                                                                    buffer_append_char(value_304,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 97:
                                                                    buffer_append_char(value_304,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 98:
                                                                    buffer_append_char(value_304,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    case 92:
                                                                    buffer_append_char(value_304,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                    default:
                                                                    buffer_append_char(value_304,*info->p);
                                                                    info->p++;
                                                                    break;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else {
                                                    if(_if_conditional319=*info->p==0,                                                    _if_conditional319) {
                                                        sline2_311=info->sline;
                                                        info->sline=sline_302;
                                                        err_msg(info,"close \" to make embbeded string value");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional320=*info->p==10,                                                        _if_conditional320) {
                                                            info->sline++;
                                                        }
                                                        buffer_append_char(value_304,*info->p);
                                                        info->p++;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                skip_spaces_and_lf(info);
                                _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2172, "struct sNode");
                                _inf_obj_value9=come_increment_ref_count(((struct sSStringNode*)(right_value485=sSStringNode_initialize((struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value483=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "06str.c", 2172, "struct sSStringNode")))),(char*)come_increment_ref_count(((char*)(right_value484=buffer_to_string(value_304)))),(struct list$1sNodeph*)come_increment_ref_count(exps_303),sline_302,info))));
                                _inf_value9->_protocol_obj=_inf_obj_value9;
                                _inf_value9->finalize=(void*)sSStringNode_finalize;
                                _inf_value9->clone=(void*)sSStringNode_clone;
                                _inf_value9->compile=(void*)sSStringNode_compile;
                                _inf_value9->sline=(void*)sSStringNode_sline;
                                _inf_value9->sname=(void*)sSStringNode_sname;
                                _inf_value9->terminated=(void*)sSStringNode_terminated;
                                _inf_value9->kind=(void*)sSStringNode_kind;
                                __result173__ = __result_obj__ = ((struct sNode*)(right_value490=_inf_value9));
                                if(exps_303 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_303, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_304 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_304, (void*)0, (void*)0, 0, 0, 0, 0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value483);
                                if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value483, right_value483 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value484);
                                if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { right_value484 = come_decrement_ref_count(right_value484, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value484, right_value484 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value485);
                                if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value485, right_value485 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value490);
                                if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { right_value490 = come_decrement_ref_count(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[3] = right_value490, right_value490 = (void*)0;
                                __freed_obj__ = 0;
                                return __result173__;
                                if(exps_303 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,exps_303, (void*)0, (void*)0, 0, 0, 0, 0); }
                                if(value_304 && !__freed_obj__) { come_call_finalizer(buffer_finalize,value_304, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            else {
                                if(_if_conditional329=*info->p==91,                                _if_conditional329) {
                                    info->p++;
                                    skip_spaces_and_lf(info);
                                    p_313=info->p;
                                    no_comma_314=info->no_comma;
                                    info->no_comma=(_Bool)1;
                                    node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value491=expression_v13(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value491);
                                    if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { right_value491 = come_decrement_ref_count(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value491, right_value491 = (void*)0;
                                    __freed_obj__ = 0;
                                    info->no_comma=no_comma_314;
                                    p2_316=info->p;
                                    first_element_source_317=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value493=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value492=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "06str.c", 2189, "struct buffer"))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value492);
                                    if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value492, right_value492 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value493);
                                    if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value493, right_value493 = (void*)0;
                                    __freed_obj__ = 0;
                                    buffer_append(first_element_source_317,p_313,p2_316-p_313);
                                    buffer_append_char(first_element_source_317,0);
                                    list_elements_318=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value495=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value494=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2194, "struct list$1sNodeph"))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value494);
                                    if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value494, right_value494 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value495);
                                    if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value495, right_value495 = (void*)0;
                                    __freed_obj__ = 0;
                                    map_keys_319=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value497=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value496=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2196, "struct list$1sNodeph"))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value496);
                                    if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value496, right_value496 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value497);
                                    if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value497, right_value497 = (void*)0;
                                    __freed_obj__ = 0;
                                    map_elements_320=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value499=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value498=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2197, "struct list$1sNodeph"))))))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value498);
                                    if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value498, right_value498 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value499);
                                    if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value499, right_value499 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional330=*info->p==58,                                    _if_conditional330) {
                                        info->p++;
                                        skip_spaces_and_lf(info);
                                        list$1sNodeph_push_back(map_keys_319,(struct sNode*)come_increment_ref_count(node_315));
                                        no_comma_321=info->no_comma;
                                        info->no_comma=(_Bool)1;
                                        node2_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value500=expression_v13(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value500);
                                        if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { right_value500 = come_decrement_ref_count(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value500, right_value500 = (void*)0;
                                        __freed_obj__ = 0;
                                        info->no_comma=no_comma_321;
                                        list$1sNodeph_push_back(map_elements_320,(struct sNode*)come_increment_ref_count(node2_322));
                                        if(_if_conditional331=*info->p==93,                                        _if_conditional331) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2219, "struct sNode");
                                            _inf_obj_value10=come_increment_ref_count(((struct sMapNode*)(right_value502=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value501=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2219, "struct sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_319),(struct list$1sNodeph*)come_increment_ref_count(map_elements_320),info))));
                                            _inf_value10->_protocol_obj=_inf_obj_value10;
                                            _inf_value10->finalize=(void*)sMapNode_finalize;
                                            _inf_value10->clone=(void*)sMapNode_clone;
                                            _inf_value10->compile=(void*)sMapNode_compile;
                                            _inf_value10->sline=(void*)sMapNode_sline;
                                            _inf_value10->sname=(void*)sMapNode_sname;
                                            _inf_value10->terminated=(void*)sMapNode_terminated;
                                            _inf_value10->kind=(void*)sMapNode_kind;
                                            __result176__ = __result_obj__ = ((struct sNode*)(right_value507=_inf_value10));
                                            if(node2_322 && !__freed_obj__) { node2_322 = come_decrement_ref_count(node2_322, ((struct sNode*)node2_322)->finalize, ((struct sNode*)node2_322)->_protocol_obj, 0, 0, 0); } 
                                            if(node_315 && !__freed_obj__) { node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_317 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_317, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_318 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value501);
                                            if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value501, right_value501 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value502);
                                            if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value502, right_value502 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value507);
                                            if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { right_value507 = come_decrement_ref_count(right_value507, ((struct sNode*)right_value507)->finalize, ((struct sNode*)right_value507)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[2] = right_value507, right_value507 = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result176__;
                                        }
                                        else {
                                            expected_next_character(44,info);
                                            while(_while_condtional32=(_Bool)1,                                            _while_condtional32) {
                                                no_comma_324=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node2_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value508);
                                                if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { right_value508 = come_decrement_ref_count(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value508, right_value508 = (void*)0;
                                                __freed_obj__ = 0;
                                                info->no_comma=no_comma_324;
                                                list$1sNodeph_push_back(map_keys_319,(struct sNode*)come_increment_ref_count(node2_325));
                                                expected_next_character(58,info);
                                                no_comma_324=info->no_comma;
                                                info->no_comma=(_Bool)1;
                                                node3_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=expression_v13(info))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value509);
                                                if(right_value509 && right_value509 != __result_obj__ && !__freed_obj__) { right_value509 = come_decrement_ref_count(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value509, right_value509 = (void*)0;
                                                __freed_obj__ = 0;
                                                info->no_comma=no_comma_324;
                                                list$1sNodeph_push_back(map_elements_320,(struct sNode*)come_increment_ref_count(node3_326));
                                                if(_if_conditional340=*info->p==0,                                                _if_conditional340) {
                                                    err_msg(info,"invalid source end");
                                                    exit(2);
                                                }
                                                else {
                                                    if(_if_conditional341=*info->p==44,                                                    _if_conditional341) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                    }
                                                    else {
                                                        if(_if_conditional342=*info->p==93,                                                        _if_conditional342) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            if(node2_325 && !__freed_obj__) { node2_325 = come_decrement_ref_count(node2_325, ((struct sNode*)node2_325)->finalize, ((struct sNode*)node2_325)->_protocol_obj, 0, 0, 0); } 
                                                            if(node3_326 && !__freed_obj__) { node3_326 = come_decrement_ref_count(node3_326, ((struct sNode*)node3_326)->finalize, ((struct sNode*)node3_326)->_protocol_obj, 0, 0, 0); } 
                                                            break;
                                                        }
                                                        else {
                                                            err_msg(info,"invalid character(%c)(3)",*info->p);
                                                            exit(2);
                                                        }
                                                    }
                                                }
                                                if(node2_325 && !__freed_obj__) { node2_325 = come_decrement_ref_count(node2_325, ((struct sNode*)node2_325)->finalize, ((struct sNode*)node2_325)->_protocol_obj, 0, 0, 0); } 
                                                if(node3_326 && !__freed_obj__) { node3_326 = come_decrement_ref_count(node3_326, ((struct sNode*)node3_326)->finalize, ((struct sNode*)node3_326)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2264, "struct sNode");
                                            _inf_obj_value11=come_increment_ref_count(((struct sMapNode*)(right_value511=sMapNode_initialize((struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value510=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "06str.c", 2264, "struct sMapNode")))),(struct list$1sNodeph*)come_increment_ref_count(map_keys_319),(struct list$1sNodeph*)come_increment_ref_count(map_elements_320),info))));
                                            _inf_value11->_protocol_obj=_inf_obj_value11;
                                            _inf_value11->finalize=(void*)sMapNode_finalize;
                                            _inf_value11->clone=(void*)sMapNode_clone;
                                            _inf_value11->compile=(void*)sMapNode_compile;
                                            _inf_value11->sline=(void*)sMapNode_sline;
                                            _inf_value11->sname=(void*)sMapNode_sname;
                                            _inf_value11->terminated=(void*)sMapNode_terminated;
                                            _inf_value11->kind=(void*)sMapNode_kind;
                                            __result179__ = __result_obj__ = ((struct sNode*)(right_value516=_inf_value11));
                                            if(node2_322 && !__freed_obj__) { node2_322 = come_decrement_ref_count(node2_322, ((struct sNode*)node2_322)->finalize, ((struct sNode*)node2_322)->_protocol_obj, 0, 0, 0); } 
                                            if(node_315 && !__freed_obj__) { node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0); } 
                                            if(first_element_source_317 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_317, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(list_elements_318 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_keys_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            if(map_elements_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value510);
                                            if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value510, right_value510 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value511);
                                            if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[1] = right_value511, right_value511 = (void*)0;
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value516);
                                            if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { right_value516 = come_decrement_ref_count(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[2] = right_value516, right_value516 = (void*)0;
                                            __freed_obj__ = 0;
                                            return __result179__;
                                        }
                                        if(node2_322 && !__freed_obj__) { node2_322 = come_decrement_ref_count(node2_322, ((struct sNode*)node2_322)->finalize, ((struct sNode*)node2_322)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    else {
                                        if(_if_conditional351=*info->p==93,                                        _if_conditional351) {
                                            info->p++;
                                            skip_spaces_and_lf(info);
                                            list$1sNodeph_push_back(list_elements_318,(struct sNode*)come_increment_ref_count(node_315));
                                        }
                                        else {
                                            if(_if_conditional352=*info->p==44,                                            _if_conditional352) {
                                                info->p++;
                                                skip_spaces_and_lf(info);
                                                list$1sNodeph_push_back(list_elements_318,(struct sNode*)come_increment_ref_count(node_315));
                                                while(_while_condtional33=(_Bool)1,                                                _while_condtional33) {
                                                    no_comma_328=info->no_comma;
                                                    info->no_comma=(_Bool)1;
                                                    node2_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value517=expression_v13(info))));
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value517);
                                                    if(right_value517 && right_value517 != __result_obj__ && !__freed_obj__) { right_value517 = come_decrement_ref_count(right_value517, ((struct sNode*)right_value517)->finalize, ((struct sNode*)right_value517)->_protocol_obj, 1, 0, 0); } 
                                                    __right_value_freed_obj[0] = right_value517, right_value517 = (void*)0;
                                                    __freed_obj__ = 0;
                                                    info->no_comma=no_comma_328;
                                                    list$1sNodeph_push_back(list_elements_318,(struct sNode*)come_increment_ref_count(node2_329));
                                                    if(_if_conditional353=*info->p==0,                                                    _if_conditional353) {
                                                        err_msg(info,"invalid source end");
                                                        exit(2);
                                                    }
                                                    else {
                                                        if(_if_conditional354=*info->p==44,                                                        _if_conditional354) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                        }
                                                        else {
                                                            if(_if_conditional355=*info->p==93,                                                            _if_conditional355) {
                                                                info->p++;
                                                                skip_spaces_and_lf(info);
                                                                if(node2_329 && !__freed_obj__) { node2_329 = come_decrement_ref_count(node2_329, ((struct sNode*)node2_329)->finalize, ((struct sNode*)node2_329)->_protocol_obj, 0, 0, 0); } 
                                                                break;
                                                            }
                                                            else {
                                                                err_msg(info,"invalid character(%c)(4)",*info->p);
                                                                exit(2);
                                                            }
                                                        }
                                                    }
                                                    if(node2_329 && !__freed_obj__) { node2_329 = come_decrement_ref_count(node2_329, ((struct sNode*)node2_329)->finalize, ((struct sNode*)node2_329)->_protocol_obj, 0, 0, 0); } 
                                                }
                                            }
                                            else {
                                                err_msg(info,"invalid character(%c)(5)",*info->p);
                                                exit(2);
                                            }
                                        }
                                    }
                                    if(_if_conditional356=list$1sNodeph_length(list_elements_318)>0,                                    _if_conditional356) {
                                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2315, "struct sNode");
                                        _inf_obj_value12=come_increment_ref_count(((struct sListNode*)(right_value519=sListNode_initialize((struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value518=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "06str.c", 2315, "struct sListNode")))),(struct list$1sNodeph*)come_increment_ref_count(list_elements_318),info))));
                                        _inf_value12->_protocol_obj=_inf_obj_value12;
                                        _inf_value12->finalize=(void*)sListNode_finalize;
                                        _inf_value12->clone=(void*)sListNode_clone;
                                        _inf_value12->compile=(void*)sListNode_compile;
                                        _inf_value12->sline=(void*)sListNode_sline;
                                        _inf_value12->sname=(void*)sListNode_sname;
                                        _inf_value12->terminated=(void*)sListNode_terminated;
                                        _inf_value12->kind=(void*)sListNode_kind;
                                        __result182__ = __result_obj__ = ((struct sNode*)(right_value523=_inf_value12));
                                        if(node_315 && !__freed_obj__) { node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0); } 
                                        if(first_element_source_317 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_317, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(list_elements_318 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_keys_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        if(map_elements_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value518);
                                        if(right_value518 && right_value518 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value518, right_value518 = (void*)0;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value519);
                                        if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value519, right_value519 = (void*)0;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value523);
                                        if(right_value523 && right_value523 != __result_obj__ && !__freed_obj__) { right_value523 = come_decrement_ref_count(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[2] = right_value523, right_value523 = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result182__;
                                    }
                                    else {
                                    }
                                    if(node_315 && !__freed_obj__) { node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0); } 
                                    if(first_element_source_317 && !__freed_obj__) { come_call_finalizer(buffer_finalize,first_element_source_317, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(list_elements_318 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,list_elements_318, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_keys_319 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_keys_319, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    if(map_elements_320 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,map_elements_320, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                else {
                                    ((struct sNode*)(right_value524=expression_node_v1(info)));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value524);
                                    if(right_value524 && right_value524 != __result_obj__ && !__freed_obj__) { right_value524 = come_decrement_ref_count(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value524, right_value524 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    __result183__ = __result_obj__ = (struct sNode*)((void*)0);
    return __result183__;
}

static void sStrNode_finalize(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional251;
_Bool _if_conditional252;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional251=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional251) {
                    if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, 0); }
                }
                if(_if_conditional252=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional252) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sStrNode* sStrNode_clone(struct sStrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional253;
struct sStrNode* __result156__;
void* right_value445;
struct sStrNode* result_264;
_Bool _if_conditional254;
void* right_value446;
char* __dec_obj135;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value447;
char* __dec_obj136;
struct sStrNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value445 = (void*)0;
memset(&result_264, 0, sizeof(struct sStrNode*));
right_value446 = (void*)0;
right_value447 = (void*)0;
                if(_if_conditional253=self==(void*)0,                _if_conditional253) {
                    __result156__ = __result_obj__ = (void*)0;
                    return __result156__;
                }
                result_264=(struct sStrNode*)come_increment_ref_count(((struct sStrNode*)(right_value445=(struct sStrNode*)come_calloc(1, sizeof(struct sStrNode)*(1), "sStrNode_clone", 3, "struct sStrNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value445);
                if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value445, right_value445 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional254=self!=((void*)0)&&self->value!=((void*)0),                _if_conditional254) {
                    __dec_obj135=result_264->value;
                    result_264->value=(char*)come_increment_ref_count(((char*)(right_value446=string_clone(self->value))));
                    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value446);
                    if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { right_value446 = come_decrement_ref_count(right_value446, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value446, right_value446 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional255=self!=((void*)0),                _if_conditional255) {
                    result_264->sline=self->sline;
                }
                if(_if_conditional256=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional256) {
                    __dec_obj136=result_264->sname;
                    result_264->sname=(char*)come_increment_ref_count(((char*)(right_value447=string_clone(self->sname))));
                    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
                    if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { right_value447 = come_decrement_ref_count(right_value447, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value447, right_value447 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result157__ = __result_obj__ = result_264;
                if(result_264 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result157__;
                if(result_264 && !__freed_obj__) { come_call_finalizer(sStrNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRegexNode_finalize(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional263;
_Bool _if_conditional264;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional263=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional263) {
                        if(self->str && !__freed_obj__) { self->str = come_decrement_ref_count(self->str, (void*)0, (void*)0, 0, 0, 0); }
                    }
                    if(_if_conditional264=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional264) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sRegexNode* sRegexNode_clone(struct sRegexNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional265;
struct sRegexNode* __result159__;
void* right_value454;
struct sRegexNode* result_269;
_Bool _if_conditional266;
void* right_value455;
char* __dec_obj137;
_Bool _if_conditional267;
_Bool _if_conditional268;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value456;
char* __dec_obj138;
struct sRegexNode* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value454 = (void*)0;
memset(&result_269, 0, sizeof(struct sRegexNode*));
right_value455 = (void*)0;
right_value456 = (void*)0;
                    if(_if_conditional265=self==(void*)0,                    _if_conditional265) {
                        __result159__ = __result_obj__ = (void*)0;
                        return __result159__;
                    }
                    result_269=(struct sRegexNode*)come_increment_ref_count(((struct sRegexNode*)(right_value454=(struct sRegexNode*)come_calloc(1, sizeof(struct sRegexNode)*(1), "sRegexNode_clone", 3, "struct sRegexNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value454);
                    if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value454, right_value454 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional266=self!=((void*)0)&&self->str!=((void*)0),                    _if_conditional266) {
                        __dec_obj137=result_269->str;
                        result_269->str=(char*)come_increment_ref_count(((char*)(right_value455=string_clone(self->str))));
                        if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value455);
                        if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { right_value455 = come_decrement_ref_count(right_value455, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value455, right_value455 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional267=self!=((void*)0),                    _if_conditional267) {
                        result_269->global=self->global;
                    }
                    if(_if_conditional268=self!=((void*)0),                    _if_conditional268) {
                        result_269->ignore_case=self->ignore_case;
                    }
                    if(_if_conditional269=self!=((void*)0),                    _if_conditional269) {
                        result_269->sline=self->sline;
                    }
                    if(_if_conditional270=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional270) {
                        __dec_obj138=result_269->sname;
                        result_269->sname=(char*)come_increment_ref_count(((char*)(right_value456=string_clone(self->sname))));
                        if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value456);
                        if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { right_value456 = come_decrement_ref_count(right_value456, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value456, right_value456 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    __result160__ = __result_obj__ = result_269;
                    if(result_269 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result160__;
                    if(result_269 && !__freed_obj__) { come_call_finalizer(sRegexNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sCharNode_finalize(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional276;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional276=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional276) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sCharNode* sCharNode_clone(struct sCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional277;
struct sCharNode* __result162__;
void* right_value460;
struct sCharNode* result_276;
_Bool _if_conditional278;
_Bool _if_conditional279;
_Bool _if_conditional280;
void* right_value461;
char* __dec_obj139;
struct sCharNode* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value460 = (void*)0;
memset(&result_276, 0, sizeof(struct sCharNode*));
right_value461 = (void*)0;
                            if(_if_conditional277=self==(void*)0,                            _if_conditional277) {
                                __result162__ = __result_obj__ = (void*)0;
                                return __result162__;
                            }
                            result_276=(struct sCharNode*)come_increment_ref_count(((struct sCharNode*)(right_value460=(struct sCharNode*)come_calloc(1, sizeof(struct sCharNode)*(1), "sCharNode_clone", 3, "struct sCharNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value460);
                            if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value460, right_value460 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional278=self!=((void*)0),                            _if_conditional278) {
                                result_276->value=self->value;
                            }
                            if(_if_conditional279=self!=((void*)0),                            _if_conditional279) {
                                result_276->sline=self->sline;
                            }
                            if(_if_conditional280=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional280) {
                                __dec_obj139=result_276->sname;
                                result_276->sname=(char*)come_increment_ref_count(((char*)(right_value461=string_clone(self->sname))));
                                if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value461);
                                if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { right_value461 = come_decrement_ref_count(right_value461, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value461, right_value461 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            __result163__ = __result_obj__ = result_276;
                            if(result_276 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result163__;
                            if(result_276 && !__freed_obj__) { come_call_finalizer(sCharNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWCharNode_finalize(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional289;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional289=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional289) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sWCharNode* sWCharNode_clone(struct sWCharNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional290;
struct sWCharNode* __result165__;
void* right_value465;
struct sWCharNode* result_286;
_Bool _if_conditional291;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value466;
char* __dec_obj140;
struct sWCharNode* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value465 = (void*)0;
memset(&result_286, 0, sizeof(struct sWCharNode*));
right_value466 = (void*)0;
                                if(_if_conditional290=self==(void*)0,                                _if_conditional290) {
                                    __result165__ = __result_obj__ = (void*)0;
                                    return __result165__;
                                }
                                result_286=(struct sWCharNode*)come_increment_ref_count(((struct sWCharNode*)(right_value465=(struct sWCharNode*)come_calloc(1, sizeof(struct sWCharNode)*(1), "sWCharNode_clone", 3, "struct sWCharNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value465);
                                if(right_value465 && right_value465 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value465, right_value465 = (void*)0;
                                __freed_obj__ = 0;
                                if(_if_conditional291=self!=((void*)0),                                _if_conditional291) {
                                    result_286->value=self->value;
                                }
                                if(_if_conditional292=self!=((void*)0),                                _if_conditional292) {
                                    result_286->sline=self->sline;
                                }
                                if(_if_conditional293=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional293) {
                                    __dec_obj140=result_286->sname;
                                    result_286->sname=(char*)come_increment_ref_count(((char*)(right_value466=string_clone(self->sname))));
                                    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value466);
                                    if(right_value466 && right_value466 != __result_obj__ && !__freed_obj__) { right_value466 = come_decrement_ref_count(right_value466, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value466, right_value466 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                __result166__ = __result_obj__ = result_286;
                                if(result_286 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result166__;
                                if(result_286 && !__freed_obj__) { come_call_finalizer(sWCharNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sWStringNode_finalize(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional303=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional303) {
                                    if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional304=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional304) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sWStringNode* sWStringNode_clone(struct sWStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional305;
struct sWStringNode* __result168__;
void* right_value473;
struct sWStringNode* result_301;
_Bool _if_conditional306;
void* right_value474;
unsigned int* __dec_obj141;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value475;
char* __dec_obj142;
struct sWStringNode* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value473 = (void*)0;
memset(&result_301, 0, sizeof(struct sWStringNode*));
right_value474 = (void*)0;
right_value475 = (void*)0;
                                if(_if_conditional305=self==(void*)0,                                _if_conditional305) {
                                    __result168__ = __result_obj__ = (void*)0;
                                    return __result168__;
                                }
                                result_301=(struct sWStringNode*)come_increment_ref_count(((struct sWStringNode*)(right_value473=(struct sWStringNode*)come_calloc(1, sizeof(struct sWStringNode)*(1), "sWStringNode_clone", 3, "struct sWStringNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value473);
                                if(right_value473 && right_value473 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value473, right_value473 = (void*)0;
                                __freed_obj__ = 0;
                                if(_if_conditional306=self!=((void*)0)&&self->value!=((void*)0),                                _if_conditional306) {
                                    __dec_obj141=result_301->value;
                                    result_301->value=(unsigned int*)come_increment_ref_count(((unsigned int*)(right_value474=(unsigned int*)come_memdup(self->value, "sWStringNode_clone", 4, "unsigned int*"))));
                                    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value474);
                                    if(right_value474 && right_value474 != __result_obj__ && !__freed_obj__) { right_value474 = come_decrement_ref_count(right_value474, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value474, right_value474 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional307=self!=((void*)0),                                _if_conditional307) {
                                    result_301->sline=self->sline;
                                }
                                if(_if_conditional308=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional308) {
                                    __dec_obj142=result_301->sname;
                                    result_301->sname=(char*)come_increment_ref_count(((char*)(right_value475=string_clone(self->sname))));
                                    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value475);
                                    if(right_value475 && right_value475 != __result_obj__ && !__freed_obj__) { right_value475 = come_decrement_ref_count(right_value475, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value475, right_value475 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                __result169__ = __result_obj__ = result_301;
                                if(result_301 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result169__;
                                if(result_301 && !__freed_obj__) { come_call_finalizer(sWStringNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSStringNode_finalize(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional321;
_Bool _if_conditional322;
_Bool _if_conditional323;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional321=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional321) {
                                        if(self->value && !__freed_obj__) { self->value = come_decrement_ref_count(self->value, (void*)0, (void*)0, 0, 0, 0); }
                                    }
                                    if(_if_conditional322=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional322) {
                                        if(self->exps && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->exps, (void*)0, (void*)0, 0, 0, 0, 0); }
                                    }
                                    if(_if_conditional323=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional323) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sSStringNode* sSStringNode_clone(struct sSStringNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional324;
struct sSStringNode* __result171__;
void* right_value486;
struct sSStringNode* result_312;
_Bool _if_conditional325;
void* right_value487;
char* __dec_obj143;
_Bool _if_conditional326;
void* right_value488;
struct list$1sNodeph* __dec_obj144;
_Bool _if_conditional327;
_Bool _if_conditional328;
void* right_value489;
char* __dec_obj145;
struct sSStringNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value486 = (void*)0;
memset(&result_312, 0, sizeof(struct sSStringNode*));
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value489 = (void*)0;
                                    if(_if_conditional324=self==(void*)0,                                    _if_conditional324) {
                                        __result171__ = __result_obj__ = (void*)0;
                                        return __result171__;
                                    }
                                    result_312=(struct sSStringNode*)come_increment_ref_count(((struct sSStringNode*)(right_value486=(struct sSStringNode*)come_calloc(1, sizeof(struct sSStringNode)*(1), "sSStringNode_clone", 3, "struct sSStringNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value486);
                                    if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value486, right_value486 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional325=self!=((void*)0)&&self->value!=((void*)0),                                    _if_conditional325) {
                                        __dec_obj143=result_312->value;
                                        result_312->value=(char*)come_increment_ref_count(((char*)(right_value487=string_clone(self->value))));
                                        if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value487);
                                        if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { right_value487 = come_decrement_ref_count(right_value487, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value487, right_value487 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional326=self!=((void*)0)&&self->exps!=((void*)0),                                    _if_conditional326) {
                                        __dec_obj144=result_312->exps;
                                        result_312->exps=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value488=list$1sNodephp_clone(self->exps))));
                                        if(__dec_obj144) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj144, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value488);
                                        if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value488, right_value488 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional327=self!=((void*)0),                                    _if_conditional327) {
                                        result_312->sline=self->sline;
                                    }
                                    if(_if_conditional328=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional328) {
                                        __dec_obj145=result_312->sname;
                                        result_312->sname=(char*)come_increment_ref_count(((char*)(right_value489=string_clone(self->sname))));
                                        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value489);
                                        if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { right_value489 = come_decrement_ref_count(right_value489, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value489, right_value489 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    __result172__ = __result_obj__ = result_312;
                                    if(result_312 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_312, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result172__;
                                    if(result_312 && !__freed_obj__) { come_call_finalizer(sSStringNode_finalize,result_312, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sMapNode_finalize(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                                if(_if_conditional343=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional343) {
                                                    if(self->map_key_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->map_key_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                if(_if_conditional344=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional344) {
                                                    if(self->map_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->map_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                }
                                                if(_if_conditional345=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional345) {
                                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                                }
}

static struct sMapNode* sMapNode_clone(struct sMapNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional346;
struct sMapNode* __result177__;
void* right_value512;
struct sMapNode* result_327;
_Bool _if_conditional347;
void* right_value513;
struct list$1sNodeph* __dec_obj149;
_Bool _if_conditional348;
void* right_value514;
struct list$1sNodeph* __dec_obj150;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value515;
char* __dec_obj151;
struct sMapNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value512 = (void*)0;
memset(&result_327, 0, sizeof(struct sMapNode*));
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
                                                if(_if_conditional346=self==(void*)0,                                                _if_conditional346) {
                                                    __result177__ = __result_obj__ = (void*)0;
                                                    return __result177__;
                                                }
                                                result_327=(struct sMapNode*)come_increment_ref_count(((struct sMapNode*)(right_value512=(struct sMapNode*)come_calloc(1, sizeof(struct sMapNode)*(1), "sMapNode_clone", 3, "struct sMapNode"))));
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value512);
                                                if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value512, right_value512 = (void*)0;
                                                __freed_obj__ = 0;
                                                if(_if_conditional347=self!=((void*)0)&&self->map_key_elements!=((void*)0),                                                _if_conditional347) {
                                                    __dec_obj149=result_327->map_key_elements;
                                                    result_327->map_key_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value513=list$1sNodephp_clone(self->map_key_elements))));
                                                    if(__dec_obj149) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj149, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value513);
                                                    if(right_value513 && right_value513 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value513, right_value513 = (void*)0;
                                                    __freed_obj__ = 0;
                                                }
                                                if(_if_conditional348=self!=((void*)0)&&self->map_elements!=((void*)0),                                                _if_conditional348) {
                                                    __dec_obj150=result_327->map_elements;
                                                    result_327->map_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value514=list$1sNodephp_clone(self->map_elements))));
                                                    if(__dec_obj150) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value514);
                                                    if(right_value514 && right_value514 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value514, right_value514 = (void*)0;
                                                    __freed_obj__ = 0;
                                                }
                                                if(_if_conditional349=self!=((void*)0),                                                _if_conditional349) {
                                                    result_327->sline=self->sline;
                                                }
                                                if(_if_conditional350=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional350) {
                                                    __dec_obj151=result_327->sname;
                                                    result_327->sname=(char*)come_increment_ref_count(((char*)(right_value515=string_clone(self->sname))));
                                                    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
                                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value515);
                                                    if(right_value515 && right_value515 != __result_obj__ && !__freed_obj__) { right_value515 = come_decrement_ref_count(right_value515, (void*)0, (void*)0, 1, 0, 0); }
                                                    __right_value_freed_obj[0] = right_value515, right_value515 = (void*)0;
                                                    __freed_obj__ = 0;
                                                }
                                                __result178__ = __result_obj__ = result_327;
                                                if(result_327 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 1, 0); }
                                                return __result178__;
                                                if(result_327 && !__freed_obj__) { come_call_finalizer(sMapNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sListNode_finalize(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional357;
_Bool _if_conditional358;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional357=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional357) {
                                                if(self->list_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->list_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
                                            }
                                            if(_if_conditional358=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional358) {
                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sListNode* sListNode_clone(struct sListNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional359;
struct sListNode* __result180__;
void* right_value520;
struct sListNode* result_330;
_Bool _if_conditional360;
void* right_value521;
struct list$1sNodeph* __dec_obj152;
_Bool _if_conditional361;
_Bool _if_conditional362;
void* right_value522;
char* __dec_obj153;
struct sListNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value520 = (void*)0;
memset(&result_330, 0, sizeof(struct sListNode*));
right_value521 = (void*)0;
right_value522 = (void*)0;
                                            if(_if_conditional359=self==(void*)0,                                            _if_conditional359) {
                                                __result180__ = __result_obj__ = (void*)0;
                                                return __result180__;
                                            }
                                            result_330=(struct sListNode*)come_increment_ref_count(((struct sListNode*)(right_value520=(struct sListNode*)come_calloc(1, sizeof(struct sListNode)*(1), "sListNode_clone", 3, "struct sListNode"))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value520);
                                            if(right_value520 && right_value520 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sListNode_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value520, right_value520 = (void*)0;
                                            __freed_obj__ = 0;
                                            if(_if_conditional360=self!=((void*)0)&&self->list_elements!=((void*)0),                                            _if_conditional360) {
                                                __dec_obj152=result_330->list_elements;
                                                result_330->list_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value521=list$1sNodephp_clone(self->list_elements))));
                                                if(__dec_obj152) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value521);
                                                if(right_value521 && right_value521 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value521, right_value521 = (void*)0;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional361=self!=((void*)0),                                            _if_conditional361) {
                                                result_330->sline=self->sline;
                                            }
                                            if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional362) {
                                                __dec_obj153=result_330->sname;
                                                result_330->sname=(char*)come_increment_ref_count(((char*)(right_value522=string_clone(self->sname))));
                                                if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value522);
                                                if(right_value522 && right_value522 != __result_obj__ && !__freed_obj__) { right_value522 = come_decrement_ref_count(right_value522, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value522, right_value522 = (void*)0;
                                                __freed_obj__ = 0;
                                            }
                                            __result181__ = __result_obj__ = result_330;
                                            if(result_330 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result181__;
                                            if(result_330 && !__freed_obj__) { come_call_finalizer(sListNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* parse_tuple(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value525;
void* right_value526;
struct list$1sNodeph* tuple_elements_331;
_Bool _while_condtional34;
char* p_332;
_Bool no_comma_333;
void* right_value527;
struct sNode* node_334;
_Bool _if_conditional363;
_Bool _if_conditional364;
void* right_value528;
void* right_value529;
struct sNode* _inf_value13;
struct sTupleNode* _inf_obj_value13;
void* right_value533;
struct sNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value525 = (void*)0;
right_value526 = (void*)0;
memset(&tuple_elements_331, 0, sizeof(struct list$1sNodeph*));
memset(&p_332, 0, sizeof(char*));
memset(&no_comma_333, 0, sizeof(_Bool));
right_value527 = (void*)0;
memset(&node_334, 0, sizeof(struct sNode*));
right_value528 = (void*)0;
right_value529 = (void*)0;
right_value533 = (void*)0;
    tuple_elements_331=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value526=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value525=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "06str.c", 2329, "struct list$1sNodeph"))))))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value525);
    if(right_value525 && right_value525 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value525, right_value525 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value526);
    if(right_value526 && right_value526 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value526, right_value526 = (void*)0;
    __freed_obj__ = 0;
    while(_while_condtional34=(_Bool)1,    _while_condtional34) {
        p_332=info->p;
        no_comma_333=info->no_comma;
        info->no_comma=(_Bool)1;
        node_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value527=expression_v13(info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value527);
        if(right_value527 && right_value527 != __result_obj__ && !__freed_obj__) { right_value527 = come_decrement_ref_count(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[0] = right_value527, right_value527 = (void*)0;
        __freed_obj__ = 0;
        info->no_comma=no_comma_333;
        list$1sNodeph_push_back(tuple_elements_331,(struct sNode*)come_increment_ref_count(node_334));
        if(_if_conditional363=*info->p==44,        _if_conditional363) {
            info->p++;
            skip_spaces_and_lf(info);
        }
        else {
            if(_if_conditional364=*info->p==41,            _if_conditional364) {
                info->p++;
                skip_spaces_and_lf(info);
                if(node_334 && !__freed_obj__) { node_334 = come_decrement_ref_count(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0); } 
                break;
            }
            else {
                err_msg(info,"invalid character(%c) in tuple expression",*info->p);
                exit(2);
            }
        }
        if(node_334 && !__freed_obj__) { node_334 = come_decrement_ref_count(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0); } 
    }
    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "06str.c", 2357, "struct sNode");
    _inf_obj_value13=come_increment_ref_count(((struct sTupleNode*)(right_value529=sTupleNode_initialize((struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value528=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "06str.c", 2357, "struct sTupleNode")))),(struct list$1sNodeph*)come_increment_ref_count(tuple_elements_331),info))));
    _inf_value13->_protocol_obj=_inf_obj_value13;
    _inf_value13->finalize=(void*)sTupleNode_finalize;
    _inf_value13->clone=(void*)sTupleNode_clone;
    _inf_value13->compile=(void*)sTupleNode_compile;
    _inf_value13->sline=(void*)sTupleNode_sline;
    _inf_value13->sname=(void*)sTupleNode_sname;
    _inf_value13->terminated=(void*)sTupleNode_terminated;
    _inf_value13->kind=(void*)sTupleNode_kind;
    __result186__ = __result_obj__ = ((struct sNode*)(right_value533=_inf_value13));
    if(tuple_elements_331 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_331, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value528);
    if(right_value528 && right_value528 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value528, right_value528 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value529);
    if(right_value529 && right_value529 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value529, right_value529 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value533);
    if(right_value533 && right_value533 != __result_obj__ && !__freed_obj__) { right_value533 = come_decrement_ref_count(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value533, right_value533 = (void*)0;
    __freed_obj__ = 0;
    return __result186__;
    if(tuple_elements_331 && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,tuple_elements_331, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sTupleNode_finalize(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional365;
_Bool _if_conditional366;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        if(_if_conditional365=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional365) {
            if(self->tuple_elements && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->tuple_elements, (void*)0, (void*)0, 0, 0, 0, 0); }
        }
        if(_if_conditional366=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional366) {
            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
        }
}

static struct sTupleNode* sTupleNode_clone(struct sTupleNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional367;
struct sTupleNode* __result184__;
void* right_value530;
struct sTupleNode* result_335;
_Bool _if_conditional368;
void* right_value531;
struct list$1sNodeph* __dec_obj154;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value532;
char* __dec_obj155;
struct sTupleNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value530 = (void*)0;
memset(&result_335, 0, sizeof(struct sTupleNode*));
right_value531 = (void*)0;
right_value532 = (void*)0;
        if(_if_conditional367=self==(void*)0,        _if_conditional367) {
            __result184__ = __result_obj__ = (void*)0;
            return __result184__;
        }
        result_335=(struct sTupleNode*)come_increment_ref_count(((struct sTupleNode*)(right_value530=(struct sTupleNode*)come_calloc(1, sizeof(struct sTupleNode)*(1), "sTupleNode_clone", 3, "struct sTupleNode"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value530);
        if(right_value530 && right_value530 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value530, right_value530 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional368=self!=((void*)0)&&self->tuple_elements!=((void*)0),        _if_conditional368) {
            __dec_obj154=result_335->tuple_elements;
            result_335->tuple_elements=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value531=list$1sNodephp_clone(self->tuple_elements))));
            if(__dec_obj154) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj154, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value531);
            if(right_value531 && right_value531 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value531, right_value531 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional369=self!=((void*)0),        _if_conditional369) {
            result_335->sline=self->sline;
        }
        if(_if_conditional370=self!=((void*)0)&&self->sname!=((void*)0),        _if_conditional370) {
            __dec_obj155=result_335->sname;
            result_335->sname=(char*)come_increment_ref_count(((char*)(right_value532=string_clone(self->sname))));
            if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value532);
            if(right_value532 && right_value532 != __result_obj__ && !__freed_obj__) { right_value532 = come_decrement_ref_count(right_value532, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value532, right_value532 = (void*)0;
            __freed_obj__ = 0;
        }
        __result185__ = __result_obj__ = result_335;
        if(result_335 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 1, 0); }
        return __result185__;
        if(result_335 && !__freed_obj__) { come_call_finalizer(sTupleNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 0, 0); }
}

