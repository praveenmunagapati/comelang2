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
struct sNullNodeX
{
    int sline;
    char* sname;
};
struct sNewNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sImplementsNode
{
    struct sNode* obj_exp;
    struct sType* inf_type;
    int sline;
    char* sname;
};
struct sTrueNode
{
    int sline;
    char* sname;
};
struct sFalseNode
{
    int sline;
    char* sname;
};
struct sSizeOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sSizeOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignOfNode2
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignOfExpNode2
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sAlignAsNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sAlignAsExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sForceDeleteNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDelegateNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sShareNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sBorrowNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sCloneNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDupeNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sDummyHeapNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCIncNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sGCDecNode
{
    struct sNode* node;
    int sline;
    char* sname;
};
struct sIsHeap
{
    struct sType* type;
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

struct sNode* post_position_operator2_v19(struct sNode* node, struct sInfo* info);

char* make_generics_function(struct sType* type, char* fun_name, struct sInfo* info);

struct sNode* parse_method_call_v20(struct sNode* obj, char* fun_name, struct sInfo* info);

struct sNode* string_node_v20(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* post_position_operator3_v20(struct sNode* node, struct sInfo* info);

struct sNode* top_level_v93(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNode* top_level_v92(char* buf, char* head, int head_sline, struct sInfo* info);

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info);

_Bool sNullNodeX_terminated();

char* sNullNodeX_kind();

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info);

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info);

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info);

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info);

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
int sNewNode_sline(struct sNewNode* self, struct sInfo* info);

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info);

_Bool sNewNode_terminated();

char* sNewNode_kind();

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info);

static void CVALUE_finalize(struct CVALUE* self);
static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self);
static _Bool list$1sNodeph_end(struct list$1sNodeph* self);
static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self);
static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNode* create_object(struct sType* type, struct sInfo* info);

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info);

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info);

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info);

_Bool sImplementsNode_terminated();

char* sImplementsNode_kind();

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info);

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self);
static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position);
static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self);
struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info);

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info);

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info);

_Bool sTrueNode_terminated();

char* sTrueNode_kind();

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info);

struct sNode* create_true_object(struct sInfo* info);

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info);

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info);

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info);

_Bool sFalseNode_terminated();

char* sFalseNode_kind();

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info);

struct sNode* create_false_object(struct sInfo* info);

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info);

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info);

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info);

_Bool sSizeOfNode_terminated();

char* sSizeOfNode_kind();

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info);

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info);

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info);

_Bool sSizeOfExpNode_terminated();

char* sSizeOfExpNode_kind();

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info);

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info);

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info);

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info);

_Bool sAlignOfNode_terminated();

char* sAlignOfNode_kind();

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info);

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info);

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info);

_Bool sAlignOfExpNode_terminated();

char* sAlignOfExpNode_kind();

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info);

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info);

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info);

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info);

_Bool sAlignOfNode2_terminated();

char* sAlignOfNode2_kind();

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info);

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info);

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info);

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info);

_Bool sAlignOfExpNode2_terminated();

char* sAlignOfExpNode2_kind();

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info);

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info);

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info);

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info);

_Bool sAlignAsNode_terminated();

char* sAlignAsNode_kind();

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info);

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info);

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info);

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info);

_Bool sAlignAsExpNode_terminated();

char* sAlignAsExpNode_kind();

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info);

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info);

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info);

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info);

_Bool sDeleteNode_terminated();

char* sDeleteNode_kind();

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info);

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info);

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info);

_Bool sForceDeleteNode_terminated();

char* sForceDeleteNode_kind();

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info);

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info);

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info);

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info);

_Bool sDelegateNode_terminated();

char* sDelegateNode_kind();

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info);

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info);

int sShareNode_sline(struct sShareNode* self, struct sInfo* info);

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info);

_Bool sShareNode_terminated();

char* sShareNode_kind();

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info);

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info);

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info);

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info);

_Bool sBorrowNode_terminated();

char* sBorrowNode_kind();

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info);

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info);

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info);

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info);

_Bool sCloneNode_terminated();

char* sCloneNode_kind();

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info);

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self);
struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info);

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info);

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info);

_Bool sDupeNode_terminated();

char* sDupeNode_kind();

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info);

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info);

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info);

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info);

_Bool sDummyHeapNode_terminated();

char* sDummyHeapNode_kind();

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info);

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info);

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info);

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info);

_Bool sGCIncNode_terminated();

char* sGCIncNode_kind();

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info);

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info);

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info);

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info);

_Bool sGCDecNode_terminated();

char* sGCDecNode_kind();

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info);

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info);

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info);

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info);

_Bool sIsHeap_terminated();

char* sIsHeap_kind();

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info);

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info);

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self);
static void sNewNode_finalize(struct sNewNode* self);
static struct sNewNode* sNewNode_clone(struct sNewNode* self);
static void sTrueNode_finalize(struct sTrueNode* self);
static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self);
static void sFalseNode_finalize(struct sFalseNode* self);
static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self);
static void sDeleteNode_finalize(struct sDeleteNode* self);
static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self);
static void sForceDeleteNode_finalize(struct sForceDeleteNode* self);
static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self);
static void sBorrowNode_finalize(struct sBorrowNode* self);
static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self);
static void sDelegateNode_finalize(struct sDelegateNode* self);
static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self);
static void sShareNode_finalize(struct sShareNode* self);
static struct sShareNode* sShareNode_clone(struct sShareNode* self);
static void sCloneNode_finalize(struct sCloneNode* self);
static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self);
static void sDupeNode_finalize(struct sDupeNode* self);
static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self);
static void sDummyHeapNode_finalize(struct sDummyHeapNode* self);
static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self);
static void sGCIncNode_finalize(struct sGCIncNode* self);
static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self);
static void sGCDecNode_finalize(struct sGCDecNode* self);
static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self);
static void sIsHeap_finalize(struct sIsHeap* self);
static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self);
static void sSizeOfNode_finalize(struct sSizeOfNode* self);
static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self);
static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self);
static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self);
static void sAlignOfNode_finalize(struct sAlignOfNode* self);
static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self);
static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self);
static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self);
static void sAlignOfNode2_finalize(struct sAlignOfNode2* self);
static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self);
static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self);
static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self);
static void sAlignAsNode_finalize(struct sAlignAsNode* self);
static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self);
static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self);
static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self);
struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNodeX_finalize(struct sNullNodeX* self);
static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self);
struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info);

static void sImplementsNode_finalize(struct sImplementsNode* self);
static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1951, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1961, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1971, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1981, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1991, "struct smart_pointer$1long"))));
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

struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value10;
char* __dec_obj6;
struct sNullNodeX* __result7__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value10=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value10 = come_decrement_ref_count2(right_value10, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result7__ = __result_obj__ = self;
    come_call_finalizer2(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result7__;
    come_call_finalizer2(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNodeX_terminated(){
void* __result_obj__;
_Bool __result8__;
memset(&__result_obj__, 0, sizeof(void*));
    __result8__ = (_Bool)0;
    return __result8__;
}

char* sNullNodeX_kind(){
void* __result_obj__;
void* right_value11;
char* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
    __result9__ = __result_obj__ = ((char*)(right_value11=__builtin_string("sNullNodeX")));
    right_value11 = come_decrement_ref_count2(right_value11, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result9__;
}

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __result10__;
memset(&__result_obj__, 0, sizeof(void*));
    __result10__ = (_Bool)1;
    return __result10__;
}

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
int __result11__;
memset(&__result_obj__, 0, sizeof(void*));
    __result11__ = self->sline;
    return __result11__;
}

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value12;
char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value12 = (void*)0;
    __result12__ = __result_obj__ = ((char*)(right_value12=__builtin_string(self->sname)));
    right_value12 = come_decrement_ref_count2(right_value12, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result12__;
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value47;
struct sType* __dec_obj29;
void* right_value48;
char* __dec_obj30;
struct sNewNode* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value47 = (void*)0;
right_value48 = (void*)0;
    __dec_obj29=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value47=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value47, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj30=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value48=__builtin_string(info->sname))));
    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result31__ = __result_obj__ = self;
    come_call_finalizer2(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result31__;
    come_call_finalizer2(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional6;
struct sType* __result13__;
void* right_value13;
struct sType* result_5;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value16;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value17;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional29;
void* right_value18;
char* __dec_obj10;
_Bool _if_conditional30;
void* right_value25;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional34;
void* right_value33;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value34;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional49;
void* right_value41;
struct list$1charph* __dec_obj23;
_Bool _if_conditional53;
void* right_value42;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value43;
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
void* right_value44;
struct sNode* __dec_obj26;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value45;
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
void* right_value46;
char* __dec_obj28;
struct sType* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value16 = (void*)0;
right_value17 = (void*)0;
right_value18 = (void*)0;
right_value25 = (void*)0;
right_value33 = (void*)0;
right_value34 = (void*)0;
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
        if(_if_conditional6=self==(void*)0,        _if_conditional6) {
            __result13__ = __result_obj__ = (void*)0;
            return __result13__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value13=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional23=self!=((void*)0),        _if_conditional23) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional24) {
            __dec_obj8=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value16=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional29) {
            __dec_obj10=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value18=string_clone(self->mGenericsName))));
            __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value18 = come_decrement_ref_count2(right_value18, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional30) {
            __dec_obj14=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value25=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional34) {
            __dec_obj18=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value33=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional47=self!=((void*)0),        _if_conditional47) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional48) {
            __dec_obj19=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value34=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional49=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional49) {
            __dec_obj23=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value41=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional53) {
            __dec_obj24=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value42=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0),        _if_conditional54) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional55=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional55) {
            __dec_obj25=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value43=sNode_clone(self->mAlignas))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value43) { right_value43 = come_decrement_ref_count2(right_value43, ((struct sNode*)right_value43)->finalize, ((struct sNode*)right_value43)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mException=self->mException;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional79=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional79) {
            __dec_obj26=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value44=sNode_clone(self->mSizeNum))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value44) { right_value44 = come_decrement_ref_count2(right_value44, ((struct sNode*)right_value44)->finalize, ((struct sNode*)right_value44)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional82=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional82) {
            __dec_obj27=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value45=string_clone(self->mOriginalTypeName))));
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional91=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional91) {
            __dec_obj28=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value46=string_clone(self->mAsmName))));
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value46 = come_decrement_ref_count2(right_value46, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result30__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result30__;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
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
            if(_if_conditional7=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional7) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional9=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional9) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional10) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional11=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional11) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional13=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional13) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional16=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional16) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional19=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional19) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional20) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional21=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional21) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional22=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional22) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional8;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional8=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional8) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_6;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_6, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_7, 0, sizeof(struct list_item$1sTypeph*));
                    it_6=self->head;
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional12;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional12=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional12) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_8;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_9;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_8, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_9, 0, sizeof(struct list_item$1sNodeph*));
                    it_8=self->head;
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional14;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional14=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional14) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_10;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_10, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_11, 0, sizeof(struct list_item$1charph*));
                    it_10=self->head;
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional17;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional17=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional17) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
struct tuple1$1sTypeph* __result14__;
void* right_value14;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional27;
void* right_value15;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
right_value15 = (void*)0;
                if(_if_conditional25=self==(void*)0,                _if_conditional25) {
                    __result14__ = __result_obj__ = (void*)0;
                    return __result14__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional27) {
                    __dec_obj7=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value15=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result15__ = __result_obj__ = result_12;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result15__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional26;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional26) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
struct list$1sTypeph* __result16__;
void* right_value19;
void* right_value20;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value24;
struct list$1sTypeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value19 = (void*)0;
right_value20 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
right_value24 = (void*)0;
                if(_if_conditional31=self==((void*)0),                _if_conditional31) {
                    __result16__ = __result_obj__ = ((void*)0);
                    return __result16__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value20=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value19=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value24=sType_clone(it_14->item)))));
                    come_call_finalizer2(sType_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_14=it_14->next;
                }
                __result19__ = __result_obj__ = result_13;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result19__;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result17__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result17__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result17__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional32;
void* right_value21;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj11;
_Bool _if_conditional33;
void* right_value22;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj12;
void* right_value23;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj13;
struct list$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value21 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value22 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
right_value23 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional32=self->len==0,                        _if_conditional32) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value21=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj11=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional33=self->len==1,                            _if_conditional33) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value22=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj12=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value23=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj13=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_17;
                                self->tail=litem_17;
                            }
                        }
                        self->len++;
                        __result18__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result18__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional35;
struct list$1sNodeph* __result20__;
void* right_value26;
void* right_value27;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value32;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value26 = (void*)0;
right_value27 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value32 = (void*)0;
                if(_if_conditional35=self==((void*)0),                _if_conditional35) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value27=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value26=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value32=sNode_clone(it_19->item)))));
                    if(right_value32) { right_value32 = come_decrement_ref_count2(right_value32, ((struct sNode*)right_value32)->finalize, ((struct sNode*)right_value32)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_19=it_19->next;
                }
                __result25__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result25__;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result21__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result21__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional36;
void* right_value28;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional37;
void* right_value29;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value30;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value29 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value30 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional36=self->len==0,                        _if_conditional36) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value28=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj15=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional37=self->len==1,                            _if_conditional37) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value29=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj16=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value30=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj17=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj17) { __dec_obj17 = come_decrement_ref_count2(__dec_obj17, ((struct sNode*)__dec_obj17)->finalize, ((struct sNode*)__dec_obj17)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result22__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result22__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional38;
struct sNode* __result23__;
void* right_value31;
struct sNode* result_23;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
struct sNode* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional38=self==(void*)0,                        _if_conditional38) {
                            __result23__ = __result_obj__ = (void*)0;
                            return __result23__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value31) { right_value31 = come_decrement_ref_count2(right_value31, ((struct sNode*)right_value31)->finalize, ((struct sNode*)right_value31)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional39=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional39) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_23->kind=self->kind;
                        }
                        __result24__ = __result_obj__ = result_23;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result24__;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1charph* __result26__;
void* right_value35;
void* right_value36;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value40;
struct list$1charph* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
right_value35 = (void*)0;
right_value36 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value40 = (void*)0;
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    __result26__ = __result_obj__ = ((void*)0);
                    return __result26__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value36=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value35=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value40=string_clone(it_25->item)))));
                    right_value40 = come_decrement_ref_count2(right_value40, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_25=it_25->next;
                }
                __result29__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result29__;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result27__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result27__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value37;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional52;
void* right_value38;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value39;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value37 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value38 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value39 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value37=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj20=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional52=self->len==1,                            _if_conditional52) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value38=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj21=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value39=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj22=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                __dec_obj22 = come_decrement_ref_count2(__dec_obj22, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result28__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result28__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sNewNode_sline(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
int __result32__;
memset(&__result_obj__, 0, sizeof(void*));
    __result32__ = self->sline;
    return __result32__;
}

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value49;
char* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
    __result33__ = __result_obj__ = ((char*)(right_value49=__builtin_string(self->sname)));
    right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result33__;
}

_Bool sNewNode_terminated(){
void* __result_obj__;
_Bool __result34__;
memset(&__result_obj__, 0, sizeof(void*));
    __result34__ = (_Bool)0;
    return __result34__;
}

char* sNewNode_kind(){
void* __result_obj__;
void* right_value50;
char* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
    __result35__ = __result_obj__ = ((char*)(right_value50=__builtin_string("sNewNode")));
    right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result35__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_29;
void* right_value51;
struct CVALUE* come_value_30;
void* right_value52;
void* right_value53;
struct buffer* num_string_31;
struct list$1sNodeph* o2_saved_32;
struct sNode* it_35;
_Bool _if_conditional100;
_Bool __result43__;
void* right_value54;
struct CVALUE* cvalue_38;
void* right_value55;
void* right_value56;
struct sType* type2_39;
void* right_value57;
char* type_name_42;
void* right_value58;
void* right_value59;
char* __dec_obj31;
_Bool _if_conditional101;
void* right_value60;
char* __dec_obj32;
void* right_value61;
struct sType* __dec_obj33;
_Bool __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_29, 0, sizeof(struct sType*));
right_value51 = (void*)0;
memset(&come_value_30, 0, sizeof(struct CVALUE*));
right_value52 = (void*)0;
right_value53 = (void*)0;
memset(&num_string_31, 0, sizeof(struct buffer*));
memset(&o2_saved_32, 0, sizeof(struct list$1sNodeph*));
memset(&it_35, 0, sizeof(struct sNode*));
right_value54 = (void*)0;
memset(&cvalue_38, 0, sizeof(struct CVALUE*));
right_value55 = (void*)0;
right_value56 = (void*)0;
memset(&type2_39, 0, sizeof(struct sType*));
right_value57 = (void*)0;
memset(&type_name_42, 0, sizeof(char*));
right_value58 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
    type_29=self->type;
    come_value_30=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value51=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 85, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    num_string_31=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value53=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value52=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 87, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_31,"1");
    for(    o2_saved_32=(struct list$1sNodeph*)come_increment_ref_count((type_29->mArrayNum)),it_35=list$1sNodeph_begin((o2_saved_32));    !list$1sNodeph_end((o2_saved_32));    it_35=list$1sNodeph_next((o2_saved_32))    ){
        if(_if_conditional100=!node_compile(it_35,info),        _if_conditional100) {
            __result43__ = (_Bool)0;
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result43__;
        }
        cvalue_38=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value54=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        buffer_append_str(num_string_31,((char*)(right_value55=xsprintf("*(%s)",cvalue_38->c_value))));
        right_value55 = come_decrement_ref_count2(right_value55, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,cvalue_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type2_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value56=solve_generics(type_29,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_reset(type2_39->mArrayNum);
    type_name_42=(char*)come_increment_ref_count(((char*)(right_value57=make_type_name_string(type2_39,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj31=come_value_30->c_value;
    come_value_30->c_value=(char*)come_increment_ref_count(((char*)(right_value59=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_42,type_name_42,((char*)(right_value58=buffer_to_string(num_string_31))),info->sname,info->sline,type_name_42))));
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value59 = come_decrement_ref_count2(right_value59, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_39->mHeap=(_Bool)1;
    type2_39->mPointerNum++;
    if(type2_39->mNoSolvedGenericsType->v1) {
        type2_39->mNoSolvedGenericsType->v1->mPointerNum++;
        type2_39->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
    }
    __dec_obj32=come_value_30->c_value;
    come_value_30->c_value=(char*)come_increment_ref_count(((char*)(right_value60=append_object_to_right_values(come_value_30->c_value,(struct sType*)come_increment_ref_count(type2_39),info))));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj33=come_value_30->type;
    come_value_30->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value61=sType_clone(type2_39))));
    come_call_finalizer2(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_30->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_30->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_30));
    __result46__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_42 = come_decrement_ref_count2(type_name_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result46__;
    come_call_finalizer2(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_42 = come_decrement_ref_count2(type_name_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional94;
_Bool _if_conditional95;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional94=self!=((void*)0)&&self->c_value!=((void*)0),        _if_conditional94) {
            self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional95=self!=((void*)0)&&self->type!=((void*)0),        _if_conditional95) {
            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}

static struct sNode* list$1sNodeph_begin(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional96;
struct sNode* result_33;
struct sNode* __result36__;
_Bool _if_conditional97;
struct sNode* __result37__;
struct sNode* result_34;
struct sNode* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_33, 0, sizeof(struct sNode*));
memset(&result_34, 0, sizeof(struct sNode*));
        if(_if_conditional96=self==((void*)0),        _if_conditional96) {
            memset(&result_33,0,sizeof(struct sNode*));
            __result36__ = __result_obj__ = result_33;
            return __result36__;
        }
        self->it=self->head;
        if(self->it) {
            __result37__ = __result_obj__ = self->it->item;
            return __result37__;
        }
        memset(&result_34,0,sizeof(struct sNode*));
        __result38__ = __result_obj__ = result_34;
        return __result38__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
        __result39__ = self==((void*)0)||self->it==((void*)0);
        return __result39__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional98;
struct sNode* result_36;
struct sNode* __result40__;
_Bool _if_conditional99;
struct sNode* __result41__;
struct sNode* result_37;
struct sNode* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct sNode*));
memset(&result_37, 0, sizeof(struct sNode*));
        if(_if_conditional98=self==((void*)0)||self->it==((void*)0),        _if_conditional98) {
            memset(&result_36,0,sizeof(struct sNode*));
            __result40__ = __result_obj__ = result_36;
            return __result40__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result41__ = __result_obj__ = self->it->item;
            return __result41__;
        }
        memset(&result_37,0,sizeof(struct sNode*));
        __result42__ = __result_obj__ = result_37;
        return __result42__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_40;
_Bool _while_condtional7;
struct list_item$1sNodeph* prev_it_41;
struct list$1sNodeph* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_40, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_41, 0, sizeof(struct list_item$1sNodeph*));
        it_40=self->head;
        while(_while_condtional7=it_40!=((void*)0),        _while_condtional7) {
            prev_it_41=it_40;
            it_40=it_40->next;
            come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
        self->head=((void*)0);
        self->tail=((void*)0);
        self->len=0;
        __result44__ = __result_obj__ = self;
        return __result44__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional102;
void* right_value62;
struct list_item$1CVALUEph* litem_43;
struct CVALUE* __dec_obj34;
_Bool _if_conditional104;
void* right_value63;
struct list_item$1CVALUEph* litem_44;
struct CVALUE* __dec_obj35;
void* right_value64;
struct list_item$1CVALUEph* litem_45;
struct CVALUE* __dec_obj36;
struct list$1CVALUEph* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value62 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1CVALUEph*));
right_value63 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1CVALUEph*));
right_value64 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional102=self->len==0,        _if_conditional102) {
            litem_43=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value62=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 225, "struct list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            litem_43->prev=((void*)0);
            litem_43->next=((void*)0);
            __dec_obj34=litem_43->item;
            litem_43->item=(struct CVALUE*)come_increment_ref_count(item);
            come_call_finalizer2(CVALUE_finalize,__dec_obj34, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            self->tail=litem_43;
            self->head=litem_43;
        }
        else {
            if(_if_conditional104=self->len==1,            _if_conditional104) {
                litem_44=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value63=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 235, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_44->prev=self->head;
                litem_44->next=((void*)0);
                __dec_obj35=litem_44->item;
                litem_44->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_44;
                self->head->next=litem_44;
            }
            else {
                litem_45=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value64=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 245, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_45->prev=self->tail;
                litem_45->next=((void*)0);
                __dec_obj36=litem_45->item;
                litem_45->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj36, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail->next=litem_45;
                self->tail=litem_45;
            }
        }
        self->len++;
        __result45__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result45__;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional103;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional103=self!=((void*)0)&&self->item!=((void*)0),                _if_conditional103) {
                    come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sNode* create_object(struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value65;
void* right_value66;
struct sNode* _inf_value1;
struct sNewNode* _inf_obj_value1;
void* right_value70;
struct sNode* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value70 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 136, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNewNode*)(right_value66=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value65=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 136, "struct sNewNode")))),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNewNode_sline;
    _inf_value1->sname=(void*)sNewNode_sname;
    _inf_value1->terminated=(void*)sNewNode_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    __result49__ = __result_obj__ = ((struct sNode*)(right_value70=_inf_value1));
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sNewNode_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNewNode_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value70) { right_value70 = come_decrement_ref_count2(right_value70, ((struct sNode*)right_value70)->finalize, ((struct sNode*)right_value70)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result49__;
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__;
void* right_value71;
struct sNode* __dec_obj39;
void* right_value72;
struct sType* __dec_obj40;
void* right_value73;
char* __dec_obj41;
struct sImplementsNode* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
    __dec_obj39=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value71=sNode_clone(obj_exp))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value71) { right_value71 = come_decrement_ref_count2(right_value71, ((struct sNode*)right_value71)->finalize, ((struct sNode*)right_value71)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj40=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value72=sType_clone(inf_type))));
    come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj41=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value73=__builtin_string(info->sname))));
    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value73 = come_decrement_ref_count2(right_value73, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result50__ = __result_obj__ = self;
    come_call_finalizer2(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result50__;
    come_call_finalizer2(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
int __result51__;
memset(&__result_obj__, 0, sizeof(void*));
    __result51__ = self->sline;
    return __result51__;
}

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value74;
char* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
    __result52__ = __result_obj__ = ((char*)(right_value74=__builtin_string(self->sname)));
    right_value74 = come_decrement_ref_count2(right_value74, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result52__;
}

_Bool sImplementsNode_terminated(){
void* __result_obj__;
_Bool __result53__;
memset(&__result_obj__, 0, sizeof(void*));
    __result53__ = (_Bool)0;
    return __result53__;
}

char* sImplementsNode_kind(){
void* __result_obj__;
void* right_value75;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
right_value75 = (void*)0;
    __result54__ = __result_obj__ = ((char*)(right_value75=__builtin_string("sImplementsNode")));
    right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result54__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value76;
struct sNode* obj_exp_47;
void* right_value77;
struct sType* inf_type_48;
_Bool _if_conditional114;
_Bool __result55__;
void* right_value78;
struct CVALUE* come_value_49;
void* right_value79;
struct sType* type_50;
struct sClass* klass_51;
void* right_value80;
struct CVALUE* come_value2_52;
void* right_value81;
struct sType* type2_53;
void* right_value82;
char* type_name_54;
void* right_value83;
char* type_name2_55;
static int inf_num_56=0;
void* right_value84;
char* buf_57;
void* right_value85;
char* buf2_58;
void* right_value86;
struct sType* typeX_59;
void* right_value87;
void* right_value88;
int i_60;
void* right_value89;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_64;
struct sType* field_type_65;
void* right_value90;
char* method_name_66;
void* right_value91;
char* __dec_obj42;
void* right_value92;
struct sType* type3_67;
void* right_value93;
struct sType* __dec_obj43;
void* right_value94;
char* __dec_obj44;
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value76 = (void*)0;
memset(&obj_exp_47, 0, sizeof(struct sNode*));
right_value77 = (void*)0;
memset(&inf_type_48, 0, sizeof(struct sType*));
right_value78 = (void*)0;
memset(&come_value_49, 0, sizeof(struct CVALUE*));
right_value79 = (void*)0;
memset(&type_50, 0, sizeof(struct sType*));
memset(&klass_51, 0, sizeof(struct sClass*));
right_value80 = (void*)0;
memset(&come_value2_52, 0, sizeof(struct CVALUE*));
right_value81 = (void*)0;
memset(&type2_53, 0, sizeof(struct sType*));
right_value82 = (void*)0;
memset(&type_name_54, 0, sizeof(char*));
right_value83 = (void*)0;
memset(&type_name2_55, 0, sizeof(char*));
right_value84 = (void*)0;
memset(&buf_57, 0, sizeof(char*));
right_value85 = (void*)0;
memset(&buf2_58, 0, sizeof(char*));
right_value86 = (void*)0;
memset(&typeX_59, 0, sizeof(struct sType*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&i_60, 0, sizeof(int));
right_value89 = (void*)0;
memset(&name_64, 0, sizeof(char*));
memset(&field_type_65, 0, sizeof(struct sType*));
memset(&name_64, 0, sizeof(char*));
memset(&field_type_65, 0, sizeof(struct sType*));
right_value90 = (void*)0;
memset(&method_name_66, 0, sizeof(char*));
right_value91 = (void*)0;
right_value92 = (void*)0;
memset(&type3_67, 0, sizeof(struct sType*));
right_value93 = (void*)0;
right_value94 = (void*)0;
    obj_exp_47=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value76=sNode_clone(self->obj_exp))));
    if(right_value76) { right_value76 = come_decrement_ref_count2(right_value76, ((struct sNode*)right_value76)->finalize, ((struct sNode*)right_value76)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    inf_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value77=sType_clone(self->inf_type))));
    come_call_finalizer2(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional114=!node_compile(obj_exp_47,info),    _if_conditional114) {
        __result55__ = (_Bool)0;
        if(obj_exp_47) { obj_exp_47 = come_decrement_ref_count2(obj_exp_47, ((struct sNode*)obj_exp_47)->finalize, ((struct sNode*)obj_exp_47)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sType_finalize,inf_type_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result55__;
    }
    come_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value78=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_50=(struct sType*)come_increment_ref_count(((struct sType*)(right_value79=sType_clone(come_value_49->type))));
    come_call_finalizer2(sType_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_50->mPointerNum--;
    type_50->mHeap=(_Bool)0;
    klass_51=inf_type_48->mClass;
    come_value2_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value80=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 196, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(inf_type_48))));
    come_call_finalizer2(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_54=(char*)come_increment_ref_count(((char*)(right_value82=make_type_name_string(inf_type_48,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type_name2_55=(char*)come_increment_ref_count(((char*)(right_value83=make_type_name_string(type_50,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buf_57=(char*)come_increment_ref_count(((char*)(right_value84=xsprintf("%s* _inf_value%d;\n",type_name_54,++inf_num_56))));
    right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf_57);
    buf2_58=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("%s* _inf_obj_value%d;\n",type_name2_55,inf_num_56))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf2_58);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_56,type_name_54,type_name_54,info->sname,info->sline,type_name_54);
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_56,come_value_49->c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_56,inf_num_56);
    typeX_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=sType_clone(type_50))));
    come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    typeX_59->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(right_value87=create_finalizer_automatically(typeX_59,"finalize",info)));
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    ((struct tuple2$2sFunpcharph*)(right_value88=create_cloner_automatically(typeX_59,"clone",info)));
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_60=1;    i_60<list$1tuple2$2charphsTypephph_length(klass_51->mFields);    i_60++    ){
        multiple_assign_var1=((struct tuple2$2charphsTypeph*)(right_value89=list$1tuple2$2charphsTypephphp_operator_load_element(klass_51->mFields,i_60)));
        name_64=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_65=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        come_call_finalizer2(tuple2$2charphsTypephp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        method_name_66=(char*)come_increment_ref_count(((char*)(right_value90=create_method_name(type_50,(_Bool)0,name_64,info))));
        right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_56,name_64,method_name_66);
        name_64 = come_decrement_ref_count2(name_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        method_name_66 = come_decrement_ref_count2(method_name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj42=come_value2_52->c_value;
    come_value2_52->c_value=(char*)come_increment_ref_count(((char*)(right_value91=xsprintf("_inf_value%d",inf_num_56))));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value91 = come_decrement_ref_count2(right_value91, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value92=sType_clone(inf_type_48))));
    come_call_finalizer2(sType_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type3_67->mPointerNum++;
    type3_67->mHeap=(_Bool)1;
    type2_53->mHeap=(_Bool)1;
    __dec_obj43=come_value2_52->type;
    come_value2_52->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value93=sType_clone(type2_53))));
    come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj44=come_value2_52->c_value;
    come_value2_52->c_value=(char*)come_increment_ref_count(((char*)(right_value94=append_object_to_right_values(come_value2_52->c_value,(struct sType*)come_increment_ref_count(type3_67),info))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_value2_52->type->mPointerNum++;
    come_value2_52->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_52->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_52));
    __result59__ = (_Bool)1;
    if(obj_exp_47) { obj_exp_47 = come_decrement_ref_count2(obj_exp_47, ((struct sNode*)obj_exp_47)->finalize, ((struct sNode*)obj_exp_47)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_54 = come_decrement_ref_count2(type_name_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_55 = come_decrement_ref_count2(type_name2_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_57 = come_decrement_ref_count2(buf_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_58 = come_decrement_ref_count2(buf2_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,typeX_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result59__;
    if(obj_exp_47) { obj_exp_47 = come_decrement_ref_count2(obj_exp_47, ((struct sNode*)obj_exp_47)->finalize, ((struct sNode*)obj_exp_47)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_54 = come_decrement_ref_count2(type_name_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    type_name2_55 = come_decrement_ref_count2(type_name2_55, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf_57 = come_decrement_ref_count2(buf_57, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    buf2_58 = come_decrement_ref_count2(buf2_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,typeX_59, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type3_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional115;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional115=self!=((void*)0)&&self->v2!=((void*)0),        _if_conditional115) {
            self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
}

static int list$1tuple2$2charphsTypephph_length(struct list$1tuple2$2charphsTypephph* self){
void* __result_obj__;
int __result56__;
memset(&__result_obj__, 0, sizeof(void*));
        __result56__ = self->len;
        return __result56__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool _if_conditional116;
struct list_item$1tuple2$2charphsTypephph* it_61;
int i_62;
_Bool _while_condtional8;
_Bool _if_conditional117;
struct tuple2$2charphsTypeph* __result57__;
struct tuple2$2charphsTypeph* default_value_63;
struct tuple2$2charphsTypeph* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_61, 0, sizeof(struct list_item$1tuple2$2charphsTypephph*));
memset(&i_62, 0, sizeof(int));
memset(&default_value_63, 0, sizeof(struct tuple2$2charphsTypeph*));
            if(_if_conditional116=position<0,            _if_conditional116) {
                position+=self->len;
            }
            it_61=self->head;
            i_62=0;
            while(_while_condtional8=it_61!=((void*)0),            _while_condtional8) {
                if(_if_conditional117=position==i_62,                _if_conditional117) {
                    __result57__ = __result_obj__ = it_61->item;
                    return __result57__;
                }
                it_61=it_61->next;
                i_62++;
            }
            memset(&default_value_63,0,sizeof(struct tuple2$2charphsTypeph*));
            __result58__ = __result_obj__ = default_value_63;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result58__;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2charphsTypephp_finalize(struct tuple2$2charphsTypeph* self){
void* __result_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional118=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional118) {
                    self->v1 = come_decrement_ref_count2(self->v1, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional119=self!=((void*)0)&&self->v2!=((void*)0),                _if_conditional119) {
                    come_call_finalizer2(sType_finalize,self->v2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
}

struct sTrueNode* sTrueNode_initialize(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value95;
char* __dec_obj45;
struct sTrueNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value95=__builtin_string(info->sname))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result60__ = __result_obj__ = self;
    come_call_finalizer2(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result60__;
    come_call_finalizer2(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
int __result61__;
memset(&__result_obj__, 0, sizeof(void*));
    __result61__ = self->sline;
    return __result61__;
}

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value96;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
    __result62__ = __result_obj__ = ((char*)(right_value96=__builtin_string(self->sname)));
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result62__;
}

_Bool sTrueNode_terminated(){
void* __result_obj__;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    __result63__ = (_Bool)0;
    return __result63__;
}

char* sTrueNode_kind(){
void* __result_obj__;
void* right_value97;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
    __result64__ = __result_obj__ = ((char*)(right_value97=__builtin_string("sTrueNode")));
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result64__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value98;
struct CVALUE* come_value_68;
void* right_value99;
char* __dec_obj46;
void* right_value100;
void* right_value101;
struct sType* __dec_obj47;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
memset(&come_value_68, 0, sizeof(struct CVALUE*));
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
    come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value98=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 281, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj46=come_value_68->c_value;
    come_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value99=xsprintf("(_Bool)1"))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj47=come_value_68->type;
    come_value_68->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value101=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value100=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 284, "struct sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_68->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_68->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_68));
    __result65__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result65__;
    come_call_finalizer2(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__;
void* right_value102;
void* right_value103;
struct sNode* _inf_value2;
struct sTrueNode* _inf_obj_value2;
void* right_value106;
struct sNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value106 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 296, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sTrueNode*)(right_value103=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value102=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 296, "struct sTrueNode")))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sTrueNode_sline;
    _inf_value2->sname=(void*)sTrueNode_sname;
    _inf_value2->terminated=(void*)sTrueNode_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    __result68__ = __result_obj__ = ((struct sNode*)(right_value106=_inf_value2));
    come_call_finalizer2(sTrueNode_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sTrueNode_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value106) { right_value106 = come_decrement_ref_count2(right_value106, ((struct sNode*)right_value106)->finalize, ((struct sNode*)right_value106)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result68__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value107;
char* __dec_obj49;
struct sFalseNode* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
    self->sline=info->sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value107=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result69__ = __result_obj__ = self;
    come_call_finalizer2(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result69__;
    come_call_finalizer2(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
int __result70__;
memset(&__result_obj__, 0, sizeof(void*));
    __result70__ = self->sline;
    return __result70__;
}

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value108;
char* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value108 = (void*)0;
    __result71__ = __result_obj__ = ((char*)(right_value108=__builtin_string(self->sname)));
    right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result71__;
}

_Bool sFalseNode_terminated(){
void* __result_obj__;
_Bool __result72__;
memset(&__result_obj__, 0, sizeof(void*));
    __result72__ = (_Bool)0;
    return __result72__;
}

char* sFalseNode_kind(){
void* __result_obj__;
void* right_value109;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
    __result73__ = __result_obj__ = ((char*)(right_value109=__builtin_string("sFalseNode")));
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result73__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value110;
struct CVALUE* come_value_70;
void* right_value111;
char* __dec_obj50;
void* right_value112;
void* right_value113;
struct sType* __dec_obj51;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
memset(&come_value_70, 0, sizeof(struct CVALUE*));
right_value111 = (void*)0;
right_value112 = (void*)0;
right_value113 = (void*)0;
    come_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 334, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=come_value_70->c_value;
    come_value_70->c_value=(char*)come_increment_ref_count(((char*)(right_value111=xsprintf("(_Bool)0"))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj51=come_value_70->type;
    come_value_70->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value113=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value112=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 337, "struct sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value113, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_70->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_70->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_70));
    __result74__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result74__;
    come_call_finalizer2(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__;
void* right_value114;
void* right_value115;
struct sNode* _inf_value3;
struct sFalseNode* _inf_obj_value3;
void* right_value118;
struct sNode* __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value114 = (void*)0;
right_value115 = (void*)0;
right_value118 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 349, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFalseNode*)(right_value115=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value114=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 349, "struct sFalseNode")))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sFalseNode_sline;
    _inf_value3->sname=(void*)sFalseNode_sname;
    _inf_value3->terminated=(void*)sFalseNode_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    __result77__ = __result_obj__ = ((struct sNode*)(right_value118=_inf_value3));
    come_call_finalizer2(sFalseNode_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFalseNode_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value118) { right_value118 = come_decrement_ref_count2(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result77__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value119;
struct sType* __dec_obj53;
void* right_value120;
char* __dec_obj54;
struct sSizeOfNode* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
right_value120 = (void*)0;
    __dec_obj53=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value119=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj54=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value120=__builtin_string(info->sname))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result78__ = __result_obj__ = self;
    come_call_finalizer2(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result78__;
    come_call_finalizer2(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    __result79__ = self->sline;
    return __result79__;
}

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value121;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
    __result80__ = __result_obj__ = ((char*)(right_value121=__builtin_string(self->sname)));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result80__;
}

_Bool sSizeOfNode_terminated(){
void* __result_obj__;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
    __result81__ = (_Bool)0;
    return __result81__;
}

char* sSizeOfNode_kind(){
void* __result_obj__;
void* right_value122;
char* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    __result82__ = __result_obj__ = ((char*)(right_value122=__builtin_string("sSizeOfNode")));
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result82__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_72;
void* right_value123;
struct CVALUE* come_value_73;
void* right_value124;
struct sType* type2_74;
void* right_value125;
char* type_name_75;
void* right_value126;
char* __dec_obj55;
void* right_value127;
void* right_value128;
struct sType* __dec_obj56;
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_72, 0, sizeof(struct sType*));
right_value123 = (void*)0;
memset(&come_value_73, 0, sizeof(struct CVALUE*));
right_value124 = (void*)0;
memset(&type2_74, 0, sizeof(struct sType*));
right_value125 = (void*)0;
memset(&type_name_75, 0, sizeof(char*));
right_value126 = (void*)0;
right_value127 = (void*)0;
right_value128 = (void*)0;
    type_72=self->type;
    come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 392, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=solve_generics(type_72,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_75=(char*)come_increment_ref_count(((char*)(right_value125=make_type_name_string(type2_74,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value125 = come_decrement_ref_count2(right_value125, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj55=come_value_73->c_value;
    come_value_73->c_value=(char*)come_increment_ref_count(((char*)(right_value126=xsprintf("sizeof(%s)",type_name_75))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj56=come_value_73->type;
    come_value_73->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value128=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value127=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 399, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_73->type->mUnsigned=(_Bool)1;
    come_value_73->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_73->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_73));
    __result83__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_75 = come_decrement_ref_count2(type_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result83__;
    come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_75 = come_decrement_ref_count2(type_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value129;
struct sNode* __dec_obj57;
void* right_value130;
char* __dec_obj58;
struct sSizeOfExpNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
right_value129 = (void*)0;
right_value130 = (void*)0;
    __dec_obj57=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNode_clone(exp))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result84__ = __result_obj__ = self;
    come_call_finalizer2(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result84__;
    come_call_finalizer2(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result85__;
memset(&__result_obj__, 0, sizeof(void*));
    __result85__ = self->sline;
    return __result85__;
}

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value131;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
    __result86__ = __result_obj__ = ((char*)(right_value131=__builtin_string(self->sname)));
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result86__;
}

_Bool sSizeOfExpNode_terminated(){
void* __result_obj__;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    __result87__ = (_Bool)0;
    return __result87__;
}

char* sSizeOfExpNode_kind(){
void* __result_obj__;
void* right_value132;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
    __result88__ = __result_obj__ = ((char*)(right_value132=__builtin_string("sSizeOfExpNode")));
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result88__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_76;
_Bool _if_conditional134;
_Bool __result89__;
void* right_value133;
struct CVALUE* come_value_77;
void* right_value134;
struct CVALUE* come_value2_78;
void* right_value135;
char* __dec_obj59;
void* right_value136;
void* right_value137;
struct sType* __dec_obj60;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_76, 0, sizeof(struct sNode*));
right_value133 = (void*)0;
memset(&come_value_77, 0, sizeof(struct CVALUE*));
right_value134 = (void*)0;
memset(&come_value2_78, 0, sizeof(struct CVALUE*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
    exp_76=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional134=!node_compile(exp_76,info),    _if_conditional134) {
        __result89__ = (_Bool)0;
        if(exp_76) { exp_76 = come_decrement_ref_count2(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result89__;
    }
    come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value133=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 457, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=come_value2_78->c_value;
    come_value2_78->c_value=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("sizeof(%s)",come_value_77->c_value))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj60=come_value2_78->type;
    come_value2_78->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value136=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 460, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_78->type->mUnsigned=(_Bool)1;
    come_value2_78->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_78->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_78));
    __result90__ = (_Bool)1;
    if(exp_76) { exp_76 = come_decrement_ref_count2(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result90__;
    if(exp_76) { exp_76 = come_decrement_ref_count2(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value138;
struct sType* __dec_obj61;
void* right_value139;
char* __dec_obj62;
struct sAlignOfNode* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
right_value139 = (void*)0;
    __dec_obj61=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value138=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value139=__builtin_string(info->sname))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value139 = come_decrement_ref_count2(right_value139, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result91__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result91__;
    come_call_finalizer2(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result92__;
memset(&__result_obj__, 0, sizeof(void*));
    __result92__ = self->sline;
    return __result92__;
}

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value140;
char* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
    __result93__ = __result_obj__ = ((char*)(right_value140=__builtin_string(self->sname)));
    right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result93__;
}

_Bool sAlignOfNode_terminated(){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = (_Bool)0;
    return __result94__;
}

char* sAlignOfNode_kind(){
void* __result_obj__;
void* right_value141;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value141 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(right_value141=__builtin_string("sAlignOfNode")));
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_79;
void* right_value142;
struct CVALUE* come_value_80;
void* right_value143;
struct sType* type2_81;
void* right_value144;
char* type_name_82;
void* right_value145;
char* __dec_obj63;
void* right_value146;
void* right_value147;
struct sType* __dec_obj64;
_Bool __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_79, 0, sizeof(struct sType*));
right_value142 = (void*)0;
memset(&come_value_80, 0, sizeof(struct CVALUE*));
right_value143 = (void*)0;
memset(&type2_81, 0, sizeof(struct sType*));
right_value144 = (void*)0;
memset(&type_name_82, 0, sizeof(char*));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
    type_79=self->type;
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 511, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_81=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=solve_generics(type_79,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_82=(char*)come_increment_ref_count(((char*)(right_value144=make_type_name_string(type2_81,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj63=come_value_80->c_value;
    come_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value145=xsprintf("_Alignof(%s)",type_name_82))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj64=come_value_80->type;
    come_value_80->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value147=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value146=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 518, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_80->type->mUnsigned=(_Bool)1;
    come_value_80->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_80->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_80));
    __result96__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_82 = come_decrement_ref_count2(type_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result96__;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_82 = come_decrement_ref_count2(type_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value148;
struct sNode* __dec_obj65;
void* right_value149;
char* __dec_obj66;
struct sAlignOfExpNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value148 = (void*)0;
right_value149 = (void*)0;
    __dec_obj65=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value148=sNode_clone(exp))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value148) { right_value148 = come_decrement_ref_count2(right_value148, ((struct sNode*)right_value148)->finalize, ((struct sNode*)right_value148)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value149=__builtin_string(info->sname))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result97__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result97__;
    come_call_finalizer2(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = self->sline;
    return __result98__;
}

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value150;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value150=__builtin_string(self->sname)));
    right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result99__;
}

_Bool sAlignOfExpNode_terminated(){
void* __result_obj__;
_Bool __result100__;
memset(&__result_obj__, 0, sizeof(void*));
    __result100__ = (_Bool)0;
    return __result100__;
}

char* sAlignOfExpNode_kind(){
void* __result_obj__;
void* right_value151;
char* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
    __result101__ = __result_obj__ = ((char*)(right_value151=__builtin_string("sAlignOfExpNode")));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result101__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_83;
_Bool _if_conditional139;
_Bool __result102__;
void* right_value152;
struct CVALUE* come_value_84;
void* right_value153;
struct CVALUE* come_value2_85;
void* right_value154;
char* __dec_obj67;
void* right_value155;
void* right_value156;
struct sType* __dec_obj68;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_83, 0, sizeof(struct sNode*));
right_value152 = (void*)0;
memset(&come_value_84, 0, sizeof(struct CVALUE*));
right_value153 = (void*)0;
memset(&come_value2_85, 0, sizeof(struct CVALUE*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
    exp_83=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional139=!node_compile(exp_83,info),    _if_conditional139) {
        __result102__ = (_Bool)0;
        if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result102__;
    }
    come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 576, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj67=come_value2_85->c_value;
    come_value2_85->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("_AlignOf(%s)",come_value_84->c_value))));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj68=come_value2_85->type;
    come_value2_85->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value155=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 579, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_85->type->mUnsigned=(_Bool)1;
    come_value2_85->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_85->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_85));
    __result103__ = (_Bool)1;
    if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result103__;
    if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value157;
struct sType* __dec_obj69;
void* right_value158;
char* __dec_obj70;
struct sAlignOfNode2* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
right_value158 = (void*)0;
    __dec_obj69=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value157=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj69, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj70=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value158=__builtin_string(info->sname))));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result104__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result104__;
    come_call_finalizer2(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
int __result105__;
memset(&__result_obj__, 0, sizeof(void*));
    __result105__ = self->sline;
    return __result105__;
}

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value159;
char* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
right_value159 = (void*)0;
    __result106__ = __result_obj__ = ((char*)(right_value159=__builtin_string(self->sname)));
    right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result106__;
}

_Bool sAlignOfNode2_terminated(){
void* __result_obj__;
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    __result107__ = (_Bool)0;
    return __result107__;
}

char* sAlignOfNode2_kind(){
void* __result_obj__;
void* right_value160;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value160 = (void*)0;
    __result108__ = __result_obj__ = ((char*)(right_value160=__builtin_string("sAlignOfNode2")));
    right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_86;
void* right_value161;
struct CVALUE* come_value_87;
void* right_value162;
struct sType* type2_88;
void* right_value163;
char* type_name_89;
void* right_value164;
char* __dec_obj71;
void* right_value165;
void* right_value166;
struct sType* __dec_obj72;
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_86, 0, sizeof(struct sType*));
right_value161 = (void*)0;
memset(&come_value_87, 0, sizeof(struct CVALUE*));
right_value162 = (void*)0;
memset(&type2_88, 0, sizeof(struct sType*));
right_value163 = (void*)0;
memset(&type_name_89, 0, sizeof(char*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
    type_86=self->type;
    come_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 630, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_88=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=solve_generics(type_86,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_89=(char*)come_increment_ref_count(((char*)(right_value163=make_type_name_string(type2_88,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj71=come_value_87->c_value;
    come_value_87->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("__alignof__(%s)",type_name_89))));
    __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj72=come_value_87->type;
    come_value_87->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value165=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 637, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_87->type->mUnsigned=(_Bool)1;
    come_value_87->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_87->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_87));
    __result109__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_89 = come_decrement_ref_count2(type_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result109__;
    come_call_finalizer2(CVALUE_finalize,come_value_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_89 = come_decrement_ref_count2(type_name_89, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value167;
struct sNode* __dec_obj73;
void* right_value168;
char* __dec_obj74;
struct sAlignOfExpNode2* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
right_value168 = (void*)0;
    __dec_obj73=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNode_clone(exp))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value167) { right_value167 = come_decrement_ref_count2(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value168=__builtin_string(info->sname))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result110__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result110__;
    come_call_finalizer2(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    __result111__ = self->sline;
    return __result111__;
}

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value169;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value169 = (void*)0;
    __result112__ = __result_obj__ = ((char*)(right_value169=__builtin_string(self->sname)));
    right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result112__;
}

_Bool sAlignOfExpNode2_terminated(){
void* __result_obj__;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
    __result113__ = (_Bool)0;
    return __result113__;
}

char* sAlignOfExpNode2_kind(){
void* __result_obj__;
void* right_value170;
char* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
right_value170 = (void*)0;
    __result114__ = __result_obj__ = ((char*)(right_value170=__builtin_string("sAlignOfExpNode2")));
    right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result114__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_90;
_Bool _if_conditional144;
_Bool __result115__;
void* right_value171;
struct CVALUE* come_value_91;
void* right_value172;
struct CVALUE* come_value2_92;
void* right_value173;
char* __dec_obj75;
void* right_value174;
void* right_value175;
struct sType* __dec_obj76;
_Bool __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_90, 0, sizeof(struct sNode*));
right_value171 = (void*)0;
memset(&come_value_91, 0, sizeof(struct CVALUE*));
right_value172 = (void*)0;
memset(&come_value2_92, 0, sizeof(struct CVALUE*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
    exp_90=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional144=!node_compile(exp_90,info),    _if_conditional144) {
        __result115__ = (_Bool)0;
        if(exp_90) { exp_90 = come_decrement_ref_count2(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result115__;
    }
    come_value_91=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 695, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj75=come_value2_92->c_value;
    come_value2_92->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("__alignof__(%s)",come_value_91->c_value))));
    __dec_obj75 = come_decrement_ref_count2(__dec_obj75, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj76=come_value2_92->type;
    come_value2_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value174=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 698, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_92->type->mUnsigned=(_Bool)1;
    come_value2_92->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_92->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_92));
    __result116__ = (_Bool)1;
    if(exp_90) { exp_90 = come_decrement_ref_count2(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result116__;
    if(exp_90) { exp_90 = come_decrement_ref_count2(exp_90, ((struct sNode*)exp_90)->finalize, ((struct sNode*)exp_90)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value176;
struct sType* __dec_obj77;
void* right_value177;
char* __dec_obj78;
struct sAlignAsNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
    __dec_obj77=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(info->sname))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result117__ = __result_obj__ = self;
    come_call_finalizer2(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result117__;
    come_call_finalizer2(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
int __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = self->sline;
    return __result118__;
}

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value178;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
    __result119__ = __result_obj__ = ((char*)(right_value178=__builtin_string(self->sname)));
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool sAlignAsNode_terminated(){
void* __result_obj__;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
    __result120__ = (_Bool)0;
    return __result120__;
}

char* sAlignAsNode_kind(){
void* __result_obj__;
void* right_value179;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result121__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sAlignAsNode")));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result121__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_93;
void* right_value180;
struct CVALUE* come_value_94;
void* right_value181;
struct sType* type2_95;
void* right_value182;
char* type_name_96;
void* right_value183;
char* __dec_obj79;
void* right_value184;
void* right_value185;
struct sType* __dec_obj80;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_93, 0, sizeof(struct sType*));
right_value180 = (void*)0;
memset(&come_value_94, 0, sizeof(struct CVALUE*));
right_value181 = (void*)0;
memset(&type2_95, 0, sizeof(struct sType*));
right_value182 = (void*)0;
memset(&type_name_96, 0, sizeof(char*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
    type_93=self->type;
    come_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 749, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_95=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=solve_generics(type_93,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_96=(char*)come_increment_ref_count(((char*)(right_value182=make_type_name_string(type2_95,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj79=come_value_94->c_value;
    come_value_94->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("_Alignas(%s)",type_name_96))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj80=come_value_94->type;
    come_value_94->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 756, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_94->type->mUnsigned=(_Bool)1;
    come_value_94->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_94->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_94));
    __result122__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_96 = come_decrement_ref_count2(type_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result122__;
    come_call_finalizer2(CVALUE_finalize,come_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_96 = come_decrement_ref_count2(type_name_96, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value186;
struct sNode* __dec_obj81;
void* right_value187;
char* __dec_obj82;
struct sAlignAsExpNode* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
right_value187 = (void*)0;
    __dec_obj81=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=sNode_clone(exp))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj82=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(info->sname))));
    __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result123__ = __result_obj__ = self;
    come_call_finalizer2(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result123__;
    come_call_finalizer2(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = self->sline;
    return __result124__;
}

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value188;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
    __result125__ = __result_obj__ = ((char*)(right_value188=__builtin_string(self->sname)));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sAlignAsExpNode_terminated(){
void* __result_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = (_Bool)0;
    return __result126__;
}

char* sAlignAsExpNode_kind(){
void* __result_obj__;
void* right_value189;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
    __result127__ = __result_obj__ = ((char*)(right_value189=__builtin_string("sAlignAsExpNode")));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_97;
_Bool _if_conditional149;
_Bool __result128__;
void* right_value190;
struct CVALUE* come_value_98;
void* right_value191;
struct CVALUE* come_value2_99;
void* right_value192;
char* __dec_obj83;
void* right_value193;
void* right_value194;
struct sType* __dec_obj84;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_97, 0, sizeof(struct sNode*));
right_value190 = (void*)0;
memset(&come_value_98, 0, sizeof(struct CVALUE*));
right_value191 = (void*)0;
memset(&come_value2_99, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
    exp_97=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional149=!node_compile(exp_97,info),    _if_conditional149) {
        __result128__ = (_Bool)0;
        if(exp_97) { exp_97 = come_decrement_ref_count2(exp_97, ((struct sNode*)exp_97)->finalize, ((struct sNode*)exp_97)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result128__;
    }
    come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 815, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj83=come_value2_99->c_value;
    come_value2_99->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("_Alignas(%s)",come_value_98->c_value))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj84=come_value2_99->type;
    come_value2_99->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 818, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_99->type->mUnsigned=(_Bool)1;
    come_value2_99->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_99->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_99));
    __result129__ = (_Bool)1;
    if(exp_97) { exp_97 = come_decrement_ref_count2(exp_97, ((struct sNode*)exp_97)->finalize, ((struct sNode*)exp_97)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result129__;
    if(exp_97) { exp_97 = come_decrement_ref_count2(exp_97, ((struct sNode*)exp_97)->finalize, ((struct sNode*)exp_97)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value195;
struct sNode* __dec_obj85;
void* right_value196;
char* __dec_obj86;
struct sDeleteNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
right_value196 = (void*)0;
    __dec_obj85=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(node))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj86=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(info->sname))));
    __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result130__ = __result_obj__ = self;
    come_call_finalizer2(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result130__;
    come_call_finalizer2(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = self->sline;
    return __result131__;
}

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value197;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
    __result132__ = __result_obj__ = ((char*)(right_value197=__builtin_string(self->sname)));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

_Bool sDeleteNode_terminated(){
void* __result_obj__;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
    __result133__ = (_Bool)0;
    return __result133__;
}

char* sDeleteNode_kind(){
void* __result_obj__;
void* right_value198;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
    __result134__ = __result_obj__ = ((char*)(right_value198=__builtin_string("sDeleteNode")));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result134__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_100;
_Bool _if_conditional152;
_Bool __result135__;
void* right_value199;
struct CVALUE* come_value_101;
_Bool __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_100, 0, sizeof(struct sNode*));
right_value199 = (void*)0;
memset(&come_value_101, 0, sizeof(struct CVALUE*));
    node_100=self->node;
    if(_if_conditional152=!node_compile(node_100,info),    _if_conditional152) {
        __result135__ = (_Bool)0;
        return __result135__;
    }
    come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    free_object(come_value_101->type,come_value_101->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result136__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result136__;
    come_call_finalizer2(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value200;
struct sNode* __dec_obj87;
void* right_value201;
char* __dec_obj88;
struct sForceDeleteNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value200 = (void*)0;
right_value201 = (void*)0;
    __dec_obj87=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value200=sNode_clone(node))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value200) { right_value200 = come_decrement_ref_count2(right_value200, ((struct sNode*)right_value200)->finalize, ((struct sNode*)right_value200)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value201=__builtin_string(info->sname))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result137__ = __result_obj__ = self;
    come_call_finalizer2(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result137__;
    come_call_finalizer2(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    __result138__ = self->sline;
    return __result138__;
}

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value202;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    __result139__ = __result_obj__ = ((char*)(right_value202=__builtin_string(self->sname)));
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result139__;
}

_Bool sForceDeleteNode_terminated(){
void* __result_obj__;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
    __result140__ = (_Bool)0;
    return __result140__;
}

char* sForceDeleteNode_kind(){
void* __result_obj__;
void* right_value203;
char* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
    __result141__ = __result_obj__ = ((char*)(right_value203=__builtin_string("sForceDeleteNode")));
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result141__;
}

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_102;
_Bool _if_conditional155;
_Bool __result142__;
void* right_value204;
struct CVALUE* come_value_103;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_102, 0, sizeof(struct sNode*));
right_value204 = (void*)0;
memset(&come_value_103, 0, sizeof(struct CVALUE*));
    node_102=self->node;
    if(_if_conditional155=!node_compile(node_102,info),    _if_conditional155) {
        __result142__ = (_Bool)0;
        return __result142__;
    }
    come_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value204=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    free_object(come_value_103->type,come_value_103->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    __result143__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result143__;
    come_call_finalizer2(CVALUE_finalize,come_value_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value205;
struct sNode* __dec_obj89;
void* right_value206;
char* __dec_obj90;
struct sDelegateNode* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
right_value206 = (void*)0;
    __dec_obj89=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(node))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj90=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(info->sname))));
    __dec_obj90 = come_decrement_ref_count2(__dec_obj90, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result144__ = __result_obj__ = self;
    come_call_finalizer2(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result144__;
    come_call_finalizer2(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
int __result145__;
memset(&__result_obj__, 0, sizeof(void*));
    __result145__ = self->sline;
    return __result145__;
}

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value207;
char* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    __result146__ = __result_obj__ = ((char*)(right_value207=__builtin_string(self->sname)));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result146__;
}

_Bool sDelegateNode_terminated(){
void* __result_obj__;
_Bool __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    __result147__ = (_Bool)0;
    return __result147__;
}

char* sDelegateNode_kind(){
void* __result_obj__;
void* right_value208;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
    __result148__ = __result_obj__ = ((char*)(right_value208=__builtin_string("sDelegateNode")));
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result148__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_104;
_Bool _if_conditional158;
_Bool __result149__;
void* right_value209;
struct CVALUE* come_value_105;
_Bool _if_conditional159;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_104, 0, sizeof(struct sNode*));
right_value209 = (void*)0;
memset(&come_value_105, 0, sizeof(struct CVALUE*));
    node_104=self->node;
    if(_if_conditional158=!node_compile(node_104,info),    _if_conditional158) {
        __result149__ = (_Bool)0;
        return __result149__;
    }
    come_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_105->type->mDelegate=(_Bool)1;
    if(come_value_105->var) {
        come_value_105->var->mType->mDelegate=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_105));
    __result150__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result150__;
    come_call_finalizer2(CVALUE_finalize,come_value_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value210;
struct sNode* __dec_obj91;
void* right_value211;
char* __dec_obj92;
struct sShareNode* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value210 = (void*)0;
right_value211 = (void*)0;
    __dec_obj91=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value210=sNode_clone(node))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value210) { right_value210 = come_decrement_ref_count2(right_value210, ((struct sNode*)right_value210)->finalize, ((struct sNode*)right_value210)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value211=__builtin_string(info->sname))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result151__ = __result_obj__ = self;
    come_call_finalizer2(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result151__;
    come_call_finalizer2(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sShareNode_sline(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
int __result152__;
memset(&__result_obj__, 0, sizeof(void*));
    __result152__ = self->sline;
    return __result152__;
}

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value212;
char* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
    __result153__ = __result_obj__ = ((char*)(right_value212=__builtin_string(self->sname)));
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result153__;
}

_Bool sShareNode_terminated(){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __result154__ = (_Bool)0;
    return __result154__;
}

char* sShareNode_kind(){
void* __result_obj__;
void* right_value213;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
    __result155__ = __result_obj__ = ((char*)(right_value213=__builtin_string("sShareNode")));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result155__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_106;
_Bool _if_conditional162;
_Bool __result156__;
void* right_value214;
struct CVALUE* come_value_107;
_Bool _if_conditional163;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_106, 0, sizeof(struct sNode*));
right_value214 = (void*)0;
memset(&come_value_107, 0, sizeof(struct CVALUE*));
    node_106=self->node;
    if(_if_conditional162=!node_compile(node_106,info),    _if_conditional162) {
        __result156__ = (_Bool)0;
        return __result156__;
    }
    come_value_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value214=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_107->type->mShare=(_Bool)1;
    if(come_value_107->var) {
        come_value_107->var->mType->mShare=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_107));
    __result157__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result157__;
    come_call_finalizer2(CVALUE_finalize,come_value_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value215;
struct sNode* __dec_obj93;
void* right_value216;
char* __dec_obj94;
struct sBorrowNode* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
right_value216 = (void*)0;
    __dec_obj93=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value215=sNode_clone(node))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value215) { right_value215 = come_decrement_ref_count2(right_value215, ((struct sNode*)right_value215)->finalize, ((struct sNode*)right_value215)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj94=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(info->sname))));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result158__ = __result_obj__ = self;
    come_call_finalizer2(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result158__;
    come_call_finalizer2(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = self->sline;
    return __result159__;
}

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value217;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
    __result160__ = __result_obj__ = ((char*)(right_value217=__builtin_string(self->sname)));
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result160__;
}

_Bool sBorrowNode_terminated(){
void* __result_obj__;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
    __result161__ = (_Bool)0;
    return __result161__;
}

char* sBorrowNode_kind(){
void* __result_obj__;
void* right_value218;
char* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
right_value218 = (void*)0;
    __result162__ = __result_obj__ = ((char*)(right_value218=__builtin_string("sBorrowNode")));
    right_value218 = come_decrement_ref_count2(right_value218, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result162__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_108;
_Bool _if_conditional166;
_Bool __result163__;
void* right_value219;
struct CVALUE* come_value_109;
int right_value_id_110;
_Bool _if_conditional167;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_108, 0, sizeof(struct sNode*));
right_value219 = (void*)0;
memset(&come_value_109, 0, sizeof(struct CVALUE*));
memset(&right_value_id_110, 0, sizeof(int));
    node_108=self->node;
    if(_if_conditional166=!node_compile(node_108,info),    _if_conditional166) {
        __result163__ = (_Bool)0;
        return __result163__;
    }
    come_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value219=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_109->type->mHeap=(_Bool)0;
    right_value_id_110=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_109->c_value));
    if(_if_conditional167=right_value_id_110!=-1,    _if_conditional167) {
        remove_object_from_right_values(right_value_id_110,info);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_109));
    __result164__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result164__;
    come_call_finalizer2(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value220;
struct sNode* __dec_obj95;
void* right_value221;
char* __dec_obj96;
struct sCloneNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value220 = (void*)0;
right_value221 = (void*)0;
    __dec_obj95=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value220=sNode_clone(node))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value220) { right_value220 = come_decrement_ref_count2(right_value220, ((struct sNode*)right_value220)->finalize, ((struct sNode*)right_value220)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value221=__builtin_string(info->sname))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result165__ = __result_obj__ = self;
    come_call_finalizer2(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result165__;
    come_call_finalizer2(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
int __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = self->sline;
    return __result166__;
}

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value222;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
    __result167__ = __result_obj__ = ((char*)(right_value222=__builtin_string(self->sname)));
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sCloneNode_terminated(){
void* __result_obj__;
_Bool __result168__;
memset(&__result_obj__, 0, sizeof(void*));
    __result168__ = (_Bool)0;
    return __result168__;
}

char* sCloneNode_kind(){
void* __result_obj__;
void* right_value223;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
    __result169__ = __result_obj__ = ((char*)(right_value223=__builtin_string("sCloneNode")));
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result169__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_111;
_Bool _if_conditional170;
_Bool __result170__;
void* right_value224;
struct CVALUE* left_value_112;
void* right_value225;
struct sType* left_type_113;
_Bool _if_conditional171;
_Bool _if_conditional172;
_Bool _if_conditional173;
void* right_value226;
struct CVALUE* come_value_114;
void* right_value227;
struct tuple2$2sTypephcharph* multiple_assign_var2;
struct sType* result_type_115;
char* c_value_116;
char* __dec_obj97;
void* right_value228;
struct sType* __dec_obj98;
void* right_value229;
char* __dec_obj99;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_111, 0, sizeof(struct sNode*));
right_value224 = (void*)0;
memset(&left_value_112, 0, sizeof(struct CVALUE*));
right_value225 = (void*)0;
memset(&left_type_113, 0, sizeof(struct sType*));
right_value226 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value227 = (void*)0;
memset(&result_type_115, 0, sizeof(struct sType*));
memset(&c_value_116, 0, sizeof(char*));
memset(&result_type_115, 0, sizeof(struct sType*));
memset(&c_value_116, 0, sizeof(char*));
right_value228 = (void*)0;
right_value229 = (void*)0;
    node_111=self->node;
    if(_if_conditional170=!node_compile(node_111,info),    _if_conditional170) {
        __result170__ = (_Bool)0;
        return __result170__;
    }
    left_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value224=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value224, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_value_112->type->mClone=(_Bool)1;
    left_type_113=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(left_value_112->type))));
    come_call_finalizer2(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional171=left_type_113->mPointerNum==1&&string_operator_equals(left_type_113->mClass->mName,"void")&&left_type_113->mHeap==(_Bool)0,    _if_conditional171) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_112));
    }
    else {
        if(_if_conditional172=left_type_113->mPointerNum==0,        _if_conditional172) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_112));
        }
        else {
            if(_if_conditional173=left_type_113->mPointerNum>0,            _if_conditional173) {
                come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value226=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1172, "struct CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var2=((struct tuple2$2sTypephcharph*)(right_value227=clone_object(left_type_113,left_value_112->c_value,info)));
                result_type_115=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
                c_value_116=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj97=come_value_114->c_value;
                come_value_114->c_value=(char*)come_increment_ref_count(c_value_116);
                __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj98=come_value_114->type;
                come_value_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value228=sType_clone(left_type_113))));
                come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_114->type->mHeap=(_Bool)1;
                come_value_114->type->mClone=(_Bool)1;
                come_value_114->var=((void*)0);
                __dec_obj99=come_value_114->c_value;
                come_value_114->c_value=(char*)come_increment_ref_count(((char*)(right_value229=append_object_to_right_values(come_value_114->c_value,(struct sType*)come_increment_ref_count(left_type_113),info))));
                __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_114));
                come_call_finalizer2(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_116 = come_decrement_ref_count2(c_value_116, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result171__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result171__;
    come_call_finalizer2(CVALUE_finalize,left_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional174;
_Bool _if_conditional175;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional174=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional174) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional175=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional175) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value230;
struct sNode* __dec_obj100;
void* right_value231;
char* __dec_obj101;
struct sDupeNode* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value230 = (void*)0;
right_value231 = (void*)0;
    __dec_obj100=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value230=sNode_clone(node))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value230) { right_value230 = come_decrement_ref_count2(right_value230, ((struct sNode*)right_value230)->finalize, ((struct sNode*)right_value230)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj101=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value231=__builtin_string(info->sname))));
    __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result172__ = __result_obj__ = self;
    come_call_finalizer2(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result172__;
    come_call_finalizer2(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
int __result173__;
memset(&__result_obj__, 0, sizeof(void*));
    __result173__ = self->sline;
    return __result173__;
}

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value232;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
    __result174__ = __result_obj__ = ((char*)(right_value232=__builtin_string(self->sname)));
    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result174__;
}

_Bool sDupeNode_terminated(){
void* __result_obj__;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    __result175__ = (_Bool)0;
    return __result175__;
}

char* sDupeNode_kind(){
void* __result_obj__;
void* right_value233;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
    __result176__ = __result_obj__ = ((char*)(right_value233=__builtin_string("sDupeNode")));
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result176__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_117;
_Bool _if_conditional178;
_Bool __result177__;
void* right_value234;
struct CVALUE* left_value_118;
void* right_value235;
struct sType* left_type_119;
_Bool _if_conditional179;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value236;
struct CVALUE* come_value_120;
void* right_value237;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* result_type_121;
char* c_value_122;
char* __dec_obj102;
void* right_value238;
struct sType* __dec_obj103;
void* right_value239;
char* __dec_obj104;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_117, 0, sizeof(struct sNode*));
right_value234 = (void*)0;
memset(&left_value_118, 0, sizeof(struct CVALUE*));
right_value235 = (void*)0;
memset(&left_type_119, 0, sizeof(struct sType*));
right_value236 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
right_value237 = (void*)0;
memset(&result_type_121, 0, sizeof(struct sType*));
memset(&c_value_122, 0, sizeof(char*));
memset(&result_type_121, 0, sizeof(struct sType*));
memset(&c_value_122, 0, sizeof(char*));
right_value238 = (void*)0;
right_value239 = (void*)0;
    node_117=self->node;
    if(_if_conditional178=!node_compile(node_117,info),    _if_conditional178) {
        __result177__ = (_Bool)0;
        return __result177__;
    }
    left_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_119=(struct sType*)come_increment_ref_count(((struct sType*)(right_value235=sType_clone(left_value_118->type))));
    come_call_finalizer2(sType_finalize,right_value235, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional179=left_type_119->mPointerNum==0,    _if_conditional179) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_118));
    }
    else {
        if(_if_conditional180=left_type_119->mPointerNum>0&&left_type_119->mHeap==(_Bool)0,        _if_conditional180) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_118));
        }
        else {
            if(_if_conditional181=left_type_119->mPointerNum>0,            _if_conditional181) {
                come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1245, "struct CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(right_value237=clone_object(left_type_119,left_value_118->c_value,info)));
                result_type_121=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_122=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj102=come_value_120->c_value;
                come_value_120->c_value=(char*)come_increment_ref_count(c_value_122);
                __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj103=come_value_120->type;
                come_value_120->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value238=sType_clone(left_type_119))));
                come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_120->type->mHeap=(_Bool)1;
                come_value_120->var=((void*)0);
                __dec_obj104=come_value_120->c_value;
                come_value_120->c_value=(char*)come_increment_ref_count(((char*)(right_value239=append_object_to_right_values(come_value_120->c_value,(struct sType*)come_increment_ref_count(left_type_119),info))));
                __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_120));
                come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_122 = come_decrement_ref_count2(c_value_122, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result178__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result178__;
    come_call_finalizer2(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value240;
struct sNode* __dec_obj105;
void* right_value241;
char* __dec_obj106;
struct sDummyHeapNode* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
right_value241 = (void*)0;
    __dec_obj105=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value240=sNode_clone(node))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value240) { right_value240 = come_decrement_ref_count2(right_value240, ((struct sNode*)right_value240)->finalize, ((struct sNode*)right_value240)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj106=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value241=__builtin_string(info->sname))));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result179__ = __result_obj__ = self;
    come_call_finalizer2(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result179__;
    come_call_finalizer2(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
int __result180__;
memset(&__result_obj__, 0, sizeof(void*));
    __result180__ = self->sline;
    return __result180__;
}

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value242;
char* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
    __result181__ = __result_obj__ = ((char*)(right_value242=__builtin_string(self->sname)));
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result181__;
}

_Bool sDummyHeapNode_terminated(){
void* __result_obj__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
    __result182__ = (_Bool)0;
    return __result182__;
}

char* sDummyHeapNode_kind(){
void* __result_obj__;
void* right_value243;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
    __result183__ = __result_obj__ = ((char*)(right_value243=__builtin_string("sDummyHeapNode")));
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result183__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_123;
_Bool _if_conditional184;
_Bool __result184__;
void* right_value244;
struct CVALUE* come_value_124;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_123, 0, sizeof(struct sNode*));
right_value244 = (void*)0;
memset(&come_value_124, 0, sizeof(struct CVALUE*));
    node_123=self->node;
    if(_if_conditional184=!node_compile(node_123,info),    _if_conditional184) {
        __result184__ = (_Bool)0;
        return __result184__;
    }
    come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value244=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_124->type->mHeap=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
    __result185__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result185__;
    come_call_finalizer2(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value245;
struct sNode* __dec_obj107;
void* right_value246;
char* __dec_obj108;
struct sGCIncNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
right_value246 = (void*)0;
    __dec_obj107=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=sNode_clone(node))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj108=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(info->sname))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result186__ = __result_obj__ = self;
    come_call_finalizer2(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result186__;
    come_call_finalizer2(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
int __result187__;
memset(&__result_obj__, 0, sizeof(void*));
    __result187__ = self->sline;
    return __result187__;
}

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value247;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
    __result188__ = __result_obj__ = ((char*)(right_value247=__builtin_string(self->sname)));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result188__;
}

_Bool sGCIncNode_terminated(){
void* __result_obj__;
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
    __result189__ = (_Bool)0;
    return __result189__;
}

char* sGCIncNode_kind(){
void* __result_obj__;
void* right_value248;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
    __result190__ = __result_obj__ = ((char*)(right_value248=__builtin_string("sGCIncNode")));
    right_value248 = come_decrement_ref_count2(right_value248, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result190__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_125;
_Bool _if_conditional187;
_Bool __result191__;
void* right_value249;
struct CVALUE* come_value_126;
struct sType* type_127;
_Bool _if_conditional188;
void* right_value250;
char* type_name_128;
void* right_value251;
char* __dec_obj109;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_125, 0, sizeof(struct sNode*));
right_value249 = (void*)0;
memset(&come_value_126, 0, sizeof(struct CVALUE*));
memset(&type_127, 0, sizeof(struct sType*));
right_value250 = (void*)0;
memset(&type_name_128, 0, sizeof(char*));
right_value251 = (void*)0;
    node_125=self->node;
    if(_if_conditional187=!node_compile(node_125,info),    _if_conditional187) {
        __result191__ = (_Bool)0;
        return __result191__;
    }
    come_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_127=come_value_126->type;
    if(come_value_126->type->mHeap) {
        type_name_128=(char*)come_increment_ref_count(((char*)(right_value250=make_type_name_string(type_127,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj109=come_value_126->c_value;
        come_value_126->c_value=(char*)come_increment_ref_count(((char*)(right_value251=increment_ref_count_object(come_value_126->type,come_value_126->c_value,info))));
        __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_128 = come_decrement_ref_count2(type_name_128, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_126));
    __result192__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result192__;
    come_call_finalizer2(CVALUE_finalize,come_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value252;
struct sNode* __dec_obj110;
void* right_value253;
char* __dec_obj111;
struct sGCDecNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    __dec_obj110=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value252=sNode_clone(node))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value252) { right_value252 = come_decrement_ref_count2(right_value252, ((struct sNode*)right_value252)->finalize, ((struct sNode*)right_value252)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj111=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value253=__builtin_string(info->sname))));
    __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result193__ = __result_obj__ = self;
    come_call_finalizer2(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result193__;
    come_call_finalizer2(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
int __result194__;
memset(&__result_obj__, 0, sizeof(void*));
    __result194__ = self->sline;
    return __result194__;
}

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value254;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
    __result195__ = __result_obj__ = ((char*)(right_value254=__builtin_string(self->sname)));
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result195__;
}

_Bool sGCDecNode_terminated(){
void* __result_obj__;
_Bool __result196__;
memset(&__result_obj__, 0, sizeof(void*));
    __result196__ = (_Bool)0;
    return __result196__;
}

char* sGCDecNode_kind(){
void* __result_obj__;
void* right_value255;
char* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    __result197__ = __result_obj__ = ((char*)(right_value255=__builtin_string("sGCDecNode")));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result197__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_129;
_Bool _if_conditional191;
_Bool __result198__;
void* right_value256;
struct CVALUE* come_value_130;
struct sType* type_131;
_Bool __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_129, 0, sizeof(struct sNode*));
right_value256 = (void*)0;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
memset(&type_131, 0, sizeof(struct sType*));
    node_129=self->node;
    if(_if_conditional191=!node_compile(node_129,info),    _if_conditional191) {
        __result198__ = (_Bool)0;
        return __result198__;
    }
    come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value256=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value256, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_131=come_value_130->type;
    decrement_ref_count_object(type_131,come_value_130->c_value,info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
    __result199__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result199__;
    come_call_finalizer2(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value257;
struct sType* __dec_obj112;
void* right_value258;
char* __dec_obj113;
struct sIsHeap* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value257 = (void*)0;
right_value258 = (void*)0;
    __dec_obj112=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value257=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj113=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value258=__builtin_string(info->sname))));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result200__ = __result_obj__ = self;
    come_call_finalizer2(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result200__;
    come_call_finalizer2(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
int __result201__;
memset(&__result_obj__, 0, sizeof(void*));
    __result201__ = self->sline;
    return __result201__;
}

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
void* right_value259;
char* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
right_value259 = (void*)0;
    __result202__ = __result_obj__ = ((char*)(right_value259=__builtin_string(self->sname)));
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result202__;
}

_Bool sIsHeap_terminated(){
void* __result_obj__;
_Bool __result203__;
memset(&__result_obj__, 0, sizeof(void*));
    __result203__ = (_Bool)0;
    return __result203__;
}

char* sIsHeap_kind(){
void* __result_obj__;
void* right_value260;
char* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
    __result204__ = __result_obj__ = ((char*)(right_value260=__builtin_string("sIsHeap")));
    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result204__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_132;
_Bool _if_conditional194;
void* right_value261;
struct CVALUE* come_value_133;
void* right_value262;
char* __dec_obj114;
void* right_value263;
void* right_value264;
struct sType* __dec_obj115;
void* right_value265;
struct CVALUE* come_value_134;
void* right_value266;
char* __dec_obj116;
void* right_value267;
void* right_value268;
struct sType* __dec_obj117;
_Bool __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_132, 0, sizeof(struct sType*));
right_value261 = (void*)0;
memset(&come_value_133, 0, sizeof(struct CVALUE*));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
memset(&come_value_134, 0, sizeof(struct CVALUE*));
right_value266 = (void*)0;
right_value267 = (void*)0;
right_value268 = (void*)0;
    node_132=self->type;
    if(self->type->mHeap) {
        come_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1471, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj114=come_value_133->c_value;
        come_value_133->c_value=(char*)come_increment_ref_count(((char*)(right_value262=xsprintf("1"))));
        __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj115=come_value_133->type;
        come_value_133->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value263=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1474, "struct sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_133->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_133));
        add_come_last_code(info,"%s;\n",come_value_133->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value265=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1482, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj116=come_value_134->c_value;
        come_value_134->c_value=(char*)come_increment_ref_count(((char*)(right_value266=xsprintf("0"))));
        __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj117=come_value_134->type;
        come_value_134->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value268=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value267=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1485, "struct sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_134->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_134));
        add_come_last_code(info,"%s;\n",come_value_134->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result205__ = (_Bool)1;
    return __result205__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional195;
void* right_value269;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_135;
char* name_136;
_Bool err_137;
_Bool _if_conditional198;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value270;
struct sType* inf_type_138;
void* right_value271;
struct sNode* node_139;
void* right_value272;
void* right_value273;
struct sNode* _inf_value4;
struct sImplementsNode* _inf_obj_value4;
void* right_value278;
struct sNode* __result208__;
void* right_value279;
void* right_value280;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* right_value284;
struct sNode* obj_142;
void* right_value285;
char* fun_name_143;
void* right_value286;
void* right_value287;
struct sNode* __result211__;
void* right_value288;
void* right_value289;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* right_value293;
struct sNode* __result214__;
_Bool _if_conditional221;
void* right_value294;
void* right_value295;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* right_value298;
struct sNode* __result217__;
_Bool _if_conditional226;
void* right_value299;
void* right_value300;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* right_value303;
struct sNode* __result220__;
_Bool _if_conditional231;
void* right_value304;
struct sNode* node_147;
void* right_value305;
void* right_value306;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* right_value310;
struct sNode* __result223__;
_Bool _if_conditional238;
void* right_value311;
struct sNode* node_149;
void* right_value312;
void* right_value313;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* right_value317;
struct sNode* __result226__;
_Bool _if_conditional245;
void* right_value318;
struct sNode* node_151;
void* right_value319;
void* right_value320;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* right_value324;
struct sNode* __result229__;
_Bool _if_conditional252;
void* right_value325;
struct sNode* node_153;
void* right_value326;
void* right_value327;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* right_value331;
struct sNode* __result232__;
_Bool _if_conditional259;
void* right_value332;
struct sNode* node_155;
void* right_value333;
void* right_value334;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* right_value338;
struct sNode* __result235__;
_Bool _if_conditional266;
void* right_value339;
struct sNode* node_157;
void* right_value340;
void* right_value341;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* right_value345;
struct sNode* __result238__;
_Bool _if_conditional273;
void* right_value346;
struct sNode* node_159;
void* right_value347;
void* right_value348;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* right_value352;
struct sNode* __result241__;
_Bool _if_conditional280;
void* right_value353;
struct sNode* node_161;
void* right_value354;
void* right_value355;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* right_value359;
struct sNode* __result244__;
_Bool _if_conditional287;
void* right_value360;
struct sNode* node_163;
void* right_value361;
void* right_value362;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* right_value366;
struct sNode* __result247__;
_Bool _if_conditional294;
void* right_value367;
struct sNode* node_165;
void* right_value368;
void* right_value369;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* right_value373;
struct sNode* __result250__;
_Bool _if_conditional301;
void* right_value374;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_167;
char* param_name_168;
_Bool err_169;
_Bool _if_conditional302;
void* right_value375;
struct sType* type2_170;
void* right_value376;
void* right_value377;
struct sNode* _inf_value19;
struct sIsHeap* _inf_obj_value19;
void* right_value381;
struct sNode* __result253__;
_Bool _if_conditional309;
_Bool _if_conditional310;
void* right_value382;
void* right_value383;
struct sNode* _inf_value20;
struct sNullNodeX* _inf_obj_value20;
void* right_value386;
struct sNode* __result256__;
_Bool _if_conditional315;
_Bool _if_conditional316;
void* right_value387;
struct sNode* node_173;
struct sNode* __result257__;
void* right_value388;
void* right_value389;
struct sNode* _inf_value21;
struct sNullNodeX* _inf_obj_value21;
void* right_value392;
struct sNode* __result260__;
_Bool _if_conditional321;
void* right_value393;
void* right_value394;
struct sNode* _inf_value22;
struct sNullNodeX* _inf_obj_value22;
void* right_value397;
struct sNode* __result263__;
_Bool _if_conditional326;
void* right_value398;
void* right_value399;
struct sNode* _inf_value23;
struct sNullNodeX* _inf_obj_value23;
void* right_value402;
struct sNode* __result266__;
_Bool _if_conditional331;
void* right_value403;
void* right_value404;
struct sNode* _inf_value24;
struct sNullNodeX* _inf_obj_value24;
void* right_value407;
struct sNode* __result269__;
_Bool _if_conditional336;
void* right_value408;
void* right_value409;
struct sNode* _inf_value25;
struct sNullNodeX* _inf_obj_value25;
void* right_value412;
struct sNode* __result272__;
_Bool _if_conditional341;
_Bool is_type_name_flag_179;
char* p_180;
int sline_181;
_Bool _if_conditional342;
void* right_value413;
char* word_182;
_Bool _if_conditional343;
_Bool _if_conditional344;
void* right_value414;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_183;
char* name_184;
_Bool err_185;
_Bool _if_conditional345;
void* right_value415;
void* right_value416;
struct sNode* _inf_value26;
struct sSizeOfNode* _inf_obj_value26;
void* right_value420;
struct sNode* __result275__;
void* right_value421;
struct sNode* exp_187;
void* right_value422;
void* right_value423;
struct sNode* _inf_value27;
struct sSizeOfExpNode* _inf_obj_value27;
void* right_value427;
struct sNode* __result278__;
_Bool _if_conditional358;
_Bool is_type_name_flag_189;
char* p_190;
int sline_191;
_Bool _if_conditional359;
void* right_value428;
char* word_192;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value429;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_193;
char* name_194;
_Bool err_195;
_Bool _if_conditional362;
void* right_value430;
void* right_value431;
struct sNode* _inf_value28;
struct sAlignOfNode* _inf_obj_value28;
void* right_value435;
struct sNode* __result281__;
void* right_value436;
struct sNode* exp_197;
void* right_value437;
void* right_value438;
struct sNode* _inf_value29;
struct sAlignOfExpNode* _inf_obj_value29;
void* right_value442;
struct sNode* __result284__;
_Bool _if_conditional375;
_Bool is_type_name_flag_199;
char* p_200;
int sline_201;
_Bool _if_conditional376;
void* right_value443;
char* word_202;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value444;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_203;
char* name_204;
_Bool err_205;
_Bool _if_conditional379;
void* right_value445;
void* right_value446;
struct sNode* _inf_value30;
struct sAlignOfNode2* _inf_obj_value30;
void* right_value450;
struct sNode* __result287__;
void* right_value451;
struct sNode* exp_207;
void* right_value452;
void* right_value453;
struct sNode* _inf_value31;
struct sAlignOfExpNode2* _inf_obj_value31;
void* right_value457;
struct sNode* __result290__;
_Bool _if_conditional392;
_Bool is_type_name_flag_209;
char* p_210;
int sline_211;
_Bool _if_conditional393;
void* right_value458;
char* word_212;
_Bool _if_conditional394;
_Bool _if_conditional395;
void* right_value459;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_213;
char* name_214;
_Bool err_215;
_Bool _if_conditional396;
void* right_value460;
void* right_value461;
struct sNode* _inf_value32;
struct sAlignAsNode* _inf_obj_value32;
void* right_value465;
struct sNode* __result293__;
void* right_value466;
struct sNode* exp_217;
void* right_value467;
void* right_value468;
struct sNode* _inf_value33;
struct sAlignAsExpNode* _inf_obj_value33;
void* right_value472;
struct sNode* __result296__;
void* right_value473;
struct sNode* __result297__;
memset(&__result_obj__, 0, sizeof(void*));
right_value269 = (void*)0;
memset(&type_135, 0, sizeof(struct sType*));
memset(&name_136, 0, sizeof(char*));
memset(&err_137, 0, sizeof(_Bool));
memset(&type_135, 0, sizeof(struct sType*));
memset(&name_136, 0, sizeof(char*));
memset(&err_137, 0, sizeof(_Bool));
right_value270 = (void*)0;
memset(&inf_type_138, 0, sizeof(struct sType*));
right_value271 = (void*)0;
memset(&node_139, 0, sizeof(struct sNode*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value278 = (void*)0;
right_value279 = (void*)0;
right_value280 = (void*)0;
right_value284 = (void*)0;
memset(&obj_142, 0, sizeof(struct sNode*));
right_value285 = (void*)0;
memset(&fun_name_143, 0, sizeof(char*));
right_value286 = (void*)0;
right_value287 = (void*)0;
right_value288 = (void*)0;
right_value289 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value298 = (void*)0;
right_value299 = (void*)0;
right_value300 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
memset(&node_147, 0, sizeof(struct sNode*));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value310 = (void*)0;
right_value311 = (void*)0;
memset(&node_149, 0, sizeof(struct sNode*));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
memset(&node_151, 0, sizeof(struct sNode*));
right_value319 = (void*)0;
right_value320 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
memset(&node_153, 0, sizeof(struct sNode*));
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
memset(&node_155, 0, sizeof(struct sNode*));
right_value333 = (void*)0;
right_value334 = (void*)0;
right_value338 = (void*)0;
right_value339 = (void*)0;
memset(&node_157, 0, sizeof(struct sNode*));
right_value340 = (void*)0;
right_value341 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
memset(&node_159, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value352 = (void*)0;
right_value353 = (void*)0;
memset(&node_161, 0, sizeof(struct sNode*));
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&node_163, 0, sizeof(struct sNode*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value366 = (void*)0;
right_value367 = (void*)0;
memset(&node_165, 0, sizeof(struct sNode*));
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
memset(&param_type_167, 0, sizeof(struct sType*));
memset(&param_name_168, 0, sizeof(char*));
memset(&err_169, 0, sizeof(_Bool));
memset(&param_type_167, 0, sizeof(struct sType*));
memset(&param_name_168, 0, sizeof(char*));
memset(&err_169, 0, sizeof(_Bool));
right_value375 = (void*)0;
memset(&type2_170, 0, sizeof(struct sType*));
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value386 = (void*)0;
right_value387 = (void*)0;
memset(&node_173, 0, sizeof(struct sNode*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value412 = (void*)0;
memset(&is_type_name_flag_179, 0, sizeof(_Bool));
memset(&p_180, 0, sizeof(char*));
memset(&sline_181, 0, sizeof(int));
right_value413 = (void*)0;
memset(&word_182, 0, sizeof(char*));
right_value414 = (void*)0;
memset(&type_183, 0, sizeof(struct sType*));
memset(&name_184, 0, sizeof(char*));
memset(&err_185, 0, sizeof(_Bool));
memset(&type_183, 0, sizeof(struct sType*));
memset(&name_184, 0, sizeof(char*));
memset(&err_185, 0, sizeof(_Bool));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
memset(&exp_187, 0, sizeof(struct sNode*));
right_value422 = (void*)0;
right_value423 = (void*)0;
right_value427 = (void*)0;
memset(&is_type_name_flag_189, 0, sizeof(_Bool));
memset(&p_190, 0, sizeof(char*));
memset(&sline_191, 0, sizeof(int));
right_value428 = (void*)0;
memset(&word_192, 0, sizeof(char*));
right_value429 = (void*)0;
memset(&type_193, 0, sizeof(struct sType*));
memset(&name_194, 0, sizeof(char*));
memset(&err_195, 0, sizeof(_Bool));
memset(&type_193, 0, sizeof(struct sType*));
memset(&name_194, 0, sizeof(char*));
memset(&err_195, 0, sizeof(_Bool));
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
memset(&exp_197, 0, sizeof(struct sNode*));
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value442 = (void*)0;
memset(&is_type_name_flag_199, 0, sizeof(_Bool));
memset(&p_200, 0, sizeof(char*));
memset(&sline_201, 0, sizeof(int));
right_value443 = (void*)0;
memset(&word_202, 0, sizeof(char*));
right_value444 = (void*)0;
memset(&type_203, 0, sizeof(struct sType*));
memset(&name_204, 0, sizeof(char*));
memset(&err_205, 0, sizeof(_Bool));
memset(&type_203, 0, sizeof(struct sType*));
memset(&name_204, 0, sizeof(char*));
memset(&err_205, 0, sizeof(_Bool));
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value450 = (void*)0;
right_value451 = (void*)0;
memset(&exp_207, 0, sizeof(struct sNode*));
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value457 = (void*)0;
memset(&is_type_name_flag_209, 0, sizeof(_Bool));
memset(&p_210, 0, sizeof(char*));
memset(&sline_211, 0, sizeof(int));
right_value458 = (void*)0;
memset(&word_212, 0, sizeof(char*));
right_value459 = (void*)0;
memset(&type_213, 0, sizeof(struct sType*));
memset(&name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
memset(&type_213, 0, sizeof(struct sType*));
memset(&name_214, 0, sizeof(char*));
memset(&err_215, 0, sizeof(_Bool));
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value465 = (void*)0;
right_value466 = (void*)0;
memset(&exp_217, 0, sizeof(struct sNode*));
right_value467 = (void*)0;
right_value468 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
    if(_if_conditional195=charp_operator_equals(buf,"new"),    _if_conditional195) {
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value269=parse_type(info,(_Bool)0,(_Bool)1)));
        type_135=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_136=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_137=multiple_assign_var4->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional198=!err_137,        _if_conditional198) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(_if_conditional199=*info->p==40,        _if_conditional199) {
            if(type_135->mClass->mProtocol) {
                info->p++;
                skip_spaces_and_lf(info);
                inf_type_138=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_clone(type_135))));
                come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                node_139=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value271=expression_v13(info))));
                if(right_value271) { right_value271 = come_decrement_ref_count2(right_value271, ((struct sNode*)right_value271)->finalize, ((struct sNode*)right_value271)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                expected_next_character(41,info);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1516, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sImplementsNode*)(right_value273=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value272=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1516, "struct sImplementsNode")))),(struct sNode*)come_increment_ref_count(node_139),(struct sType*)come_increment_ref_count(inf_type_138),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sImplementsNode_finalize;
                _inf_value4->clone=(void*)sImplementsNode_clone;
                _inf_value4->compile=(void*)sImplementsNode_compile;
                _inf_value4->sline=(void*)sImplementsNode_sline;
                _inf_value4->sname=(void*)sImplementsNode_sname;
                _inf_value4->terminated=(void*)sImplementsNode_terminated;
                _inf_value4->kind=(void*)sImplementsNode_kind;
                __result208__ = __result_obj__ = ((struct sNode*)(right_value278=_inf_value4));
                come_call_finalizer2(sType_finalize,inf_type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_139) { node_139 = come_decrement_ref_count2(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_136 = come_decrement_ref_count2(name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sImplementsNode_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sImplementsNode_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result208__;
                come_call_finalizer2(sType_finalize,inf_type_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_139) { node_139 = come_decrement_ref_count2(node_139, ((struct sNode*)node_139)->finalize, ((struct sNode*)node_139)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1519, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(right_value280=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value279=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1519, "struct sNewNode")))),(struct sType*)come_increment_ref_count(type_135),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sNewNode_finalize;
                _inf_value5->clone=(void*)sNewNode_clone;
                _inf_value5->compile=(void*)sNewNode_compile;
                _inf_value5->sline=(void*)sNewNode_sline;
                _inf_value5->sname=(void*)sNewNode_sname;
                _inf_value5->terminated=(void*)sNewNode_terminated;
                _inf_value5->kind=(void*)sNewNode_kind;
                obj_142=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=_inf_value5)));
                come_call_finalizer2(sNewNode_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sNewNode_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                fun_name_143=(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string("initialize"))));
                right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __result211__ = __result_obj__ = ((struct sNode*)(right_value287=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(obj_142)))),(char*)come_increment_ref_count(fun_name_143),info)));
                if(obj_142) { obj_142 = come_decrement_ref_count2(obj_142, ((struct sNode*)obj_142)->finalize, ((struct sNode*)obj_142)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_136 = come_decrement_ref_count2(name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(right_value287) { right_value287 = come_decrement_ref_count2(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result211__;
                if(obj_142) { obj_142 = come_decrement_ref_count2(obj_142, ((struct sNode*)obj_142)->finalize, ((struct sNode*)obj_142)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_143 = come_decrement_ref_count2(fun_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1526, "struct sNode");
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(right_value289=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value288=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1526, "struct sNewNode")))),(struct sType*)come_increment_ref_count(type_135),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNewNode_sline;
            _inf_value6->sname=(void*)sNewNode_sname;
            _inf_value6->terminated=(void*)sNewNode_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result214__ = __result_obj__ = ((struct sNode*)(right_value293=_inf_value6));
            come_call_finalizer2(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_136 = come_decrement_ref_count2(name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sNewNode_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sNewNode_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result214__;
        }
        come_call_finalizer2(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_136 = come_decrement_ref_count2(name_136, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional221=charp_operator_equals(buf,"true"),        _if_conditional221) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1530, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(right_value295=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value294=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1530, "struct sTrueNode")))),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sTrueNode_finalize;
            _inf_value7->clone=(void*)sTrueNode_clone;
            _inf_value7->compile=(void*)sTrueNode_compile;
            _inf_value7->sline=(void*)sTrueNode_sline;
            _inf_value7->sname=(void*)sTrueNode_sname;
            _inf_value7->terminated=(void*)sTrueNode_terminated;
            _inf_value7->kind=(void*)sTrueNode_kind;
            __result217__ = __result_obj__ = ((struct sNode*)(right_value298=_inf_value7));
            come_call_finalizer2(sTrueNode_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTrueNode_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value298) { right_value298 = come_decrement_ref_count2(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result217__;
        }
        else {
            if(_if_conditional226=charp_operator_equals(buf,"false"),            _if_conditional226) {
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1533, "struct sNode");
                _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(right_value300=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value299=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1533, "struct sFalseNode")))),info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sFalseNode_finalize;
                _inf_value8->clone=(void*)sFalseNode_clone;
                _inf_value8->compile=(void*)sFalseNode_compile;
                _inf_value8->sline=(void*)sFalseNode_sline;
                _inf_value8->sname=(void*)sFalseNode_sname;
                _inf_value8->terminated=(void*)sFalseNode_terminated;
                _inf_value8->kind=(void*)sFalseNode_kind;
                __result220__ = __result_obj__ = ((struct sNode*)(right_value303=_inf_value8));
                come_call_finalizer2(sFalseNode_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFalseNode_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result220__;
            }
            else {
                if(_if_conditional231=charp_operator_equals(buf,"delete"),                _if_conditional231) {
                    node_147=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=expression_v13(info))));
                    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1538, "struct sNode");
                    _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(right_value306=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value305=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1538, "struct sDeleteNode")))),(struct sNode*)come_increment_ref_count(node_147),info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sDeleteNode_finalize;
                    _inf_value9->clone=(void*)sDeleteNode_clone;
                    _inf_value9->compile=(void*)sDeleteNode_compile;
                    _inf_value9->sline=(void*)sDeleteNode_sline;
                    _inf_value9->sname=(void*)sDeleteNode_sname;
                    _inf_value9->terminated=(void*)sDeleteNode_terminated;
                    _inf_value9->kind=(void*)sDeleteNode_kind;
                    __result223__ = __result_obj__ = ((struct sNode*)(right_value310=_inf_value9));
                    if(node_147) { node_147 = come_decrement_ref_count2(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sDeleteNode_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sDeleteNode_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, ((struct sNode*)right_value310)->finalize, ((struct sNode*)right_value310)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result223__;
                    if(node_147) { node_147 = come_decrement_ref_count2(node_147, ((struct sNode*)node_147)->finalize, ((struct sNode*)node_147)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional238=charp_operator_equals(buf,"force_delete"),                    _if_conditional238) {
                        node_149=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value311=expression_v13(info))));
                        if(right_value311) { right_value311 = come_decrement_ref_count2(right_value311, ((struct sNode*)right_value311)->finalize, ((struct sNode*)right_value311)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1543, "struct sNode");
                        _inf_obj_value10=come_increment_ref_count(((struct sForceDeleteNode*)(right_value313=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value312=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1543, "struct sForceDeleteNode")))),(struct sNode*)come_increment_ref_count(node_149),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value10->clone=(void*)sForceDeleteNode_clone;
                        _inf_value10->compile=(void*)sForceDeleteNode_compile;
                        _inf_value10->sline=(void*)sForceDeleteNode_sline;
                        _inf_value10->sname=(void*)sForceDeleteNode_sname;
                        _inf_value10->terminated=(void*)sForceDeleteNode_terminated;
                        _inf_value10->kind=(void*)sForceDeleteNode_kind;
                        __result226__ = __result_obj__ = ((struct sNode*)(right_value317=_inf_value10));
                        if(node_149) { node_149 = come_decrement_ref_count2(node_149, ((struct sNode*)node_149)->finalize, ((struct sNode*)node_149)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sForceDeleteNode_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sForceDeleteNode_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value317) { right_value317 = come_decrement_ref_count2(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result226__;
                        if(node_149) { node_149 = come_decrement_ref_count2(node_149, ((struct sNode*)node_149)->finalize, ((struct sNode*)node_149)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional245=charp_operator_equals(buf,"borrow"),                        _if_conditional245) {
                            node_151=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=expression_v13(info))));
                            if(right_value318) { right_value318 = come_decrement_ref_count2(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1549, "struct sNode");
                            _inf_obj_value11=come_increment_ref_count(((struct sBorrowNode*)(right_value320=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value319=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1549, "struct sBorrowNode")))),(struct sNode*)come_increment_ref_count(node_151),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sBorrowNode_finalize;
                            _inf_value11->clone=(void*)sBorrowNode_clone;
                            _inf_value11->compile=(void*)sBorrowNode_compile;
                            _inf_value11->sline=(void*)sBorrowNode_sline;
                            _inf_value11->sname=(void*)sBorrowNode_sname;
                            _inf_value11->terminated=(void*)sBorrowNode_terminated;
                            _inf_value11->kind=(void*)sBorrowNode_kind;
                            __result229__ = __result_obj__ = ((struct sNode*)(right_value324=_inf_value11));
                            if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sBorrowNode_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sBorrowNode_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result229__;
                            if(node_151) { node_151 = come_decrement_ref_count2(node_151, ((struct sNode*)node_151)->finalize, ((struct sNode*)node_151)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional252=charp_operator_equals(buf,"delegate"),                            _if_conditional252) {
                                node_153=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=expression_v13(info))));
                                if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1554, "struct sNode");
                                _inf_obj_value12=come_increment_ref_count(((struct sDelegateNode*)(right_value327=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value326=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1554, "struct sDelegateNode")))),(struct sNode*)come_increment_ref_count(node_153),info))));
                                _inf_value12->_protocol_obj=_inf_obj_value12;
                                _inf_value12->finalize=(void*)sDelegateNode_finalize;
                                _inf_value12->clone=(void*)sDelegateNode_clone;
                                _inf_value12->compile=(void*)sDelegateNode_compile;
                                _inf_value12->sline=(void*)sDelegateNode_sline;
                                _inf_value12->sname=(void*)sDelegateNode_sname;
                                _inf_value12->terminated=(void*)sDelegateNode_terminated;
                                _inf_value12->kind=(void*)sDelegateNode_kind;
                                __result232__ = __result_obj__ = ((struct sNode*)(right_value331=_inf_value12));
                                if(node_153) { node_153 = come_decrement_ref_count2(node_153, ((struct sNode*)node_153)->finalize, ((struct sNode*)node_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sDelegateNode_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sDelegateNode_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result232__;
                                if(node_153) { node_153 = come_decrement_ref_count2(node_153, ((struct sNode*)node_153)->finalize, ((struct sNode*)node_153)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional259=charp_operator_equals(buf,"share"),                                _if_conditional259) {
                                    node_155=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value332=expression_v13(info))));
                                    if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, ((struct sNode*)right_value332)->finalize, ((struct sNode*)right_value332)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1559, "struct sNode");
                                    _inf_obj_value13=come_increment_ref_count(((struct sShareNode*)(right_value334=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value333=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1559, "struct sShareNode")))),(struct sNode*)come_increment_ref_count(node_155),info))));
                                    _inf_value13->_protocol_obj=_inf_obj_value13;
                                    _inf_value13->finalize=(void*)sShareNode_finalize;
                                    _inf_value13->clone=(void*)sShareNode_clone;
                                    _inf_value13->compile=(void*)sShareNode_compile;
                                    _inf_value13->sline=(void*)sShareNode_sline;
                                    _inf_value13->sname=(void*)sShareNode_sname;
                                    _inf_value13->terminated=(void*)sShareNode_terminated;
                                    _inf_value13->kind=(void*)sShareNode_kind;
                                    __result235__ = __result_obj__ = ((struct sNode*)(right_value338=_inf_value13));
                                    if(node_155) { node_155 = come_decrement_ref_count2(node_155, ((struct sNode*)node_155)->finalize, ((struct sNode*)node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sShareNode_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sShareNode_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value338) { right_value338 = come_decrement_ref_count2(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result235__;
                                    if(node_155) { node_155 = come_decrement_ref_count2(node_155, ((struct sNode*)node_155)->finalize, ((struct sNode*)node_155)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional266=charp_operator_equals(buf,"clone"),                                    _if_conditional266) {
                                        node_157=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=expression_v13(info))));
                                        if(right_value339) { right_value339 = come_decrement_ref_count2(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1564, "struct sNode");
                                        _inf_obj_value14=come_increment_ref_count(((struct sCloneNode*)(right_value341=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value340=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1564, "struct sCloneNode")))),(struct sNode*)come_increment_ref_count(node_157),info))));
                                        _inf_value14->_protocol_obj=_inf_obj_value14;
                                        _inf_value14->finalize=(void*)sCloneNode_finalize;
                                        _inf_value14->clone=(void*)sCloneNode_clone;
                                        _inf_value14->compile=(void*)sCloneNode_compile;
                                        _inf_value14->sline=(void*)sCloneNode_sline;
                                        _inf_value14->sname=(void*)sCloneNode_sname;
                                        _inf_value14->terminated=(void*)sCloneNode_terminated;
                                        _inf_value14->kind=(void*)sCloneNode_kind;
                                        __result238__ = __result_obj__ = ((struct sNode*)(right_value345=_inf_value14));
                                        if(node_157) { node_157 = come_decrement_ref_count2(node_157, ((struct sNode*)node_157)->finalize, ((struct sNode*)node_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sCloneNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sCloneNode_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result238__;
                                        if(node_157) { node_157 = come_decrement_ref_count2(node_157, ((struct sNode*)node_157)->finalize, ((struct sNode*)node_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional273=charp_operator_equals(buf,"dupe"),                                        _if_conditional273) {
                                            node_159=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=expression_v13(info))));
                                            if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1569, "struct sNode");
                                            _inf_obj_value15=come_increment_ref_count(((struct sDupeNode*)(right_value348=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value347=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1569, "struct sDupeNode")))),(struct sNode*)come_increment_ref_count(node_159),info))));
                                            _inf_value15->_protocol_obj=_inf_obj_value15;
                                            _inf_value15->finalize=(void*)sDupeNode_finalize;
                                            _inf_value15->clone=(void*)sDupeNode_clone;
                                            _inf_value15->compile=(void*)sDupeNode_compile;
                                            _inf_value15->sline=(void*)sDupeNode_sline;
                                            _inf_value15->sname=(void*)sDupeNode_sname;
                                            _inf_value15->terminated=(void*)sDupeNode_terminated;
                                            _inf_value15->kind=(void*)sDupeNode_kind;
                                            __result241__ = __result_obj__ = ((struct sNode*)(right_value352=_inf_value15));
                                            if(node_159) { node_159 = come_decrement_ref_count2(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sDupeNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sDupeNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result241__;
                                            if(node_159) { node_159 = come_decrement_ref_count2(node_159, ((struct sNode*)node_159)->finalize, ((struct sNode*)node_159)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional280=charp_operator_equals(buf,"dummy_heap"),                                            _if_conditional280) {
                                                node_161=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=expression_v13(info))));
                                                if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1574, "struct sNode");
                                                _inf_obj_value16=come_increment_ref_count(((struct sDummyHeapNode*)(right_value355=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value354=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1574, "struct sDummyHeapNode")))),(struct sNode*)come_increment_ref_count(node_161),info))));
                                                _inf_value16->_protocol_obj=_inf_obj_value16;
                                                _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value16->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value16->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value16->sline=(void*)sDummyHeapNode_sline;
                                                _inf_value16->sname=(void*)sDummyHeapNode_sname;
                                                _inf_value16->terminated=(void*)sDummyHeapNode_terminated;
                                                _inf_value16->kind=(void*)sDummyHeapNode_kind;
                                                __result244__ = __result_obj__ = ((struct sNode*)(right_value359=_inf_value16));
                                                if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sDummyHeapNode_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(sDummyHeapNode_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result244__;
                                                if(node_161) { node_161 = come_decrement_ref_count2(node_161, ((struct sNode*)node_161)->finalize, ((struct sNode*)node_161)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional287=charp_operator_equals(buf,"gc_inc")&&*info->p==40,                                                _if_conditional287) {
                                                    info->p++;
                                                    skip_spaces_and_lf(info);
                                                    node_163=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=expression_v13(info))));
                                                    if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    expected_next_character(41,info);
                                                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1584, "struct sNode");
                                                    _inf_obj_value17=come_increment_ref_count(((struct sGCIncNode*)(right_value362=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value361=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1584, "struct sGCIncNode")))),(struct sNode*)come_increment_ref_count(node_163),info))));
                                                    _inf_value17->_protocol_obj=_inf_obj_value17;
                                                    _inf_value17->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value17->clone=(void*)sGCIncNode_clone;
                                                    _inf_value17->compile=(void*)sGCIncNode_compile;
                                                    _inf_value17->sline=(void*)sGCIncNode_sline;
                                                    _inf_value17->sname=(void*)sGCIncNode_sname;
                                                    _inf_value17->terminated=(void*)sGCIncNode_terminated;
                                                    _inf_value17->kind=(void*)sGCIncNode_kind;
                                                    __result247__ = __result_obj__ = ((struct sNode*)(right_value366=_inf_value17));
                                                    if(node_163) { node_163 = come_decrement_ref_count2(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer2(sGCIncNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sGCIncNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result247__;
                                                    if(node_163) { node_163 = come_decrement_ref_count2(node_163, ((struct sNode*)node_163)->finalize, ((struct sNode*)node_163)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(_if_conditional294=charp_operator_equals(buf,"gc_dec")&&*info->p==40,                                                    _if_conditional294) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                        node_165=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=expression_v13(info))));
                                                        if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        expected_next_character(41,info);
                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1594, "struct sNode");
                                                        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNode*)(right_value369=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value368=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1594, "struct sGCDecNode")))),(struct sNode*)come_increment_ref_count(node_165),info))));
                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                        _inf_value18->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value18->clone=(void*)sGCDecNode_clone;
                                                        _inf_value18->compile=(void*)sGCDecNode_compile;
                                                        _inf_value18->sline=(void*)sGCDecNode_sline;
                                                        _inf_value18->sname=(void*)sGCDecNode_sname;
                                                        _inf_value18->terminated=(void*)sGCDecNode_terminated;
                                                        _inf_value18->kind=(void*)sGCDecNode_kind;
                                                        __result250__ = __result_obj__ = ((struct sNode*)(right_value373=_inf_value18));
                                                        if(node_165) { node_165 = come_decrement_ref_count2(node_165, ((struct sNode*)node_165)->finalize, ((struct sNode*)node_165)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer2(sGCDecNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sGCDecNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result250__;
                                                        if(node_165) { node_165 = come_decrement_ref_count2(node_165, ((struct sNode*)node_165)->finalize, ((struct sNode*)node_165)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(_if_conditional301=charp_operator_equals(buf,"isheap")&&*info->p==40,                                                        _if_conditional301) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value374=parse_type(info,(_Bool)0,(_Bool)1)));
                                                            param_type_167=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                            param_name_168=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                            err_169=multiple_assign_var5->v3;
                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional302=!err_169,                                                            _if_conditional302) {
                                                                err_msg(info,"parse_type failed");
                                                                exit(2);
                                                            }
                                                            type2_170=(struct sType*)come_increment_ref_count(((struct sType*)(right_value375=solve_generics(param_type_167,info->generics_type,info))));
                                                            come_call_finalizer2(sType_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            expected_next_character(41,info);
                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1610, "struct sNode");
                                                            _inf_obj_value19=come_increment_ref_count(((struct sIsHeap*)(right_value377=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value376=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1610, "struct sIsHeap")))),(struct sType*)come_increment_ref_count(type2_170),info))));
                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                            _inf_value19->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value19->clone=(void*)sIsHeap_clone;
                                                            _inf_value19->compile=(void*)sIsHeap_compile;
                                                            _inf_value19->sline=(void*)sIsHeap_sline;
                                                            _inf_value19->sname=(void*)sIsHeap_sname;
                                                            _inf_value19->terminated=(void*)sIsHeap_terminated;
                                                            _inf_value19->kind=(void*)sIsHeap_kind;
                                                            __result253__ = __result_obj__ = ((struct sNode*)(right_value381=_inf_value19));
                                                            come_call_finalizer2(sType_finalize,param_type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            param_name_168 = come_decrement_ref_count2(param_name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,type2_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sIsHeap_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(sIsHeap_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result253__;
                                                            come_call_finalizer2(sType_finalize,param_type_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            param_name_168 = come_decrement_ref_count2(param_name_168, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,type2_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            if(_if_conditional309=charp_operator_equals(buf,"using"),                                                            _if_conditional309) {
                                                                if(_if_conditional310=strmemcmp(info->p,"comelang"),                                                                _if_conditional310) {
                                                                    info->p+=strlen("comelang");
                                                                    skip_spaces_and_lf(info);
                                                                    gComeC=(_Bool)0;
                                                                    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1619, "struct sNode");
                                                                    _inf_obj_value20=come_increment_ref_count(((struct sNullNodeX*)(right_value383=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value382=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1619, "struct sNullNodeX")))),info))));
                                                                    _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                    _inf_value20->finalize=(void*)sNullNodeX_finalize;
                                                                    _inf_value20->clone=(void*)sNullNodeX_clone;
                                                                    _inf_value20->compile=(void*)sNullNodeX_compile;
                                                                    _inf_value20->sline=(void*)sNullNodeX_sline;
                                                                    _inf_value20->sname=(void*)sNullNodeX_sname;
                                                                    _inf_value20->terminated=(void*)sNullNodeX_terminated;
                                                                    _inf_value20->kind=(void*)sNullNodeX_kind;
                                                                    __result256__ = __result_obj__ = ((struct sNode*)(right_value386=_inf_value20));
                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(right_value386) { right_value386 = come_decrement_ref_count2(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    return __result256__;
                                                                }
                                                                else {
                                                                    if(_if_conditional315=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),                                                                    _if_conditional315) {
                                                                        info->p+=strlen("c");
                                                                        skip_spaces_and_lf(info);
                                                                        gComeC=(_Bool)1;
                                                                        if(_if_conditional316=*info->p==123,                                                                        _if_conditional316) {
                                                                            node_173=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=parse_normal_block(info))));
                                                                            if(right_value387) { right_value387 = come_decrement_ref_count2(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            gComeC=(_Bool)0;
                                                                            __result257__ = __result_obj__ = node_173;
                                                                            if(node_173) { node_173 = come_decrement_ref_count2(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                            return __result257__;
                                                                            if(node_173) { node_173 = come_decrement_ref_count2(node_173, ((struct sNode*)node_173)->finalize, ((struct sNode*)node_173)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                        else {
                                                                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1635, "struct sNode");
                                                                            _inf_obj_value21=come_increment_ref_count(((struct sNullNodeX*)(right_value389=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value388=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1635, "struct sNullNodeX")))),info))));
                                                                            _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                            _inf_value21->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value21->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value21->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value21->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value21->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value21->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value21->kind=(void*)sNullNodeX_kind;
                                                                            __result260__ = __result_obj__ = ((struct sNode*)(right_value392=_inf_value21));
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result260__;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional321=strmemcmp(info->p,"gc"),                                                                        _if_conditional321) {
                                                                            info->p+=strlen("gc");
                                                                            skip_spaces_and_lf(info);
                                                                            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1642, "struct sNode");
                                                                            _inf_obj_value22=come_increment_ref_count(((struct sNullNodeX*)(right_value394=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value393=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1642, "struct sNullNodeX")))),info))));
                                                                            _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                            _inf_value22->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value22->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value22->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value22->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value22->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value22->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value22->kind=(void*)sNullNodeX_kind;
                                                                            __result263__ = __result_obj__ = ((struct sNode*)(right_value397=_inf_value22));
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result263__;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional326=strmemcmp(info->p,"no-gc"),                                                                            _if_conditional326) {
                                                                                info->p+=strlen("no-gc");
                                                                                skip_spaces_and_lf(info);
                                                                                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1649, "struct sNode");
                                                                                _inf_obj_value23=come_increment_ref_count(((struct sNullNodeX*)(right_value399=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value398=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1649, "struct sNullNodeX")))),info))));
                                                                                _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                _inf_value23->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value23->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value23->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value23->sline=(void*)sNullNodeX_sline;
                                                                                _inf_value23->sname=(void*)sNullNodeX_sname;
                                                                                _inf_value23->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value23->kind=(void*)sNullNodeX_kind;
                                                                                __result266__ = __result_obj__ = ((struct sNode*)(right_value402=_inf_value23));
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result266__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional331=strmemcmp(info->p,"unsafe"),                                                                                _if_conditional331) {
                                                                                    info->p+=strlen("unsafe");
                                                                                    skip_spaces_and_lf(info);
                                                                                    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1655, "struct sNode");
                                                                                    _inf_obj_value24=come_increment_ref_count(((struct sNullNodeX*)(right_value404=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value403=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1655, "struct sNullNodeX")))),info))));
                                                                                    _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                    _inf_value24->finalize=(void*)sNullNodeX_finalize;
                                                                                    _inf_value24->clone=(void*)sNullNodeX_clone;
                                                                                    _inf_value24->compile=(void*)sNullNodeX_compile;
                                                                                    _inf_value24->sline=(void*)sNullNodeX_sline;
                                                                                    _inf_value24->sname=(void*)sNullNodeX_sname;
                                                                                    _inf_value24->terminated=(void*)sNullNodeX_terminated;
                                                                                    _inf_value24->kind=(void*)sNullNodeX_kind;
                                                                                    __result269__ = __result_obj__ = ((struct sNode*)(right_value407=_inf_value24));
                                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result269__;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional336=strmemcmp(info->p,"no-null-check"),                                                                                    _if_conditional336) {
                                                                                        info->p+=strlen("no-null-check");
                                                                                        skip_spaces_and_lf(info);
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1661, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sNullNodeX*)(right_value409=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value408=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1661, "struct sNullNodeX")))),info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sNullNodeX_finalize;
                                                                                        _inf_value25->clone=(void*)sNullNodeX_clone;
                                                                                        _inf_value25->compile=(void*)sNullNodeX_compile;
                                                                                        _inf_value25->sline=(void*)sNullNodeX_sline;
                                                                                        _inf_value25->sname=(void*)sNullNodeX_sname;
                                                                                        _inf_value25->terminated=(void*)sNullNodeX_terminated;
                                                                                        _inf_value25->kind=(void*)sNullNodeX_kind;
                                                                                        __result272__ = __result_obj__ = ((struct sNode*)(right_value412=_inf_value25));
                                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result272__;
                                                                                    }
                                                                                    else {
                                                                                        err_msg(info,"invalid using");
                                                                                        exit(2);
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            else {
                                                                if(_if_conditional341=charp_operator_equals(buf,"sizeof"),                                                                _if_conditional341) {
                                                                    expected_next_character(40,info);
                                                                    is_type_name_flag_179=(_Bool)0;
                                                                    {
                                                                        p_180=info->p;
                                                                        sline_181=info->sline;
                                                                        if(_if_conditional342=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional342) {
                                                                            word_182=(char*)come_increment_ref_count(((char*)(right_value413=parse_word(info))));
                                                                            right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional343=is_type_name(word_182,info),                                                                            _if_conditional343) {
                                                                                is_type_name_flag_179=(_Bool)1;
                                                                            }
                                                                            word_182 = come_decrement_ref_count2(word_182, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        info->p=p_180;
                                                                        info->sline=sline_181;
                                                                    }
                                                                    if(is_type_name_flag_179) {
                                                                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value414=parse_type(info,(_Bool)0,(_Bool)1)));
                                                                        type_183=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                        name_184=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                        err_185=multiple_assign_var6->v3;
                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional345=!err_185,                                                                        _if_conditional345) {
                                                                            err_msg(info,"parse type");
                                                                            exit(2);
                                                                        }
                                                                        expected_next_character(41,info);
                                                                        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1698, "struct sNode");
                                                                        _inf_obj_value26=come_increment_ref_count(((struct sSizeOfNode*)(right_value416=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value415=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1698, "struct sSizeOfNode")))),(struct sType*)come_increment_ref_count(type_183),info))));
                                                                        _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                        _inf_value26->finalize=(void*)sSizeOfNode_finalize;
                                                                        _inf_value26->clone=(void*)sSizeOfNode_clone;
                                                                        _inf_value26->compile=(void*)sSizeOfNode_compile;
                                                                        _inf_value26->sline=(void*)sSizeOfNode_sline;
                                                                        _inf_value26->sname=(void*)sSizeOfNode_sname;
                                                                        _inf_value26->terminated=(void*)sSizeOfNode_terminated;
                                                                        _inf_value26->kind=(void*)sSizeOfNode_kind;
                                                                        __result275__ = __result_obj__ = ((struct sNode*)(right_value420=_inf_value26));
                                                                        come_call_finalizer2(sType_finalize,type_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        come_call_finalizer2(sSizeOfNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sSizeOfNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value420) { right_value420 = come_decrement_ref_count2(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result275__;
                                                                        come_call_finalizer2(sType_finalize,type_183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        name_184 = come_decrement_ref_count2(name_184, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    else {
                                                                        exp_187=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=expression_v13(info))));
                                                                        if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        expected_next_character(41,info);
                                                                        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1705, "struct sNode");
                                                                        _inf_obj_value27=come_increment_ref_count(((struct sSizeOfExpNode*)(right_value423=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value422=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1705, "struct sSizeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_187),info))));
                                                                        _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                        _inf_value27->finalize=(void*)sSizeOfExpNode_finalize;
                                                                        _inf_value27->clone=(void*)sSizeOfExpNode_clone;
                                                                        _inf_value27->compile=(void*)sSizeOfExpNode_compile;
                                                                        _inf_value27->sline=(void*)sSizeOfExpNode_sline;
                                                                        _inf_value27->sname=(void*)sSizeOfExpNode_sname;
                                                                        _inf_value27->terminated=(void*)sSizeOfExpNode_terminated;
                                                                        _inf_value27->kind=(void*)sSizeOfExpNode_kind;
                                                                        __result278__ = __result_obj__ = ((struct sNode*)(right_value427=_inf_value27));
                                                                        if(exp_187) { exp_187 = come_decrement_ref_count2(exp_187, ((struct sNode*)exp_187)->finalize, ((struct sNode*)exp_187)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        come_call_finalizer2(sSizeOfExpNode_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sSizeOfExpNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value427) { right_value427 = come_decrement_ref_count2(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result278__;
                                                                        if(exp_187) { exp_187 = come_decrement_ref_count2(exp_187, ((struct sNode*)exp_187)->finalize, ((struct sNode*)exp_187)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional358=charp_operator_equals(buf,"_Alignof"),                                                                    _if_conditional358) {
                                                                        expected_next_character(40,info);
                                                                        is_type_name_flag_189=(_Bool)0;
                                                                        {
                                                                            p_190=info->p;
                                                                            sline_191=info->sline;
                                                                            if(_if_conditional359=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional359) {
                                                                                word_192=(char*)come_increment_ref_count(((char*)(right_value428=parse_word(info))));
                                                                                right_value428 = come_decrement_ref_count2(right_value428, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional360=is_type_name(word_192,info),                                                                                _if_conditional360) {
                                                                                    is_type_name_flag_189=(_Bool)1;
                                                                                }
                                                                                word_192 = come_decrement_ref_count2(word_192, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            info->p=p_190;
                                                                            info->sline=sline_191;
                                                                        }
                                                                        if(is_type_name_flag_189) {
                                                                            multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value429=parse_type(info,(_Bool)0,(_Bool)1)));
                                                                            type_193=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                            name_194=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                            err_195=multiple_assign_var7->v3;
                                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional362=!err_195,                                                                            _if_conditional362) {
                                                                                err_msg(info,"parse type");
                                                                                exit(2);
                                                                            }
                                                                            expected_next_character(41,info);
                                                                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1738, "struct sNode");
                                                                            _inf_obj_value28=come_increment_ref_count(((struct sAlignOfNode*)(right_value431=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value430=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1738, "struct sAlignOfNode")))),(struct sType*)come_increment_ref_count(type_193),info))));
                                                                            _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                            _inf_value28->finalize=(void*)sAlignOfNode_finalize;
                                                                            _inf_value28->clone=(void*)sAlignOfNode_clone;
                                                                            _inf_value28->compile=(void*)sAlignOfNode_compile;
                                                                            _inf_value28->sline=(void*)sAlignOfNode_sline;
                                                                            _inf_value28->sname=(void*)sAlignOfNode_sname;
                                                                            _inf_value28->terminated=(void*)sAlignOfNode_terminated;
                                                                            _inf_value28->kind=(void*)sAlignOfNode_kind;
                                                                            __result281__ = __result_obj__ = ((struct sNode*)(right_value435=_inf_value28));
                                                                            come_call_finalizer2(sType_finalize,type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            name_194 = come_decrement_ref_count2(name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer2(sAlignOfNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sAlignOfNode_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result281__;
                                                                            come_call_finalizer2(sType_finalize,type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            name_194 = come_decrement_ref_count2(name_194, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            exp_197=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=expression_v13(info))));
                                                                            if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            expected_next_character(41,info);
                                                                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1745, "struct sNode");
                                                                            _inf_obj_value29=come_increment_ref_count(((struct sAlignOfExpNode*)(right_value438=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value437=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1745, "struct sAlignOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_197),info))));
                                                                            _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                            _inf_value29->finalize=(void*)sAlignOfExpNode_finalize;
                                                                            _inf_value29->clone=(void*)sAlignOfExpNode_clone;
                                                                            _inf_value29->compile=(void*)sAlignOfExpNode_compile;
                                                                            _inf_value29->sline=(void*)sAlignOfExpNode_sline;
                                                                            _inf_value29->sname=(void*)sAlignOfExpNode_sname;
                                                                            _inf_value29->terminated=(void*)sAlignOfExpNode_terminated;
                                                                            _inf_value29->kind=(void*)sAlignOfExpNode_kind;
                                                                            __result284__ = __result_obj__ = ((struct sNode*)(right_value442=_inf_value29));
                                                                            if(exp_197) { exp_197 = come_decrement_ref_count2(exp_197, ((struct sNode*)exp_197)->finalize, ((struct sNode*)exp_197)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            come_call_finalizer2(sAlignOfExpNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sAlignOfExpNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result284__;
                                                                            if(exp_197) { exp_197 = come_decrement_ref_count2(exp_197, ((struct sNode*)exp_197)->finalize, ((struct sNode*)exp_197)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional375=charp_operator_equals(buf,"__alignof__"),                                                                        _if_conditional375) {
                                                                            expected_next_character(40,info);
                                                                            is_type_name_flag_199=(_Bool)0;
                                                                            {
                                                                                p_200=info->p;
                                                                                sline_201=info->sline;
                                                                                if(_if_conditional376=xisalpha(*info->p)||*info->p==95,                                                                                _if_conditional376) {
                                                                                    word_202=(char*)come_increment_ref_count(((char*)(right_value443=parse_word(info))));
                                                                                    right_value443 = come_decrement_ref_count2(right_value443, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional377=is_type_name(word_202,info),                                                                                    _if_conditional377) {
                                                                                        is_type_name_flag_199=(_Bool)1;
                                                                                    }
                                                                                    word_202 = come_decrement_ref_count2(word_202, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                info->p=p_200;
                                                                                info->sline=sline_201;
                                                                            }
                                                                            if(is_type_name_flag_199) {
                                                                                multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value444=parse_type(info,(_Bool)0,(_Bool)1)));
                                                                                type_203=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                name_204=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                err_205=multiple_assign_var8->v3;
                                                                                come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional379=!err_205,                                                                                _if_conditional379) {
                                                                                    err_msg(info,"parse type");
                                                                                    exit(2);
                                                                                }
                                                                                expected_next_character(41,info);
                                                                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1778, "struct sNode");
                                                                                _inf_obj_value30=come_increment_ref_count(((struct sAlignOfNode2*)(right_value446=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value445=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 1778, "struct sAlignOfNode2")))),(struct sType*)come_increment_ref_count(type_203),info))));
                                                                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                                _inf_value30->finalize=(void*)sAlignOfNode2_finalize;
                                                                                _inf_value30->clone=(void*)sAlignOfNode2_clone;
                                                                                _inf_value30->compile=(void*)sAlignOfNode2_compile;
                                                                                _inf_value30->sline=(void*)sAlignOfNode2_sline;
                                                                                _inf_value30->sname=(void*)sAlignOfNode2_sname;
                                                                                _inf_value30->terminated=(void*)sAlignOfNode2_terminated;
                                                                                _inf_value30->kind=(void*)sAlignOfNode2_kind;
                                                                                __result287__ = __result_obj__ = ((struct sNode*)(right_value450=_inf_value30));
                                                                                come_call_finalizer2(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                name_204 = come_decrement_ref_count2(name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer2(sAlignOfNode2_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sAlignOfNode2_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value450) { right_value450 = come_decrement_ref_count2(right_value450, ((struct sNode*)right_value450)->finalize, ((struct sNode*)right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result287__;
                                                                                come_call_finalizer2(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                name_204 = come_decrement_ref_count2(name_204, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            else {
                                                                                exp_207=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=expression_v13(info))));
                                                                                if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                expected_next_character(41,info);
                                                                                _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1785, "struct sNode");
                                                                                _inf_obj_value31=come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value453=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value452=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 1785, "struct sAlignOfExpNode2")))),(struct sNode*)come_increment_ref_count(exp_207),info))));
                                                                                _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                _inf_value31->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                _inf_value31->clone=(void*)sAlignOfExpNode2_clone;
                                                                                _inf_value31->compile=(void*)sAlignOfExpNode2_compile;
                                                                                _inf_value31->sline=(void*)sAlignOfExpNode2_sline;
                                                                                _inf_value31->sname=(void*)sAlignOfExpNode2_sname;
                                                                                _inf_value31->terminated=(void*)sAlignOfExpNode2_terminated;
                                                                                _inf_value31->kind=(void*)sAlignOfExpNode2_kind;
                                                                                __result290__ = __result_obj__ = ((struct sNode*)(right_value457=_inf_value31));
                                                                                if(exp_207) { exp_207 = come_decrement_ref_count2(exp_207, ((struct sNode*)exp_207)->finalize, ((struct sNode*)exp_207)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                come_call_finalizer2(sAlignOfExpNode2_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sAlignOfExpNode2_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value457) { right_value457 = come_decrement_ref_count2(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result290__;
                                                                                if(exp_207) { exp_207 = come_decrement_ref_count2(exp_207, ((struct sNode*)exp_207)->finalize, ((struct sNode*)exp_207)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                        }
                                                                        else {
                                                                            if(_if_conditional392=charp_operator_equals(buf,"_Alignas"),                                                                            _if_conditional392) {
                                                                                expected_next_character(40,info);
                                                                                is_type_name_flag_209=(_Bool)0;
                                                                                {
                                                                                    p_210=info->p;
                                                                                    sline_211=info->sline;
                                                                                    if(_if_conditional393=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional393) {
                                                                                        word_212=(char*)come_increment_ref_count(((char*)(right_value458=parse_word(info))));
                                                                                        right_value458 = come_decrement_ref_count2(right_value458, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional394=is_type_name(word_212,info),                                                                                        _if_conditional394) {
                                                                                            is_type_name_flag_209=(_Bool)1;
                                                                                        }
                                                                                        word_212 = come_decrement_ref_count2(word_212, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    info->p=p_210;
                                                                                    info->sline=sline_211;
                                                                                }
                                                                                if(is_type_name_flag_209) {
                                                                                    multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value459=parse_type(info,(_Bool)0,(_Bool)1)));
                                                                                    type_213=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                    name_214=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                    err_215=multiple_assign_var9->v3;
                                                                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional396=!err_215,                                                                                    _if_conditional396) {
                                                                                        err_msg(info,"parse type");
                                                                                        exit(2);
                                                                                    }
                                                                                    expected_next_character(41,info);
                                                                                    _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1818, "struct sNode");
                                                                                    _inf_obj_value32=come_increment_ref_count(((struct sAlignAsNode*)(right_value461=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value460=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 1818, "struct sAlignAsNode")))),(struct sType*)come_increment_ref_count(type_213),info))));
                                                                                    _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                    _inf_value32->finalize=(void*)sAlignAsNode_finalize;
                                                                                    _inf_value32->clone=(void*)sAlignAsNode_clone;
                                                                                    _inf_value32->compile=(void*)sAlignAsNode_compile;
                                                                                    _inf_value32->sline=(void*)sAlignAsNode_sline;
                                                                                    _inf_value32->sname=(void*)sAlignAsNode_sname;
                                                                                    _inf_value32->terminated=(void*)sAlignAsNode_terminated;
                                                                                    _inf_value32->kind=(void*)sAlignAsNode_kind;
                                                                                    __result293__ = __result_obj__ = ((struct sNode*)(right_value465=_inf_value32));
                                                                                    come_call_finalizer2(sType_finalize,type_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer2(sAlignAsNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sAlignAsNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value465) { right_value465 = come_decrement_ref_count2(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result293__;
                                                                                    come_call_finalizer2(sType_finalize,type_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    name_214 = come_decrement_ref_count2(name_214, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    exp_217=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value466=expression_v13(info))));
                                                                                    if(right_value466) { right_value466 = come_decrement_ref_count2(right_value466, ((struct sNode*)right_value466)->finalize, ((struct sNode*)right_value466)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    expected_next_character(41,info);
                                                                                    _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1825, "struct sNode");
                                                                                    _inf_obj_value33=come_increment_ref_count(((struct sAlignAsExpNode*)(right_value468=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value467=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 1825, "struct sAlignAsExpNode")))),(struct sNode*)come_increment_ref_count(exp_217),info))));
                                                                                    _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                    _inf_value33->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                    _inf_value33->clone=(void*)sAlignAsExpNode_clone;
                                                                                    _inf_value33->compile=(void*)sAlignAsExpNode_compile;
                                                                                    _inf_value33->sline=(void*)sAlignAsExpNode_sline;
                                                                                    _inf_value33->sname=(void*)sAlignAsExpNode_sname;
                                                                                    _inf_value33->terminated=(void*)sAlignAsExpNode_terminated;
                                                                                    _inf_value33->kind=(void*)sAlignAsExpNode_kind;
                                                                                    __result296__ = __result_obj__ = ((struct sNode*)(right_value472=_inf_value33));
                                                                                    if(exp_217) { exp_217 = come_decrement_ref_count2(exp_217, ((struct sNode*)exp_217)->finalize, ((struct sNode*)exp_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    come_call_finalizer2(sAlignAsExpNode_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sAlignAsExpNode_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value472) { right_value472 = come_decrement_ref_count2(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result296__;
                                                                                    if(exp_217) { exp_217 = come_decrement_ref_count2(exp_217, ((struct sNode*)exp_217)->finalize, ((struct sNode*)exp_217)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result297__ = __result_obj__ = ((struct sNode*)(right_value473=string_node_v20(buf,head,head_sline,info)));
    if(right_value473) { right_value473 = come_decrement_ref_count2(right_value473, ((struct sNode*)right_value473)->finalize, ((struct sNode*)right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result297__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional196;
_Bool _if_conditional197;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional196=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional196) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional197=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional197) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sNewNode_finalize(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional215;
_Bool _if_conditional216;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional215=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional215) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional216=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional216) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional217;
struct sNewNode* __result212__;
void* right_value290;
struct sNewNode* result_144;
_Bool _if_conditional218;
void* right_value291;
struct sType* __dec_obj123;
_Bool _if_conditional219;
_Bool _if_conditional220;
void* right_value292;
char* __dec_obj124;
struct sNewNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value290 = (void*)0;
memset(&result_144, 0, sizeof(struct sNewNode*));
right_value291 = (void*)0;
right_value292 = (void*)0;
                if(_if_conditional217=self==(void*)0,                _if_conditional217) {
                    __result212__ = __result_obj__ = (void*)0;
                    return __result212__;
                }
                result_144=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value290=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode"))));
                come_call_finalizer2(sNewNode_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional218=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional218) {
                    __dec_obj123=result_144->type;
                    result_144->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional219=self!=((void*)0),                _if_conditional219) {
                    result_144->sline=self->sline;
                }
                if(_if_conditional220=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional220) {
                    __dec_obj124=result_144->sname;
                    result_144->sname=(char*)come_increment_ref_count(((char*)(right_value292=string_clone(self->sname))));
                    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result213__ = __result_obj__ = result_144;
                come_call_finalizer2(sNewNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result213__;
                come_call_finalizer2(sNewNode_finalize,result_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTrueNode_finalize(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional222;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional222=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional222) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional223;
struct sTrueNode* __result215__;
void* right_value296;
struct sTrueNode* result_145;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value297;
char* __dec_obj125;
struct sTrueNode* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
memset(&result_145, 0, sizeof(struct sTrueNode*));
right_value297 = (void*)0;
                if(_if_conditional223=self==(void*)0,                _if_conditional223) {
                    __result215__ = __result_obj__ = (void*)0;
                    return __result215__;
                }
                result_145=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value296=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode"))));
                come_call_finalizer2(sTrueNode_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional224=self!=((void*)0),                _if_conditional224) {
                    result_145->sline=self->sline;
                }
                if(_if_conditional225=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional225) {
                    __dec_obj125=result_145->sname;
                    result_145->sname=(char*)come_increment_ref_count(((char*)(right_value297=string_clone(self->sname))));
                    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result216__ = __result_obj__ = result_145;
                come_call_finalizer2(sTrueNode_finalize,result_145, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result216__;
                come_call_finalizer2(sTrueNode_finalize,result_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFalseNode_finalize(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional227;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional227=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional227) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional228;
struct sFalseNode* __result218__;
void* right_value301;
struct sFalseNode* result_146;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value302;
char* __dec_obj126;
struct sFalseNode* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
memset(&result_146, 0, sizeof(struct sFalseNode*));
right_value302 = (void*)0;
                    if(_if_conditional228=self==(void*)0,                    _if_conditional228) {
                        __result218__ = __result_obj__ = (void*)0;
                        return __result218__;
                    }
                    result_146=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value301=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode"))));
                    come_call_finalizer2(sFalseNode_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional229=self!=((void*)0),                    _if_conditional229) {
                        result_146->sline=self->sline;
                    }
                    if(_if_conditional230=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional230) {
                        __dec_obj126=result_146->sname;
                        result_146->sname=(char*)come_increment_ref_count(((char*)(right_value302=string_clone(self->sname))));
                        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result219__ = __result_obj__ = result_146;
                    come_call_finalizer2(sFalseNode_finalize,result_146, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result219__;
                    come_call_finalizer2(sFalseNode_finalize,result_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional232;
_Bool _if_conditional233;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional232=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional232) {
                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional233=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional233) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional234;
struct sDeleteNode* __result221__;
void* right_value307;
struct sDeleteNode* result_148;
_Bool _if_conditional235;
void* right_value308;
struct sNode* __dec_obj127;
_Bool _if_conditional236;
_Bool _if_conditional237;
void* right_value309;
char* __dec_obj128;
struct sDeleteNode* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
memset(&result_148, 0, sizeof(struct sDeleteNode*));
right_value308 = (void*)0;
right_value309 = (void*)0;
                        if(_if_conditional234=self==(void*)0,                        _if_conditional234) {
                            __result221__ = __result_obj__ = (void*)0;
                            return __result221__;
                        }
                        result_148=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value307=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode"))));
                        come_call_finalizer2(sDeleteNode_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional235=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional235) {
                            __dec_obj127=result_148->node;
                            result_148->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(self->node))));
                            if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value308) { right_value308 = come_decrement_ref_count2(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional236=self!=((void*)0),                        _if_conditional236) {
                            result_148->sline=self->sline;
                        }
                        if(_if_conditional237=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional237) {
                            __dec_obj128=result_148->sname;
                            result_148->sname=(char*)come_increment_ref_count(((char*)(right_value309=string_clone(self->sname))));
                            __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result222__ = __result_obj__ = result_148;
                        come_call_finalizer2(sDeleteNode_finalize,result_148, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result222__;
                        come_call_finalizer2(sDeleteNode_finalize,result_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional239;
_Bool _if_conditional240;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional239=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional239) {
                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional240=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional240) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional241;
struct sForceDeleteNode* __result224__;
void* right_value314;
struct sForceDeleteNode* result_150;
_Bool _if_conditional242;
void* right_value315;
struct sNode* __dec_obj129;
_Bool _if_conditional243;
_Bool _if_conditional244;
void* right_value316;
char* __dec_obj130;
struct sForceDeleteNode* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
right_value314 = (void*)0;
memset(&result_150, 0, sizeof(struct sForceDeleteNode*));
right_value315 = (void*)0;
right_value316 = (void*)0;
                            if(_if_conditional241=self==(void*)0,                            _if_conditional241) {
                                __result224__ = __result_obj__ = (void*)0;
                                return __result224__;
                            }
                            result_150=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value314=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "struct sForceDeleteNode"))));
                            come_call_finalizer2(sForceDeleteNode_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional242=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional242) {
                                __dec_obj129=result_150->node;
                                result_150->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNode_clone(self->node))));
                                if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional243=self!=((void*)0),                            _if_conditional243) {
                                result_150->sline=self->sline;
                            }
                            if(_if_conditional244=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional244) {
                                __dec_obj130=result_150->sname;
                                result_150->sname=(char*)come_increment_ref_count(((char*)(right_value316=string_clone(self->sname))));
                                __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result225__ = __result_obj__ = result_150;
                            come_call_finalizer2(sForceDeleteNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result225__;
                            come_call_finalizer2(sForceDeleteNode_finalize,result_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional246;
_Bool _if_conditional247;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional246=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional246) {
                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional247=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional247) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional248;
struct sBorrowNode* __result227__;
void* right_value321;
struct sBorrowNode* result_152;
_Bool _if_conditional249;
void* right_value322;
struct sNode* __dec_obj131;
_Bool _if_conditional250;
_Bool _if_conditional251;
void* right_value323;
char* __dec_obj132;
struct sBorrowNode* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value321 = (void*)0;
memset(&result_152, 0, sizeof(struct sBorrowNode*));
right_value322 = (void*)0;
right_value323 = (void*)0;
                                if(_if_conditional248=self==(void*)0,                                _if_conditional248) {
                                    __result227__ = __result_obj__ = (void*)0;
                                    return __result227__;
                                }
                                result_152=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value321=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode"))));
                                come_call_finalizer2(sBorrowNode_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional249=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional249) {
                                    __dec_obj131=result_152->node;
                                    result_152->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=sNode_clone(self->node))));
                                    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional250=self!=((void*)0),                                _if_conditional250) {
                                    result_152->sline=self->sline;
                                }
                                if(_if_conditional251=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional251) {
                                    __dec_obj132=result_152->sname;
                                    result_152->sname=(char*)come_increment_ref_count(((char*)(right_value323=string_clone(self->sname))));
                                    __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result228__ = __result_obj__ = result_152;
                                come_call_finalizer2(sBorrowNode_finalize,result_152, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result228__;
                                come_call_finalizer2(sBorrowNode_finalize,result_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional253;
_Bool _if_conditional254;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional253=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional253) {
                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional254=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional254) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional255;
struct sDelegateNode* __result230__;
void* right_value328;
struct sDelegateNode* result_154;
_Bool _if_conditional256;
void* right_value329;
struct sNode* __dec_obj133;
_Bool _if_conditional257;
_Bool _if_conditional258;
void* right_value330;
char* __dec_obj134;
struct sDelegateNode* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
memset(&result_154, 0, sizeof(struct sDelegateNode*));
right_value329 = (void*)0;
right_value330 = (void*)0;
                                    if(_if_conditional255=self==(void*)0,                                    _if_conditional255) {
                                        __result230__ = __result_obj__ = (void*)0;
                                        return __result230__;
                                    }
                                    result_154=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value328=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "struct sDelegateNode"))));
                                    come_call_finalizer2(sDelegateNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional256=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional256) {
                                        __dec_obj133=result_154->node;
                                        result_154->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=sNode_clone(self->node))));
                                        if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value329) { right_value329 = come_decrement_ref_count2(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional257=self!=((void*)0),                                    _if_conditional257) {
                                        result_154->sline=self->sline;
                                    }
                                    if(_if_conditional258=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional258) {
                                        __dec_obj134=result_154->sname;
                                        result_154->sname=(char*)come_increment_ref_count(((char*)(right_value330=string_clone(self->sname))));
                                        __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result231__ = __result_obj__ = result_154;
                                    come_call_finalizer2(sDelegateNode_finalize,result_154, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result231__;
                                    come_call_finalizer2(sDelegateNode_finalize,result_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sShareNode_finalize(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional260;
_Bool _if_conditional261;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional260=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional260) {
                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional261=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional261) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional262;
struct sShareNode* __result233__;
void* right_value335;
struct sShareNode* result_156;
_Bool _if_conditional263;
void* right_value336;
struct sNode* __dec_obj135;
_Bool _if_conditional264;
_Bool _if_conditional265;
void* right_value337;
char* __dec_obj136;
struct sShareNode* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
right_value335 = (void*)0;
memset(&result_156, 0, sizeof(struct sShareNode*));
right_value336 = (void*)0;
right_value337 = (void*)0;
                                        if(_if_conditional262=self==(void*)0,                                        _if_conditional262) {
                                            __result233__ = __result_obj__ = (void*)0;
                                            return __result233__;
                                        }
                                        result_156=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value335=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "struct sShareNode"))));
                                        come_call_finalizer2(sShareNode_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional263=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional263) {
                                            __dec_obj135=result_156->node;
                                            result_156->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=sNode_clone(self->node))));
                                            if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional264=self!=((void*)0),                                        _if_conditional264) {
                                            result_156->sline=self->sline;
                                        }
                                        if(_if_conditional265=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional265) {
                                            __dec_obj136=result_156->sname;
                                            result_156->sname=(char*)come_increment_ref_count(((char*)(right_value337=string_clone(self->sname))));
                                            __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result234__ = __result_obj__ = result_156;
                                        come_call_finalizer2(sShareNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result234__;
                                        come_call_finalizer2(sShareNode_finalize,result_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCloneNode_finalize(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional267;
_Bool _if_conditional268;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional267=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional267) {
                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional268=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional268) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional269;
struct sCloneNode* __result236__;
void* right_value342;
struct sCloneNode* result_158;
_Bool _if_conditional270;
void* right_value343;
struct sNode* __dec_obj137;
_Bool _if_conditional271;
_Bool _if_conditional272;
void* right_value344;
char* __dec_obj138;
struct sCloneNode* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
right_value342 = (void*)0;
memset(&result_158, 0, sizeof(struct sCloneNode*));
right_value343 = (void*)0;
right_value344 = (void*)0;
                                            if(_if_conditional269=self==(void*)0,                                            _if_conditional269) {
                                                __result236__ = __result_obj__ = (void*)0;
                                                return __result236__;
                                            }
                                            result_158=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value342=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode"))));
                                            come_call_finalizer2(sCloneNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional270=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional270) {
                                                __dec_obj137=result_158->node;
                                                result_158->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=sNode_clone(self->node))));
                                                if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional271=self!=((void*)0),                                            _if_conditional271) {
                                                result_158->sline=self->sline;
                                            }
                                            if(_if_conditional272=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional272) {
                                                __dec_obj138=result_158->sname;
                                                result_158->sname=(char*)come_increment_ref_count(((char*)(right_value344=string_clone(self->sname))));
                                                __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result237__ = __result_obj__ = result_158;
                                            come_call_finalizer2(sCloneNode_finalize,result_158, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result237__;
                                            come_call_finalizer2(sCloneNode_finalize,result_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDupeNode_finalize(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional274;
_Bool _if_conditional275;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional274=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional274) {
                                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                if(_if_conditional275=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional275) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional276;
struct sDupeNode* __result239__;
void* right_value349;
struct sDupeNode* result_160;
_Bool _if_conditional277;
void* right_value350;
struct sNode* __dec_obj139;
_Bool _if_conditional278;
_Bool _if_conditional279;
void* right_value351;
char* __dec_obj140;
struct sDupeNode* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
right_value349 = (void*)0;
memset(&result_160, 0, sizeof(struct sDupeNode*));
right_value350 = (void*)0;
right_value351 = (void*)0;
                                                if(_if_conditional276=self==(void*)0,                                                _if_conditional276) {
                                                    __result239__ = __result_obj__ = (void*)0;
                                                    return __result239__;
                                                }
                                                result_160=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value349=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode"))));
                                                come_call_finalizer2(sDupeNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional277=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional277) {
                                                    __dec_obj139=result_160->node;
                                                    result_160->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value350=sNode_clone(self->node))));
                                                    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value350) { right_value350 = come_decrement_ref_count2(right_value350, ((struct sNode*)right_value350)->finalize, ((struct sNode*)right_value350)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                if(_if_conditional278=self!=((void*)0),                                                _if_conditional278) {
                                                    result_160->sline=self->sline;
                                                }
                                                if(_if_conditional279=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional279) {
                                                    __dec_obj140=result_160->sname;
                                                    result_160->sname=(char*)come_increment_ref_count(((char*)(right_value351=string_clone(self->sname))));
                                                    __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                __result240__ = __result_obj__ = result_160;
                                                come_call_finalizer2(sDupeNode_finalize,result_160, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result240__;
                                                come_call_finalizer2(sDupeNode_finalize,result_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional281;
_Bool _if_conditional282;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional281=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional281) {
                                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional282=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional282) {
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional283;
struct sDummyHeapNode* __result242__;
void* right_value356;
struct sDummyHeapNode* result_162;
_Bool _if_conditional284;
void* right_value357;
struct sNode* __dec_obj141;
_Bool _if_conditional285;
_Bool _if_conditional286;
void* right_value358;
char* __dec_obj142;
struct sDummyHeapNode* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
right_value356 = (void*)0;
memset(&result_162, 0, sizeof(struct sDummyHeapNode*));
right_value357 = (void*)0;
right_value358 = (void*)0;
                                                    if(_if_conditional283=self==(void*)0,                                                    _if_conditional283) {
                                                        __result242__ = __result_obj__ = (void*)0;
                                                        return __result242__;
                                                    }
                                                    result_162=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value356=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode"))));
                                                    come_call_finalizer2(sDummyHeapNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional284=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional284) {
                                                        __dec_obj141=result_162->node;
                                                        result_162->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=sNode_clone(self->node))));
                                                        if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    if(_if_conditional285=self!=((void*)0),                                                    _if_conditional285) {
                                                        result_162->sline=self->sline;
                                                    }
                                                    if(_if_conditional286=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional286) {
                                                        __dec_obj142=result_162->sname;
                                                        result_162->sname=(char*)come_increment_ref_count(((char*)(right_value358=string_clone(self->sname))));
                                                        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    __result243__ = __result_obj__ = result_162;
                                                    come_call_finalizer2(sDummyHeapNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result243__;
                                                    come_call_finalizer2(sDummyHeapNode_finalize,result_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional288;
_Bool _if_conditional289;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional288=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional288) {
                                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional289=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional289) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional290;
struct sGCIncNode* __result245__;
void* right_value363;
struct sGCIncNode* result_164;
_Bool _if_conditional291;
void* right_value364;
struct sNode* __dec_obj143;
_Bool _if_conditional292;
_Bool _if_conditional293;
void* right_value365;
char* __dec_obj144;
struct sGCIncNode* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
right_value363 = (void*)0;
memset(&result_164, 0, sizeof(struct sGCIncNode*));
right_value364 = (void*)0;
right_value365 = (void*)0;
                                                        if(_if_conditional290=self==(void*)0,                                                        _if_conditional290) {
                                                            __result245__ = __result_obj__ = (void*)0;
                                                            return __result245__;
                                                        }
                                                        result_164=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value363=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode"))));
                                                        come_call_finalizer2(sGCIncNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional291=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional291) {
                                                            __dec_obj143=result_164->node;
                                                            result_164->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=sNode_clone(self->node))));
                                                            if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value364) { right_value364 = come_decrement_ref_count2(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional292=self!=((void*)0),                                                        _if_conditional292) {
                                                            result_164->sline=self->sline;
                                                        }
                                                        if(_if_conditional293=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional293) {
                                                            __dec_obj144=result_164->sname;
                                                            result_164->sname=(char*)come_increment_ref_count(((char*)(right_value365=string_clone(self->sname))));
                                                            __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        __result246__ = __result_obj__ = result_164;
                                                        come_call_finalizer2(sGCIncNode_finalize,result_164, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result246__;
                                                        come_call_finalizer2(sGCIncNode_finalize,result_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional295;
_Bool _if_conditional296;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional295=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional295) {
                                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional296=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional296) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional297;
struct sGCDecNode* __result248__;
void* right_value370;
struct sGCDecNode* result_166;
_Bool _if_conditional298;
void* right_value371;
struct sNode* __dec_obj145;
_Bool _if_conditional299;
_Bool _if_conditional300;
void* right_value372;
char* __dec_obj146;
struct sGCDecNode* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
right_value370 = (void*)0;
memset(&result_166, 0, sizeof(struct sGCDecNode*));
right_value371 = (void*)0;
right_value372 = (void*)0;
                                                            if(_if_conditional297=self==(void*)0,                                                            _if_conditional297) {
                                                                __result248__ = __result_obj__ = (void*)0;
                                                                return __result248__;
                                                            }
                                                            result_166=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value370=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode"))));
                                                            come_call_finalizer2(sGCDecNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional298=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional298) {
                                                                __dec_obj145=result_166->node;
                                                                result_166->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value371=sNode_clone(self->node))));
                                                                if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value371) { right_value371 = come_decrement_ref_count2(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional299=self!=((void*)0),                                                            _if_conditional299) {
                                                                result_166->sline=self->sline;
                                                            }
                                                            if(_if_conditional300=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional300) {
                                                                __dec_obj146=result_166->sname;
                                                                result_166->sname=(char*)come_increment_ref_count(((char*)(right_value372=string_clone(self->sname))));
                                                                __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value372 = come_decrement_ref_count2(right_value372, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result249__ = __result_obj__ = result_166;
                                                            come_call_finalizer2(sGCDecNode_finalize,result_166, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result249__;
                                                            come_call_finalizer2(sGCDecNode_finalize,result_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sIsHeap_finalize(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional303;
_Bool _if_conditional304;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional303=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional303) {
                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional304=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional304) {
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional305;
struct sIsHeap* __result251__;
void* right_value378;
struct sIsHeap* result_171;
_Bool _if_conditional306;
void* right_value379;
struct sType* __dec_obj147;
_Bool _if_conditional307;
_Bool _if_conditional308;
void* right_value380;
char* __dec_obj148;
struct sIsHeap* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value378 = (void*)0;
memset(&result_171, 0, sizeof(struct sIsHeap*));
right_value379 = (void*)0;
right_value380 = (void*)0;
                                                                if(_if_conditional305=self==(void*)0,                                                                _if_conditional305) {
                                                                    __result251__ = __result_obj__ = (void*)0;
                                                                    return __result251__;
                                                                }
                                                                result_171=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value378=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap"))));
                                                                come_call_finalizer2(sIsHeap_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional306=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional306) {
                                                                    __dec_obj147=result_171->type;
                                                                    result_171->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value379=sType_clone(self->type))));
                                                                    come_call_finalizer2(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(sType_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                }
                                                                if(_if_conditional307=self!=((void*)0),                                                                _if_conditional307) {
                                                                    result_171->sline=self->sline;
                                                                }
                                                                if(_if_conditional308=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional308) {
                                                                    __dec_obj148=result_171->sname;
                                                                    result_171->sname=(char*)come_increment_ref_count(((char*)(right_value380=string_clone(self->sname))));
                                                                    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value380 = come_decrement_ref_count2(right_value380, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                __result252__ = __result_obj__ = result_171;
                                                                come_call_finalizer2(sIsHeap_finalize,result_171, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result252__;
                                                                come_call_finalizer2(sIsHeap_finalize,result_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional346;
_Bool _if_conditional347;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional346=self!=((void*)0)&&self->type!=((void*)0),                                                                            _if_conditional346) {
                                                                                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional347=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional347) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional348;
struct sSizeOfNode* __result273__;
void* right_value417;
struct sSizeOfNode* result_186;
_Bool _if_conditional349;
void* right_value418;
struct sType* __dec_obj155;
_Bool _if_conditional350;
_Bool _if_conditional351;
void* right_value419;
char* __dec_obj156;
struct sSizeOfNode* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
right_value417 = (void*)0;
memset(&result_186, 0, sizeof(struct sSizeOfNode*));
right_value418 = (void*)0;
right_value419 = (void*)0;
                                                                            if(_if_conditional348=self==(void*)0,                                                                            _if_conditional348) {
                                                                                __result273__ = __result_obj__ = (void*)0;
                                                                                return __result273__;
                                                                            }
                                                                            result_186=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value417=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode"))));
                                                                            come_call_finalizer2(sSizeOfNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional349=self!=((void*)0)&&self->type!=((void*)0),                                                                            _if_conditional349) {
                                                                                __dec_obj155=result_186->type;
                                                                                result_186->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value418=sType_clone(self->type))));
                                                                                come_call_finalizer2(sType_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer2(sType_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            if(_if_conditional350=self!=((void*)0),                                                                            _if_conditional350) {
                                                                                result_186->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional351=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional351) {
                                                                                __dec_obj156=result_186->sname;
                                                                                result_186->sname=(char*)come_increment_ref_count(((char*)(right_value419=string_clone(self->sname))));
                                                                                __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value419 = come_decrement_ref_count2(right_value419, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result274__ = __result_obj__ = result_186;
                                                                            come_call_finalizer2(sSizeOfNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result274__;
                                                                            come_call_finalizer2(sSizeOfNode_finalize,result_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional352;
_Bool _if_conditional353;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional352=self!=((void*)0)&&self->exp!=((void*)0),                                                                            _if_conditional352) {
                                                                                if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            if(_if_conditional353=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional353) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional354;
struct sSizeOfExpNode* __result276__;
void* right_value424;
struct sSizeOfExpNode* result_188;
_Bool _if_conditional355;
void* right_value425;
struct sNode* __dec_obj157;
_Bool _if_conditional356;
_Bool _if_conditional357;
void* right_value426;
char* __dec_obj158;
struct sSizeOfExpNode* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
right_value424 = (void*)0;
memset(&result_188, 0, sizeof(struct sSizeOfExpNode*));
right_value425 = (void*)0;
right_value426 = (void*)0;
                                                                            if(_if_conditional354=self==(void*)0,                                                                            _if_conditional354) {
                                                                                __result276__ = __result_obj__ = (void*)0;
                                                                                return __result276__;
                                                                            }
                                                                            result_188=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value424=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode"))));
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional355=self!=((void*)0)&&self->exp!=((void*)0),                                                                            _if_conditional355) {
                                                                                __dec_obj157=result_188->exp;
                                                                                result_188->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=sNode_clone(self->exp))));
                                                                                if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            }
                                                                            if(_if_conditional356=self!=((void*)0),                                                                            _if_conditional356) {
                                                                                result_188->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional357=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional357) {
                                                                                __dec_obj158=result_188->sname;
                                                                                result_188->sname=(char*)come_increment_ref_count(((char*)(right_value426=string_clone(self->sname))));
                                                                                __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value426 = come_decrement_ref_count2(right_value426, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result277__ = __result_obj__ = result_188;
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,result_188, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result277__;
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,result_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional363;
_Bool _if_conditional364;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional363=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional363) {
                                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional364=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional364) {
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional365;
struct sAlignOfNode* __result279__;
void* right_value432;
struct sAlignOfNode* result_196;
_Bool _if_conditional366;
void* right_value433;
struct sType* __dec_obj159;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value434;
char* __dec_obj160;
struct sAlignOfNode* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
right_value432 = (void*)0;
memset(&result_196, 0, sizeof(struct sAlignOfNode*));
right_value433 = (void*)0;
right_value434 = (void*)0;
                                                                                if(_if_conditional365=self==(void*)0,                                                                                _if_conditional365) {
                                                                                    __result279__ = __result_obj__ = (void*)0;
                                                                                    return __result279__;
                                                                                }
                                                                                result_196=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value432=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode"))));
                                                                                come_call_finalizer2(sAlignOfNode_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional366=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional366) {
                                                                                    __dec_obj159=result_196->type;
                                                                                    result_196->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value433=sType_clone(self->type))));
                                                                                    come_call_finalizer2(sType_finalize,__dec_obj159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer2(sType_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                if(_if_conditional367=self!=((void*)0),                                                                                _if_conditional367) {
                                                                                    result_196->sline=self->sline;
                                                                                }
                                                                                if(_if_conditional368=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional368) {
                                                                                    __dec_obj160=result_196->sname;
                                                                                    result_196->sname=(char*)come_increment_ref_count(((char*)(right_value434=string_clone(self->sname))));
                                                                                    __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value434 = come_decrement_ref_count2(right_value434, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                __result280__ = __result_obj__ = result_196;
                                                                                come_call_finalizer2(sAlignOfNode_finalize,result_196, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result280__;
                                                                                come_call_finalizer2(sAlignOfNode_finalize,result_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional369;
_Bool _if_conditional370;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional369=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional369) {
                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                if(_if_conditional370=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional370) {
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional371;
struct sAlignOfExpNode* __result282__;
void* right_value439;
struct sAlignOfExpNode* result_198;
_Bool _if_conditional372;
void* right_value440;
struct sNode* __dec_obj161;
_Bool _if_conditional373;
_Bool _if_conditional374;
void* right_value441;
char* __dec_obj162;
struct sAlignOfExpNode* __result283__;
memset(&__result_obj__, 0, sizeof(void*));
right_value439 = (void*)0;
memset(&result_198, 0, sizeof(struct sAlignOfExpNode*));
right_value440 = (void*)0;
right_value441 = (void*)0;
                                                                                if(_if_conditional371=self==(void*)0,                                                                                _if_conditional371) {
                                                                                    __result282__ = __result_obj__ = (void*)0;
                                                                                    return __result282__;
                                                                                }
                                                                                result_198=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value439=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode"))));
                                                                                come_call_finalizer2(sAlignOfExpNode_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional372=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional372) {
                                                                                    __dec_obj161=result_198->exp;
                                                                                    result_198->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=sNode_clone(self->exp))));
                                                                                    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                }
                                                                                if(_if_conditional373=self!=((void*)0),                                                                                _if_conditional373) {
                                                                                    result_198->sline=self->sline;
                                                                                }
                                                                                if(_if_conditional374=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional374) {
                                                                                    __dec_obj162=result_198->sname;
                                                                                    result_198->sname=(char*)come_increment_ref_count(((char*)(right_value441=string_clone(self->sname))));
                                                                                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value441 = come_decrement_ref_count2(right_value441, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                __result283__ = __result_obj__ = result_198;
                                                                                come_call_finalizer2(sAlignOfExpNode_finalize,result_198, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result283__;
                                                                                come_call_finalizer2(sAlignOfExpNode_finalize,result_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional380;
_Bool _if_conditional381;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    if(_if_conditional380=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional380) {
                                                                                        come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    if(_if_conditional381=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional381) {
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional382;
struct sAlignOfNode2* __result285__;
void* right_value447;
struct sAlignOfNode2* result_206;
_Bool _if_conditional383;
void* right_value448;
struct sType* __dec_obj163;
_Bool _if_conditional384;
_Bool _if_conditional385;
void* right_value449;
char* __dec_obj164;
struct sAlignOfNode2* __result286__;
memset(&__result_obj__, 0, sizeof(void*));
right_value447 = (void*)0;
memset(&result_206, 0, sizeof(struct sAlignOfNode2*));
right_value448 = (void*)0;
right_value449 = (void*)0;
                                                                                    if(_if_conditional382=self==(void*)0,                                                                                    _if_conditional382) {
                                                                                        __result285__ = __result_obj__ = (void*)0;
                                                                                        return __result285__;
                                                                                    }
                                                                                    result_206=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value447=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2"))));
                                                                                    come_call_finalizer2(sAlignOfNode2_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional383=self!=((void*)0)&&self->type!=((void*)0),                                                                                    _if_conditional383) {
                                                                                        __dec_obj163=result_206->type;
                                                                                        result_206->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value448=sType_clone(self->type))));
                                                                                        come_call_finalizer2(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sType_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    if(_if_conditional384=self!=((void*)0),                                                                                    _if_conditional384) {
                                                                                        result_206->sline=self->sline;
                                                                                    }
                                                                                    if(_if_conditional385=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional385) {
                                                                                        __dec_obj164=result_206->sname;
                                                                                        result_206->sname=(char*)come_increment_ref_count(((char*)(right_value449=string_clone(self->sname))));
                                                                                        __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value449 = come_decrement_ref_count2(right_value449, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    __result286__ = __result_obj__ = result_206;
                                                                                    come_call_finalizer2(sAlignOfNode2_finalize,result_206, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result286__;
                                                                                    come_call_finalizer2(sAlignOfNode2_finalize,result_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional386;
_Bool _if_conditional387;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                    if(_if_conditional386=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional386) {
                                                                                        if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                    if(_if_conditional387=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional387) {
                                                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional388;
struct sAlignOfExpNode2* __result288__;
void* right_value454;
struct sAlignOfExpNode2* result_208;
_Bool _if_conditional389;
void* right_value455;
struct sNode* __dec_obj165;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value456;
char* __dec_obj166;
struct sAlignOfExpNode2* __result289__;
memset(&__result_obj__, 0, sizeof(void*));
right_value454 = (void*)0;
memset(&result_208, 0, sizeof(struct sAlignOfExpNode2*));
right_value455 = (void*)0;
right_value456 = (void*)0;
                                                                                    if(_if_conditional388=self==(void*)0,                                                                                    _if_conditional388) {
                                                                                        __result288__ = __result_obj__ = (void*)0;
                                                                                        return __result288__;
                                                                                    }
                                                                                    result_208=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value454=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2"))));
                                                                                    come_call_finalizer2(sAlignOfExpNode2_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional389=self!=((void*)0)&&self->exp!=((void*)0),                                                                                    _if_conditional389) {
                                                                                        __dec_obj165=result_208->exp;
                                                                                        result_208->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=sNode_clone(self->exp))));
                                                                                        if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                        if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    }
                                                                                    if(_if_conditional390=self!=((void*)0),                                                                                    _if_conditional390) {
                                                                                        result_208->sline=self->sline;
                                                                                    }
                                                                                    if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),                                                                                    _if_conditional391) {
                                                                                        __dec_obj166=result_208->sname;
                                                                                        result_208->sname=(char*)come_increment_ref_count(((char*)(right_value456=string_clone(self->sname))));
                                                                                        __dec_obj166 = come_decrement_ref_count2(__dec_obj166, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                        right_value456 = come_decrement_ref_count2(right_value456, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                    }
                                                                                    __result289__ = __result_obj__ = result_208;
                                                                                    come_call_finalizer2(sAlignOfExpNode2_finalize,result_208, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                    return __result289__;
                                                                                    come_call_finalizer2(sAlignOfExpNode2_finalize,result_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional397;
_Bool _if_conditional398;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        if(_if_conditional397=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional397) {
                                                                                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        if(_if_conditional398=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional398) {
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional399;
struct sAlignAsNode* __result291__;
void* right_value462;
struct sAlignAsNode* result_216;
_Bool _if_conditional400;
void* right_value463;
struct sType* __dec_obj167;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value464;
char* __dec_obj168;
struct sAlignAsNode* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
right_value462 = (void*)0;
memset(&result_216, 0, sizeof(struct sAlignAsNode*));
right_value463 = (void*)0;
right_value464 = (void*)0;
                                                                                        if(_if_conditional399=self==(void*)0,                                                                                        _if_conditional399) {
                                                                                            __result291__ = __result_obj__ = (void*)0;
                                                                                            return __result291__;
                                                                                        }
                                                                                        result_216=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value462=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode"))));
                                                                                        come_call_finalizer2(sAlignAsNode_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional400=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional400) {
                                                                                            __dec_obj167=result_216->type;
                                                                                            result_216->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value463=sType_clone(self->type))));
                                                                                            come_call_finalizer2(sType_finalize,__dec_obj167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sType_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        if(_if_conditional401=self!=((void*)0),                                                                                        _if_conditional401) {
                                                                                            result_216->sline=self->sline;
                                                                                        }
                                                                                        if(_if_conditional402=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional402) {
                                                                                            __dec_obj168=result_216->sname;
                                                                                            result_216->sname=(char*)come_increment_ref_count(((char*)(right_value464=string_clone(self->sname))));
                                                                                            __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value464 = come_decrement_ref_count2(right_value464, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        __result292__ = __result_obj__ = result_216;
                                                                                        come_call_finalizer2(sAlignAsNode_finalize,result_216, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result292__;
                                                                                        come_call_finalizer2(sAlignAsNode_finalize,result_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional403;
_Bool _if_conditional404;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        if(_if_conditional403=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional403) {
                                                                                            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
                                                                                        if(_if_conditional404=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional404) {
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional405;
struct sAlignAsExpNode* __result294__;
void* right_value469;
struct sAlignAsExpNode* result_218;
_Bool _if_conditional406;
void* right_value470;
struct sNode* __dec_obj169;
_Bool _if_conditional407;
_Bool _if_conditional408;
void* right_value471;
char* __dec_obj170;
struct sAlignAsExpNode* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
right_value469 = (void*)0;
memset(&result_218, 0, sizeof(struct sAlignAsExpNode*));
right_value470 = (void*)0;
right_value471 = (void*)0;
                                                                                        if(_if_conditional405=self==(void*)0,                                                                                        _if_conditional405) {
                                                                                            __result294__ = __result_obj__ = (void*)0;
                                                                                            return __result294__;
                                                                                        }
                                                                                        result_218=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value469=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode"))));
                                                                                        come_call_finalizer2(sAlignAsExpNode_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional406=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional406) {
                                                                                            __dec_obj169=result_218->exp;
                                                                                            result_218->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value470=sNode_clone(self->exp))));
                                                                                            if(__dec_obj169) { __dec_obj169 = come_decrement_ref_count2(__dec_obj169, ((struct sNode*)__dec_obj169)->finalize, ((struct sNode*)__dec_obj169)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                            if(right_value470) { right_value470 = come_decrement_ref_count2(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        }
                                                                                        if(_if_conditional407=self!=((void*)0),                                                                                        _if_conditional407) {
                                                                                            result_218->sline=self->sline;
                                                                                        }
                                                                                        if(_if_conditional408=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional408) {
                                                                                            __dec_obj170=result_218->sname;
                                                                                            result_218->sname=(char*)come_increment_ref_count(((char*)(right_value471=string_clone(self->sname))));
                                                                                            __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value471 = come_decrement_ref_count2(right_value471, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        __result295__ = __result_obj__ = result_218;
                                                                                        come_call_finalizer2(sAlignAsExpNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result295__;
                                                                                        come_call_finalizer2(sAlignAsExpNode_finalize,result_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional409;
_Bool _if_conditional410;
_Bool _if_conditional411;
_Bool _if_conditional412;
_Bool _if_conditional413;
_Bool _if_conditional414;
_Bool _if_conditional415;
void* right_value474;
void* right_value475;
struct sNode* _inf_value34;
struct sNullNodeX* _inf_obj_value34;
void* right_value478;
struct sNode* __result300__;
void* right_value479;
struct sNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
    if(_if_conditional409=charp_operator_equals(buf,"using"),    _if_conditional409) {
        if(_if_conditional410=strmemcmp(info->p,"comelang"),        _if_conditional410) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else {
            if(_if_conditional411=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),            _if_conditional411) {
                info->p+=strlen("c");
                skip_spaces_and_lf(info);
                if(_if_conditional412=*info->p==123,                _if_conditional412) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    gComeC=(_Bool)1;
                    transpile_toplevel((_Bool)1,info);
                    gComeC=(_Bool)0;
                }
                else {
                    gComeC=(_Bool)1;
                }
            }
            else {
                if(_if_conditional413=strmemcmp(info->p,"gc"),                _if_conditional413) {
                    info->p+=strlen("gc");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional414=strmemcmp(info->p,"no-gc"),                    _if_conditional414) {
                        info->p+=strlen("no-gc");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional415=strmemcmp(info->p,"unsafe"),                        _if_conditional415) {
                            info->p+=strlen("unsafe");
                            skip_spaces_and_lf(info);
                        }
                        else {
                            err_msg(info,"invalid using");
                            exit(2);
                        }
                    }
                }
            }
        }
        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1876, "struct sNode");
        _inf_obj_value34=come_increment_ref_count(((struct sNullNodeX*)(right_value475=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value474=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1876, "struct sNullNodeX")))),info))));
        _inf_value34->_protocol_obj=_inf_obj_value34;
        _inf_value34->finalize=(void*)sNullNodeX_finalize;
        _inf_value34->clone=(void*)sNullNodeX_clone;
        _inf_value34->compile=(void*)sNullNodeX_compile;
        _inf_value34->sline=(void*)sNullNodeX_sline;
        _inf_value34->sname=(void*)sNullNodeX_sname;
        _inf_value34->terminated=(void*)sNullNodeX_terminated;
        _inf_value34->kind=(void*)sNullNodeX_kind;
        __result300__ = __result_obj__ = ((struct sNode*)(right_value478=_inf_value34));
        come_call_finalizer2(sNullNodeX_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sNullNodeX_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result300__;
    }
    __result301__ = __result_obj__ = ((struct sNode*)(right_value479=top_level_v93(buf,head,head_sline,info)));
    if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result301__;
}

static void sNullNodeX_finalize(struct sNullNodeX* self){
void* __result_obj__;
_Bool _if_conditional416;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional416=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional416) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self){
void* __result_obj__;
_Bool _if_conditional417;
struct sNullNodeX* __result298__;
void* right_value476;
struct sNullNodeX* result_219;
_Bool _if_conditional418;
_Bool _if_conditional419;
void* right_value477;
char* __dec_obj171;
struct sNullNodeX* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
right_value476 = (void*)0;
memset(&result_219, 0, sizeof(struct sNullNodeX*));
right_value477 = (void*)0;
            if(_if_conditional417=self==(void*)0,            _if_conditional417) {
                __result298__ = __result_obj__ = (void*)0;
                return __result298__;
            }
            result_219=(struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value476=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "sNullNodeX_clone", 3, "struct sNullNodeX"))));
            come_call_finalizer2(sNullNodeX_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional418=self!=((void*)0),            _if_conditional418) {
                result_219->sline=self->sline;
            }
            if(_if_conditional419=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional419) {
                __dec_obj171=result_219->sname;
                result_219->sname=(char*)come_increment_ref_count(((char*)(right_value477=string_clone(self->sname))));
                __dec_obj171 = come_decrement_ref_count2(__dec_obj171, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result299__ = __result_obj__ = result_219;
            come_call_finalizer2(sNullNodeX_finalize,result_219, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result299__;
            come_call_finalizer2(sNullNodeX_finalize,result_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional420;
void* right_value480;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type3_220;
char* name2_221;
_Bool err_222;
_Bool _if_conditional421;
void* right_value481;
struct sType* inf_type_223;
void* right_value482;
void* right_value483;
struct sNode* _inf_value35;
struct sImplementsNode* _inf_obj_value35;
void* right_value488;
struct sNode* __result304__;
_Bool _if_conditional430;
_Bool _while_condtional9;
void* right_value489;
struct sNode* __result305__;
memset(&__result_obj__, 0, sizeof(void*));
right_value480 = (void*)0;
memset(&type3_220, 0, sizeof(struct sType*));
memset(&name2_221, 0, sizeof(char*));
memset(&err_222, 0, sizeof(_Bool));
memset(&type3_220, 0, sizeof(struct sType*));
memset(&name2_221, 0, sizeof(char*));
memset(&err_222, 0, sizeof(_Bool));
right_value481 = (void*)0;
memset(&inf_type_223, 0, sizeof(struct sType*));
right_value482 = (void*)0;
right_value483 = (void*)0;
right_value488 = (void*)0;
right_value489 = (void*)0;
    if(_if_conditional420=strmemcmp(info->p,"implements"),    _if_conditional420) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value480=parse_type(info,(_Bool)0,(_Bool)1)));
        type3_220=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
        name2_221=(char*)come_increment_ref_count(multiple_assign_var10->v2);
        err_222=multiple_assign_var10->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional421=!err_222,        _if_conditional421) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_223=(struct sType*)come_increment_ref_count(((struct sType*)(right_value481=sType_clone(type3_220))));
        come_call_finalizer2(sType_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1896, "struct sNode");
        _inf_obj_value35=come_increment_ref_count(((struct sImplementsNode*)(right_value483=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value482=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1896, "struct sImplementsNode")))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_223),info))));
        _inf_value35->_protocol_obj=_inf_obj_value35;
        _inf_value35->finalize=(void*)sImplementsNode_finalize;
        _inf_value35->clone=(void*)sImplementsNode_clone;
        _inf_value35->compile=(void*)sImplementsNode_compile;
        _inf_value35->sline=(void*)sImplementsNode_sline;
        _inf_value35->sname=(void*)sImplementsNode_sname;
        _inf_value35->terminated=(void*)sImplementsNode_terminated;
        _inf_value35->kind=(void*)sImplementsNode_kind;
        __result304__ = __result_obj__ = ((struct sNode*)(right_value488=_inf_value35));
        come_call_finalizer2(sType_finalize,type3_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name2_221 = come_decrement_ref_count2(name2_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,inf_type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer2(sImplementsNode_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sImplementsNode_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value488) { right_value488 = come_decrement_ref_count2(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result304__;
        come_call_finalizer2(sType_finalize,type3_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name2_221 = come_decrement_ref_count2(name2_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,inf_type_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional430=*info->p==64,        _if_conditional430) {
            info->p++;
            while(_while_condtional9=xisalnum(*info->p)||*info->p==95,            _while_condtional9) {
                info->p++;
            }
            skip_spaces_and_lf(info);
        }
    }
    __result305__ = __result_obj__ = ((struct sNode*)(right_value489=post_position_operator3_v20((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value489) { right_value489 = come_decrement_ref_count2(right_value489, ((struct sNode*)right_value489)->finalize, ((struct sNode*)right_value489)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result305__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional422;
_Bool _if_conditional423;
_Bool _if_conditional424;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional422=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional422) {
                if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional423=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional423) {
                come_call_finalizer2(sType_finalize,self->inf_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional424=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional424) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional425;
struct sImplementsNode* __result302__;
void* right_value484;
struct sImplementsNode* result_224;
_Bool _if_conditional426;
void* right_value485;
struct sNode* __dec_obj172;
_Bool _if_conditional427;
void* right_value486;
struct sType* __dec_obj173;
_Bool _if_conditional428;
_Bool _if_conditional429;
void* right_value487;
char* __dec_obj174;
struct sImplementsNode* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
right_value484 = (void*)0;
memset(&result_224, 0, sizeof(struct sImplementsNode*));
right_value485 = (void*)0;
right_value486 = (void*)0;
right_value487 = (void*)0;
            if(_if_conditional425=self==(void*)0,            _if_conditional425) {
                __result302__ = __result_obj__ = (void*)0;
                return __result302__;
            }
            result_224=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value484=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode"))));
            come_call_finalizer2(sImplementsNode_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional426=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional426) {
                __dec_obj172=result_224->obj_exp;
                result_224->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value485=sNode_clone(self->obj_exp))));
                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional427=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional427) {
                __dec_obj173=result_224->inf_type;
                result_224->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value486=sType_clone(self->inf_type))));
                come_call_finalizer2(sType_finalize,__dec_obj173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional428=self!=((void*)0),            _if_conditional428) {
                result_224->sline=self->sline;
            }
            if(_if_conditional429=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional429) {
                __dec_obj174=result_224->sname;
                result_224->sname=(char*)come_increment_ref_count(((char*)(right_value487=string_clone(self->sname))));
                __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value487 = come_decrement_ref_count2(right_value487, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result303__ = __result_obj__ = result_224;
            come_call_finalizer2(sImplementsNode_finalize,result_224, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result303__;
            come_call_finalizer2(sImplementsNode_finalize,result_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

