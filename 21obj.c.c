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
struct sTypeOfNode
{
    struct sType* type;
    int sline;
    char* sname;
};
struct sTypeOfExpNode
{
    struct sNode* exp;
    int sline;
    char* sname;
};
struct sDynamicTypeOfNode
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

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info);

int sTypeOfNode_sline(struct sTypeOfNode* self, struct sInfo* info);

char* sTypeOfNode_sname(struct sTypeOfNode* self, struct sInfo* info);

_Bool sTypeOfNode_terminated();

char* sTypeOfNode_kind();

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info);

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info);

int sTypeOfExpNode_sline(struct sTypeOfExpNode* self, struct sInfo* info);

char* sTypeOfExpNode_sname(struct sTypeOfExpNode* self, struct sInfo* info);

_Bool sTypeOfExpNode_terminated();

char* sTypeOfExpNode_kind();

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info);

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info);

int sDynamicTypeOfNode_sline(struct sDynamicTypeOfNode* self, struct sInfo* info);

char* sDynamicTypeOfNode_sname(struct sDynamicTypeOfNode* self, struct sInfo* info);

_Bool sDynamicTypeOfNode_terminated();

char* sDynamicTypeOfNode_kind();

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info);

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
static void sTypeOfNode_finalize(struct sTypeOfNode* self);
static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self);
static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self);
static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self);
static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self);
static struct sDynamicTypeOfNode* sDynamicTypeOfNode_clone(struct sDynamicTypeOfNode* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1948, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1958, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 1968, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 1978, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 1988, "struct smart_pointer$1long"))));
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




struct sNullNodeX* sNullNodeX_initialize(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value13;
char* __dec_obj6;
struct sNullNodeX* __result10__;
memset(&__result_obj__, 0, sizeof(void*));
right_value13 = (void*)0;
    self->sline=info->sline;
    __dec_obj6=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value13=__builtin_string(info->sname))));
    __dec_obj6 = come_decrement_ref_count2(__dec_obj6, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value13 = come_decrement_ref_count2(right_value13, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result10__ = __result_obj__ = self;
    come_call_finalizer2(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result10__;
    come_call_finalizer2(sNullNodeX_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNodeX_terminated(){
void* __result_obj__;
_Bool __result11__;
memset(&__result_obj__, 0, sizeof(void*));
    __result11__ = (_Bool)0;
    return __result11__;
}

char* sNullNodeX_kind(){
void* __result_obj__;
void* right_value14;
char* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value14 = (void*)0;
    __result12__ = __result_obj__ = ((char*)(right_value14=__builtin_string("sNullNodeX")));
    right_value14 = come_decrement_ref_count2(right_value14, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result12__;
}

_Bool sNullNodeX_compile(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
_Bool __result13__;
memset(&__result_obj__, 0, sizeof(void*));
    __result13__ = (_Bool)1;
    return __result13__;
}

int sNullNodeX_sline(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
int __result14__;
memset(&__result_obj__, 0, sizeof(void*));
    __result14__ = self->sline;
    return __result14__;
}

char* sNullNodeX_sname(struct sNullNodeX* self, struct sInfo* info){
void* __result_obj__;
void* right_value15;
char* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
right_value15 = (void*)0;
    __result15__ = __result_obj__ = ((char*)(right_value15=__builtin_string(self->sname)));
    right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result15__;
}

struct sNewNode* sNewNode_initialize(struct sNewNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value50;
struct sType* __dec_obj29;
void* right_value51;
char* __dec_obj30;
struct sNewNode* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
right_value51 = (void*)0;
    __dec_obj29=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value50=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj30=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value51=__builtin_string(info->sname))));
    __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value51 = come_decrement_ref_count2(right_value51, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result34__ = __result_obj__ = self;
    come_call_finalizer2(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result34__;
    come_call_finalizer2(sNewNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional6;
struct sType* __result16__;
void* right_value16;
struct sType* result_5;
_Bool _if_conditional23;
_Bool _if_conditional24;
void* right_value19;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value20;
struct tuple1$1sTypeph* __dec_obj9;
_Bool _if_conditional29;
void* right_value21;
char* __dec_obj10;
_Bool _if_conditional30;
void* right_value28;
struct list$1sTypeph* __dec_obj14;
_Bool _if_conditional34;
void* right_value36;
struct list$1sNodeph* __dec_obj18;
_Bool _if_conditional47;
_Bool _if_conditional48;
void* right_value37;
struct list$1sTypeph* __dec_obj19;
_Bool _if_conditional49;
void* right_value44;
struct list$1charph* __dec_obj23;
_Bool _if_conditional53;
void* right_value45;
struct tuple1$1sTypeph* __dec_obj24;
_Bool _if_conditional54;
_Bool _if_conditional55;
void* right_value46;
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
void* right_value47;
struct sNode* __dec_obj26;
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value48;
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
void* right_value49;
char* __dec_obj28;
struct sType* __result33__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value19 = (void*)0;
right_value20 = (void*)0;
right_value21 = (void*)0;
right_value28 = (void*)0;
right_value36 = (void*)0;
right_value37 = (void*)0;
right_value44 = (void*)0;
right_value45 = (void*)0;
right_value46 = (void*)0;
right_value47 = (void*)0;
right_value48 = (void*)0;
right_value49 = (void*)0;
        if(_if_conditional6=self==(void*)0,        _if_conditional6) {
            __result16__ = __result_obj__ = (void*)0;
            return __result16__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value16=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional23=self!=((void*)0),        _if_conditional23) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional24=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional24) {
            __dec_obj8=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value19=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional28=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value20=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional29) {
            __dec_obj10=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value21=string_clone(self->mGenericsName))));
            __dec_obj10 = come_decrement_ref_count2(__dec_obj10, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value21 = come_decrement_ref_count2(right_value21, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional30=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional30) {
            __dec_obj14=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value28=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional34) {
            __dec_obj18=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value36=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional47=self!=((void*)0),        _if_conditional47) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional48) {
            __dec_obj19=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value37=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj19, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value37, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional49=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional49) {
            __dec_obj23=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value44=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional53=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional53) {
            __dec_obj24=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value45=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional54=self!=((void*)0),        _if_conditional54) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional55=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional55) {
            __dec_obj25=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value46=sNode_clone(self->mAlignas))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value46) { right_value46 = come_decrement_ref_count2(right_value46, ((struct sNode*)right_value46)->finalize, ((struct sNode*)right_value46)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value47=sNode_clone(self->mSizeNum))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, ((struct sNode*)__dec_obj26)->finalize, ((struct sNode*)__dec_obj26)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value47) { right_value47 = come_decrement_ref_count2(right_value47, ((struct sNode*)right_value47)->finalize, ((struct sNode*)right_value47)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional82=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional82) {
            __dec_obj27=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value48=string_clone(self->mOriginalTypeName))));
            __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
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
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value49=string_clone(self->mAsmName))));
            __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value49 = come_decrement_ref_count2(right_value49, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __result33__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result33__;
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
struct tuple1$1sTypeph* __result17__;
void* right_value17;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional27;
void* right_value18;
struct sType* __dec_obj7;
struct tuple1$1sTypeph* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value17 = (void*)0;
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
right_value18 = (void*)0;
                if(_if_conditional25=self==(void*)0,                _if_conditional25) {
                    __result17__ = __result_obj__ = (void*)0;
                    return __result17__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value17=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional27=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional27) {
                    __dec_obj7=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value18=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result18__ = __result_obj__ = result_12;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result18__;
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
struct list$1sTypeph* __result19__;
void* right_value22;
void* right_value23;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value27;
struct list$1sTypeph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value22 = (void*)0;
right_value23 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
right_value27 = (void*)0;
                if(_if_conditional31=self==((void*)0),                _if_conditional31) {
                    __result19__ = __result_obj__ = ((void*)0);
                    return __result19__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value23=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value27=sType_clone(it_14->item)))));
                    come_call_finalizer2(sType_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_14=it_14->next;
                }
                __result22__ = __result_obj__ = result_13;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result22__;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional32;
void* right_value24;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj11;
_Bool _if_conditional33;
void* right_value25;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj12;
void* right_value26;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj13;
struct list$1sTypeph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
right_value24 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value25 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
right_value26 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional32=self->len==0,                        _if_conditional32) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value24=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value25=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj12=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value26=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
_Bool _if_conditional35;
struct list$1sNodeph* __result23__;
void* right_value29;
void* right_value30;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value35;
struct list$1sNodeph* __result28__;
memset(&__result_obj__, 0, sizeof(void*));
right_value29 = (void*)0;
right_value30 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value35 = (void*)0;
                if(_if_conditional35=self==((void*)0),                _if_conditional35) {
                    __result23__ = __result_obj__ = ((void*)0);
                    return __result23__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value29=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value29, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value35=sNode_clone(it_19->item)))));
                    if(right_value35) { right_value35 = come_decrement_ref_count2(right_value35, ((struct sNode*)right_value35)->finalize, ((struct sNode*)right_value35)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_19=it_19->next;
                }
                __result28__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result28__;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
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
_Bool _if_conditional36;
void* right_value31;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj15;
_Bool _if_conditional37;
void* right_value32;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj16;
void* right_value33;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj17;
struct list$1sNodeph* __result25__;
memset(&__result_obj__, 0, sizeof(void*));
right_value31 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value32 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value33 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional36=self->len==0,                        _if_conditional36) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value31=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value32=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj16=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value33=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                        __result25__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result25__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional38;
struct sNode* __result26__;
void* right_value34;
struct sNode* result_23;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
struct sNode* __result27__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional38=self==(void*)0,                        _if_conditional38) {
                            __result26__ = __result_obj__ = (void*)0;
                            return __result26__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value34) { right_value34 = come_decrement_ref_count2(right_value34, ((struct sNode*)right_value34)->finalize, ((struct sNode*)right_value34)->_protocol_obj, 1, 0, 0, __result_obj__); } 
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
                        __result27__ = __result_obj__ = result_23;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result27__;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional50;
struct list$1charph* __result29__;
void* right_value38;
void* right_value39;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value43;
struct list$1charph* __result32__;
memset(&__result_obj__, 0, sizeof(void*));
right_value38 = (void*)0;
right_value39 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value43 = (void*)0;
                if(_if_conditional50=self==((void*)0),                _if_conditional50) {
                    __result29__ = __result_obj__ = ((void*)0);
                    return __result29__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value39=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value43=string_clone(it_25->item)))));
                    right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_25=it_25->next;
                }
                __result32__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result32__;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result30__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result30__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result30__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional51;
void* right_value40;
struct list_item$1charph* litem_26;
char* __dec_obj20;
_Bool _if_conditional52;
void* right_value41;
struct list_item$1charph* litem_27;
char* __dec_obj21;
void* right_value42;
struct list_item$1charph* litem_28;
char* __dec_obj22;
struct list$1charph* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value40 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value41 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value42 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional51=self->len==0,                        _if_conditional51) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value40=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value41=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value41, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj21=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value42=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                        __result31__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result31__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

int sNewNode_sline(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
int __result35__;
memset(&__result_obj__, 0, sizeof(void*));
    __result35__ = self->sline;
    return __result35__;
}

char* sNewNode_sname(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value52;
char* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
    __result36__ = __result_obj__ = ((char*)(right_value52=__builtin_string(self->sname)));
    right_value52 = come_decrement_ref_count2(right_value52, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result36__;
}

_Bool sNewNode_terminated(){
void* __result_obj__;
_Bool __result37__;
memset(&__result_obj__, 0, sizeof(void*));
    __result37__ = (_Bool)0;
    return __result37__;
}

char* sNewNode_kind(){
void* __result_obj__;
void* right_value53;
char* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value53 = (void*)0;
    __result38__ = __result_obj__ = ((char*)(right_value53=__builtin_string("sNewNode")));
    right_value53 = come_decrement_ref_count2(right_value53, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result38__;
}

_Bool sNewNode_compile(struct sNewNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_29;
void* right_value54;
struct CVALUE* come_value_30;
void* right_value55;
void* right_value56;
struct buffer* num_string_31;
struct list$1sNodeph* o2_saved_32;
struct sNode* it_35;
_Bool _if_conditional100;
_Bool __result46__;
void* right_value57;
struct CVALUE* cvalue_38;
void* right_value58;
void* right_value59;
struct sType* type2_39;
void* right_value60;
char* type_name_42;
void* right_value61;
void* right_value62;
char* __dec_obj31;
_Bool _if_conditional101;
void* right_value63;
char* __dec_obj32;
void* right_value64;
struct sType* __dec_obj33;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_29, 0, sizeof(struct sType*));
right_value54 = (void*)0;
memset(&come_value_30, 0, sizeof(struct CVALUE*));
right_value55 = (void*)0;
right_value56 = (void*)0;
memset(&num_string_31, 0, sizeof(struct buffer*));
memset(&o2_saved_32, 0, sizeof(struct list$1sNodeph*));
memset(&it_35, 0, sizeof(struct sNode*));
right_value57 = (void*)0;
memset(&cvalue_38, 0, sizeof(struct CVALUE*));
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&type2_39, 0, sizeof(struct sType*));
right_value60 = (void*)0;
memset(&type_name_42, 0, sizeof(char*));
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
right_value64 = (void*)0;
    type_29=self->type;
    come_value_30=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value54=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 85, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    num_string_31=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value56=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value55=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "21obj.c", 87, "struct buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    buffer_append_str(num_string_31,"1");
    for(    o2_saved_32=(struct list$1sNodeph*)come_increment_ref_count((type_29->mArrayNum)),it_35=list$1sNodeph_begin((o2_saved_32));    !list$1sNodeph_end((o2_saved_32));    it_35=list$1sNodeph_next((o2_saved_32))    ){
        if(_if_conditional100=!node_compile(it_35,info),        _if_conditional100) {
            __result46__ = (_Bool)0;
            come_call_finalizer2(list$1sNodephp_finalize,o2_saved_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            return __result46__;
        }
        cvalue_38=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value57=get_value_from_stack(-1,info))));
        come_call_finalizer2(CVALUE_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        dec_stack_ptr(1,info);
        buffer_append_str(num_string_31,((char*)(right_value58=xsprintf("*(%s)",cvalue_38->c_value))));
        right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(CVALUE_finalize,cvalue_38, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    come_call_finalizer2(list$1sNodephp_finalize,o2_saved_32, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type2_39=(struct sType*)come_increment_ref_count(((struct sType*)(right_value59=solve_generics(type_29,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    list$1sNodeph_reset(type2_39->mArrayNum);
    type_name_42=(char*)come_increment_ref_count(((char*)(right_value60=make_type_name_string(type2_39,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj31=come_value_30->c_value;
    come_value_30->c_value=(char*)come_increment_ref_count(((char*)(right_value62=xsprintf("(%s*)come_calloc(1, sizeof(%s)*(%s), \"%s\", %d, \"%s\")",type_name_42,type_name_42,((char*)(right_value61=buffer_to_string(num_string_31))),info->sname,info->sline,type_name_42))));
    __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    right_value62 = come_decrement_ref_count2(right_value62, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type2_39->mHeap=(_Bool)1;
    type2_39->mPointerNum++;
    if(type2_39->mNoSolvedGenericsType->v1) {
        type2_39->mNoSolvedGenericsType->v1->mPointerNum++;
        type2_39->mNoSolvedGenericsType->v1->mHeap=(_Bool)1;
    }
    __dec_obj32=come_value_30->c_value;
    come_value_30->c_value=(char*)come_increment_ref_count(((char*)(right_value63=append_object_to_right_values(come_value_30->c_value,(struct sType*)come_increment_ref_count(type2_39),info))));
    __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj33=come_value_30->type;
    come_value_30->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value64=sType_clone(type2_39))));
    come_call_finalizer2(sType_finalize,__dec_obj33, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_30->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_30->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_30));
    __result49__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,num_string_31, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_39, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_42 = come_decrement_ref_count2(type_name_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result49__;
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
struct sNode* __result39__;
_Bool _if_conditional97;
struct sNode* __result40__;
struct sNode* result_34;
struct sNode* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_33, 0, sizeof(struct sNode*));
memset(&result_34, 0, sizeof(struct sNode*));
        if(_if_conditional96=self==((void*)0),        _if_conditional96) {
            memset(&result_33,0,sizeof(struct sNode*));
            __result39__ = __result_obj__ = result_33;
            return __result39__;
        }
        self->it=self->head;
        if(self->it) {
            __result40__ = __result_obj__ = self->it->item;
            return __result40__;
        }
        memset(&result_34,0,sizeof(struct sNode*));
        __result41__ = __result_obj__ = result_34;
        return __result41__;
}

static _Bool list$1sNodeph_end(struct list$1sNodeph* self){
void* __result_obj__;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
        __result42__ = self==((void*)0)||self->it==((void*)0);
        return __result42__;
}

static struct sNode* list$1sNodeph_next(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional98;
struct sNode* result_36;
struct sNode* __result43__;
_Bool _if_conditional99;
struct sNode* __result44__;
struct sNode* result_37;
struct sNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&result_36, 0, sizeof(struct sNode*));
memset(&result_37, 0, sizeof(struct sNode*));
        if(_if_conditional98=self==((void*)0)||self->it==((void*)0),        _if_conditional98) {
            memset(&result_36,0,sizeof(struct sNode*));
            __result43__ = __result_obj__ = result_36;
            return __result43__;
        }
        self->it=self->it->next;
        if(self->it) {
            __result44__ = __result_obj__ = self->it->item;
            return __result44__;
        }
        memset(&result_37,0,sizeof(struct sNode*));
        __result45__ = __result_obj__ = result_37;
        return __result45__;
}

static struct list$1sNodeph* list$1sNodeph_reset(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_40;
_Bool _while_condtional7;
struct list_item$1sNodeph* prev_it_41;
struct list$1sNodeph* __result47__;
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
        __result47__ = __result_obj__ = self;
        return __result47__;
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional102;
void* right_value65;
struct list_item$1CVALUEph* litem_43;
struct CVALUE* __dec_obj34;
_Bool _if_conditional104;
void* right_value66;
struct list_item$1CVALUEph* litem_44;
struct CVALUE* __dec_obj35;
void* right_value67;
struct list_item$1CVALUEph* litem_45;
struct CVALUE* __dec_obj36;
struct list$1CVALUEph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
memset(&litem_43, 0, sizeof(struct list_item$1CVALUEph*));
right_value66 = (void*)0;
memset(&litem_44, 0, sizeof(struct list_item$1CVALUEph*));
right_value67 = (void*)0;
memset(&litem_45, 0, sizeof(struct list_item$1CVALUEph*));
        if(_if_conditional102=self->len==0,        _if_conditional102) {
            litem_43=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value65=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "struct list_item$1CVALUEph"))));
            come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
                litem_44=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value66=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_44->prev=self->head;
                litem_44->next=((void*)0);
                __dec_obj35=litem_44->item;
                litem_44->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_44;
                self->head->next=litem_44;
            }
            else {
                litem_45=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value67=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
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
        __result48__ = __result_obj__ = self;
        come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result48__;
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
void* right_value68;
void* right_value69;
struct sNode* _inf_value1;
struct sNewNode* _inf_obj_value1;
void* right_value73;
struct sNode* __result52__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value73 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 136, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNewNode*)(right_value69=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value68=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 136, "struct sNewNode")))),(struct sType*)come_increment_ref_count(type),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNewNode_finalize;
    _inf_value1->clone=(void*)sNewNode_clone;
    _inf_value1->compile=(void*)sNewNode_compile;
    _inf_value1->sline=(void*)sNewNode_sline;
    _inf_value1->sname=(void*)sNewNode_sname;
    _inf_value1->terminated=(void*)sNewNode_terminated;
    _inf_value1->kind=(void*)sNewNode_kind;
    __result52__ = __result_obj__ = ((struct sNode*)(right_value73=_inf_value1));
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sNewNode_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNewNode_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value73) { right_value73 = come_decrement_ref_count2(right_value73, ((struct sNode*)right_value73)->finalize, ((struct sNode*)right_value73)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result52__;
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

struct sImplementsNode* sImplementsNode_initialize(struct sImplementsNode* self, struct sNode* obj_exp, struct sType* inf_type, struct sInfo* info){
void* __result_obj__;
void* right_value74;
struct sNode* __dec_obj39;
void* right_value75;
struct sType* __dec_obj40;
void* right_value76;
char* __dec_obj41;
struct sImplementsNode* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
    __dec_obj39=self->obj_exp;
    self->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value74=sNode_clone(obj_exp))));
    if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, ((struct sNode*)__dec_obj39)->finalize, ((struct sNode*)__dec_obj39)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value74) { right_value74 = come_decrement_ref_count2(right_value74, ((struct sNode*)right_value74)->finalize, ((struct sNode*)right_value74)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj40=self->inf_type;
    self->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=sType_clone(inf_type))));
    come_call_finalizer2(sType_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj41=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value76=__builtin_string(info->sname))));
    __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result53__ = __result_obj__ = self;
    come_call_finalizer2(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result53__;
    come_call_finalizer2(sImplementsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(obj_exp) { obj_exp = come_decrement_ref_count2(obj_exp, ((struct sNode*)obj_exp)->finalize, ((struct sNode*)obj_exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    come_call_finalizer2(sType_finalize,inf_type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sImplementsNode_sline(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
int __result54__;
memset(&__result_obj__, 0, sizeof(void*));
    __result54__ = self->sline;
    return __result54__;
}

char* sImplementsNode_sname(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value77;
char* __result55__;
memset(&__result_obj__, 0, sizeof(void*));
right_value77 = (void*)0;
    __result55__ = __result_obj__ = ((char*)(right_value77=__builtin_string(self->sname)));
    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result55__;
}

_Bool sImplementsNode_terminated(){
void* __result_obj__;
_Bool __result56__;
memset(&__result_obj__, 0, sizeof(void*));
    __result56__ = (_Bool)0;
    return __result56__;
}

char* sImplementsNode_kind(){
void* __result_obj__;
void* right_value78;
char* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value78 = (void*)0;
    __result57__ = __result_obj__ = ((char*)(right_value78=__builtin_string("sImplementsNode")));
    right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result57__;
}

_Bool sImplementsNode_compile(struct sImplementsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value79;
struct sNode* obj_exp_47;
void* right_value80;
struct sType* inf_type_48;
_Bool _if_conditional114;
_Bool __result58__;
void* right_value81;
struct CVALUE* come_value_49;
void* right_value82;
struct sType* type_50;
struct sClass* klass_51;
void* right_value83;
struct CVALUE* come_value2_52;
void* right_value84;
struct sType* type2_53;
void* right_value85;
char* type_name_54;
void* right_value86;
char* type_name2_55;
static int inf_num_56=0;
void* right_value87;
char* buf_57;
void* right_value88;
char* buf2_58;
void* right_value89;
struct sType* typeX_59;
void* right_value90;
void* right_value91;
int i_60;
struct tuple2$2charphsTypeph* multiple_assign_var1;
char* name_64;
struct sType* field_type_65;
void* right_value92;
char* method_name_66;
void* right_value93;
char* __dec_obj42;
void* right_value94;
struct sType* type3_67;
void* right_value95;
struct sType* __dec_obj43;
void* right_value96;
char* __dec_obj44;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
right_value79 = (void*)0;
memset(&obj_exp_47, 0, sizeof(struct sNode*));
right_value80 = (void*)0;
memset(&inf_type_48, 0, sizeof(struct sType*));
right_value81 = (void*)0;
memset(&come_value_49, 0, sizeof(struct CVALUE*));
right_value82 = (void*)0;
memset(&type_50, 0, sizeof(struct sType*));
memset(&klass_51, 0, sizeof(struct sClass*));
right_value83 = (void*)0;
memset(&come_value2_52, 0, sizeof(struct CVALUE*));
right_value84 = (void*)0;
memset(&type2_53, 0, sizeof(struct sType*));
right_value85 = (void*)0;
memset(&type_name_54, 0, sizeof(char*));
right_value86 = (void*)0;
memset(&type_name2_55, 0, sizeof(char*));
right_value87 = (void*)0;
memset(&buf_57, 0, sizeof(char*));
right_value88 = (void*)0;
memset(&buf2_58, 0, sizeof(char*));
right_value89 = (void*)0;
memset(&typeX_59, 0, sizeof(struct sType*));
right_value90 = (void*)0;
right_value91 = (void*)0;
memset(&i_60, 0, sizeof(int));
memset(&name_64, 0, sizeof(char*));
memset(&field_type_65, 0, sizeof(struct sType*));
memset(&name_64, 0, sizeof(char*));
memset(&field_type_65, 0, sizeof(struct sType*));
right_value92 = (void*)0;
memset(&method_name_66, 0, sizeof(char*));
right_value93 = (void*)0;
right_value94 = (void*)0;
memset(&type3_67, 0, sizeof(struct sType*));
right_value95 = (void*)0;
right_value96 = (void*)0;
    obj_exp_47=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value79=sNode_clone(self->obj_exp))));
    if(right_value79) { right_value79 = come_decrement_ref_count2(right_value79, ((struct sNode*)right_value79)->finalize, ((struct sNode*)right_value79)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    inf_type_48=(struct sType*)come_increment_ref_count(((struct sType*)(right_value80=sType_clone(self->inf_type))));
    come_call_finalizer2(sType_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional114=!node_compile(obj_exp_47,info),    _if_conditional114) {
        __result58__ = (_Bool)0;
        if(obj_exp_47) { obj_exp_47 = come_decrement_ref_count2(obj_exp_47, ((struct sNode*)obj_exp_47)->finalize, ((struct sNode*)obj_exp_47)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(sType_finalize,inf_type_48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result58__;
    }
    come_value_49=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value81=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_50=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=sType_clone(come_value_49->type))));
    come_call_finalizer2(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_50->mPointerNum--;
    type_50->mHeap=(_Bool)0;
    klass_51=inf_type_48->mClass;
    come_value2_52=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value83=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 196, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_53=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(inf_type_48))));
    come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_54=(char*)come_increment_ref_count(((char*)(right_value85=make_type_name_string(inf_type_48,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type_name2_55=(char*)come_increment_ref_count(((char*)(right_value86=make_type_name_string(type_50,(_Bool)0,(_Bool)1,(_Bool)0,info))));
    right_value86 = come_decrement_ref_count2(right_value86, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    buf_57=(char*)come_increment_ref_count(((char*)(right_value87=xsprintf("%s* _inf_value%d;\n",type_name_54,++inf_num_56))));
    right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf_57);
    buf2_58=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s* _inf_obj_value%d;\n",type_name2_55,inf_num_56))));
    right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    add_come_code_at_function_head(info,buf2_58);
    add_come_code(info,"_inf_value%d=(%s*)come_calloc(1, sizeof(%s), \"%s\", %d, \"%s\");\n",inf_num_56,type_name_54,type_name_54,info->sname,info->sline,type_name_54);
    add_come_code(info,"_inf_obj_value%d=come_increment_ref_count(%s);\n",inf_num_56,come_value_49->c_value);
    add_come_code(info,"_inf_value%d->_protocol_obj=_inf_obj_value%d;\n",inf_num_56,inf_num_56);
    typeX_59=(struct sType*)come_increment_ref_count(((struct sType*)(right_value89=sType_clone(type_50))));
    come_call_finalizer2(sType_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    typeX_59->mPointerNum++;
    ((struct tuple2$2sFunpcharph*)(right_value90=create_finalizer_automatically(typeX_59,"finalize",info)));
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    ((struct tuple2$2sFunpcharph*)(right_value91=create_cloner_automatically(typeX_59,"clone",info)));
    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    for(    i_60=1;    i_60<list$1tuple2$2charphsTypephph_length(klass_51->mFields);    i_60++    ){
        multiple_assign_var1=list$1tuple2$2charphsTypephphp_operator_load_element(klass_51->mFields,i_60);
        name_64=(char*)come_increment_ref_count(multiple_assign_var1->v1);
        field_type_65=(struct sType*)come_increment_ref_count(multiple_assign_var1->v2);
        method_name_66=(char*)come_increment_ref_count(((char*)(right_value92=create_method_name(type_50,(_Bool)0,name_64,info))));
        right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_code(info,"_inf_value%d->%s=(void*)%s;\n",inf_num_56,name_64,method_name_66);
        name_64 = come_decrement_ref_count2(name_64, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,field_type_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        method_name_66 = come_decrement_ref_count2(method_name_66, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    __dec_obj42=come_value2_52->c_value;
    come_value2_52->c_value=(char*)come_increment_ref_count(((char*)(right_value93=xsprintf("_inf_value%d",inf_num_56))));
    __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value93 = come_decrement_ref_count2(right_value93, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    type3_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_clone(inf_type_48))));
    come_call_finalizer2(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type3_67->mPointerNum++;
    type3_67->mHeap=(_Bool)1;
    type2_53->mHeap=(_Bool)1;
    __dec_obj43=come_value2_52->type;
    come_value2_52->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value95=sType_clone(type2_53))));
    come_call_finalizer2(sType_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj44=come_value2_52->c_value;
    come_value2_52->c_value=(char*)come_increment_ref_count(((char*)(right_value96=append_object_to_right_values(come_value2_52->c_value,(struct sType*)come_increment_ref_count(type3_67),info))));
    __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    come_value2_52->type->mPointerNum++;
    come_value2_52->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_52->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_52));
    __result62__ = (_Bool)1;
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
    return __result62__;
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
int __result59__;
memset(&__result_obj__, 0, sizeof(void*));
        __result59__ = self->len;
        return __result59__;
}

static struct tuple2$2charphsTypeph* list$1tuple2$2charphsTypephphp_operator_load_element(struct list$1tuple2$2charphsTypephph* self, int position){
void* __result_obj__;
_Bool _if_conditional116;
struct list_item$1tuple2$2charphsTypephph* it_61;
int i_62;
_Bool _while_condtional8;
_Bool _if_conditional117;
struct tuple2$2charphsTypeph* __result60__;
struct tuple2$2charphsTypeph* default_value_63;
struct tuple2$2charphsTypeph* __result61__;
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
                    __result60__ = __result_obj__ = it_61->item;
                    return __result60__;
                }
                it_61=it_61->next;
                i_62++;
            }
            memset(&default_value_63,0,sizeof(struct tuple2$2charphsTypeph*));
            __result61__ = __result_obj__ = default_value_63;
            come_call_finalizer2(tuple2$2charphsTypephp_finalize,default_value_63, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result61__;
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
void* right_value97;
char* __dec_obj45;
struct sTrueNode* __result63__;
memset(&__result_obj__, 0, sizeof(void*));
right_value97 = (void*)0;
    self->sline=info->sline;
    __dec_obj45=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value97=__builtin_string(info->sname))));
    __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value97 = come_decrement_ref_count2(right_value97, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result63__ = __result_obj__ = self;
    come_call_finalizer2(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result63__;
    come_call_finalizer2(sTrueNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sTrueNode_sline(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
    __result64__ = self->sline;
    return __result64__;
}

char* sTrueNode_sname(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value98;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value98 = (void*)0;
    __result65__ = __result_obj__ = ((char*)(right_value98=__builtin_string(self->sname)));
    right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result65__;
}

_Bool sTrueNode_terminated(){
void* __result_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    __result66__ = (_Bool)0;
    return __result66__;
}

char* sTrueNode_kind(){
void* __result_obj__;
void* right_value99;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value99 = (void*)0;
    __result67__ = __result_obj__ = ((char*)(right_value99=__builtin_string("sTrueNode")));
    right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result67__;
}

_Bool sTrueNode_compile(struct sTrueNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value100;
struct CVALUE* come_value_68;
void* right_value101;
char* __dec_obj46;
void* right_value102;
void* right_value103;
struct sType* __dec_obj47;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
right_value100 = (void*)0;
memset(&come_value_68, 0, sizeof(struct CVALUE*));
right_value101 = (void*)0;
right_value102 = (void*)0;
right_value103 = (void*)0;
    come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value100=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 281, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj46=come_value_68->c_value;
    come_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value101=xsprintf("(_Bool)1"))));
    __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj47=come_value_68->type;
    come_value_68->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value103=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value102=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 284, "struct sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value102, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_68->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_68->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_68));
    __result68__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result68__;
    come_call_finalizer2(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_true_object(struct sInfo* info){
void* __result_obj__;
void* right_value104;
void* right_value105;
struct sNode* _inf_value2;
struct sTrueNode* _inf_obj_value2;
void* right_value108;
struct sNode* __result71__;
memset(&__result_obj__, 0, sizeof(void*));
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value108 = (void*)0;
    _inf_value2=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 296, "struct sNode");
    _inf_obj_value2=come_increment_ref_count(((struct sTrueNode*)(right_value105=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value104=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 296, "struct sTrueNode")))),info))));
    _inf_value2->_protocol_obj=_inf_obj_value2;
    _inf_value2->finalize=(void*)sTrueNode_finalize;
    _inf_value2->clone=(void*)sTrueNode_clone;
    _inf_value2->compile=(void*)sTrueNode_compile;
    _inf_value2->sline=(void*)sTrueNode_sline;
    _inf_value2->sname=(void*)sTrueNode_sname;
    _inf_value2->terminated=(void*)sTrueNode_terminated;
    _inf_value2->kind=(void*)sTrueNode_kind;
    __result71__ = __result_obj__ = ((struct sNode*)(right_value108=_inf_value2));
    come_call_finalizer2(sTrueNode_finalize,right_value104, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sTrueNode_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value108) { right_value108 = come_decrement_ref_count2(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result71__;
}

struct sFalseNode* sFalseNode_initialize(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value109;
char* __dec_obj49;
struct sFalseNode* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value109 = (void*)0;
    self->sline=info->sline;
    __dec_obj49=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value109=__builtin_string(info->sname))));
    __dec_obj49 = come_decrement_ref_count2(__dec_obj49, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result72__ = __result_obj__ = self;
    come_call_finalizer2(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result72__;
    come_call_finalizer2(sFalseNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sFalseNode_sline(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
int __result73__;
memset(&__result_obj__, 0, sizeof(void*));
    __result73__ = self->sline;
    return __result73__;
}

char* sFalseNode_sname(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value110;
char* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
right_value110 = (void*)0;
    __result74__ = __result_obj__ = ((char*)(right_value110=__builtin_string(self->sname)));
    right_value110 = come_decrement_ref_count2(right_value110, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result74__;
}

_Bool sFalseNode_terminated(){
void* __result_obj__;
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
    __result75__ = (_Bool)0;
    return __result75__;
}

char* sFalseNode_kind(){
void* __result_obj__;
void* right_value111;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value111 = (void*)0;
    __result76__ = __result_obj__ = ((char*)(right_value111=__builtin_string("sFalseNode")));
    right_value111 = come_decrement_ref_count2(right_value111, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result76__;
}

_Bool sFalseNode_compile(struct sFalseNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value112;
struct CVALUE* come_value_70;
void* right_value113;
char* __dec_obj50;
void* right_value114;
void* right_value115;
struct sType* __dec_obj51;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
right_value112 = (void*)0;
memset(&come_value_70, 0, sizeof(struct CVALUE*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
    come_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 334, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj50=come_value_70->c_value;
    come_value_70->c_value=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("(_Bool)0"))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj51=come_value_70->type;
    come_value_70->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value115=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value114=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 337, "struct sType")))),"bool",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj51, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_70->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_70->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_70));
    __result77__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result77__;
    come_call_finalizer2(CVALUE_finalize,come_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* create_false_object(struct sInfo* info){
void* __result_obj__;
void* right_value116;
void* right_value117;
struct sNode* _inf_value3;
struct sFalseNode* _inf_obj_value3;
void* right_value120;
struct sNode* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
right_value117 = (void*)0;
right_value120 = (void*)0;
    _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 349, "struct sNode");
    _inf_obj_value3=come_increment_ref_count(((struct sFalseNode*)(right_value117=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value116=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 349, "struct sFalseNode")))),info))));
    _inf_value3->_protocol_obj=_inf_obj_value3;
    _inf_value3->finalize=(void*)sFalseNode_finalize;
    _inf_value3->clone=(void*)sFalseNode_clone;
    _inf_value3->compile=(void*)sFalseNode_compile;
    _inf_value3->sline=(void*)sFalseNode_sline;
    _inf_value3->sname=(void*)sFalseNode_sname;
    _inf_value3->terminated=(void*)sFalseNode_terminated;
    _inf_value3->kind=(void*)sFalseNode_kind;
    __result80__ = __result_obj__ = ((struct sNode*)(right_value120=_inf_value3));
    come_call_finalizer2(sFalseNode_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sFalseNode_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, ((struct sNode*)right_value120)->finalize, ((struct sNode*)right_value120)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result80__;
}

struct sSizeOfNode* sSizeOfNode_initialize(struct sSizeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value121;
struct sType* __dec_obj53;
void* right_value122;
char* __dec_obj54;
struct sSizeOfNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
right_value122 = (void*)0;
    __dec_obj53=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj54=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value122=__builtin_string(info->sname))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result81__ = __result_obj__ = self;
    come_call_finalizer2(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result81__;
    come_call_finalizer2(sSizeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sSizeOfNode_sline(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    __result82__ = self->sline;
    return __result82__;
}

char* sSizeOfNode_sname(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value123;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
    __result83__ = __result_obj__ = ((char*)(right_value123=__builtin_string(self->sname)));
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result83__;
}

_Bool sSizeOfNode_terminated(){
void* __result_obj__;
_Bool __result84__;
memset(&__result_obj__, 0, sizeof(void*));
    __result84__ = (_Bool)0;
    return __result84__;
}

char* sSizeOfNode_kind(){
void* __result_obj__;
void* right_value124;
char* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
    __result85__ = __result_obj__ = ((char*)(right_value124=__builtin_string("sSizeOfNode")));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result85__;
}

_Bool sSizeOfNode_compile(struct sSizeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_72;
void* right_value125;
struct CVALUE* come_value_73;
void* right_value126;
struct sType* type2_74;
void* right_value127;
char* type_name_75;
void* right_value128;
char* __dec_obj55;
void* right_value129;
void* right_value130;
struct sType* __dec_obj56;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_72, 0, sizeof(struct sType*));
right_value125 = (void*)0;
memset(&come_value_73, 0, sizeof(struct CVALUE*));
right_value126 = (void*)0;
memset(&type2_74, 0, sizeof(struct sType*));
right_value127 = (void*)0;
memset(&type_name_75, 0, sizeof(char*));
right_value128 = (void*)0;
right_value129 = (void*)0;
right_value130 = (void*)0;
    type_72=self->type;
    come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value125=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 392, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_74=(struct sType*)come_increment_ref_count(((struct sType*)(right_value126=solve_generics(type_72,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_75=(char*)come_increment_ref_count(((char*)(right_value127=make_type_name_string(type2_74,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value127 = come_decrement_ref_count2(right_value127, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj55=come_value_73->c_value;
    come_value_73->c_value=(char*)come_increment_ref_count(((char*)(right_value128=xsprintf("sizeof(%s)",type_name_75))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value128 = come_decrement_ref_count2(right_value128, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj56=come_value_73->type;
    come_value_73->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value130=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value129=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 399, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_73->type->mUnsigned=(_Bool)1;
    come_value_73->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_73->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_73));
    __result86__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_75 = come_decrement_ref_count2(type_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result86__;
    come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_75 = come_decrement_ref_count2(type_name_75, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sSizeOfExpNode* sSizeOfExpNode_initialize(struct sSizeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value131;
struct sNode* __dec_obj57;
void* right_value132;
char* __dec_obj58;
struct sSizeOfExpNode* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
right_value132 = (void*)0;
    __dec_obj57=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value131=sNode_clone(exp))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value131) { right_value131 = come_decrement_ref_count2(right_value131, ((struct sNode*)right_value131)->finalize, ((struct sNode*)right_value131)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result87__ = __result_obj__ = self;
    come_call_finalizer2(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result87__;
    come_call_finalizer2(sSizeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sSizeOfExpNode_sline(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
    __result88__ = self->sline;
    return __result88__;
}

char* sSizeOfExpNode_sname(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value133;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
    __result89__ = __result_obj__ = ((char*)(right_value133=__builtin_string(self->sname)));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result89__;
}

_Bool sSizeOfExpNode_terminated(){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = (_Bool)0;
    return __result90__;
}

char* sSizeOfExpNode_kind(){
void* __result_obj__;
void* right_value134;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value134=__builtin_string("sSizeOfExpNode")));
    right_value134 = come_decrement_ref_count2(right_value134, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result91__;
}

_Bool sSizeOfExpNode_compile(struct sSizeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_76;
_Bool _if_conditional134;
_Bool __result92__;
void* right_value135;
struct CVALUE* come_value_77;
void* right_value136;
struct CVALUE* come_value2_78;
void* right_value137;
char* __dec_obj59;
void* right_value138;
void* right_value139;
struct sType* __dec_obj60;
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_76, 0, sizeof(struct sNode*));
right_value135 = (void*)0;
memset(&come_value_77, 0, sizeof(struct CVALUE*));
right_value136 = (void*)0;
memset(&come_value2_78, 0, sizeof(struct CVALUE*));
right_value137 = (void*)0;
right_value138 = (void*)0;
right_value139 = (void*)0;
    exp_76=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional134=!node_compile(exp_76,info),    _if_conditional134) {
        __result92__ = (_Bool)0;
        if(exp_76) { exp_76 = come_decrement_ref_count2(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result92__;
    }
    come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value135=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value136=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 457, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj59=come_value2_78->c_value;
    come_value2_78->c_value=(char*)come_increment_ref_count(((char*)(right_value137=xsprintf("sizeof(%s)",come_value_77->c_value))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value137 = come_decrement_ref_count2(right_value137, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj60=come_value2_78->type;
    come_value2_78->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value139=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value138=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 460, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_78->type->mUnsigned=(_Bool)1;
    come_value2_78->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_78->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_78));
    __result93__ = (_Bool)1;
    if(exp_76) { exp_76 = come_decrement_ref_count2(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result93__;
    if(exp_76) { exp_76 = come_decrement_ref_count2(exp_76, ((struct sNode*)exp_76)->finalize, ((struct sNode*)exp_76)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sTypeOfNode* sTypeOfNode_initialize(struct sTypeOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value140;
struct sType* __dec_obj61;
void* right_value141;
char* __dec_obj62;
struct sTypeOfNode* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
right_value140 = (void*)0;
right_value141 = (void*)0;
    __dec_obj61=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value140=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value141=__builtin_string(info->sname))));
    __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value141 = come_decrement_ref_count2(right_value141, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result94__ = __result_obj__ = self;
    come_call_finalizer2(sTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result94__;
    come_call_finalizer2(sTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sTypeOfNode_sline(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = self->sline;
    return __result95__;
}

char* sTypeOfNode_sname(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value142;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    __result96__ = __result_obj__ = ((char*)(right_value142=__builtin_string(self->sname)));
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result96__;
}

_Bool sTypeOfNode_terminated(){
void* __result_obj__;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
    __result97__ = (_Bool)0;
    return __result97__;
}

char* sTypeOfNode_kind(){
void* __result_obj__;
void* right_value143;
char* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
    __result98__ = __result_obj__ = ((char*)(right_value143=__builtin_string("sTypeOfNode")));
    right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result98__;
}

_Bool sTypeOfNode_compile(struct sTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_79;
void* right_value144;
struct CVALUE* come_value_80;
void* right_value145;
struct sType* type2_81;
void* right_value146;
char* type_name_82;
void* right_value147;
char* __dec_obj63;
void* right_value148;
void* right_value149;
struct sType* __dec_obj64;
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_79, 0, sizeof(struct sType*));
right_value144 = (void*)0;
memset(&come_value_80, 0, sizeof(struct CVALUE*));
right_value145 = (void*)0;
memset(&type2_81, 0, sizeof(struct sType*));
right_value146 = (void*)0;
memset(&type_name_82, 0, sizeof(char*));
right_value147 = (void*)0;
right_value148 = (void*)0;
right_value149 = (void*)0;
    type_79=self->type;
    come_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value144=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 511, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_81=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=solve_generics(type_79,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_82=(char*)come_increment_ref_count(((char*)(right_value146=make_type_name_string(type2_81,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj63=come_value_80->c_value;
    come_value_80->c_value=(char*)come_increment_ref_count(((char*)(right_value147=xsprintf("\"%s\"",type_name_82))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj64=come_value_80->type;
    come_value_80->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value149=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value148=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 518, "struct sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_80->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_80->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_80));
    __result99__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_82 = come_decrement_ref_count2(type_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result99__;
    come_call_finalizer2(CVALUE_finalize,come_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_82 = come_decrement_ref_count2(type_name_82, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sTypeOfExpNode* sTypeOfExpNode_initialize(struct sTypeOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value150;
struct sNode* __dec_obj65;
void* right_value151;
char* __dec_obj66;
struct sTypeOfExpNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value150 = (void*)0;
right_value151 = (void*)0;
    __dec_obj65=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value150=sNode_clone(exp))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value150) { right_value150 = come_decrement_ref_count2(right_value150, ((struct sNode*)right_value150)->finalize, ((struct sNode*)right_value150)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value151=__builtin_string(info->sname))));
    __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result100__ = __result_obj__ = self;
    come_call_finalizer2(sTypeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result100__;
    come_call_finalizer2(sTypeOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sTypeOfExpNode_sline(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result101__;
memset(&__result_obj__, 0, sizeof(void*));
    __result101__ = self->sline;
    return __result101__;
}

char* sTypeOfExpNode_sname(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value152;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    __result102__ = __result_obj__ = ((char*)(right_value152=__builtin_string(self->sname)));
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result102__;
}

_Bool sTypeOfExpNode_terminated(){
void* __result_obj__;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    __result103__ = (_Bool)0;
    return __result103__;
}

char* sTypeOfExpNode_kind(){
void* __result_obj__;
void* right_value153;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
    __result104__ = __result_obj__ = ((char*)(right_value153=__builtin_string("sTypeOfExpNode")));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result104__;
}

_Bool sTypeOfExpNode_compile(struct sTypeOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_83;
_Bool _if_conditional139;
_Bool __result105__;
void* right_value154;
struct CVALUE* come_value_84;
void* right_value155;
struct sType* type_85;
void* right_value156;
struct sType* type2_86;
void* right_value157;
char* type_name_87;
void* right_value158;
char* __dec_obj67;
void* right_value159;
void* right_value160;
struct sType* __dec_obj68;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_83, 0, sizeof(struct sNode*));
right_value154 = (void*)0;
memset(&come_value_84, 0, sizeof(struct CVALUE*));
right_value155 = (void*)0;
memset(&type_85, 0, sizeof(struct sType*));
right_value156 = (void*)0;
memset(&type2_86, 0, sizeof(struct sType*));
right_value157 = (void*)0;
memset(&type_name_87, 0, sizeof(char*));
right_value158 = (void*)0;
right_value159 = (void*)0;
right_value160 = (void*)0;
    exp_83=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional139=!node_compile(exp_83,info),    _if_conditional139) {
        __result105__ = (_Bool)0;
        if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result105__;
    }
    come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value154=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_85=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(come_value_84->type))));
    come_call_finalizer2(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_86=(struct sType*)come_increment_ref_count(((struct sType*)(right_value156=solve_generics(type_85,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_87=(char*)come_increment_ref_count(((char*)(right_value157=make_type_name_string(type2_86,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj67=come_value_84->c_value;
    come_value_84->c_value=(char*)come_increment_ref_count(((char*)(right_value158=xsprintf("\"%s\"",type_name_87))));
    __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value158 = come_decrement_ref_count2(right_value158, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj68=come_value_84->type;
    come_value_84->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value159=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 582, "struct sType")))),"char*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_84->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_84->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
    __result106__ = (_Bool)1;
    if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_87 = come_decrement_ref_count2(type_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result106__;
    if(exp_83) { exp_83 = come_decrement_ref_count2(exp_83, ((struct sNode*)exp_83)->finalize, ((struct sNode*)exp_83)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_87 = come_decrement_ref_count2(type_name_87, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sDynamicTypeOfNode* sDynamicTypeOfNode_initialize(struct sDynamicTypeOfNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value161;
struct sNode* __dec_obj69;
void* right_value162;
char* __dec_obj70;
struct sDynamicTypeOfNode* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
right_value162 = (void*)0;
    __dec_obj69=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value161=sNode_clone(exp))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value161) { right_value161 = come_decrement_ref_count2(right_value161, ((struct sNode*)right_value161)->finalize, ((struct sNode*)right_value161)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj70=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(info->sname))));
    __dec_obj70 = come_decrement_ref_count2(__dec_obj70, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result107__ = __result_obj__ = self;
    come_call_finalizer2(sDynamicTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result107__;
    come_call_finalizer2(sDynamicTypeOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDynamicTypeOfNode_sline(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result108__;
memset(&__result_obj__, 0, sizeof(void*));
    __result108__ = self->sline;
    return __result108__;
}

char* sDynamicTypeOfNode_sname(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value163;
char* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    __result109__ = __result_obj__ = ((char*)(right_value163=__builtin_string(self->sname)));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result109__;
}

_Bool sDynamicTypeOfNode_terminated(){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    __result110__ = (_Bool)0;
    return __result110__;
}

char* sDynamicTypeOfNode_kind(){
void* __result_obj__;
void* right_value164;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value164=__builtin_string("sDynamicTypeOfNode")));
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

_Bool sDynamicTypeOfNode_compile(struct sDynamicTypeOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_88;
_Bool _if_conditional142;
_Bool __result112__;
void* right_value165;
struct CVALUE* come_value_89;
_Bool _if_conditional143;
void* right_value166;
struct sType* type_90;
void* right_value167;
struct sType* type2_91;
void* right_value168;
char* type_name_92;
void* right_value169;
char* __dec_obj71;
void* right_value170;
void* right_value171;
struct sType* __dec_obj72;
_Bool __result113__;
void* right_value172;
struct CVALUE* come_value2_93;
void* right_value173;
char* __dec_obj73;
void* right_value174;
void* right_value175;
struct sType* __dec_obj74;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_88, 0, sizeof(struct sNode*));
right_value165 = (void*)0;
memset(&come_value_89, 0, sizeof(struct CVALUE*));
right_value166 = (void*)0;
memset(&type_90, 0, sizeof(struct sType*));
right_value167 = (void*)0;
memset(&type2_91, 0, sizeof(struct sType*));
right_value168 = (void*)0;
memset(&type_name_92, 0, sizeof(char*));
right_value169 = (void*)0;
right_value170 = (void*)0;
right_value171 = (void*)0;
right_value172 = (void*)0;
memset(&come_value2_93, 0, sizeof(struct CVALUE*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
    exp_88=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional142=!node_compile(exp_88,info),    _if_conditional142) {
        __result112__ = (_Bool)0;
        if(exp_88) { exp_88 = come_decrement_ref_count2(exp_88, ((struct sNode*)exp_88)->finalize, ((struct sNode*)exp_88)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result112__;
    }
    come_value_89=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value165=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    if(_if_conditional143=!come_value_89->type->mHeap,    _if_conditional143) {
        type_90=(struct sType*)come_increment_ref_count(((struct sType*)(right_value166=sType_clone(come_value_89->type))));
        come_call_finalizer2(sType_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type2_91=(struct sType*)come_increment_ref_count(((struct sType*)(right_value167=solve_generics(type_90,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type_name_92=(char*)come_increment_ref_count(((char*)(right_value168=make_type_name_string(type2_91,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value168 = come_decrement_ref_count2(right_value168, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj71=come_value_89->c_value;
        come_value_89->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("\"%s\"",type_name_92))));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj72=come_value_89->type;
        come_value_89->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value170=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 647, "struct sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_89->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_89->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_89));
        __result113__ = (_Bool)1;
        come_call_finalizer2(sType_finalize,type_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_92 = come_decrement_ref_count2(type_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        if(exp_88) { exp_88 = come_decrement_ref_count2(exp_88, ((struct sNode*)exp_88)->finalize, ((struct sNode*)exp_88)->_protocol_obj, 0, 0, 0, (void*)0); } 
        come_call_finalizer2(CVALUE_finalize,come_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result113__;
        come_call_finalizer2(sType_finalize,type_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        type_name_92 = come_decrement_ref_count2(type_name_92, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        come_value2_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 657, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj73=come_value2_93->c_value;
        come_value2_93->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("come_dynamic_typeof(%s)",come_value_89->c_value))));
        __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj74=come_value2_93->type;
        come_value2_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value174=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 660, "struct sType")))),"char*",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj74, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value2_93->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value2_93->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_93));
        come_call_finalizer2(CVALUE_finalize,come_value2_93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result114__ = (_Bool)1;
    if(exp_88) { exp_88 = come_decrement_ref_count2(exp_88, ((struct sNode*)exp_88)->finalize, ((struct sNode*)exp_88)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result114__;
    if(exp_88) { exp_88 = come_decrement_ref_count2(exp_88, ((struct sNode*)exp_88)->finalize, ((struct sNode*)exp_88)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode* sAlignOfNode_initialize(struct sAlignOfNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value176;
struct sType* __dec_obj75;
void* right_value177;
char* __dec_obj76;
struct sAlignOfNode* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
right_value177 = (void*)0;
    __dec_obj75=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value176=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(info->sname))));
    __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result115__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result115__;
    come_call_finalizer2(sAlignOfNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignOfNode_sline(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
int __result116__;
memset(&__result_obj__, 0, sizeof(void*));
    __result116__ = self->sline;
    return __result116__;
}

char* sAlignOfNode_sname(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value178;
char* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value178 = (void*)0;
    __result117__ = __result_obj__ = ((char*)(right_value178=__builtin_string(self->sname)));
    right_value178 = come_decrement_ref_count2(right_value178, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result117__;
}

_Bool sAlignOfNode_terminated(){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = (_Bool)0;
    return __result118__;
}

char* sAlignOfNode_kind(){
void* __result_obj__;
void* right_value179;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value179 = (void*)0;
    __result119__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sAlignOfNode")));
    right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool sAlignOfNode_compile(struct sAlignOfNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_94;
void* right_value180;
struct CVALUE* come_value_95;
void* right_value181;
struct sType* type2_96;
void* right_value182;
char* type_name_97;
void* right_value183;
char* __dec_obj77;
void* right_value184;
void* right_value185;
struct sType* __dec_obj78;
_Bool __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_94, 0, sizeof(struct sType*));
right_value180 = (void*)0;
memset(&come_value_95, 0, sizeof(struct CVALUE*));
right_value181 = (void*)0;
memset(&type2_96, 0, sizeof(struct sType*));
right_value182 = (void*)0;
memset(&type_name_97, 0, sizeof(char*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
    type_94=self->type;
    come_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 711, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_96=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=solve_generics(type_94,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_97=(char*)come_increment_ref_count(((char*)(right_value182=make_type_name_string(type2_96,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj77=come_value_95->c_value;
    come_value_95->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("_Alignof(%s)",type_name_97))));
    __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj78=come_value_95->type;
    come_value_95->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value184=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 718, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_95->type->mUnsigned=(_Bool)1;
    come_value_95->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_95->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_95));
    __result120__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result120__;
    come_call_finalizer2(CVALUE_finalize,come_value_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_97 = come_decrement_ref_count2(type_name_97, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode* sAlignOfExpNode_initialize(struct sAlignOfExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value186;
struct sNode* __dec_obj79;
void* right_value187;
char* __dec_obj80;
struct sAlignOfExpNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
right_value187 = (void*)0;
    __dec_obj79=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=sNode_clone(exp))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj80=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(info->sname))));
    __dec_obj80 = come_decrement_ref_count2(__dec_obj80, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result121__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result121__;
    come_call_finalizer2(sAlignOfExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignOfExpNode_sline(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = self->sline;
    return __result122__;
}

char* sAlignOfExpNode_sname(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value188;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value188 = (void*)0;
    __result123__ = __result_obj__ = ((char*)(right_value188=__builtin_string(self->sname)));
    right_value188 = come_decrement_ref_count2(right_value188, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result123__;
}

_Bool sAlignOfExpNode_terminated(){
void* __result_obj__;
_Bool __result124__;
memset(&__result_obj__, 0, sizeof(void*));
    __result124__ = (_Bool)0;
    return __result124__;
}

char* sAlignOfExpNode_kind(){
void* __result_obj__;
void* right_value189;
char* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value189 = (void*)0;
    __result125__ = __result_obj__ = ((char*)(right_value189=__builtin_string("sAlignOfExpNode")));
    right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result125__;
}

_Bool sAlignOfExpNode_compile(struct sAlignOfExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_98;
_Bool _if_conditional148;
_Bool __result126__;
void* right_value190;
struct CVALUE* come_value_99;
void* right_value191;
struct CVALUE* come_value2_100;
void* right_value192;
char* __dec_obj81;
void* right_value193;
void* right_value194;
struct sType* __dec_obj82;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_98, 0, sizeof(struct sNode*));
right_value190 = (void*)0;
memset(&come_value_99, 0, sizeof(struct CVALUE*));
right_value191 = (void*)0;
memset(&come_value2_100, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
    exp_98=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional148=!node_compile(exp_98,info),    _if_conditional148) {
        __result126__ = (_Bool)0;
        if(exp_98) { exp_98 = come_decrement_ref_count2(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result126__;
    }
    come_value_99=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 776, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj81=come_value2_100->c_value;
    come_value2_100->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("_AlignOf(%s)",come_value_99->c_value))));
    __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj82=come_value2_100->type;
    come_value2_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value193=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 779, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_100->type->mUnsigned=(_Bool)1;
    come_value2_100->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_100->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_100));
    __result127__ = (_Bool)1;
    if(exp_98) { exp_98 = come_decrement_ref_count2(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result127__;
    if(exp_98) { exp_98 = come_decrement_ref_count2(exp_98, ((struct sNode*)exp_98)->finalize, ((struct sNode*)exp_98)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_99, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignOfNode2* sAlignOfNode2_initialize(struct sAlignOfNode2* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value195;
struct sType* __dec_obj83;
void* right_value196;
char* __dec_obj84;
struct sAlignOfNode2* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
right_value196 = (void*)0;
    __dec_obj83=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(info->sname))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result128__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result128__;
    come_call_finalizer2(sAlignOfNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignOfNode2_sline(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
int __result129__;
memset(&__result_obj__, 0, sizeof(void*));
    __result129__ = self->sline;
    return __result129__;
}

char* sAlignOfNode2_sname(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value197;
char* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
    __result130__ = __result_obj__ = ((char*)(right_value197=__builtin_string(self->sname)));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result130__;
}

_Bool sAlignOfNode2_terminated(){
void* __result_obj__;
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = (_Bool)0;
    return __result131__;
}

char* sAlignOfNode2_kind(){
void* __result_obj__;
void* right_value198;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value198 = (void*)0;
    __result132__ = __result_obj__ = ((char*)(right_value198=__builtin_string("sAlignOfNode2")));
    right_value198 = come_decrement_ref_count2(right_value198, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

_Bool sAlignOfNode2_compile(struct sAlignOfNode2* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_101;
void* right_value199;
struct CVALUE* come_value_102;
void* right_value200;
struct sType* type2_103;
void* right_value201;
char* type_name_104;
void* right_value202;
char* __dec_obj85;
void* right_value203;
void* right_value204;
struct sType* __dec_obj86;
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_101, 0, sizeof(struct sType*));
right_value199 = (void*)0;
memset(&come_value_102, 0, sizeof(struct CVALUE*));
right_value200 = (void*)0;
memset(&type2_103, 0, sizeof(struct sType*));
right_value201 = (void*)0;
memset(&type_name_104, 0, sizeof(char*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
    type_101=self->type;
    come_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 830, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_103=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=solve_generics(type_101,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_104=(char*)come_increment_ref_count(((char*)(right_value201=make_type_name_string(type2_103,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj85=come_value_102->c_value;
    come_value_102->c_value=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("__alignof__(%s)",type_name_104))));
    __dec_obj85 = come_decrement_ref_count2(__dec_obj85, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj86=come_value_102->type;
    come_value_102->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value203=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 837, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_102->type->mUnsigned=(_Bool)1;
    come_value_102->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_102->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_102));
    __result133__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result133__;
    come_call_finalizer2(CVALUE_finalize,come_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_104 = come_decrement_ref_count2(type_name_104, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignOfExpNode2* sAlignOfExpNode2_initialize(struct sAlignOfExpNode2* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value205;
struct sNode* __dec_obj87;
void* right_value206;
char* __dec_obj88;
struct sAlignOfExpNode2* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
right_value206 = (void*)0;
    __dec_obj87=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(exp))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(info->sname))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result134__ = __result_obj__ = self;
    come_call_finalizer2(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result134__;
    come_call_finalizer2(sAlignOfExpNode2_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignOfExpNode2_sline(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    __result135__ = self->sline;
    return __result135__;
}

char* sAlignOfExpNode2_sname(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
void* right_value207;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    __result136__ = __result_obj__ = ((char*)(right_value207=__builtin_string(self->sname)));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result136__;
}

_Bool sAlignOfExpNode2_terminated(){
void* __result_obj__;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
    __result137__ = (_Bool)0;
    return __result137__;
}

char* sAlignOfExpNode2_kind(){
void* __result_obj__;
void* right_value208;
char* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
right_value208 = (void*)0;
    __result138__ = __result_obj__ = ((char*)(right_value208=__builtin_string("sAlignOfExpNode2")));
    right_value208 = come_decrement_ref_count2(right_value208, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result138__;
}

_Bool sAlignOfExpNode2_compile(struct sAlignOfExpNode2* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_105;
_Bool _if_conditional153;
_Bool __result139__;
void* right_value209;
struct CVALUE* come_value_106;
void* right_value210;
struct CVALUE* come_value2_107;
void* right_value211;
char* __dec_obj89;
void* right_value212;
void* right_value213;
struct sType* __dec_obj90;
_Bool __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_105, 0, sizeof(struct sNode*));
right_value209 = (void*)0;
memset(&come_value_106, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
memset(&come_value2_107, 0, sizeof(struct CVALUE*));
right_value211 = (void*)0;
right_value212 = (void*)0;
right_value213 = (void*)0;
    exp_105=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional153=!node_compile(exp_105,info),    _if_conditional153) {
        __result139__ = (_Bool)0;
        if(exp_105) { exp_105 = come_decrement_ref_count2(exp_105, ((struct sNode*)exp_105)->finalize, ((struct sNode*)exp_105)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result139__;
    }
    come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_107=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 895, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj89=come_value2_107->c_value;
    come_value2_107->c_value=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("__alignof__(%s)",come_value_106->c_value))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj90=come_value2_107->type;
    come_value2_107->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value212=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 898, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_107->type->mUnsigned=(_Bool)1;
    come_value2_107->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_107->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_107));
    __result140__ = (_Bool)1;
    if(exp_105) { exp_105 = come_decrement_ref_count2(exp_105, ((struct sNode*)exp_105)->finalize, ((struct sNode*)exp_105)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result140__;
    if(exp_105) { exp_105 = come_decrement_ref_count2(exp_105, ((struct sNode*)exp_105)->finalize, ((struct sNode*)exp_105)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sAlignAsNode* sAlignAsNode_initialize(struct sAlignAsNode* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value214;
struct sType* __dec_obj91;
void* right_value215;
char* __dec_obj92;
struct sAlignAsNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
right_value215 = (void*)0;
    __dec_obj91=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(info->sname))));
    __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result141__ = __result_obj__ = self;
    come_call_finalizer2(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result141__;
    come_call_finalizer2(sAlignAsNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sAlignAsNode_sline(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
int __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = self->sline;
    return __result142__;
}

char* sAlignAsNode_sname(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value216;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
    __result143__ = __result_obj__ = ((char*)(right_value216=__builtin_string(self->sname)));
    right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
}

_Bool sAlignAsNode_terminated(){
void* __result_obj__;
_Bool __result144__;
memset(&__result_obj__, 0, sizeof(void*));
    __result144__ = (_Bool)0;
    return __result144__;
}

char* sAlignAsNode_kind(){
void* __result_obj__;
void* right_value217;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
    __result145__ = __result_obj__ = ((char*)(right_value217=__builtin_string("sAlignAsNode")));
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result145__;
}

_Bool sAlignAsNode_compile(struct sAlignAsNode* self, struct sInfo* info){
void* __result_obj__;
struct sType* type_108;
void* right_value218;
struct CVALUE* come_value_109;
void* right_value219;
struct sType* type2_110;
void* right_value220;
char* type_name_111;
void* right_value221;
char* __dec_obj93;
void* right_value222;
void* right_value223;
struct sType* __dec_obj94;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&type_108, 0, sizeof(struct sType*));
right_value218 = (void*)0;
memset(&come_value_109, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
memset(&type2_110, 0, sizeof(struct sType*));
right_value220 = (void*)0;
memset(&type_name_111, 0, sizeof(char*));
right_value221 = (void*)0;
right_value222 = (void*)0;
right_value223 = (void*)0;
    type_108=self->type;
    come_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 949, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type2_110=(struct sType*)come_increment_ref_count(((struct sType*)(right_value219=solve_generics(type_108,info->generics_type,info))));
    come_call_finalizer2(sType_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    type_name_111=(char*)come_increment_ref_count(((char*)(right_value220=make_type_name_string(type2_110,(_Bool)0,(_Bool)0,(_Bool)0,info))));
    right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj93=come_value_109->c_value;
    come_value_109->c_value=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("_Alignas(%s)",type_name_111))));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj94=come_value_109->type;
    come_value_109->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value222=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 956, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_109->type->mUnsigned=(_Bool)1;
    come_value_109->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_109->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_109));
    __result146__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_111 = come_decrement_ref_count2(type_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result146__;
    come_call_finalizer2(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type2_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    type_name_111 = come_decrement_ref_count2(type_name_111, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

struct sAlignAsExpNode* sAlignAsExpNode_initialize(struct sAlignAsExpNode* self, struct sNode* exp, struct sInfo* info){
void* __result_obj__;
void* right_value224;
struct sNode* __dec_obj95;
void* right_value225;
char* __dec_obj96;
struct sAlignAsExpNode* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
right_value225 = (void*)0;
    __dec_obj95=self->exp;
    self->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=sNode_clone(exp))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(info->sname))));
    __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result147__ = __result_obj__ = self;
    come_call_finalizer2(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result147__;
    come_call_finalizer2(sAlignAsExpNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(exp) { exp = come_decrement_ref_count2(exp, ((struct sNode*)exp)->finalize, ((struct sNode*)exp)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sAlignAsExpNode_sline(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
int __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = self->sline;
    return __result148__;
}

char* sAlignAsExpNode_sname(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value226;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
    __result149__ = __result_obj__ = ((char*)(right_value226=__builtin_string(self->sname)));
    right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result149__;
}

_Bool sAlignAsExpNode_terminated(){
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    __result150__ = (_Bool)0;
    return __result150__;
}

char* sAlignAsExpNode_kind(){
void* __result_obj__;
void* right_value227;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
    __result151__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sAlignAsExpNode")));
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
}

_Bool sAlignAsExpNode_compile(struct sAlignAsExpNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* exp_112;
_Bool _if_conditional158;
_Bool __result152__;
void* right_value228;
struct CVALUE* come_value_113;
void* right_value229;
struct CVALUE* come_value2_114;
void* right_value230;
char* __dec_obj97;
void* right_value231;
void* right_value232;
struct sType* __dec_obj98;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&exp_112, 0, sizeof(struct sNode*));
right_value228 = (void*)0;
memset(&come_value_113, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
memset(&come_value2_114, 0, sizeof(struct CVALUE*));
right_value230 = (void*)0;
right_value231 = (void*)0;
right_value232 = (void*)0;
    exp_112=(struct sNode*)come_increment_ref_count(self->exp);
    if(_if_conditional158=!node_compile(exp_112,info),    _if_conditional158) {
        __result152__ = (_Bool)0;
        if(exp_112) { exp_112 = come_decrement_ref_count2(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0, 0, (void*)0); } 
        return __result152__;
    }
    come_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value2_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1015, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj97=come_value2_114->c_value;
    come_value2_114->c_value=(char*)come_increment_ref_count(((char*)(right_value230=xsprintf("_Alignas(%s)",come_value_113->c_value))));
    __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value230 = come_decrement_ref_count2(right_value230, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj98=come_value2_114->type;
    come_value2_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value231=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1018, "struct sType")))),"long",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value2_114->type->mUnsigned=(_Bool)1;
    come_value2_114->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value2_114->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value2_114));
    __result153__ = (_Bool)1;
    if(exp_112) { exp_112 = come_decrement_ref_count2(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result153__;
    if(exp_112) { exp_112 = come_decrement_ref_count2(exp_112, ((struct sNode*)exp_112)->finalize, ((struct sNode*)exp_112)->_protocol_obj, 0, 0, 0, (void*)0); } 
    come_call_finalizer2(CVALUE_finalize,come_value_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value2_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDeleteNode* sDeleteNode_initialize(struct sDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value233;
struct sNode* __dec_obj99;
void* right_value234;
char* __dec_obj100;
struct sDeleteNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
right_value234 = (void*)0;
    __dec_obj99=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value233=sNode_clone(node))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value233) { right_value233 = come_decrement_ref_count2(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj100=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(info->sname))));
    __dec_obj100 = come_decrement_ref_count2(__dec_obj100, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result154__ = __result_obj__ = self;
    come_call_finalizer2(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result154__;
    come_call_finalizer2(sDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDeleteNode_sline(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = self->sline;
    return __result155__;
}

char* sDeleteNode_sname(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value235;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
    __result156__ = __result_obj__ = ((char*)(right_value235=__builtin_string(self->sname)));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result156__;
}

_Bool sDeleteNode_terminated(){
void* __result_obj__;
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
    __result157__ = (_Bool)0;
    return __result157__;
}

char* sDeleteNode_kind(){
void* __result_obj__;
void* right_value236;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
    __result158__ = __result_obj__ = ((char*)(right_value236=__builtin_string("sDeleteNode")));
    right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result158__;
}

_Bool sDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_115;
_Bool _if_conditional161;
_Bool __result159__;
void* right_value237;
struct CVALUE* come_value_116;
_Bool __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_115, 0, sizeof(struct sNode*));
right_value237 = (void*)0;
memset(&come_value_116, 0, sizeof(struct CVALUE*));
    node_115=self->node;
    if(_if_conditional161=!node_compile(node_115,info),    _if_conditional161) {
        __result159__ = (_Bool)0;
        return __result159__;
    }
    come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    free_object(come_value_116->type,come_value_116->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)0);
    __result160__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result160__;
    come_call_finalizer2(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sForceDeleteNode* sForceDeleteNode_initialize(struct sForceDeleteNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value238;
struct sNode* __dec_obj101;
void* right_value239;
char* __dec_obj102;
struct sForceDeleteNode* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value238 = (void*)0;
right_value239 = (void*)0;
    __dec_obj101=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=sNode_clone(node))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value238) { right_value238 = come_decrement_ref_count2(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj102=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value239=__builtin_string(info->sname))));
    __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result161__ = __result_obj__ = self;
    come_call_finalizer2(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result161__;
    come_call_finalizer2(sForceDeleteNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sForceDeleteNode_sline(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = self->sline;
    return __result162__;
}

char* sForceDeleteNode_sname(struct sForceDeleteNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value240;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value240 = (void*)0;
    __result163__ = __result_obj__ = ((char*)(right_value240=__builtin_string(self->sname)));
    right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result163__;
}

_Bool sForceDeleteNode_terminated(){
void* __result_obj__;
_Bool __result164__;
memset(&__result_obj__, 0, sizeof(void*));
    __result164__ = (_Bool)0;
    return __result164__;
}

char* sForceDeleteNode_kind(){
void* __result_obj__;
void* right_value241;
char* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
    __result165__ = __result_obj__ = ((char*)(right_value241=__builtin_string("sForceDeleteNode")));
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result165__;
}

_Bool sForceDeleteNode_compile(struct sDeleteNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_117;
_Bool _if_conditional164;
_Bool __result166__;
void* right_value242;
struct CVALUE* come_value_118;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_117, 0, sizeof(struct sNode*));
right_value242 = (void*)0;
memset(&come_value_118, 0, sizeof(struct CVALUE*));
    node_117=self->node;
    if(_if_conditional164=!node_compile(node_117,info),    _if_conditional164) {
        __result166__ = (_Bool)0;
        return __result166__;
    }
    come_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    free_object(come_value_118->type,come_value_118->c_value,(_Bool)0,(_Bool)0,info,(_Bool)0,(_Bool)0,(_Bool)1);
    __result167__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result167__;
    come_call_finalizer2(CVALUE_finalize,come_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDelegateNode* sDelegateNode_initialize(struct sDelegateNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value243;
struct sNode* __dec_obj103;
void* right_value244;
char* __dec_obj104;
struct sDelegateNode* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
right_value244 = (void*)0;
    __dec_obj103=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value243=sNode_clone(node))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value243) { right_value243 = come_decrement_ref_count2(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(info->sname))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result168__ = __result_obj__ = self;
    come_call_finalizer2(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result168__;
    come_call_finalizer2(sDelegateNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDelegateNode_sline(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
int __result169__;
memset(&__result_obj__, 0, sizeof(void*));
    __result169__ = self->sline;
    return __result169__;
}

char* sDelegateNode_sname(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value245;
char* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
    __result170__ = __result_obj__ = ((char*)(right_value245=__builtin_string(self->sname)));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result170__;
}

_Bool sDelegateNode_terminated(){
void* __result_obj__;
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    __result171__ = (_Bool)0;
    return __result171__;
}

char* sDelegateNode_kind(){
void* __result_obj__;
void* right_value246;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
    __result172__ = __result_obj__ = ((char*)(right_value246=__builtin_string("sDelegateNode")));
    right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result172__;
}

_Bool sDelegateNode_compile(struct sDelegateNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_119;
_Bool _if_conditional167;
_Bool __result173__;
void* right_value247;
struct CVALUE* come_value_120;
_Bool _if_conditional168;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_119, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&come_value_120, 0, sizeof(struct CVALUE*));
    node_119=self->node;
    if(_if_conditional167=!node_compile(node_119,info),    _if_conditional167) {
        __result173__ = (_Bool)0;
        return __result173__;
    }
    come_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_120->type->mDelegate=(_Bool)1;
    if(come_value_120->var) {
        come_value_120->var->mType->mDelegate=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_120));
    __result174__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result174__;
    come_call_finalizer2(CVALUE_finalize,come_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sShareNode* sShareNode_initialize(struct sShareNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value248;
struct sNode* __dec_obj105;
void* right_value249;
char* __dec_obj106;
struct sShareNode* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value248 = (void*)0;
right_value249 = (void*)0;
    __dec_obj105=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=sNode_clone(node))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value248) { right_value248 = come_decrement_ref_count2(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj106=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value249=__builtin_string(info->sname))));
    __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result175__ = __result_obj__ = self;
    come_call_finalizer2(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result175__;
    come_call_finalizer2(sShareNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sShareNode_sline(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
int __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    __result176__ = self->sline;
    return __result176__;
}

char* sShareNode_sname(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value250;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value250 = (void*)0;
    __result177__ = __result_obj__ = ((char*)(right_value250=__builtin_string(self->sname)));
    right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result177__;
}

_Bool sShareNode_terminated(){
void* __result_obj__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    __result178__ = (_Bool)0;
    return __result178__;
}

char* sShareNode_kind(){
void* __result_obj__;
void* right_value251;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
    __result179__ = __result_obj__ = ((char*)(right_value251=__builtin_string("sShareNode")));
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result179__;
}

_Bool sShareNode_compile(struct sShareNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_121;
_Bool _if_conditional171;
_Bool __result180__;
void* right_value252;
struct CVALUE* come_value_122;
_Bool _if_conditional172;
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_121, 0, sizeof(struct sNode*));
right_value252 = (void*)0;
memset(&come_value_122, 0, sizeof(struct CVALUE*));
    node_121=self->node;
    if(_if_conditional171=!node_compile(node_121,info),    _if_conditional171) {
        __result180__ = (_Bool)0;
        return __result180__;
    }
    come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_122->type->mShare=(_Bool)1;
    if(come_value_122->var) {
        come_value_122->var->mType->mShare=(_Bool)1;
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_122));
    __result181__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result181__;
    come_call_finalizer2(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sBorrowNode* sBorrowNode_initialize(struct sBorrowNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value253;
struct sNode* __dec_obj107;
void* right_value254;
char* __dec_obj108;
struct sBorrowNode* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
right_value254 = (void*)0;
    __dec_obj107=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=sNode_clone(node))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj108=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string(info->sname))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result182__ = __result_obj__ = self;
    come_call_finalizer2(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result182__;
    come_call_finalizer2(sBorrowNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sBorrowNode_sline(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    __result183__ = self->sline;
    return __result183__;
}

char* sBorrowNode_sname(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value255;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    __result184__ = __result_obj__ = ((char*)(right_value255=__builtin_string(self->sname)));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result184__;
}

_Bool sBorrowNode_terminated(){
void* __result_obj__;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
    __result185__ = (_Bool)0;
    return __result185__;
}

char* sBorrowNode_kind(){
void* __result_obj__;
void* right_value256;
char* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
    __result186__ = __result_obj__ = ((char*)(right_value256=__builtin_string("sBorrowNode")));
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result186__;
}

_Bool sBorrowNode_compile(struct sBorrowNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_123;
_Bool _if_conditional175;
_Bool __result187__;
void* right_value257;
struct CVALUE* come_value_124;
int right_value_id_125;
_Bool _if_conditional176;
_Bool __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_123, 0, sizeof(struct sNode*));
right_value257 = (void*)0;
memset(&come_value_124, 0, sizeof(struct CVALUE*));
memset(&right_value_id_125, 0, sizeof(int));
    node_123=self->node;
    if(_if_conditional175=!node_compile(node_123,info),    _if_conditional175) {
        __result187__ = (_Bool)0;
        return __result187__;
    }
    come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value257=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_124->type->mHeap=(_Bool)0;
    right_value_id_125=get_right_value_id_from_obj((char*)come_increment_ref_count(come_value_124->c_value));
    if(_if_conditional176=right_value_id_125!=-1,    _if_conditional176) {
        remove_object_from_right_values(right_value_id_125,info);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
    __result188__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result188__;
    come_call_finalizer2(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sCloneNode* sCloneNode_initialize(struct sCloneNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value258;
struct sNode* __dec_obj109;
void* right_value259;
char* __dec_obj110;
struct sCloneNode* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
right_value259 = (void*)0;
    __dec_obj109=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=sNode_clone(node))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value258) { right_value258 = come_decrement_ref_count2(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj110=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value259=__builtin_string(info->sname))));
    __dec_obj110 = come_decrement_ref_count2(__dec_obj110, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value259 = come_decrement_ref_count2(right_value259, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result189__ = __result_obj__ = self;
    come_call_finalizer2(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result189__;
    come_call_finalizer2(sCloneNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sCloneNode_sline(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
int __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    __result190__ = self->sline;
    return __result190__;
}

char* sCloneNode_sname(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value260;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value260 = (void*)0;
    __result191__ = __result_obj__ = ((char*)(right_value260=__builtin_string(self->sname)));
    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result191__;
}

_Bool sCloneNode_terminated(){
void* __result_obj__;
_Bool __result192__;
memset(&__result_obj__, 0, sizeof(void*));
    __result192__ = (_Bool)0;
    return __result192__;
}

char* sCloneNode_kind(){
void* __result_obj__;
void* right_value261;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value261 = (void*)0;
    __result193__ = __result_obj__ = ((char*)(right_value261=__builtin_string("sCloneNode")));
    right_value261 = come_decrement_ref_count2(right_value261, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result193__;
}

_Bool sCloneNode_compile(struct sCloneNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_126;
_Bool _if_conditional179;
_Bool __result194__;
void* right_value262;
struct CVALUE* left_value_127;
void* right_value263;
struct sType* left_type_128;
_Bool _if_conditional180;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value264;
struct CVALUE* come_value_129;
void* right_value265;
struct tuple2$2sTypephcharph* multiple_assign_var2;
struct sType* result_type_130;
char* c_value_131;
char* __dec_obj111;
void* right_value266;
struct sType* __dec_obj112;
void* right_value267;
char* __dec_obj113;
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_126, 0, sizeof(struct sNode*));
right_value262 = (void*)0;
memset(&left_value_127, 0, sizeof(struct CVALUE*));
right_value263 = (void*)0;
memset(&left_type_128, 0, sizeof(struct sType*));
right_value264 = (void*)0;
memset(&come_value_129, 0, sizeof(struct CVALUE*));
right_value265 = (void*)0;
memset(&result_type_130, 0, sizeof(struct sType*));
memset(&c_value_131, 0, sizeof(char*));
memset(&result_type_130, 0, sizeof(struct sType*));
memset(&c_value_131, 0, sizeof(char*));
right_value266 = (void*)0;
right_value267 = (void*)0;
    node_126=self->node;
    if(_if_conditional179=!node_compile(node_126,info),    _if_conditional179) {
        __result194__ = (_Bool)0;
        return __result194__;
    }
    left_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_value_127->type->mClone=(_Bool)1;
    left_type_128=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(left_value_127->type))));
    come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional180=left_type_128->mPointerNum==1&&string_operator_equals(left_type_128->mClass->mName,"void")&&left_type_128->mHeap==(_Bool)0,    _if_conditional180) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_127));
    }
    else {
        if(_if_conditional181=left_type_128->mPointerNum==0,        _if_conditional181) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_127));
        }
        else {
            if(_if_conditional182=left_type_128->mPointerNum>0,            _if_conditional182) {
                come_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value264=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1372, "struct CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var2=((struct tuple2$2sTypephcharph*)(right_value265=clone_object(left_type_128,left_value_127->c_value,info)));
                result_type_130=(struct sType*)come_increment_ref_count(multiple_assign_var2->v1);
                c_value_131=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj111=come_value_129->c_value;
                come_value_129->c_value=(char*)come_increment_ref_count(c_value_131);
                __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj112=come_value_129->type;
                come_value_129->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value266=sType_clone(left_type_128))));
                come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_129->type->mHeap=(_Bool)1;
                come_value_129->type->mClone=(_Bool)1;
                come_value_129->var=((void*)0);
                __dec_obj113=come_value_129->c_value;
                come_value_129->c_value=(char*)come_increment_ref_count(((char*)(right_value267=append_object_to_right_values(come_value_129->c_value,(struct sType*)come_increment_ref_count(left_type_128),info))));
                __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_129));
                come_call_finalizer2(CVALUE_finalize,come_value_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_131 = come_decrement_ref_count2(c_value_131, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result195__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result195__;
    come_call_finalizer2(CVALUE_finalize,left_value_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple2$2sTypephcharphp_finalize(struct tuple2$2sTypephcharph* self){
void* __result_obj__;
_Bool _if_conditional183;
_Bool _if_conditional184;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional183=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional183) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
                    if(_if_conditional184=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional184) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

struct sDupeNode* sDupeNode_initialize(struct sDupeNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value268;
struct sNode* __dec_obj114;
void* right_value269;
char* __dec_obj115;
struct sDupeNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value268 = (void*)0;
right_value269 = (void*)0;
    __dec_obj114=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=sNode_clone(node))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value268) { right_value268 = come_decrement_ref_count2(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj115=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value269=__builtin_string(info->sname))));
    __dec_obj115 = come_decrement_ref_count2(__dec_obj115, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result196__ = __result_obj__ = self;
    come_call_finalizer2(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result196__;
    come_call_finalizer2(sDupeNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDupeNode_sline(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
int __result197__;
memset(&__result_obj__, 0, sizeof(void*));
    __result197__ = self->sline;
    return __result197__;
}

char* sDupeNode_sname(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value270;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
right_value270 = (void*)0;
    __result198__ = __result_obj__ = ((char*)(right_value270=__builtin_string(self->sname)));
    right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result198__;
}

_Bool sDupeNode_terminated(){
void* __result_obj__;
_Bool __result199__;
memset(&__result_obj__, 0, sizeof(void*));
    __result199__ = (_Bool)0;
    return __result199__;
}

char* sDupeNode_kind(){
void* __result_obj__;
void* right_value271;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
    __result200__ = __result_obj__ = ((char*)(right_value271=__builtin_string("sDupeNode")));
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result200__;
}

_Bool sDupeNode_compile(struct sDupeNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_132;
_Bool _if_conditional187;
_Bool __result201__;
void* right_value272;
struct CVALUE* left_value_133;
void* right_value273;
struct sType* left_type_134;
_Bool _if_conditional188;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value274;
struct CVALUE* come_value_135;
void* right_value275;
struct tuple2$2sTypephcharph* multiple_assign_var3;
struct sType* result_type_136;
char* c_value_137;
char* __dec_obj116;
void* right_value276;
struct sType* __dec_obj117;
void* right_value277;
char* __dec_obj118;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_132, 0, sizeof(struct sNode*));
right_value272 = (void*)0;
memset(&left_value_133, 0, sizeof(struct CVALUE*));
right_value273 = (void*)0;
memset(&left_type_134, 0, sizeof(struct sType*));
right_value274 = (void*)0;
memset(&come_value_135, 0, sizeof(struct CVALUE*));
right_value275 = (void*)0;
memset(&result_type_136, 0, sizeof(struct sType*));
memset(&c_value_137, 0, sizeof(char*));
memset(&result_type_136, 0, sizeof(struct sType*));
memset(&c_value_137, 0, sizeof(char*));
right_value276 = (void*)0;
right_value277 = (void*)0;
    node_132=self->node;
    if(_if_conditional187=!node_compile(node_132,info),    _if_conditional187) {
        __result201__ = (_Bool)0;
        return __result201__;
    }
    left_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    left_type_134=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(left_value_133->type))));
    come_call_finalizer2(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional188=left_type_134->mPointerNum==0,    _if_conditional188) {
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_133));
    }
    else {
        if(_if_conditional189=left_type_134->mPointerNum>0&&left_type_134->mHeap==(_Bool)0,        _if_conditional189) {
            list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(left_value_133));
        }
        else {
            if(_if_conditional190=left_type_134->mPointerNum>0,            _if_conditional190) {
                come_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value274=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1445, "struct CVALUE"))));
                come_call_finalizer2(CVALUE_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var3=((struct tuple2$2sTypephcharph*)(right_value275=clone_object(left_type_134,left_value_133->c_value,info)));
                result_type_136=(struct sType*)come_increment_ref_count(multiple_assign_var3->v1);
                c_value_137=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                come_call_finalizer2(tuple2$2sTypephcharphp_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                __dec_obj116=come_value_135->c_value;
                come_value_135->c_value=(char*)come_increment_ref_count(c_value_137);
                __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
                __dec_obj117=come_value_135->type;
                come_value_135->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value276=sType_clone(left_type_134))));
                come_call_finalizer2(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_value_135->type->mHeap=(_Bool)1;
                come_value_135->var=((void*)0);
                __dec_obj118=come_value_135->c_value;
                come_value_135->c_value=(char*)come_increment_ref_count(((char*)(right_value277=append_object_to_right_values(come_value_135->c_value,(struct sType*)come_increment_ref_count(left_type_134),info))));
                __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_135));
                come_call_finalizer2(CVALUE_finalize,come_value_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,result_type_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                c_value_137 = come_decrement_ref_count2(c_value_137, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
    }
    __result202__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result202__;
    come_call_finalizer2(CVALUE_finalize,left_value_133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,left_type_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sDummyHeapNode* sDummyHeapNode_initialize(struct sDummyHeapNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value278;
struct sNode* __dec_obj119;
void* right_value279;
char* __dec_obj120;
struct sDummyHeapNode* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value278 = (void*)0;
right_value279 = (void*)0;
    __dec_obj119=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(node))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value278) { right_value278 = come_decrement_ref_count2(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj120=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value279=__builtin_string(info->sname))));
    __dec_obj120 = come_decrement_ref_count2(__dec_obj120, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result203__ = __result_obj__ = self;
    come_call_finalizer2(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result203__;
    come_call_finalizer2(sDummyHeapNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sDummyHeapNode_sline(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
int __result204__;
memset(&__result_obj__, 0, sizeof(void*));
    __result204__ = self->sline;
    return __result204__;
}

char* sDummyHeapNode_sname(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value280;
char* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value280 = (void*)0;
    __result205__ = __result_obj__ = ((char*)(right_value280=__builtin_string(self->sname)));
    right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result205__;
}

_Bool sDummyHeapNode_terminated(){
void* __result_obj__;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
    __result206__ = (_Bool)0;
    return __result206__;
}

char* sDummyHeapNode_kind(){
void* __result_obj__;
void* right_value281;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value281 = (void*)0;
    __result207__ = __result_obj__ = ((char*)(right_value281=__builtin_string("sDummyHeapNode")));
    right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result207__;
}

_Bool sDummyHeapNode_compile(struct sDummyHeapNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_138;
_Bool _if_conditional193;
_Bool __result208__;
void* right_value282;
struct CVALUE* come_value_139;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_138, 0, sizeof(struct sNode*));
right_value282 = (void*)0;
memset(&come_value_139, 0, sizeof(struct CVALUE*));
    node_138=self->node;
    if(_if_conditional193=!node_compile(node_138,info),    _if_conditional193) {
        __result208__ = (_Bool)0;
        return __result208__;
    }
    come_value_139=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_139->type->mHeap=(_Bool)1;
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_139));
    __result209__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result209__;
    come_call_finalizer2(CVALUE_finalize,come_value_139, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sGCIncNode* sGCIncNode_initialize(struct sGCIncNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value283;
struct sNode* __dec_obj121;
void* right_value284;
char* __dec_obj122;
struct sGCIncNode* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
right_value284 = (void*)0;
    __dec_obj121=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=sNode_clone(node))));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj122=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(info->sname))));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result210__ = __result_obj__ = self;
    come_call_finalizer2(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result210__;
    come_call_finalizer2(sGCIncNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sGCIncNode_sline(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
int __result211__;
memset(&__result_obj__, 0, sizeof(void*));
    __result211__ = self->sline;
    return __result211__;
}

char* sGCIncNode_sname(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value285;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value285 = (void*)0;
    __result212__ = __result_obj__ = ((char*)(right_value285=__builtin_string(self->sname)));
    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result212__;
}

_Bool sGCIncNode_terminated(){
void* __result_obj__;
_Bool __result213__;
memset(&__result_obj__, 0, sizeof(void*));
    __result213__ = (_Bool)0;
    return __result213__;
}

char* sGCIncNode_kind(){
void* __result_obj__;
void* right_value286;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
    __result214__ = __result_obj__ = ((char*)(right_value286=__builtin_string("sGCIncNode")));
    right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result214__;
}

_Bool sGCIncNode_compile(struct sGCIncNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_140;
_Bool _if_conditional196;
_Bool __result215__;
void* right_value287;
struct CVALUE* come_value_141;
struct sType* type_142;
_Bool _if_conditional197;
void* right_value288;
char* type_name_143;
void* right_value289;
char* __dec_obj123;
_Bool __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_140, 0, sizeof(struct sNode*));
right_value287 = (void*)0;
memset(&come_value_141, 0, sizeof(struct CVALUE*));
memset(&type_142, 0, sizeof(struct sType*));
right_value288 = (void*)0;
memset(&type_name_143, 0, sizeof(char*));
right_value289 = (void*)0;
    node_140=self->node;
    if(_if_conditional196=!node_compile(node_140,info),    _if_conditional196) {
        __result215__ = (_Bool)0;
        return __result215__;
    }
    come_value_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value287=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_142=come_value_141->type;
    if(come_value_141->type->mHeap) {
        type_name_143=(char*)come_increment_ref_count(((char*)(right_value288=make_type_name_string(type_142,(_Bool)0,(_Bool)0,(_Bool)0,info))));
        right_value288 = come_decrement_ref_count2(right_value288, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj123=come_value_141->c_value;
        come_value_141->c_value=(char*)come_increment_ref_count(((char*)(right_value289=increment_ref_count_object(come_value_141->type,come_value_141->c_value,info))));
        __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type_name_143 = come_decrement_ref_count2(type_name_143, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_141));
    __result216__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result216__;
    come_call_finalizer2(CVALUE_finalize,come_value_141, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sGCDecNode* sGCDecNode_initialize(struct sGCDecNode* self, struct sNode* node, struct sInfo* info){
void* __result_obj__;
void* right_value290;
struct sNode* __dec_obj124;
void* right_value291;
char* __dec_obj125;
struct sGCDecNode* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
right_value290 = (void*)0;
right_value291 = (void*)0;
    __dec_obj124=self->node;
    self->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value290=sNode_clone(node))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, ((struct sNode*)right_value290)->finalize, ((struct sNode*)right_value290)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->sline=info->sline;
    __dec_obj125=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value291=__builtin_string(info->sname))));
    __dec_obj125 = come_decrement_ref_count2(__dec_obj125, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result217__ = __result_obj__ = self;
    come_call_finalizer2(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result217__;
    come_call_finalizer2(sGCDecNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sGCDecNode_sline(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
int __result218__;
memset(&__result_obj__, 0, sizeof(void*));
    __result218__ = self->sline;
    return __result218__;
}

char* sGCDecNode_sname(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value292;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
    __result219__ = __result_obj__ = ((char*)(right_value292=__builtin_string(self->sname)));
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result219__;
}

_Bool sGCDecNode_terminated(){
void* __result_obj__;
_Bool __result220__;
memset(&__result_obj__, 0, sizeof(void*));
    __result220__ = (_Bool)0;
    return __result220__;
}

char* sGCDecNode_kind(){
void* __result_obj__;
void* right_value293;
char* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
    __result221__ = __result_obj__ = ((char*)(right_value293=__builtin_string("sGCDecNode")));
    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result221__;
}

_Bool sGCDecNode_compile(struct sGCDecNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* node_144;
_Bool _if_conditional200;
_Bool __result222__;
void* right_value294;
struct CVALUE* come_value_145;
struct sType* type_146;
_Bool __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_144, 0, sizeof(struct sNode*));
right_value294 = (void*)0;
memset(&come_value_145, 0, sizeof(struct CVALUE*));
memset(&type_146, 0, sizeof(struct sType*));
    node_144=self->node;
    if(_if_conditional200=!node_compile(node_144,info),    _if_conditional200) {
        __result222__ = (_Bool)0;
        return __result222__;
    }
    come_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value294=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_146=come_value_145->type;
    decrement_ref_count_object(type_146,come_value_145->c_value,info,(_Bool)0);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_145));
    __result223__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result223__;
    come_call_finalizer2(CVALUE_finalize,come_value_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sIsHeap* sIsHeap_initialize(struct sIsHeap* self, struct sType* type, struct sInfo* info){
void* __result_obj__;
void* right_value295;
struct sType* __dec_obj126;
void* right_value296;
char* __dec_obj127;
struct sIsHeap* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value295 = (void*)0;
right_value296 = (void*)0;
    __dec_obj126=self->type;
    self->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_clone(type))));
    come_call_finalizer2(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    self->sline=info->sline;
    __dec_obj127=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string(info->sname))));
    __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result224__ = __result_obj__ = self;
    come_call_finalizer2(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result224__;
    come_call_finalizer2(sIsHeap_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

int sIsHeap_sline(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
int __result225__;
memset(&__result_obj__, 0, sizeof(void*));
    __result225__ = self->sline;
    return __result225__;
}

char* sIsHeap_sname(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
void* right_value297;
char* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
    __result226__ = __result_obj__ = ((char*)(right_value297=__builtin_string(self->sname)));
    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result226__;
}

_Bool sIsHeap_terminated(){
void* __result_obj__;
_Bool __result227__;
memset(&__result_obj__, 0, sizeof(void*));
    __result227__ = (_Bool)0;
    return __result227__;
}

char* sIsHeap_kind(){
void* __result_obj__;
void* right_value298;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value298 = (void*)0;
    __result228__ = __result_obj__ = ((char*)(right_value298=__builtin_string("sIsHeap")));
    right_value298 = come_decrement_ref_count2(right_value298, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result228__;
}

_Bool sIsHeap_compile(struct sIsHeap* self, struct sInfo* info){
void* __result_obj__;
struct sType* node_147;
_Bool _if_conditional203;
void* right_value299;
struct CVALUE* come_value_148;
void* right_value300;
char* __dec_obj128;
void* right_value301;
void* right_value302;
struct sType* __dec_obj129;
void* right_value303;
struct CVALUE* come_value_149;
void* right_value304;
char* __dec_obj130;
void* right_value305;
void* right_value306;
struct sType* __dec_obj131;
_Bool __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&node_147, 0, sizeof(struct sType*));
right_value299 = (void*)0;
memset(&come_value_148, 0, sizeof(struct CVALUE*));
right_value300 = (void*)0;
right_value301 = (void*)0;
right_value302 = (void*)0;
right_value303 = (void*)0;
memset(&come_value_149, 0, sizeof(struct CVALUE*));
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
    node_147=self->type;
    if(self->type->mHeap) {
        come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value299=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1671, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj128=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value300=xsprintf("1"))));
        __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj129=come_value_148->type;
        come_value_148->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value302=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value301=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1674, "struct sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_148->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
        add_come_last_code(info,"%s;\n",come_value_148->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        come_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value303=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "21obj.c", 1682, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj130=come_value_149->c_value;
        come_value_149->c_value=(char*)come_increment_ref_count(((char*)(right_value304=xsprintf("0"))));
        __dec_obj130 = come_decrement_ref_count2(__dec_obj130, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj131=come_value_149->type;
        come_value_149->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value306=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value305=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "21obj.c", 1685, "struct sType")))),"int",(_Bool)0,info))));
        come_call_finalizer2(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sType_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_149->var=((void*)0);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_149));
        add_come_last_code(info,"%s;\n",come_value_149->c_value);
        come_call_finalizer2(CVALUE_finalize,come_value_149, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result229__ = (_Bool)1;
    return __result229__;
}

struct sNode* string_node_v21(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional204;
void* right_value307;
struct tuple3$3sTypephcharphbool* multiple_assign_var4;
struct sType* type_150;
char* name_151;
_Bool err_152;
_Bool _if_conditional207;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value308;
struct sType* inf_type_153;
void* right_value309;
struct sNode* node_154;
void* right_value310;
void* right_value311;
struct sNode* _inf_value4;
struct sImplementsNode* _inf_obj_value4;
void* right_value316;
struct sNode* __result232__;
void* right_value317;
void* right_value318;
struct sNode* _inf_value5;
struct sNewNode* _inf_obj_value5;
void* right_value322;
struct sNode* obj_157;
void* right_value323;
char* fun_name_158;
void* right_value324;
void* right_value325;
struct sNode* __result235__;
void* right_value326;
void* right_value327;
struct sNode* _inf_value6;
struct sNewNode* _inf_obj_value6;
void* right_value331;
struct sNode* __result238__;
_Bool _if_conditional230;
void* right_value332;
void* right_value333;
struct sNode* _inf_value7;
struct sTrueNode* _inf_obj_value7;
void* right_value336;
struct sNode* __result241__;
_Bool _if_conditional235;
void* right_value337;
void* right_value338;
struct sNode* _inf_value8;
struct sFalseNode* _inf_obj_value8;
void* right_value341;
struct sNode* __result244__;
_Bool _if_conditional240;
void* right_value342;
struct sNode* node_162;
void* right_value343;
void* right_value344;
struct sNode* _inf_value9;
struct sDeleteNode* _inf_obj_value9;
void* right_value348;
struct sNode* __result247__;
_Bool _if_conditional247;
void* right_value349;
struct sNode* node_164;
void* right_value350;
void* right_value351;
struct sNode* _inf_value10;
struct sForceDeleteNode* _inf_obj_value10;
void* right_value355;
struct sNode* __result250__;
_Bool _if_conditional254;
void* right_value356;
struct sNode* node_166;
void* right_value357;
void* right_value358;
struct sNode* _inf_value11;
struct sBorrowNode* _inf_obj_value11;
void* right_value362;
struct sNode* __result253__;
_Bool _if_conditional261;
void* right_value363;
struct sNode* node_168;
void* right_value364;
void* right_value365;
struct sNode* _inf_value12;
struct sDelegateNode* _inf_obj_value12;
void* right_value369;
struct sNode* __result256__;
_Bool _if_conditional268;
void* right_value370;
struct sNode* node_170;
void* right_value371;
void* right_value372;
struct sNode* _inf_value13;
struct sShareNode* _inf_obj_value13;
void* right_value376;
struct sNode* __result259__;
_Bool _if_conditional275;
void* right_value377;
struct sNode* node_172;
void* right_value378;
void* right_value379;
struct sNode* _inf_value14;
struct sCloneNode* _inf_obj_value14;
void* right_value383;
struct sNode* __result262__;
_Bool _if_conditional282;
void* right_value384;
struct sNode* node_174;
void* right_value385;
void* right_value386;
struct sNode* _inf_value15;
struct sDupeNode* _inf_obj_value15;
void* right_value390;
struct sNode* __result265__;
_Bool _if_conditional289;
void* right_value391;
struct sNode* node_176;
void* right_value392;
void* right_value393;
struct sNode* _inf_value16;
struct sDummyHeapNode* _inf_obj_value16;
void* right_value397;
struct sNode* __result268__;
_Bool _if_conditional296;
void* right_value398;
struct sNode* node_178;
void* right_value399;
void* right_value400;
struct sNode* _inf_value17;
struct sGCIncNode* _inf_obj_value17;
void* right_value404;
struct sNode* __result271__;
_Bool _if_conditional303;
void* right_value405;
struct sNode* node_180;
void* right_value406;
void* right_value407;
struct sNode* _inf_value18;
struct sGCDecNode* _inf_obj_value18;
void* right_value411;
struct sNode* __result274__;
_Bool _if_conditional310;
void* right_value412;
struct tuple3$3sTypephcharphbool* multiple_assign_var5;
struct sType* param_type_182;
char* param_name_183;
_Bool err_184;
_Bool _if_conditional311;
void* right_value413;
struct sType* type2_185;
void* right_value414;
void* right_value415;
struct sNode* _inf_value19;
struct sIsHeap* _inf_obj_value19;
void* right_value419;
struct sNode* __result277__;
_Bool _if_conditional318;
_Bool _if_conditional319;
void* right_value420;
void* right_value421;
struct sNode* _inf_value20;
struct sNullNodeX* _inf_obj_value20;
void* right_value424;
struct sNode* __result280__;
_Bool _if_conditional324;
_Bool _if_conditional325;
void* right_value425;
struct sNode* node_188;
struct sNode* __result281__;
void* right_value426;
void* right_value427;
struct sNode* _inf_value21;
struct sNullNodeX* _inf_obj_value21;
void* right_value430;
struct sNode* __result284__;
_Bool _if_conditional330;
void* right_value431;
void* right_value432;
struct sNode* _inf_value22;
struct sNullNodeX* _inf_obj_value22;
void* right_value435;
struct sNode* __result287__;
_Bool _if_conditional335;
void* right_value436;
void* right_value437;
struct sNode* _inf_value23;
struct sNullNodeX* _inf_obj_value23;
void* right_value440;
struct sNode* __result290__;
_Bool _if_conditional340;
void* right_value441;
void* right_value442;
struct sNode* _inf_value24;
struct sNullNodeX* _inf_obj_value24;
void* right_value445;
struct sNode* __result293__;
_Bool _if_conditional345;
void* right_value446;
void* right_value447;
struct sNode* _inf_value25;
struct sNullNodeX* _inf_obj_value25;
void* right_value450;
struct sNode* __result296__;
_Bool _if_conditional350;
_Bool is_type_name_flag_194;
char* p_195;
int sline_196;
_Bool _if_conditional351;
void* right_value451;
char* word_197;
_Bool _if_conditional352;
_Bool _if_conditional353;
void* right_value452;
struct tuple3$3sTypephcharphbool* multiple_assign_var6;
struct sType* type_198;
char* name_199;
_Bool err_200;
_Bool _if_conditional354;
void* right_value453;
void* right_value454;
struct sNode* _inf_value26;
struct sSizeOfNode* _inf_obj_value26;
void* right_value458;
struct sNode* __result299__;
void* right_value459;
struct sNode* exp_202;
void* right_value460;
void* right_value461;
struct sNode* _inf_value27;
struct sSizeOfExpNode* _inf_obj_value27;
void* right_value465;
struct sNode* __result302__;
_Bool _if_conditional367;
_Bool is_type_name_flag_204;
char* p_205;
int sline_206;
_Bool _if_conditional368;
void* right_value466;
char* word_207;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value467;
struct tuple3$3sTypephcharphbool* multiple_assign_var7;
struct sType* type_208;
char* name_209;
_Bool err_210;
_Bool _if_conditional371;
void* right_value468;
void* right_value469;
struct sNode* _inf_value28;
struct sTypeOfNode* _inf_obj_value28;
void* right_value473;
struct sNode* __result305__;
void* right_value474;
struct sNode* exp_212;
void* right_value475;
void* right_value476;
struct sNode* _inf_value29;
struct sTypeOfExpNode* _inf_obj_value29;
void* right_value480;
struct sNode* __result308__;
_Bool _if_conditional384;
void* right_value481;
struct sNode* exp_214;
void* right_value482;
void* right_value483;
struct sNode* _inf_value30;
struct sDynamicTypeOfNode* _inf_obj_value30;
void* right_value487;
struct sNode* __result311__;
_Bool _if_conditional391;
_Bool is_type_name_flag_216;
char* p_217;
int sline_218;
_Bool _if_conditional392;
void* right_value488;
char* word_219;
_Bool _if_conditional393;
_Bool _if_conditional394;
void* right_value489;
struct tuple3$3sTypephcharphbool* multiple_assign_var8;
struct sType* type_220;
char* name_221;
_Bool err_222;
_Bool _if_conditional395;
void* right_value490;
void* right_value491;
struct sNode* _inf_value31;
struct sAlignOfNode* _inf_obj_value31;
void* right_value495;
struct sNode* __result314__;
void* right_value496;
struct sNode* exp_224;
void* right_value497;
void* right_value498;
struct sNode* _inf_value32;
struct sAlignOfExpNode* _inf_obj_value32;
void* right_value502;
struct sNode* __result317__;
_Bool _if_conditional408;
_Bool is_type_name_flag_226;
char* p_227;
int sline_228;
_Bool _if_conditional409;
void* right_value503;
char* word_229;
_Bool _if_conditional410;
_Bool _if_conditional411;
void* right_value504;
struct tuple3$3sTypephcharphbool* multiple_assign_var9;
struct sType* type_230;
char* name_231;
_Bool err_232;
_Bool _if_conditional412;
void* right_value505;
void* right_value506;
struct sNode* _inf_value33;
struct sAlignOfNode2* _inf_obj_value33;
void* right_value510;
struct sNode* __result320__;
void* right_value511;
struct sNode* exp_234;
void* right_value512;
void* right_value513;
struct sNode* _inf_value34;
struct sAlignOfExpNode2* _inf_obj_value34;
void* right_value517;
struct sNode* __result323__;
_Bool _if_conditional425;
_Bool is_type_name_flag_236;
char* p_237;
int sline_238;
_Bool _if_conditional426;
void* right_value518;
char* word_239;
_Bool _if_conditional427;
_Bool _if_conditional428;
void* right_value519;
struct tuple3$3sTypephcharphbool* multiple_assign_var10;
struct sType* type_240;
char* name_241;
_Bool err_242;
_Bool _if_conditional429;
void* right_value520;
void* right_value521;
struct sNode* _inf_value35;
struct sAlignAsNode* _inf_obj_value35;
void* right_value525;
struct sNode* __result326__;
void* right_value526;
struct sNode* exp_244;
void* right_value527;
void* right_value528;
struct sNode* _inf_value36;
struct sAlignAsExpNode* _inf_obj_value36;
void* right_value532;
struct sNode* __result329__;
void* right_value533;
struct sNode* __result330__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
memset(&type_150, 0, sizeof(struct sType*));
memset(&name_151, 0, sizeof(char*));
memset(&err_152, 0, sizeof(_Bool));
memset(&type_150, 0, sizeof(struct sType*));
memset(&name_151, 0, sizeof(char*));
memset(&err_152, 0, sizeof(_Bool));
right_value308 = (void*)0;
memset(&inf_type_153, 0, sizeof(struct sType*));
right_value309 = (void*)0;
memset(&node_154, 0, sizeof(struct sNode*));
right_value310 = (void*)0;
right_value311 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
right_value318 = (void*)0;
right_value322 = (void*)0;
memset(&obj_157, 0, sizeof(struct sNode*));
right_value323 = (void*)0;
memset(&fun_name_158, 0, sizeof(char*));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value331 = (void*)0;
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value336 = (void*)0;
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value341 = (void*)0;
right_value342 = (void*)0;
memset(&node_162, 0, sizeof(struct sNode*));
right_value343 = (void*)0;
right_value344 = (void*)0;
right_value348 = (void*)0;
right_value349 = (void*)0;
memset(&node_164, 0, sizeof(struct sNode*));
right_value350 = (void*)0;
right_value351 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
memset(&node_166, 0, sizeof(struct sNode*));
right_value357 = (void*)0;
right_value358 = (void*)0;
right_value362 = (void*)0;
right_value363 = (void*)0;
memset(&node_168, 0, sizeof(struct sNode*));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&node_170, 0, sizeof(struct sNode*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value376 = (void*)0;
right_value377 = (void*)0;
memset(&node_172, 0, sizeof(struct sNode*));
right_value378 = (void*)0;
right_value379 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
memset(&node_174, 0, sizeof(struct sNode*));
right_value385 = (void*)0;
right_value386 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
memset(&node_176, 0, sizeof(struct sNode*));
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value397 = (void*)0;
right_value398 = (void*)0;
memset(&node_178, 0, sizeof(struct sNode*));
right_value399 = (void*)0;
right_value400 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&node_180, 0, sizeof(struct sNode*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value411 = (void*)0;
right_value412 = (void*)0;
memset(&param_type_182, 0, sizeof(struct sType*));
memset(&param_name_183, 0, sizeof(char*));
memset(&err_184, 0, sizeof(_Bool));
memset(&param_type_182, 0, sizeof(struct sType*));
memset(&param_name_183, 0, sizeof(char*));
memset(&err_184, 0, sizeof(_Bool));
right_value413 = (void*)0;
memset(&type2_185, 0, sizeof(struct sType*));
right_value414 = (void*)0;
right_value415 = (void*)0;
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value421 = (void*)0;
right_value424 = (void*)0;
right_value425 = (void*)0;
memset(&node_188, 0, sizeof(struct sNode*));
right_value426 = (void*)0;
right_value427 = (void*)0;
right_value430 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value450 = (void*)0;
memset(&is_type_name_flag_194, 0, sizeof(_Bool));
memset(&p_195, 0, sizeof(char*));
memset(&sline_196, 0, sizeof(int));
right_value451 = (void*)0;
memset(&word_197, 0, sizeof(char*));
right_value452 = (void*)0;
memset(&type_198, 0, sizeof(struct sType*));
memset(&name_199, 0, sizeof(char*));
memset(&err_200, 0, sizeof(_Bool));
memset(&type_198, 0, sizeof(struct sType*));
memset(&name_199, 0, sizeof(char*));
memset(&err_200, 0, sizeof(_Bool));
right_value453 = (void*)0;
right_value454 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
memset(&exp_202, 0, sizeof(struct sNode*));
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value465 = (void*)0;
memset(&is_type_name_flag_204, 0, sizeof(_Bool));
memset(&p_205, 0, sizeof(char*));
memset(&sline_206, 0, sizeof(int));
right_value466 = (void*)0;
memset(&word_207, 0, sizeof(char*));
right_value467 = (void*)0;
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
memset(&type_208, 0, sizeof(struct sType*));
memset(&name_209, 0, sizeof(char*));
memset(&err_210, 0, sizeof(_Bool));
right_value468 = (void*)0;
right_value469 = (void*)0;
right_value473 = (void*)0;
right_value474 = (void*)0;
memset(&exp_212, 0, sizeof(struct sNode*));
right_value475 = (void*)0;
right_value476 = (void*)0;
right_value480 = (void*)0;
right_value481 = (void*)0;
memset(&exp_214, 0, sizeof(struct sNode*));
right_value482 = (void*)0;
right_value483 = (void*)0;
right_value487 = (void*)0;
memset(&is_type_name_flag_216, 0, sizeof(_Bool));
memset(&p_217, 0, sizeof(char*));
memset(&sline_218, 0, sizeof(int));
right_value488 = (void*)0;
memset(&word_219, 0, sizeof(char*));
right_value489 = (void*)0;
memset(&type_220, 0, sizeof(struct sType*));
memset(&name_221, 0, sizeof(char*));
memset(&err_222, 0, sizeof(_Bool));
memset(&type_220, 0, sizeof(struct sType*));
memset(&name_221, 0, sizeof(char*));
memset(&err_222, 0, sizeof(_Bool));
right_value490 = (void*)0;
right_value491 = (void*)0;
right_value495 = (void*)0;
right_value496 = (void*)0;
memset(&exp_224, 0, sizeof(struct sNode*));
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value502 = (void*)0;
memset(&is_type_name_flag_226, 0, sizeof(_Bool));
memset(&p_227, 0, sizeof(char*));
memset(&sline_228, 0, sizeof(int));
right_value503 = (void*)0;
memset(&word_229, 0, sizeof(char*));
right_value504 = (void*)0;
memset(&type_230, 0, sizeof(struct sType*));
memset(&name_231, 0, sizeof(char*));
memset(&err_232, 0, sizeof(_Bool));
memset(&type_230, 0, sizeof(struct sType*));
memset(&name_231, 0, sizeof(char*));
memset(&err_232, 0, sizeof(_Bool));
right_value505 = (void*)0;
right_value506 = (void*)0;
right_value510 = (void*)0;
right_value511 = (void*)0;
memset(&exp_234, 0, sizeof(struct sNode*));
right_value512 = (void*)0;
right_value513 = (void*)0;
right_value517 = (void*)0;
memset(&is_type_name_flag_236, 0, sizeof(_Bool));
memset(&p_237, 0, sizeof(char*));
memset(&sline_238, 0, sizeof(int));
right_value518 = (void*)0;
memset(&word_239, 0, sizeof(char*));
right_value519 = (void*)0;
memset(&type_240, 0, sizeof(struct sType*));
memset(&name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
memset(&type_240, 0, sizeof(struct sType*));
memset(&name_241, 0, sizeof(char*));
memset(&err_242, 0, sizeof(_Bool));
right_value520 = (void*)0;
right_value521 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
memset(&exp_244, 0, sizeof(struct sNode*));
right_value527 = (void*)0;
right_value528 = (void*)0;
right_value532 = (void*)0;
right_value533 = (void*)0;
    if(_if_conditional204=charp_operator_equals(buf,"new"),    _if_conditional204) {
        multiple_assign_var4=((struct tuple3$3sTypephcharphbool*)(right_value307=parse_type(info,(_Bool)0,(_Bool)1)));
        type_150=(struct sType*)come_increment_ref_count(multiple_assign_var4->v1);
        name_151=(char*)come_increment_ref_count(multiple_assign_var4->v2);
        err_152=multiple_assign_var4->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional207=!err_152,        _if_conditional207) {
            err_msg(info,"parse_type failed");
            exit(2);
        }
        if(_if_conditional208=*info->p==40,        _if_conditional208) {
            if(type_150->mClass->mProtocol) {
                info->p++;
                skip_spaces_and_lf(info);
                inf_type_153=(struct sType*)come_increment_ref_count(((struct sType*)(right_value308=sType_clone(type_150))));
                come_call_finalizer2(sType_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                node_154=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=expression_v13(info))));
                if(right_value309) { right_value309 = come_decrement_ref_count2(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                expected_next_character(41,info);
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1716, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sImplementsNode*)(right_value311=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value310=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 1716, "struct sImplementsNode")))),(struct sNode*)come_increment_ref_count(node_154),(struct sType*)come_increment_ref_count(inf_type_153),info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sImplementsNode_finalize;
                _inf_value4->clone=(void*)sImplementsNode_clone;
                _inf_value4->compile=(void*)sImplementsNode_compile;
                _inf_value4->sline=(void*)sImplementsNode_sline;
                _inf_value4->sname=(void*)sImplementsNode_sname;
                _inf_value4->terminated=(void*)sImplementsNode_terminated;
                _inf_value4->kind=(void*)sImplementsNode_kind;
                __result232__ = __result_obj__ = ((struct sNode*)(right_value316=_inf_value4));
                come_call_finalizer2(sType_finalize,inf_type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_154) { node_154 = come_decrement_ref_count2(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sType_finalize,type_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_151 = come_decrement_ref_count2(name_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sImplementsNode_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sImplementsNode_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result232__;
                come_call_finalizer2(sType_finalize,inf_type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(node_154) { node_154 = come_decrement_ref_count2(node_154, ((struct sNode*)node_154)->finalize, ((struct sNode*)node_154)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1719, "struct sNode");
                _inf_obj_value5=come_increment_ref_count(((struct sNewNode*)(right_value318=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value317=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1719, "struct sNewNode")))),(struct sType*)come_increment_ref_count(type_150),info))));
                _inf_value5->_protocol_obj=_inf_obj_value5;
                _inf_value5->finalize=(void*)sNewNode_finalize;
                _inf_value5->clone=(void*)sNewNode_clone;
                _inf_value5->compile=(void*)sNewNode_compile;
                _inf_value5->sline=(void*)sNewNode_sline;
                _inf_value5->sname=(void*)sNewNode_sname;
                _inf_value5->terminated=(void*)sNewNode_terminated;
                _inf_value5->kind=(void*)sNewNode_kind;
                obj_157=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value322=_inf_value5)));
                come_call_finalizer2(sNewNode_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sNewNode_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, ((struct sNode*)right_value322)->finalize, ((struct sNode*)right_value322)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                fun_name_158=(char*)come_increment_ref_count(((char*)(right_value323=__builtin_string("initialize"))));
                right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                __result235__ = __result_obj__ = ((struct sNode*)(right_value325=parse_method_call_v20((struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=sNode_clone(obj_157)))),(char*)come_increment_ref_count(fun_name_158),info)));
                if(obj_157) { obj_157 = come_decrement_ref_count2(obj_157, ((struct sNode*)obj_157)->finalize, ((struct sNode*)obj_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_158 = come_decrement_ref_count2(fun_name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,type_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                name_151 = come_decrement_ref_count2(name_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result235__;
                if(obj_157) { obj_157 = come_decrement_ref_count2(obj_157, ((struct sNode*)obj_157)->finalize, ((struct sNode*)obj_157)->_protocol_obj, 0, 0, 0, (void*)0); } 
                fun_name_158 = come_decrement_ref_count2(fun_name_158, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
        }
        else {
            _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1726, "struct sNode");
            _inf_obj_value6=come_increment_ref_count(((struct sNewNode*)(right_value327=sNewNode_initialize((struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value326=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "21obj.c", 1726, "struct sNewNode")))),(struct sType*)come_increment_ref_count(type_150),info))));
            _inf_value6->_protocol_obj=_inf_obj_value6;
            _inf_value6->finalize=(void*)sNewNode_finalize;
            _inf_value6->clone=(void*)sNewNode_clone;
            _inf_value6->compile=(void*)sNewNode_compile;
            _inf_value6->sline=(void*)sNewNode_sline;
            _inf_value6->sname=(void*)sNewNode_sname;
            _inf_value6->terminated=(void*)sNewNode_terminated;
            _inf_value6->kind=(void*)sNewNode_kind;
            __result238__ = __result_obj__ = ((struct sNode*)(right_value331=_inf_value6));
            come_call_finalizer2(sType_finalize,type_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            name_151 = come_decrement_ref_count2(name_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            come_call_finalizer2(sNewNode_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sNewNode_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value331) { right_value331 = come_decrement_ref_count2(right_value331, ((struct sNode*)right_value331)->finalize, ((struct sNode*)right_value331)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result238__;
        }
        come_call_finalizer2(sType_finalize,type_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name_151 = come_decrement_ref_count2(name_151, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional230=charp_operator_equals(buf,"true"),        _if_conditional230) {
            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1730, "struct sNode");
            _inf_obj_value7=come_increment_ref_count(((struct sTrueNode*)(right_value333=sTrueNode_initialize((struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value332=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "21obj.c", 1730, "struct sTrueNode")))),info))));
            _inf_value7->_protocol_obj=_inf_obj_value7;
            _inf_value7->finalize=(void*)sTrueNode_finalize;
            _inf_value7->clone=(void*)sTrueNode_clone;
            _inf_value7->compile=(void*)sTrueNode_compile;
            _inf_value7->sline=(void*)sTrueNode_sline;
            _inf_value7->sname=(void*)sTrueNode_sname;
            _inf_value7->terminated=(void*)sTrueNode_terminated;
            _inf_value7->kind=(void*)sTrueNode_kind;
            __result241__ = __result_obj__ = ((struct sNode*)(right_value336=_inf_value7));
            come_call_finalizer2(sTrueNode_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sTrueNode_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result241__;
        }
        else {
            if(_if_conditional235=charp_operator_equals(buf,"false"),            _if_conditional235) {
                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1733, "struct sNode");
                _inf_obj_value8=come_increment_ref_count(((struct sFalseNode*)(right_value338=sFalseNode_initialize((struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value337=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "21obj.c", 1733, "struct sFalseNode")))),info))));
                _inf_value8->_protocol_obj=_inf_obj_value8;
                _inf_value8->finalize=(void*)sFalseNode_finalize;
                _inf_value8->clone=(void*)sFalseNode_clone;
                _inf_value8->compile=(void*)sFalseNode_compile;
                _inf_value8->sline=(void*)sFalseNode_sline;
                _inf_value8->sname=(void*)sFalseNode_sname;
                _inf_value8->terminated=(void*)sFalseNode_terminated;
                _inf_value8->kind=(void*)sFalseNode_kind;
                __result244__ = __result_obj__ = ((struct sNode*)(right_value341=_inf_value8));
                come_call_finalizer2(sFalseNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sFalseNode_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value341) { right_value341 = come_decrement_ref_count2(right_value341, ((struct sNode*)right_value341)->finalize, ((struct sNode*)right_value341)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result244__;
            }
            else {
                if(_if_conditional240=charp_operator_equals(buf,"delete"),                _if_conditional240) {
                    node_162=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value342=expression_v13(info))));
                    if(right_value342) { right_value342 = come_decrement_ref_count2(right_value342, ((struct sNode*)right_value342)->finalize, ((struct sNode*)right_value342)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1738, "struct sNode");
                    _inf_obj_value9=come_increment_ref_count(((struct sDeleteNode*)(right_value344=sDeleteNode_initialize((struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value343=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "21obj.c", 1738, "struct sDeleteNode")))),(struct sNode*)come_increment_ref_count(node_162),info))));
                    _inf_value9->_protocol_obj=_inf_obj_value9;
                    _inf_value9->finalize=(void*)sDeleteNode_finalize;
                    _inf_value9->clone=(void*)sDeleteNode_clone;
                    _inf_value9->compile=(void*)sDeleteNode_compile;
                    _inf_value9->sline=(void*)sDeleteNode_sline;
                    _inf_value9->sname=(void*)sDeleteNode_sname;
                    _inf_value9->terminated=(void*)sDeleteNode_terminated;
                    _inf_value9->kind=(void*)sDeleteNode_kind;
                    __result247__ = __result_obj__ = ((struct sNode*)(right_value348=_inf_value9));
                    if(node_162) { node_162 = come_decrement_ref_count2(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sDeleteNode_finalize,right_value343, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sDeleteNode_finalize,right_value344, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value348) { right_value348 = come_decrement_ref_count2(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result247__;
                    if(node_162) { node_162 = come_decrement_ref_count2(node_162, ((struct sNode*)node_162)->finalize, ((struct sNode*)node_162)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional247=charp_operator_equals(buf,"force_delete"),                    _if_conditional247) {
                        node_164=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value349=expression_v13(info))));
                        if(right_value349) { right_value349 = come_decrement_ref_count2(right_value349, ((struct sNode*)right_value349)->finalize, ((struct sNode*)right_value349)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1743, "struct sNode");
                        _inf_obj_value10=come_increment_ref_count(((struct sForceDeleteNode*)(right_value351=sForceDeleteNode_initialize((struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value350=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "21obj.c", 1743, "struct sForceDeleteNode")))),(struct sNode*)come_increment_ref_count(node_164),info))));
                        _inf_value10->_protocol_obj=_inf_obj_value10;
                        _inf_value10->finalize=(void*)sForceDeleteNode_finalize;
                        _inf_value10->clone=(void*)sForceDeleteNode_clone;
                        _inf_value10->compile=(void*)sForceDeleteNode_compile;
                        _inf_value10->sline=(void*)sForceDeleteNode_sline;
                        _inf_value10->sname=(void*)sForceDeleteNode_sname;
                        _inf_value10->terminated=(void*)sForceDeleteNode_terminated;
                        _inf_value10->kind=(void*)sForceDeleteNode_kind;
                        __result250__ = __result_obj__ = ((struct sNode*)(right_value355=_inf_value10));
                        if(node_164) { node_164 = come_decrement_ref_count2(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sForceDeleteNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sForceDeleteNode_finalize,right_value351, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result250__;
                        if(node_164) { node_164 = come_decrement_ref_count2(node_164, ((struct sNode*)node_164)->finalize, ((struct sNode*)node_164)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional254=charp_operator_equals(buf,"borrow"),                        _if_conditional254) {
                            node_166=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=expression_v13(info))));
                            if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1749, "struct sNode");
                            _inf_obj_value11=come_increment_ref_count(((struct sBorrowNode*)(right_value358=sBorrowNode_initialize((struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value357=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "21obj.c", 1749, "struct sBorrowNode")))),(struct sNode*)come_increment_ref_count(node_166),info))));
                            _inf_value11->_protocol_obj=_inf_obj_value11;
                            _inf_value11->finalize=(void*)sBorrowNode_finalize;
                            _inf_value11->clone=(void*)sBorrowNode_clone;
                            _inf_value11->compile=(void*)sBorrowNode_compile;
                            _inf_value11->sline=(void*)sBorrowNode_sline;
                            _inf_value11->sname=(void*)sBorrowNode_sname;
                            _inf_value11->terminated=(void*)sBorrowNode_terminated;
                            _inf_value11->kind=(void*)sBorrowNode_kind;
                            __result253__ = __result_obj__ = ((struct sNode*)(right_value362=_inf_value11));
                            if(node_166) { node_166 = come_decrement_ref_count2(node_166, ((struct sNode*)node_166)->finalize, ((struct sNode*)node_166)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sBorrowNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sBorrowNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value362) { right_value362 = come_decrement_ref_count2(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result253__;
                            if(node_166) { node_166 = come_decrement_ref_count2(node_166, ((struct sNode*)node_166)->finalize, ((struct sNode*)node_166)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional261=charp_operator_equals(buf,"delegate"),                            _if_conditional261) {
                                node_168=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value363=expression_v13(info))));
                                if(right_value363) { right_value363 = come_decrement_ref_count2(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1754, "struct sNode");
                                _inf_obj_value12=come_increment_ref_count(((struct sDelegateNode*)(right_value365=sDelegateNode_initialize((struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value364=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "21obj.c", 1754, "struct sDelegateNode")))),(struct sNode*)come_increment_ref_count(node_168),info))));
                                _inf_value12->_protocol_obj=_inf_obj_value12;
                                _inf_value12->finalize=(void*)sDelegateNode_finalize;
                                _inf_value12->clone=(void*)sDelegateNode_clone;
                                _inf_value12->compile=(void*)sDelegateNode_compile;
                                _inf_value12->sline=(void*)sDelegateNode_sline;
                                _inf_value12->sname=(void*)sDelegateNode_sname;
                                _inf_value12->terminated=(void*)sDelegateNode_terminated;
                                _inf_value12->kind=(void*)sDelegateNode_kind;
                                __result256__ = __result_obj__ = ((struct sNode*)(right_value369=_inf_value12));
                                if(node_168) { node_168 = come_decrement_ref_count2(node_168, ((struct sNode*)node_168)->finalize, ((struct sNode*)node_168)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sDelegateNode_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sDelegateNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value369) { right_value369 = come_decrement_ref_count2(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result256__;
                                if(node_168) { node_168 = come_decrement_ref_count2(node_168, ((struct sNode*)node_168)->finalize, ((struct sNode*)node_168)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional268=charp_operator_equals(buf,"share"),                                _if_conditional268) {
                                    node_170=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=expression_v13(info))));
                                    if(right_value370) { right_value370 = come_decrement_ref_count2(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1759, "struct sNode");
                                    _inf_obj_value13=come_increment_ref_count(((struct sShareNode*)(right_value372=sShareNode_initialize((struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value371=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "21obj.c", 1759, "struct sShareNode")))),(struct sNode*)come_increment_ref_count(node_170),info))));
                                    _inf_value13->_protocol_obj=_inf_obj_value13;
                                    _inf_value13->finalize=(void*)sShareNode_finalize;
                                    _inf_value13->clone=(void*)sShareNode_clone;
                                    _inf_value13->compile=(void*)sShareNode_compile;
                                    _inf_value13->sline=(void*)sShareNode_sline;
                                    _inf_value13->sname=(void*)sShareNode_sname;
                                    _inf_value13->terminated=(void*)sShareNode_terminated;
                                    _inf_value13->kind=(void*)sShareNode_kind;
                                    __result259__ = __result_obj__ = ((struct sNode*)(right_value376=_inf_value13));
                                    if(node_170) { node_170 = come_decrement_ref_count2(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sShareNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sShareNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result259__;
                                    if(node_170) { node_170 = come_decrement_ref_count2(node_170, ((struct sNode*)node_170)->finalize, ((struct sNode*)node_170)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional275=charp_operator_equals(buf,"clone"),                                    _if_conditional275) {
                                        node_172=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=expression_v13(info))));
                                        if(right_value377) { right_value377 = come_decrement_ref_count2(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1764, "struct sNode");
                                        _inf_obj_value14=come_increment_ref_count(((struct sCloneNode*)(right_value379=sCloneNode_initialize((struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value378=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "21obj.c", 1764, "struct sCloneNode")))),(struct sNode*)come_increment_ref_count(node_172),info))));
                                        _inf_value14->_protocol_obj=_inf_obj_value14;
                                        _inf_value14->finalize=(void*)sCloneNode_finalize;
                                        _inf_value14->clone=(void*)sCloneNode_clone;
                                        _inf_value14->compile=(void*)sCloneNode_compile;
                                        _inf_value14->sline=(void*)sCloneNode_sline;
                                        _inf_value14->sname=(void*)sCloneNode_sname;
                                        _inf_value14->terminated=(void*)sCloneNode_terminated;
                                        _inf_value14->kind=(void*)sCloneNode_kind;
                                        __result262__ = __result_obj__ = ((struct sNode*)(right_value383=_inf_value14));
                                        if(node_172) { node_172 = come_decrement_ref_count2(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sCloneNode_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sCloneNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result262__;
                                        if(node_172) { node_172 = come_decrement_ref_count2(node_172, ((struct sNode*)node_172)->finalize, ((struct sNode*)node_172)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        if(_if_conditional282=charp_operator_equals(buf,"dupe"),                                        _if_conditional282) {
                                            node_174=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=expression_v13(info))));
                                            if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1769, "struct sNode");
                                            _inf_obj_value15=come_increment_ref_count(((struct sDupeNode*)(right_value386=sDupeNode_initialize((struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value385=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "21obj.c", 1769, "struct sDupeNode")))),(struct sNode*)come_increment_ref_count(node_174),info))));
                                            _inf_value15->_protocol_obj=_inf_obj_value15;
                                            _inf_value15->finalize=(void*)sDupeNode_finalize;
                                            _inf_value15->clone=(void*)sDupeNode_clone;
                                            _inf_value15->compile=(void*)sDupeNode_compile;
                                            _inf_value15->sline=(void*)sDupeNode_sline;
                                            _inf_value15->sname=(void*)sDupeNode_sname;
                                            _inf_value15->terminated=(void*)sDupeNode_terminated;
                                            _inf_value15->kind=(void*)sDupeNode_kind;
                                            __result265__ = __result_obj__ = ((struct sNode*)(right_value390=_inf_value15));
                                            if(node_174) { node_174 = come_decrement_ref_count2(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            come_call_finalizer2(sDupeNode_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            come_call_finalizer2(sDupeNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(right_value390) { right_value390 = come_decrement_ref_count2(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            return __result265__;
                                            if(node_174) { node_174 = come_decrement_ref_count2(node_174, ((struct sNode*)node_174)->finalize, ((struct sNode*)node_174)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        else {
                                            if(_if_conditional289=charp_operator_equals(buf,"dummy_heap"),                                            _if_conditional289) {
                                                node_176=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=expression_v13(info))));
                                                if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1774, "struct sNode");
                                                _inf_obj_value16=come_increment_ref_count(((struct sDummyHeapNode*)(right_value393=sDummyHeapNode_initialize((struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value392=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "21obj.c", 1774, "struct sDummyHeapNode")))),(struct sNode*)come_increment_ref_count(node_176),info))));
                                                _inf_value16->_protocol_obj=_inf_obj_value16;
                                                _inf_value16->finalize=(void*)sDummyHeapNode_finalize;
                                                _inf_value16->clone=(void*)sDummyHeapNode_clone;
                                                _inf_value16->compile=(void*)sDummyHeapNode_compile;
                                                _inf_value16->sline=(void*)sDummyHeapNode_sline;
                                                _inf_value16->sname=(void*)sDummyHeapNode_sname;
                                                _inf_value16->terminated=(void*)sDummyHeapNode_terminated;
                                                _inf_value16->kind=(void*)sDummyHeapNode_kind;
                                                __result268__ = __result_obj__ = ((struct sNode*)(right_value397=_inf_value16));
                                                if(node_176) { node_176 = come_decrement_ref_count2(node_176, ((struct sNode*)node_176)->finalize, ((struct sNode*)node_176)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                come_call_finalizer2(sDummyHeapNode_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                come_call_finalizer2(sDummyHeapNode_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                return __result268__;
                                                if(node_176) { node_176 = come_decrement_ref_count2(node_176, ((struct sNode*)node_176)->finalize, ((struct sNode*)node_176)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            else {
                                                if(_if_conditional296=charp_operator_equals(buf,"gc_inc")&&*info->p==40,                                                _if_conditional296) {
                                                    info->p++;
                                                    skip_spaces_and_lf(info);
                                                    node_178=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=expression_v13(info))));
                                                    if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    expected_next_character(41,info);
                                                    _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1784, "struct sNode");
                                                    _inf_obj_value17=come_increment_ref_count(((struct sGCIncNode*)(right_value400=sGCIncNode_initialize((struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value399=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "21obj.c", 1784, "struct sGCIncNode")))),(struct sNode*)come_increment_ref_count(node_178),info))));
                                                    _inf_value17->_protocol_obj=_inf_obj_value17;
                                                    _inf_value17->finalize=(void*)sGCIncNode_finalize;
                                                    _inf_value17->clone=(void*)sGCIncNode_clone;
                                                    _inf_value17->compile=(void*)sGCIncNode_compile;
                                                    _inf_value17->sline=(void*)sGCIncNode_sline;
                                                    _inf_value17->sname=(void*)sGCIncNode_sname;
                                                    _inf_value17->terminated=(void*)sGCIncNode_terminated;
                                                    _inf_value17->kind=(void*)sGCIncNode_kind;
                                                    __result271__ = __result_obj__ = ((struct sNode*)(right_value404=_inf_value17));
                                                    if(node_178) { node_178 = come_decrement_ref_count2(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    come_call_finalizer2(sGCIncNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    come_call_finalizer2(sGCIncNode_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    return __result271__;
                                                    if(node_178) { node_178 = come_decrement_ref_count2(node_178, ((struct sNode*)node_178)->finalize, ((struct sNode*)node_178)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                else {
                                                    if(_if_conditional303=charp_operator_equals(buf,"gc_dec")&&*info->p==40,                                                    _if_conditional303) {
                                                        info->p++;
                                                        skip_spaces_and_lf(info);
                                                        node_180=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=expression_v13(info))));
                                                        if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        expected_next_character(41,info);
                                                        _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1794, "struct sNode");
                                                        _inf_obj_value18=come_increment_ref_count(((struct sGCDecNode*)(right_value407=sGCDecNode_initialize((struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value406=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "21obj.c", 1794, "struct sGCDecNode")))),(struct sNode*)come_increment_ref_count(node_180),info))));
                                                        _inf_value18->_protocol_obj=_inf_obj_value18;
                                                        _inf_value18->finalize=(void*)sGCDecNode_finalize;
                                                        _inf_value18->clone=(void*)sGCDecNode_clone;
                                                        _inf_value18->compile=(void*)sGCDecNode_compile;
                                                        _inf_value18->sline=(void*)sGCDecNode_sline;
                                                        _inf_value18->sname=(void*)sGCDecNode_sname;
                                                        _inf_value18->terminated=(void*)sGCDecNode_terminated;
                                                        _inf_value18->kind=(void*)sGCDecNode_kind;
                                                        __result274__ = __result_obj__ = ((struct sNode*)(right_value411=_inf_value18));
                                                        if(node_180) { node_180 = come_decrement_ref_count2(node_180, ((struct sNode*)node_180)->finalize, ((struct sNode*)node_180)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        come_call_finalizer2(sGCDecNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        come_call_finalizer2(sGCDecNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        return __result274__;
                                                        if(node_180) { node_180 = come_decrement_ref_count2(node_180, ((struct sNode*)node_180)->finalize, ((struct sNode*)node_180)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    else {
                                                        if(_if_conditional310=charp_operator_equals(buf,"isheap")&&*info->p==40,                                                        _if_conditional310) {
                                                            info->p++;
                                                            skip_spaces_and_lf(info);
                                                            multiple_assign_var5=((struct tuple3$3sTypephcharphbool*)(right_value412=parse_type(info,(_Bool)0,(_Bool)1)));
                                                            param_type_182=(struct sType*)come_increment_ref_count(multiple_assign_var5->v1);
                                                            param_name_183=(char*)come_increment_ref_count(multiple_assign_var5->v2);
                                                            err_184=multiple_assign_var5->v3;
                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional311=!err_184,                                                            _if_conditional311) {
                                                                err_msg(info,"parse_type failed");
                                                                exit(2);
                                                            }
                                                            type2_185=(struct sType*)come_increment_ref_count(((struct sType*)(right_value413=solve_generics(param_type_182,info->generics_type,info))));
                                                            come_call_finalizer2(sType_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            expected_next_character(41,info);
                                                            _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1810, "struct sNode");
                                                            _inf_obj_value19=come_increment_ref_count(((struct sIsHeap*)(right_value415=sIsHeap_initialize((struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value414=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "21obj.c", 1810, "struct sIsHeap")))),(struct sType*)come_increment_ref_count(type2_185),info))));
                                                            _inf_value19->_protocol_obj=_inf_obj_value19;
                                                            _inf_value19->finalize=(void*)sIsHeap_finalize;
                                                            _inf_value19->clone=(void*)sIsHeap_clone;
                                                            _inf_value19->compile=(void*)sIsHeap_compile;
                                                            _inf_value19->sline=(void*)sIsHeap_sline;
                                                            _inf_value19->sname=(void*)sIsHeap_sname;
                                                            _inf_value19->terminated=(void*)sIsHeap_terminated;
                                                            _inf_value19->kind=(void*)sIsHeap_kind;
                                                            __result277__ = __result_obj__ = ((struct sNode*)(right_value419=_inf_value19));
                                                            come_call_finalizer2(sType_finalize,param_type_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            param_name_183 = come_decrement_ref_count2(param_name_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,type2_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sIsHeap_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            come_call_finalizer2(sIsHeap_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(right_value419) { right_value419 = come_decrement_ref_count2(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            return __result277__;
                                                            come_call_finalizer2(sType_finalize,param_type_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                            param_name_183 = come_decrement_ref_count2(param_name_183, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            come_call_finalizer2(sType_finalize,type2_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                        }
                                                        else {
                                                            if(_if_conditional318=charp_operator_equals(buf,"using"),                                                            _if_conditional318) {
                                                                if(_if_conditional319=strmemcmp(info->p,"comelang"),                                                                _if_conditional319) {
                                                                    info->p+=strlen("comelang");
                                                                    skip_spaces_and_lf(info);
                                                                    gComeC=(_Bool)0;
                                                                    _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1819, "struct sNode");
                                                                    _inf_obj_value20=come_increment_ref_count(((struct sNullNodeX*)(right_value421=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value420=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1819, "struct sNullNodeX")))),info))));
                                                                    _inf_value20->_protocol_obj=_inf_obj_value20;
                                                                    _inf_value20->finalize=(void*)sNullNodeX_finalize;
                                                                    _inf_value20->clone=(void*)sNullNodeX_clone;
                                                                    _inf_value20->compile=(void*)sNullNodeX_compile;
                                                                    _inf_value20->sline=(void*)sNullNodeX_sline;
                                                                    _inf_value20->sname=(void*)sNullNodeX_sname;
                                                                    _inf_value20->terminated=(void*)sNullNodeX_terminated;
                                                                    _inf_value20->kind=(void*)sNullNodeX_kind;
                                                                    __result280__ = __result_obj__ = ((struct sNode*)(right_value424=_inf_value20));
                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                    if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                    return __result280__;
                                                                }
                                                                else {
                                                                    if(_if_conditional324=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),                                                                    _if_conditional324) {
                                                                        info->p+=strlen("c");
                                                                        skip_spaces_and_lf(info);
                                                                        gComeC=(_Bool)1;
                                                                        if(_if_conditional325=*info->p==123,                                                                        _if_conditional325) {
                                                                            node_188=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value425=parse_normal_block(info))));
                                                                            if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            gComeC=(_Bool)0;
                                                                            __result281__ = __result_obj__ = node_188;
                                                                            if(node_188) { node_188 = come_decrement_ref_count2(node_188, ((struct sNode*)node_188)->finalize, ((struct sNode*)node_188)->_protocol_obj, 0, 1, 0, (void*)0); } 
                                                                            return __result281__;
                                                                            if(node_188) { node_188 = come_decrement_ref_count2(node_188, ((struct sNode*)node_188)->finalize, ((struct sNode*)node_188)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                        else {
                                                                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1835, "struct sNode");
                                                                            _inf_obj_value21=come_increment_ref_count(((struct sNullNodeX*)(right_value427=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value426=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1835, "struct sNullNodeX")))),info))));
                                                                            _inf_value21->_protocol_obj=_inf_obj_value21;
                                                                            _inf_value21->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value21->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value21->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value21->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value21->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value21->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value21->kind=(void*)sNullNodeX_kind;
                                                                            __result284__ = __result_obj__ = ((struct sNode*)(right_value430=_inf_value21));
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result284__;
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional330=strmemcmp(info->p,"gc"),                                                                        _if_conditional330) {
                                                                            info->p+=strlen("gc");
                                                                            skip_spaces_and_lf(info);
                                                                            _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1842, "struct sNode");
                                                                            _inf_obj_value22=come_increment_ref_count(((struct sNullNodeX*)(right_value432=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value431=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1842, "struct sNullNodeX")))),info))));
                                                                            _inf_value22->_protocol_obj=_inf_obj_value22;
                                                                            _inf_value22->finalize=(void*)sNullNodeX_finalize;
                                                                            _inf_value22->clone=(void*)sNullNodeX_clone;
                                                                            _inf_value22->compile=(void*)sNullNodeX_compile;
                                                                            _inf_value22->sline=(void*)sNullNodeX_sline;
                                                                            _inf_value22->sname=(void*)sNullNodeX_sname;
                                                                            _inf_value22->terminated=(void*)sNullNodeX_terminated;
                                                                            _inf_value22->kind=(void*)sNullNodeX_kind;
                                                                            __result287__ = __result_obj__ = ((struct sNode*)(right_value435=_inf_value22));
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sNullNodeX_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result287__;
                                                                        }
                                                                        else {
                                                                            if(_if_conditional335=strmemcmp(info->p,"no-gc"),                                                                            _if_conditional335) {
                                                                                info->p+=strlen("no-gc");
                                                                                skip_spaces_and_lf(info);
                                                                                _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1849, "struct sNode");
                                                                                _inf_obj_value23=come_increment_ref_count(((struct sNullNodeX*)(right_value437=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value436=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1849, "struct sNullNodeX")))),info))));
                                                                                _inf_value23->_protocol_obj=_inf_obj_value23;
                                                                                _inf_value23->finalize=(void*)sNullNodeX_finalize;
                                                                                _inf_value23->clone=(void*)sNullNodeX_clone;
                                                                                _inf_value23->compile=(void*)sNullNodeX_compile;
                                                                                _inf_value23->sline=(void*)sNullNodeX_sline;
                                                                                _inf_value23->sname=(void*)sNullNodeX_sname;
                                                                                _inf_value23->terminated=(void*)sNullNodeX_terminated;
                                                                                _inf_value23->kind=(void*)sNullNodeX_kind;
                                                                                __result290__ = __result_obj__ = ((struct sNode*)(right_value440=_inf_value23));
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                come_call_finalizer2(sNullNodeX_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                return __result290__;
                                                                            }
                                                                            else {
                                                                                if(_if_conditional340=strmemcmp(info->p,"unsafe"),                                                                                _if_conditional340) {
                                                                                    info->p+=strlen("unsafe");
                                                                                    skip_spaces_and_lf(info);
                                                                                    _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1855, "struct sNode");
                                                                                    _inf_obj_value24=come_increment_ref_count(((struct sNullNodeX*)(right_value442=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value441=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1855, "struct sNullNodeX")))),info))));
                                                                                    _inf_value24->_protocol_obj=_inf_obj_value24;
                                                                                    _inf_value24->finalize=(void*)sNullNodeX_finalize;
                                                                                    _inf_value24->clone=(void*)sNullNodeX_clone;
                                                                                    _inf_value24->compile=(void*)sNullNodeX_compile;
                                                                                    _inf_value24->sline=(void*)sNullNodeX_sline;
                                                                                    _inf_value24->sname=(void*)sNullNodeX_sname;
                                                                                    _inf_value24->terminated=(void*)sNullNodeX_terminated;
                                                                                    _inf_value24->kind=(void*)sNullNodeX_kind;
                                                                                    __result293__ = __result_obj__ = ((struct sNode*)(right_value445=_inf_value24));
                                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sNullNodeX_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result293__;
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional345=strmemcmp(info->p,"no-null-check"),                                                                                    _if_conditional345) {
                                                                                        info->p+=strlen("no-null-check");
                                                                                        skip_spaces_and_lf(info);
                                                                                        _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1861, "struct sNode");
                                                                                        _inf_obj_value25=come_increment_ref_count(((struct sNullNodeX*)(right_value447=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value446=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 1861, "struct sNullNodeX")))),info))));
                                                                                        _inf_value25->_protocol_obj=_inf_obj_value25;
                                                                                        _inf_value25->finalize=(void*)sNullNodeX_finalize;
                                                                                        _inf_value25->clone=(void*)sNullNodeX_clone;
                                                                                        _inf_value25->compile=(void*)sNullNodeX_compile;
                                                                                        _inf_value25->sline=(void*)sNullNodeX_sline;
                                                                                        _inf_value25->sname=(void*)sNullNodeX_sname;
                                                                                        _inf_value25->terminated=(void*)sNullNodeX_terminated;
                                                                                        _inf_value25->kind=(void*)sNullNodeX_kind;
                                                                                        __result296__ = __result_obj__ = ((struct sNode*)(right_value450=_inf_value25));
                                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sNullNodeX_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value450) { right_value450 = come_decrement_ref_count2(right_value450, ((struct sNode*)right_value450)->finalize, ((struct sNode*)right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result296__;
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
                                                                if(_if_conditional350=charp_operator_equals(buf,"sizeof"),                                                                _if_conditional350) {
                                                                    expected_next_character(40,info);
                                                                    is_type_name_flag_194=(_Bool)0;
                                                                    {
                                                                        p_195=info->p;
                                                                        sline_196=info->sline;
                                                                        if(_if_conditional351=xisalpha(*info->p)||*info->p==95,                                                                        _if_conditional351) {
                                                                            word_197=(char*)come_increment_ref_count(((char*)(right_value451=parse_word(info))));
                                                                            right_value451 = come_decrement_ref_count2(right_value451, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional352=is_type_name(word_197,info),                                                                            _if_conditional352) {
                                                                                is_type_name_flag_194=(_Bool)1;
                                                                            }
                                                                            word_197 = come_decrement_ref_count2(word_197, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        info->p=p_195;
                                                                        info->sline=sline_196;
                                                                    }
                                                                    if(is_type_name_flag_194) {
                                                                        multiple_assign_var6=((struct tuple3$3sTypephcharphbool*)(right_value452=parse_type(info,(_Bool)0,(_Bool)1)));
                                                                        type_198=(struct sType*)come_increment_ref_count(multiple_assign_var6->v1);
                                                                        name_199=(char*)come_increment_ref_count(multiple_assign_var6->v2);
                                                                        err_200=multiple_assign_var6->v3;
                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(_if_conditional354=!err_200,                                                                        _if_conditional354) {
                                                                            err_msg(info,"parse type");
                                                                            exit(2);
                                                                        }
                                                                        expected_next_character(41,info);
                                                                        _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1898, "struct sNode");
                                                                        _inf_obj_value26=come_increment_ref_count(((struct sSizeOfNode*)(right_value454=sSizeOfNode_initialize((struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value453=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "21obj.c", 1898, "struct sSizeOfNode")))),(struct sType*)come_increment_ref_count(type_198),info))));
                                                                        _inf_value26->_protocol_obj=_inf_obj_value26;
                                                                        _inf_value26->finalize=(void*)sSizeOfNode_finalize;
                                                                        _inf_value26->clone=(void*)sSizeOfNode_clone;
                                                                        _inf_value26->compile=(void*)sSizeOfNode_compile;
                                                                        _inf_value26->sline=(void*)sSizeOfNode_sline;
                                                                        _inf_value26->sname=(void*)sSizeOfNode_sname;
                                                                        _inf_value26->terminated=(void*)sSizeOfNode_terminated;
                                                                        _inf_value26->kind=(void*)sSizeOfNode_kind;
                                                                        __result299__ = __result_obj__ = ((struct sNode*)(right_value458=_inf_value26));
                                                                        come_call_finalizer2(sType_finalize,type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        name_199 = come_decrement_ref_count2(name_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        come_call_finalizer2(sSizeOfNode_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sSizeOfNode_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value458) { right_value458 = come_decrement_ref_count2(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result299__;
                                                                        come_call_finalizer2(sType_finalize,type_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                        name_199 = come_decrement_ref_count2(name_199, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                    }
                                                                    else {
                                                                        exp_202=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value459=expression_v13(info))));
                                                                        if(right_value459) { right_value459 = come_decrement_ref_count2(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        expected_next_character(41,info);
                                                                        _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1905, "struct sNode");
                                                                        _inf_obj_value27=come_increment_ref_count(((struct sSizeOfExpNode*)(right_value461=sSizeOfExpNode_initialize((struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value460=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "21obj.c", 1905, "struct sSizeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_202),info))));
                                                                        _inf_value27->_protocol_obj=_inf_obj_value27;
                                                                        _inf_value27->finalize=(void*)sSizeOfExpNode_finalize;
                                                                        _inf_value27->clone=(void*)sSizeOfExpNode_clone;
                                                                        _inf_value27->compile=(void*)sSizeOfExpNode_compile;
                                                                        _inf_value27->sline=(void*)sSizeOfExpNode_sline;
                                                                        _inf_value27->sname=(void*)sSizeOfExpNode_sname;
                                                                        _inf_value27->terminated=(void*)sSizeOfExpNode_terminated;
                                                                        _inf_value27->kind=(void*)sSizeOfExpNode_kind;
                                                                        __result302__ = __result_obj__ = ((struct sNode*)(right_value465=_inf_value27));
                                                                        if(exp_202) { exp_202 = come_decrement_ref_count2(exp_202, ((struct sNode*)exp_202)->finalize, ((struct sNode*)exp_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        come_call_finalizer2(sSizeOfExpNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        come_call_finalizer2(sSizeOfExpNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                        if(right_value465) { right_value465 = come_decrement_ref_count2(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                        return __result302__;
                                                                        if(exp_202) { exp_202 = come_decrement_ref_count2(exp_202, ((struct sNode*)exp_202)->finalize, ((struct sNode*)exp_202)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                    }
                                                                }
                                                                else {
                                                                    if(_if_conditional367=charp_operator_equals(buf,"typeof"),                                                                    _if_conditional367) {
                                                                        expected_next_character(40,info);
                                                                        is_type_name_flag_204=(_Bool)0;
                                                                        {
                                                                            p_205=info->p;
                                                                            sline_206=info->sline;
                                                                            if(_if_conditional368=xisalpha(*info->p)||*info->p==95,                                                                            _if_conditional368) {
                                                                                word_207=(char*)come_increment_ref_count(((char*)(right_value466=parse_word(info))));
                                                                                right_value466 = come_decrement_ref_count2(right_value466, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional369=is_type_name(word_207,info),                                                                                _if_conditional369) {
                                                                                    is_type_name_flag_204=(_Bool)1;
                                                                                }
                                                                                word_207 = come_decrement_ref_count2(word_207, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            info->p=p_205;
                                                                            info->sline=sline_206;
                                                                        }
                                                                        if(is_type_name_flag_204) {
                                                                            multiple_assign_var7=((struct tuple3$3sTypephcharphbool*)(right_value467=parse_type(info,(_Bool)0,(_Bool)1)));
                                                                            type_208=(struct sType*)come_increment_ref_count(multiple_assign_var7->v1);
                                                                            name_209=(char*)come_increment_ref_count(multiple_assign_var7->v2);
                                                                            err_210=multiple_assign_var7->v3;
                                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional371=!err_210,                                                                            _if_conditional371) {
                                                                                err_msg(info,"parse type");
                                                                                exit(2);
                                                                            }
                                                                            expected_next_character(41,info);
                                                                            _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1938, "struct sNode");
                                                                            _inf_obj_value28=come_increment_ref_count(((struct sTypeOfNode*)(right_value469=sTypeOfNode_initialize((struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value468=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "21obj.c", 1938, "struct sTypeOfNode")))),(struct sType*)come_increment_ref_count(type_208),info))));
                                                                            _inf_value28->_protocol_obj=_inf_obj_value28;
                                                                            _inf_value28->finalize=(void*)sTypeOfNode_finalize;
                                                                            _inf_value28->clone=(void*)sTypeOfNode_clone;
                                                                            _inf_value28->compile=(void*)sTypeOfNode_compile;
                                                                            _inf_value28->sline=(void*)sTypeOfNode_sline;
                                                                            _inf_value28->sname=(void*)sTypeOfNode_sname;
                                                                            _inf_value28->terminated=(void*)sTypeOfNode_terminated;
                                                                            _inf_value28->kind=(void*)sTypeOfNode_kind;
                                                                            __result305__ = __result_obj__ = ((struct sNode*)(right_value473=_inf_value28));
                                                                            come_call_finalizer2(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            come_call_finalizer2(sTypeOfNode_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sTypeOfNode_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value473) { right_value473 = come_decrement_ref_count2(right_value473, ((struct sNode*)right_value473)->finalize, ((struct sNode*)right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result305__;
                                                                            come_call_finalizer2(sType_finalize,type_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            name_209 = come_decrement_ref_count2(name_209, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                        }
                                                                        else {
                                                                            exp_212=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value474=expression_v13(info))));
                                                                            if(right_value474) { right_value474 = come_decrement_ref_count2(right_value474, ((struct sNode*)right_value474)->finalize, ((struct sNode*)right_value474)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            expected_next_character(41,info);
                                                                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1945, "struct sNode");
                                                                            _inf_obj_value29=come_increment_ref_count(((struct sTypeOfExpNode*)(right_value476=sTypeOfExpNode_initialize((struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value475=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "21obj.c", 1945, "struct sTypeOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_212),info))));
                                                                            _inf_value29->_protocol_obj=_inf_obj_value29;
                                                                            _inf_value29->finalize=(void*)sTypeOfExpNode_finalize;
                                                                            _inf_value29->clone=(void*)sTypeOfExpNode_clone;
                                                                            _inf_value29->compile=(void*)sTypeOfExpNode_compile;
                                                                            _inf_value29->sline=(void*)sTypeOfExpNode_sline;
                                                                            _inf_value29->sname=(void*)sTypeOfExpNode_sname;
                                                                            _inf_value29->terminated=(void*)sTypeOfExpNode_terminated;
                                                                            _inf_value29->kind=(void*)sTypeOfExpNode_kind;
                                                                            __result308__ = __result_obj__ = ((struct sNode*)(right_value480=_inf_value29));
                                                                            if(exp_212) { exp_212 = come_decrement_ref_count2(exp_212, ((struct sNode*)exp_212)->finalize, ((struct sNode*)exp_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            come_call_finalizer2(sTypeOfExpNode_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sTypeOfExpNode_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value480) { right_value480 = come_decrement_ref_count2(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result308__;
                                                                            if(exp_212) { exp_212 = come_decrement_ref_count2(exp_212, ((struct sNode*)exp_212)->finalize, ((struct sNode*)exp_212)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                    }
                                                                    else {
                                                                        if(_if_conditional384=charp_operator_equals(buf,"dynamic_typeof"),                                                                        _if_conditional384) {
                                                                            expected_next_character(40,info);
                                                                            exp_214=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value481=expression_v13(info))));
                                                                            if(right_value481) { right_value481 = come_decrement_ref_count2(right_value481, ((struct sNode*)right_value481)->finalize, ((struct sNode*)right_value481)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            expected_next_character(41,info);
                                                                            _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1955, "struct sNode");
                                                                            _inf_obj_value30=come_increment_ref_count(((struct sDynamicTypeOfNode*)(right_value483=sDynamicTypeOfNode_initialize((struct sDynamicTypeOfNode*)come_increment_ref_count(((struct sDynamicTypeOfNode*)(right_value482=(struct sDynamicTypeOfNode*)come_calloc(1, sizeof(struct sDynamicTypeOfNode)*(1), "21obj.c", 1955, "struct sDynamicTypeOfNode")))),(struct sNode*)come_increment_ref_count(exp_214),info))));
                                                                            _inf_value30->_protocol_obj=_inf_obj_value30;
                                                                            _inf_value30->finalize=(void*)sDynamicTypeOfNode_finalize;
                                                                            _inf_value30->clone=(void*)sDynamicTypeOfNode_clone;
                                                                            _inf_value30->compile=(void*)sDynamicTypeOfNode_compile;
                                                                            _inf_value30->sline=(void*)sDynamicTypeOfNode_sline;
                                                                            _inf_value30->sname=(void*)sDynamicTypeOfNode_sname;
                                                                            _inf_value30->terminated=(void*)sDynamicTypeOfNode_terminated;
                                                                            _inf_value30->kind=(void*)sDynamicTypeOfNode_kind;
                                                                            __result311__ = __result_obj__ = ((struct sNode*)(right_value487=_inf_value30));
                                                                            if(exp_214) { exp_214 = come_decrement_ref_count2(exp_214, ((struct sNode*)exp_214)->finalize, ((struct sNode*)exp_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            come_call_finalizer2(sDynamicTypeOfNode_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            come_call_finalizer2(sDynamicTypeOfNode_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(right_value487) { right_value487 = come_decrement_ref_count2(right_value487, ((struct sNode*)right_value487)->finalize, ((struct sNode*)right_value487)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            return __result311__;
                                                                            if(exp_214) { exp_214 = come_decrement_ref_count2(exp_214, ((struct sNode*)exp_214)->finalize, ((struct sNode*)exp_214)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                        }
                                                                        else {
                                                                            if(_if_conditional391=charp_operator_equals(buf,"_Alignof"),                                                                            _if_conditional391) {
                                                                                expected_next_character(40,info);
                                                                                is_type_name_flag_216=(_Bool)0;
                                                                                {
                                                                                    p_217=info->p;
                                                                                    sline_218=info->sline;
                                                                                    if(_if_conditional392=xisalpha(*info->p)||*info->p==95,                                                                                    _if_conditional392) {
                                                                                        word_219=(char*)come_increment_ref_count(((char*)(right_value488=parse_word(info))));
                                                                                        right_value488 = come_decrement_ref_count2(right_value488, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional393=is_type_name(word_219,info),                                                                                        _if_conditional393) {
                                                                                            is_type_name_flag_216=(_Bool)1;
                                                                                        }
                                                                                        word_219 = come_decrement_ref_count2(word_219, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    info->p=p_217;
                                                                                    info->sline=sline_218;
                                                                                }
                                                                                if(is_type_name_flag_216) {
                                                                                    multiple_assign_var8=((struct tuple3$3sTypephcharphbool*)(right_value489=parse_type(info,(_Bool)0,(_Bool)1)));
                                                                                    type_220=(struct sType*)come_increment_ref_count(multiple_assign_var8->v1);
                                                                                    name_221=(char*)come_increment_ref_count(multiple_assign_var8->v2);
                                                                                    err_222=multiple_assign_var8->v3;
                                                                                    come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(_if_conditional395=!err_222,                                                                                    _if_conditional395) {
                                                                                        err_msg(info,"parse type");
                                                                                        exit(2);
                                                                                    }
                                                                                    expected_next_character(41,info);
                                                                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1987, "struct sNode");
                                                                                    _inf_obj_value31=come_increment_ref_count(((struct sAlignOfNode*)(right_value491=sAlignOfNode_initialize((struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value490=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "21obj.c", 1987, "struct sAlignOfNode")))),(struct sType*)come_increment_ref_count(type_220),info))));
                                                                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                                                                    _inf_value31->finalize=(void*)sAlignOfNode_finalize;
                                                                                    _inf_value31->clone=(void*)sAlignOfNode_clone;
                                                                                    _inf_value31->compile=(void*)sAlignOfNode_compile;
                                                                                    _inf_value31->sline=(void*)sAlignOfNode_sline;
                                                                                    _inf_value31->sname=(void*)sAlignOfNode_sname;
                                                                                    _inf_value31->terminated=(void*)sAlignOfNode_terminated;
                                                                                    _inf_value31->kind=(void*)sAlignOfNode_kind;
                                                                                    __result314__ = __result_obj__ = ((struct sNode*)(right_value495=_inf_value31));
                                                                                    come_call_finalizer2(sType_finalize,type_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    name_221 = come_decrement_ref_count2(name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer2(sAlignOfNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sAlignOfNode_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value495) { right_value495 = come_decrement_ref_count2(right_value495, ((struct sNode*)right_value495)->finalize, ((struct sNode*)right_value495)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result314__;
                                                                                    come_call_finalizer2(sType_finalize,type_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    name_221 = come_decrement_ref_count2(name_221, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                else {
                                                                                    exp_224=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value496=expression_v13(info))));
                                                                                    if(right_value496) { right_value496 = come_decrement_ref_count2(right_value496, ((struct sNode*)right_value496)->finalize, ((struct sNode*)right_value496)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    expected_next_character(41,info);
                                                                                    _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 1994, "struct sNode");
                                                                                    _inf_obj_value32=come_increment_ref_count(((struct sAlignOfExpNode*)(right_value498=sAlignOfExpNode_initialize((struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value497=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "21obj.c", 1994, "struct sAlignOfExpNode")))),(struct sNode*)come_increment_ref_count(exp_224),info))));
                                                                                    _inf_value32->_protocol_obj=_inf_obj_value32;
                                                                                    _inf_value32->finalize=(void*)sAlignOfExpNode_finalize;
                                                                                    _inf_value32->clone=(void*)sAlignOfExpNode_clone;
                                                                                    _inf_value32->compile=(void*)sAlignOfExpNode_compile;
                                                                                    _inf_value32->sline=(void*)sAlignOfExpNode_sline;
                                                                                    _inf_value32->sname=(void*)sAlignOfExpNode_sname;
                                                                                    _inf_value32->terminated=(void*)sAlignOfExpNode_terminated;
                                                                                    _inf_value32->kind=(void*)sAlignOfExpNode_kind;
                                                                                    __result317__ = __result_obj__ = ((struct sNode*)(right_value502=_inf_value32));
                                                                                    if(exp_224) { exp_224 = come_decrement_ref_count2(exp_224, ((struct sNode*)exp_224)->finalize, ((struct sNode*)exp_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    come_call_finalizer2(sAlignOfExpNode_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    come_call_finalizer2(sAlignOfExpNode_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                    if(right_value502) { right_value502 = come_decrement_ref_count2(right_value502, ((struct sNode*)right_value502)->finalize, ((struct sNode*)right_value502)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                    return __result317__;
                                                                                    if(exp_224) { exp_224 = come_decrement_ref_count2(exp_224, ((struct sNode*)exp_224)->finalize, ((struct sNode*)exp_224)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                            }
                                                                            else {
                                                                                if(_if_conditional408=charp_operator_equals(buf,"__alignof__"),                                                                                _if_conditional408) {
                                                                                    expected_next_character(40,info);
                                                                                    is_type_name_flag_226=(_Bool)0;
                                                                                    {
                                                                                        p_227=info->p;
                                                                                        sline_228=info->sline;
                                                                                        if(_if_conditional409=xisalpha(*info->p)||*info->p==95,                                                                                        _if_conditional409) {
                                                                                            word_229=(char*)come_increment_ref_count(((char*)(right_value503=parse_word(info))));
                                                                                            right_value503 = come_decrement_ref_count2(right_value503, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional410=is_type_name(word_229,info),                                                                                            _if_conditional410) {
                                                                                                is_type_name_flag_226=(_Bool)1;
                                                                                            }
                                                                                            word_229 = come_decrement_ref_count2(word_229, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        info->p=p_227;
                                                                                        info->sline=sline_228;
                                                                                    }
                                                                                    if(is_type_name_flag_226) {
                                                                                        multiple_assign_var9=((struct tuple3$3sTypephcharphbool*)(right_value504=parse_type(info,(_Bool)0,(_Bool)1)));
                                                                                        type_230=(struct sType*)come_increment_ref_count(multiple_assign_var9->v1);
                                                                                        name_231=(char*)come_increment_ref_count(multiple_assign_var9->v2);
                                                                                        err_232=multiple_assign_var9->v3;
                                                                                        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional412=!err_232,                                                                                        _if_conditional412) {
                                                                                            err_msg(info,"parse type");
                                                                                            exit(2);
                                                                                        }
                                                                                        expected_next_character(41,info);
                                                                                        _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2027, "struct sNode");
                                                                                        _inf_obj_value33=come_increment_ref_count(((struct sAlignOfNode2*)(right_value506=sAlignOfNode2_initialize((struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value505=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "21obj.c", 2027, "struct sAlignOfNode2")))),(struct sType*)come_increment_ref_count(type_230),info))));
                                                                                        _inf_value33->_protocol_obj=_inf_obj_value33;
                                                                                        _inf_value33->finalize=(void*)sAlignOfNode2_finalize;
                                                                                        _inf_value33->clone=(void*)sAlignOfNode2_clone;
                                                                                        _inf_value33->compile=(void*)sAlignOfNode2_compile;
                                                                                        _inf_value33->sline=(void*)sAlignOfNode2_sline;
                                                                                        _inf_value33->sname=(void*)sAlignOfNode2_sname;
                                                                                        _inf_value33->terminated=(void*)sAlignOfNode2_terminated;
                                                                                        _inf_value33->kind=(void*)sAlignOfNode2_kind;
                                                                                        __result320__ = __result_obj__ = ((struct sNode*)(right_value510=_inf_value33));
                                                                                        come_call_finalizer2(sType_finalize,type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_231 = come_decrement_ref_count2(name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        come_call_finalizer2(sAlignOfNode2_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sAlignOfNode2_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value510) { right_value510 = come_decrement_ref_count2(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result320__;
                                                                                        come_call_finalizer2(sType_finalize,type_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        name_231 = come_decrement_ref_count2(name_231, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                    }
                                                                                    else {
                                                                                        exp_234=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=expression_v13(info))));
                                                                                        if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        expected_next_character(41,info);
                                                                                        _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2034, "struct sNode");
                                                                                        _inf_obj_value34=come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value513=sAlignOfExpNode2_initialize((struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value512=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "21obj.c", 2034, "struct sAlignOfExpNode2")))),(struct sNode*)come_increment_ref_count(exp_234),info))));
                                                                                        _inf_value34->_protocol_obj=_inf_obj_value34;
                                                                                        _inf_value34->finalize=(void*)sAlignOfExpNode2_finalize;
                                                                                        _inf_value34->clone=(void*)sAlignOfExpNode2_clone;
                                                                                        _inf_value34->compile=(void*)sAlignOfExpNode2_compile;
                                                                                        _inf_value34->sline=(void*)sAlignOfExpNode2_sline;
                                                                                        _inf_value34->sname=(void*)sAlignOfExpNode2_sname;
                                                                                        _inf_value34->terminated=(void*)sAlignOfExpNode2_terminated;
                                                                                        _inf_value34->kind=(void*)sAlignOfExpNode2_kind;
                                                                                        __result323__ = __result_obj__ = ((struct sNode*)(right_value517=_inf_value34));
                                                                                        if(exp_234) { exp_234 = come_decrement_ref_count2(exp_234, ((struct sNode*)exp_234)->finalize, ((struct sNode*)exp_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        come_call_finalizer2(sAlignOfExpNode2_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        come_call_finalizer2(sAlignOfExpNode2_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(right_value517) { right_value517 = come_decrement_ref_count2(right_value517, ((struct sNode*)right_value517)->finalize, ((struct sNode*)right_value517)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        return __result323__;
                                                                                        if(exp_234) { exp_234 = come_decrement_ref_count2(exp_234, ((struct sNode*)exp_234)->finalize, ((struct sNode*)exp_234)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                    }
                                                                                }
                                                                                else {
                                                                                    if(_if_conditional425=charp_operator_equals(buf,"_Alignas"),                                                                                    _if_conditional425) {
                                                                                        expected_next_character(40,info);
                                                                                        is_type_name_flag_236=(_Bool)0;
                                                                                        {
                                                                                            p_237=info->p;
                                                                                            sline_238=info->sline;
                                                                                            if(_if_conditional426=xisalpha(*info->p)||*info->p==95,                                                                                            _if_conditional426) {
                                                                                                word_239=(char*)come_increment_ref_count(((char*)(right_value518=parse_word(info))));
                                                                                                right_value518 = come_decrement_ref_count2(right_value518, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional427=is_type_name(word_239,info),                                                                                                _if_conditional427) {
                                                                                                    is_type_name_flag_236=(_Bool)1;
                                                                                                }
                                                                                                word_239 = come_decrement_ref_count2(word_239, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            info->p=p_237;
                                                                                            info->sline=sline_238;
                                                                                        }
                                                                                        if(is_type_name_flag_236) {
                                                                                            multiple_assign_var10=((struct tuple3$3sTypephcharphbool*)(right_value519=parse_type(info,(_Bool)0,(_Bool)1)));
                                                                                            type_240=(struct sType*)come_increment_ref_count(multiple_assign_var10->v1);
                                                                                            name_241=(char*)come_increment_ref_count(multiple_assign_var10->v2);
                                                                                            err_242=multiple_assign_var10->v3;
                                                                                            come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional429=!err_242,                                                                                            _if_conditional429) {
                                                                                                err_msg(info,"parse type");
                                                                                                exit(2);
                                                                                            }
                                                                                            expected_next_character(41,info);
                                                                                            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2067, "struct sNode");
                                                                                            _inf_obj_value35=come_increment_ref_count(((struct sAlignAsNode*)(right_value521=sAlignAsNode_initialize((struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value520=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "21obj.c", 2067, "struct sAlignAsNode")))),(struct sType*)come_increment_ref_count(type_240),info))));
                                                                                            _inf_value35->_protocol_obj=_inf_obj_value35;
                                                                                            _inf_value35->finalize=(void*)sAlignAsNode_finalize;
                                                                                            _inf_value35->clone=(void*)sAlignAsNode_clone;
                                                                                            _inf_value35->compile=(void*)sAlignAsNode_compile;
                                                                                            _inf_value35->sline=(void*)sAlignAsNode_sline;
                                                                                            _inf_value35->sname=(void*)sAlignAsNode_sname;
                                                                                            _inf_value35->terminated=(void*)sAlignAsNode_terminated;
                                                                                            _inf_value35->kind=(void*)sAlignAsNode_kind;
                                                                                            __result326__ = __result_obj__ = ((struct sNode*)(right_value525=_inf_value35));
                                                                                            come_call_finalizer2(sType_finalize,type_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            name_241 = come_decrement_ref_count2(name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sAlignAsNode_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sAlignAsNode_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value525) { right_value525 = come_decrement_ref_count2(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result326__;
                                                                                            come_call_finalizer2(sType_finalize,type_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            name_241 = come_decrement_ref_count2(name_241, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        else {
                                                                                            exp_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value526=expression_v13(info))));
                                                                                            if(right_value526) { right_value526 = come_decrement_ref_count2(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            expected_next_character(41,info);
                                                                                            _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2074, "struct sNode");
                                                                                            _inf_obj_value36=come_increment_ref_count(((struct sAlignAsExpNode*)(right_value528=sAlignAsExpNode_initialize((struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value527=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "21obj.c", 2074, "struct sAlignAsExpNode")))),(struct sNode*)come_increment_ref_count(exp_244),info))));
                                                                                            _inf_value36->_protocol_obj=_inf_obj_value36;
                                                                                            _inf_value36->finalize=(void*)sAlignAsExpNode_finalize;
                                                                                            _inf_value36->clone=(void*)sAlignAsExpNode_clone;
                                                                                            _inf_value36->compile=(void*)sAlignAsExpNode_compile;
                                                                                            _inf_value36->sline=(void*)sAlignAsExpNode_sline;
                                                                                            _inf_value36->sname=(void*)sAlignAsExpNode_sname;
                                                                                            _inf_value36->terminated=(void*)sAlignAsExpNode_terminated;
                                                                                            _inf_value36->kind=(void*)sAlignAsExpNode_kind;
                                                                                            __result329__ = __result_obj__ = ((struct sNode*)(right_value532=_inf_value36));
                                                                                            if(exp_244) { exp_244 = come_decrement_ref_count2(exp_244, ((struct sNode*)exp_244)->finalize, ((struct sNode*)exp_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            come_call_finalizer2(sAlignAsExpNode_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            come_call_finalizer2(sAlignAsExpNode_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(right_value532) { right_value532 = come_decrement_ref_count2(right_value532, ((struct sNode*)right_value532)->finalize, ((struct sNode*)right_value532)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            return __result329__;
                                                                                            if(exp_244) { exp_244 = come_decrement_ref_count2(exp_244, ((struct sNode*)exp_244)->finalize, ((struct sNode*)exp_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
        }
    }
    __result330__ = __result_obj__ = ((struct sNode*)(right_value533=string_node_v20(buf,head,head_sline,info)));
    if(right_value533) { right_value533 = come_decrement_ref_count2(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result330__;
}

static void tuple3$3sTypephcharphboolp_finalize(struct tuple3$3sTypephcharphbool* self){
void* __result_obj__;
_Bool _if_conditional205;
_Bool _if_conditional206;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional205=self!=((void*)0)&&self->v1!=((void*)0),            _if_conditional205) {
                come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional206=self!=((void*)0)&&self->v2!=((void*)0),            _if_conditional206) {
                self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void sNewNode_finalize(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional224;
_Bool _if_conditional225;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional224=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional224) {
                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                }
                if(_if_conditional225=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional225) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNewNode* sNewNode_clone(struct sNewNode* self){
void* __result_obj__;
_Bool _if_conditional226;
struct sNewNode* __result236__;
void* right_value328;
struct sNewNode* result_159;
_Bool _if_conditional227;
void* right_value329;
struct sType* __dec_obj137;
_Bool _if_conditional228;
_Bool _if_conditional229;
void* right_value330;
char* __dec_obj138;
struct sNewNode* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
right_value328 = (void*)0;
memset(&result_159, 0, sizeof(struct sNewNode*));
right_value329 = (void*)0;
right_value330 = (void*)0;
                if(_if_conditional226=self==(void*)0,                _if_conditional226) {
                    __result236__ = __result_obj__ = (void*)0;
                    return __result236__;
                }
                result_159=(struct sNewNode*)come_increment_ref_count(((struct sNewNode*)(right_value328=(struct sNewNode*)come_calloc(1, sizeof(struct sNewNode)*(1), "sNewNode_clone", 3, "struct sNewNode"))));
                come_call_finalizer2(sNewNode_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional227=self!=((void*)0)&&self->type!=((void*)0),                _if_conditional227) {
                    __dec_obj137=result_159->type;
                    result_159->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value329=sType_clone(self->type))));
                    come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                if(_if_conditional228=self!=((void*)0),                _if_conditional228) {
                    result_159->sline=self->sline;
                }
                if(_if_conditional229=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional229) {
                    __dec_obj138=result_159->sname;
                    result_159->sname=(char*)come_increment_ref_count(((char*)(right_value330=string_clone(self->sname))));
                    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value330 = come_decrement_ref_count2(right_value330, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result237__ = __result_obj__ = result_159;
                come_call_finalizer2(sNewNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result237__;
                come_call_finalizer2(sNewNode_finalize,result_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTrueNode_finalize(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional231;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional231=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional231) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sTrueNode* sTrueNode_clone(struct sTrueNode* self){
void* __result_obj__;
_Bool _if_conditional232;
struct sTrueNode* __result239__;
void* right_value334;
struct sTrueNode* result_160;
_Bool _if_conditional233;
_Bool _if_conditional234;
void* right_value335;
char* __dec_obj139;
struct sTrueNode* __result240__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
memset(&result_160, 0, sizeof(struct sTrueNode*));
right_value335 = (void*)0;
                if(_if_conditional232=self==(void*)0,                _if_conditional232) {
                    __result239__ = __result_obj__ = (void*)0;
                    return __result239__;
                }
                result_160=(struct sTrueNode*)come_increment_ref_count(((struct sTrueNode*)(right_value334=(struct sTrueNode*)come_calloc(1, sizeof(struct sTrueNode)*(1), "sTrueNode_clone", 3, "struct sTrueNode"))));
                come_call_finalizer2(sTrueNode_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional233=self!=((void*)0),                _if_conditional233) {
                    result_160->sline=self->sline;
                }
                if(_if_conditional234=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional234) {
                    __dec_obj139=result_160->sname;
                    result_160->sname=(char*)come_increment_ref_count(((char*)(right_value335=string_clone(self->sname))));
                    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result240__ = __result_obj__ = result_160;
                come_call_finalizer2(sTrueNode_finalize,result_160, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result240__;
                come_call_finalizer2(sTrueNode_finalize,result_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFalseNode_finalize(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional236;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional236=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional236) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sFalseNode* sFalseNode_clone(struct sFalseNode* self){
void* __result_obj__;
_Bool _if_conditional237;
struct sFalseNode* __result242__;
void* right_value339;
struct sFalseNode* result_161;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value340;
char* __dec_obj140;
struct sFalseNode* __result243__;
memset(&__result_obj__, 0, sizeof(void*));
right_value339 = (void*)0;
memset(&result_161, 0, sizeof(struct sFalseNode*));
right_value340 = (void*)0;
                    if(_if_conditional237=self==(void*)0,                    _if_conditional237) {
                        __result242__ = __result_obj__ = (void*)0;
                        return __result242__;
                    }
                    result_161=(struct sFalseNode*)come_increment_ref_count(((struct sFalseNode*)(right_value339=(struct sFalseNode*)come_calloc(1, sizeof(struct sFalseNode)*(1), "sFalseNode_clone", 3, "struct sFalseNode"))));
                    come_call_finalizer2(sFalseNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional238=self!=((void*)0),                    _if_conditional238) {
                        result_161->sline=self->sline;
                    }
                    if(_if_conditional239=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional239) {
                        __dec_obj140=result_161->sname;
                        result_161->sname=(char*)come_increment_ref_count(((char*)(right_value340=string_clone(self->sname))));
                        __dec_obj140 = come_decrement_ref_count2(__dec_obj140, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value340 = come_decrement_ref_count2(right_value340, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result243__ = __result_obj__ = result_161;
                    come_call_finalizer2(sFalseNode_finalize,result_161, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result243__;
                    come_call_finalizer2(sFalseNode_finalize,result_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDeleteNode_finalize(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional241;
_Bool _if_conditional242;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional241=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional241) {
                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional242=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional242) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sDeleteNode* sDeleteNode_clone(struct sDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional243;
struct sDeleteNode* __result245__;
void* right_value345;
struct sDeleteNode* result_163;
_Bool _if_conditional244;
void* right_value346;
struct sNode* __dec_obj141;
_Bool _if_conditional245;
_Bool _if_conditional246;
void* right_value347;
char* __dec_obj142;
struct sDeleteNode* __result246__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
memset(&result_163, 0, sizeof(struct sDeleteNode*));
right_value346 = (void*)0;
right_value347 = (void*)0;
                        if(_if_conditional243=self==(void*)0,                        _if_conditional243) {
                            __result245__ = __result_obj__ = (void*)0;
                            return __result245__;
                        }
                        result_163=(struct sDeleteNode*)come_increment_ref_count(((struct sDeleteNode*)(right_value345=(struct sDeleteNode*)come_calloc(1, sizeof(struct sDeleteNode)*(1), "sDeleteNode_clone", 3, "struct sDeleteNode"))));
                        come_call_finalizer2(sDeleteNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional244=self!=((void*)0)&&self->node!=((void*)0),                        _if_conditional244) {
                            __dec_obj141=result_163->node;
                            result_163->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=sNode_clone(self->node))));
                            if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional245=self!=((void*)0),                        _if_conditional245) {
                            result_163->sline=self->sline;
                        }
                        if(_if_conditional246=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional246) {
                            __dec_obj142=result_163->sname;
                            result_163->sname=(char*)come_increment_ref_count(((char*)(right_value347=string_clone(self->sname))));
                            __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result246__ = __result_obj__ = result_163;
                        come_call_finalizer2(sDeleteNode_finalize,result_163, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result246__;
                        come_call_finalizer2(sDeleteNode_finalize,result_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sForceDeleteNode_finalize(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional248;
_Bool _if_conditional249;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional248=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional248) {
                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional249=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional249) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sForceDeleteNode* sForceDeleteNode_clone(struct sForceDeleteNode* self){
void* __result_obj__;
_Bool _if_conditional250;
struct sForceDeleteNode* __result248__;
void* right_value352;
struct sForceDeleteNode* result_165;
_Bool _if_conditional251;
void* right_value353;
struct sNode* __dec_obj143;
_Bool _if_conditional252;
_Bool _if_conditional253;
void* right_value354;
char* __dec_obj144;
struct sForceDeleteNode* __result249__;
memset(&__result_obj__, 0, sizeof(void*));
right_value352 = (void*)0;
memset(&result_165, 0, sizeof(struct sForceDeleteNode*));
right_value353 = (void*)0;
right_value354 = (void*)0;
                            if(_if_conditional250=self==(void*)0,                            _if_conditional250) {
                                __result248__ = __result_obj__ = (void*)0;
                                return __result248__;
                            }
                            result_165=(struct sForceDeleteNode*)come_increment_ref_count(((struct sForceDeleteNode*)(right_value352=(struct sForceDeleteNode*)come_calloc(1, sizeof(struct sForceDeleteNode)*(1), "sForceDeleteNode_clone", 3, "struct sForceDeleteNode"))));
                            come_call_finalizer2(sForceDeleteNode_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional251=self!=((void*)0)&&self->node!=((void*)0),                            _if_conditional251) {
                                __dec_obj143=result_165->node;
                                result_165->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=sNode_clone(self->node))));
                                if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional252=self!=((void*)0),                            _if_conditional252) {
                                result_165->sline=self->sline;
                            }
                            if(_if_conditional253=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional253) {
                                __dec_obj144=result_165->sname;
                                result_165->sname=(char*)come_increment_ref_count(((char*)(right_value354=string_clone(self->sname))));
                                __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result249__ = __result_obj__ = result_165;
                            come_call_finalizer2(sForceDeleteNode_finalize,result_165, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result249__;
                            come_call_finalizer2(sForceDeleteNode_finalize,result_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sBorrowNode_finalize(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional255;
_Bool _if_conditional256;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional255=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional255) {
                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional256=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional256) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sBorrowNode* sBorrowNode_clone(struct sBorrowNode* self){
void* __result_obj__;
_Bool _if_conditional257;
struct sBorrowNode* __result251__;
void* right_value359;
struct sBorrowNode* result_167;
_Bool _if_conditional258;
void* right_value360;
struct sNode* __dec_obj145;
_Bool _if_conditional259;
_Bool _if_conditional260;
void* right_value361;
char* __dec_obj146;
struct sBorrowNode* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value359 = (void*)0;
memset(&result_167, 0, sizeof(struct sBorrowNode*));
right_value360 = (void*)0;
right_value361 = (void*)0;
                                if(_if_conditional257=self==(void*)0,                                _if_conditional257) {
                                    __result251__ = __result_obj__ = (void*)0;
                                    return __result251__;
                                }
                                result_167=(struct sBorrowNode*)come_increment_ref_count(((struct sBorrowNode*)(right_value359=(struct sBorrowNode*)come_calloc(1, sizeof(struct sBorrowNode)*(1), "sBorrowNode_clone", 3, "struct sBorrowNode"))));
                                come_call_finalizer2(sBorrowNode_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional258=self!=((void*)0)&&self->node!=((void*)0),                                _if_conditional258) {
                                    __dec_obj145=result_167->node;
                                    result_167->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=sNode_clone(self->node))));
                                    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional259=self!=((void*)0),                                _if_conditional259) {
                                    result_167->sline=self->sline;
                                }
                                if(_if_conditional260=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional260) {
                                    __dec_obj146=result_167->sname;
                                    result_167->sname=(char*)come_increment_ref_count(((char*)(right_value361=string_clone(self->sname))));
                                    __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result252__ = __result_obj__ = result_167;
                                come_call_finalizer2(sBorrowNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result252__;
                                come_call_finalizer2(sBorrowNode_finalize,result_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDelegateNode_finalize(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional262;
_Bool _if_conditional263;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional262=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional262) {
                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional263=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional263) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sDelegateNode* sDelegateNode_clone(struct sDelegateNode* self){
void* __result_obj__;
_Bool _if_conditional264;
struct sDelegateNode* __result254__;
void* right_value366;
struct sDelegateNode* result_169;
_Bool _if_conditional265;
void* right_value367;
struct sNode* __dec_obj147;
_Bool _if_conditional266;
_Bool _if_conditional267;
void* right_value368;
char* __dec_obj148;
struct sDelegateNode* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
right_value366 = (void*)0;
memset(&result_169, 0, sizeof(struct sDelegateNode*));
right_value367 = (void*)0;
right_value368 = (void*)0;
                                    if(_if_conditional264=self==(void*)0,                                    _if_conditional264) {
                                        __result254__ = __result_obj__ = (void*)0;
                                        return __result254__;
                                    }
                                    result_169=(struct sDelegateNode*)come_increment_ref_count(((struct sDelegateNode*)(right_value366=(struct sDelegateNode*)come_calloc(1, sizeof(struct sDelegateNode)*(1), "sDelegateNode_clone", 3, "struct sDelegateNode"))));
                                    come_call_finalizer2(sDelegateNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional265=self!=((void*)0)&&self->node!=((void*)0),                                    _if_conditional265) {
                                        __dec_obj147=result_169->node;
                                        result_169->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=sNode_clone(self->node))));
                                        if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional266=self!=((void*)0),                                    _if_conditional266) {
                                        result_169->sline=self->sline;
                                    }
                                    if(_if_conditional267=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional267) {
                                        __dec_obj148=result_169->sname;
                                        result_169->sname=(char*)come_increment_ref_count(((char*)(right_value368=string_clone(self->sname))));
                                        __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value368 = come_decrement_ref_count2(right_value368, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result255__ = __result_obj__ = result_169;
                                    come_call_finalizer2(sDelegateNode_finalize,result_169, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result255__;
                                    come_call_finalizer2(sDelegateNode_finalize,result_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sShareNode_finalize(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional269;
_Bool _if_conditional270;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional269=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional269) {
                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional270=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional270) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sShareNode* sShareNode_clone(struct sShareNode* self){
void* __result_obj__;
_Bool _if_conditional271;
struct sShareNode* __result257__;
void* right_value373;
struct sShareNode* result_171;
_Bool _if_conditional272;
void* right_value374;
struct sNode* __dec_obj149;
_Bool _if_conditional273;
_Bool _if_conditional274;
void* right_value375;
char* __dec_obj150;
struct sShareNode* __result258__;
memset(&__result_obj__, 0, sizeof(void*));
right_value373 = (void*)0;
memset(&result_171, 0, sizeof(struct sShareNode*));
right_value374 = (void*)0;
right_value375 = (void*)0;
                                        if(_if_conditional271=self==(void*)0,                                        _if_conditional271) {
                                            __result257__ = __result_obj__ = (void*)0;
                                            return __result257__;
                                        }
                                        result_171=(struct sShareNode*)come_increment_ref_count(((struct sShareNode*)(right_value373=(struct sShareNode*)come_calloc(1, sizeof(struct sShareNode)*(1), "sShareNode_clone", 3, "struct sShareNode"))));
                                        come_call_finalizer2(sShareNode_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional272=self!=((void*)0)&&self->node!=((void*)0),                                        _if_conditional272) {
                                            __dec_obj149=result_171->node;
                                            result_171->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=sNode_clone(self->node))));
                                            if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional273=self!=((void*)0),                                        _if_conditional273) {
                                            result_171->sline=self->sline;
                                        }
                                        if(_if_conditional274=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional274) {
                                            __dec_obj150=result_171->sname;
                                            result_171->sname=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(self->sname))));
                                            __dec_obj150 = come_decrement_ref_count2(__dec_obj150, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value375 = come_decrement_ref_count2(right_value375, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result258__ = __result_obj__ = result_171;
                                        come_call_finalizer2(sShareNode_finalize,result_171, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result258__;
                                        come_call_finalizer2(sShareNode_finalize,result_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sCloneNode_finalize(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional276;
_Bool _if_conditional277;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional276=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional276) {
                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional277=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional277) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sCloneNode* sCloneNode_clone(struct sCloneNode* self){
void* __result_obj__;
_Bool _if_conditional278;
struct sCloneNode* __result260__;
void* right_value380;
struct sCloneNode* result_173;
_Bool _if_conditional279;
void* right_value381;
struct sNode* __dec_obj151;
_Bool _if_conditional280;
_Bool _if_conditional281;
void* right_value382;
char* __dec_obj152;
struct sCloneNode* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value380 = (void*)0;
memset(&result_173, 0, sizeof(struct sCloneNode*));
right_value381 = (void*)0;
right_value382 = (void*)0;
                                            if(_if_conditional278=self==(void*)0,                                            _if_conditional278) {
                                                __result260__ = __result_obj__ = (void*)0;
                                                return __result260__;
                                            }
                                            result_173=(struct sCloneNode*)come_increment_ref_count(((struct sCloneNode*)(right_value380=(struct sCloneNode*)come_calloc(1, sizeof(struct sCloneNode)*(1), "sCloneNode_clone", 3, "struct sCloneNode"))));
                                            come_call_finalizer2(sCloneNode_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional279=self!=((void*)0)&&self->node!=((void*)0),                                            _if_conditional279) {
                                                __dec_obj151=result_173->node;
                                                result_173->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=sNode_clone(self->node))));
                                                if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional280=self!=((void*)0),                                            _if_conditional280) {
                                                result_173->sline=self->sline;
                                            }
                                            if(_if_conditional281=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional281) {
                                                __dec_obj152=result_173->sname;
                                                result_173->sname=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->sname))));
                                                __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result261__ = __result_obj__ = result_173;
                                            come_call_finalizer2(sCloneNode_finalize,result_173, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result261__;
                                            come_call_finalizer2(sCloneNode_finalize,result_173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDupeNode_finalize(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional283;
_Bool _if_conditional284;
memset(&__result_obj__, 0, sizeof(void*));
                                                if(_if_conditional283=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional283) {
                                                    if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                }
                                                if(_if_conditional284=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional284) {
                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                }
}

static struct sDupeNode* sDupeNode_clone(struct sDupeNode* self){
void* __result_obj__;
_Bool _if_conditional285;
struct sDupeNode* __result263__;
void* right_value387;
struct sDupeNode* result_175;
_Bool _if_conditional286;
void* right_value388;
struct sNode* __dec_obj153;
_Bool _if_conditional287;
_Bool _if_conditional288;
void* right_value389;
char* __dec_obj154;
struct sDupeNode* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
right_value387 = (void*)0;
memset(&result_175, 0, sizeof(struct sDupeNode*));
right_value388 = (void*)0;
right_value389 = (void*)0;
                                                if(_if_conditional285=self==(void*)0,                                                _if_conditional285) {
                                                    __result263__ = __result_obj__ = (void*)0;
                                                    return __result263__;
                                                }
                                                result_175=(struct sDupeNode*)come_increment_ref_count(((struct sDupeNode*)(right_value387=(struct sDupeNode*)come_calloc(1, sizeof(struct sDupeNode)*(1), "sDupeNode_clone", 3, "struct sDupeNode"))));
                                                come_call_finalizer2(sDupeNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                if(_if_conditional286=self!=((void*)0)&&self->node!=((void*)0),                                                _if_conditional286) {
                                                    __dec_obj153=result_175->node;
                                                    result_175->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=sNode_clone(self->node))));
                                                    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
                                                    if(right_value388) { right_value388 = come_decrement_ref_count2(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                }
                                                if(_if_conditional287=self!=((void*)0),                                                _if_conditional287) {
                                                    result_175->sline=self->sline;
                                                }
                                                if(_if_conditional288=self!=((void*)0)&&self->sname!=((void*)0),                                                _if_conditional288) {
                                                    __dec_obj154=result_175->sname;
                                                    result_175->sname=(char*)come_increment_ref_count(((char*)(right_value389=string_clone(self->sname))));
                                                    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                    right_value389 = come_decrement_ref_count2(right_value389, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                }
                                                __result264__ = __result_obj__ = result_175;
                                                come_call_finalizer2(sDupeNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                return __result264__;
                                                come_call_finalizer2(sDupeNode_finalize,result_175, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDummyHeapNode_finalize(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional290;
_Bool _if_conditional291;
memset(&__result_obj__, 0, sizeof(void*));
                                                    if(_if_conditional290=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional290) {
                                                        if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                    }
                                                    if(_if_conditional291=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional291) {
                                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                    }
}

static struct sDummyHeapNode* sDummyHeapNode_clone(struct sDummyHeapNode* self){
void* __result_obj__;
_Bool _if_conditional292;
struct sDummyHeapNode* __result266__;
void* right_value394;
struct sDummyHeapNode* result_177;
_Bool _if_conditional293;
void* right_value395;
struct sNode* __dec_obj155;
_Bool _if_conditional294;
_Bool _if_conditional295;
void* right_value396;
char* __dec_obj156;
struct sDummyHeapNode* __result267__;
memset(&__result_obj__, 0, sizeof(void*));
right_value394 = (void*)0;
memset(&result_177, 0, sizeof(struct sDummyHeapNode*));
right_value395 = (void*)0;
right_value396 = (void*)0;
                                                    if(_if_conditional292=self==(void*)0,                                                    _if_conditional292) {
                                                        __result266__ = __result_obj__ = (void*)0;
                                                        return __result266__;
                                                    }
                                                    result_177=(struct sDummyHeapNode*)come_increment_ref_count(((struct sDummyHeapNode*)(right_value394=(struct sDummyHeapNode*)come_calloc(1, sizeof(struct sDummyHeapNode)*(1), "sDummyHeapNode_clone", 3, "struct sDummyHeapNode"))));
                                                    come_call_finalizer2(sDummyHeapNode_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                    if(_if_conditional293=self!=((void*)0)&&self->node!=((void*)0),                                                    _if_conditional293) {
                                                        __dec_obj155=result_177->node;
                                                        result_177->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=sNode_clone(self->node))));
                                                        if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
                                                        if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                    }
                                                    if(_if_conditional294=self!=((void*)0),                                                    _if_conditional294) {
                                                        result_177->sline=self->sline;
                                                    }
                                                    if(_if_conditional295=self!=((void*)0)&&self->sname!=((void*)0),                                                    _if_conditional295) {
                                                        __dec_obj156=result_177->sname;
                                                        result_177->sname=(char*)come_increment_ref_count(((char*)(right_value396=string_clone(self->sname))));
                                                        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                        right_value396 = come_decrement_ref_count2(right_value396, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                    }
                                                    __result267__ = __result_obj__ = result_177;
                                                    come_call_finalizer2(sDummyHeapNode_finalize,result_177, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                    return __result267__;
                                                    come_call_finalizer2(sDummyHeapNode_finalize,result_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGCIncNode_finalize(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional297;
_Bool _if_conditional298;
memset(&__result_obj__, 0, sizeof(void*));
                                                        if(_if_conditional297=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional297) {
                                                            if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                        }
                                                        if(_if_conditional298=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional298) {
                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                        }
}

static struct sGCIncNode* sGCIncNode_clone(struct sGCIncNode* self){
void* __result_obj__;
_Bool _if_conditional299;
struct sGCIncNode* __result269__;
void* right_value401;
struct sGCIncNode* result_179;
_Bool _if_conditional300;
void* right_value402;
struct sNode* __dec_obj157;
_Bool _if_conditional301;
_Bool _if_conditional302;
void* right_value403;
char* __dec_obj158;
struct sGCIncNode* __result270__;
memset(&__result_obj__, 0, sizeof(void*));
right_value401 = (void*)0;
memset(&result_179, 0, sizeof(struct sGCIncNode*));
right_value402 = (void*)0;
right_value403 = (void*)0;
                                                        if(_if_conditional299=self==(void*)0,                                                        _if_conditional299) {
                                                            __result269__ = __result_obj__ = (void*)0;
                                                            return __result269__;
                                                        }
                                                        result_179=(struct sGCIncNode*)come_increment_ref_count(((struct sGCIncNode*)(right_value401=(struct sGCIncNode*)come_calloc(1, sizeof(struct sGCIncNode)*(1), "sGCIncNode_clone", 3, "struct sGCIncNode"))));
                                                        come_call_finalizer2(sGCIncNode_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                        if(_if_conditional300=self!=((void*)0)&&self->node!=((void*)0),                                                        _if_conditional300) {
                                                            __dec_obj157=result_179->node;
                                                            result_179->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=sNode_clone(self->node))));
                                                            if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
                                                            if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                        }
                                                        if(_if_conditional301=self!=((void*)0),                                                        _if_conditional301) {
                                                            result_179->sline=self->sline;
                                                        }
                                                        if(_if_conditional302=self!=((void*)0)&&self->sname!=((void*)0),                                                        _if_conditional302) {
                                                            __dec_obj158=result_179->sname;
                                                            result_179->sname=(char*)come_increment_ref_count(((char*)(right_value403=string_clone(self->sname))));
                                                            __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                            right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                        }
                                                        __result270__ = __result_obj__ = result_179;
                                                        come_call_finalizer2(sGCIncNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                        return __result270__;
                                                        come_call_finalizer2(sGCIncNode_finalize,result_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGCDecNode_finalize(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional304;
_Bool _if_conditional305;
memset(&__result_obj__, 0, sizeof(void*));
                                                            if(_if_conditional304=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional304) {
                                                                if(self->node) { self->node = come_decrement_ref_count2(self->node, ((struct sNode*)self->node)->finalize, ((struct sNode*)self->node)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                            }
                                                            if(_if_conditional305=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional305) {
                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                            }
}

static struct sGCDecNode* sGCDecNode_clone(struct sGCDecNode* self){
void* __result_obj__;
_Bool _if_conditional306;
struct sGCDecNode* __result272__;
void* right_value408;
struct sGCDecNode* result_181;
_Bool _if_conditional307;
void* right_value409;
struct sNode* __dec_obj159;
_Bool _if_conditional308;
_Bool _if_conditional309;
void* right_value410;
char* __dec_obj160;
struct sGCDecNode* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
right_value408 = (void*)0;
memset(&result_181, 0, sizeof(struct sGCDecNode*));
right_value409 = (void*)0;
right_value410 = (void*)0;
                                                            if(_if_conditional306=self==(void*)0,                                                            _if_conditional306) {
                                                                __result272__ = __result_obj__ = (void*)0;
                                                                return __result272__;
                                                            }
                                                            result_181=(struct sGCDecNode*)come_increment_ref_count(((struct sGCDecNode*)(right_value408=(struct sGCDecNode*)come_calloc(1, sizeof(struct sGCDecNode)*(1), "sGCDecNode_clone", 3, "struct sGCDecNode"))));
                                                            come_call_finalizer2(sGCDecNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                            if(_if_conditional307=self!=((void*)0)&&self->node!=((void*)0),                                                            _if_conditional307) {
                                                                __dec_obj159=result_181->node;
                                                                result_181->node=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=sNode_clone(self->node))));
                                                                if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
                                                                if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                            }
                                                            if(_if_conditional308=self!=((void*)0),                                                            _if_conditional308) {
                                                                result_181->sline=self->sline;
                                                            }
                                                            if(_if_conditional309=self!=((void*)0)&&self->sname!=((void*)0),                                                            _if_conditional309) {
                                                                __dec_obj160=result_181->sname;
                                                                result_181->sname=(char*)come_increment_ref_count(((char*)(right_value410=string_clone(self->sname))));
                                                                __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                right_value410 = come_decrement_ref_count2(right_value410, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                            }
                                                            __result273__ = __result_obj__ = result_181;
                                                            come_call_finalizer2(sGCDecNode_finalize,result_181, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                            return __result273__;
                                                            come_call_finalizer2(sGCDecNode_finalize,result_181, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sIsHeap_finalize(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional312;
_Bool _if_conditional313;
memset(&__result_obj__, 0, sizeof(void*));
                                                                if(_if_conditional312=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional312) {
                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                }
                                                                if(_if_conditional313=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional313) {
                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                }
}

static struct sIsHeap* sIsHeap_clone(struct sIsHeap* self){
void* __result_obj__;
_Bool _if_conditional314;
struct sIsHeap* __result275__;
void* right_value416;
struct sIsHeap* result_186;
_Bool _if_conditional315;
void* right_value417;
struct sType* __dec_obj161;
_Bool _if_conditional316;
_Bool _if_conditional317;
void* right_value418;
char* __dec_obj162;
struct sIsHeap* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
right_value416 = (void*)0;
memset(&result_186, 0, sizeof(struct sIsHeap*));
right_value417 = (void*)0;
right_value418 = (void*)0;
                                                                if(_if_conditional314=self==(void*)0,                                                                _if_conditional314) {
                                                                    __result275__ = __result_obj__ = (void*)0;
                                                                    return __result275__;
                                                                }
                                                                result_186=(struct sIsHeap*)come_increment_ref_count(((struct sIsHeap*)(right_value416=(struct sIsHeap*)come_calloc(1, sizeof(struct sIsHeap)*(1), "sIsHeap_clone", 3, "struct sIsHeap"))));
                                                                come_call_finalizer2(sIsHeap_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                if(_if_conditional315=self!=((void*)0)&&self->type!=((void*)0),                                                                _if_conditional315) {
                                                                    __dec_obj161=result_186->type;
                                                                    result_186->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value417=sType_clone(self->type))));
                                                                    come_call_finalizer2(sType_finalize,__dec_obj161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                    come_call_finalizer2(sType_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                }
                                                                if(_if_conditional316=self!=((void*)0),                                                                _if_conditional316) {
                                                                    result_186->sline=self->sline;
                                                                }
                                                                if(_if_conditional317=self!=((void*)0)&&self->sname!=((void*)0),                                                                _if_conditional317) {
                                                                    __dec_obj162=result_186->sname;
                                                                    result_186->sname=(char*)come_increment_ref_count(((char*)(right_value418=string_clone(self->sname))));
                                                                    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                    right_value418 = come_decrement_ref_count2(right_value418, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                }
                                                                __result276__ = __result_obj__ = result_186;
                                                                come_call_finalizer2(sIsHeap_finalize,result_186, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                return __result276__;
                                                                come_call_finalizer2(sIsHeap_finalize,result_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfNode_finalize(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional355;
_Bool _if_conditional356;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional355=self!=((void*)0)&&self->type!=((void*)0),                                                                            _if_conditional355) {
                                                                                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                            }
                                                                            if(_if_conditional356=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional356) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sSizeOfNode* sSizeOfNode_clone(struct sSizeOfNode* self){
void* __result_obj__;
_Bool _if_conditional357;
struct sSizeOfNode* __result297__;
void* right_value455;
struct sSizeOfNode* result_201;
_Bool _if_conditional358;
void* right_value456;
struct sType* __dec_obj169;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value457;
char* __dec_obj170;
struct sSizeOfNode* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
right_value455 = (void*)0;
memset(&result_201, 0, sizeof(struct sSizeOfNode*));
right_value456 = (void*)0;
right_value457 = (void*)0;
                                                                            if(_if_conditional357=self==(void*)0,                                                                            _if_conditional357) {
                                                                                __result297__ = __result_obj__ = (void*)0;
                                                                                return __result297__;
                                                                            }
                                                                            result_201=(struct sSizeOfNode*)come_increment_ref_count(((struct sSizeOfNode*)(right_value455=(struct sSizeOfNode*)come_calloc(1, sizeof(struct sSizeOfNode)*(1), "sSizeOfNode_clone", 3, "struct sSizeOfNode"))));
                                                                            come_call_finalizer2(sSizeOfNode_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional358=self!=((void*)0)&&self->type!=((void*)0),                                                                            _if_conditional358) {
                                                                                __dec_obj169=result_201->type;
                                                                                result_201->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value456=sType_clone(self->type))));
                                                                                come_call_finalizer2(sType_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                come_call_finalizer2(sType_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            if(_if_conditional359=self!=((void*)0),                                                                            _if_conditional359) {
                                                                                result_201->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional360=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional360) {
                                                                                __dec_obj170=result_201->sname;
                                                                                result_201->sname=(char*)come_increment_ref_count(((char*)(right_value457=string_clone(self->sname))));
                                                                                __dec_obj170 = come_decrement_ref_count2(__dec_obj170, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value457 = come_decrement_ref_count2(right_value457, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result298__ = __result_obj__ = result_201;
                                                                            come_call_finalizer2(sSizeOfNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result298__;
                                                                            come_call_finalizer2(sSizeOfNode_finalize,result_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSizeOfExpNode_finalize(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional361;
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
                                                                            if(_if_conditional361=self!=((void*)0)&&self->exp!=((void*)0),                                                                            _if_conditional361) {
                                                                                if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                            }
                                                                            if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional362) {
                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                            }
}

static struct sSizeOfExpNode* sSizeOfExpNode_clone(struct sSizeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional363;
struct sSizeOfExpNode* __result300__;
void* right_value462;
struct sSizeOfExpNode* result_203;
_Bool _if_conditional364;
void* right_value463;
struct sNode* __dec_obj171;
_Bool _if_conditional365;
_Bool _if_conditional366;
void* right_value464;
char* __dec_obj172;
struct sSizeOfExpNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value462 = (void*)0;
memset(&result_203, 0, sizeof(struct sSizeOfExpNode*));
right_value463 = (void*)0;
right_value464 = (void*)0;
                                                                            if(_if_conditional363=self==(void*)0,                                                                            _if_conditional363) {
                                                                                __result300__ = __result_obj__ = (void*)0;
                                                                                return __result300__;
                                                                            }
                                                                            result_203=(struct sSizeOfExpNode*)come_increment_ref_count(((struct sSizeOfExpNode*)(right_value462=(struct sSizeOfExpNode*)come_calloc(1, sizeof(struct sSizeOfExpNode)*(1), "sSizeOfExpNode_clone", 3, "struct sSizeOfExpNode"))));
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                            if(_if_conditional364=self!=((void*)0)&&self->exp!=((void*)0),                                                                            _if_conditional364) {
                                                                                __dec_obj171=result_203->exp;
                                                                                result_203->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value463=sNode_clone(self->exp))));
                                                                                if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                if(right_value463) { right_value463 = come_decrement_ref_count2(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                            }
                                                                            if(_if_conditional365=self!=((void*)0),                                                                            _if_conditional365) {
                                                                                result_203->sline=self->sline;
                                                                            }
                                                                            if(_if_conditional366=self!=((void*)0)&&self->sname!=((void*)0),                                                                            _if_conditional366) {
                                                                                __dec_obj172=result_203->sname;
                                                                                result_203->sname=(char*)come_increment_ref_count(((char*)(right_value464=string_clone(self->sname))));
                                                                                __dec_obj172 = come_decrement_ref_count2(__dec_obj172, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                right_value464 = come_decrement_ref_count2(right_value464, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                            }
                                                                            __result301__ = __result_obj__ = result_203;
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,result_203, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                            return __result301__;
                                                                            come_call_finalizer2(sSizeOfExpNode_finalize,result_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfNode_finalize(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional372;
_Bool _if_conditional373;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional372=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional372) {
                                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                }
                                                                                if(_if_conditional373=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional373) {
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sTypeOfNode* sTypeOfNode_clone(struct sTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional374;
struct sTypeOfNode* __result303__;
void* right_value470;
struct sTypeOfNode* result_211;
_Bool _if_conditional375;
void* right_value471;
struct sType* __dec_obj173;
_Bool _if_conditional376;
_Bool _if_conditional377;
void* right_value472;
char* __dec_obj174;
struct sTypeOfNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value470 = (void*)0;
memset(&result_211, 0, sizeof(struct sTypeOfNode*));
right_value471 = (void*)0;
right_value472 = (void*)0;
                                                                                if(_if_conditional374=self==(void*)0,                                                                                _if_conditional374) {
                                                                                    __result303__ = __result_obj__ = (void*)0;
                                                                                    return __result303__;
                                                                                }
                                                                                result_211=(struct sTypeOfNode*)come_increment_ref_count(((struct sTypeOfNode*)(right_value470=(struct sTypeOfNode*)come_calloc(1, sizeof(struct sTypeOfNode)*(1), "sTypeOfNode_clone", 3, "struct sTypeOfNode"))));
                                                                                come_call_finalizer2(sTypeOfNode_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional375=self!=((void*)0)&&self->type!=((void*)0),                                                                                _if_conditional375) {
                                                                                    __dec_obj173=result_211->type;
                                                                                    result_211->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value471=sType_clone(self->type))));
                                                                                    come_call_finalizer2(sType_finalize,__dec_obj173, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                    come_call_finalizer2(sType_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                if(_if_conditional376=self!=((void*)0),                                                                                _if_conditional376) {
                                                                                    result_211->sline=self->sline;
                                                                                }
                                                                                if(_if_conditional377=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional377) {
                                                                                    __dec_obj174=result_211->sname;
                                                                                    result_211->sname=(char*)come_increment_ref_count(((char*)(right_value472=string_clone(self->sname))));
                                                                                    __dec_obj174 = come_decrement_ref_count2(__dec_obj174, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value472 = come_decrement_ref_count2(right_value472, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                __result304__ = __result_obj__ = result_211;
                                                                                come_call_finalizer2(sTypeOfNode_finalize,result_211, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result304__;
                                                                                come_call_finalizer2(sTypeOfNode_finalize,result_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sTypeOfExpNode_finalize(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional378;
_Bool _if_conditional379;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional378=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional378) {
                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                if(_if_conditional379=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional379) {
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sTypeOfExpNode* sTypeOfExpNode_clone(struct sTypeOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional380;
struct sTypeOfExpNode* __result306__;
void* right_value477;
struct sTypeOfExpNode* result_213;
_Bool _if_conditional381;
void* right_value478;
struct sNode* __dec_obj175;
_Bool _if_conditional382;
_Bool _if_conditional383;
void* right_value479;
char* __dec_obj176;
struct sTypeOfExpNode* __result307__;
memset(&__result_obj__, 0, sizeof(void*));
right_value477 = (void*)0;
memset(&result_213, 0, sizeof(struct sTypeOfExpNode*));
right_value478 = (void*)0;
right_value479 = (void*)0;
                                                                                if(_if_conditional380=self==(void*)0,                                                                                _if_conditional380) {
                                                                                    __result306__ = __result_obj__ = (void*)0;
                                                                                    return __result306__;
                                                                                }
                                                                                result_213=(struct sTypeOfExpNode*)come_increment_ref_count(((struct sTypeOfExpNode*)(right_value477=(struct sTypeOfExpNode*)come_calloc(1, sizeof(struct sTypeOfExpNode)*(1), "sTypeOfExpNode_clone", 3, "struct sTypeOfExpNode"))));
                                                                                come_call_finalizer2(sTypeOfExpNode_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional381=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional381) {
                                                                                    __dec_obj175=result_213->exp;
                                                                                    result_213->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value478=sNode_clone(self->exp))));
                                                                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                }
                                                                                if(_if_conditional382=self!=((void*)0),                                                                                _if_conditional382) {
                                                                                    result_213->sline=self->sline;
                                                                                }
                                                                                if(_if_conditional383=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional383) {
                                                                                    __dec_obj176=result_213->sname;
                                                                                    result_213->sname=(char*)come_increment_ref_count(((char*)(right_value479=string_clone(self->sname))));
                                                                                    __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value479 = come_decrement_ref_count2(right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                __result307__ = __result_obj__ = result_213;
                                                                                come_call_finalizer2(sTypeOfExpNode_finalize,result_213, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result307__;
                                                                                come_call_finalizer2(sTypeOfExpNode_finalize,result_213, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDynamicTypeOfNode_finalize(struct sDynamicTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional385;
_Bool _if_conditional386;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                if(_if_conditional385=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional385) {
                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                }
                                                                                if(_if_conditional386=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional386) {
                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                }
}

static struct sDynamicTypeOfNode* sDynamicTypeOfNode_clone(struct sDynamicTypeOfNode* self){
void* __result_obj__;
_Bool _if_conditional387;
struct sDynamicTypeOfNode* __result309__;
void* right_value484;
struct sDynamicTypeOfNode* result_215;
_Bool _if_conditional388;
void* right_value485;
struct sNode* __dec_obj177;
_Bool _if_conditional389;
_Bool _if_conditional390;
void* right_value486;
char* __dec_obj178;
struct sDynamicTypeOfNode* __result310__;
memset(&__result_obj__, 0, sizeof(void*));
right_value484 = (void*)0;
memset(&result_215, 0, sizeof(struct sDynamicTypeOfNode*));
right_value485 = (void*)0;
right_value486 = (void*)0;
                                                                                if(_if_conditional387=self==(void*)0,                                                                                _if_conditional387) {
                                                                                    __result309__ = __result_obj__ = (void*)0;
                                                                                    return __result309__;
                                                                                }
                                                                                result_215=(struct sDynamicTypeOfNode*)come_increment_ref_count(((struct sDynamicTypeOfNode*)(right_value484=(struct sDynamicTypeOfNode*)come_calloc(1, sizeof(struct sDynamicTypeOfNode)*(1), "sDynamicTypeOfNode_clone", 3, "struct sDynamicTypeOfNode"))));
                                                                                come_call_finalizer2(sDynamicTypeOfNode_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                if(_if_conditional388=self!=((void*)0)&&self->exp!=((void*)0),                                                                                _if_conditional388) {
                                                                                    __dec_obj177=result_215->exp;
                                                                                    result_215->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value485=sNode_clone(self->exp))));
                                                                                    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                    if(right_value485) { right_value485 = come_decrement_ref_count2(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                }
                                                                                if(_if_conditional389=self!=((void*)0),                                                                                _if_conditional389) {
                                                                                    result_215->sline=self->sline;
                                                                                }
                                                                                if(_if_conditional390=self!=((void*)0)&&self->sname!=((void*)0),                                                                                _if_conditional390) {
                                                                                    __dec_obj178=result_215->sname;
                                                                                    result_215->sname=(char*)come_increment_ref_count(((char*)(right_value486=string_clone(self->sname))));
                                                                                    __dec_obj178 = come_decrement_ref_count2(__dec_obj178, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                    right_value486 = come_decrement_ref_count2(right_value486, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                }
                                                                                __result310__ = __result_obj__ = result_215;
                                                                                come_call_finalizer2(sDynamicTypeOfNode_finalize,result_215, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                return __result310__;
                                                                                come_call_finalizer2(sDynamicTypeOfNode_finalize,result_215, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode_finalize(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional396;
_Bool _if_conditional397;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        if(_if_conditional396=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional396) {
                                                                                            come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                        }
                                                                                        if(_if_conditional397=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional397) {
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfNode* sAlignOfNode_clone(struct sAlignOfNode* self){
void* __result_obj__;
_Bool _if_conditional398;
struct sAlignOfNode* __result312__;
void* right_value492;
struct sAlignOfNode* result_223;
_Bool _if_conditional399;
void* right_value493;
struct sType* __dec_obj179;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value494;
char* __dec_obj180;
struct sAlignOfNode* __result313__;
memset(&__result_obj__, 0, sizeof(void*));
right_value492 = (void*)0;
memset(&result_223, 0, sizeof(struct sAlignOfNode*));
right_value493 = (void*)0;
right_value494 = (void*)0;
                                                                                        if(_if_conditional398=self==(void*)0,                                                                                        _if_conditional398) {
                                                                                            __result312__ = __result_obj__ = (void*)0;
                                                                                            return __result312__;
                                                                                        }
                                                                                        result_223=(struct sAlignOfNode*)come_increment_ref_count(((struct sAlignOfNode*)(right_value492=(struct sAlignOfNode*)come_calloc(1, sizeof(struct sAlignOfNode)*(1), "sAlignOfNode_clone", 3, "struct sAlignOfNode"))));
                                                                                        come_call_finalizer2(sAlignOfNode_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional399=self!=((void*)0)&&self->type!=((void*)0),                                                                                        _if_conditional399) {
                                                                                            __dec_obj179=result_223->type;
                                                                                            result_223->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value493=sType_clone(self->type))));
                                                                                            come_call_finalizer2(sType_finalize,__dec_obj179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            come_call_finalizer2(sType_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        if(_if_conditional400=self!=((void*)0),                                                                                        _if_conditional400) {
                                                                                            result_223->sline=self->sline;
                                                                                        }
                                                                                        if(_if_conditional401=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional401) {
                                                                                            __dec_obj180=result_223->sname;
                                                                                            result_223->sname=(char*)come_increment_ref_count(((char*)(right_value494=string_clone(self->sname))));
                                                                                            __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value494 = come_decrement_ref_count2(right_value494, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        __result313__ = __result_obj__ = result_223;
                                                                                        come_call_finalizer2(sAlignOfNode_finalize,result_223, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result313__;
                                                                                        come_call_finalizer2(sAlignOfNode_finalize,result_223, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode_finalize(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional402;
_Bool _if_conditional403;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                        if(_if_conditional402=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional402) {
                                                                                            if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                        }
                                                                                        if(_if_conditional403=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional403) {
                                                                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                        }
}

static struct sAlignOfExpNode* sAlignOfExpNode_clone(struct sAlignOfExpNode* self){
void* __result_obj__;
_Bool _if_conditional404;
struct sAlignOfExpNode* __result315__;
void* right_value499;
struct sAlignOfExpNode* result_225;
_Bool _if_conditional405;
void* right_value500;
struct sNode* __dec_obj181;
_Bool _if_conditional406;
_Bool _if_conditional407;
void* right_value501;
char* __dec_obj182;
struct sAlignOfExpNode* __result316__;
memset(&__result_obj__, 0, sizeof(void*));
right_value499 = (void*)0;
memset(&result_225, 0, sizeof(struct sAlignOfExpNode*));
right_value500 = (void*)0;
right_value501 = (void*)0;
                                                                                        if(_if_conditional404=self==(void*)0,                                                                                        _if_conditional404) {
                                                                                            __result315__ = __result_obj__ = (void*)0;
                                                                                            return __result315__;
                                                                                        }
                                                                                        result_225=(struct sAlignOfExpNode*)come_increment_ref_count(((struct sAlignOfExpNode*)(right_value499=(struct sAlignOfExpNode*)come_calloc(1, sizeof(struct sAlignOfExpNode)*(1), "sAlignOfExpNode_clone", 3, "struct sAlignOfExpNode"))));
                                                                                        come_call_finalizer2(sAlignOfExpNode_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                        if(_if_conditional405=self!=((void*)0)&&self->exp!=((void*)0),                                                                                        _if_conditional405) {
                                                                                            __dec_obj181=result_225->exp;
                                                                                            result_225->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value500=sNode_clone(self->exp))));
                                                                                            if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                            if(right_value500) { right_value500 = come_decrement_ref_count2(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                        }
                                                                                        if(_if_conditional406=self!=((void*)0),                                                                                        _if_conditional406) {
                                                                                            result_225->sline=self->sline;
                                                                                        }
                                                                                        if(_if_conditional407=self!=((void*)0)&&self->sname!=((void*)0),                                                                                        _if_conditional407) {
                                                                                            __dec_obj182=result_225->sname;
                                                                                            result_225->sname=(char*)come_increment_ref_count(((char*)(right_value501=string_clone(self->sname))));
                                                                                            __dec_obj182 = come_decrement_ref_count2(__dec_obj182, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                            right_value501 = come_decrement_ref_count2(right_value501, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                        }
                                                                                        __result316__ = __result_obj__ = result_225;
                                                                                        come_call_finalizer2(sAlignOfExpNode_finalize,result_225, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                        return __result316__;
                                                                                        come_call_finalizer2(sAlignOfExpNode_finalize,result_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfNode2_finalize(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional413;
_Bool _if_conditional414;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional413=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional413) {
                                                                                                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                            }
                                                                                            if(_if_conditional414=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional414) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignOfNode2* sAlignOfNode2_clone(struct sAlignOfNode2* self){
void* __result_obj__;
_Bool _if_conditional415;
struct sAlignOfNode2* __result318__;
void* right_value507;
struct sAlignOfNode2* result_233;
_Bool _if_conditional416;
void* right_value508;
struct sType* __dec_obj183;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value509;
char* __dec_obj184;
struct sAlignOfNode2* __result319__;
memset(&__result_obj__, 0, sizeof(void*));
right_value507 = (void*)0;
memset(&result_233, 0, sizeof(struct sAlignOfNode2*));
right_value508 = (void*)0;
right_value509 = (void*)0;
                                                                                            if(_if_conditional415=self==(void*)0,                                                                                            _if_conditional415) {
                                                                                                __result318__ = __result_obj__ = (void*)0;
                                                                                                return __result318__;
                                                                                            }
                                                                                            result_233=(struct sAlignOfNode2*)come_increment_ref_count(((struct sAlignOfNode2*)(right_value507=(struct sAlignOfNode2*)come_calloc(1, sizeof(struct sAlignOfNode2)*(1), "sAlignOfNode2_clone", 3, "struct sAlignOfNode2"))));
                                                                                            come_call_finalizer2(sAlignOfNode2_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional416=self!=((void*)0)&&self->type!=((void*)0),                                                                                            _if_conditional416) {
                                                                                                __dec_obj183=result_233->type;
                                                                                                result_233->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value508=sType_clone(self->type))));
                                                                                                come_call_finalizer2(sType_finalize,__dec_obj183, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                come_call_finalizer2(sType_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            if(_if_conditional417=self!=((void*)0),                                                                                            _if_conditional417) {
                                                                                                result_233->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional418) {
                                                                                                __dec_obj184=result_233->sname;
                                                                                                result_233->sname=(char*)come_increment_ref_count(((char*)(right_value509=string_clone(self->sname))));
                                                                                                __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value509 = come_decrement_ref_count2(right_value509, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result319__ = __result_obj__ = result_233;
                                                                                            come_call_finalizer2(sAlignOfNode2_finalize,result_233, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result319__;
                                                                                            come_call_finalizer2(sAlignOfNode2_finalize,result_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignOfExpNode2_finalize(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional419;
_Bool _if_conditional420;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                            if(_if_conditional419=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional419) {
                                                                                                if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                            }
                                                                                            if(_if_conditional420=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional420) {
                                                                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                            }
}

static struct sAlignOfExpNode2* sAlignOfExpNode2_clone(struct sAlignOfExpNode2* self){
void* __result_obj__;
_Bool _if_conditional421;
struct sAlignOfExpNode2* __result321__;
void* right_value514;
struct sAlignOfExpNode2* result_235;
_Bool _if_conditional422;
void* right_value515;
struct sNode* __dec_obj185;
_Bool _if_conditional423;
_Bool _if_conditional424;
void* right_value516;
char* __dec_obj186;
struct sAlignOfExpNode2* __result322__;
memset(&__result_obj__, 0, sizeof(void*));
right_value514 = (void*)0;
memset(&result_235, 0, sizeof(struct sAlignOfExpNode2*));
right_value515 = (void*)0;
right_value516 = (void*)0;
                                                                                            if(_if_conditional421=self==(void*)0,                                                                                            _if_conditional421) {
                                                                                                __result321__ = __result_obj__ = (void*)0;
                                                                                                return __result321__;
                                                                                            }
                                                                                            result_235=(struct sAlignOfExpNode2*)come_increment_ref_count(((struct sAlignOfExpNode2*)(right_value514=(struct sAlignOfExpNode2*)come_calloc(1, sizeof(struct sAlignOfExpNode2)*(1), "sAlignOfExpNode2_clone", 3, "struct sAlignOfExpNode2"))));
                                                                                            come_call_finalizer2(sAlignOfExpNode2_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                            if(_if_conditional422=self!=((void*)0)&&self->exp!=((void*)0),                                                                                            _if_conditional422) {
                                                                                                __dec_obj185=result_235->exp;
                                                                                                result_235->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value515=sNode_clone(self->exp))));
                                                                                                if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                if(right_value515) { right_value515 = come_decrement_ref_count2(right_value515, ((struct sNode*)right_value515)->finalize, ((struct sNode*)right_value515)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                            }
                                                                                            if(_if_conditional423=self!=((void*)0),                                                                                            _if_conditional423) {
                                                                                                result_235->sline=self->sline;
                                                                                            }
                                                                                            if(_if_conditional424=self!=((void*)0)&&self->sname!=((void*)0),                                                                                            _if_conditional424) {
                                                                                                __dec_obj186=result_235->sname;
                                                                                                result_235->sname=(char*)come_increment_ref_count(((char*)(right_value516=string_clone(self->sname))));
                                                                                                __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                right_value516 = come_decrement_ref_count2(right_value516, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                            }
                                                                                            __result322__ = __result_obj__ = result_235;
                                                                                            come_call_finalizer2(sAlignOfExpNode2_finalize,result_235, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                            return __result322__;
                                                                                            come_call_finalizer2(sAlignOfExpNode2_finalize,result_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsNode_finalize(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional430;
_Bool _if_conditional431;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                if(_if_conditional430=self!=((void*)0)&&self->type!=((void*)0),                                                                                                _if_conditional430) {
                                                                                                    come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                }
                                                                                                if(_if_conditional431=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional431) {
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sAlignAsNode* sAlignAsNode_clone(struct sAlignAsNode* self){
void* __result_obj__;
_Bool _if_conditional432;
struct sAlignAsNode* __result324__;
void* right_value522;
struct sAlignAsNode* result_243;
_Bool _if_conditional433;
void* right_value523;
struct sType* __dec_obj187;
_Bool _if_conditional434;
_Bool _if_conditional435;
void* right_value524;
char* __dec_obj188;
struct sAlignAsNode* __result325__;
memset(&__result_obj__, 0, sizeof(void*));
right_value522 = (void*)0;
memset(&result_243, 0, sizeof(struct sAlignAsNode*));
right_value523 = (void*)0;
right_value524 = (void*)0;
                                                                                                if(_if_conditional432=self==(void*)0,                                                                                                _if_conditional432) {
                                                                                                    __result324__ = __result_obj__ = (void*)0;
                                                                                                    return __result324__;
                                                                                                }
                                                                                                result_243=(struct sAlignAsNode*)come_increment_ref_count(((struct sAlignAsNode*)(right_value522=(struct sAlignAsNode*)come_calloc(1, sizeof(struct sAlignAsNode)*(1), "sAlignAsNode_clone", 3, "struct sAlignAsNode"))));
                                                                                                come_call_finalizer2(sAlignAsNode_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional433=self!=((void*)0)&&self->type!=((void*)0),                                                                                                _if_conditional433) {
                                                                                                    __dec_obj187=result_243->type;
                                                                                                    result_243->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value523=sType_clone(self->type))));
                                                                                                    come_call_finalizer2(sType_finalize,__dec_obj187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                                                                                    come_call_finalizer2(sType_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                if(_if_conditional434=self!=((void*)0),                                                                                                _if_conditional434) {
                                                                                                    result_243->sline=self->sline;
                                                                                                }
                                                                                                if(_if_conditional435=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional435) {
                                                                                                    __dec_obj188=result_243->sname;
                                                                                                    result_243->sname=(char*)come_increment_ref_count(((char*)(right_value524=string_clone(self->sname))));
                                                                                                    __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value524 = come_decrement_ref_count2(right_value524, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                __result325__ = __result_obj__ = result_243;
                                                                                                come_call_finalizer2(sAlignAsNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result325__;
                                                                                                come_call_finalizer2(sAlignAsNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sAlignAsExpNode_finalize(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional436;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
                                                                                                if(_if_conditional436=self!=((void*)0)&&self->exp!=((void*)0),                                                                                                _if_conditional436) {
                                                                                                    if(self->exp) { self->exp = come_decrement_ref_count2(self->exp, ((struct sNode*)self->exp)->finalize, ((struct sNode*)self->exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                                                                                }
                                                                                                if(_if_conditional437=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional437) {
                                                                                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                                                                                }
}

static struct sAlignAsExpNode* sAlignAsExpNode_clone(struct sAlignAsExpNode* self){
void* __result_obj__;
_Bool _if_conditional438;
struct sAlignAsExpNode* __result327__;
void* right_value529;
struct sAlignAsExpNode* result_245;
_Bool _if_conditional439;
void* right_value530;
struct sNode* __dec_obj189;
_Bool _if_conditional440;
_Bool _if_conditional441;
void* right_value531;
char* __dec_obj190;
struct sAlignAsExpNode* __result328__;
memset(&__result_obj__, 0, sizeof(void*));
right_value529 = (void*)0;
memset(&result_245, 0, sizeof(struct sAlignAsExpNode*));
right_value530 = (void*)0;
right_value531 = (void*)0;
                                                                                                if(_if_conditional438=self==(void*)0,                                                                                                _if_conditional438) {
                                                                                                    __result327__ = __result_obj__ = (void*)0;
                                                                                                    return __result327__;
                                                                                                }
                                                                                                result_245=(struct sAlignAsExpNode*)come_increment_ref_count(((struct sAlignAsExpNode*)(right_value529=(struct sAlignAsExpNode*)come_calloc(1, sizeof(struct sAlignAsExpNode)*(1), "sAlignAsExpNode_clone", 3, "struct sAlignAsExpNode"))));
                                                                                                come_call_finalizer2(sAlignAsExpNode_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                                                                                if(_if_conditional439=self!=((void*)0)&&self->exp!=((void*)0),                                                                                                _if_conditional439) {
                                                                                                    __dec_obj189=result_245->exp;
                                                                                                    result_245->exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value530=sNode_clone(self->exp))));
                                                                                                    if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                                                                                    if(right_value530) { right_value530 = come_decrement_ref_count2(right_value530, ((struct sNode*)right_value530)->finalize, ((struct sNode*)right_value530)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                                                                                }
                                                                                                if(_if_conditional440=self!=((void*)0),                                                                                                _if_conditional440) {
                                                                                                    result_245->sline=self->sline;
                                                                                                }
                                                                                                if(_if_conditional441=self!=((void*)0)&&self->sname!=((void*)0),                                                                                                _if_conditional441) {
                                                                                                    __dec_obj190=result_245->sname;
                                                                                                    result_245->sname=(char*)come_increment_ref_count(((char*)(right_value531=string_clone(self->sname))));
                                                                                                    __dec_obj190 = come_decrement_ref_count2(__dec_obj190, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                                                                    right_value531 = come_decrement_ref_count2(right_value531, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                                                                                }
                                                                                                __result328__ = __result_obj__ = result_245;
                                                                                                come_call_finalizer2(sAlignAsExpNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                                                                                return __result328__;
                                                                                                come_call_finalizer2(sAlignAsExpNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* top_level_v94(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional442;
_Bool _if_conditional443;
_Bool _if_conditional444;
_Bool _if_conditional445;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
void* right_value534;
void* right_value535;
struct sNode* _inf_value37;
struct sNullNodeX* _inf_obj_value37;
void* right_value538;
struct sNode* __result333__;
void* right_value539;
struct sNode* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
right_value534 = (void*)0;
right_value535 = (void*)0;
right_value538 = (void*)0;
right_value539 = (void*)0;
    if(_if_conditional442=charp_operator_equals(buf,"using"),    _if_conditional442) {
        if(_if_conditional443=strmemcmp(info->p,"comelang"),        _if_conditional443) {
            info->p+=strlen("comelang");
            skip_spaces_and_lf(info);
            gComeC=(_Bool)0;
        }
        else {
            if(_if_conditional444=strmemcmp(info->p,"c")||strmemcmp(info->p,"C"),            _if_conditional444) {
                info->p+=strlen("c");
                skip_spaces_and_lf(info);
                if(_if_conditional445=*info->p==123,                _if_conditional445) {
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
                if(_if_conditional446=strmemcmp(info->p,"gc"),                _if_conditional446) {
                    info->p+=strlen("gc");
                    skip_spaces_and_lf(info);
                }
                else {
                    if(_if_conditional447=strmemcmp(info->p,"no-gc"),                    _if_conditional447) {
                        info->p+=strlen("no-gc");
                        skip_spaces_and_lf(info);
                    }
                    else {
                        if(_if_conditional448=strmemcmp(info->p,"unsafe"),                        _if_conditional448) {
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
        _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2125, "struct sNode");
        _inf_obj_value37=come_increment_ref_count(((struct sNullNodeX*)(right_value535=sNullNodeX_initialize((struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value534=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "21obj.c", 2125, "struct sNullNodeX")))),info))));
        _inf_value37->_protocol_obj=_inf_obj_value37;
        _inf_value37->finalize=(void*)sNullNodeX_finalize;
        _inf_value37->clone=(void*)sNullNodeX_clone;
        _inf_value37->compile=(void*)sNullNodeX_compile;
        _inf_value37->sline=(void*)sNullNodeX_sline;
        _inf_value37->sname=(void*)sNullNodeX_sname;
        _inf_value37->terminated=(void*)sNullNodeX_terminated;
        _inf_value37->kind=(void*)sNullNodeX_kind;
        __result333__ = __result_obj__ = ((struct sNode*)(right_value538=_inf_value37));
        come_call_finalizer2(sNullNodeX_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sNullNodeX_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value538) { right_value538 = come_decrement_ref_count2(right_value538, ((struct sNode*)right_value538)->finalize, ((struct sNode*)right_value538)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result333__;
    }
    __result334__ = __result_obj__ = ((struct sNode*)(right_value539=top_level_v93(buf,head,head_sline,info)));
    if(right_value539) { right_value539 = come_decrement_ref_count2(right_value539, ((struct sNode*)right_value539)->finalize, ((struct sNode*)right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result334__;
}

static void sNullNodeX_finalize(struct sNullNodeX* self){
void* __result_obj__;
_Bool _if_conditional449;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional449=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional449) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNodeX* sNullNodeX_clone(struct sNullNodeX* self){
void* __result_obj__;
_Bool _if_conditional450;
struct sNullNodeX* __result331__;
void* right_value536;
struct sNullNodeX* result_246;
_Bool _if_conditional451;
_Bool _if_conditional452;
void* right_value537;
char* __dec_obj191;
struct sNullNodeX* __result332__;
memset(&__result_obj__, 0, sizeof(void*));
right_value536 = (void*)0;
memset(&result_246, 0, sizeof(struct sNullNodeX*));
right_value537 = (void*)0;
            if(_if_conditional450=self==(void*)0,            _if_conditional450) {
                __result331__ = __result_obj__ = (void*)0;
                return __result331__;
            }
            result_246=(struct sNullNodeX*)come_increment_ref_count(((struct sNullNodeX*)(right_value536=(struct sNullNodeX*)come_calloc(1, sizeof(struct sNullNodeX)*(1), "sNullNodeX_clone", 3, "struct sNullNodeX"))));
            come_call_finalizer2(sNullNodeX_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional451=self!=((void*)0),            _if_conditional451) {
                result_246->sline=self->sline;
            }
            if(_if_conditional452=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional452) {
                __dec_obj191=result_246->sname;
                result_246->sname=(char*)come_increment_ref_count(((char*)(right_value537=string_clone(self->sname))));
                __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value537 = come_decrement_ref_count2(right_value537, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result332__ = __result_obj__ = result_246;
            come_call_finalizer2(sNullNodeX_finalize,result_246, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result332__;
            come_call_finalizer2(sNullNodeX_finalize,result_246, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* post_position_operator3_v21(struct sNode* node, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional453;
void* right_value540;
struct tuple3$3sTypephcharphbool* multiple_assign_var11;
struct sType* type3_247;
char* name2_248;
_Bool err_249;
_Bool _if_conditional454;
void* right_value541;
struct sType* inf_type_250;
void* right_value542;
void* right_value543;
struct sNode* _inf_value38;
struct sImplementsNode* _inf_obj_value38;
void* right_value548;
struct sNode* __result337__;
_Bool _if_conditional463;
_Bool _while_condtional9;
void* right_value549;
struct sNode* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
right_value540 = (void*)0;
memset(&type3_247, 0, sizeof(struct sType*));
memset(&name2_248, 0, sizeof(char*));
memset(&err_249, 0, sizeof(_Bool));
memset(&type3_247, 0, sizeof(struct sType*));
memset(&name2_248, 0, sizeof(char*));
memset(&err_249, 0, sizeof(_Bool));
right_value541 = (void*)0;
memset(&inf_type_250, 0, sizeof(struct sType*));
right_value542 = (void*)0;
right_value543 = (void*)0;
right_value548 = (void*)0;
right_value549 = (void*)0;
    if(_if_conditional453=strmemcmp(info->p,"implements"),    _if_conditional453) {
        info->p+=strlen("implements");
        skip_spaces_and_lf(info);
        multiple_assign_var11=((struct tuple3$3sTypephcharphbool*)(right_value540=parse_type(info,(_Bool)0,(_Bool)1)));
        type3_247=(struct sType*)come_increment_ref_count(multiple_assign_var11->v1);
        name2_248=(char*)come_increment_ref_count(multiple_assign_var11->v2);
        err_249=multiple_assign_var11->v3;
        come_call_finalizer2(tuple3$3sTypephcharphboolp_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional454=!err_249,        _if_conditional454) {
            printf("%s %d: parse_type failed\n",info->sname,info->sline);
            exit(2);
        }
        inf_type_250=(struct sType*)come_increment_ref_count(((struct sType*)(right_value541=sType_clone(type3_247))));
        come_call_finalizer2(sType_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "21obj.c", 2145, "struct sNode");
        _inf_obj_value38=come_increment_ref_count(((struct sImplementsNode*)(right_value543=sImplementsNode_initialize((struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value542=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "21obj.c", 2145, "struct sImplementsNode")))),(struct sNode*)come_increment_ref_count(node),(struct sType*)come_increment_ref_count(inf_type_250),info))));
        _inf_value38->_protocol_obj=_inf_obj_value38;
        _inf_value38->finalize=(void*)sImplementsNode_finalize;
        _inf_value38->clone=(void*)sImplementsNode_clone;
        _inf_value38->compile=(void*)sImplementsNode_compile;
        _inf_value38->sline=(void*)sImplementsNode_sline;
        _inf_value38->sname=(void*)sImplementsNode_sname;
        _inf_value38->terminated=(void*)sImplementsNode_terminated;
        _inf_value38->kind=(void*)sImplementsNode_kind;
        __result337__ = __result_obj__ = ((struct sNode*)(right_value548=_inf_value38));
        come_call_finalizer2(sType_finalize,type3_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name2_248 = come_decrement_ref_count2(name2_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,inf_type_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
        come_call_finalizer2(sImplementsNode_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sImplementsNode_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value548) { right_value548 = come_decrement_ref_count2(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result337__;
        come_call_finalizer2(sType_finalize,type3_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        name2_248 = come_decrement_ref_count2(name2_248, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,inf_type_250, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    else {
        if(_if_conditional463=*info->p==64,        _if_conditional463) {
            info->p++;
            while(_while_condtional9=xisalnum(*info->p)||*info->p==95,            _while_condtional9) {
                info->p++;
            }
            skip_spaces_and_lf(info);
        }
    }
    __result338__ = __result_obj__ = ((struct sNode*)(right_value549=post_position_operator3_v20((struct sNode*)come_increment_ref_count(node),info)));
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right_value549) { right_value549 = come_decrement_ref_count2(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result338__;
    if(node) { node = come_decrement_ref_count2(node, ((struct sNode*)node)->finalize, ((struct sNode*)node)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static void sImplementsNode_finalize(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional455;
_Bool _if_conditional456;
_Bool _if_conditional457;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional455=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional455) {
                if(self->obj_exp) { self->obj_exp = come_decrement_ref_count2(self->obj_exp, ((struct sNode*)self->obj_exp)->finalize, ((struct sNode*)self->obj_exp)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional456=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional456) {
                come_call_finalizer2(sType_finalize,self->inf_type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional457=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional457) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sImplementsNode* sImplementsNode_clone(struct sImplementsNode* self){
void* __result_obj__;
_Bool _if_conditional458;
struct sImplementsNode* __result335__;
void* right_value544;
struct sImplementsNode* result_251;
_Bool _if_conditional459;
void* right_value545;
struct sNode* __dec_obj192;
_Bool _if_conditional460;
void* right_value546;
struct sType* __dec_obj193;
_Bool _if_conditional461;
_Bool _if_conditional462;
void* right_value547;
char* __dec_obj194;
struct sImplementsNode* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
right_value544 = (void*)0;
memset(&result_251, 0, sizeof(struct sImplementsNode*));
right_value545 = (void*)0;
right_value546 = (void*)0;
right_value547 = (void*)0;
            if(_if_conditional458=self==(void*)0,            _if_conditional458) {
                __result335__ = __result_obj__ = (void*)0;
                return __result335__;
            }
            result_251=(struct sImplementsNode*)come_increment_ref_count(((struct sImplementsNode*)(right_value544=(struct sImplementsNode*)come_calloc(1, sizeof(struct sImplementsNode)*(1), "sImplementsNode_clone", 3, "struct sImplementsNode"))));
            come_call_finalizer2(sImplementsNode_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional459=self!=((void*)0)&&self->obj_exp!=((void*)0),            _if_conditional459) {
                __dec_obj192=result_251->obj_exp;
                result_251->obj_exp=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value545=sNode_clone(self->obj_exp))));
                if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count2(__dec_obj192, ((struct sNode*)__dec_obj192)->finalize, ((struct sNode*)__dec_obj192)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value545) { right_value545 = come_decrement_ref_count2(right_value545, ((struct sNode*)right_value545)->finalize, ((struct sNode*)right_value545)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            if(_if_conditional460=self!=((void*)0)&&self->inf_type!=((void*)0),            _if_conditional460) {
                __dec_obj193=result_251->inf_type;
                result_251->inf_type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value546=sType_clone(self->inf_type))));
                come_call_finalizer2(sType_finalize,__dec_obj193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            }
            if(_if_conditional461=self!=((void*)0),            _if_conditional461) {
                result_251->sline=self->sline;
            }
            if(_if_conditional462=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional462) {
                __dec_obj194=result_251->sname;
                result_251->sname=(char*)come_increment_ref_count(((char*)(right_value547=string_clone(self->sname))));
                __dec_obj194 = come_decrement_ref_count2(__dec_obj194, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value547 = come_decrement_ref_count2(right_value547, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result336__ = __result_obj__ = result_251;
            come_call_finalizer2(sImplementsNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result336__;
            come_call_finalizer2(sImplementsNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

