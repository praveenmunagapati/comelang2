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
struct sNullNode
{
    int sline;
    char* sname;
};
struct sNilNode
{
    int sline;
    char* sname;
};
struct sAddNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sSubNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sMultNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sDivNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sModNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLShiftNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sRShiftNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sGtEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLtEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sLtNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sGtNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sNotEqNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sEq2Node
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sNotEq2Node
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sXOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sAndAndNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sOrOrNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    _Bool mQuote;
    int sline;
    char* sname;
};
struct sCommaNode
{
    struct sNode* mLeft;
    struct sNode* mRight;
    int sline;
    char* sname;
};
struct sConditionalNode
{
    struct sNode* mValue1;
    struct sNode* mValue2;
    struct sNode* mValue3;
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

struct sNode* post_op_v13(struct sNode* node, struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

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
static int list$1sTypeph_length(struct list$1sTypeph* self);
static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value);
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self);
static void CVALUE_finalize(struct CVALUE* self);
static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position);
static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item);
static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self);
struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info);

_Bool sNullNode_terminated();

char* sNullNode_kind();

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info);

int sNullNode_sline(struct sNullNode* self, struct sInfo* info);

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info);

struct sNode* create_null_object(struct sInfo* info);

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info);

_Bool sNilNode_terminated();

char* sNilNode_kind();

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info);

int sNilNode_sline(struct sNilNode* self, struct sInfo* info);

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info);

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAddNode_terminated();

char* sAddNode_kind();

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info);

int sAddNode_sline(struct sAddNode* self, struct sInfo* info);

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info);

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sSubNode_terminated();

char* sSubNode_kind();

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info);

int sSubNode_sline(struct sSubNode* self, struct sInfo* info);

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info);

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sMultNode_terminated();

char* sMultNode_kind();

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info);

int sMultNode_sline(struct sMultNode* self, struct sInfo* info);

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info);

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sDivNode_terminated();

char* sDivNode_kind();

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info);

int sDivNode_sline(struct sDivNode* self, struct sInfo* info);

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info);

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sModNode_terminated();

char* sModNode_kind();

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info);

int sModNode_sline(struct sModNode* self, struct sInfo* info);

char* sModNode_sname(struct sModNode* self, struct sInfo* info);

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLShiftNode_terminated();

char* sLShiftNode_kind();

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info);

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info);

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info);

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sRShiftNode_terminated();

char* sRShiftNode_kind();

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info);

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info);

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info);

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtEqNode_terminated();

char* sGtEqNode_kind();

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info);

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info);

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info);

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtEqNode_terminated();

char* sLtEqNode_kind();

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info);

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info);

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info);

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sLtNode_terminated();

char* sLtNode_kind();

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info);

int sLtNode_sline(struct sLtNode* self, struct sInfo* info);

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info);

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sGtNode_terminated();

char* sGtNode_kind();

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info);

int sGtNode_sline(struct sGtNode* self, struct sInfo* info);

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info);

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

int sEqNode_sline(struct sEqNode* self, struct sInfo* info);

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info);

_Bool sEqNode_terminated();

char* sEqNode_kind();

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info);

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEqNode_terminated();

char* sNotEqNode_kind();

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info);

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info);

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info);

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sEq2Node_terminated();

char* sEq2Node_kind();

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info);

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info);

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info);

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sNotEq2Node_terminated();

char* sNotEq2Node_kind();

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info);

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info);

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info);

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndNode_terminated();

char* sAndNode_kind();

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info);

int sAndNode_sline(struct sAndNode* self, struct sInfo* info);

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info);

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sXOrNode_terminated();

char* sXOrNode_kind();

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info);

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info);

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info);

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrNode_terminated();

char* sOrNode_kind();

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info);

int sOrNode_sline(struct sOrNode* self, struct sInfo* info);

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info);

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sAndAndNode_terminated();

char* sAndAndNode_kind();

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info);

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info);

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info);

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info);

_Bool sOrOrNode_terminated();

char* sOrOrNode_kind();

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info);

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info);

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info);

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info);

_Bool sCommaNode_terminated();

char* sCommaNode_kind();

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info);

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info);

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info);

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info);

_Bool sConditionalNode_terminated();

char* sConditionalNode_kind();

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info);

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info);

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info);

struct sNode* mult_exp(struct sInfo* info);

static void sMultNode_finalize(struct sMultNode* self);
static struct sMultNode* sMultNode_clone(struct sMultNode* self);
static void sDivNode_finalize(struct sDivNode* self);
static struct sDivNode* sDivNode_clone(struct sDivNode* self);
static void sModNode_finalize(struct sModNode* self);
static struct sModNode* sModNode_clone(struct sModNode* self);
struct sNode* add_exp(struct sInfo* info);

static void sAddNode_finalize(struct sAddNode* self);
static struct sAddNode* sAddNode_clone(struct sAddNode* self);
static void sSubNode_finalize(struct sSubNode* self);
static struct sSubNode* sSubNode_clone(struct sSubNode* self);
struct sNode* shift_exp(struct sInfo* info);

static void sLShiftNode_finalize(struct sLShiftNode* self);
static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self);
static void sRShiftNode_finalize(struct sRShiftNode* self);
static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self);
struct sNode* comparison_exp(struct sInfo* info);

static void sGtEqNode_finalize(struct sGtEqNode* self);
static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self);
static void sLtEqNode_finalize(struct sLtEqNode* self);
static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self);
static void sGtNode_finalize(struct sGtNode* self);
static struct sGtNode* sGtNode_clone(struct sGtNode* self);
static void sLtNode_finalize(struct sLtNode* self);
static struct sLtNode* sLtNode_clone(struct sLtNode* self);
struct sNode* eq_exp(struct sInfo* info);

static void sEq2Node_finalize(struct sEq2Node* self);
static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self);
static void sEqNode_finalize(struct sEqNode* self);
static struct sEqNode* sEqNode_clone(struct sEqNode* self);
static void sNotEq2Node_finalize(struct sNotEq2Node* self);
static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self);
static void sNotEqNode_finalize(struct sNotEqNode* self);
static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self);
struct sNode* and_exp(struct sInfo* info);

static void sAndNode_finalize(struct sAndNode* self);
static struct sAndNode* sAndNode_clone(struct sAndNode* self);
struct sNode* xor_exp(struct sInfo* info);

static void sXOrNode_finalize(struct sXOrNode* self);
static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self);
struct sNode* or_exp(struct sInfo* info);

static void sOrNode_finalize(struct sOrNode* self);
static struct sOrNode* sOrNode_clone(struct sOrNode* self);
struct sNode* andand_exp(struct sInfo* info);

static void sAndAndNode_finalize(struct sAndAndNode* self);
static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self);
struct sNode* oror_exp(struct sInfo* info);

static void sOrOrNode_finalize(struct sOrOrNode* self);
static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self);
struct sNode* comma_exp(struct sInfo* info);

static void sCommaNode_finalize(struct sCommaNode* self);
static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self);
struct sNode* conditional_exp(struct sInfo* info);

static void sConditionalNode_finalize(struct sConditionalNode* self);
static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self);
struct sNode* expression_v13(struct sInfo* info);

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info);

static void sNullNode_finalize(struct sNullNode* self);
static struct sNullNode* sNullNode_clone(struct sNullNode* self);
static void sNilNode_finalize(struct sNilNode* self);
static struct sNilNode* sNilNode_clone(struct sNilNode* self);
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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value44;
struct sType* generics_type_29;
_Bool _if_conditional91;
struct sType* __dec_obj28;
_Bool _if_conditional92;
struct sClass* klass_30;
char* class_name_31;
struct sFun* operator_fun_32;
char* fun_name2_33;
_Bool _if_conditional93;
void* right_value45;
char* none_generics_name_34;
void* right_value46;
struct sType* obj_type_35;
void* right_value47;
char* __dec_obj29;
void* right_value48;
char* fun_name3_36;
void* right_value49;
struct sGenericsFun* generics_fun_39;
_Bool _if_conditional107;
void* right_value50;
_Bool _if_conditional108;
_Bool __result30__;
void* right_value51;
_Bool _if_conditional128;
void* right_value52;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_43;
char* fun_name_44;
void* right_value53;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_45;
char* fun_name2_46;
_Bool _if_conditional130;
void* right_value54;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_47;
char* fun_name_48;
void* right_value55;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_49;
char* fun_name2_50;
void* right_value56;
void* right_value57;
char* __dec_obj30;
int i_51;
_Bool _for_condtionalA1;
void* right_value58;
char* new_fun_name_52;
void* right_value59;
_Bool _if_conditional131;
void* right_value60;
char* __dec_obj31;
_Bool _if_conditional132;
void* right_value61;
_Bool result_53;
_Bool _if_conditional133;
void* right_value62;
struct CVALUE* come_value_54;
char* left_value2_55;
void* right_value63;
void* right_value64;
void* right_value65;
void* right_value66;
_Bool _if_conditional138;
void* right_value67;
void* right_value68;
char* __dec_obj32;
void* right_value69;
char* __dec_obj33;
char* right_value2_59;
void* right_value70;
void* right_value71;
void* right_value72;
void* right_value73;
_Bool _if_conditional139;
void* right_value74;
void* right_value75;
char* __dec_obj34;
void* right_value76;
char* __dec_obj35;
void* right_value77;
void* right_value78;
void* right_value79;
void* right_value80;
char* __dec_obj36;
void* right_value81;
struct sType* type2_60;
void* right_value82;
struct sType* type3_61;
void* right_value83;
struct sType* __dec_obj37;
_Bool _if_conditional140;
void* right_value84;
char* __dec_obj38;
void* right_value85;
char* __dec_obj39;
_Bool __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value44 = (void*)0;
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&operator_fun_32, 0, sizeof(struct sFun*));
memset(&fun_name2_33, 0, sizeof(char*));
right_value45 = (void*)0;
memset(&none_generics_name_34, 0, sizeof(char*));
right_value46 = (void*)0;
memset(&obj_type_35, 0, sizeof(struct sType*));
right_value47 = (void*)0;
right_value48 = (void*)0;
memset(&fun_name3_36, 0, sizeof(char*));
right_value49 = (void*)0;
memset(&generics_fun_39, 0, sizeof(struct sGenericsFun*));
right_value50 = (void*)0;
right_value51 = (void*)0;
right_value52 = (void*)0;
memset(&fun_43, 0, sizeof(struct sFun*));
memset(&fun_name_44, 0, sizeof(char*));
memset(&fun_43, 0, sizeof(struct sFun*));
memset(&fun_name_44, 0, sizeof(char*));
right_value53 = (void*)0;
memset(&fun2_45, 0, sizeof(struct sFun*));
memset(&fun_name2_46, 0, sizeof(char*));
memset(&fun2_45, 0, sizeof(struct sFun*));
memset(&fun_name2_46, 0, sizeof(char*));
right_value54 = (void*)0;
memset(&fun_47, 0, sizeof(struct sFun*));
memset(&fun_name_48, 0, sizeof(char*));
memset(&fun_47, 0, sizeof(struct sFun*));
memset(&fun_name_48, 0, sizeof(char*));
right_value55 = (void*)0;
memset(&fun2_49, 0, sizeof(struct sFun*));
memset(&fun_name2_50, 0, sizeof(char*));
memset(&fun2_49, 0, sizeof(struct sFun*));
memset(&fun_name2_50, 0, sizeof(char*));
right_value56 = (void*)0;
right_value57 = (void*)0;
memset(&i_51, 0, sizeof(int));
right_value58 = (void*)0;
memset(&new_fun_name_52, 0, sizeof(char*));
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
memset(&result_53, 0, sizeof(_Bool));
right_value62 = (void*)0;
memset(&come_value_54, 0, sizeof(struct CVALUE*));
memset(&left_value2_55, 0, sizeof(char*));
right_value63 = (void*)0;
right_value64 = (void*)0;
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
memset(&right_value2_59, 0, sizeof(char*));
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value72 = (void*)0;
right_value73 = (void*)0;
right_value74 = (void*)0;
right_value75 = (void*)0;
right_value76 = (void*)0;
right_value77 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
memset(&type2_60, 0, sizeof(struct sType*));
right_value82 = (void*)0;
memset(&type3_61, 0, sizeof(struct sType*));
right_value83 = (void*)0;
right_value84 = (void*)0;
right_value85 = (void*)0;
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(_if_conditional91=generics_type_29->mNoSolvedGenericsType->v1,    _if_conditional91) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        come_call_finalizer2(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(_if_conditional92=type->mNoSolvedGenericsType->v1,    _if_conditional92) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_32=((void*)0);
    if(_if_conditional93=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value45=get_none_generics_name(type->mClass->mName))));
        if(right_value45) { right_value45 = come_decrement_ref_count2(right_value45, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj29=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count2(__dec_obj29, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value47) { right_value47 = come_decrement_ref_count2(right_value47, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        if(right_value48) { right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        generics_fun_39=((struct sGenericsFun*)(right_value49=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0))));
        come_call_finalizer2(sGenericsFun_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional107=generics_fun_39,        _if_conditional107) {
            if(_if_conditional108=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(fun_name2_33)))),generics_fun_39,obj_type_35,info),            (right_value50) ? right_value50 = come_decrement_ref_count2(right_value50, (void*)0, (void*)0, 1, 0, 0, __result_obj__):0,
            _if_conditional108) {
                __result30__ = (_Bool)0;
                if(none_generics_name_34) { none_generics_name_34 = come_decrement_ref_count2(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(fun_name3_36) { fun_name3_36 = come_decrement_ref_count2(fun_name3_36, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                if(fun_name2_33) { fun_name2_33 = come_decrement_ref_count2(fun_name2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                return __result30__;
            }
            operator_fun_32=((struct sFun*)(right_value51=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
            come_call_finalizer2(sFun_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        else {
            if(_if_conditional128=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional128) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value52=create_equals_automatically(obj_type_35,"equals",info)));
                fun_43=multiple_assign_var1->v1;
                fun_name_44=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value53=create_operator_equals_automatically(obj_type_35,"operator_equals",info)));
                fun2_45=multiple_assign_var2->v1;
                fun_name2_46=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                operator_fun_32=fun2_45;
                if(fun_name_44) { fun_name_44 = come_decrement_ref_count2(fun_name_44, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                if(fun_name2_46) { fun_name2_46 = come_decrement_ref_count2(fun_name2_46, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            else {
                if(_if_conditional130=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional130) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value54=create_equals_automatically(obj_type_35,"not_equals",info)));
                    fun_47=multiple_assign_var3->v1;
                    fun_name_48=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value55=create_operator_not_equals_automatically(obj_type_35,"operator_not_equals",info)));
                    fun2_49=multiple_assign_var4->v1;
                    fun_name2_50=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    operator_fun_32=fun2_49;
                    if(fun_name_48) { fun_name_48 = come_decrement_ref_count2(fun_name_48, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    if(fun_name2_50) { fun_name2_50 = come_decrement_ref_count2(fun_name2_50, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
                else {
                    operator_fun_32=((struct sFun*)(right_value56=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
                    come_call_finalizer2(sFun_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
            }
        }
        if(none_generics_name_34) { none_generics_name_34 = come_decrement_ref_count2(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(fun_name3_36) { fun_name3_36 = come_decrement_ref_count2(fun_name3_36, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    }
    else {
        __dec_obj30=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value57=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count2(__dec_obj30, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value57) { right_value57 = come_decrement_ref_count2(right_value57, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        for(
        i_51=128-1 ,        0;        _for_condtionalA1=        i_51>=1 ,        _for_condtionalA1;        i_51-- ,        0        ){
            new_fun_name_52=(char*)come_increment_ref_count(((char*)(right_value58=xsprintf("%s_v%d",fun_name2_33,i_51))));
            if(right_value58) { right_value58 = come_decrement_ref_count2(right_value58, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            operator_fun_32=((struct sFun*)(right_value59=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_52)));
            come_call_finalizer2(sFun_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional131=operator_fun_32,            _if_conditional131) {
                __dec_obj31=fun_name2_33;
                fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(new_fun_name_52))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value60) { right_value60 = come_decrement_ref_count2(right_value60, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                if(new_fun_name_52) { new_fun_name_52 = come_decrement_ref_count2(new_fun_name_52, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                break;
            }
            if(new_fun_name_52) { new_fun_name_52 = come_decrement_ref_count2(new_fun_name_52, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        }
        if(_if_conditional132=operator_fun_32==((void*)0),        _if_conditional132) {
            operator_fun_32=((struct sFun*)(right_value61=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
            come_call_finalizer2(sFun_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
    }
    result_53=(_Bool)0;
    if(_if_conditional133=operator_fun_32&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional133) {
        come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value62=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value64=xsprintf("\%s is assigned to",((char*)(right_value63=string_to_string(fun_name2_33)))))),((struct sType*)(right_value65=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0))),left_value->type,left_value,(_Bool)0,info);
        if(right_value63) { right_value63 = come_decrement_ref_count2(right_value63, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value64) { right_value64 = come_decrement_ref_count2(right_value64, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sType_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional138=((struct sType*)(right_value66=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0)))->mHeap&&left_value->type->mHeap,        come_call_finalizer2(sType_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional138) {
            std_move(((struct sType*)(right_value67=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0))),left_value->type,left_value,info);
            come_call_finalizer2(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj32=left_value2_55;
            left_value2_55=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("%s",left_value->c_value))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value68) { right_value68 = come_decrement_ref_count2(right_value68, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        else {
            __dec_obj33=left_value2_55;
            left_value2_55=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(left_value->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value69) { right_value69 = come_decrement_ref_count2(right_value69, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        check_assign_type(((char*)(right_value71=xsprintf("\%s is assigned to",((char*)(right_value70=string_to_string(fun_name2_33)))))),((struct sType*)(right_value72=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1))),right_value->type,right_value,(_Bool)0,info);
        if(right_value70) { right_value70 = come_decrement_ref_count2(right_value70, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value71) { right_value71 = come_decrement_ref_count2(right_value71, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        come_call_finalizer2(sType_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional139=((struct sType*)(right_value73=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1)))->mHeap&&right_value->type->mHeap,        come_call_finalizer2(sType_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__),
        _if_conditional139) {
            std_move(((struct sType*)(right_value74=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1))),right_value->type,right_value,info);
            come_call_finalizer2(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            __dec_obj34=right_value2_59;
            right_value2_59=(char*)come_increment_ref_count(((char*)(right_value75=xsprintf("%s",right_value->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value75) { right_value75 = come_decrement_ref_count2(right_value75, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        else {
            __dec_obj35=right_value2_59;
            right_value2_59=(char*)come_increment_ref_count(((char*)(right_value76=string_clone(right_value->c_value))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count2(__dec_obj35, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value76) { right_value76 = come_decrement_ref_count2(right_value76, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        __dec_obj36=come_value_54->c_value;
        come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value80=xsprintf("\%s(\%s,\%s)",((char*)(right_value77=string_to_string(fun_name2_33))),((char*)(right_value78=string_to_string(left_value2_55))),((char*)(right_value79=string_to_string(right_value2_59)))))));
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value77) { right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value78) { right_value78 = come_decrement_ref_count2(right_value78, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value79) { right_value79 = come_decrement_ref_count2(right_value79, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value81=sType_clone(operator_fun_32->mResultType))));
        come_call_finalizer2(sType_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type3_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value82=solve_generics(type2_60,generics_type_29,info))));
        come_call_finalizer2(sType_finalize,right_value82, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj37=come_value_54->type;
        come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(type3_61))));
        come_call_finalizer2(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_54->var=((void*)0);
        if(_if_conditional140=type3_61->mHeap,        _if_conditional140) {
            __dec_obj38=come_value_54->c_value;
            come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value84=append_object_to_right_values(come_value_54->c_value,(struct sType*)come_increment_ref_count(type3_61),info))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value84) { right_value84 = come_decrement_ref_count2(right_value84, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        __dec_obj39=come_value_54->c_value;
        come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value85=append_stackframe(come_value_54->c_value,come_value_54->type,info))));
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value85) { right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        add_come_last_code(info,"%s;\n",come_value_54->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
        result_53=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        if(left_value2_55) { left_value2_55 = come_decrement_ref_count2(left_value2_55, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        if(right_value2_59) { right_value2_59 = come_decrement_ref_count2(right_value2_59, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
        come_call_finalizer2(sType_finalize,type2_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type3_61, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result38__ = result_53;
    come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(fun_name2_33) { fun_name2_33 = come_decrement_ref_count2(fun_name2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
    return __result38__;
    come_call_finalizer2(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    if(fun_name2_33) { fun_name2_33 = come_decrement_ref_count2(fun_name2_33, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional5;
struct sType* __result7__;
void* right_value10;
struct sType* result_5;
_Bool _if_conditional22;
_Bool _if_conditional23;
void* right_value13;
struct tuple1$1sTypeph* __dec_obj7;
_Bool _if_conditional27;
void* right_value14;
struct tuple1$1sTypeph* __dec_obj8;
_Bool _if_conditional28;
void* right_value15;
char* __dec_obj9;
_Bool _if_conditional29;
void* right_value22;
struct list$1sTypeph* __dec_obj13;
_Bool _if_conditional33;
void* right_value30;
struct list$1sNodeph* __dec_obj17;
_Bool _if_conditional46;
_Bool _if_conditional47;
void* right_value31;
struct list$1sTypeph* __dec_obj18;
_Bool _if_conditional48;
void* right_value38;
struct list$1charph* __dec_obj22;
_Bool _if_conditional52;
void* right_value39;
struct tuple1$1sTypeph* __dec_obj23;
_Bool _if_conditional53;
_Bool _if_conditional54;
void* right_value40;
struct sNode* __dec_obj24;
_Bool _if_conditional55;
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
void* right_value41;
struct sNode* __dec_obj25;
_Bool _if_conditional79;
_Bool _if_conditional80;
_Bool _if_conditional81;
void* right_value42;
char* __dec_obj26;
_Bool _if_conditional82;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
void* right_value43;
char* __dec_obj27;
struct sType* __result24__;
memset(&__result_obj__, 0, sizeof(void*));
right_value10 = (void*)0;
memset(&result_5, 0, sizeof(struct sType*));
right_value13 = (void*)0;
right_value14 = (void*)0;
right_value15 = (void*)0;
right_value22 = (void*)0;
right_value30 = (void*)0;
right_value31 = (void*)0;
right_value38 = (void*)0;
right_value39 = (void*)0;
right_value40 = (void*)0;
right_value41 = (void*)0;
right_value42 = (void*)0;
right_value43 = (void*)0;
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        come_call_finalizer2(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional23) {
            __dec_obj7=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional27) {
            __dec_obj8=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value15=string_clone(self->mGenericsName))));
            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count2(__dec_obj9, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value15) { right_value15 = come_decrement_ref_count2(right_value15, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional29) {
            __dec_obj13=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional33) {
            __dec_obj17=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional47=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional47) {
            __dec_obj18=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional48) {
            __dec_obj22=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional52) {
            __dec_obj23=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional53=self!=((void*)0),        _if_conditional53) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional54) {
            __dec_obj24=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=sNode_clone(self->mAlignas))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count2(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value40) { right_value40 = come_decrement_ref_count2(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional55=self!=((void*)0),        _if_conditional55) {
            result_5->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional56=self!=((void*)0),        _if_conditional56) {
            result_5->mShort=self->mShort;
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_5->mLong=self->mLong;
        }
        if(_if_conditional58=self!=((void*)0),        _if_conditional58) {
            result_5->mLongLong=self->mLongLong;
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_5->mConstant=self->mConstant;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_5->mRegister=self->mRegister;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_5->mVolatile=self->mVolatile;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_5->mStatic=self->mStatic;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_5->mExtern=self->mExtern;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_5->mRestrict=self->mRestrict;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_5->mImmutable=self->mImmutable;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_5->mHeap=self->mHeap;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_5->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_5->mDelegate=self->mDelegate;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_5->mShare=self->mShare;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_5->mClone=self->mClone;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_5->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_5->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_5->mRefference=self->mRefference;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_5->mException=self->mException;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_5->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_5->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_5->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional78=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional78) {
            __dec_obj25=result_5->mSizeNum;
            result_5->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value41=sNode_clone(self->mSizeNum))));
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count2(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value41) { right_value41 = come_decrement_ref_count2(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_5->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_5->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional81=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional81) {
            __dec_obj26=result_5->mOriginalTypeName;
            result_5->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value42=string_clone(self->mOriginalTypeName))));
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value42) { right_value42 = come_decrement_ref_count2(right_value42, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        if(_if_conditional82=self!=((void*)0),        _if_conditional82) {
            result_5->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_5->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_5->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional85=self!=((void*)0),        _if_conditional85) {
            result_5->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_5->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_5->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_5->mInline=self->mInline;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_5->mNullValue=self->mNullValue;
        }
        if(_if_conditional90=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional90) {
            __dec_obj27=result_5->mAsmName;
            result_5->mAsmName=(char*)come_increment_ref_count(((char*)(right_value43=string_clone(self->mAsmName))));
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0); }
            if(right_value43) { right_value43 = come_decrement_ref_count2(right_value43, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        }
        __result24__ = __result_obj__ = result_5;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result24__;
        come_call_finalizer2(sType_finalize,result_5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional6;
_Bool _if_conditional8;
_Bool _if_conditional9;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional19;
_Bool _if_conditional20;
_Bool _if_conditional21;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional6) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional9) {
                if(self->mGenericsName) { self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional10) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional17) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional18) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional19) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional20) {
                if(self->mOriginalTypeName) { self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional21) {
                if(self->mAsmName) { self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional7) {
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
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional11) {
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
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional13) {
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
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result8__;
void* right_value11;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional26;
void* right_value12;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
right_value11 = (void*)0;
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
right_value12 = (void*)0;
                if(_if_conditional24=self==(void*)0,                _if_conditional24) {
                    __result8__ = __result_obj__ = (void*)0;
                    return __result8__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional26) {
                    __dec_obj6=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result9__ = __result_obj__ = result_12;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result9__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional25) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional30;
struct list$1sTypeph* __result10__;
void* right_value16;
void* right_value17;
struct list$1sTypeph* result_13;
struct list_item$1sTypeph* it_14;
_Bool _while_condtional4;
void* right_value21;
struct list$1sTypeph* __result13__;
memset(&__result_obj__, 0, sizeof(void*));
right_value16 = (void*)0;
right_value17 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
right_value21 = (void*)0;
                if(_if_conditional30=self==((void*)0),                _if_conditional30) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 141, "struct list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(it_14->item)))));
                    come_call_finalizer2(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_14=it_14->next;
                }
                __result13__ = __result_obj__ = result_13;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result13__;
                come_call_finalizer2(list$1sTypephp_finalize,result_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result11__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result11__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result11__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional31;
void* right_value18;
struct list_item$1sTypeph* litem_15;
struct sType* __dec_obj10;
_Bool _if_conditional32;
void* right_value19;
struct list_item$1sTypeph* litem_16;
struct sType* __dec_obj11;
void* right_value20;
struct list_item$1sTypeph* litem_17;
struct sType* __dec_obj12;
struct list$1sTypeph* __result12__;
memset(&__result_obj__, 0, sizeof(void*));
right_value18 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value19 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
right_value20 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 155, "struct list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj10=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional32=self->len==1,                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 165, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj11=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 175, "struct list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj12=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_17;
                                self->tail=litem_17;
                            }
                        }
                        self->len++;
                        __result12__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result12__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional34;
struct list$1sNodeph* __result14__;
void* right_value23;
void* right_value24;
struct list$1sNodeph* result_18;
struct list_item$1sNodeph* it_19;
_Bool _while_condtional5;
void* right_value29;
struct list$1sNodeph* __result19__;
memset(&__result_obj__, 0, sizeof(void*));
right_value23 = (void*)0;
right_value24 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value29 = (void*)0;
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result14__ = __result_obj__ = ((void*)0);
                    return __result14__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 141, "struct list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(it_19->item)))));
                    if(right_value29) { right_value29 = come_decrement_ref_count2(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_19=it_19->next;
                }
                __result19__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result19__;
                come_call_finalizer2(list$1sNodephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result15__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result15__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result15__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional35;
void* right_value25;
struct list_item$1sNodeph* litem_20;
struct sNode* __dec_obj14;
_Bool _if_conditional36;
void* right_value26;
struct list_item$1sNodeph* litem_21;
struct sNode* __dec_obj15;
void* right_value27;
struct list_item$1sNodeph* litem_22;
struct sNode* __dec_obj16;
struct list$1sNodeph* __result16__;
memset(&__result_obj__, 0, sizeof(void*));
right_value25 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value26 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value27 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 155, "struct list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj14=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count2(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 165, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj15=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count2(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 175, "struct list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj16=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count2(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result16__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result16__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional37;
struct sNode* __result17__;
void* right_value28;
struct sNode* result_23;
_Bool _if_conditional38;
_Bool _if_conditional39;
_Bool _if_conditional40;
_Bool _if_conditional41;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
struct sNode* __result18__;
memset(&__result_obj__, 0, sizeof(void*));
right_value28 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            __result17__ = __result_obj__ = (void*)0;
                            return __result17__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        if(right_value28) { right_value28 = come_decrement_ref_count2(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional38=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional38) {
                            result_23->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional39=self!=((void*)0),                        _if_conditional39) {
                            result_23->finalize=self->finalize;
                        }
                        if(_if_conditional40=self!=((void*)0),                        _if_conditional40) {
                            result_23->clone=self->clone;
                        }
                        if(_if_conditional41=self!=((void*)0),                        _if_conditional41) {
                            result_23->compile=self->compile;
                        }
                        if(_if_conditional42=self!=((void*)0),                        _if_conditional42) {
                            result_23->sline=self->sline;
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_23->sname=self->sname;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_23->terminated=self->terminated;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_23->kind=self->kind;
                        }
                        __result18__ = __result_obj__ = result_23;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result18__;
                        if(result_23) { result_23 = come_decrement_ref_count2(result_23, ((struct sNode*)result_23)->finalize, ((struct sNode*)result_23)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional49;
struct list$1charph* __result20__;
void* right_value32;
void* right_value33;
struct list$1charph* result_24;
struct list_item$1charph* it_25;
_Bool _while_condtional6;
void* right_value37;
struct list$1charph* __result23__;
memset(&__result_obj__, 0, sizeof(void*));
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value37 = (void*)0;
                if(_if_conditional49=self==((void*)0),                _if_conditional49) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 141, "struct list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value37=string_clone(it_25->item)))));
                    if(right_value37) { right_value37 = come_decrement_ref_count2(right_value37, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    it_25=it_25->next;
                }
                __result23__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result23__;
                come_call_finalizer2(list$1charphp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result21__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result21__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result21__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional50;
void* right_value34;
struct list_item$1charph* litem_26;
char* __dec_obj19;
_Bool _if_conditional51;
void* right_value35;
struct list_item$1charph* litem_27;
char* __dec_obj20;
void* right_value36;
struct list_item$1charph* litem_28;
char* __dec_obj21;
struct list$1charph* __result22__;
memset(&__result_obj__, 0, sizeof(void*));
right_value34 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value35 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value36 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=self->len==0,                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 155, "struct list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj19=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional51=self->len==1,                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 165, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj20=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count2(__dec_obj20, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 175, "struct list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj21=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result22__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
                        return __result22__;
                        if(item) { item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0); }
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
        __result25__ = self->len;
        return __result25__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional7;
_Bool _if_conditional94;
_Bool _if_conditional95;
struct sGenericsFun* __result26__;
_Bool _if_conditional105;
_Bool _if_conditional106;
struct sGenericsFun* __result27__;
struct sGenericsFun* __result28__;
struct sGenericsFun* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            it_38=hash_37;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional94=self->item_existance[it_38],                _if_conditional94) {
                    if(_if_conditional95=string_equals(self->keys[it_38],key),                    _if_conditional95) {
                        __result26__ = __result_obj__ = self->items[it_38];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result26__;
                    }
                    it_38++;
                    if(_if_conditional105=it_38>=self->size,                    _if_conditional105) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional106=it_38==hash_37,                        _if_conditional106) {
                            __result27__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result27__;
                        }
                    }
                }
                else {
                    __result28__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result28__;
                }
            }
            __result29__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result29__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool _if_conditional96;
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional96=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional96) {
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional97=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional97) {
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional98=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional98) {
                                if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
                            if(_if_conditional99=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional99) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional100=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional100) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional101) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional102) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional103) {
                                if(self->mBlock) { self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional104) {
                                if(self->mGenericsSName) { self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_40;
unsigned int hash_41;
unsigned int it_42;
_Bool _while_condtional8;
_Bool _if_conditional109;
_Bool _if_conditional110;
struct sFun* __result31__;
_Bool _if_conditional126;
_Bool _if_conditional127;
struct sFun* __result32__;
struct sFun* __result33__;
struct sFun* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_40, 0, sizeof(struct sFun*));
memset(&hash_41, 0, sizeof(unsigned int));
memset(&it_42, 0, sizeof(unsigned int));
                memset(&default_value_40,0,sizeof(struct sFun*));
                hash_41=string_get_hash_key(((char*)key))%self->size;
                it_42=hash_41;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional109=self->item_existance[it_42],                    _if_conditional109) {
                        if(_if_conditional110=string_equals(self->keys[it_42],key),                        _if_conditional110) {
                            __result31__ = __result_obj__ = self->items[it_42];
                            come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result31__;
                        }
                        it_42++;
                        if(_if_conditional126=it_42>=self->size,                        _if_conditional126) {
                            it_42=0;
                        }
                        else {
                            if(_if_conditional127=it_42==hash_41,                            _if_conditional127) {
                                __result32__ = __result_obj__ = default_value_40;
                                come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result32__;
                            }
                        }
                    }
                    else {
                        __result33__ = __result_obj__ = default_value_40;
                        come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result33__;
                    }
                }
                __result34__ = __result_obj__ = default_value_40;
                come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result34__;
                come_call_finalizer2(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional111;
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional111=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional111) {
                                    if(self->mName) { self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
                                if(_if_conditional112=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional112) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional113=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional113) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional114=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional114) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional115=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional115) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional116=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional116) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional117=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional117) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional120=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional120) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional121=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional121) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional122=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional122) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional123=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional123) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional124=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional124) {
                                    if(self->mComeHeader) { self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
                                if(_if_conditional125=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional125) {
                                    if(self->mDeclareSName) { self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional118=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional118) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional119=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional119) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional129=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional129) {
                        if(self->v2) { self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional134;
_Bool _if_conditional135;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional134=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional134) {
                if(self->c_value) { self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
            if(_if_conditional135=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional135) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional136;
struct list_item$1sTypeph* it_56;
int i_57;
_Bool _while_condtional9;
_Bool _if_conditional137;
struct sType* __result35__;
struct sType* default_value_58;
struct sType* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_57, 0, sizeof(int));
memset(&default_value_58, 0, sizeof(struct sType*));
            if(_if_conditional136=position<0,            _if_conditional136) {
                position+=self->len;
            }
            it_56=self->head;
            i_57=0;
            while(_while_condtional9=it_56!=((void*)0),            _while_condtional9) {
                if(_if_conditional137=position==i_57,                _if_conditional137) {
                    __result35__ = __result_obj__ = it_56->item;
                    return __result35__;
                }
                it_56=it_56->next;
                i_57++;
            }
            memset(&default_value_58,0,sizeof(struct sType*));
            __result36__ = __result_obj__ = default_value_58;
            come_call_finalizer2(sType_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result36__;
            come_call_finalizer2(sType_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional141;
void* right_value86;
struct list_item$1CVALUEph* litem_62;
struct CVALUE* __dec_obj40;
_Bool _if_conditional143;
void* right_value87;
struct list_item$1CVALUEph* litem_63;
struct CVALUE* __dec_obj41;
void* right_value88;
struct list_item$1CVALUEph* litem_64;
struct CVALUE* __dec_obj42;
struct list$1CVALUEph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value86 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1CVALUEph*));
right_value87 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1CVALUEph*));
right_value88 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional141=self->len==0,            _if_conditional141) {
                litem_62=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value86=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 225, "struct list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_62->prev=((void*)0);
                litem_62->next=((void*)0);
                __dec_obj40=litem_62->item;
                litem_62->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_62;
                self->head=litem_62;
            }
            else {
                if(_if_conditional143=self->len==1,                _if_conditional143) {
                    litem_63=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value87=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 235, "struct list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_63->prev=self->head;
                    litem_63->next=((void*)0);
                    __dec_obj41=litem_63->item;
                    litem_63->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_63;
                    self->head->next=litem_63;
                }
                else {
                    litem_64=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value88=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 245, "struct list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_64->prev=self->tail;
                    litem_64->next=((void*)0);
                    __dec_obj42=litem_64->item;
                    litem_64->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_64;
                    self->tail=litem_64;
                }
            }
            self->len++;
            __result37__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result37__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional142;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional142=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional142) {
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value89;
char* __dec_obj43;
struct sNullNode* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
right_value89 = (void*)0;
    self->sline=info->sline;
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(info->sname))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value89) { right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __result39__ = __result_obj__ = self;
    come_call_finalizer2(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result39__;
    come_call_finalizer2(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNode_terminated(){
void* __result_obj__;
_Bool __result40__;
memset(&__result_obj__, 0, sizeof(void*));
    __result40__ = (_Bool)0;
    return __result40__;
}

char* sNullNode_kind(){
void* __result_obj__;
void* right_value90;
char* __result41__;
memset(&__result_obj__, 0, sizeof(void*));
right_value90 = (void*)0;
    __result41__ = __result_obj__ = ((char*)(right_value90=__builtin_string("sNullNode")));
    if(right_value90) { right_value90 = come_decrement_ref_count2(right_value90, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result41__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value91;
struct CVALUE* come_value_65;
void* right_value92;
char* __dec_obj44;
void* right_value93;
void* right_value94;
struct sType* __dec_obj45;
_Bool __result42__;
memset(&__result_obj__, 0, sizeof(void*));
right_value91 = (void*)0;
memset(&come_value_65, 0, sizeof(struct CVALUE*));
right_value92 = (void*)0;
right_value93 = (void*)0;
right_value94 = (void*)0;
    come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value91=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 149, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj44=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value92=xsprintf("((void*)0)"))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count2(__dec_obj44, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value92) { right_value92 = come_decrement_ref_count2(right_value92, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj45=come_value_65->type;
    come_value_65->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value94=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value93=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 152, "struct sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value94, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_65->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_65->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
    __result42__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result42__;
    come_call_finalizer2(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNullNode_sline(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
int __result43__;
memset(&__result_obj__, 0, sizeof(void*));
    __result43__ = self->sline;
    return __result43__;
}

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value95;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
right_value95 = (void*)0;
    __result44__ = __result_obj__ = ((char*)(right_value95=__builtin_string(self->sname)));
    if(right_value95) { right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result44__;
}

struct sNode* create_null_object(struct sInfo* info){
void* __result_obj__;
void* right_value96;
void* right_value97;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value100;
struct sNode* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
right_value96 = (void*)0;
right_value97 = (void*)0;
right_value100 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 174, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value97=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value96=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 174, "struct sNullNode")))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNullNode_sline;
    _inf_value1->sname=(void*)sNullNode_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result47__ = __result_obj__ = ((struct sNode*)(right_value100=_inf_value1));
    come_call_finalizer2(sNullNode_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNullNode_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value100) { right_value100 = come_decrement_ref_count2(right_value100, ((struct sNode*)right_value100)->finalize, ((struct sNode*)right_value100)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result47__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value101;
char* __dec_obj47;
struct sNilNode* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
right_value101 = (void*)0;
    self->sline=info->sline;
    __dec_obj47=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value101=__builtin_string(info->sname))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value101) { right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __result48__ = __result_obj__ = self;
    come_call_finalizer2(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result48__;
    come_call_finalizer2(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNilNode_terminated(){
void* __result_obj__;
_Bool __result49__;
memset(&__result_obj__, 0, sizeof(void*));
    __result49__ = (_Bool)0;
    return __result49__;
}

char* sNilNode_kind(){
void* __result_obj__;
void* right_value102;
char* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value102 = (void*)0;
    __result50__ = __result_obj__ = ((char*)(right_value102=__builtin_string("sNilNode")));
    if(right_value102) { right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result50__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value103;
struct CVALUE* come_value_67;
void* right_value104;
char* __dec_obj48;
void* right_value105;
void* right_value106;
struct sType* __dec_obj49;
_Bool __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value103 = (void*)0;
memset(&come_value_67, 0, sizeof(struct CVALUE*));
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
    come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value103=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 204, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value103, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj48=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("((void*)0)"))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count2(__dec_obj48, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value104) { right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj49=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value106=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value105=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 207, "struct sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value106, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_67->type->mNullValue=(_Bool)1;
    come_value_67->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_67->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
    __result51__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result51__;
    come_call_finalizer2(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNilNode_sline(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
int __result52__;
memset(&__result_obj__, 0, sizeof(void*));
    __result52__ = self->sline;
    return __result52__;
}

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value107;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
right_value107 = (void*)0;
    __result53__ = __result_obj__ = ((char*)(right_value107=__builtin_string(self->sname)));
    if(right_value107) { right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result53__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value113;
char* __dec_obj51;
void* right_value114;
struct sNode* __dec_obj52;
void* right_value115;
struct sNode* __dec_obj53;
struct sAddNode* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
right_value113 = (void*)0;
right_value114 = (void*)0;
right_value115 = (void*)0;
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value113=__builtin_string(info->sname))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value113) { right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj52=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value114=sNode_clone(left))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count2(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value114) { right_value114 = come_decrement_ref_count2(right_value114, ((struct sNode*)right_value114)->finalize, ((struct sNode*)right_value114)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj53=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value115=sNode_clone(right))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count2(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value115) { right_value115 = come_decrement_ref_count2(right_value115, ((struct sNode*)right_value115)->finalize, ((struct sNode*)right_value115)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result57__ = __result_obj__ = self;
    come_call_finalizer2(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result57__;
    come_call_finalizer2(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAddNode_terminated(){
void* __result_obj__;
_Bool __result58__;
memset(&__result_obj__, 0, sizeof(void*));
    __result58__ = (_Bool)0;
    return __result58__;
}

char* sAddNode_kind(){
void* __result_obj__;
void* right_value116;
char* __result59__;
memset(&__result_obj__, 0, sizeof(void*));
right_value116 = (void*)0;
    __result59__ = __result_obj__ = ((char*)(right_value116=__builtin_string("sAddNode")));
    if(right_value116) { right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result59__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_69;
_Bool _if_conditional157;
_Bool __result60__;
void* right_value117;
struct CVALUE* left_value_70;
struct sNode* right_node_71;
_Bool _if_conditional158;
_Bool __result61__;
void* right_value118;
struct CVALUE* right_value_72;
struct sType* type_73;
char* fun_name_74;
_Bool calling_fun_75;
_Bool _if_conditional159;
_Bool _if_conditional160;
void* right_value119;
struct CVALUE* come_value_76;
void* right_value120;
char* __dec_obj54;
void* right_value121;
struct sType* __dec_obj55;
_Bool __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_69, 0, sizeof(struct sNode*));
right_value117 = (void*)0;
memset(&left_value_70, 0, sizeof(struct CVALUE*));
memset(&right_node_71, 0, sizeof(struct sNode*));
right_value118 = (void*)0;
memset(&right_value_72, 0, sizeof(struct CVALUE*));
memset(&type_73, 0, sizeof(struct sType*));
memset(&fun_name_74, 0, sizeof(char*));
memset(&calling_fun_75, 0, sizeof(_Bool));
right_value119 = (void*)0;
memset(&come_value_76, 0, sizeof(struct CVALUE*));
right_value120 = (void*)0;
right_value121 = (void*)0;
    left_node_69=self->mLeft;
    if(_if_conditional157=!node_compile(left_node_69,info),    _if_conditional157) {
        __result60__ = (_Bool)0;
        return __result60__;
    }
    left_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value117=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_71=self->mRight;
    if(_if_conditional158=!node_compile(right_node_71,info),    _if_conditional158) {
        __result61__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result61__;
    }
    right_value_72=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value118=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_73=(struct sType*)come_increment_ref_count(left_value_70->type);
    fun_name_74="operator_add";
    if(_if_conditional159=self->mQuote,    _if_conditional159) {
        calling_fun_75=(_Bool)0;
    }
    else {
        calling_fun_75=operator_overload_fun(type_73,fun_name_74,left_value_70,right_value_72,info);
    }
    if(_if_conditional160=!calling_fun_75,    _if_conditional160) {
        come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 300, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj54=come_value_76->c_value;
        come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value120=xsprintf("%s+%s",left_value_70->c_value,right_value_72->c_value))));
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value120) { right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj55=come_value_76->type;
        come_value_76->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value121=sType_clone(left_value_70->type))));
        come_call_finalizer2(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_76->type->mHeap=(_Bool)0;
        come_value_76->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_76->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
        come_call_finalizer2(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result62__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result62__;
    come_call_finalizer2(CVALUE_finalize,left_value_70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAddNode_sline(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
int __result63__;
memset(&__result_obj__, 0, sizeof(void*));
    __result63__ = self->sline;
    return __result63__;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value122;
char* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
    __result64__ = __result_obj__ = ((char*)(right_value122=__builtin_string(self->sname)));
    if(right_value122) { right_value122 = come_decrement_ref_count2(right_value122, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result64__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value123;
char* __dec_obj56;
void* right_value124;
struct sNode* __dec_obj57;
void* right_value125;
struct sNode* __dec_obj58;
struct sSubNode* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
    self->sline=info->sline;
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value123=__builtin_string(info->sname))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value123) { right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj57=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value124=sNode_clone(left))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count2(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value124) { right_value124 = come_decrement_ref_count2(right_value124, ((struct sNode*)right_value124)->finalize, ((struct sNode*)right_value124)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj58=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value125=sNode_clone(right))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count2(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value125) { right_value125 = come_decrement_ref_count2(right_value125, ((struct sNode*)right_value125)->finalize, ((struct sNode*)right_value125)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result65__ = __result_obj__ = self;
    come_call_finalizer2(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result65__;
    come_call_finalizer2(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sSubNode_terminated(){
void* __result_obj__;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
    __result66__ = (_Bool)0;
    return __result66__;
}

char* sSubNode_kind(){
void* __result_obj__;
void* right_value126;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    __result67__ = __result_obj__ = ((char*)(right_value126=__builtin_string("sSubNode")));
    if(right_value126) { right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result67__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_77;
_Bool _if_conditional164;
_Bool __result68__;
void* right_value127;
struct CVALUE* left_value_78;
struct sNode* right_node_79;
_Bool _if_conditional165;
_Bool __result69__;
void* right_value128;
struct CVALUE* right_value_80;
struct sType* type_81;
char* fun_name_82;
_Bool calling_fun_83;
_Bool _if_conditional166;
_Bool _if_conditional167;
void* right_value129;
struct CVALUE* come_value_84;
void* right_value130;
char* __dec_obj59;
void* right_value131;
struct sType* __dec_obj60;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_77, 0, sizeof(struct sNode*));
right_value127 = (void*)0;
memset(&left_value_78, 0, sizeof(struct CVALUE*));
memset(&right_node_79, 0, sizeof(struct sNode*));
right_value128 = (void*)0;
memset(&right_value_80, 0, sizeof(struct CVALUE*));
memset(&type_81, 0, sizeof(struct sType*));
memset(&fun_name_82, 0, sizeof(char*));
memset(&calling_fun_83, 0, sizeof(_Bool));
right_value129 = (void*)0;
memset(&come_value_84, 0, sizeof(struct CVALUE*));
right_value130 = (void*)0;
right_value131 = (void*)0;
    left_node_77=self->mLeft;
    if(_if_conditional164=!node_compile(left_node_77,info),    _if_conditional164) {
        __result68__ = (_Bool)0;
        return __result68__;
    }
    left_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value127=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_79=self->mRight;
    if(_if_conditional165=!node_compile(right_node_79,info),    _if_conditional165) {
        __result69__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result69__;
    }
    right_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value128=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_81=(struct sType*)come_increment_ref_count(left_value_78->type);
    fun_name_82="operator_sub";
    if(_if_conditional166=self->mQuote,    _if_conditional166) {
        calling_fun_83=(_Bool)0;
    }
    else {
        calling_fun_83=operator_overload_fun(type_81,fun_name_82,left_value_78,right_value_80,info);
    }
    if(_if_conditional167=!calling_fun_83,    _if_conditional167) {
        come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 391, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj59=come_value_84->c_value;
        come_value_84->c_value=(char*)come_increment_ref_count(((char*)(right_value130=xsprintf("%s-%s",left_value_78->c_value,right_value_80->c_value))));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value130) { right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj60=come_value_84->type;
        come_value_84->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value131=sType_clone(left_value_78->type))));
        come_call_finalizer2(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_84->type->mHeap=(_Bool)0;
        come_value_84->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_84->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
        come_call_finalizer2(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result70__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result70__;
    come_call_finalizer2(CVALUE_finalize,left_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_81, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sSubNode_sline(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = self->sline;
    return __result71__;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value132;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
    __result72__ = __result_obj__ = ((char*)(right_value132=__builtin_string(self->sname)));
    if(right_value132) { right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result72__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value133;
char* __dec_obj61;
void* right_value134;
struct sNode* __dec_obj62;
void* right_value135;
struct sNode* __dec_obj63;
struct sMultNode* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
    self->sline=info->sline;
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value133=__builtin_string(info->sname))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value133) { right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj62=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value134=sNode_clone(left))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count2(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value134) { right_value134 = come_decrement_ref_count2(right_value134, ((struct sNode*)right_value134)->finalize, ((struct sNode*)right_value134)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj63=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value135=sNode_clone(right))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count2(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value135) { right_value135 = come_decrement_ref_count2(right_value135, ((struct sNode*)right_value135)->finalize, ((struct sNode*)right_value135)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result73__ = __result_obj__ = self;
    come_call_finalizer2(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result73__;
    come_call_finalizer2(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMultNode_terminated(){
void* __result_obj__;
_Bool __result74__;
memset(&__result_obj__, 0, sizeof(void*));
    __result74__ = (_Bool)0;
    return __result74__;
}

char* sMultNode_kind(){
void* __result_obj__;
void* right_value136;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    __result75__ = __result_obj__ = ((char*)(right_value136=__builtin_string("sMultNode")));
    if(right_value136) { right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result75__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_85;
_Bool _if_conditional171;
_Bool __result76__;
void* right_value137;
struct CVALUE* left_value_86;
struct sNode* right_node_87;
_Bool _if_conditional172;
_Bool __result77__;
void* right_value138;
struct CVALUE* right_value_88;
struct sType* type_89;
char* fun_name_90;
_Bool calling_fun_91;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value139;
struct CVALUE* come_value_92;
void* right_value140;
char* __dec_obj64;
void* right_value141;
struct sType* __dec_obj65;
_Bool __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_85, 0, sizeof(struct sNode*));
right_value137 = (void*)0;
memset(&left_value_86, 0, sizeof(struct CVALUE*));
memset(&right_node_87, 0, sizeof(struct sNode*));
right_value138 = (void*)0;
memset(&right_value_88, 0, sizeof(struct CVALUE*));
memset(&type_89, 0, sizeof(struct sType*));
memset(&fun_name_90, 0, sizeof(char*));
memset(&calling_fun_91, 0, sizeof(_Bool));
right_value139 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value140 = (void*)0;
right_value141 = (void*)0;
    left_node_85=self->mLeft;
    if(_if_conditional171=!node_compile(left_node_85,info),    _if_conditional171) {
        __result76__ = (_Bool)0;
        return __result76__;
    }
    left_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value137=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_87=self->mRight;
    if(_if_conditional172=!node_compile(right_node_87,info),    _if_conditional172) {
        __result77__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result77__;
    }
    right_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value138=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value138, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_89=(struct sType*)come_increment_ref_count(left_value_86->type);
    fun_name_90="operator_mult";
    if(_if_conditional173=self->mQuote,    _if_conditional173) {
        calling_fun_91=(_Bool)0;
    }
    else {
        calling_fun_91=operator_overload_fun(type_89,fun_name_90,left_value_86,right_value_88,info);
    }
    if(_if_conditional174=!calling_fun_91,    _if_conditional174) {
        come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 482, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj64=come_value_92->c_value;
        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value140=xsprintf("%s*%s",left_value_86->c_value,right_value_88->c_value))));
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value140) { right_value140 = come_decrement_ref_count2(right_value140, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj65=come_value_92->type;
        come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value141=sType_clone(left_value_86->type))));
        come_call_finalizer2(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_92->type->mHeap=(_Bool)0;
        come_value_92->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_92->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
        come_call_finalizer2(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result78__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result78__;
    come_call_finalizer2(CVALUE_finalize,left_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMultNode_sline(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
int __result79__;
memset(&__result_obj__, 0, sizeof(void*));
    __result79__ = self->sline;
    return __result79__;
}

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value142;
char* __result80__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
    __result80__ = __result_obj__ = ((char*)(right_value142=__builtin_string(self->sname)));
    if(right_value142) { right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result80__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value143;
char* __dec_obj66;
void* right_value144;
struct sNode* __dec_obj67;
void* right_value145;
struct sNode* __dec_obj68;
struct sDivNode* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value143 = (void*)0;
right_value144 = (void*)0;
right_value145 = (void*)0;
    self->sline=info->sline;
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value143=__builtin_string(info->sname))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value143) { right_value143 = come_decrement_ref_count2(right_value143, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj67=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(left))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count2(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value144) { right_value144 = come_decrement_ref_count2(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj68=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=sNode_clone(right))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count2(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result81__ = __result_obj__ = self;
    come_call_finalizer2(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result81__;
    come_call_finalizer2(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDivNode_terminated(){
void* __result_obj__;
_Bool __result82__;
memset(&__result_obj__, 0, sizeof(void*));
    __result82__ = (_Bool)0;
    return __result82__;
}

char* sDivNode_kind(){
void* __result_obj__;
void* right_value146;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
right_value146 = (void*)0;
    __result83__ = __result_obj__ = ((char*)(right_value146=__builtin_string("sDivNode")));
    if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result83__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_93;
_Bool _if_conditional178;
_Bool __result84__;
void* right_value147;
struct CVALUE* left_value_94;
struct sNode* right_node_95;
_Bool _if_conditional179;
_Bool __result85__;
void* right_value148;
struct CVALUE* right_value_96;
struct sType* type_97;
char* fun_name_98;
_Bool calling_fun_99;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value149;
struct CVALUE* come_value_100;
void* right_value150;
char* __dec_obj69;
void* right_value151;
struct sType* __dec_obj70;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_93, 0, sizeof(struct sNode*));
right_value147 = (void*)0;
memset(&left_value_94, 0, sizeof(struct CVALUE*));
memset(&right_node_95, 0, sizeof(struct sNode*));
right_value148 = (void*)0;
memset(&right_value_96, 0, sizeof(struct CVALUE*));
memset(&type_97, 0, sizeof(struct sType*));
memset(&fun_name_98, 0, sizeof(char*));
memset(&calling_fun_99, 0, sizeof(_Bool));
right_value149 = (void*)0;
memset(&come_value_100, 0, sizeof(struct CVALUE*));
right_value150 = (void*)0;
right_value151 = (void*)0;
    left_node_93=self->mLeft;
    if(_if_conditional178=!node_compile(left_node_93,info),    _if_conditional178) {
        __result84__ = (_Bool)0;
        return __result84__;
    }
    left_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_95=self->mRight;
    if(_if_conditional179=!node_compile(right_node_95,info),    _if_conditional179) {
        __result85__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result85__;
    }
    right_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_97=(struct sType*)come_increment_ref_count(left_value_94->type);
    fun_name_98="operator_div";
    if(_if_conditional180=self->mQuote,    _if_conditional180) {
        calling_fun_99=(_Bool)0;
    }
    else {
        calling_fun_99=operator_overload_fun(type_97,fun_name_98,left_value_94,right_value_96,info);
    }
    if(_if_conditional181=!calling_fun_99,    _if_conditional181) {
        come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 573, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj69=come_value_100->c_value;
        come_value_100->c_value=(char*)come_increment_ref_count(((char*)(right_value150=xsprintf("%s/%s",left_value_94->c_value,right_value_96->c_value))));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value150) { right_value150 = come_decrement_ref_count2(right_value150, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj70=come_value_100->type;
        come_value_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value151=sType_clone(left_value_94->type))));
        come_call_finalizer2(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_100->type->mHeap=(_Bool)0;
        come_value_100->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_100->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_100));
        come_call_finalizer2(CVALUE_finalize,come_value_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result86__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result86__;
    come_call_finalizer2(CVALUE_finalize,left_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_96, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sDivNode_sline(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
int __result87__;
memset(&__result_obj__, 0, sizeof(void*));
    __result87__ = self->sline;
    return __result87__;
}

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value152;
char* __result88__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
    __result88__ = __result_obj__ = ((char*)(right_value152=__builtin_string(self->sname)));
    if(right_value152) { right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result88__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value153;
char* __dec_obj71;
void* right_value154;
struct sNode* __dec_obj72;
void* right_value155;
struct sNode* __dec_obj73;
struct sModNode* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
right_value154 = (void*)0;
right_value155 = (void*)0;
    self->sline=info->sline;
    __dec_obj71=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value153=__builtin_string(info->sname))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj72=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=sNode_clone(left))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count2(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj73=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=sNode_clone(right))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count2(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result89__ = __result_obj__ = self;
    come_call_finalizer2(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result89__;
    come_call_finalizer2(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sModNode_terminated(){
void* __result_obj__;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
    __result90__ = (_Bool)0;
    return __result90__;
}

char* sModNode_kind(){
void* __result_obj__;
void* right_value156;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
right_value156 = (void*)0;
    __result91__ = __result_obj__ = ((char*)(right_value156=__builtin_string("sModNode")));
    if(right_value156) { right_value156 = come_decrement_ref_count2(right_value156, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result91__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_101;
_Bool _if_conditional185;
_Bool __result92__;
void* right_value157;
struct CVALUE* left_value_102;
struct sNode* right_node_103;
_Bool _if_conditional186;
_Bool __result93__;
void* right_value158;
struct CVALUE* right_value_104;
struct sType* type_105;
char* fun_name_106;
_Bool calling_fun_107;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value159;
struct CVALUE* come_value_108;
void* right_value160;
char* __dec_obj74;
void* right_value161;
struct sType* __dec_obj75;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_101, 0, sizeof(struct sNode*));
right_value157 = (void*)0;
memset(&left_value_102, 0, sizeof(struct CVALUE*));
memset(&right_node_103, 0, sizeof(struct sNode*));
right_value158 = (void*)0;
memset(&right_value_104, 0, sizeof(struct CVALUE*));
memset(&type_105, 0, sizeof(struct sType*));
memset(&fun_name_106, 0, sizeof(char*));
memset(&calling_fun_107, 0, sizeof(_Bool));
right_value159 = (void*)0;
memset(&come_value_108, 0, sizeof(struct CVALUE*));
right_value160 = (void*)0;
right_value161 = (void*)0;
    left_node_101=self->mLeft;
    if(_if_conditional185=!node_compile(left_node_101,info),    _if_conditional185) {
        __result92__ = (_Bool)0;
        return __result92__;
    }
    left_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_103=self->mRight;
    if(_if_conditional186=!node_compile(right_node_103,info),    _if_conditional186) {
        __result93__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result93__;
    }
    right_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_105=(struct sType*)come_increment_ref_count(left_value_102->type);
    fun_name_106="operator_mod";
    if(_if_conditional187=self->mQuote,    _if_conditional187) {
        calling_fun_107=(_Bool)0;
    }
    else {
        calling_fun_107=operator_overload_fun(type_105,fun_name_106,left_value_102,right_value_104,info);
    }
    if(_if_conditional188=!calling_fun_107,    _if_conditional188) {
        come_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 664, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj74=come_value_108->c_value;
        come_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value160=xsprintf("%s%%%s",left_value_102->c_value,right_value_104->c_value))));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value160) { right_value160 = come_decrement_ref_count2(right_value160, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj75=come_value_108->type;
        come_value_108->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value161=sType_clone(left_value_102->type))));
        come_call_finalizer2(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_108->type->mHeap=(_Bool)0;
        come_value_108->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_108->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_108));
        come_call_finalizer2(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result94__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result94__;
    come_call_finalizer2(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sModNode_sline(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
int __result95__;
memset(&__result_obj__, 0, sizeof(void*));
    __result95__ = self->sline;
    return __result95__;
}

char* sModNode_sname(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value162;
char* __result96__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
    __result96__ = __result_obj__ = ((char*)(right_value162=__builtin_string(self->sname)));
    if(right_value162) { right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result96__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value163;
char* __dec_obj76;
void* right_value164;
struct sNode* __dec_obj77;
void* right_value165;
struct sNode* __dec_obj78;
struct sLShiftNode* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
right_value164 = (void*)0;
right_value165 = (void*)0;
    self->sline=info->sline;
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value163=__builtin_string(info->sname))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count2(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value164) { right_value164 = come_decrement_ref_count2(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj78=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=sNode_clone(right))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count2(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result97__ = __result_obj__ = self;
    come_call_finalizer2(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result97__;
    come_call_finalizer2(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLShiftNode_terminated(){
void* __result_obj__;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
    __result98__ = (_Bool)0;
    return __result98__;
}

char* sLShiftNode_kind(){
void* __result_obj__;
void* right_value166;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
right_value166 = (void*)0;
    __result99__ = __result_obj__ = ((char*)(right_value166=__builtin_string("sLShiftNode")));
    if(right_value166) { right_value166 = come_decrement_ref_count2(right_value166, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result99__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_109;
_Bool _if_conditional192;
_Bool __result100__;
void* right_value167;
struct CVALUE* left_value_110;
struct sNode* right_node_111;
_Bool _if_conditional193;
_Bool __result101__;
void* right_value168;
struct CVALUE* right_value_112;
struct sType* type_113;
char* fun_name_114;
_Bool calling_fun_115;
_Bool _if_conditional194;
_Bool _if_conditional195;
void* right_value169;
struct CVALUE* come_value_116;
void* right_value170;
char* __dec_obj79;
void* right_value171;
struct sType* __dec_obj80;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_109, 0, sizeof(struct sNode*));
right_value167 = (void*)0;
memset(&left_value_110, 0, sizeof(struct CVALUE*));
memset(&right_node_111, 0, sizeof(struct sNode*));
right_value168 = (void*)0;
memset(&right_value_112, 0, sizeof(struct CVALUE*));
memset(&type_113, 0, sizeof(struct sType*));
memset(&fun_name_114, 0, sizeof(char*));
memset(&calling_fun_115, 0, sizeof(_Bool));
right_value169 = (void*)0;
memset(&come_value_116, 0, sizeof(struct CVALUE*));
right_value170 = (void*)0;
right_value171 = (void*)0;
    left_node_109=self->mLeft;
    if(_if_conditional192=!node_compile(left_node_109,info),    _if_conditional192) {
        __result100__ = (_Bool)0;
        return __result100__;
    }
    left_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_111=self->mRight;
    if(_if_conditional193=!node_compile(right_node_111,info),    _if_conditional193) {
        __result101__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result101__;
    }
    right_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_113=(struct sType*)come_increment_ref_count(left_value_110->type);
    fun_name_114="operator_lshift";
    if(_if_conditional194=self->mQuote,    _if_conditional194) {
        calling_fun_115=(_Bool)0;
    }
    else {
        calling_fun_115=operator_overload_fun(type_113,fun_name_114,left_value_110,right_value_112,info);
    }
    if(_if_conditional195=!calling_fun_115,    _if_conditional195) {
        come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 755, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj79=come_value_116->c_value;
        come_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value170=xsprintf("%s<<%s",left_value_110->c_value,right_value_112->c_value))));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value170) { right_value170 = come_decrement_ref_count2(right_value170, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj80=come_value_116->type;
        come_value_116->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value171=sType_clone(left_value_110->type))));
        come_call_finalizer2(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_116->type->mHeap=(_Bool)0;
        come_value_116->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_116->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_116));
        come_call_finalizer2(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result102__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result102__;
    come_call_finalizer2(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
int __result103__;
memset(&__result_obj__, 0, sizeof(void*));
    __result103__ = self->sline;
    return __result103__;
}

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value172;
char* __result104__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
    __result104__ = __result_obj__ = ((char*)(right_value172=__builtin_string(self->sname)));
    if(right_value172) { right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result104__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value173;
char* __dec_obj81;
void* right_value174;
struct sNode* __dec_obj82;
void* right_value175;
struct sNode* __dec_obj83;
struct sRShiftNode* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
right_value174 = (void*)0;
right_value175 = (void*)0;
    self->sline=info->sline;
    __dec_obj81=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value173=__builtin_string(info->sname))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj82=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value174=sNode_clone(left))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count2(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value174) { right_value174 = come_decrement_ref_count2(right_value174, ((struct sNode*)right_value174)->finalize, ((struct sNode*)right_value174)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj83=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=sNode_clone(right))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count2(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value175) { right_value175 = come_decrement_ref_count2(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result105__ = __result_obj__ = self;
    come_call_finalizer2(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result105__;
    come_call_finalizer2(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRShiftNode_terminated(){
void* __result_obj__;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
    __result106__ = (_Bool)0;
    return __result106__;
}

char* sRShiftNode_kind(){
void* __result_obj__;
void* right_value176;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
right_value176 = (void*)0;
    __result107__ = __result_obj__ = ((char*)(right_value176=__builtin_string("sRShiftNode")));
    if(right_value176) { right_value176 = come_decrement_ref_count2(right_value176, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result107__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_117;
_Bool _if_conditional199;
_Bool __result108__;
void* right_value177;
struct CVALUE* left_value_118;
struct sNode* right_node_119;
_Bool _if_conditional200;
_Bool __result109__;
void* right_value178;
struct CVALUE* right_value_120;
struct sType* type_121;
char* fun_name_122;
_Bool calling_fun_123;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value179;
struct CVALUE* come_value_124;
void* right_value180;
char* __dec_obj84;
void* right_value181;
struct sType* __dec_obj85;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_117, 0, sizeof(struct sNode*));
right_value177 = (void*)0;
memset(&left_value_118, 0, sizeof(struct CVALUE*));
memset(&right_node_119, 0, sizeof(struct sNode*));
right_value178 = (void*)0;
memset(&right_value_120, 0, sizeof(struct CVALUE*));
memset(&type_121, 0, sizeof(struct sType*));
memset(&fun_name_122, 0, sizeof(char*));
memset(&calling_fun_123, 0, sizeof(_Bool));
right_value179 = (void*)0;
memset(&come_value_124, 0, sizeof(struct CVALUE*));
right_value180 = (void*)0;
right_value181 = (void*)0;
    left_node_117=self->mLeft;
    if(_if_conditional199=!node_compile(left_node_117,info),    _if_conditional199) {
        __result108__ = (_Bool)0;
        return __result108__;
    }
    left_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_119=self->mRight;
    if(_if_conditional200=!node_compile(right_node_119,info),    _if_conditional200) {
        __result109__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result109__;
    }
    right_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_121=(struct sType*)come_increment_ref_count(left_value_118->type);
    fun_name_122="operator_rshift";
    if(_if_conditional201=self->mQuote,    _if_conditional201) {
        calling_fun_123=(_Bool)0;
    }
    else {
        calling_fun_123=operator_overload_fun(type_121,fun_name_122,left_value_118,right_value_120,info);
    }
    if(_if_conditional202=!calling_fun_123,    _if_conditional202) {
        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value179=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 846, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj84=come_value_124->c_value;
        come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value180=xsprintf("%s>>%s",left_value_118->c_value,right_value_120->c_value))));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value180) { right_value180 = come_decrement_ref_count2(right_value180, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj85=come_value_124->type;
        come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value181=sType_clone(left_value_118->type))));
        come_call_finalizer2(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_124->type->mHeap=(_Bool)0;
        come_value_124->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_124->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
        come_call_finalizer2(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result110__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result110__;
    come_call_finalizer2(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_121, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
int __result111__;
memset(&__result_obj__, 0, sizeof(void*));
    __result111__ = self->sline;
    return __result111__;
}

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value182;
char* __result112__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
    __result112__ = __result_obj__ = ((char*)(right_value182=__builtin_string(self->sname)));
    if(right_value182) { right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result112__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value183;
char* __dec_obj86;
void* right_value184;
struct sNode* __dec_obj87;
void* right_value185;
struct sNode* __dec_obj88;
struct sGtEqNode* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
right_value184 = (void*)0;
right_value185 = (void*)0;
    self->sline=info->sline;
    __dec_obj86=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value183=__builtin_string(info->sname))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value183) { right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj87=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value184=sNode_clone(left))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count2(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value184) { right_value184 = come_decrement_ref_count2(right_value184, ((struct sNode*)right_value184)->finalize, ((struct sNode*)right_value184)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj88=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=sNode_clone(right))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count2(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result113__ = __result_obj__ = self;
    come_call_finalizer2(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result113__;
    come_call_finalizer2(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGtEqNode_terminated(){
void* __result_obj__;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
    __result114__ = (_Bool)0;
    return __result114__;
}

char* sGtEqNode_kind(){
void* __result_obj__;
void* right_value186;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
right_value186 = (void*)0;
    __result115__ = __result_obj__ = ((char*)(right_value186=__builtin_string("sGtEqNode")));
    if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result115__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_125;
_Bool _if_conditional206;
_Bool __result116__;
void* right_value187;
struct CVALUE* left_value_126;
struct sNode* right_node_127;
_Bool _if_conditional207;
_Bool __result117__;
void* right_value188;
struct CVALUE* right_value_128;
struct sType* type_129;
char* fun_name_130;
_Bool calling_fun_131;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value189;
struct CVALUE* come_value_132;
void* right_value190;
char* __dec_obj89;
void* right_value191;
struct sType* __dec_obj90;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_125, 0, sizeof(struct sNode*));
right_value187 = (void*)0;
memset(&left_value_126, 0, sizeof(struct CVALUE*));
memset(&right_node_127, 0, sizeof(struct sNode*));
right_value188 = (void*)0;
memset(&right_value_128, 0, sizeof(struct CVALUE*));
memset(&type_129, 0, sizeof(struct sType*));
memset(&fun_name_130, 0, sizeof(char*));
memset(&calling_fun_131, 0, sizeof(_Bool));
right_value189 = (void*)0;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
right_value190 = (void*)0;
right_value191 = (void*)0;
    left_node_125=self->mLeft;
    if(_if_conditional206=!node_compile(left_node_125,info),    _if_conditional206) {
        __result116__ = (_Bool)0;
        return __result116__;
    }
    left_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_127=self->mRight;
    if(_if_conditional207=!node_compile(right_node_127,info),    _if_conditional207) {
        __result117__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result117__;
    }
    right_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_129=(struct sType*)come_increment_ref_count(left_value_126->type);
    fun_name_130="operator_gteq";
    if(_if_conditional208=self->mQuote,    _if_conditional208) {
        calling_fun_131=(_Bool)0;
    }
    else {
        calling_fun_131=operator_overload_fun(type_129,fun_name_130,left_value_126,right_value_128,info);
    }
    if(_if_conditional209=!calling_fun_131,    _if_conditional209) {
        come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 937, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj89=come_value_132->c_value;
        come_value_132->c_value=(char*)come_increment_ref_count(((char*)(right_value190=xsprintf("%s>=%s",left_value_126->c_value,right_value_128->c_value))));
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value190) { right_value190 = come_decrement_ref_count2(right_value190, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj90=come_value_132->type;
        come_value_132->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value191=sType_clone(left_value_126->type))));
        come_call_finalizer2(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_132->type->mHeap=(_Bool)0;
        come_value_132->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_132->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
        come_call_finalizer2(CVALUE_finalize,come_value_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result118__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result118__;
    come_call_finalizer2(CVALUE_finalize,left_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_129, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result119__;
memset(&__result_obj__, 0, sizeof(void*));
    __result119__ = self->sline;
    return __result119__;
}

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value192;
char* __result120__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
    __result120__ = __result_obj__ = ((char*)(right_value192=__builtin_string(self->sname)));
    if(right_value192) { right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result120__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value193;
char* __dec_obj91;
void* right_value194;
struct sNode* __dec_obj92;
void* right_value195;
struct sNode* __dec_obj93;
struct sLtEqNode* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
right_value194 = (void*)0;
right_value195 = (void*)0;
    self->sline=info->sline;
    __dec_obj91=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value193=__builtin_string(info->sname))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj92=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=sNode_clone(left))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count2(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value194) { right_value194 = come_decrement_ref_count2(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj93=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(right))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count2(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result121__ = __result_obj__ = self;
    come_call_finalizer2(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result121__;
    come_call_finalizer2(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLtEqNode_terminated(){
void* __result_obj__;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
    __result122__ = (_Bool)0;
    return __result122__;
}

char* sLtEqNode_kind(){
void* __result_obj__;
void* right_value196;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
right_value196 = (void*)0;
    __result123__ = __result_obj__ = ((char*)(right_value196=__builtin_string("sLtEqNode")));
    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result123__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_133;
_Bool _if_conditional213;
_Bool __result124__;
void* right_value197;
struct CVALUE* left_value_134;
struct sNode* right_node_135;
_Bool _if_conditional214;
_Bool __result125__;
void* right_value198;
struct CVALUE* right_value_136;
struct sType* type_137;
char* fun_name_138;
_Bool calling_fun_139;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value199;
struct CVALUE* come_value_140;
void* right_value200;
char* __dec_obj94;
void* right_value201;
struct sType* __dec_obj95;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_133, 0, sizeof(struct sNode*));
right_value197 = (void*)0;
memset(&left_value_134, 0, sizeof(struct CVALUE*));
memset(&right_node_135, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
memset(&right_value_136, 0, sizeof(struct CVALUE*));
memset(&type_137, 0, sizeof(struct sType*));
memset(&fun_name_138, 0, sizeof(char*));
memset(&calling_fun_139, 0, sizeof(_Bool));
right_value199 = (void*)0;
memset(&come_value_140, 0, sizeof(struct CVALUE*));
right_value200 = (void*)0;
right_value201 = (void*)0;
    left_node_133=self->mLeft;
    if(_if_conditional213=!node_compile(left_node_133,info),    _if_conditional213) {
        __result124__ = (_Bool)0;
        return __result124__;
    }
    left_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value197=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_135=self->mRight;
    if(_if_conditional214=!node_compile(right_node_135,info),    _if_conditional214) {
        __result125__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result125__;
    }
    right_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_137=(struct sType*)come_increment_ref_count(left_value_134->type);
    fun_name_138="operator_lteq";
    if(_if_conditional215=self->mQuote,    _if_conditional215) {
        calling_fun_139=(_Bool)0;
    }
    else {
        calling_fun_139=operator_overload_fun(type_137,fun_name_138,left_value_134,right_value_136,info);
    }
    if(_if_conditional216=!calling_fun_139,    _if_conditional216) {
        come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1028, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj94=come_value_140->c_value;
        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value200=xsprintf("%s<=%s",left_value_134->c_value,right_value_136->c_value))));
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value200) { right_value200 = come_decrement_ref_count2(right_value200, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj95=come_value_140->type;
        come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value201=sType_clone(left_value_134->type))));
        come_call_finalizer2(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_140->type->mHeap=(_Bool)0;
        come_value_140->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_140->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
        come_call_finalizer2(CVALUE_finalize,come_value_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result126__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result126__;
    come_call_finalizer2(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_136, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result127__;
memset(&__result_obj__, 0, sizeof(void*));
    __result127__ = self->sline;
    return __result127__;
}

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value202;
char* __result128__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
    __result128__ = __result_obj__ = ((char*)(right_value202=__builtin_string(self->sname)));
    if(right_value202) { right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result128__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value203;
char* __dec_obj96;
void* right_value204;
struct sNode* __dec_obj97;
void* right_value205;
struct sNode* __dec_obj98;
struct sLtNode* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
right_value204 = (void*)0;
right_value205 = (void*)0;
    self->sline=info->sline;
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value203=__builtin_string(info->sname))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value203) { right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj97=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNode_clone(left))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count2(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value204) { right_value204 = come_decrement_ref_count2(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj98=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(right))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count2(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result129__ = __result_obj__ = self;
    come_call_finalizer2(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result129__;
    come_call_finalizer2(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLtNode_terminated(){
void* __result_obj__;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
    __result130__ = (_Bool)0;
    return __result130__;
}

char* sLtNode_kind(){
void* __result_obj__;
void* right_value206;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
right_value206 = (void*)0;
    __result131__ = __result_obj__ = ((char*)(right_value206=__builtin_string("sLtNode")));
    if(right_value206) { right_value206 = come_decrement_ref_count2(right_value206, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result131__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_141;
_Bool _if_conditional220;
_Bool __result132__;
void* right_value207;
struct CVALUE* left_value_142;
struct sNode* right_node_143;
_Bool _if_conditional221;
_Bool __result133__;
void* right_value208;
struct CVALUE* right_value_144;
struct sType* type_145;
char* fun_name_146;
_Bool calling_fun_147;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value209;
struct CVALUE* come_value_148;
void* right_value210;
char* __dec_obj99;
void* right_value211;
struct sType* __dec_obj100;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_141, 0, sizeof(struct sNode*));
right_value207 = (void*)0;
memset(&left_value_142, 0, sizeof(struct CVALUE*));
memset(&right_node_143, 0, sizeof(struct sNode*));
right_value208 = (void*)0;
memset(&right_value_144, 0, sizeof(struct CVALUE*));
memset(&type_145, 0, sizeof(struct sType*));
memset(&fun_name_146, 0, sizeof(char*));
memset(&calling_fun_147, 0, sizeof(_Bool));
right_value209 = (void*)0;
memset(&come_value_148, 0, sizeof(struct CVALUE*));
right_value210 = (void*)0;
right_value211 = (void*)0;
    left_node_141=self->mLeft;
    if(_if_conditional220=!node_compile(left_node_141,info),    _if_conditional220) {
        __result132__ = (_Bool)0;
        return __result132__;
    }
    left_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_143=self->mRight;
    if(_if_conditional221=!node_compile(right_node_143,info),    _if_conditional221) {
        __result133__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result133__;
    }
    right_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_145=(struct sType*)come_increment_ref_count(left_value_142->type);
    fun_name_146="operator_lt";
    if(_if_conditional222=self->mQuote,    _if_conditional222) {
        calling_fun_147=(_Bool)0;
    }
    else {
        calling_fun_147=operator_overload_fun(type_145,fun_name_146,left_value_142,right_value_144,info);
    }
    if(_if_conditional223=!calling_fun_147,    _if_conditional223) {
        come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1119, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj99=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value210=xsprintf("%s<%s",left_value_142->c_value,right_value_144->c_value))));
        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value210) { right_value210 = come_decrement_ref_count2(right_value210, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj100=come_value_148->type;
        come_value_148->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value211=sType_clone(left_value_142->type))));
        come_call_finalizer2(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_148->type->mHeap=(_Bool)0;
        come_value_148->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_148->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
        come_call_finalizer2(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result134__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result134__;
    come_call_finalizer2(CVALUE_finalize,left_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_144, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLtNode_sline(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
int __result135__;
memset(&__result_obj__, 0, sizeof(void*));
    __result135__ = self->sline;
    return __result135__;
}

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value212;
char* __result136__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
    __result136__ = __result_obj__ = ((char*)(right_value212=__builtin_string(self->sname)));
    if(right_value212) { right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result136__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value213;
char* __dec_obj101;
void* right_value214;
struct sNode* __dec_obj102;
void* right_value215;
struct sNode* __dec_obj103;
struct sGtNode* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
right_value214 = (void*)0;
right_value215 = (void*)0;
    self->sline=info->sline;
    __dec_obj101=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value213=__builtin_string(info->sname))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj102=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(left))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count2(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value214) { right_value214 = come_decrement_ref_count2(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj103=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value215=sNode_clone(right))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count2(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value215) { right_value215 = come_decrement_ref_count2(right_value215, ((struct sNode*)right_value215)->finalize, ((struct sNode*)right_value215)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result137__ = __result_obj__ = self;
    come_call_finalizer2(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result137__;
    come_call_finalizer2(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGtNode_terminated(){
void* __result_obj__;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
    __result138__ = (_Bool)0;
    return __result138__;
}

char* sGtNode_kind(){
void* __result_obj__;
void* right_value216;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
right_value216 = (void*)0;
    __result139__ = __result_obj__ = ((char*)(right_value216=__builtin_string("sGtNode")));
    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result139__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_149;
_Bool _if_conditional227;
_Bool __result140__;
void* right_value217;
struct CVALUE* left_value_150;
struct sNode* right_node_151;
_Bool _if_conditional228;
_Bool __result141__;
void* right_value218;
struct CVALUE* right_value_152;
struct sType* type_153;
char* fun_name_154;
_Bool calling_fun_155;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value219;
struct CVALUE* come_value_156;
void* right_value220;
char* __dec_obj104;
void* right_value221;
struct sType* __dec_obj105;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_149, 0, sizeof(struct sNode*));
right_value217 = (void*)0;
memset(&left_value_150, 0, sizeof(struct CVALUE*));
memset(&right_node_151, 0, sizeof(struct sNode*));
right_value218 = (void*)0;
memset(&right_value_152, 0, sizeof(struct CVALUE*));
memset(&type_153, 0, sizeof(struct sType*));
memset(&fun_name_154, 0, sizeof(char*));
memset(&calling_fun_155, 0, sizeof(_Bool));
right_value219 = (void*)0;
memset(&come_value_156, 0, sizeof(struct CVALUE*));
right_value220 = (void*)0;
right_value221 = (void*)0;
    left_node_149=self->mLeft;
    if(_if_conditional227=!node_compile(left_node_149,info),    _if_conditional227) {
        __result140__ = (_Bool)0;
        return __result140__;
    }
    left_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_151=self->mRight;
    if(_if_conditional228=!node_compile(right_node_151,info),    _if_conditional228) {
        __result141__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result141__;
    }
    right_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_153=(struct sType*)come_increment_ref_count(left_value_150->type);
    fun_name_154="operator_gt";
    if(_if_conditional229=self->mQuote,    _if_conditional229) {
        calling_fun_155=(_Bool)0;
    }
    else {
        calling_fun_155=operator_overload_fun(type_153,fun_name_154,left_value_150,right_value_152,info);
    }
    if(_if_conditional230=!calling_fun_155,    _if_conditional230) {
        come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value219=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1210, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj104=come_value_156->c_value;
        come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value220=xsprintf("%s>%s",left_value_150->c_value,right_value_152->c_value))));
        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value220) { right_value220 = come_decrement_ref_count2(right_value220, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj105=come_value_156->type;
        come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value221=sType_clone(left_value_150->type))));
        come_call_finalizer2(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_156->type->mHeap=(_Bool)0;
        come_value_156->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_156->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
        come_call_finalizer2(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result142__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result142__;
    come_call_finalizer2(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sGtNode_sline(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
int __result143__;
memset(&__result_obj__, 0, sizeof(void*));
    __result143__ = self->sline;
    return __result143__;
}

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value222;
char* __result144__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
    __result144__ = __result_obj__ = ((char*)(right_value222=__builtin_string(self->sname)));
    if(right_value222) { right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result144__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value223;
char* __dec_obj106;
void* right_value224;
struct sNode* __dec_obj107;
void* right_value225;
struct sNode* __dec_obj108;
struct sEqNode* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
right_value224 = (void*)0;
right_value225 = (void*)0;
    self->sline=info->sline;
    __dec_obj106=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value223=__builtin_string(info->sname))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj107=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=sNode_clone(left))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count2(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj108=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=sNode_clone(right))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count2(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result145__ = __result_obj__ = self;
    come_call_finalizer2(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result145__;
    come_call_finalizer2(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sEqNode_sline(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
    __result146__ = self->sline;
    return __result146__;
}

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value226;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
right_value226 = (void*)0;
    __result147__ = __result_obj__ = ((char*)(right_value226=__builtin_string(self->sname)));
    if(right_value226) { right_value226 = come_decrement_ref_count2(right_value226, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result147__;
}

_Bool sEqNode_terminated(){
void* __result_obj__;
_Bool __result148__;
memset(&__result_obj__, 0, sizeof(void*));
    __result148__ = (_Bool)0;
    return __result148__;
}

char* sEqNode_kind(){
void* __result_obj__;
void* right_value227;
char* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
    __result149__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sEqNode")));
    if(right_value227) { right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result149__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_157;
_Bool _if_conditional234;
_Bool __result150__;
void* right_value228;
struct CVALUE* left_value_158;
struct sNode* right_node_159;
_Bool _if_conditional235;
_Bool __result151__;
void* right_value229;
struct CVALUE* right_value_160;
void* right_value230;
struct CVALUE* come_value_161;
void* right_value231;
char* __dec_obj109;
void* right_value232;
struct sType* __dec_obj110;
_Bool __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_157, 0, sizeof(struct sNode*));
right_value228 = (void*)0;
memset(&left_value_158, 0, sizeof(struct CVALUE*));
memset(&right_node_159, 0, sizeof(struct sNode*));
right_value229 = (void*)0;
memset(&right_value_160, 0, sizeof(struct CVALUE*));
right_value230 = (void*)0;
memset(&come_value_161, 0, sizeof(struct CVALUE*));
right_value231 = (void*)0;
right_value232 = (void*)0;
    left_node_157=self->mLeft;
    if(_if_conditional234=!node_compile(left_node_157,info),    _if_conditional234) {
        __result150__ = (_Bool)0;
        return __result150__;
    }
    left_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_159=self->mRight;
    if(_if_conditional235=!node_compile(right_node_159,info),    _if_conditional235) {
        __result151__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result151__;
    }
    right_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1299, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj109=come_value_161->c_value;
    come_value_161->c_value=(char*)come_increment_ref_count(((char*)(right_value231=xsprintf("%s==%s",left_value_158->c_value,right_value_160->c_value))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value231) { right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj110=come_value_161->type;
    come_value_161->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(left_value_158->type))));
    come_call_finalizer2(sType_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_161->type->mHeap=(_Bool)0;
    come_value_161->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_161->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_161));
    __result152__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result152__;
    come_call_finalizer2(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_160, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value233;
char* __dec_obj111;
void* right_value234;
struct sNode* __dec_obj112;
void* right_value235;
struct sNode* __dec_obj113;
struct sNotEqNode* __result153__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
right_value234 = (void*)0;
right_value235 = (void*)0;
    self->sline=info->sline;
    __dec_obj111=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value233=__builtin_string(info->sname))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value233) { right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj112=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=sNode_clone(left))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count2(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value234) { right_value234 = come_decrement_ref_count2(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj113=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=sNode_clone(right))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count2(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value235) { right_value235 = come_decrement_ref_count2(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result153__ = __result_obj__ = self;
    come_call_finalizer2(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result153__;
    come_call_finalizer2(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sNotEqNode_terminated(){
void* __result_obj__;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
    __result154__ = (_Bool)0;
    return __result154__;
}

char* sNotEqNode_kind(){
void* __result_obj__;
void* right_value236;
char* __result155__;
memset(&__result_obj__, 0, sizeof(void*));
right_value236 = (void*)0;
    __result155__ = __result_obj__ = ((char*)(right_value236=__builtin_string("sNotEqNode")));
    if(right_value236) { right_value236 = come_decrement_ref_count2(right_value236, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result155__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_162;
_Bool _if_conditional239;
_Bool __result156__;
void* right_value237;
struct CVALUE* left_value_163;
struct sNode* right_node_164;
_Bool _if_conditional240;
_Bool __result157__;
void* right_value238;
struct CVALUE* right_value_165;
void* right_value239;
struct CVALUE* come_value_166;
void* right_value240;
char* __dec_obj114;
void* right_value241;
struct sType* __dec_obj115;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_162, 0, sizeof(struct sNode*));
right_value237 = (void*)0;
memset(&left_value_163, 0, sizeof(struct CVALUE*));
memset(&right_node_164, 0, sizeof(struct sNode*));
right_value238 = (void*)0;
memset(&right_value_165, 0, sizeof(struct CVALUE*));
right_value239 = (void*)0;
memset(&come_value_166, 0, sizeof(struct CVALUE*));
right_value240 = (void*)0;
right_value241 = (void*)0;
    left_node_162=self->mLeft;
    if(_if_conditional239=!node_compile(left_node_162,info),    _if_conditional239) {
        __result156__ = (_Bool)0;
        return __result156__;
    }
    left_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_164=self->mRight;
    if(_if_conditional240=!node_compile(right_node_164,info),    _if_conditional240) {
        __result157__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result157__;
    }
    right_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1367, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj114=come_value_166->c_value;
    come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value240=xsprintf("%s!=%s",left_value_163->c_value,right_value_165->c_value))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value240) { right_value240 = come_decrement_ref_count2(right_value240, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj115=come_value_166->type;
    come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value241=sType_clone(left_value_163->type))));
    come_call_finalizer2(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_166->type->mHeap=(_Bool)0;
    come_value_166->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_166->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
    __result158__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result158__;
    come_call_finalizer2(CVALUE_finalize,left_value_163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_165, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result159__;
memset(&__result_obj__, 0, sizeof(void*));
    __result159__ = self->sline;
    return __result159__;
}

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value242;
char* __result160__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
    __result160__ = __result_obj__ = ((char*)(right_value242=__builtin_string(self->sname)));
    if(right_value242) { right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result160__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value243;
char* __dec_obj116;
void* right_value244;
struct sNode* __dec_obj117;
void* right_value245;
struct sNode* __dec_obj118;
struct sEq2Node* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
right_value244 = (void*)0;
right_value245 = (void*)0;
    self->sline=info->sline;
    __dec_obj116=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value243=__builtin_string(info->sname))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value243) { right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj117=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(left))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count2(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value244) { right_value244 = come_decrement_ref_count2(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj118=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=sNode_clone(right))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count2(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result161__ = __result_obj__ = self;
    come_call_finalizer2(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result161__;
    come_call_finalizer2(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sEq2Node_terminated(){
void* __result_obj__;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
    __result162__ = (_Bool)0;
    return __result162__;
}

char* sEq2Node_kind(){
void* __result_obj__;
void* right_value246;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
right_value246 = (void*)0;
    __result163__ = __result_obj__ = ((char*)(right_value246=__builtin_string("sEq2Node")));
    if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result163__;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_167;
_Bool _if_conditional244;
_Bool __result164__;
void* right_value247;
struct CVALUE* left_value_168;
struct sNode* right_node_169;
_Bool _if_conditional245;
_Bool __result165__;
void* right_value248;
struct CVALUE* right_value_170;
struct sType* type_171;
char* fun_name_172;
_Bool calling_fun_173;
_Bool _if_conditional246;
_Bool _if_conditional247;
void* right_value249;
struct CVALUE* come_value_174;
void* right_value250;
char* __dec_obj119;
void* right_value251;
struct sType* __dec_obj120;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_167, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&left_value_168, 0, sizeof(struct CVALUE*));
memset(&right_node_169, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
memset(&right_value_170, 0, sizeof(struct CVALUE*));
memset(&type_171, 0, sizeof(struct sType*));
memset(&fun_name_172, 0, sizeof(char*));
memset(&calling_fun_173, 0, sizeof(_Bool));
right_value249 = (void*)0;
memset(&come_value_174, 0, sizeof(struct CVALUE*));
right_value250 = (void*)0;
right_value251 = (void*)0;
    left_node_167=self->mLeft;
    if(_if_conditional244=!node_compile(left_node_167,info),    _if_conditional244) {
        __result164__ = (_Bool)0;
        return __result164__;
    }
    left_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_169=self->mRight;
    if(_if_conditional245=!node_compile(right_node_169,info),    _if_conditional245) {
        __result165__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result165__;
    }
    right_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_171=(struct sType*)come_increment_ref_count(left_value_168->type);
    fun_name_172="operator_equals";
    if(_if_conditional246=self->mQuote,    _if_conditional246) {
        calling_fun_173=(_Bool)0;
    }
    else {
        calling_fun_173=operator_overload_fun(type_171,fun_name_172,left_value_168,right_value_170,info);
    }
    if(_if_conditional247=!calling_fun_173,    _if_conditional247) {
        come_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1458, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj119=come_value_174->c_value;
        come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value250=xsprintf("%s==%s",left_value_168->c_value,right_value_170->c_value))));
        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value250) { right_value250 = come_decrement_ref_count2(right_value250, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj120=come_value_174->type;
        come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value251=sType_clone(left_value_168->type))));
        come_call_finalizer2(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_174->type->mHeap=(_Bool)0;
        come_value_174->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_174->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
        come_call_finalizer2(CVALUE_finalize,come_value_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result166__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result166__;
    come_call_finalizer2(CVALUE_finalize,left_value_168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
int __result167__;
memset(&__result_obj__, 0, sizeof(void*));
    __result167__ = self->sline;
    return __result167__;
}

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
void* right_value252;
char* __result168__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
    __result168__ = __result_obj__ = ((char*)(right_value252=__builtin_string(self->sname)));
    if(right_value252) { right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result168__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value253;
char* __dec_obj121;
void* right_value254;
struct sNode* __dec_obj122;
void* right_value255;
struct sNode* __dec_obj123;
struct sNotEq2Node* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
right_value254 = (void*)0;
right_value255 = (void*)0;
    self->sline=info->sline;
    __dec_obj121=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value253=__builtin_string(info->sname))));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj122=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=sNode_clone(left))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count2(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value254) { right_value254 = come_decrement_ref_count2(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj123=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=sNode_clone(right))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count2(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result169__ = __result_obj__ = self;
    come_call_finalizer2(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result169__;
    come_call_finalizer2(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sNotEq2Node_terminated(){
void* __result_obj__;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
    __result170__ = (_Bool)0;
    return __result170__;
}

char* sNotEq2Node_kind(){
void* __result_obj__;
void* right_value256;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
    __result171__ = __result_obj__ = ((char*)(right_value256=__builtin_string("sNotEq2Node")));
    if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result171__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_175;
_Bool _if_conditional251;
_Bool __result172__;
void* right_value257;
struct CVALUE* left_value_176;
struct sNode* right_node_177;
_Bool _if_conditional252;
_Bool __result173__;
void* right_value258;
struct CVALUE* right_value_178;
struct sType* type_179;
char* fun_name_180;
_Bool calling_fun_181;
_Bool _if_conditional253;
_Bool _if_conditional254;
void* right_value259;
struct CVALUE* come_value_182;
void* right_value260;
char* __dec_obj124;
void* right_value261;
struct sType* __dec_obj125;
_Bool __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_175, 0, sizeof(struct sNode*));
right_value257 = (void*)0;
memset(&left_value_176, 0, sizeof(struct CVALUE*));
memset(&right_node_177, 0, sizeof(struct sNode*));
right_value258 = (void*)0;
memset(&right_value_178, 0, sizeof(struct CVALUE*));
memset(&type_179, 0, sizeof(struct sType*));
memset(&fun_name_180, 0, sizeof(char*));
memset(&calling_fun_181, 0, sizeof(_Bool));
right_value259 = (void*)0;
memset(&come_value_182, 0, sizeof(struct CVALUE*));
right_value260 = (void*)0;
right_value261 = (void*)0;
    left_node_175=self->mLeft;
    if(_if_conditional251=!node_compile(left_node_175,info),    _if_conditional251) {
        __result172__ = (_Bool)0;
        return __result172__;
    }
    left_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value257=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_177=self->mRight;
    if(_if_conditional252=!node_compile(right_node_177,info),    _if_conditional252) {
        __result173__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result173__;
    }
    right_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value258=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_179=(struct sType*)come_increment_ref_count(left_value_176->type);
    fun_name_180="operator_not_equals";
    if(_if_conditional253=self->mQuote,    _if_conditional253) {
        calling_fun_181=(_Bool)0;
    }
    else {
        calling_fun_181=operator_overload_fun(type_179,fun_name_180,left_value_176,right_value_178,info);
    }
    if(_if_conditional254=!calling_fun_181,    _if_conditional254) {
        come_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1549, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj124=come_value_182->c_value;
        come_value_182->c_value=(char*)come_increment_ref_count(((char*)(right_value260=xsprintf("%s!=%s",left_value_176->c_value,right_value_178->c_value))));
        if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value260) { right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj125=come_value_182->type;
        come_value_182->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(left_value_176->type))));
        come_call_finalizer2(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_182->type->mHeap=(_Bool)0;
        come_value_182->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_182->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
        come_call_finalizer2(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result174__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result174__;
    come_call_finalizer2(CVALUE_finalize,left_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_178, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
int __result175__;
memset(&__result_obj__, 0, sizeof(void*));
    __result175__ = self->sline;
    return __result175__;
}

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
void* right_value262;
char* __result176__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
    __result176__ = __result_obj__ = ((char*)(right_value262=__builtin_string(self->sname)));
    if(right_value262) { right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result176__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value263;
char* __dec_obj126;
void* right_value264;
struct sNode* __dec_obj127;
void* right_value265;
struct sNode* __dec_obj128;
struct sAndNode* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value263 = (void*)0;
right_value264 = (void*)0;
right_value265 = (void*)0;
    self->sline=info->sline;
    __dec_obj126=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value263=__builtin_string(info->sname))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj127=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=sNode_clone(left))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count2(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj128=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNode_clone(right))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count2(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result177__ = __result_obj__ = self;
    come_call_finalizer2(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result177__;
    come_call_finalizer2(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndNode_terminated(){
void* __result_obj__;
_Bool __result178__;
memset(&__result_obj__, 0, sizeof(void*));
    __result178__ = (_Bool)0;
    return __result178__;
}

char* sAndNode_kind(){
void* __result_obj__;
void* right_value266;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
right_value266 = (void*)0;
    __result179__ = __result_obj__ = ((char*)(right_value266=__builtin_string("sAndNode")));
    if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result179__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_183;
_Bool _if_conditional258;
_Bool __result180__;
void* right_value267;
struct CVALUE* left_value_184;
struct sNode* right_node_185;
_Bool _if_conditional259;
_Bool __result181__;
void* right_value268;
struct CVALUE* right_value_186;
struct sType* type_187;
char* fun_name_188;
_Bool calling_fun_189;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value269;
struct CVALUE* come_value_190;
void* right_value270;
char* __dec_obj129;
void* right_value271;
struct sType* __dec_obj130;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_183, 0, sizeof(struct sNode*));
right_value267 = (void*)0;
memset(&left_value_184, 0, sizeof(struct CVALUE*));
memset(&right_node_185, 0, sizeof(struct sNode*));
right_value268 = (void*)0;
memset(&right_value_186, 0, sizeof(struct CVALUE*));
memset(&type_187, 0, sizeof(struct sType*));
memset(&fun_name_188, 0, sizeof(char*));
memset(&calling_fun_189, 0, sizeof(_Bool));
right_value269 = (void*)0;
memset(&come_value_190, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
right_value271 = (void*)0;
    left_node_183=self->mLeft;
    if(_if_conditional258=!node_compile(left_node_183,info),    _if_conditional258) {
        __result180__ = (_Bool)0;
        return __result180__;
    }
    left_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_185=self->mRight;
    if(_if_conditional259=!node_compile(right_node_185,info),    _if_conditional259) {
        __result181__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result181__;
    }
    right_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value268=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_187=(struct sType*)come_increment_ref_count(left_value_184->type);
    fun_name_188="operator_and";
    if(_if_conditional260=self->mQuote,    _if_conditional260) {
        calling_fun_189=(_Bool)0;
    }
    else {
        calling_fun_189=operator_overload_fun(type_187,fun_name_188,left_value_184,right_value_186,info);
    }
    if(_if_conditional261=!calling_fun_189,    _if_conditional261) {
        come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1641, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj129=come_value_190->c_value;
        come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value270=xsprintf("%s&%s",left_value_184->c_value,right_value_186->c_value))));
        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value270) { right_value270 = come_decrement_ref_count2(right_value270, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj130=come_value_190->type;
        come_value_190->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value271=sType_clone(left_value_184->type))));
        come_call_finalizer2(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_190->type->mHeap=(_Bool)0;
        come_value_190->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_190->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
        come_call_finalizer2(CVALUE_finalize,come_value_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result182__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result182__;
    come_call_finalizer2(CVALUE_finalize,left_value_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_186, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_187, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndNode_sline(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
int __result183__;
memset(&__result_obj__, 0, sizeof(void*));
    __result183__ = self->sline;
    return __result183__;
}

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value272;
char* __result184__;
memset(&__result_obj__, 0, sizeof(void*));
right_value272 = (void*)0;
    __result184__ = __result_obj__ = ((char*)(right_value272=__builtin_string(self->sname)));
    if(right_value272) { right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result184__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value273;
char* __dec_obj131;
void* right_value274;
struct sNode* __dec_obj132;
void* right_value275;
struct sNode* __dec_obj133;
struct sXOrNode* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
right_value274 = (void*)0;
right_value275 = (void*)0;
    self->sline=info->sline;
    __dec_obj131=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value273=__builtin_string(info->sname))));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value273) { right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj132=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=sNode_clone(left))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count2(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value274) { right_value274 = come_decrement_ref_count2(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj133=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=sNode_clone(right))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count2(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value275) { right_value275 = come_decrement_ref_count2(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result185__ = __result_obj__ = self;
    come_call_finalizer2(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result185__;
    come_call_finalizer2(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sXOrNode_terminated(){
void* __result_obj__;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
    __result186__ = (_Bool)0;
    return __result186__;
}

char* sXOrNode_kind(){
void* __result_obj__;
void* right_value276;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
right_value276 = (void*)0;
    __result187__ = __result_obj__ = ((char*)(right_value276=__builtin_string("sXOrNode")));
    if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result187__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_191;
_Bool _if_conditional265;
_Bool __result188__;
void* right_value277;
struct CVALUE* left_value_192;
struct sNode* right_node_193;
_Bool _if_conditional266;
_Bool __result189__;
void* right_value278;
struct CVALUE* right_value_194;
struct sType* type_195;
char* fun_name_196;
_Bool calling_fun_197;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value279;
struct CVALUE* come_value_198;
void* right_value280;
char* __dec_obj134;
void* right_value281;
struct sType* __dec_obj135;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_191, 0, sizeof(struct sNode*));
right_value277 = (void*)0;
memset(&left_value_192, 0, sizeof(struct CVALUE*));
memset(&right_node_193, 0, sizeof(struct sNode*));
right_value278 = (void*)0;
memset(&right_value_194, 0, sizeof(struct CVALUE*));
memset(&type_195, 0, sizeof(struct sType*));
memset(&fun_name_196, 0, sizeof(char*));
memset(&calling_fun_197, 0, sizeof(_Bool));
right_value279 = (void*)0;
memset(&come_value_198, 0, sizeof(struct CVALUE*));
right_value280 = (void*)0;
right_value281 = (void*)0;
    left_node_191=self->mLeft;
    if(_if_conditional265=!node_compile(left_node_191,info),    _if_conditional265) {
        __result188__ = (_Bool)0;
        return __result188__;
    }
    left_value_192=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value277=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_193=self->mRight;
    if(_if_conditional266=!node_compile(right_node_193,info),    _if_conditional266) {
        __result189__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result189__;
    }
    right_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_195=(struct sType*)come_increment_ref_count(left_value_192->type);
    fun_name_196="operator_xor";
    if(_if_conditional267=self->mQuote,    _if_conditional267) {
        calling_fun_197=(_Bool)0;
    }
    else {
        calling_fun_197=operator_overload_fun(type_195,fun_name_196,left_value_192,right_value_194,info);
    }
    if(_if_conditional268=!calling_fun_197,    _if_conditional268) {
        come_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value279=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1732, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj134=come_value_198->c_value;
        come_value_198->c_value=(char*)come_increment_ref_count(((char*)(right_value280=xsprintf("%s^%s",left_value_192->c_value,right_value_194->c_value))));
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value280) { right_value280 = come_decrement_ref_count2(right_value280, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj135=come_value_198->type;
        come_value_198->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value281=sType_clone(left_value_192->type))));
        come_call_finalizer2(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_198->type->mHeap=(_Bool)0;
        come_value_198->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_198->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_198));
        come_call_finalizer2(CVALUE_finalize,come_value_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result190__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result190__;
    come_call_finalizer2(CVALUE_finalize,left_value_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_194, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_195, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
int __result191__;
memset(&__result_obj__, 0, sizeof(void*));
    __result191__ = self->sline;
    return __result191__;
}

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value282;
char* __result192__;
memset(&__result_obj__, 0, sizeof(void*));
right_value282 = (void*)0;
    __result192__ = __result_obj__ = ((char*)(right_value282=__builtin_string(self->sname)));
    if(right_value282) { right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result192__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value283;
char* __dec_obj136;
void* right_value284;
struct sNode* __dec_obj137;
void* right_value285;
struct sNode* __dec_obj138;
struct sOrNode* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
right_value284 = (void*)0;
right_value285 = (void*)0;
    self->sline=info->sline;
    __dec_obj136=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value283=__builtin_string(info->sname))));
    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj137=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=sNode_clone(left))));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count2(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj138=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=sNode_clone(right))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count2(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result193__ = __result_obj__ = self;
    come_call_finalizer2(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result193__;
    come_call_finalizer2(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrNode_terminated(){
void* __result_obj__;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
    __result194__ = (_Bool)0;
    return __result194__;
}

char* sOrNode_kind(){
void* __result_obj__;
void* right_value286;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
right_value286 = (void*)0;
    __result195__ = __result_obj__ = ((char*)(right_value286=__builtin_string("sOrNode")));
    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result195__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_199;
_Bool _if_conditional272;
_Bool __result196__;
void* right_value287;
struct CVALUE* left_value_200;
struct sNode* right_node_201;
_Bool _if_conditional273;
_Bool __result197__;
void* right_value288;
struct CVALUE* right_value_202;
struct sType* type_203;
char* fun_name_204;
_Bool calling_fun_205;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value289;
struct CVALUE* come_value_206;
void* right_value290;
char* __dec_obj139;
void* right_value291;
struct sType* __dec_obj140;
_Bool __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_199, 0, sizeof(struct sNode*));
right_value287 = (void*)0;
memset(&left_value_200, 0, sizeof(struct CVALUE*));
memset(&right_node_201, 0, sizeof(struct sNode*));
right_value288 = (void*)0;
memset(&right_value_202, 0, sizeof(struct CVALUE*));
memset(&type_203, 0, sizeof(struct sType*));
memset(&fun_name_204, 0, sizeof(char*));
memset(&calling_fun_205, 0, sizeof(_Bool));
right_value289 = (void*)0;
memset(&come_value_206, 0, sizeof(struct CVALUE*));
right_value290 = (void*)0;
right_value291 = (void*)0;
    left_node_199=self->mLeft;
    if(_if_conditional272=!node_compile(left_node_199,info),    _if_conditional272) {
        __result196__ = (_Bool)0;
        return __result196__;
    }
    left_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value287=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_201=self->mRight;
    if(_if_conditional273=!node_compile(right_node_201,info),    _if_conditional273) {
        __result197__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result197__;
    }
    right_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_203=(struct sType*)come_increment_ref_count(left_value_200->type);
    fun_name_204="operator_or";
    if(_if_conditional274=self->mQuote,    _if_conditional274) {
        calling_fun_205=(_Bool)0;
    }
    else {
        calling_fun_205=operator_overload_fun(type_203,fun_name_204,left_value_200,right_value_202,info);
    }
    if(_if_conditional275=!calling_fun_205,    _if_conditional275) {
        come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1823, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj139=come_value_206->c_value;
        come_value_206->c_value=(char*)come_increment_ref_count(((char*)(right_value290=xsprintf("%s|%s",left_value_200->c_value,right_value_202->c_value))));
        if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value290) { right_value290 = come_decrement_ref_count2(right_value290, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj140=come_value_206->type;
        come_value_206->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value291=sType_clone(left_value_200->type))));
        come_call_finalizer2(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_206->type->mHeap=(_Bool)0;
        come_value_206->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_206->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
        come_call_finalizer2(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result198__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result198__;
    come_call_finalizer2(CVALUE_finalize,left_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_202, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrNode_sline(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
int __result199__;
memset(&__result_obj__, 0, sizeof(void*));
    __result199__ = self->sline;
    return __result199__;
}

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value292;
char* __result200__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
    __result200__ = __result_obj__ = ((char*)(right_value292=__builtin_string(self->sname)));
    if(right_value292) { right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result200__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value293;
char* __dec_obj141;
void* right_value294;
struct sNode* __dec_obj142;
void* right_value295;
struct sNode* __dec_obj143;
struct sAndAndNode* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
right_value294 = (void*)0;
right_value295 = (void*)0;
    self->sline=info->sline;
    __dec_obj141=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value293=__builtin_string(info->sname))));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj142=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNode_clone(left))));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count2(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj143=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=sNode_clone(right))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count2(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result201__ = __result_obj__ = self;
    come_call_finalizer2(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result201__;
    come_call_finalizer2(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndAndNode_terminated(){
void* __result_obj__;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
    __result202__ = (_Bool)0;
    return __result202__;
}

char* sAndAndNode_kind(){
void* __result_obj__;
void* right_value296;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
right_value296 = (void*)0;
    __result203__ = __result_obj__ = ((char*)(right_value296=__builtin_string("sAndAndNode")));
    if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result203__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_207;
_Bool _if_conditional279;
_Bool __result204__;
void* right_value297;
struct CVALUE* left_value_208;
struct sNode* right_node_209;
_Bool _if_conditional280;
_Bool __result205__;
void* right_value298;
struct CVALUE* right_value_210;
struct sType* type_211;
char* fun_name_212;
_Bool calling_fun_213;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value299;
struct CVALUE* come_value_214;
void* right_value300;
char* __dec_obj144;
void* right_value301;
struct sType* __dec_obj145;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_207, 0, sizeof(struct sNode*));
right_value297 = (void*)0;
memset(&left_value_208, 0, sizeof(struct CVALUE*));
memset(&right_node_209, 0, sizeof(struct sNode*));
right_value298 = (void*)0;
memset(&right_value_210, 0, sizeof(struct CVALUE*));
memset(&type_211, 0, sizeof(struct sType*));
memset(&fun_name_212, 0, sizeof(char*));
memset(&calling_fun_213, 0, sizeof(_Bool));
right_value299 = (void*)0;
memset(&come_value_214, 0, sizeof(struct CVALUE*));
right_value300 = (void*)0;
right_value301 = (void*)0;
    left_node_207=self->mLeft;
    if(_if_conditional279=!node_compile(left_node_207,info),    _if_conditional279) {
        __result204__ = (_Bool)0;
        return __result204__;
    }
    left_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value297=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_209=self->mRight;
    if(_if_conditional280=!node_compile(right_node_209,info),    _if_conditional280) {
        __result205__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result205__;
    }
    right_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_211=(struct sType*)come_increment_ref_count(left_value_208->type);
    fun_name_212="operator_andand";
    if(_if_conditional281=self->mQuote,    _if_conditional281) {
        calling_fun_213=(_Bool)0;
    }
    else {
        calling_fun_213=operator_overload_fun(type_211,fun_name_212,left_value_208,right_value_210,info);
    }
    if(_if_conditional282=!calling_fun_213,    _if_conditional282) {
        come_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value299=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1914, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj144=come_value_214->c_value;
        come_value_214->c_value=(char*)come_increment_ref_count(((char*)(right_value300=xsprintf("%s&&%s",left_value_208->c_value,right_value_210->c_value))));
        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value300) { right_value300 = come_decrement_ref_count2(right_value300, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj145=come_value_214->type;
        come_value_214->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value301=sType_clone(left_value_208->type))));
        come_call_finalizer2(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_214->type->mHeap=(_Bool)0;
        come_value_214->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_214->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_214));
        come_call_finalizer2(CVALUE_finalize,come_value_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result206__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result206__;
    come_call_finalizer2(CVALUE_finalize,left_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_210, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
int __result207__;
memset(&__result_obj__, 0, sizeof(void*));
    __result207__ = self->sline;
    return __result207__;
}

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value302;
char* __result208__;
memset(&__result_obj__, 0, sizeof(void*));
right_value302 = (void*)0;
    __result208__ = __result_obj__ = ((char*)(right_value302=__builtin_string(self->sname)));
    if(right_value302) { right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result208__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value303;
char* __dec_obj146;
void* right_value304;
struct sNode* __dec_obj147;
void* right_value305;
struct sNode* __dec_obj148;
struct sOrOrNode* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
right_value303 = (void*)0;
right_value304 = (void*)0;
right_value305 = (void*)0;
    self->sline=info->sline;
    __dec_obj146=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value303=__builtin_string(info->sname))));
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    self->mQuote=quote;
    __dec_obj147=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=sNode_clone(left))));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count2(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj148=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value305=sNode_clone(right))));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count2(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result209__ = __result_obj__ = self;
    come_call_finalizer2(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result209__;
    come_call_finalizer2(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrOrNode_terminated(){
void* __result_obj__;
_Bool __result210__;
memset(&__result_obj__, 0, sizeof(void*));
    __result210__ = (_Bool)0;
    return __result210__;
}

char* sOrOrNode_kind(){
void* __result_obj__;
void* right_value306;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
right_value306 = (void*)0;
    __result211__ = __result_obj__ = ((char*)(right_value306=__builtin_string("sOrOrNode")));
    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result211__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_215;
_Bool _if_conditional286;
_Bool __result212__;
void* right_value307;
struct CVALUE* left_value_216;
struct sNode* right_node_217;
_Bool _if_conditional287;
_Bool __result213__;
void* right_value308;
struct CVALUE* right_value_218;
struct sType* type_219;
char* fun_name_220;
_Bool calling_fun_221;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value309;
struct CVALUE* come_value_222;
void* right_value310;
char* __dec_obj149;
void* right_value311;
struct sType* __dec_obj150;
_Bool __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_215, 0, sizeof(struct sNode*));
right_value307 = (void*)0;
memset(&left_value_216, 0, sizeof(struct CVALUE*));
memset(&right_node_217, 0, sizeof(struct sNode*));
right_value308 = (void*)0;
memset(&right_value_218, 0, sizeof(struct CVALUE*));
memset(&type_219, 0, sizeof(struct sType*));
memset(&fun_name_220, 0, sizeof(char*));
memset(&calling_fun_221, 0, sizeof(_Bool));
right_value309 = (void*)0;
memset(&come_value_222, 0, sizeof(struct CVALUE*));
right_value310 = (void*)0;
right_value311 = (void*)0;
    left_node_215=self->mLeft;
    if(_if_conditional286=!node_compile(left_node_215,info),    _if_conditional286) {
        __result212__ = (_Bool)0;
        return __result212__;
    }
    left_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value307=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_217=self->mRight;
    if(_if_conditional287=!node_compile(right_node_217,info),    _if_conditional287) {
        __result213__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result213__;
    }
    right_value_218=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value308=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_219=(struct sType*)come_increment_ref_count(left_value_216->type);
    fun_name_220="operator_oror";
    if(_if_conditional288=self->mQuote,    _if_conditional288) {
        calling_fun_221=(_Bool)0;
    }
    else {
        calling_fun_221=operator_overload_fun(type_219,fun_name_220,left_value_216,right_value_218,info);
    }
    if(_if_conditional289=!calling_fun_221,    _if_conditional289) {
        come_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value309=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2004, "struct CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj149=come_value_222->c_value;
        come_value_222->c_value=(char*)come_increment_ref_count(((char*)(right_value310=xsprintf("%s||%s",left_value_216->c_value,right_value_218->c_value))));
        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0); }
        if(right_value310) { right_value310 = come_decrement_ref_count2(right_value310, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
        __dec_obj150=come_value_222->type;
        come_value_222->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value311=sType_clone(left_value_216->type))));
        come_call_finalizer2(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_222->type->mHeap=(_Bool)0;
        come_value_222->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_222->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_222));
        come_call_finalizer2(CVALUE_finalize,come_value_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result214__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result214__;
    come_call_finalizer2(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_218, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_219, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
int __result215__;
memset(&__result_obj__, 0, sizeof(void*));
    __result215__ = self->sline;
    return __result215__;
}

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value312;
char* __result216__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
    __result216__ = __result_obj__ = ((char*)(right_value312=__builtin_string(self->sname)));
    if(right_value312) { right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result216__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
void* right_value313;
char* __dec_obj151;
void* right_value314;
struct sNode* __dec_obj152;
void* right_value315;
struct sNode* __dec_obj153;
struct sCommaNode* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
right_value313 = (void*)0;
right_value314 = (void*)0;
right_value315 = (void*)0;
    self->sline=info->sline;
    __dec_obj151=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value313=__builtin_string(info->sname))));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj152=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=sNode_clone(left))));
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count2(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value314) { right_value314 = come_decrement_ref_count2(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj153=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNode_clone(right))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count2(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result217__ = __result_obj__ = self;
    come_call_finalizer2(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result217__;
    come_call_finalizer2(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sCommaNode_terminated(){
void* __result_obj__;
_Bool __result218__;
memset(&__result_obj__, 0, sizeof(void*));
    __result218__ = (_Bool)0;
    return __result218__;
}

char* sCommaNode_kind(){
void* __result_obj__;
void* right_value316;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
right_value316 = (void*)0;
    __result219__ = __result_obj__ = ((char*)(right_value316=__builtin_string("sCommaNode")));
    if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result219__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_223;
_Bool _if_conditional293;
_Bool __result220__;
void* right_value317;
struct CVALUE* left_value_224;
struct sNode* right_node_225;
_Bool _if_conditional294;
_Bool __result221__;
void* right_value318;
struct CVALUE* right_value_226;
void* right_value319;
struct CVALUE* come_value_227;
void* right_value320;
char* __dec_obj154;
void* right_value321;
struct sType* __dec_obj155;
_Bool __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_223, 0, sizeof(struct sNode*));
right_value317 = (void*)0;
memset(&left_value_224, 0, sizeof(struct CVALUE*));
memset(&right_node_225, 0, sizeof(struct sNode*));
right_value318 = (void*)0;
memset(&right_value_226, 0, sizeof(struct CVALUE*));
right_value319 = (void*)0;
memset(&come_value_227, 0, sizeof(struct CVALUE*));
right_value320 = (void*)0;
right_value321 = (void*)0;
    left_node_223=self->mLeft;
    if(_if_conditional293=!node_compile(left_node_223,info),    _if_conditional293) {
        __result220__ = (_Bool)0;
        return __result220__;
    }
    left_value_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value317=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_225=self->mRight;
    if(_if_conditional294=!node_compile(right_node_225,info),    _if_conditional294) {
        __result221__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result221__;
    }
    right_value_226=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value319=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2081, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj154=come_value_227->c_value;
    come_value_227->c_value=(char*)come_increment_ref_count(((char*)(right_value320=xsprintf("%s,%s",left_value_224->c_value,right_value_226->c_value))));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value320) { right_value320 = come_decrement_ref_count2(right_value320, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj155=come_value_227->type;
    come_value_227->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value321=sType_clone(left_value_224->type))));
    come_call_finalizer2(sType_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_227->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_227->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_227));
    __result222__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result222__;
    come_call_finalizer2(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_226, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_227, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
int __result223__;
memset(&__result_obj__, 0, sizeof(void*));
    __result223__ = self->sline;
    return __result223__;
}

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value322;
char* __result224__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
    __result224__ = __result_obj__ = ((char*)(right_value322=__builtin_string(self->sname)));
    if(right_value322) { right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result224__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
void* right_value323;
char* __dec_obj156;
void* right_value324;
struct sNode* __dec_obj157;
void* right_value325;
struct sNode* __dec_obj158;
void* right_value326;
struct sNode* __dec_obj159;
struct sConditionalNode* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
right_value323 = (void*)0;
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
    self->sline=info->sline;
    __dec_obj156=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value323=__builtin_string(info->sname))));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value323) { right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj157=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=sNode_clone(value1))));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count2(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj158=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=sNode_clone(value2))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count2(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj159=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=sNode_clone(value3))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result225__ = __result_obj__ = self;
    come_call_finalizer2(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result225__;
    come_call_finalizer2(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sConditionalNode_terminated(){
void* __result_obj__;
_Bool __result226__;
memset(&__result_obj__, 0, sizeof(void*));
    __result226__ = (_Bool)0;
    return __result226__;
}

char* sConditionalNode_kind(){
void* __result_obj__;
void* right_value327;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
right_value327 = (void*)0;
    __result227__ = __result_obj__ = ((char*)(right_value327=__builtin_string("sConditionalNode")));
    if(right_value327) { right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result227__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value1_228;
_Bool _if_conditional299;
_Bool __result228__;
void* right_value328;
struct CVALUE* value1_value_229;
struct sNode* value2_230;
_Bool _if_conditional300;
_Bool __result229__;
void* right_value329;
struct CVALUE* value2_value_231;
struct sNode* value3_232;
_Bool _if_conditional301;
_Bool __result230__;
void* right_value330;
struct CVALUE* value3_value_233;
void* right_value331;
struct CVALUE* come_value_234;
void* right_value332;
char* __dec_obj160;
void* right_value333;
struct sType* __dec_obj161;
_Bool __result231__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value1_228, 0, sizeof(struct sNode*));
right_value328 = (void*)0;
memset(&value1_value_229, 0, sizeof(struct CVALUE*));
memset(&value2_230, 0, sizeof(struct sNode*));
right_value329 = (void*)0;
memset(&value2_value_231, 0, sizeof(struct CVALUE*));
memset(&value3_232, 0, sizeof(struct sNode*));
right_value330 = (void*)0;
memset(&value3_value_233, 0, sizeof(struct CVALUE*));
right_value331 = (void*)0;
memset(&come_value_234, 0, sizeof(struct CVALUE*));
right_value332 = (void*)0;
right_value333 = (void*)0;
    value1_228=self->mValue1;
    if(_if_conditional299=!node_compile(value1_228,info),    _if_conditional299) {
        __result228__ = (_Bool)0;
        return __result228__;
    }
    value1_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value328=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    value2_230=self->mValue2;
    if(_if_conditional300=!node_compile(value2_230,info),    _if_conditional300) {
        __result229__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result229__;
    }
    value2_value_231=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    value3_232=self->mValue3;
    if(_if_conditional301=!node_compile(value3_232,info),    _if_conditional301) {
        __result230__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,value2_value_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result230__;
    }
    value3_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value330=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value331=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2167, "struct CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj160=come_value_234->c_value;
    come_value_234->c_value=(char*)come_increment_ref_count(((char*)(right_value332=xsprintf("%s?%s:%s",value1_value_229->c_value,value2_value_231->c_value,value3_value_233->c_value))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, (void*)0, (void*)0, 0,0,0, (void*)0); }
    if(right_value332) { right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    __dec_obj161=come_value_234->type;
    come_value_234->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value333=sType_clone(value1_value_229->type))));
    come_call_finalizer2(sType_finalize,__dec_obj161, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_234->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_234->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_234));
    __result231__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value2_value_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value3_value_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result231__;
    come_call_finalizer2(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value2_value_231, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value3_value_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_234, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
int __result232__;
memset(&__result_obj__, 0, sizeof(void*));
    __result232__ = self->sline;
    return __result232__;
}

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value334;
char* __result233__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
    __result233__ = __result_obj__ = ((char*)(right_value334=__builtin_string(self->sname)));
    if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
    return __result233__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
void* right_value335;
struct sNode* node_235;
_Bool _while_condtional10;
_Bool _if_conditional302;
void* right_value336;
struct sNode* right_236;
void* right_value337;
void* right_value338;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* right_value343;
struct sNode* __result236__;
_Bool _if_conditional312;
void* right_value344;
struct sNode* right_238;
void* right_value345;
void* right_value346;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* right_value351;
struct sNode* __result239__;
_Bool _if_conditional322;
void* right_value352;
struct sNode* right_240;
void* right_value353;
void* right_value354;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* right_value359;
struct sNode* __result242__;
_Bool _if_conditional332;
void* right_value360;
struct sNode* right_242;
void* right_value361;
void* right_value362;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* right_value367;
struct sNode* __result245__;
_Bool _if_conditional342;
void* right_value368;
struct sNode* right_244;
void* right_value369;
void* right_value370;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* right_value375;
struct sNode* __result248__;
_Bool _if_conditional352;
void* right_value376;
struct sNode* right_246;
void* right_value377;
void* right_value378;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* right_value383;
struct sNode* __result251__;
struct sNode* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value335 = (void*)0;
memset(&node_235, 0, sizeof(struct sNode*));
right_value336 = (void*)0;
memset(&right_236, 0, sizeof(struct sNode*));
right_value337 = (void*)0;
right_value338 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
memset(&right_238, 0, sizeof(struct sNode*));
right_value345 = (void*)0;
right_value346 = (void*)0;
right_value351 = (void*)0;
right_value352 = (void*)0;
memset(&right_240, 0, sizeof(struct sNode*));
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value359 = (void*)0;
right_value360 = (void*)0;
memset(&right_242, 0, sizeof(struct sNode*));
right_value361 = (void*)0;
right_value362 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
memset(&right_244, 0, sizeof(struct sNode*));
right_value369 = (void*)0;
right_value370 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
memset(&right_246, 0, sizeof(struct sNode*));
right_value377 = (void*)0;
right_value378 = (void*)0;
right_value383 = (void*)0;
    node_235=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=expression_node_v99(info))));
    if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional10=*info->p,    _while_condtional10) {
        if(_if_conditional302=!node_235->terminated(node_235->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional302) {
            info->p++;
            skip_spaces_and_lf(info);
            right_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=mult_exp(info))));
            if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2203, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sMultNode*)(right_value338=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value337=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2203, "struct sMultNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_236),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sMultNode_sline;
            _inf_value3->sname=(void*)sMultNode_sname;
            _inf_value3->terminated=(void*)sMultNode_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result236__ = __result_obj__ = ((struct sNode*)(right_value343=_inf_value3));
            if(right_236) { right_236 = come_decrement_ref_count2(right_236, ((struct sNode*)right_236)->finalize, ((struct sNode*)right_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sMultNode_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sMultNode_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result236__;
            if(right_236) { right_236 = come_decrement_ref_count2(right_236, ((struct sNode*)right_236)->finalize, ((struct sNode*)right_236)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional312=*info->p==47&&*(info->p+1)!=61,            _if_conditional312) {
                info->p++;
                skip_spaces_and_lf(info);
                right_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=mult_exp(info))));
                if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2211, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sDivNode*)(right_value346=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value345=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2211, "struct sDivNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_238),(_Bool)0,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDivNode_finalize;
                _inf_value4->clone=(void*)sDivNode_clone;
                _inf_value4->compile=(void*)sDivNode_compile;
                _inf_value4->sline=(void*)sDivNode_sline;
                _inf_value4->sname=(void*)sDivNode_sname;
                _inf_value4->terminated=(void*)sDivNode_terminated;
                _inf_value4->kind=(void*)sDivNode_kind;
                __result239__ = __result_obj__ = ((struct sNode*)(right_value351=_inf_value4));
                if(right_238) { right_238 = come_decrement_ref_count2(right_238, ((struct sNode*)right_238)->finalize, ((struct sNode*)right_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sDivNode_finalize,right_value345, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sDivNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value351) { right_value351 = come_decrement_ref_count2(right_value351, ((struct sNode*)right_value351)->finalize, ((struct sNode*)right_value351)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result239__;
                if(right_238) { right_238 = come_decrement_ref_count2(right_238, ((struct sNode*)right_238)->finalize, ((struct sNode*)right_238)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional322=*info->p==37&&*(info->p+1)!=61,                _if_conditional322) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value352=expression_node_v99(info))));
                    if(right_value352) { right_value352 = come_decrement_ref_count2(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2219, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sModNode*)(right_value354=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value353=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2219, "struct sModNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_240),(_Bool)0,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sModNode_finalize;
                    _inf_value5->clone=(void*)sModNode_clone;
                    _inf_value5->compile=(void*)sModNode_compile;
                    _inf_value5->sline=(void*)sModNode_sline;
                    _inf_value5->sname=(void*)sModNode_sname;
                    _inf_value5->terminated=(void*)sModNode_terminated;
                    _inf_value5->kind=(void*)sModNode_kind;
                    __result242__ = __result_obj__ = ((struct sNode*)(right_value359=_inf_value5));
                    if(right_240) { right_240 = come_decrement_ref_count2(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sModNode_finalize,right_value353, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sModNode_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value359) { right_value359 = come_decrement_ref_count2(right_value359, ((struct sNode*)right_value359)->finalize, ((struct sNode*)right_value359)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result242__;
                    if(right_240) { right_240 = come_decrement_ref_count2(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional332=!node_235->terminated(node_235->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional332) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value360=mult_exp(info))));
                        if(right_value360) { right_value360 = come_decrement_ref_count2(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2227, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sMultNode*)(right_value362=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value361=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2227, "struct sMultNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_242),(_Bool)1,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sMultNode_finalize;
                        _inf_value6->clone=(void*)sMultNode_clone;
                        _inf_value6->compile=(void*)sMultNode_compile;
                        _inf_value6->sline=(void*)sMultNode_sline;
                        _inf_value6->sname=(void*)sMultNode_sname;
                        _inf_value6->terminated=(void*)sMultNode_terminated;
                        _inf_value6->kind=(void*)sMultNode_kind;
                        __result245__ = __result_obj__ = ((struct sNode*)(right_value367=_inf_value6));
                        if(right_242) { right_242 = come_decrement_ref_count2(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sMultNode_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sMultNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result245__;
                        if(right_242) { right_242 = come_decrement_ref_count2(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional342=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional342) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=mult_exp(info))));
                            if(right_value368) { right_value368 = come_decrement_ref_count2(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2235, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sDivNode*)(right_value370=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value369=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2235, "struct sDivNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_244),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sDivNode_finalize;
                            _inf_value7->clone=(void*)sDivNode_clone;
                            _inf_value7->compile=(void*)sDivNode_compile;
                            _inf_value7->sline=(void*)sDivNode_sline;
                            _inf_value7->sname=(void*)sDivNode_sname;
                            _inf_value7->terminated=(void*)sDivNode_terminated;
                            _inf_value7->kind=(void*)sDivNode_kind;
                            __result248__ = __result_obj__ = ((struct sNode*)(right_value375=_inf_value7));
                            if(right_244) { right_244 = come_decrement_ref_count2(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sDivNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sDivNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result248__;
                            if(right_244) { right_244 = come_decrement_ref_count2(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional352=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional352) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=expression_node_v99(info))));
                                if(right_value376) { right_value376 = come_decrement_ref_count2(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2243, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sModNode*)(right_value378=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value377=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2243, "struct sModNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_246),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sModNode_finalize;
                                _inf_value8->clone=(void*)sModNode_clone;
                                _inf_value8->compile=(void*)sModNode_compile;
                                _inf_value8->sline=(void*)sModNode_sline;
                                _inf_value8->sname=(void*)sModNode_sname;
                                _inf_value8->terminated=(void*)sModNode_terminated;
                                _inf_value8->kind=(void*)sModNode_kind;
                                __result251__ = __result_obj__ = ((struct sNode*)(right_value383=_inf_value8));
                                if(right_246) { right_246 = come_decrement_ref_count2(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sModNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sModNode_finalize,right_value378, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result251__;
                                if(right_246) { right_246 = come_decrement_ref_count2(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result252__ = __result_obj__ = node_235;
    if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result252__;
    if(node_235) { node_235 = come_decrement_ref_count2(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional333;
_Bool _if_conditional334;
_Bool _if_conditional335;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional333=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional333) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional334=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional334) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional335=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional335) {
                                if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional336;
struct sMultNode* __result243__;
void* right_value363;
struct sMultNode* result_243;
_Bool _if_conditional337;
void* right_value364;
struct sNode* __dec_obj171;
_Bool _if_conditional338;
void* right_value365;
struct sNode* __dec_obj172;
_Bool _if_conditional339;
_Bool _if_conditional340;
_Bool _if_conditional341;
void* right_value366;
char* __dec_obj173;
struct sMultNode* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value363 = (void*)0;
memset(&result_243, 0, sizeof(struct sMultNode*));
right_value364 = (void*)0;
right_value365 = (void*)0;
right_value366 = (void*)0;
                            if(_if_conditional336=self==(void*)0,                            _if_conditional336) {
                                __result243__ = __result_obj__ = (void*)0;
                                return __result243__;
                            }
                            result_243=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value363=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode"))));
                            come_call_finalizer2(sMultNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional337=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional337) {
                                __dec_obj171=result_243->mLeft;
                                result_243->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=sNode_clone(self->mLeft))));
                                if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count2(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value364) { right_value364 = come_decrement_ref_count2(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional338=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional338) {
                                __dec_obj172=result_243->mRight;
                                result_243->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=sNode_clone(self->mRight))));
                                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count2(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional339=self!=((void*)0),                            _if_conditional339) {
                                result_243->mQuote=self->mQuote;
                            }
                            if(_if_conditional340=self!=((void*)0),                            _if_conditional340) {
                                result_243->sline=self->sline;
                            }
                            if(_if_conditional341=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional341) {
                                __dec_obj173=result_243->sname;
                                result_243->sname=(char*)come_increment_ref_count(((char*)(right_value366=string_clone(self->sname))));
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count2(__dec_obj173, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                            }
                            __result244__ = __result_obj__ = result_243;
                            come_call_finalizer2(sMultNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result244__;
                            come_call_finalizer2(sMultNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional343;
_Bool _if_conditional344;
_Bool _if_conditional345;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional343=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional343) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional344=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional344) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional345=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional345) {
                                    if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional346;
struct sDivNode* __result246__;
void* right_value371;
struct sDivNode* result_245;
_Bool _if_conditional347;
void* right_value372;
struct sNode* __dec_obj174;
_Bool _if_conditional348;
void* right_value373;
struct sNode* __dec_obj175;
_Bool _if_conditional349;
_Bool _if_conditional350;
_Bool _if_conditional351;
void* right_value374;
char* __dec_obj176;
struct sDivNode* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value371 = (void*)0;
memset(&result_245, 0, sizeof(struct sDivNode*));
right_value372 = (void*)0;
right_value373 = (void*)0;
right_value374 = (void*)0;
                                if(_if_conditional346=self==(void*)0,                                _if_conditional346) {
                                    __result246__ = __result_obj__ = (void*)0;
                                    return __result246__;
                                }
                                result_245=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value371=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode"))));
                                come_call_finalizer2(sDivNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional347=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional347) {
                                    __dec_obj174=result_245->mLeft;
                                    result_245->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=sNode_clone(self->mLeft))));
                                    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count2(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional348=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional348) {
                                    __dec_obj175=result_245->mRight;
                                    result_245->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=sNode_clone(self->mRight))));
                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count2(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional349=self!=((void*)0),                                _if_conditional349) {
                                    result_245->mQuote=self->mQuote;
                                }
                                if(_if_conditional350=self!=((void*)0),                                _if_conditional350) {
                                    result_245->sline=self->sline;
                                }
                                if(_if_conditional351=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional351) {
                                    __dec_obj176=result_245->sname;
                                    result_245->sname=(char*)come_increment_ref_count(((char*)(right_value374=string_clone(self->sname))));
                                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count2(__dec_obj176, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                __result247__ = __result_obj__ = result_245;
                                come_call_finalizer2(sDivNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result247__;
                                come_call_finalizer2(sDivNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional353;
_Bool _if_conditional354;
_Bool _if_conditional355;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional353=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional353) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional354=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional354) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional355=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional355) {
                                        if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional356;
struct sModNode* __result249__;
void* right_value379;
struct sModNode* result_247;
_Bool _if_conditional357;
void* right_value380;
struct sNode* __dec_obj177;
_Bool _if_conditional358;
void* right_value381;
struct sNode* __dec_obj178;
_Bool _if_conditional359;
_Bool _if_conditional360;
_Bool _if_conditional361;
void* right_value382;
char* __dec_obj179;
struct sModNode* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
right_value379 = (void*)0;
memset(&result_247, 0, sizeof(struct sModNode*));
right_value380 = (void*)0;
right_value381 = (void*)0;
right_value382 = (void*)0;
                                    if(_if_conditional356=self==(void*)0,                                    _if_conditional356) {
                                        __result249__ = __result_obj__ = (void*)0;
                                        return __result249__;
                                    }
                                    result_247=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value379=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode"))));
                                    come_call_finalizer2(sModNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional357=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional357) {
                                        __dec_obj177=result_247->mLeft;
                                        result_247->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=sNode_clone(self->mLeft))));
                                        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count2(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional358=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional358) {
                                        __dec_obj178=result_247->mRight;
                                        result_247->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=sNode_clone(self->mRight))));
                                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional359=self!=((void*)0),                                    _if_conditional359) {
                                        result_247->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional360=self!=((void*)0),                                    _if_conditional360) {
                                        result_247->sline=self->sline;
                                    }
                                    if(_if_conditional361=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional361) {
                                        __dec_obj179=result_247->sname;
                                        result_247->sname=(char*)come_increment_ref_count(((char*)(right_value382=string_clone(self->sname))));
                                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                        if(right_value382) { right_value382 = come_decrement_ref_count2(right_value382, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                    }
                                    __result250__ = __result_obj__ = result_247;
                                    come_call_finalizer2(sModNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result250__;
                                    come_call_finalizer2(sModNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
void* right_value384;
struct sNode* node_248;
_Bool _while_condtional11;
_Bool _if_conditional362;
void* right_value385;
struct sNode* right_249;
void* right_value386;
void* right_value387;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value392;
struct sNode* __result255__;
_Bool _if_conditional372;
void* right_value393;
struct sNode* right_251;
void* right_value394;
void* right_value395;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value400;
struct sNode* __result258__;
_Bool _if_conditional382;
void* right_value401;
struct sNode* right_253;
void* right_value402;
void* right_value403;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* right_value408;
struct sNode* __result261__;
_Bool _if_conditional392;
void* right_value409;
struct sNode* right_255;
void* right_value410;
void* right_value411;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* right_value416;
struct sNode* __result264__;
struct sNode* __result265__;
memset(&__result_obj__, 0, sizeof(void*));
right_value384 = (void*)0;
memset(&node_248, 0, sizeof(struct sNode*));
right_value385 = (void*)0;
memset(&right_249, 0, sizeof(struct sNode*));
right_value386 = (void*)0;
right_value387 = (void*)0;
right_value392 = (void*)0;
right_value393 = (void*)0;
memset(&right_251, 0, sizeof(struct sNode*));
right_value394 = (void*)0;
right_value395 = (void*)0;
right_value400 = (void*)0;
right_value401 = (void*)0;
memset(&right_253, 0, sizeof(struct sNode*));
right_value402 = (void*)0;
right_value403 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
memset(&right_255, 0, sizeof(struct sNode*));
right_value410 = (void*)0;
right_value411 = (void*)0;
right_value416 = (void*)0;
    node_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=mult_exp(info))));
    if(right_value384) { right_value384 = come_decrement_ref_count2(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional11=*info->p,    _while_condtional11) {
        if(_if_conditional362=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional362) {
            info->p++;
            skip_spaces_and_lf(info);
            right_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=add_exp(info))));
            if(right_value385) { right_value385 = come_decrement_ref_count2(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2269, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value387=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value386=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2269, "struct sAddNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_249),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sAddNode_sline;
            _inf_value9->sname=(void*)sAddNode_sname;
            _inf_value9->terminated=(void*)sAddNode_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result255__ = __result_obj__ = ((struct sNode*)(right_value392=_inf_value9));
            if(right_249) { right_249 = come_decrement_ref_count2(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAddNode_finalize,right_value386, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAddNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value392) { right_value392 = come_decrement_ref_count2(right_value392, ((struct sNode*)right_value392)->finalize, ((struct sNode*)right_value392)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result255__;
            if(right_249) { right_249 = come_decrement_ref_count2(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional372=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional372) {
                info->p++;
                skip_spaces_and_lf(info);
                right_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=add_exp(info))));
                if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2278, "struct sNode");
                _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value395=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value394=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2278, "struct sSubNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_251),(_Bool)0,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sSubNode_finalize;
                _inf_value10->clone=(void*)sSubNode_clone;
                _inf_value10->compile=(void*)sSubNode_compile;
                _inf_value10->sline=(void*)sSubNode_sline;
                _inf_value10->sname=(void*)sSubNode_sname;
                _inf_value10->terminated=(void*)sSubNode_terminated;
                _inf_value10->kind=(void*)sSubNode_kind;
                __result258__ = __result_obj__ = ((struct sNode*)(right_value400=_inf_value10));
                if(right_251) { right_251 = come_decrement_ref_count2(right_251, ((struct sNode*)right_251)->finalize, ((struct sNode*)right_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sSubNode_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sSubNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value400) { right_value400 = come_decrement_ref_count2(right_value400, ((struct sNode*)right_value400)->finalize, ((struct sNode*)right_value400)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result258__;
                if(right_251) { right_251 = come_decrement_ref_count2(right_251, ((struct sNode*)right_251)->finalize, ((struct sNode*)right_251)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional382=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional382) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=add_exp(info))));
                    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2287, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sAddNode*)(right_value403=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value402=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2287, "struct sAddNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_253),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sAddNode_finalize;
                    _inf_value11->clone=(void*)sAddNode_clone;
                    _inf_value11->compile=(void*)sAddNode_compile;
                    _inf_value11->sline=(void*)sAddNode_sline;
                    _inf_value11->sname=(void*)sAddNode_sname;
                    _inf_value11->terminated=(void*)sAddNode_terminated;
                    _inf_value11->kind=(void*)sAddNode_kind;
                    __result261__ = __result_obj__ = ((struct sNode*)(right_value408=_inf_value11));
                    if(right_253) { right_253 = come_decrement_ref_count2(right_253, ((struct sNode*)right_253)->finalize, ((struct sNode*)right_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sAddNode_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sAddNode_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value408) { right_value408 = come_decrement_ref_count2(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result261__;
                    if(right_253) { right_253 = come_decrement_ref_count2(right_253, ((struct sNode*)right_253)->finalize, ((struct sNode*)right_253)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional392=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional392) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=add_exp(info))));
                        if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2296, "struct sNode");
                        _inf_obj_value12=come_increment_ref_count(((struct sSubNode*)(right_value411=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value410=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2296, "struct sSubNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_255),(_Bool)1,info))));
                        _inf_value12->_protocol_obj=_inf_obj_value12;
                        _inf_value12->finalize=(void*)sSubNode_finalize;
                        _inf_value12->clone=(void*)sSubNode_clone;
                        _inf_value12->compile=(void*)sSubNode_compile;
                        _inf_value12->sline=(void*)sSubNode_sline;
                        _inf_value12->sname=(void*)sSubNode_sname;
                        _inf_value12->terminated=(void*)sSubNode_terminated;
                        _inf_value12->kind=(void*)sSubNode_kind;
                        __result264__ = __result_obj__ = ((struct sNode*)(right_value416=_inf_value12));
                        if(right_255) { right_255 = come_decrement_ref_count2(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sSubNode_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sSubNode_finalize,right_value411, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value416) { right_value416 = come_decrement_ref_count2(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result264__;
                        if(right_255) { right_255 = come_decrement_ref_count2(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result265__ = __result_obj__ = node_248;
    if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result265__;
    if(node_248) { node_248 = come_decrement_ref_count2(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional383;
_Bool _if_conditional384;
_Bool _if_conditional385;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional383=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional383) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional384=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional384) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional385=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional385) {
                            if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional386;
struct sAddNode* __result259__;
void* right_value404;
struct sAddNode* result_254;
_Bool _if_conditional387;
void* right_value405;
struct sNode* __dec_obj186;
_Bool _if_conditional388;
void* right_value406;
struct sNode* __dec_obj187;
_Bool _if_conditional389;
_Bool _if_conditional390;
_Bool _if_conditional391;
void* right_value407;
char* __dec_obj188;
struct sAddNode* __result260__;
memset(&__result_obj__, 0, sizeof(void*));
right_value404 = (void*)0;
memset(&result_254, 0, sizeof(struct sAddNode*));
right_value405 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
                        if(_if_conditional386=self==(void*)0,                        _if_conditional386) {
                            __result259__ = __result_obj__ = (void*)0;
                            return __result259__;
                        }
                        result_254=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value404=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode"))));
                        come_call_finalizer2(sAddNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional387=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional387) {
                            __dec_obj186=result_254->mLeft;
                            result_254->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=sNode_clone(self->mLeft))));
                            if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional388=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional388) {
                            __dec_obj187=result_254->mRight;
                            result_254->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=sNode_clone(self->mRight))));
                            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count2(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional389=self!=((void*)0),                        _if_conditional389) {
                            result_254->mQuote=self->mQuote;
                        }
                        if(_if_conditional390=self!=((void*)0),                        _if_conditional390) {
                            result_254->sline=self->sline;
                        }
                        if(_if_conditional391=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional391) {
                            __dec_obj188=result_254->sname;
                            result_254->sname=(char*)come_increment_ref_count(((char*)(right_value407=string_clone(self->sname))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count2(__dec_obj188, (void*)0, (void*)0, 0,0,0, (void*)0); }
                            if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                        }
                        __result260__ = __result_obj__ = result_254;
                        come_call_finalizer2(sAddNode_finalize,result_254, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result260__;
                        come_call_finalizer2(sAddNode_finalize,result_254, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional393;
_Bool _if_conditional394;
_Bool _if_conditional395;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional393=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional393) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional394=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional394) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional395=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional395) {
                                if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional396;
struct sSubNode* __result262__;
void* right_value412;
struct sSubNode* result_256;
_Bool _if_conditional397;
void* right_value413;
struct sNode* __dec_obj189;
_Bool _if_conditional398;
void* right_value414;
struct sNode* __dec_obj190;
_Bool _if_conditional399;
_Bool _if_conditional400;
_Bool _if_conditional401;
void* right_value415;
char* __dec_obj191;
struct sSubNode* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
right_value412 = (void*)0;
memset(&result_256, 0, sizeof(struct sSubNode*));
right_value413 = (void*)0;
right_value414 = (void*)0;
right_value415 = (void*)0;
                            if(_if_conditional396=self==(void*)0,                            _if_conditional396) {
                                __result262__ = __result_obj__ = (void*)0;
                                return __result262__;
                            }
                            result_256=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value412=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode"))));
                            come_call_finalizer2(sSubNode_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional397=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional397) {
                                __dec_obj189=result_256->mLeft;
                                result_256->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=sNode_clone(self->mLeft))));
                                if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count2(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional398=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional398) {
                                __dec_obj190=result_256->mRight;
                                result_256->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=sNode_clone(self->mRight))));
                                if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count2(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional399=self!=((void*)0),                            _if_conditional399) {
                                result_256->mQuote=self->mQuote;
                            }
                            if(_if_conditional400=self!=((void*)0),                            _if_conditional400) {
                                result_256->sline=self->sline;
                            }
                            if(_if_conditional401=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional401) {
                                __dec_obj191=result_256->sname;
                                result_256->sname=(char*)come_increment_ref_count(((char*)(right_value415=string_clone(self->sname))));
                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count2(__dec_obj191, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                            }
                            __result263__ = __result_obj__ = result_256;
                            come_call_finalizer2(sSubNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result263__;
                            come_call_finalizer2(sSubNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
void* right_value417;
struct sNode* node_257;
_Bool _while_condtional12;
_Bool _if_conditional402;
void* right_value418;
struct sNode* right_258;
void* right_value419;
void* right_value420;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value425;
struct sNode* __result268__;
_Bool _if_conditional412;
void* right_value426;
struct sNode* right_260;
void* right_value427;
void* right_value428;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value433;
struct sNode* __result271__;
_Bool _if_conditional422;
void* right_value434;
struct sNode* right_262;
void* right_value435;
void* right_value436;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* right_value441;
struct sNode* __result274__;
_Bool _if_conditional432;
void* right_value442;
struct sNode* right_264;
void* right_value443;
void* right_value444;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* right_value449;
struct sNode* __result277__;
struct sNode* __result278__;
memset(&__result_obj__, 0, sizeof(void*));
right_value417 = (void*)0;
memset(&node_257, 0, sizeof(struct sNode*));
right_value418 = (void*)0;
memset(&right_258, 0, sizeof(struct sNode*));
right_value419 = (void*)0;
right_value420 = (void*)0;
right_value425 = (void*)0;
right_value426 = (void*)0;
memset(&right_260, 0, sizeof(struct sNode*));
right_value427 = (void*)0;
right_value428 = (void*)0;
right_value433 = (void*)0;
right_value434 = (void*)0;
memset(&right_262, 0, sizeof(struct sNode*));
right_value435 = (void*)0;
right_value436 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
memset(&right_264, 0, sizeof(struct sNode*));
right_value443 = (void*)0;
right_value444 = (void*)0;
right_value449 = (void*)0;
    parse_sharp_v5(info);
    node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=add_exp(info))));
    if(right_value417) { right_value417 = come_decrement_ref_count2(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional12=*info->p,    _while_condtional12) {
        if(_if_conditional402=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional402) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value418=shift_exp(info))));
            if(right_value418) { right_value418 = come_decrement_ref_count2(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2323, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value420=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value419=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2323, "struct sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_258),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sLShiftNode_sline;
            _inf_value13->sname=(void*)sLShiftNode_sname;
            _inf_value13->terminated=(void*)sLShiftNode_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result268__ = __result_obj__ = ((struct sNode*)(right_value425=_inf_value13));
            if(right_258) { right_258 = come_decrement_ref_count2(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sLShiftNode_finalize,right_value419, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLShiftNode_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value425) { right_value425 = come_decrement_ref_count2(right_value425, ((struct sNode*)right_value425)->finalize, ((struct sNode*)right_value425)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result268__;
            if(right_258) { right_258 = come_decrement_ref_count2(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional412=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional412) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value426=shift_exp(info))));
                if(right_value426) { right_value426 = come_decrement_ref_count2(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2331, "struct sNode");
                _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value428=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value427=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2331, "struct sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_260),(_Bool)0,info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sRShiftNode_finalize;
                _inf_value14->clone=(void*)sRShiftNode_clone;
                _inf_value14->compile=(void*)sRShiftNode_compile;
                _inf_value14->sline=(void*)sRShiftNode_sline;
                _inf_value14->sname=(void*)sRShiftNode_sname;
                _inf_value14->terminated=(void*)sRShiftNode_terminated;
                _inf_value14->kind=(void*)sRShiftNode_kind;
                __result271__ = __result_obj__ = ((struct sNode*)(right_value433=_inf_value14));
                if(right_260) { right_260 = come_decrement_ref_count2(right_260, ((struct sNode*)right_260)->finalize, ((struct sNode*)right_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sRShiftNode_finalize,right_value427, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sRShiftNode_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value433) { right_value433 = come_decrement_ref_count2(right_value433, ((struct sNode*)right_value433)->finalize, ((struct sNode*)right_value433)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result271__;
                if(right_260) { right_260 = come_decrement_ref_count2(right_260, ((struct sNode*)right_260)->finalize, ((struct sNode*)right_260)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional422=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional422) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=shift_exp(info))));
                    if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2339, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sLShiftNode*)(right_value436=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value435=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2339, "struct sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_262),(_Bool)1,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sLShiftNode_finalize;
                    _inf_value15->clone=(void*)sLShiftNode_clone;
                    _inf_value15->compile=(void*)sLShiftNode_compile;
                    _inf_value15->sline=(void*)sLShiftNode_sline;
                    _inf_value15->sname=(void*)sLShiftNode_sname;
                    _inf_value15->terminated=(void*)sLShiftNode_terminated;
                    _inf_value15->kind=(void*)sLShiftNode_kind;
                    __result274__ = __result_obj__ = ((struct sNode*)(right_value441=_inf_value15));
                    if(right_262) { right_262 = come_decrement_ref_count2(right_262, ((struct sNode*)right_262)->finalize, ((struct sNode*)right_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sLShiftNode_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLShiftNode_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value441) { right_value441 = come_decrement_ref_count2(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result274__;
                    if(right_262) { right_262 = come_decrement_ref_count2(right_262, ((struct sNode*)right_262)->finalize, ((struct sNode*)right_262)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional432=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional432) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=shift_exp(info))));
                        if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2347, "struct sNode");
                        _inf_obj_value16=come_increment_ref_count(((struct sRShiftNode*)(right_value444=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value443=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2347, "struct sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_264),(_Bool)1,info))));
                        _inf_value16->_protocol_obj=_inf_obj_value16;
                        _inf_value16->finalize=(void*)sRShiftNode_finalize;
                        _inf_value16->clone=(void*)sRShiftNode_clone;
                        _inf_value16->compile=(void*)sRShiftNode_compile;
                        _inf_value16->sline=(void*)sRShiftNode_sline;
                        _inf_value16->sname=(void*)sRShiftNode_sname;
                        _inf_value16->terminated=(void*)sRShiftNode_terminated;
                        _inf_value16->kind=(void*)sRShiftNode_kind;
                        __result277__ = __result_obj__ = ((struct sNode*)(right_value449=_inf_value16));
                        if(right_264) { right_264 = come_decrement_ref_count2(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sRShiftNode_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sRShiftNode_finalize,right_value444, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value449) { right_value449 = come_decrement_ref_count2(right_value449, ((struct sNode*)right_value449)->finalize, ((struct sNode*)right_value449)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result277__;
                        if(right_264) { right_264 = come_decrement_ref_count2(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result278__ = __result_obj__ = node_257;
    if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result278__;
    if(node_257) { node_257 = come_decrement_ref_count2(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional423;
_Bool _if_conditional424;
_Bool _if_conditional425;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional423=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional423) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional424=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional424) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional425=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional425) {
                            if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional426;
struct sLShiftNode* __result272__;
void* right_value437;
struct sLShiftNode* result_263;
_Bool _if_conditional427;
void* right_value438;
struct sNode* __dec_obj198;
_Bool _if_conditional428;
void* right_value439;
struct sNode* __dec_obj199;
_Bool _if_conditional429;
_Bool _if_conditional430;
_Bool _if_conditional431;
void* right_value440;
char* __dec_obj200;
struct sLShiftNode* __result273__;
memset(&__result_obj__, 0, sizeof(void*));
right_value437 = (void*)0;
memset(&result_263, 0, sizeof(struct sLShiftNode*));
right_value438 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
                        if(_if_conditional426=self==(void*)0,                        _if_conditional426) {
                            __result272__ = __result_obj__ = (void*)0;
                            return __result272__;
                        }
                        result_263=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value437=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode"))));
                        come_call_finalizer2(sLShiftNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional427=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional427) {
                            __dec_obj198=result_263->mLeft;
                            result_263->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=sNode_clone(self->mLeft))));
                            if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional428=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional428) {
                            __dec_obj199=result_263->mRight;
                            result_263->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=sNode_clone(self->mRight))));
                            if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count2(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional429=self!=((void*)0),                        _if_conditional429) {
                            result_263->mQuote=self->mQuote;
                        }
                        if(_if_conditional430=self!=((void*)0),                        _if_conditional430) {
                            result_263->sline=self->sline;
                        }
                        if(_if_conditional431=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional431) {
                            __dec_obj200=result_263->sname;
                            result_263->sname=(char*)come_increment_ref_count(((char*)(right_value440=string_clone(self->sname))));
                            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count2(__dec_obj200, (void*)0, (void*)0, 0,0,0, (void*)0); }
                            if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                        }
                        __result273__ = __result_obj__ = result_263;
                        come_call_finalizer2(sLShiftNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result273__;
                        come_call_finalizer2(sLShiftNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional433;
_Bool _if_conditional434;
_Bool _if_conditional435;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional433=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional433) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional434=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional434) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional435=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional435) {
                                if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional436;
struct sRShiftNode* __result275__;
void* right_value445;
struct sRShiftNode* result_265;
_Bool _if_conditional437;
void* right_value446;
struct sNode* __dec_obj201;
_Bool _if_conditional438;
void* right_value447;
struct sNode* __dec_obj202;
_Bool _if_conditional439;
_Bool _if_conditional440;
_Bool _if_conditional441;
void* right_value448;
char* __dec_obj203;
struct sRShiftNode* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
right_value445 = (void*)0;
memset(&result_265, 0, sizeof(struct sRShiftNode*));
right_value446 = (void*)0;
right_value447 = (void*)0;
right_value448 = (void*)0;
                            if(_if_conditional436=self==(void*)0,                            _if_conditional436) {
                                __result275__ = __result_obj__ = (void*)0;
                                return __result275__;
                            }
                            result_265=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value445=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode"))));
                            come_call_finalizer2(sRShiftNode_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional437=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional437) {
                                __dec_obj201=result_265->mLeft;
                                result_265->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=sNode_clone(self->mLeft))));
                                if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count2(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value446) { right_value446 = come_decrement_ref_count2(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional438=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional438) {
                                __dec_obj202=result_265->mRight;
                                result_265->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=sNode_clone(self->mRight))));
                                if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count2(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional439=self!=((void*)0),                            _if_conditional439) {
                                result_265->mQuote=self->mQuote;
                            }
                            if(_if_conditional440=self!=((void*)0),                            _if_conditional440) {
                                result_265->sline=self->sline;
                            }
                            if(_if_conditional441=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional441) {
                                __dec_obj203=result_265->sname;
                                result_265->sname=(char*)come_increment_ref_count(((char*)(right_value448=string_clone(self->sname))));
                                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count2(__dec_obj203, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                if(right_value448) { right_value448 = come_decrement_ref_count2(right_value448, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                            }
                            __result276__ = __result_obj__ = result_265;
                            come_call_finalizer2(sRShiftNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result276__;
                            come_call_finalizer2(sRShiftNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
void* right_value450;
struct sNode* node_266;
_Bool _while_condtional13;
_Bool _if_conditional442;
void* right_value451;
struct sNode* right_267;
void* right_value452;
void* right_value453;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* right_value458;
struct sNode* __result281__;
_Bool _if_conditional452;
void* right_value459;
struct sNode* right_269;
void* right_value460;
void* right_value461;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* right_value466;
struct sNode* __result284__;
_Bool _if_conditional462;
void* right_value467;
struct sNode* right_271;
void* right_value468;
void* right_value469;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* right_value474;
struct sNode* __result287__;
_Bool _if_conditional472;
void* right_value475;
struct sNode* right_273;
void* right_value476;
void* right_value477;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* right_value482;
struct sNode* __result290__;
_Bool _if_conditional482;
void* right_value483;
struct sNode* right_275;
void* right_value484;
void* right_value485;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* right_value490;
struct sNode* __result293__;
_Bool _if_conditional492;
void* right_value491;
struct sNode* right_277;
void* right_value492;
void* right_value493;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* right_value498;
struct sNode* __result296__;
_Bool _if_conditional502;
void* right_value499;
struct sNode* right_279;
void* right_value500;
void* right_value501;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* right_value506;
struct sNode* __result299__;
_Bool _if_conditional512;
void* right_value507;
struct sNode* right_281;
void* right_value508;
void* right_value509;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* right_value514;
struct sNode* __result302__;
struct sNode* __result303__;
memset(&__result_obj__, 0, sizeof(void*));
right_value450 = (void*)0;
memset(&node_266, 0, sizeof(struct sNode*));
right_value451 = (void*)0;
memset(&right_267, 0, sizeof(struct sNode*));
right_value452 = (void*)0;
right_value453 = (void*)0;
right_value458 = (void*)0;
right_value459 = (void*)0;
memset(&right_269, 0, sizeof(struct sNode*));
right_value460 = (void*)0;
right_value461 = (void*)0;
right_value466 = (void*)0;
right_value467 = (void*)0;
memset(&right_271, 0, sizeof(struct sNode*));
right_value468 = (void*)0;
right_value469 = (void*)0;
right_value474 = (void*)0;
right_value475 = (void*)0;
memset(&right_273, 0, sizeof(struct sNode*));
right_value476 = (void*)0;
right_value477 = (void*)0;
right_value482 = (void*)0;
right_value483 = (void*)0;
memset(&right_275, 0, sizeof(struct sNode*));
right_value484 = (void*)0;
right_value485 = (void*)0;
right_value490 = (void*)0;
right_value491 = (void*)0;
memset(&right_277, 0, sizeof(struct sNode*));
right_value492 = (void*)0;
right_value493 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
memset(&right_279, 0, sizeof(struct sNode*));
right_value500 = (void*)0;
right_value501 = (void*)0;
right_value506 = (void*)0;
right_value507 = (void*)0;
memset(&right_281, 0, sizeof(struct sNode*));
right_value508 = (void*)0;
right_value509 = (void*)0;
right_value514 = (void*)0;
    parse_sharp_v5(info);
    node_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value450=shift_exp(info))));
    if(right_value450) { right_value450 = come_decrement_ref_count2(right_value450, ((struct sNode*)right_value450)->finalize, ((struct sNode*)right_value450)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional13=*info->p,    _while_condtional13) {
        if(_if_conditional442=*info->p==62&&*(info->p+1)==61,        _if_conditional442) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=shift_exp(info))));
            if(right_value451) { right_value451 = come_decrement_ref_count2(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2374, "struct sNode");
            _inf_obj_value17=come_increment_ref_count(((struct sGtEqNode*)(right_value453=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value452=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2374, "struct sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_267),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sGtEqNode_sline;
            _inf_value17->sname=(void*)sGtEqNode_sname;
            _inf_value17->terminated=(void*)sGtEqNode_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result281__ = __result_obj__ = ((struct sNode*)(right_value458=_inf_value17));
            if(right_267) { right_267 = come_decrement_ref_count2(right_267, ((struct sNode*)right_267)->finalize, ((struct sNode*)right_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sGtEqNode_finalize,right_value452, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGtEqNode_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value458) { right_value458 = come_decrement_ref_count2(right_value458, ((struct sNode*)right_value458)->finalize, ((struct sNode*)right_value458)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result281__;
            if(right_267) { right_267 = come_decrement_ref_count2(right_267, ((struct sNode*)right_267)->finalize, ((struct sNode*)right_267)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional452=*info->p==60&&*(info->p+1)==61,            _if_conditional452) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value459=shift_exp(info))));
                if(right_value459) { right_value459 = come_decrement_ref_count2(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2382, "struct sNode");
                _inf_obj_value18=come_increment_ref_count(((struct sLtEqNode*)(right_value461=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value460=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2382, "struct sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_269),(_Bool)0,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLtEqNode_finalize;
                _inf_value18->clone=(void*)sLtEqNode_clone;
                _inf_value18->compile=(void*)sLtEqNode_compile;
                _inf_value18->sline=(void*)sLtEqNode_sline;
                _inf_value18->sname=(void*)sLtEqNode_sname;
                _inf_value18->terminated=(void*)sLtEqNode_terminated;
                _inf_value18->kind=(void*)sLtEqNode_kind;
                __result284__ = __result_obj__ = ((struct sNode*)(right_value466=_inf_value18));
                if(right_269) { right_269 = come_decrement_ref_count2(right_269, ((struct sNode*)right_269)->finalize, ((struct sNode*)right_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sLtEqNode_finalize,right_value460, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sLtEqNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value466) { right_value466 = come_decrement_ref_count2(right_value466, ((struct sNode*)right_value466)->finalize, ((struct sNode*)right_value466)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result284__;
                if(right_269) { right_269 = come_decrement_ref_count2(right_269, ((struct sNode*)right_269)->finalize, ((struct sNode*)right_269)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional462=*info->p==62&&*(info->p+1)!=62,                _if_conditional462) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value467=shift_exp(info))));
                    if(right_value467) { right_value467 = come_decrement_ref_count2(right_value467, ((struct sNode*)right_value467)->finalize, ((struct sNode*)right_value467)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2390, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sGtNode*)(right_value469=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value468=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2390, "struct sGtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_271),(_Bool)0,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sGtNode_finalize;
                    _inf_value19->clone=(void*)sGtNode_clone;
                    _inf_value19->compile=(void*)sGtNode_compile;
                    _inf_value19->sline=(void*)sGtNode_sline;
                    _inf_value19->sname=(void*)sGtNode_sname;
                    _inf_value19->terminated=(void*)sGtNode_terminated;
                    _inf_value19->kind=(void*)sGtNode_kind;
                    __result287__ = __result_obj__ = ((struct sNode*)(right_value474=_inf_value19));
                    if(right_271) { right_271 = come_decrement_ref_count2(right_271, ((struct sNode*)right_271)->finalize, ((struct sNode*)right_271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sGtNode_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sGtNode_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value474) { right_value474 = come_decrement_ref_count2(right_value474, ((struct sNode*)right_value474)->finalize, ((struct sNode*)right_value474)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result287__;
                    if(right_271) { right_271 = come_decrement_ref_count2(right_271, ((struct sNode*)right_271)->finalize, ((struct sNode*)right_271)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional472=*info->p==60&&*(info->p+1)!=60,                    _if_conditional472) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value475=shift_exp(info))));
                        if(right_value475) { right_value475 = come_decrement_ref_count2(right_value475, ((struct sNode*)right_value475)->finalize, ((struct sNode*)right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2398, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sLtNode*)(right_value477=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value476=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2398, "struct sLtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_273),(_Bool)0,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sLtNode_finalize;
                        _inf_value20->clone=(void*)sLtNode_clone;
                        _inf_value20->compile=(void*)sLtNode_compile;
                        _inf_value20->sline=(void*)sLtNode_sline;
                        _inf_value20->sname=(void*)sLtNode_sname;
                        _inf_value20->terminated=(void*)sLtNode_terminated;
                        _inf_value20->kind=(void*)sLtNode_kind;
                        __result290__ = __result_obj__ = ((struct sNode*)(right_value482=_inf_value20));
                        if(right_273) { right_273 = come_decrement_ref_count2(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sLtNode_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLtNode_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value482) { right_value482 = come_decrement_ref_count2(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result290__;
                        if(right_273) { right_273 = come_decrement_ref_count2(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional482=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional482) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value483=shift_exp(info))));
                            if(right_value483) { right_value483 = come_decrement_ref_count2(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2406, "struct sNode");
                            _inf_obj_value21=come_increment_ref_count(((struct sGtEqNode*)(right_value485=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value484=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2406, "struct sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_275),(_Bool)1,info))));
                            _inf_value21->_protocol_obj=_inf_obj_value21;
                            _inf_value21->finalize=(void*)sGtEqNode_finalize;
                            _inf_value21->clone=(void*)sGtEqNode_clone;
                            _inf_value21->compile=(void*)sGtEqNode_compile;
                            _inf_value21->sline=(void*)sGtEqNode_sline;
                            _inf_value21->sname=(void*)sGtEqNode_sname;
                            _inf_value21->terminated=(void*)sGtEqNode_terminated;
                            _inf_value21->kind=(void*)sGtEqNode_kind;
                            __result293__ = __result_obj__ = ((struct sNode*)(right_value490=_inf_value21));
                            if(right_275) { right_275 = come_decrement_ref_count2(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sGtEqNode_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sGtEqNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result293__;
                            if(right_275) { right_275 = come_decrement_ref_count2(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional492=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional492) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value491=shift_exp(info))));
                                if(right_value491) { right_value491 = come_decrement_ref_count2(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2414, "struct sNode");
                                _inf_obj_value22=come_increment_ref_count(((struct sLtEqNode*)(right_value493=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value492=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2414, "struct sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_277),(_Bool)1,info))));
                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                _inf_value22->finalize=(void*)sLtEqNode_finalize;
                                _inf_value22->clone=(void*)sLtEqNode_clone;
                                _inf_value22->compile=(void*)sLtEqNode_compile;
                                _inf_value22->sline=(void*)sLtEqNode_sline;
                                _inf_value22->sname=(void*)sLtEqNode_sname;
                                _inf_value22->terminated=(void*)sLtEqNode_terminated;
                                _inf_value22->kind=(void*)sLtEqNode_kind;
                                __result296__ = __result_obj__ = ((struct sNode*)(right_value498=_inf_value22));
                                if(right_277) { right_277 = come_decrement_ref_count2(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sLtEqNode_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sLtEqNode_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value498) { right_value498 = come_decrement_ref_count2(right_value498, ((struct sNode*)right_value498)->finalize, ((struct sNode*)right_value498)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result296__;
                                if(right_277) { right_277 = come_decrement_ref_count2(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional502=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional502) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value499=shift_exp(info))));
                                    if(right_value499) { right_value499 = come_decrement_ref_count2(right_value499, ((struct sNode*)right_value499)->finalize, ((struct sNode*)right_value499)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2422, "struct sNode");
                                    _inf_obj_value23=come_increment_ref_count(((struct sGtNode*)(right_value501=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value500=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2422, "struct sGtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_279),(_Bool)1,info))));
                                    _inf_value23->_protocol_obj=_inf_obj_value23;
                                    _inf_value23->finalize=(void*)sGtNode_finalize;
                                    _inf_value23->clone=(void*)sGtNode_clone;
                                    _inf_value23->compile=(void*)sGtNode_compile;
                                    _inf_value23->sline=(void*)sGtNode_sline;
                                    _inf_value23->sname=(void*)sGtNode_sname;
                                    _inf_value23->terminated=(void*)sGtNode_terminated;
                                    _inf_value23->kind=(void*)sGtNode_kind;
                                    __result299__ = __result_obj__ = ((struct sNode*)(right_value506=_inf_value23));
                                    if(right_279) { right_279 = come_decrement_ref_count2(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sGtNode_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sGtNode_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value506) { right_value506 = come_decrement_ref_count2(right_value506, ((struct sNode*)right_value506)->finalize, ((struct sNode*)right_value506)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result299__;
                                    if(right_279) { right_279 = come_decrement_ref_count2(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional512=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional512) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value507=shift_exp(info))));
                                        if(right_value507) { right_value507 = come_decrement_ref_count2(right_value507, ((struct sNode*)right_value507)->finalize, ((struct sNode*)right_value507)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2430, "struct sNode");
                                        _inf_obj_value24=come_increment_ref_count(((struct sLtNode*)(right_value509=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value508=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2430, "struct sLtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_281),(_Bool)1,info))));
                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                        _inf_value24->finalize=(void*)sLtNode_finalize;
                                        _inf_value24->clone=(void*)sLtNode_clone;
                                        _inf_value24->compile=(void*)sLtNode_compile;
                                        _inf_value24->sline=(void*)sLtNode_sline;
                                        _inf_value24->sname=(void*)sLtNode_sname;
                                        _inf_value24->terminated=(void*)sLtNode_terminated;
                                        _inf_value24->kind=(void*)sLtNode_kind;
                                        __result302__ = __result_obj__ = ((struct sNode*)(right_value514=_inf_value24));
                                        if(right_281) { right_281 = come_decrement_ref_count2(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sLtNode_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sLtNode_finalize,right_value509, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value514) { right_value514 = come_decrement_ref_count2(right_value514, ((struct sNode*)right_value514)->finalize, ((struct sNode*)right_value514)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result302__;
                                        if(right_281) { right_281 = come_decrement_ref_count2(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result303__ = __result_obj__ = node_266;
    if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result303__;
    if(node_266) { node_266 = come_decrement_ref_count2(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional483;
_Bool _if_conditional484;
_Bool _if_conditional485;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional483=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional483) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional484=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional484) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional485=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional485) {
                                    if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional486;
struct sGtEqNode* __result291__;
void* right_value486;
struct sGtEqNode* result_276;
_Bool _if_conditional487;
void* right_value487;
struct sNode* __dec_obj216;
_Bool _if_conditional488;
void* right_value488;
struct sNode* __dec_obj217;
_Bool _if_conditional489;
_Bool _if_conditional490;
_Bool _if_conditional491;
void* right_value489;
char* __dec_obj218;
struct sGtEqNode* __result292__;
memset(&__result_obj__, 0, sizeof(void*));
right_value486 = (void*)0;
memset(&result_276, 0, sizeof(struct sGtEqNode*));
right_value487 = (void*)0;
right_value488 = (void*)0;
right_value489 = (void*)0;
                                if(_if_conditional486=self==(void*)0,                                _if_conditional486) {
                                    __result291__ = __result_obj__ = (void*)0;
                                    return __result291__;
                                }
                                result_276=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value486=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode"))));
                                come_call_finalizer2(sGtEqNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional487=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional487) {
                                    __dec_obj216=result_276->mLeft;
                                    result_276->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value487=sNode_clone(self->mLeft))));
                                    if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count2(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value487) { right_value487 = come_decrement_ref_count2(right_value487, ((struct sNode*)right_value487)->finalize, ((struct sNode*)right_value487)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional488=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional488) {
                                    __dec_obj217=result_276->mRight;
                                    result_276->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value488=sNode_clone(self->mRight))));
                                    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count2(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value488) { right_value488 = come_decrement_ref_count2(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional489=self!=((void*)0),                                _if_conditional489) {
                                    result_276->mQuote=self->mQuote;
                                }
                                if(_if_conditional490=self!=((void*)0),                                _if_conditional490) {
                                    result_276->sline=self->sline;
                                }
                                if(_if_conditional491=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional491) {
                                    __dec_obj218=result_276->sname;
                                    result_276->sname=(char*)come_increment_ref_count(((char*)(right_value489=string_clone(self->sname))));
                                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count2(__dec_obj218, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value489) { right_value489 = come_decrement_ref_count2(right_value489, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                __result292__ = __result_obj__ = result_276;
                                come_call_finalizer2(sGtEqNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result292__;
                                come_call_finalizer2(sGtEqNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional493;
_Bool _if_conditional494;
_Bool _if_conditional495;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional493=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional493) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional494=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional494) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional495=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional495) {
                                        if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional496;
struct sLtEqNode* __result294__;
void* right_value494;
struct sLtEqNode* result_278;
_Bool _if_conditional497;
void* right_value495;
struct sNode* __dec_obj219;
_Bool _if_conditional498;
void* right_value496;
struct sNode* __dec_obj220;
_Bool _if_conditional499;
_Bool _if_conditional500;
_Bool _if_conditional501;
void* right_value497;
char* __dec_obj221;
struct sLtEqNode* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
right_value494 = (void*)0;
memset(&result_278, 0, sizeof(struct sLtEqNode*));
right_value495 = (void*)0;
right_value496 = (void*)0;
right_value497 = (void*)0;
                                    if(_if_conditional496=self==(void*)0,                                    _if_conditional496) {
                                        __result294__ = __result_obj__ = (void*)0;
                                        return __result294__;
                                    }
                                    result_278=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value494=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode"))));
                                    come_call_finalizer2(sLtEqNode_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional497=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional497) {
                                        __dec_obj219=result_278->mLeft;
                                        result_278->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value495=sNode_clone(self->mLeft))));
                                        if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count2(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value495) { right_value495 = come_decrement_ref_count2(right_value495, ((struct sNode*)right_value495)->finalize, ((struct sNode*)right_value495)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional498=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional498) {
                                        __dec_obj220=result_278->mRight;
                                        result_278->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value496=sNode_clone(self->mRight))));
                                        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count2(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value496) { right_value496 = come_decrement_ref_count2(right_value496, ((struct sNode*)right_value496)->finalize, ((struct sNode*)right_value496)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional499=self!=((void*)0),                                    _if_conditional499) {
                                        result_278->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional500=self!=((void*)0),                                    _if_conditional500) {
                                        result_278->sline=self->sline;
                                    }
                                    if(_if_conditional501=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional501) {
                                        __dec_obj221=result_278->sname;
                                        result_278->sname=(char*)come_increment_ref_count(((char*)(right_value497=string_clone(self->sname))));
                                        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count2(__dec_obj221, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                        if(right_value497) { right_value497 = come_decrement_ref_count2(right_value497, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                    }
                                    __result295__ = __result_obj__ = result_278;
                                    come_call_finalizer2(sLtEqNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result295__;
                                    come_call_finalizer2(sLtEqNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional503;
_Bool _if_conditional504;
_Bool _if_conditional505;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional503=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional503) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional504=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional504) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional505=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional505) {
                                            if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional506;
struct sGtNode* __result297__;
void* right_value502;
struct sGtNode* result_280;
_Bool _if_conditional507;
void* right_value503;
struct sNode* __dec_obj222;
_Bool _if_conditional508;
void* right_value504;
struct sNode* __dec_obj223;
_Bool _if_conditional509;
_Bool _if_conditional510;
_Bool _if_conditional511;
void* right_value505;
char* __dec_obj224;
struct sGtNode* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
right_value502 = (void*)0;
memset(&result_280, 0, sizeof(struct sGtNode*));
right_value503 = (void*)0;
right_value504 = (void*)0;
right_value505 = (void*)0;
                                        if(_if_conditional506=self==(void*)0,                                        _if_conditional506) {
                                            __result297__ = __result_obj__ = (void*)0;
                                            return __result297__;
                                        }
                                        result_280=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value502=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode"))));
                                        come_call_finalizer2(sGtNode_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional507=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional507) {
                                            __dec_obj222=result_280->mLeft;
                                            result_280->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value503=sNode_clone(self->mLeft))));
                                            if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count2(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value503) { right_value503 = come_decrement_ref_count2(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional508=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional508) {
                                            __dec_obj223=result_280->mRight;
                                            result_280->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value504=sNode_clone(self->mRight))));
                                            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value504) { right_value504 = come_decrement_ref_count2(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional509=self!=((void*)0),                                        _if_conditional509) {
                                            result_280->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional510=self!=((void*)0),                                        _if_conditional510) {
                                            result_280->sline=self->sline;
                                        }
                                        if(_if_conditional511=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional511) {
                                            __dec_obj224=result_280->sname;
                                            result_280->sname=(char*)come_increment_ref_count(((char*)(right_value505=string_clone(self->sname))));
                                            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                            if(right_value505) { right_value505 = come_decrement_ref_count2(right_value505, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        }
                                        __result298__ = __result_obj__ = result_280;
                                        come_call_finalizer2(sGtNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result298__;
                                        come_call_finalizer2(sGtNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional513;
_Bool _if_conditional514;
_Bool _if_conditional515;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional513=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional513) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional514=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional514) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional515=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional515) {
                                                if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional516;
struct sLtNode* __result300__;
void* right_value510;
struct sLtNode* result_282;
_Bool _if_conditional517;
void* right_value511;
struct sNode* __dec_obj225;
_Bool _if_conditional518;
void* right_value512;
struct sNode* __dec_obj226;
_Bool _if_conditional519;
_Bool _if_conditional520;
_Bool _if_conditional521;
void* right_value513;
char* __dec_obj227;
struct sLtNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value510 = (void*)0;
memset(&result_282, 0, sizeof(struct sLtNode*));
right_value511 = (void*)0;
right_value512 = (void*)0;
right_value513 = (void*)0;
                                            if(_if_conditional516=self==(void*)0,                                            _if_conditional516) {
                                                __result300__ = __result_obj__ = (void*)0;
                                                return __result300__;
                                            }
                                            result_282=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value510=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode"))));
                                            come_call_finalizer2(sLtNode_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional517=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional517) {
                                                __dec_obj225=result_282->mLeft;
                                                result_282->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=sNode_clone(self->mLeft))));
                                                if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional518=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional518) {
                                                __dec_obj226=result_282->mRight;
                                                result_282->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value512=sNode_clone(self->mRight))));
                                                if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value512) { right_value512 = come_decrement_ref_count2(right_value512, ((struct sNode*)right_value512)->finalize, ((struct sNode*)right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional519=self!=((void*)0),                                            _if_conditional519) {
                                                result_282->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional520=self!=((void*)0),                                            _if_conditional520) {
                                                result_282->sline=self->sline;
                                            }
                                            if(_if_conditional521=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional521) {
                                                __dec_obj227=result_282->sname;
                                                result_282->sname=(char*)come_increment_ref_count(((char*)(right_value513=string_clone(self->sname))));
                                                if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                                if(right_value513) { right_value513 = come_decrement_ref_count2(right_value513, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                            }
                                            __result301__ = __result_obj__ = result_282;
                                            come_call_finalizer2(sLtNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result301__;
                                            come_call_finalizer2(sLtNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
void* right_value515;
struct sNode* node_283;
_Bool _while_condtional14;
_Bool _if_conditional522;
void* right_value516;
struct sNode* right_284;
void* right_value517;
void* right_value518;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* right_value523;
struct sNode* __result306__;
_Bool _if_conditional532;
void* right_value524;
struct sNode* right_286;
void* right_value525;
void* right_value526;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* right_value531;
struct sNode* __result309__;
_Bool _if_conditional542;
void* right_value532;
struct sNode* right_288;
void* right_value533;
void* right_value534;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* right_value539;
struct sNode* __result312__;
_Bool _if_conditional552;
void* right_value540;
struct sNode* right_290;
void* right_value541;
void* right_value542;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* right_value547;
struct sNode* __result315__;
_Bool _if_conditional562;
void* right_value548;
struct sNode* right_292;
void* right_value549;
void* right_value550;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* right_value555;
struct sNode* __result318__;
_Bool _if_conditional572;
void* right_value556;
struct sNode* right_294;
void* right_value557;
void* right_value558;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* right_value563;
struct sNode* __result321__;
_Bool _if_conditional582;
void* right_value564;
struct sNode* right_296;
void* right_value565;
void* right_value566;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* right_value571;
struct sNode* __result324__;
_Bool _if_conditional592;
void* right_value572;
struct sNode* right_298;
void* right_value573;
void* right_value574;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* right_value579;
struct sNode* __result327__;
struct sNode* __result328__;
memset(&__result_obj__, 0, sizeof(void*));
right_value515 = (void*)0;
memset(&node_283, 0, sizeof(struct sNode*));
right_value516 = (void*)0;
memset(&right_284, 0, sizeof(struct sNode*));
right_value517 = (void*)0;
right_value518 = (void*)0;
right_value523 = (void*)0;
right_value524 = (void*)0;
memset(&right_286, 0, sizeof(struct sNode*));
right_value525 = (void*)0;
right_value526 = (void*)0;
right_value531 = (void*)0;
right_value532 = (void*)0;
memset(&right_288, 0, sizeof(struct sNode*));
right_value533 = (void*)0;
right_value534 = (void*)0;
right_value539 = (void*)0;
right_value540 = (void*)0;
memset(&right_290, 0, sizeof(struct sNode*));
right_value541 = (void*)0;
right_value542 = (void*)0;
right_value547 = (void*)0;
right_value548 = (void*)0;
memset(&right_292, 0, sizeof(struct sNode*));
right_value549 = (void*)0;
right_value550 = (void*)0;
right_value555 = (void*)0;
right_value556 = (void*)0;
memset(&right_294, 0, sizeof(struct sNode*));
right_value557 = (void*)0;
right_value558 = (void*)0;
right_value563 = (void*)0;
right_value564 = (void*)0;
memset(&right_296, 0, sizeof(struct sNode*));
right_value565 = (void*)0;
right_value566 = (void*)0;
right_value571 = (void*)0;
right_value572 = (void*)0;
memset(&right_298, 0, sizeof(struct sNode*));
right_value573 = (void*)0;
right_value574 = (void*)0;
right_value579 = (void*)0;
    parse_sharp_v5(info);
    node_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value515=comparison_exp(info))));
    if(right_value515) { right_value515 = come_decrement_ref_count2(right_value515, ((struct sNode*)right_value515)->finalize, ((struct sNode*)right_value515)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional14=*info->p,    _while_condtional14) {
        if(_if_conditional522=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional522) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value516=eq_exp(info))));
            if(right_value516) { right_value516 = come_decrement_ref_count2(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2457, "struct sNode");
            _inf_obj_value25=come_increment_ref_count(((struct sEq2Node*)(right_value518=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value517=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2457, "struct sEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_284),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sEq2Node_sline;
            _inf_value25->sname=(void*)sEq2Node_sname;
            _inf_value25->terminated=(void*)sEq2Node_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result306__ = __result_obj__ = ((struct sNode*)(right_value523=_inf_value25));
            if(right_284) { right_284 = come_decrement_ref_count2(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sEq2Node_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sEq2Node_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value523) { right_value523 = come_decrement_ref_count2(right_value523, ((struct sNode*)right_value523)->finalize, ((struct sNode*)right_value523)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result306__;
            if(right_284) { right_284 = come_decrement_ref_count2(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional532=*info->p==61&&*(info->p+1)==61,            _if_conditional532) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value524=eq_exp(info))));
                if(right_value524) { right_value524 = come_decrement_ref_count2(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2465, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sEqNode*)(right_value526=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value525=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2465, "struct sEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_286),(_Bool)0,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sEqNode_finalize;
                _inf_value26->clone=(void*)sEqNode_clone;
                _inf_value26->compile=(void*)sEqNode_compile;
                _inf_value26->sline=(void*)sEqNode_sline;
                _inf_value26->sname=(void*)sEqNode_sname;
                _inf_value26->terminated=(void*)sEqNode_terminated;
                _inf_value26->kind=(void*)sEqNode_kind;
                __result309__ = __result_obj__ = ((struct sNode*)(right_value531=_inf_value26));
                if(right_286) { right_286 = come_decrement_ref_count2(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sEqNode_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sEqNode_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value531) { right_value531 = come_decrement_ref_count2(right_value531, ((struct sNode*)right_value531)->finalize, ((struct sNode*)right_value531)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result309__;
                if(right_286) { right_286 = come_decrement_ref_count2(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional542=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional542) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value532=eq_exp(info))));
                    if(right_value532) { right_value532 = come_decrement_ref_count2(right_value532, ((struct sNode*)right_value532)->finalize, ((struct sNode*)right_value532)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2473, "struct sNode");
                    _inf_obj_value27=come_increment_ref_count(((struct sNotEq2Node*)(right_value534=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value533=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2473, "struct sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_288),(_Bool)0,info))));
                    _inf_value27->_protocol_obj=_inf_obj_value27;
                    _inf_value27->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value27->clone=(void*)sNotEq2Node_clone;
                    _inf_value27->compile=(void*)sNotEq2Node_compile;
                    _inf_value27->sline=(void*)sNotEq2Node_sline;
                    _inf_value27->sname=(void*)sNotEq2Node_sname;
                    _inf_value27->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value27->kind=(void*)sNotEq2Node_kind;
                    __result312__ = __result_obj__ = ((struct sNode*)(right_value539=_inf_value27));
                    if(right_288) { right_288 = come_decrement_ref_count2(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sNotEq2Node_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sNotEq2Node_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value539) { right_value539 = come_decrement_ref_count2(right_value539, ((struct sNode*)right_value539)->finalize, ((struct sNode*)right_value539)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result312__;
                    if(right_288) { right_288 = come_decrement_ref_count2(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional552=*info->p==33&&*(info->p+1)==61,                    _if_conditional552) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value540=eq_exp(info))));
                        if(right_value540) { right_value540 = come_decrement_ref_count2(right_value540, ((struct sNode*)right_value540)->finalize, ((struct sNode*)right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2481, "struct sNode");
                        _inf_obj_value28=come_increment_ref_count(((struct sNotEqNode*)(right_value542=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value541=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2481, "struct sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_290),(_Bool)0,info))));
                        _inf_value28->_protocol_obj=_inf_obj_value28;
                        _inf_value28->finalize=(void*)sNotEqNode_finalize;
                        _inf_value28->clone=(void*)sNotEqNode_clone;
                        _inf_value28->compile=(void*)sNotEqNode_compile;
                        _inf_value28->sline=(void*)sNotEqNode_sline;
                        _inf_value28->sname=(void*)sNotEqNode_sname;
                        _inf_value28->terminated=(void*)sNotEqNode_terminated;
                        _inf_value28->kind=(void*)sNotEqNode_kind;
                        __result315__ = __result_obj__ = ((struct sNode*)(right_value547=_inf_value28));
                        if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sNotEqNode_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sNotEqNode_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value547) { right_value547 = come_decrement_ref_count2(right_value547, ((struct sNode*)right_value547)->finalize, ((struct sNode*)right_value547)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result315__;
                        if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional562=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional562) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value548=eq_exp(info))));
                            if(right_value548) { right_value548 = come_decrement_ref_count2(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2489, "struct sNode");
                            _inf_obj_value29=come_increment_ref_count(((struct sEq2Node*)(right_value550=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value549=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2489, "struct sEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_292),(_Bool)1,info))));
                            _inf_value29->_protocol_obj=_inf_obj_value29;
                            _inf_value29->finalize=(void*)sEq2Node_finalize;
                            _inf_value29->clone=(void*)sEq2Node_clone;
                            _inf_value29->compile=(void*)sEq2Node_compile;
                            _inf_value29->sline=(void*)sEq2Node_sline;
                            _inf_value29->sname=(void*)sEq2Node_sname;
                            _inf_value29->terminated=(void*)sEq2Node_terminated;
                            _inf_value29->kind=(void*)sEq2Node_kind;
                            __result318__ = __result_obj__ = ((struct sNode*)(right_value555=_inf_value29));
                            if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sEq2Node_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sEq2Node_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value555) { right_value555 = come_decrement_ref_count2(right_value555, ((struct sNode*)right_value555)->finalize, ((struct sNode*)right_value555)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result318__;
                            if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional572=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional572) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=eq_exp(info))));
                                if(right_value556) { right_value556 = come_decrement_ref_count2(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2497, "struct sNode");
                                _inf_obj_value30=come_increment_ref_count(((struct sEqNode*)(right_value558=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value557=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2497, "struct sEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_294),(_Bool)1,info))));
                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                _inf_value30->finalize=(void*)sEqNode_finalize;
                                _inf_value30->clone=(void*)sEqNode_clone;
                                _inf_value30->compile=(void*)sEqNode_compile;
                                _inf_value30->sline=(void*)sEqNode_sline;
                                _inf_value30->sname=(void*)sEqNode_sname;
                                _inf_value30->terminated=(void*)sEqNode_terminated;
                                _inf_value30->kind=(void*)sEqNode_kind;
                                __result321__ = __result_obj__ = ((struct sNode*)(right_value563=_inf_value30));
                                if(right_294) { right_294 = come_decrement_ref_count2(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sEqNode_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sEqNode_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value563) { right_value563 = come_decrement_ref_count2(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result321__;
                                if(right_294) { right_294 = come_decrement_ref_count2(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional582=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional582) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value564=eq_exp(info))));
                                    if(right_value564) { right_value564 = come_decrement_ref_count2(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2505, "struct sNode");
                                    _inf_obj_value31=come_increment_ref_count(((struct sNotEq2Node*)(right_value566=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value565=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2505, "struct sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_296),(_Bool)1,info))));
                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                    _inf_value31->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value31->clone=(void*)sNotEq2Node_clone;
                                    _inf_value31->compile=(void*)sNotEq2Node_compile;
                                    _inf_value31->sline=(void*)sNotEq2Node_sline;
                                    _inf_value31->sname=(void*)sNotEq2Node_sname;
                                    _inf_value31->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value31->kind=(void*)sNotEq2Node_kind;
                                    __result324__ = __result_obj__ = ((struct sNode*)(right_value571=_inf_value31));
                                    if(right_296) { right_296 = come_decrement_ref_count2(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sNotEq2Node_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sNotEq2Node_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value571) { right_value571 = come_decrement_ref_count2(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result324__;
                                    if(right_296) { right_296 = come_decrement_ref_count2(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional592=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional592) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value572=eq_exp(info))));
                                        if(right_value572) { right_value572 = come_decrement_ref_count2(right_value572, ((struct sNode*)right_value572)->finalize, ((struct sNode*)right_value572)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2513, "struct sNode");
                                        _inf_obj_value32=come_increment_ref_count(((struct sNotEqNode*)(right_value574=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value573=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2513, "struct sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_298),(_Bool)1,info))));
                                        _inf_value32->_protocol_obj=_inf_obj_value32;
                                        _inf_value32->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value32->clone=(void*)sNotEqNode_clone;
                                        _inf_value32->compile=(void*)sNotEqNode_compile;
                                        _inf_value32->sline=(void*)sNotEqNode_sline;
                                        _inf_value32->sname=(void*)sNotEqNode_sname;
                                        _inf_value32->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value32->kind=(void*)sNotEqNode_kind;
                                        __result327__ = __result_obj__ = ((struct sNode*)(right_value579=_inf_value32));
                                        if(right_298) { right_298 = come_decrement_ref_count2(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sNotEqNode_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sNotEqNode_finalize,right_value574, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value579) { right_value579 = come_decrement_ref_count2(right_value579, ((struct sNode*)right_value579)->finalize, ((struct sNode*)right_value579)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result327__;
                                        if(right_298) { right_298 = come_decrement_ref_count2(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result328__ = __result_obj__ = node_283;
    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result328__;
    if(node_283) { node_283 = come_decrement_ref_count2(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional563;
_Bool _if_conditional564;
_Bool _if_conditional565;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional563=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional563) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional564=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional564) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional565=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional565) {
                                    if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional566;
struct sEq2Node* __result316__;
void* right_value551;
struct sEq2Node* result_293;
_Bool _if_conditional567;
void* right_value552;
struct sNode* __dec_obj240;
_Bool _if_conditional568;
void* right_value553;
struct sNode* __dec_obj241;
_Bool _if_conditional569;
_Bool _if_conditional570;
_Bool _if_conditional571;
void* right_value554;
char* __dec_obj242;
struct sEq2Node* __result317__;
memset(&__result_obj__, 0, sizeof(void*));
right_value551 = (void*)0;
memset(&result_293, 0, sizeof(struct sEq2Node*));
right_value552 = (void*)0;
right_value553 = (void*)0;
right_value554 = (void*)0;
                                if(_if_conditional566=self==(void*)0,                                _if_conditional566) {
                                    __result316__ = __result_obj__ = (void*)0;
                                    return __result316__;
                                }
                                result_293=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value551=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node"))));
                                come_call_finalizer2(sEq2Node_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional567=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional567) {
                                    __dec_obj240=result_293->mLeft;
                                    result_293->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value552=sNode_clone(self->mLeft))));
                                    if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count2(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value552) { right_value552 = come_decrement_ref_count2(right_value552, ((struct sNode*)right_value552)->finalize, ((struct sNode*)right_value552)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional568=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional568) {
                                    __dec_obj241=result_293->mRight;
                                    result_293->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value553=sNode_clone(self->mRight))));
                                    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count2(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value553) { right_value553 = come_decrement_ref_count2(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional569=self!=((void*)0),                                _if_conditional569) {
                                    result_293->mQuote=self->mQuote;
                                }
                                if(_if_conditional570=self!=((void*)0),                                _if_conditional570) {
                                    result_293->sline=self->sline;
                                }
                                if(_if_conditional571=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional571) {
                                    __dec_obj242=result_293->sname;
                                    result_293->sname=(char*)come_increment_ref_count(((char*)(right_value554=string_clone(self->sname))));
                                    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count2(__dec_obj242, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                    if(right_value554) { right_value554 = come_decrement_ref_count2(right_value554, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                }
                                __result317__ = __result_obj__ = result_293;
                                come_call_finalizer2(sEq2Node_finalize,result_293, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result317__;
                                come_call_finalizer2(sEq2Node_finalize,result_293, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional573;
_Bool _if_conditional574;
_Bool _if_conditional575;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional573=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional573) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional574=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional574) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional575=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional575) {
                                        if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional576;
struct sEqNode* __result319__;
void* right_value559;
struct sEqNode* result_295;
_Bool _if_conditional577;
void* right_value560;
struct sNode* __dec_obj243;
_Bool _if_conditional578;
void* right_value561;
struct sNode* __dec_obj244;
_Bool _if_conditional579;
_Bool _if_conditional580;
_Bool _if_conditional581;
void* right_value562;
char* __dec_obj245;
struct sEqNode* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
right_value559 = (void*)0;
memset(&result_295, 0, sizeof(struct sEqNode*));
right_value560 = (void*)0;
right_value561 = (void*)0;
right_value562 = (void*)0;
                                    if(_if_conditional576=self==(void*)0,                                    _if_conditional576) {
                                        __result319__ = __result_obj__ = (void*)0;
                                        return __result319__;
                                    }
                                    result_295=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value559=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode"))));
                                    come_call_finalizer2(sEqNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional577=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional577) {
                                        __dec_obj243=result_295->mLeft;
                                        result_295->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value560=sNode_clone(self->mLeft))));
                                        if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count2(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value560) { right_value560 = come_decrement_ref_count2(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional578=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional578) {
                                        __dec_obj244=result_295->mRight;
                                        result_295->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value561=sNode_clone(self->mRight))));
                                        if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count2(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value561) { right_value561 = come_decrement_ref_count2(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional579=self!=((void*)0),                                    _if_conditional579) {
                                        result_295->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional580=self!=((void*)0),                                    _if_conditional580) {
                                        result_295->sline=self->sline;
                                    }
                                    if(_if_conditional581=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional581) {
                                        __dec_obj245=result_295->sname;
                                        result_295->sname=(char*)come_increment_ref_count(((char*)(right_value562=string_clone(self->sname))));
                                        if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count2(__dec_obj245, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                        if(right_value562) { right_value562 = come_decrement_ref_count2(right_value562, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                    }
                                    __result320__ = __result_obj__ = result_295;
                                    come_call_finalizer2(sEqNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result320__;
                                    come_call_finalizer2(sEqNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional583;
_Bool _if_conditional584;
_Bool _if_conditional585;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional583=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional583) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional584=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional584) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional585=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional585) {
                                            if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional586;
struct sNotEq2Node* __result322__;
void* right_value567;
struct sNotEq2Node* result_297;
_Bool _if_conditional587;
void* right_value568;
struct sNode* __dec_obj246;
_Bool _if_conditional588;
void* right_value569;
struct sNode* __dec_obj247;
_Bool _if_conditional589;
_Bool _if_conditional590;
_Bool _if_conditional591;
void* right_value570;
char* __dec_obj248;
struct sNotEq2Node* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
right_value567 = (void*)0;
memset(&result_297, 0, sizeof(struct sNotEq2Node*));
right_value568 = (void*)0;
right_value569 = (void*)0;
right_value570 = (void*)0;
                                        if(_if_conditional586=self==(void*)0,                                        _if_conditional586) {
                                            __result322__ = __result_obj__ = (void*)0;
                                            return __result322__;
                                        }
                                        result_297=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value567=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node"))));
                                        come_call_finalizer2(sNotEq2Node_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional587=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional587) {
                                            __dec_obj246=result_297->mLeft;
                                            result_297->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value568=sNode_clone(self->mLeft))));
                                            if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count2(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value568) { right_value568 = come_decrement_ref_count2(right_value568, ((struct sNode*)right_value568)->finalize, ((struct sNode*)right_value568)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional588=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional588) {
                                            __dec_obj247=result_297->mRight;
                                            result_297->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value569=sNode_clone(self->mRight))));
                                            if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value569) { right_value569 = come_decrement_ref_count2(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional589=self!=((void*)0),                                        _if_conditional589) {
                                            result_297->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional590=self!=((void*)0),                                        _if_conditional590) {
                                            result_297->sline=self->sline;
                                        }
                                        if(_if_conditional591=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional591) {
                                            __dec_obj248=result_297->sname;
                                            result_297->sname=(char*)come_increment_ref_count(((char*)(right_value570=string_clone(self->sname))));
                                            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                            if(right_value570) { right_value570 = come_decrement_ref_count2(right_value570, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                        }
                                        __result323__ = __result_obj__ = result_297;
                                        come_call_finalizer2(sNotEq2Node_finalize,result_297, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result323__;
                                        come_call_finalizer2(sNotEq2Node_finalize,result_297, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional593;
_Bool _if_conditional594;
_Bool _if_conditional595;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional593=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional593) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional594=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional594) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional595=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional595) {
                                                if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional596;
struct sNotEqNode* __result325__;
void* right_value575;
struct sNotEqNode* result_299;
_Bool _if_conditional597;
void* right_value576;
struct sNode* __dec_obj249;
_Bool _if_conditional598;
void* right_value577;
struct sNode* __dec_obj250;
_Bool _if_conditional599;
_Bool _if_conditional600;
_Bool _if_conditional601;
void* right_value578;
char* __dec_obj251;
struct sNotEqNode* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value575 = (void*)0;
memset(&result_299, 0, sizeof(struct sNotEqNode*));
right_value576 = (void*)0;
right_value577 = (void*)0;
right_value578 = (void*)0;
                                            if(_if_conditional596=self==(void*)0,                                            _if_conditional596) {
                                                __result325__ = __result_obj__ = (void*)0;
                                                return __result325__;
                                            }
                                            result_299=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value575=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode"))));
                                            come_call_finalizer2(sNotEqNode_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional597=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional597) {
                                                __dec_obj249=result_299->mLeft;
                                                result_299->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value576=sNode_clone(self->mLeft))));
                                                if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value576) { right_value576 = come_decrement_ref_count2(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional598=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional598) {
                                                __dec_obj250=result_299->mRight;
                                                result_299->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value577=sNode_clone(self->mRight))));
                                                if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional599=self!=((void*)0),                                            _if_conditional599) {
                                                result_299->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional600=self!=((void*)0),                                            _if_conditional600) {
                                                result_299->sline=self->sline;
                                            }
                                            if(_if_conditional601=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional601) {
                                                __dec_obj251=result_299->sname;
                                                result_299->sname=(char*)come_increment_ref_count(((char*)(right_value578=string_clone(self->sname))));
                                                if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, (void*)0, (void*)0, 0,0,0, (void*)0); }
                                                if(right_value578) { right_value578 = come_decrement_ref_count2(right_value578, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                                            }
                                            __result326__ = __result_obj__ = result_299;
                                            come_call_finalizer2(sNotEqNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result326__;
                                            come_call_finalizer2(sNotEqNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
void* right_value580;
struct sNode* node_300;
_Bool _while_condtional15;
_Bool _if_conditional602;
void* right_value581;
struct sNode* right_301;
void* right_value582;
void* right_value583;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value588;
struct sNode* __result331__;
_Bool _if_conditional612;
void* right_value589;
struct sNode* right_303;
void* right_value590;
void* right_value591;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* right_value596;
struct sNode* __result334__;
struct sNode* __result335__;
memset(&__result_obj__, 0, sizeof(void*));
right_value580 = (void*)0;
memset(&node_300, 0, sizeof(struct sNode*));
right_value581 = (void*)0;
memset(&right_301, 0, sizeof(struct sNode*));
right_value582 = (void*)0;
right_value583 = (void*)0;
right_value588 = (void*)0;
right_value589 = (void*)0;
memset(&right_303, 0, sizeof(struct sNode*));
right_value590 = (void*)0;
right_value591 = (void*)0;
right_value596 = (void*)0;
    parse_sharp_v5(info);
    node_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value580=eq_exp(info))));
    if(right_value580) { right_value580 = come_decrement_ref_count2(right_value580, ((struct sNode*)right_value580)->finalize, ((struct sNode*)right_value580)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional15=*info->p,    _while_condtional15) {
        if(_if_conditional602=*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional602) {
            info->p++;
            skip_spaces_and_lf(info);
            right_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value581=and_exp(info))));
            if(right_value581) { right_value581 = come_decrement_ref_count2(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2540, "struct sNode");
            _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value583=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value582=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2540, "struct sAndNode")))),(struct sNode*)come_increment_ref_count(node_300),(struct sNode*)come_increment_ref_count(right_301),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sAndNode_sline;
            _inf_value33->sname=(void*)sAndNode_sname;
            _inf_value33->terminated=(void*)sAndNode_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result331__ = __result_obj__ = ((struct sNode*)(right_value588=_inf_value33));
            if(right_301) { right_301 = come_decrement_ref_count2(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAndNode_finalize,right_value582, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAndNode_finalize,right_value583, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value588) { right_value588 = come_decrement_ref_count2(right_value588, ((struct sNode*)right_value588)->finalize, ((struct sNode*)right_value588)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result331__;
            if(right_301) { right_301 = come_decrement_ref_count2(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional612=*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional612) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value589=and_exp(info))));
                if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2548, "struct sNode");
                _inf_obj_value34=come_increment_ref_count(((struct sAndNode*)(right_value591=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value590=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2548, "struct sAndNode")))),(struct sNode*)come_increment_ref_count(node_300),(struct sNode*)come_increment_ref_count(right_303),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sAndNode_finalize;
                _inf_value34->clone=(void*)sAndNode_clone;
                _inf_value34->compile=(void*)sAndNode_compile;
                _inf_value34->sline=(void*)sAndNode_sline;
                _inf_value34->sname=(void*)sAndNode_sname;
                _inf_value34->terminated=(void*)sAndNode_terminated;
                _inf_value34->kind=(void*)sAndNode_kind;
                __result334__ = __result_obj__ = ((struct sNode*)(right_value596=_inf_value34));
                if(right_303) { right_303 = come_decrement_ref_count2(right_303, ((struct sNode*)right_303)->finalize, ((struct sNode*)right_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sAndNode_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sAndNode_finalize,right_value591, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value596) { right_value596 = come_decrement_ref_count2(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result334__;
                if(right_303) { right_303 = come_decrement_ref_count2(right_303, ((struct sNode*)right_303)->finalize, ((struct sNode*)right_303)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result335__ = __result_obj__ = node_300;
    if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result335__;
    if(node_300) { node_300 = come_decrement_ref_count2(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional613;
_Bool _if_conditional614;
_Bool _if_conditional615;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional613=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional613) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional614=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional614) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional615=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional615) {
                        if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional616;
struct sAndNode* __result332__;
void* right_value592;
struct sAndNode* result_304;
_Bool _if_conditional617;
void* right_value593;
struct sNode* __dec_obj255;
_Bool _if_conditional618;
void* right_value594;
struct sNode* __dec_obj256;
_Bool _if_conditional619;
_Bool _if_conditional620;
_Bool _if_conditional621;
void* right_value595;
char* __dec_obj257;
struct sAndNode* __result333__;
memset(&__result_obj__, 0, sizeof(void*));
right_value592 = (void*)0;
memset(&result_304, 0, sizeof(struct sAndNode*));
right_value593 = (void*)0;
right_value594 = (void*)0;
right_value595 = (void*)0;
                    if(_if_conditional616=self==(void*)0,                    _if_conditional616) {
                        __result332__ = __result_obj__ = (void*)0;
                        return __result332__;
                    }
                    result_304=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value592=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode"))));
                    come_call_finalizer2(sAndNode_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional617=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional617) {
                        __dec_obj255=result_304->mLeft;
                        result_304->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=sNode_clone(self->mLeft))));
                        if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value593) { right_value593 = come_decrement_ref_count2(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional618=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional618) {
                        __dec_obj256=result_304->mRight;
                        result_304->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value594=sNode_clone(self->mRight))));
                        if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value594) { right_value594 = come_decrement_ref_count2(right_value594, ((struct sNode*)right_value594)->finalize, ((struct sNode*)right_value594)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional619=self!=((void*)0),                    _if_conditional619) {
                        result_304->mQuote=self->mQuote;
                    }
                    if(_if_conditional620=self!=((void*)0),                    _if_conditional620) {
                        result_304->sline=self->sline;
                    }
                    if(_if_conditional621=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional621) {
                        __dec_obj257=result_304->sname;
                        result_304->sname=(char*)come_increment_ref_count(((char*)(right_value595=string_clone(self->sname))));
                        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        if(right_value595) { right_value595 = come_decrement_ref_count2(right_value595, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    }
                    __result333__ = __result_obj__ = result_304;
                    come_call_finalizer2(sAndNode_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result333__;
                    come_call_finalizer2(sAndNode_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
void* right_value597;
struct sNode* node_305;
_Bool _while_condtional16;
_Bool _if_conditional622;
void* right_value598;
struct sNode* right_306;
void* right_value599;
void* right_value600;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value605;
struct sNode* __result338__;
_Bool _if_conditional632;
void* right_value606;
struct sNode* right_308;
void* right_value607;
void* right_value608;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* right_value613;
struct sNode* __result341__;
struct sNode* __result342__;
memset(&__result_obj__, 0, sizeof(void*));
right_value597 = (void*)0;
memset(&node_305, 0, sizeof(struct sNode*));
right_value598 = (void*)0;
memset(&right_306, 0, sizeof(struct sNode*));
right_value599 = (void*)0;
right_value600 = (void*)0;
right_value605 = (void*)0;
right_value606 = (void*)0;
memset(&right_308, 0, sizeof(struct sNode*));
right_value607 = (void*)0;
right_value608 = (void*)0;
right_value613 = (void*)0;
    parse_sharp_v5(info);
    node_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value597=and_exp(info))));
    if(right_value597) { right_value597 = come_decrement_ref_count2(right_value597, ((struct sNode*)right_value597)->finalize, ((struct sNode*)right_value597)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional16=*info->p,    _while_condtional16) {
        if(_if_conditional622=*info->p==94&&*(info->p+1)!=61,        _if_conditional622) {
            info->p++;
            skip_spaces_and_lf(info);
            right_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value598=xor_exp(info))));
            if(right_value598) { right_value598 = come_decrement_ref_count2(right_value598, ((struct sNode*)right_value598)->finalize, ((struct sNode*)right_value598)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2575, "struct sNode");
            _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value600=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value599=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2575, "struct sXOrNode")))),(struct sNode*)come_increment_ref_count(node_305),(struct sNode*)come_increment_ref_count(right_306),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sXOrNode_sline;
            _inf_value35->sname=(void*)sXOrNode_sname;
            _inf_value35->terminated=(void*)sXOrNode_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result338__ = __result_obj__ = ((struct sNode*)(right_value605=_inf_value35));
            if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sXOrNode_finalize,right_value599, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sXOrNode_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value605) { right_value605 = come_decrement_ref_count2(right_value605, ((struct sNode*)right_value605)->finalize, ((struct sNode*)right_value605)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result338__;
            if(right_306) { right_306 = come_decrement_ref_count2(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional632=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional632) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value606=xor_exp(info))));
                if(right_value606) { right_value606 = come_decrement_ref_count2(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2583, "struct sNode");
                _inf_obj_value36=come_increment_ref_count(((struct sXOrNode*)(right_value608=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value607=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2583, "struct sXOrNode")))),(struct sNode*)come_increment_ref_count(node_305),(struct sNode*)come_increment_ref_count(right_308),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sXOrNode_finalize;
                _inf_value36->clone=(void*)sXOrNode_clone;
                _inf_value36->compile=(void*)sXOrNode_compile;
                _inf_value36->sline=(void*)sXOrNode_sline;
                _inf_value36->sname=(void*)sXOrNode_sname;
                _inf_value36->terminated=(void*)sXOrNode_terminated;
                _inf_value36->kind=(void*)sXOrNode_kind;
                __result341__ = __result_obj__ = ((struct sNode*)(right_value613=_inf_value36));
                if(right_308) { right_308 = come_decrement_ref_count2(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sXOrNode_finalize,right_value607, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sXOrNode_finalize,right_value608, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value613) { right_value613 = come_decrement_ref_count2(right_value613, ((struct sNode*)right_value613)->finalize, ((struct sNode*)right_value613)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result341__;
                if(right_308) { right_308 = come_decrement_ref_count2(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result342__ = __result_obj__ = node_305;
    if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result342__;
    if(node_305) { node_305 = come_decrement_ref_count2(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional633;
_Bool _if_conditional634;
_Bool _if_conditional635;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional633=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional633) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional634=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional634) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional635=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional635) {
                        if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional636;
struct sXOrNode* __result339__;
void* right_value609;
struct sXOrNode* result_309;
_Bool _if_conditional637;
void* right_value610;
struct sNode* __dec_obj261;
_Bool _if_conditional638;
void* right_value611;
struct sNode* __dec_obj262;
_Bool _if_conditional639;
_Bool _if_conditional640;
_Bool _if_conditional641;
void* right_value612;
char* __dec_obj263;
struct sXOrNode* __result340__;
memset(&__result_obj__, 0, sizeof(void*));
right_value609 = (void*)0;
memset(&result_309, 0, sizeof(struct sXOrNode*));
right_value610 = (void*)0;
right_value611 = (void*)0;
right_value612 = (void*)0;
                    if(_if_conditional636=self==(void*)0,                    _if_conditional636) {
                        __result339__ = __result_obj__ = (void*)0;
                        return __result339__;
                    }
                    result_309=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value609=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode"))));
                    come_call_finalizer2(sXOrNode_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional637=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional637) {
                        __dec_obj261=result_309->mLeft;
                        result_309->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value610=sNode_clone(self->mLeft))));
                        if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count2(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value610) { right_value610 = come_decrement_ref_count2(right_value610, ((struct sNode*)right_value610)->finalize, ((struct sNode*)right_value610)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional638=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional638) {
                        __dec_obj262=result_309->mRight;
                        result_309->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value611=sNode_clone(self->mRight))));
                        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value611) { right_value611 = come_decrement_ref_count2(right_value611, ((struct sNode*)right_value611)->finalize, ((struct sNode*)right_value611)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional639=self!=((void*)0),                    _if_conditional639) {
                        result_309->mQuote=self->mQuote;
                    }
                    if(_if_conditional640=self!=((void*)0),                    _if_conditional640) {
                        result_309->sline=self->sline;
                    }
                    if(_if_conditional641=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional641) {
                        __dec_obj263=result_309->sname;
                        result_309->sname=(char*)come_increment_ref_count(((char*)(right_value612=string_clone(self->sname))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        if(right_value612) { right_value612 = come_decrement_ref_count2(right_value612, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    }
                    __result340__ = __result_obj__ = result_309;
                    come_call_finalizer2(sXOrNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result340__;
                    come_call_finalizer2(sXOrNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
void* right_value614;
struct sNode* node_310;
_Bool _while_condtional17;
_Bool _if_conditional642;
void* right_value615;
struct sNode* right_311;
void* right_value616;
void* right_value617;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value622;
struct sNode* __result345__;
_Bool _if_conditional652;
void* right_value623;
struct sNode* right_313;
void* right_value624;
void* right_value625;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* right_value630;
struct sNode* __result348__;
struct sNode* __result349__;
memset(&__result_obj__, 0, sizeof(void*));
right_value614 = (void*)0;
memset(&node_310, 0, sizeof(struct sNode*));
right_value615 = (void*)0;
memset(&right_311, 0, sizeof(struct sNode*));
right_value616 = (void*)0;
right_value617 = (void*)0;
right_value622 = (void*)0;
right_value623 = (void*)0;
memset(&right_313, 0, sizeof(struct sNode*));
right_value624 = (void*)0;
right_value625 = (void*)0;
right_value630 = (void*)0;
    parse_sharp_v5(info);
    node_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value614=xor_exp(info))));
    if(right_value614) { right_value614 = come_decrement_ref_count2(right_value614, ((struct sNode*)right_value614)->finalize, ((struct sNode*)right_value614)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional17=*info->p,    _while_condtional17) {
        if(_if_conditional642=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional642) {
            info->p++;
            skip_spaces_and_lf(info);
            right_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value615=or_exp(info))));
            if(right_value615) { right_value615 = come_decrement_ref_count2(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2610, "struct sNode");
            _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value617=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value616=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2610, "struct sOrNode")))),(struct sNode*)come_increment_ref_count(node_310),(struct sNode*)come_increment_ref_count(right_311),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sOrNode_sline;
            _inf_value37->sname=(void*)sOrNode_sname;
            _inf_value37->terminated=(void*)sOrNode_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result345__ = __result_obj__ = ((struct sNode*)(right_value622=_inf_value37));
            if(right_311) { right_311 = come_decrement_ref_count2(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sOrNode_finalize,right_value616, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sOrNode_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value622) { right_value622 = come_decrement_ref_count2(right_value622, ((struct sNode*)right_value622)->finalize, ((struct sNode*)right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result345__;
            if(right_311) { right_311 = come_decrement_ref_count2(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional652=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional652) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value623=or_exp(info))));
                if(right_value623) { right_value623 = come_decrement_ref_count2(right_value623, ((struct sNode*)right_value623)->finalize, ((struct sNode*)right_value623)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2618, "struct sNode");
                _inf_obj_value38=come_increment_ref_count(((struct sOrNode*)(right_value625=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value624=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2618, "struct sOrNode")))),(struct sNode*)come_increment_ref_count(node_310),(struct sNode*)come_increment_ref_count(right_313),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sOrNode_finalize;
                _inf_value38->clone=(void*)sOrNode_clone;
                _inf_value38->compile=(void*)sOrNode_compile;
                _inf_value38->sline=(void*)sOrNode_sline;
                _inf_value38->sname=(void*)sOrNode_sname;
                _inf_value38->terminated=(void*)sOrNode_terminated;
                _inf_value38->kind=(void*)sOrNode_kind;
                __result348__ = __result_obj__ = ((struct sNode*)(right_value630=_inf_value38));
                if(right_313) { right_313 = come_decrement_ref_count2(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sOrNode_finalize,right_value624, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sOrNode_finalize,right_value625, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value630) { right_value630 = come_decrement_ref_count2(right_value630, ((struct sNode*)right_value630)->finalize, ((struct sNode*)right_value630)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result348__;
                if(right_313) { right_313 = come_decrement_ref_count2(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result349__ = __result_obj__ = node_310;
    if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result349__;
    if(node_310) { node_310 = come_decrement_ref_count2(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional653;
_Bool _if_conditional654;
_Bool _if_conditional655;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional653=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional653) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional654=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional654) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional655=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional655) {
                        if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional656;
struct sOrNode* __result346__;
void* right_value626;
struct sOrNode* result_314;
_Bool _if_conditional657;
void* right_value627;
struct sNode* __dec_obj267;
_Bool _if_conditional658;
void* right_value628;
struct sNode* __dec_obj268;
_Bool _if_conditional659;
_Bool _if_conditional660;
_Bool _if_conditional661;
void* right_value629;
char* __dec_obj269;
struct sOrNode* __result347__;
memset(&__result_obj__, 0, sizeof(void*));
right_value626 = (void*)0;
memset(&result_314, 0, sizeof(struct sOrNode*));
right_value627 = (void*)0;
right_value628 = (void*)0;
right_value629 = (void*)0;
                    if(_if_conditional656=self==(void*)0,                    _if_conditional656) {
                        __result346__ = __result_obj__ = (void*)0;
                        return __result346__;
                    }
                    result_314=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value626=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode"))));
                    come_call_finalizer2(sOrNode_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional657=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional657) {
                        __dec_obj267=result_314->mLeft;
                        result_314->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value627=sNode_clone(self->mLeft))));
                        if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count2(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value627) { right_value627 = come_decrement_ref_count2(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional658=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional658) {
                        __dec_obj268=result_314->mRight;
                        result_314->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value628=sNode_clone(self->mRight))));
                        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value628) { right_value628 = come_decrement_ref_count2(right_value628, ((struct sNode*)right_value628)->finalize, ((struct sNode*)right_value628)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional659=self!=((void*)0),                    _if_conditional659) {
                        result_314->mQuote=self->mQuote;
                    }
                    if(_if_conditional660=self!=((void*)0),                    _if_conditional660) {
                        result_314->sline=self->sline;
                    }
                    if(_if_conditional661=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional661) {
                        __dec_obj269=result_314->sname;
                        result_314->sname=(char*)come_increment_ref_count(((char*)(right_value629=string_clone(self->sname))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        if(right_value629) { right_value629 = come_decrement_ref_count2(right_value629, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    }
                    __result347__ = __result_obj__ = result_314;
                    come_call_finalizer2(sOrNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result347__;
                    come_call_finalizer2(sOrNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
void* right_value631;
struct sNode* node_315;
_Bool _while_condtional18;
_Bool _if_conditional662;
void* right_value632;
struct sNode* right_316;
void* right_value633;
void* right_value634;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value639;
struct sNode* __result352__;
_Bool _if_conditional672;
void* right_value640;
struct sNode* right_318;
void* right_value641;
void* right_value642;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* right_value647;
struct sNode* __result355__;
struct sNode* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
right_value631 = (void*)0;
memset(&node_315, 0, sizeof(struct sNode*));
right_value632 = (void*)0;
memset(&right_316, 0, sizeof(struct sNode*));
right_value633 = (void*)0;
right_value634 = (void*)0;
right_value639 = (void*)0;
right_value640 = (void*)0;
memset(&right_318, 0, sizeof(struct sNode*));
right_value641 = (void*)0;
right_value642 = (void*)0;
right_value647 = (void*)0;
    parse_sharp_v5(info);
    node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value631=or_exp(info))));
    if(right_value631) { right_value631 = come_decrement_ref_count2(right_value631, ((struct sNode*)right_value631)->finalize, ((struct sNode*)right_value631)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional18=*info->p,    _while_condtional18) {
        if(_if_conditional662=*info->p==38&&*(info->p+1)==38,        _if_conditional662) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value632=andand_exp(info))));
            if(right_value632) { right_value632 = come_decrement_ref_count2(right_value632, ((struct sNode*)right_value632)->finalize, ((struct sNode*)right_value632)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2645, "struct sNode");
            _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value634=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value633=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2645, "struct sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_315),(struct sNode*)come_increment_ref_count(right_316),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sAndAndNode_sline;
            _inf_value39->sname=(void*)sAndAndNode_sname;
            _inf_value39->terminated=(void*)sAndAndNode_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result352__ = __result_obj__ = ((struct sNode*)(right_value639=_inf_value39));
            if(right_316) { right_316 = come_decrement_ref_count2(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAndAndNode_finalize,right_value633, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAndAndNode_finalize,right_value634, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value639) { right_value639 = come_decrement_ref_count2(right_value639, ((struct sNode*)right_value639)->finalize, ((struct sNode*)right_value639)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result352__;
            if(right_316) { right_316 = come_decrement_ref_count2(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional672=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional672) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value640=andand_exp(info))));
                if(right_value640) { right_value640 = come_decrement_ref_count2(right_value640, ((struct sNode*)right_value640)->finalize, ((struct sNode*)right_value640)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2653, "struct sNode");
                _inf_obj_value40=come_increment_ref_count(((struct sAndAndNode*)(right_value642=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value641=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2653, "struct sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_315),(struct sNode*)come_increment_ref_count(right_318),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sAndAndNode_finalize;
                _inf_value40->clone=(void*)sAndAndNode_clone;
                _inf_value40->compile=(void*)sAndAndNode_compile;
                _inf_value40->sline=(void*)sAndAndNode_sline;
                _inf_value40->sname=(void*)sAndAndNode_sname;
                _inf_value40->terminated=(void*)sAndAndNode_terminated;
                _inf_value40->kind=(void*)sAndAndNode_kind;
                __result355__ = __result_obj__ = ((struct sNode*)(right_value647=_inf_value40));
                if(right_318) { right_318 = come_decrement_ref_count2(right_318, ((struct sNode*)right_318)->finalize, ((struct sNode*)right_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sAndAndNode_finalize,right_value641, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sAndAndNode_finalize,right_value642, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value647) { right_value647 = come_decrement_ref_count2(right_value647, ((struct sNode*)right_value647)->finalize, ((struct sNode*)right_value647)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result355__;
                if(right_318) { right_318 = come_decrement_ref_count2(right_318, ((struct sNode*)right_318)->finalize, ((struct sNode*)right_318)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result356__ = __result_obj__ = node_315;
    if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result356__;
    if(node_315) { node_315 = come_decrement_ref_count2(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional673;
_Bool _if_conditional674;
_Bool _if_conditional675;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional673=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional673) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional674=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional674) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional675=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional675) {
                        if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional676;
struct sAndAndNode* __result353__;
void* right_value643;
struct sAndAndNode* result_319;
_Bool _if_conditional677;
void* right_value644;
struct sNode* __dec_obj273;
_Bool _if_conditional678;
void* right_value645;
struct sNode* __dec_obj274;
_Bool _if_conditional679;
_Bool _if_conditional680;
_Bool _if_conditional681;
void* right_value646;
char* __dec_obj275;
struct sAndAndNode* __result354__;
memset(&__result_obj__, 0, sizeof(void*));
right_value643 = (void*)0;
memset(&result_319, 0, sizeof(struct sAndAndNode*));
right_value644 = (void*)0;
right_value645 = (void*)0;
right_value646 = (void*)0;
                    if(_if_conditional676=self==(void*)0,                    _if_conditional676) {
                        __result353__ = __result_obj__ = (void*)0;
                        return __result353__;
                    }
                    result_319=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value643=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode"))));
                    come_call_finalizer2(sAndAndNode_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional677=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional677) {
                        __dec_obj273=result_319->mLeft;
                        result_319->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value644=sNode_clone(self->mLeft))));
                        if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count2(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value644) { right_value644 = come_decrement_ref_count2(right_value644, ((struct sNode*)right_value644)->finalize, ((struct sNode*)right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional678=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional678) {
                        __dec_obj274=result_319->mRight;
                        result_319->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value645=sNode_clone(self->mRight))));
                        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value645) { right_value645 = come_decrement_ref_count2(right_value645, ((struct sNode*)right_value645)->finalize, ((struct sNode*)right_value645)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional679=self!=((void*)0),                    _if_conditional679) {
                        result_319->mQuote=self->mQuote;
                    }
                    if(_if_conditional680=self!=((void*)0),                    _if_conditional680) {
                        result_319->sline=self->sline;
                    }
                    if(_if_conditional681=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional681) {
                        __dec_obj275=result_319->sname;
                        result_319->sname=(char*)come_increment_ref_count(((char*)(right_value646=string_clone(self->sname))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        if(right_value646) { right_value646 = come_decrement_ref_count2(right_value646, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    }
                    __result354__ = __result_obj__ = result_319;
                    come_call_finalizer2(sAndAndNode_finalize,result_319, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result354__;
                    come_call_finalizer2(sAndAndNode_finalize,result_319, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
void* right_value648;
struct sNode* node_320;
_Bool _while_condtional19;
_Bool _if_conditional682;
void* right_value649;
struct sNode* right_321;
void* right_value650;
void* right_value651;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value656;
struct sNode* __result359__;
_Bool _if_conditional692;
void* right_value657;
struct sNode* right_323;
void* right_value658;
void* right_value659;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* right_value664;
struct sNode* __result362__;
struct sNode* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
right_value648 = (void*)0;
memset(&node_320, 0, sizeof(struct sNode*));
right_value649 = (void*)0;
memset(&right_321, 0, sizeof(struct sNode*));
right_value650 = (void*)0;
right_value651 = (void*)0;
right_value656 = (void*)0;
right_value657 = (void*)0;
memset(&right_323, 0, sizeof(struct sNode*));
right_value658 = (void*)0;
right_value659 = (void*)0;
right_value664 = (void*)0;
    parse_sharp_v5(info);
    node_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value648=andand_exp(info))));
    if(right_value648) { right_value648 = come_decrement_ref_count2(right_value648, ((struct sNode*)right_value648)->finalize, ((struct sNode*)right_value648)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional19=*info->p,    _while_condtional19) {
        if(_if_conditional682=*info->p==124&&*(info->p+1)==124,        _if_conditional682) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value649=oror_exp(info))));
            if(right_value649) { right_value649 = come_decrement_ref_count2(right_value649, ((struct sNode*)right_value649)->finalize, ((struct sNode*)right_value649)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2680, "struct sNode");
            _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value651=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value650=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2680, "struct sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_320),(struct sNode*)come_increment_ref_count(right_321),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sOrOrNode_sline;
            _inf_value41->sname=(void*)sOrOrNode_sname;
            _inf_value41->terminated=(void*)sOrOrNode_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result359__ = __result_obj__ = ((struct sNode*)(right_value656=_inf_value41));
            if(right_321) { right_321 = come_decrement_ref_count2(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sOrOrNode_finalize,right_value650, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sOrOrNode_finalize,right_value651, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value656) { right_value656 = come_decrement_ref_count2(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result359__;
            if(right_321) { right_321 = come_decrement_ref_count2(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional692=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional692) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value657=oror_exp(info))));
                if(right_value657) { right_value657 = come_decrement_ref_count2(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2688, "struct sNode");
                _inf_obj_value42=come_increment_ref_count(((struct sOrOrNode*)(right_value659=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value658=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2688, "struct sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_320),(struct sNode*)come_increment_ref_count(right_323),(_Bool)1,info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sOrOrNode_finalize;
                _inf_value42->clone=(void*)sOrOrNode_clone;
                _inf_value42->compile=(void*)sOrOrNode_compile;
                _inf_value42->sline=(void*)sOrOrNode_sline;
                _inf_value42->sname=(void*)sOrOrNode_sname;
                _inf_value42->terminated=(void*)sOrOrNode_terminated;
                _inf_value42->kind=(void*)sOrOrNode_kind;
                __result362__ = __result_obj__ = ((struct sNode*)(right_value664=_inf_value42));
                if(right_323) { right_323 = come_decrement_ref_count2(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sOrOrNode_finalize,right_value658, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sOrOrNode_finalize,right_value659, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value664) { right_value664 = come_decrement_ref_count2(right_value664, ((struct sNode*)right_value664)->finalize, ((struct sNode*)right_value664)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result362__;
                if(right_323) { right_323 = come_decrement_ref_count2(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result363__ = __result_obj__ = node_320;
    if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result363__;
    if(node_320) { node_320 = come_decrement_ref_count2(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional693;
_Bool _if_conditional694;
_Bool _if_conditional695;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional693=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional693) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional694=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional694) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional695=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional695) {
                        if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional696;
struct sOrOrNode* __result360__;
void* right_value660;
struct sOrOrNode* result_324;
_Bool _if_conditional697;
void* right_value661;
struct sNode* __dec_obj279;
_Bool _if_conditional698;
void* right_value662;
struct sNode* __dec_obj280;
_Bool _if_conditional699;
_Bool _if_conditional700;
_Bool _if_conditional701;
void* right_value663;
char* __dec_obj281;
struct sOrOrNode* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value660 = (void*)0;
memset(&result_324, 0, sizeof(struct sOrOrNode*));
right_value661 = (void*)0;
right_value662 = (void*)0;
right_value663 = (void*)0;
                    if(_if_conditional696=self==(void*)0,                    _if_conditional696) {
                        __result360__ = __result_obj__ = (void*)0;
                        return __result360__;
                    }
                    result_324=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value660=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode"))));
                    come_call_finalizer2(sOrOrNode_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional697=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional697) {
                        __dec_obj279=result_324->mLeft;
                        result_324->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value661=sNode_clone(self->mLeft))));
                        if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count2(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value661) { right_value661 = come_decrement_ref_count2(right_value661, ((struct sNode*)right_value661)->finalize, ((struct sNode*)right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional698=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional698) {
                        __dec_obj280=result_324->mRight;
                        result_324->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value662=sNode_clone(self->mRight))));
                        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value662) { right_value662 = come_decrement_ref_count2(right_value662, ((struct sNode*)right_value662)->finalize, ((struct sNode*)right_value662)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional699=self!=((void*)0),                    _if_conditional699) {
                        result_324->mQuote=self->mQuote;
                    }
                    if(_if_conditional700=self!=((void*)0),                    _if_conditional700) {
                        result_324->sline=self->sline;
                    }
                    if(_if_conditional701=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional701) {
                        __dec_obj281=result_324->sname;
                        result_324->sname=(char*)come_increment_ref_count(((char*)(right_value663=string_clone(self->sname))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, (void*)0, (void*)0, 0,0,0, (void*)0); }
                        if(right_value663) { right_value663 = come_decrement_ref_count2(right_value663, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                    }
                    __result361__ = __result_obj__ = result_324;
                    come_call_finalizer2(sOrOrNode_finalize,result_324, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result361__;
                    come_call_finalizer2(sOrOrNode_finalize,result_324, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
void* right_value665;
struct sNode* node_325;
_Bool _while_condtional20;
_Bool _if_conditional702;
void* right_value666;
struct sNode* node2_326;
void* right_value667;
void* right_value668;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* right_value673;
struct sNode* __result366__;
struct sNode* __result367__;
memset(&__result_obj__, 0, sizeof(void*));
right_value665 = (void*)0;
memset(&node_325, 0, sizeof(struct sNode*));
right_value666 = (void*)0;
memset(&node2_326, 0, sizeof(struct sNode*));
right_value667 = (void*)0;
right_value668 = (void*)0;
right_value673 = (void*)0;
    parse_sharp_v5(info);
    node_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value665=oror_exp(info))));
    if(right_value665) { right_value665 = come_decrement_ref_count2(right_value665, ((struct sNode*)right_value665)->finalize, ((struct sNode*)right_value665)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional20=*info->p,    _while_condtional20) {
        if(_if_conditional702=!info->no_comma&&*info->p==44,        _if_conditional702) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value666=oror_exp(info))));
            if(right_value666) { right_value666 = come_decrement_ref_count2(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2715, "struct sNode");
            _inf_obj_value43=come_increment_ref_count(((struct sCommaNode*)(right_value668=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value667=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2715, "struct sCommaNode")))),(struct sNode*)come_increment_ref_count(node_325),(struct sNode*)come_increment_ref_count(node2_326),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sCommaNode_sline;
            _inf_value43->sname=(void*)sCommaNode_sname;
            _inf_value43->terminated=(void*)sCommaNode_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result366__ = __result_obj__ = ((struct sNode*)(right_value673=_inf_value43));
            if(node2_326) { node2_326 = come_decrement_ref_count2(node2_326, ((struct sNode*)node2_326)->finalize, ((struct sNode*)node2_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sCommaNode_finalize,right_value667, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sCommaNode_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value673) { right_value673 = come_decrement_ref_count2(right_value673, ((struct sNode*)right_value673)->finalize, ((struct sNode*)right_value673)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result366__;
            if(node2_326) { node2_326 = come_decrement_ref_count2(node2_326, ((struct sNode*)node2_326)->finalize, ((struct sNode*)node2_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result367__ = __result_obj__ = node_325;
    if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result367__;
    if(node_325) { node_325 = come_decrement_ref_count2(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional703;
_Bool _if_conditional704;
_Bool _if_conditional705;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional703=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional703) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional704=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional704) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional705=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional705) {
                    if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional706;
struct sCommaNode* __result364__;
void* right_value669;
struct sCommaNode* result_327;
_Bool _if_conditional707;
void* right_value670;
struct sNode* __dec_obj282;
_Bool _if_conditional708;
void* right_value671;
struct sNode* __dec_obj283;
_Bool _if_conditional709;
_Bool _if_conditional710;
void* right_value672;
char* __dec_obj284;
struct sCommaNode* __result365__;
memset(&__result_obj__, 0, sizeof(void*));
right_value669 = (void*)0;
memset(&result_327, 0, sizeof(struct sCommaNode*));
right_value670 = (void*)0;
right_value671 = (void*)0;
right_value672 = (void*)0;
                if(_if_conditional706=self==(void*)0,                _if_conditional706) {
                    __result364__ = __result_obj__ = (void*)0;
                    return __result364__;
                }
                result_327=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value669=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode"))));
                come_call_finalizer2(sCommaNode_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional707=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional707) {
                    __dec_obj282=result_327->mLeft;
                    result_327->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value670=sNode_clone(self->mLeft))));
                    if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value670) { right_value670 = come_decrement_ref_count2(right_value670, ((struct sNode*)right_value670)->finalize, ((struct sNode*)right_value670)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional708=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional708) {
                    __dec_obj283=result_327->mRight;
                    result_327->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value671=sNode_clone(self->mRight))));
                    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count2(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value671) { right_value671 = come_decrement_ref_count2(right_value671, ((struct sNode*)right_value671)->finalize, ((struct sNode*)right_value671)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional709=self!=((void*)0),                _if_conditional709) {
                    result_327->sline=self->sline;
                }
                if(_if_conditional710=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional710) {
                    __dec_obj284=result_327->sname;
                    result_327->sname=(char*)come_increment_ref_count(((char*)(right_value672=string_clone(self->sname))));
                    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count2(__dec_obj284, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value672) { right_value672 = come_decrement_ref_count2(right_value672, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                }
                __result365__ = __result_obj__ = result_327;
                come_call_finalizer2(sCommaNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result365__;
                come_call_finalizer2(sCommaNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
void* right_value674;
struct sNode* node_328;
_Bool _while_condtional21;
_Bool _if_conditional711;
struct sNode* value1_329;
_Bool _if_conditional712;
void* right_value675;
void* right_value676;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value679;
struct sNode* __dec_obj286;
void* right_value680;
struct sNode* __dec_obj287;
void* right_value681;
struct sNode* value2_331;
void* right_value682;
void* right_value683;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* right_value689;
struct sNode* __result372__;
struct sNode* __result373__;
memset(&__result_obj__, 0, sizeof(void*));
right_value674 = (void*)0;
memset(&node_328, 0, sizeof(struct sNode*));
memset(&value1_329, 0, sizeof(struct sNode*));
right_value675 = (void*)0;
right_value676 = (void*)0;
right_value679 = (void*)0;
right_value680 = (void*)0;
right_value681 = (void*)0;
memset(&value2_331, 0, sizeof(struct sNode*));
right_value682 = (void*)0;
right_value683 = (void*)0;
right_value689 = (void*)0;
    parse_sharp_v5(info);
    node_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value674=comma_exp(info))));
    if(right_value674) { right_value674 = come_decrement_ref_count2(right_value674, ((struct sNode*)right_value674)->finalize, ((struct sNode*)right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional21=*info->p,    _while_condtional21) {
        if(_if_conditional711=*info->p==63,        _if_conditional711) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional712=*info->p==58,            _if_conditional712) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2744, "struct sNode");
                _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value676=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value675=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2744, "struct sNullNode")))),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNullNode_sline;
                _inf_value44->sname=(void*)sNullNode_sname;
                _inf_value44->terminated=(void*)sNullNode_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj286=value1_329;
                value1_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value679=_inf_value44)));
                if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); }
                come_call_finalizer2(sNullNode_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sNullNode_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value679) { right_value679 = come_decrement_ref_count2(right_value679, ((struct sNode*)right_value679)->finalize, ((struct sNode*)right_value679)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            else {
                __dec_obj287=value1_329;
                value1_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value680=comma_exp(info))));
                if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value680) { right_value680 = come_decrement_ref_count2(right_value680, ((struct sNode*)right_value680)->finalize, ((struct sNode*)right_value680)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value681=comma_exp(info))));
            if(right_value681) { right_value681 = come_decrement_ref_count2(right_value681, ((struct sNode*)right_value681)->finalize, ((struct sNode*)right_value681)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2758, "struct sNode");
            _inf_obj_value45=come_increment_ref_count(((struct sConditionalNode*)(right_value683=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value682=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2758, "struct sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_328),(struct sNode*)come_increment_ref_count(value1_329),(struct sNode*)come_increment_ref_count(value2_331),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sConditionalNode_sline;
            _inf_value45->sname=(void*)sConditionalNode_sname;
            _inf_value45->terminated=(void*)sConditionalNode_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result372__ = __result_obj__ = ((struct sNode*)(right_value689=_inf_value45));
            if(value1_329) { value1_329 = come_decrement_ref_count2(value1_329, ((struct sNode*)value1_329)->finalize, ((struct sNode*)value1_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_331) { value2_331 = come_decrement_ref_count2(value2_331, ((struct sNode*)value2_331)->finalize, ((struct sNode*)value2_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sConditionalNode_finalize,right_value682, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sConditionalNode_finalize,right_value683, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value689) { right_value689 = come_decrement_ref_count2(right_value689, ((struct sNode*)right_value689)->finalize, ((struct sNode*)right_value689)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result372__;
            if(value1_329) { value1_329 = come_decrement_ref_count2(value1_329, ((struct sNode*)value1_329)->finalize, ((struct sNode*)value1_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_331) { value2_331 = come_decrement_ref_count2(value2_331, ((struct sNode*)value2_331)->finalize, ((struct sNode*)value2_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result373__ = __result_obj__ = node_328;
    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result373__;
    if(node_328) { node_328 = come_decrement_ref_count2(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional717;
_Bool _if_conditional718;
_Bool _if_conditional719;
_Bool _if_conditional720;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional717=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional717) {
                    if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional718=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional718) {
                    if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional719=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional719) {
                    if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional720=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional720) {
                    if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional721;
struct sConditionalNode* __result370__;
void* right_value684;
struct sConditionalNode* result_332;
_Bool _if_conditional722;
void* right_value685;
struct sNode* __dec_obj288;
_Bool _if_conditional723;
void* right_value686;
struct sNode* __dec_obj289;
_Bool _if_conditional724;
void* right_value687;
struct sNode* __dec_obj290;
_Bool _if_conditional725;
_Bool _if_conditional726;
void* right_value688;
char* __dec_obj291;
struct sConditionalNode* __result371__;
memset(&__result_obj__, 0, sizeof(void*));
right_value684 = (void*)0;
memset(&result_332, 0, sizeof(struct sConditionalNode*));
right_value685 = (void*)0;
right_value686 = (void*)0;
right_value687 = (void*)0;
right_value688 = (void*)0;
                if(_if_conditional721=self==(void*)0,                _if_conditional721) {
                    __result370__ = __result_obj__ = (void*)0;
                    return __result370__;
                }
                result_332=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value684=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode"))));
                come_call_finalizer2(sConditionalNode_finalize,right_value684, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional722=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional722) {
                    __dec_obj288=result_332->mValue1;
                    result_332->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value685=sNode_clone(self->mValue1))));
                    if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value685) { right_value685 = come_decrement_ref_count2(right_value685, ((struct sNode*)right_value685)->finalize, ((struct sNode*)right_value685)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional723=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional723) {
                    __dec_obj289=result_332->mValue2;
                    result_332->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value686=sNode_clone(self->mValue2))));
                    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value686) { right_value686 = come_decrement_ref_count2(right_value686, ((struct sNode*)right_value686)->finalize, ((struct sNode*)right_value686)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional724=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional724) {
                    __dec_obj290=result_332->mValue3;
                    result_332->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value687=sNode_clone(self->mValue3))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value687) { right_value687 = come_decrement_ref_count2(right_value687, ((struct sNode*)right_value687)->finalize, ((struct sNode*)right_value687)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional725=self!=((void*)0),                _if_conditional725) {
                    result_332->sline=self->sline;
                }
                if(_if_conditional726=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional726) {
                    __dec_obj291=result_332->sname;
                    result_332->sname=(char*)come_increment_ref_count(((char*)(right_value688=string_clone(self->sname))));
                    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value688) { right_value688 = come_decrement_ref_count2(right_value688, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                }
                __result371__ = __result_obj__ = result_332;
                come_call_finalizer2(sConditionalNode_finalize,result_332, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result371__;
                come_call_finalizer2(sConditionalNode_finalize,result_332, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
void* right_value690;
struct sNode* node_333;
struct sNode* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
right_value690 = (void*)0;
memset(&node_333, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_333=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value690=conditional_exp(info))));
    if(right_value690) { right_value690 = come_decrement_ref_count2(right_value690, ((struct sNode*)right_value690)->finalize, ((struct sNode*)right_value690)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result374__ = __result_obj__ = node_333;
    if(node_333) { node_333 = come_decrement_ref_count2(node_333, ((struct sNode*)node_333)->finalize, ((struct sNode*)node_333)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result374__;
    if(node_333) { node_333 = come_decrement_ref_count2(node_333, ((struct sNode*)node_333)->finalize, ((struct sNode*)node_333)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional727;
void* right_value691;
void* right_value692;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* right_value695;
struct sNode* __result377__;
_Bool _if_conditional732;
void* right_value696;
void* right_value697;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* right_value700;
struct sNode* __result380__;
void* right_value701;
struct sNode* __result381__;
memset(&__result_obj__, 0, sizeof(void*));
right_value691 = (void*)0;
right_value692 = (void*)0;
right_value695 = (void*)0;
right_value696 = (void*)0;
right_value697 = (void*)0;
right_value700 = (void*)0;
right_value701 = (void*)0;
    if(_if_conditional727=charp_operator_equals(buf,"null"),    _if_conditional727) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2782, "struct sNode");
        _inf_obj_value46=come_increment_ref_count(((struct sNullNode*)(right_value692=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value691=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2782, "struct sNullNode")))),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNullNode_sline;
        _inf_value46->sname=(void*)sNullNode_sname;
        _inf_value46->terminated=(void*)sNullNode_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result377__ = __result_obj__ = ((struct sNode*)(right_value695=_inf_value46));
        come_call_finalizer2(sNullNode_finalize,right_value691, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sNullNode_finalize,right_value692, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value695) { right_value695 = come_decrement_ref_count2(right_value695, ((struct sNode*)right_value695)->finalize, ((struct sNode*)right_value695)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result377__;
    }
    else {
        if(_if_conditional732=charp_operator_equals(buf,"nil"),        _if_conditional732) {
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2785, "struct sNode");
            _inf_obj_value47=come_increment_ref_count(((struct sNilNode*)(right_value697=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value696=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2785, "struct sNilNode")))),info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sNilNode_finalize;
            _inf_value47->clone=(void*)sNilNode_clone;
            _inf_value47->compile=(void*)sNilNode_compile;
            _inf_value47->sline=(void*)sNilNode_sline;
            _inf_value47->sname=(void*)sNilNode_sname;
            _inf_value47->terminated=(void*)sNilNode_terminated;
            _inf_value47->kind=(void*)sNilNode_kind;
            __result380__ = __result_obj__ = ((struct sNode*)(right_value700=_inf_value47));
            come_call_finalizer2(sNilNode_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sNilNode_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value700) { right_value700 = come_decrement_ref_count2(right_value700, ((struct sNode*)right_value700)->finalize, ((struct sNode*)right_value700)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result380__;
        }
    }
    __result381__ = __result_obj__ = ((struct sNode*)(right_value701=string_node_v12(buf,head,head_sline,info)));
    if(right_value701) { right_value701 = come_decrement_ref_count2(right_value701, ((struct sNode*)right_value701)->finalize, ((struct sNode*)right_value701)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result381__;
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional728;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional728=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional728) {
                if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional729;
struct sNullNode* __result375__;
void* right_value693;
struct sNullNode* result_334;
_Bool _if_conditional730;
_Bool _if_conditional731;
void* right_value694;
char* __dec_obj292;
struct sNullNode* __result376__;
memset(&__result_obj__, 0, sizeof(void*));
right_value693 = (void*)0;
memset(&result_334, 0, sizeof(struct sNullNode*));
right_value694 = (void*)0;
            if(_if_conditional729=self==(void*)0,            _if_conditional729) {
                __result375__ = __result_obj__ = (void*)0;
                return __result375__;
            }
            result_334=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value693=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode"))));
            come_call_finalizer2(sNullNode_finalize,right_value693, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional730=self!=((void*)0),            _if_conditional730) {
                result_334->sline=self->sline;
            }
            if(_if_conditional731=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional731) {
                __dec_obj292=result_334->sname;
                result_334->sname=(char*)come_increment_ref_count(((char*)(right_value694=string_clone(self->sname))));
                if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0); }
                if(right_value694) { right_value694 = come_decrement_ref_count2(right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
            }
            __result376__ = __result_obj__ = result_334;
            come_call_finalizer2(sNullNode_finalize,result_334, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result376__;
            come_call_finalizer2(sNullNode_finalize,result_334, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNilNode_finalize(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional733;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional733=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional733) {
                    if(self->sname) { self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0); }
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional734;
struct sNilNode* __result378__;
void* right_value698;
struct sNilNode* result_335;
_Bool _if_conditional735;
_Bool _if_conditional736;
void* right_value699;
char* __dec_obj293;
struct sNilNode* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
right_value698 = (void*)0;
memset(&result_335, 0, sizeof(struct sNilNode*));
right_value699 = (void*)0;
                if(_if_conditional734=self==(void*)0,                _if_conditional734) {
                    __result378__ = __result_obj__ = (void*)0;
                    return __result378__;
                }
                result_335=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value698=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode"))));
                come_call_finalizer2(sNilNode_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional735=self!=((void*)0),                _if_conditional735) {
                    result_335->sline=self->sline;
                }
                if(_if_conditional736=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional736) {
                    __dec_obj293=result_335->sname;
                    result_335->sname=(char*)come_increment_ref_count(((char*)(right_value699=string_clone(self->sname))));
                    if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, (void*)0, (void*)0, 0,0,0, (void*)0); }
                    if(right_value699) { right_value699 = come_decrement_ref_count2(right_value699, (void*)0, (void*)0, 1, 0, 0, __result_obj__); }
                }
                __result379__ = __result_obj__ = result_335;
                come_call_finalizer2(sNilNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result379__;
                come_call_finalizer2(sNilNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

