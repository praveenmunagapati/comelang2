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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info);

static struct sType* sType_clone(struct sType* self);
static void sType_finalize(struct sType* self);
static void list$1sTypephp_finalize(struct list$1sTypeph* self);
static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self);
static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self);
static void list$1sNodephp_finalize(struct list$1sNodeph* self);
static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self);
static void list$1charphp_finalize(struct list$1charph* self);
static void list_item$1charphp_finalize(struct list_item$1charph* self);
static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self);
static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item);
static void list$1sTypeph_finalize(struct list$1sTypeph* self);
static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self);
static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self);
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
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1943, "buffer"))))))));
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
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"))))))));
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
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"))))))));
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
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"))))))));
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
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"))))))));
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
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"))))))));
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
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1993, "smart_pointer$1char"))));
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
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2003, "smart_pointer$1char"))));
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
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2013, "smart_pointer$1short"))));
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
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2023, "smart_pointer$1int"))));
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
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2033, "smart_pointer$1long"))));
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
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2226, "smart_pointer$1double")))),self,sizeof(double)*len)));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
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










_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
void* right_value84;
struct sType* generics_type_35;
_Bool _if_conditional96;
struct sType* __dec_obj35;
_Bool _if_conditional97;
struct sClass* klass_36;
char* class_name_37;
struct sFun* operator_fun_38;
char* fun_name2_39;
_Bool _if_conditional99;
void* right_value85;
char* none_generics_name_40;
void* right_value86;
struct sType* obj_type_41;
void* right_value87;
char* __dec_obj36;
void* right_value88;
char* fun_name3_42;
struct sGenericsFun* generics_fun_45;
_Bool _if_conditional114;
void* right_value89;
_Bool _if_conditional115;
_Bool __result58__;
_Bool _if_conditional135;
void* right_value90;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_49;
char* fun_name_50;
void* right_value91;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_51;
char* fun_name2_52;
_Bool _if_conditional137;
void* right_value92;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_53;
char* fun_name_54;
void* right_value93;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_55;
char* fun_name2_56;
void* right_value94;
char* __dec_obj37;
int i_57;
void* right_value95;
char* new_fun_name_58;
_Bool _if_conditional138;
void* right_value96;
char* __dec_obj38;
_Bool _if_conditional139;
_Bool result_59;
_Bool _if_conditional140;
void* right_value97;
struct CVALUE* come_value_60;
char* left_value2_61;
void* right_value98;
void* right_value99;
_Bool _if_conditional145;
void* right_value100;
char* __dec_obj39;
void* right_value101;
char* __dec_obj40;
char* right_value2_65;
void* right_value102;
void* right_value103;
_Bool _if_conditional146;
void* right_value104;
char* __dec_obj41;
void* right_value105;
char* __dec_obj42;
void* right_value106;
void* right_value107;
void* right_value108;
void* right_value109;
char* __dec_obj43;
void* right_value110;
struct sType* type2_66;
void* right_value111;
struct sType* type3_67;
void* right_value112;
struct sType* __dec_obj44;
_Bool _if_conditional147;
void* right_value113;
char* __dec_obj45;
void* right_value114;
char* __dec_obj46;
_Bool __result66__;
memset(&__result_obj__, 0, sizeof(void*));
right_value84 = (void*)0;
memset(&generics_type_35, 0, sizeof(struct sType*));
memset(&klass_36, 0, sizeof(struct sClass*));
memset(&class_name_37, 0, sizeof(char*));
memset(&operator_fun_38, 0, sizeof(struct sFun*));
memset(&fun_name2_39, 0, sizeof(char*));
right_value85 = (void*)0;
memset(&none_generics_name_40, 0, sizeof(char*));
right_value86 = (void*)0;
memset(&obj_type_41, 0, sizeof(struct sType*));
right_value87 = (void*)0;
right_value88 = (void*)0;
memset(&fun_name3_42, 0, sizeof(char*));
memset(&generics_fun_45, 0, sizeof(struct sGenericsFun*));
right_value89 = (void*)0;
right_value90 = (void*)0;
memset(&fun_49, 0, sizeof(struct sFun*));
memset(&fun_name_50, 0, sizeof(char*));
memset(&fun_49, 0, sizeof(struct sFun*));
memset(&fun_name_50, 0, sizeof(char*));
right_value91 = (void*)0;
memset(&fun2_51, 0, sizeof(struct sFun*));
memset(&fun_name2_52, 0, sizeof(char*));
memset(&fun2_51, 0, sizeof(struct sFun*));
memset(&fun_name2_52, 0, sizeof(char*));
right_value92 = (void*)0;
memset(&fun_53, 0, sizeof(struct sFun*));
memset(&fun_name_54, 0, sizeof(char*));
memset(&fun_53, 0, sizeof(struct sFun*));
memset(&fun_name_54, 0, sizeof(char*));
right_value93 = (void*)0;
memset(&fun2_55, 0, sizeof(struct sFun*));
memset(&fun_name2_56, 0, sizeof(char*));
memset(&fun2_55, 0, sizeof(struct sFun*));
memset(&fun_name2_56, 0, sizeof(char*));
right_value94 = (void*)0;
memset(&i_57, 0, sizeof(int));
right_value95 = (void*)0;
memset(&new_fun_name_58, 0, sizeof(char*));
right_value96 = (void*)0;
memset(&result_59, 0, sizeof(_Bool));
right_value97 = (void*)0;
memset(&come_value_60, 0, sizeof(struct CVALUE*));
memset(&left_value2_61, 0, sizeof(char*));
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value100 = (void*)0;
right_value101 = (void*)0;
memset(&right_value2_65, 0, sizeof(char*));
right_value102 = (void*)0;
right_value103 = (void*)0;
right_value104 = (void*)0;
right_value105 = (void*)0;
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
right_value109 = (void*)0;
right_value110 = (void*)0;
memset(&type2_66, 0, sizeof(struct sType*));
right_value111 = (void*)0;
memset(&type3_67, 0, sizeof(struct sType*));
right_value112 = (void*)0;
right_value113 = (void*)0;
right_value114 = (void*)0;
    generics_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(generics_type_35->mNoSolvedGenericsType->v1) {
        __dec_obj35=generics_type_35;
        generics_type_35=(struct sType*)come_increment_ref_count(generics_type_35->mNoSolvedGenericsType->v1);
        come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    if(type->mNoSolvedGenericsType->v1) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_36=type->mClass;
    class_name_37=klass_36->mName;
    operator_fun_38=((void*)0);
    if(_if_conditional99=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional99) {
        none_generics_name_40=(char*)come_increment_ref_count(((char*)(right_value85=get_none_generics_name(type->mClass->mName))));
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        obj_type_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj36=fun_name2_39;
        fun_name2_39=(char*)come_increment_ref_count(((char*)(right_value87=create_method_name(obj_type_41,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        fun_name3_42=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s_%s",none_generics_name_40,fun_name))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        generics_fun_45=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_42,((void*)0));
        if(generics_fun_45) {
            if(_if_conditional115=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(fun_name2_39)))),generics_fun_45,obj_type_41,info),            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional115) {
                __result58__ = (_Bool)0;
                none_generics_name_40 = come_decrement_ref_count2(none_generics_name_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_42 = come_decrement_ref_count2(fun_name3_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_39 = come_decrement_ref_count2(fun_name2_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result58__;
            }
            operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_39);
        }
        else {
            if(_if_conditional135=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional135) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value90=create_equals_automatically(obj_type_41,"equals",info)));
                fun_49=multiple_assign_var1->v1;
                fun_name_50=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value91=create_operator_equals_automatically(obj_type_41,"operator_equals",info)));
                fun2_51=multiple_assign_var2->v1;
                fun_name2_52=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                operator_fun_38=fun2_51;
                fun_name_50 = come_decrement_ref_count2(fun_name_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_52 = come_decrement_ref_count2(fun_name2_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                if(_if_conditional137=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional137) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value92=create_equals_automatically(obj_type_41,"not_equals",info)));
                    fun_53=multiple_assign_var3->v1;
                    fun_name_54=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value93=create_operator_not_equals_automatically(obj_type_41,"operator_not_equals",info)));
                    fun2_55=multiple_assign_var4->v1;
                    fun_name2_56=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    operator_fun_38=fun2_55;
                    fun_name_54 = come_decrement_ref_count2(fun_name_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_56 = come_decrement_ref_count2(fun_name2_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_39);
                }
            }
        }
        none_generics_name_40 = come_decrement_ref_count2(none_generics_name_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_42 = come_decrement_ref_count2(fun_name3_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        __dec_obj37=fun_name2_39;
        fun_name2_39=(char*)come_increment_ref_count(((char*)(right_value94=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        for(        i_57=128-1;        i_57>=1;        i_57--        ){
            new_fun_name_58=(char*)come_increment_ref_count(((char*)(right_value95=xsprintf("%s_v%d",fun_name2_39,i_57))));
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_58);
            if(operator_fun_38) {
                __dec_obj38=fun_name2_39;
                fun_name2_39=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(new_fun_name_58))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                new_fun_name_58 = come_decrement_ref_count2(new_fun_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_58 = come_decrement_ref_count2(new_fun_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        if(_if_conditional139=operator_fun_38==((void*)0),        _if_conditional139) {
            operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_39);
        }
    }
    result_59=(_Bool)0;
    if(_if_conditional140=operator_fun_38&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional140) {
        come_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        check_assign_type(((char*)(right_value99=xsprintf("\%s is assigned to",((char*)(right_value98=string_to_string(fun_name2_39)))))),list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional145=list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0)->mHeap&&left_value->type->mHeap,        _if_conditional145) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0),left_value->type,left_value,info);
            __dec_obj39=left_value2_61;
            left_value2_61=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj40=left_value2_61;
            left_value2_61=(char*)come_increment_ref_count(((char*)(right_value101=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        check_assign_type(((char*)(right_value103=xsprintf("\%s is assigned to",((char*)(right_value102=string_to_string(fun_name2_39)))))),list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,1),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        if(_if_conditional146=list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,1)->mHeap&&right_value->type->mHeap,        _if_conditional146) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,1),right_value->type,right_value,info);
            __dec_obj41=right_value2_65;
            right_value2_65=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s",right_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            __dec_obj42=right_value2_65;
            right_value2_65=(char*)come_increment_ref_count(((char*)(right_value105=string_clone(right_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj43=come_value_60->c_value;
        come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value109=xsprintf("\%s(\%s,\%s)",((char*)(right_value106=string_to_string(fun_name2_39))),((char*)(right_value107=string_to_string(left_value2_61))),((char*)(right_value108=string_to_string(right_value2_65)))))));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_clone(operator_fun_38->mResultType))));
        come_call_finalizer2(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        type3_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=solve_generics(type2_66,generics_type_35,info))));
        come_call_finalizer2(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj44=come_value_60->type;
        come_value_60->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(type3_67))));
        come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_60->var=((void*)0);
        if(type3_67->mHeap) {
            __dec_obj45=come_value_60->c_value;
            come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value113=append_object_to_right_values(come_value_60->c_value,(struct sType*)come_increment_ref_count(type3_67),info))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        __dec_obj46=come_value_60->c_value;
        come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value114=append_stackframe(come_value_60->c_value,come_value_60->type,info))));
        __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        add_come_last_code(info,"%s;\n",come_value_60->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_60));
        result_59=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value2_61 = come_decrement_ref_count2(left_value2_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_65 = come_decrement_ref_count2(right_value2_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type3_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result66__ = result_59;
    come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_39 = come_decrement_ref_count2(fun_name2_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    return __result66__;
    come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    fun_name2_39 = come_decrement_ref_count2(fun_name2_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool _if_conditional7;
struct sType* __result34__;
void* right_value49;
struct sType* result_11;
_Bool _if_conditional25;
_Bool _if_conditional26;
void* right_value56;
struct list$1sTypeph* __dec_obj15;
_Bool _if_conditional30;
void* right_value59;
struct tuple1$1sTypeph* __dec_obj17;
_Bool _if_conditional34;
void* right_value60;
struct tuple1$1sTypeph* __dec_obj18;
_Bool _if_conditional35;
void* right_value61;
char* __dec_obj19;
_Bool _if_conditional36;
void* right_value62;
struct list$1sTypeph* __dec_obj20;
_Bool _if_conditional37;
void* right_value70;
struct list$1sNodeph* __dec_obj24;
_Bool _if_conditional50;
_Bool _if_conditional51;
void* right_value71;
struct list$1sTypeph* __dec_obj25;
_Bool _if_conditional52;
void* right_value78;
struct list$1charph* __dec_obj29;
_Bool _if_conditional56;
void* right_value79;
struct tuple1$1sTypeph* __dec_obj30;
_Bool _if_conditional57;
_Bool _if_conditional58;
void* right_value80;
struct sNode* __dec_obj31;
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
_Bool _if_conditional80;
_Bool _if_conditional81;
_Bool _if_conditional82;
void* right_value81;
struct sNode* __dec_obj32;
_Bool _if_conditional83;
_Bool _if_conditional84;
_Bool _if_conditional85;
void* right_value82;
char* __dec_obj33;
_Bool _if_conditional86;
_Bool _if_conditional87;
_Bool _if_conditional88;
_Bool _if_conditional89;
_Bool _if_conditional90;
_Bool _if_conditional91;
_Bool _if_conditional92;
_Bool _if_conditional93;
_Bool _if_conditional94;
void* right_value83;
char* __dec_obj34;
_Bool _if_conditional95;
struct sType* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
right_value49 = (void*)0;
memset(&result_11, 0, sizeof(struct sType*));
right_value56 = (void*)0;
right_value59 = (void*)0;
right_value60 = (void*)0;
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
right_value78 = (void*)0;
right_value79 = (void*)0;
right_value80 = (void*)0;
right_value81 = (void*)0;
right_value82 = (void*)0;
right_value83 = (void*)0;
        if(_if_conditional7=self==(void*)0,        _if_conditional7) {
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(_if_conditional25=self!=((void*)0),        _if_conditional25) {
            result_11->mClass=self->mClass;
        }
        if(_if_conditional26=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional26) {
            __dec_obj15=result_11->mMultipleTypes;
            result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value56=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional30=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional30) {
            __dec_obj17=result_11->mNoSolvedGenericsType;
            result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value59=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional34=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional34) {
            __dec_obj18=result_11->mOriginalLoadVarType;
            result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional35=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional35) {
            __dec_obj19=result_11->mGenericsName;
            result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional36=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional36) {
            __dec_obj20=result_11->mGenericsTypes;
            result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value62=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional37=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional37) {
            __dec_obj24=result_11->mArrayNum;
            result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value70=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional50=self!=((void*)0),        _if_conditional50) {
            result_11->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional51=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional51) {
            __dec_obj25=result_11->mParamTypes;
            result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value71=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional52=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional52) {
            __dec_obj29=result_11->mParamNames;
            result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional56=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional56) {
            __dec_obj30=result_11->mResultType;
            result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value79=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            result_11->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional58=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional58) {
            __dec_obj31=result_11->mAlignas;
            result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            result_11->mUnsigned=self->mUnsigned;
        }
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            result_11->mShort=self->mShort;
        }
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            result_11->mLong=self->mLong;
        }
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            result_11->mLongLong=self->mLongLong;
        }
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            result_11->mConstant=self->mConstant;
        }
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            result_11->mRegister=self->mRegister;
        }
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            result_11->mVolatile=self->mVolatile;
        }
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            result_11->mStatic=self->mStatic;
        }
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            result_11->mExtern=self->mExtern;
        }
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            result_11->mRestrict=self->mRestrict;
        }
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            result_11->mImmutable=self->mImmutable;
        }
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            result_11->mHeap=self->mHeap;
        }
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            result_11->mDummyHeap=self->mDummyHeap;
        }
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            result_11->mDelegate=self->mDelegate;
        }
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            result_11->mShare=self->mShare;
        }
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            result_11->mClone=self->mClone;
        }
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            result_11->mNoHeap=self->mNoHeap;
        }
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            result_11->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            result_11->mRefference=self->mRefference;
        }
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            result_11->mException=self->mException;
        }
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            result_11->mPointerNum=self->mPointerNum;
        }
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        if(_if_conditional82=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional82) {
            __dec_obj32=result_11->mSizeNum;
            result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            result_11->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            result_11->mTypeOfExpression=self->mTypeOfExpression;
        }
        if(_if_conditional85=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional85) {
            __dec_obj33=result_11->mOriginalTypeName;
            result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value82=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            result_11->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            result_11->mFunctionParam=self->mFunctionParam;
        }
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            result_11->mAllocaValue=self->mAllocaValue;
        }
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            result_11->mGenericsStruct=self->mGenericsStruct;
        }
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            result_11->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            result_11->mComeMemCore=self->mComeMemCore;
        }
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            result_11->mInline=self->mInline;
        }
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            result_11->mNullValue=self->mNullValue;
        }
        if(_if_conditional94=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional94) {
            __dec_obj34=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value83=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        if(_if_conditional95=self!=((void*)0),        _if_conditional95) {
            result_11->mArrayPointerType=self->mArrayPointerType;
        }
        __result51__ = __result_obj__ = result_11;
        come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result51__;
        come_call_finalizer2(sType_finalize,result_11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sType_finalize(struct sType* self){
void* __result_obj__;
_Bool _if_conditional8;
_Bool _if_conditional10;
_Bool _if_conditional12;
_Bool _if_conditional13;
_Bool _if_conditional14;
_Bool _if_conditional15;
_Bool _if_conditional17;
_Bool _if_conditional18;
_Bool _if_conditional20;
_Bool _if_conditional21;
_Bool _if_conditional22;
_Bool _if_conditional23;
_Bool _if_conditional24;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional8=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional8) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional10) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional12) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional13) {
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional14) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional15) {
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional17) {
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional18) {
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional20) {
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional21) {
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional22) {
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional23) {
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional24) {
                self->mAsmName = come_decrement_ref_count2(self->mAsmName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static void list$1sTypephp_finalize(struct list$1sTypeph* self){
void* __result_obj__;
struct list_item$1sTypeph* it_12;
_Bool _while_condtional1;
struct list_item$1sTypeph* prev_it_13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_12, 0, sizeof(struct list_item$1sTypeph*));
memset(&prev_it_13, 0, sizeof(struct list_item$1sTypeph*));
                    it_12=self->head;
                    while(_while_condtional1=it_12!=((void*)0),                    _while_condtional1) {
                        prev_it_13=it_12;
                        it_12=it_12->next;
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional9=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional9) {
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional11) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list$1sNodephp_finalize(struct list$1sNodeph* self){
void* __result_obj__;
struct list_item$1sNodeph* it_14;
_Bool _while_condtional2;
struct list_item$1sNodeph* prev_it_15;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_14, 0, sizeof(struct list_item$1sNodeph*));
memset(&prev_it_15, 0, sizeof(struct list_item$1sNodeph*));
                    it_14=self->head;
                    while(_while_condtional2=it_14!=((void*)0),                    _while_condtional2) {
                        prev_it_15=it_14;
                        it_14=it_14->next;
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item) { self->item = come_decrement_ref_count2(self->item, ((struct sNode*)self->item)->finalize, ((struct sNode*)self->item)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
}

static void list$1charphp_finalize(struct list$1charph* self){
void* __result_obj__;
struct list_item$1charph* it_16;
_Bool _while_condtional3;
struct list_item$1charph* prev_it_17;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_16, 0, sizeof(struct list_item$1charph*));
memset(&prev_it_17, 0, sizeof(struct list_item$1charph*));
                    it_16=self->head;
                    while(_while_condtional3=it_16!=((void*)0),                    _while_condtional3) {
                        prev_it_17=it_16;
                        it_16=it_16->next;
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional19) {
                                self->item = come_decrement_ref_count2(self->item, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional27;
struct list$1sTypeph* __result35__;
void* right_value50;
void* right_value51;
struct list$1sTypeph* result_18;
struct list_item$1sTypeph* it_19;
_Bool _while_condtional4;
void* right_value55;
struct list$1sTypeph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
right_value50 = (void*)0;
right_value51 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sTypeph*));
memset(&it_19, 0, sizeof(struct list_item$1sTypeph*));
right_value55 = (void*)0;
                if(_if_conditional27=self==((void*)0),                _if_conditional27) {
                    __result35__ = __result_obj__ = ((void*)0);
                    return __result35__;
                }
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value50=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_19=self->head;
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    it_19=it_19->next;
                }
                __result38__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result38__;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result36__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result36__;
                    come_call_finalizer2(list$1sTypephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_add(struct list$1sTypeph* self, struct sType* item){
void* __result_obj__;
_Bool _if_conditional28;
void* right_value52;
struct list_item$1sTypeph* litem_20;
struct sType* __dec_obj12;
_Bool _if_conditional29;
void* right_value53;
struct list_item$1sTypeph* litem_21;
struct sType* __dec_obj13;
void* right_value54;
struct list_item$1sTypeph* litem_22;
struct sType* __dec_obj14;
struct list$1sTypeph* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
right_value52 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sTypeph*));
right_value53 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sTypeph*));
right_value54 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional28=self->len==0,                        _if_conditional28) {
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value52=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj12=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional29=self->len==1,                            _if_conditional29) {
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj13=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj14=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                self->tail->next=litem_22;
                                self->tail=litem_22;
                            }
                        }
                        self->len++;
                        __result37__ = __result_obj__ = self;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result37__;
                        come_call_finalizer2(sType_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list$1sTypeph_finalize(struct list$1sTypeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional31;
struct tuple1$1sTypeph* __result39__;
void* right_value57;
struct tuple1$1sTypeph* result_23;
_Bool _if_conditional33;
void* right_value58;
struct sType* __dec_obj16;
struct tuple1$1sTypeph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
right_value57 = (void*)0;
memset(&result_23, 0, sizeof(struct tuple1$1sTypeph*));
right_value58 = (void*)0;
                if(_if_conditional31=self==(void*)0,                _if_conditional31) {
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional33=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional33) {
                    __dec_obj16=result_23->v1;
                    result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                __result40__ = __result_obj__ = result_23;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional32) {
                        come_call_finalizer2(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static struct list$1sNodeph* list$1sNodephp_clone(struct list$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional38;
struct list$1sNodeph* __result41__;
void* right_value63;
void* right_value64;
struct list$1sNodeph* result_24;
struct list_item$1sNodeph* it_25;
_Bool _while_condtional5;
void* right_value69;
struct list$1sNodeph* __result46__;
memset(&__result_obj__, 0, sizeof(void*));
right_value63 = (void*)0;
right_value64 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1sNodeph*));
memset(&it_25, 0, sizeof(struct list_item$1sNodeph*));
right_value69 = (void*)0;
                if(_if_conditional38=self==((void*)0),                _if_conditional38) {
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value64=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value63=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_25=self->head;
                while(_while_condtional5=it_25!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=sNode_clone(it_25->item)))));
                    if(right_value69) { right_value69 = come_decrement_ref_count2(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    it_25=it_25->next;
                }
                __result46__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result46__;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result42__ = __result_obj__ = self;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result42__;
                    come_call_finalizer2(list$1sNodephp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_add(struct list$1sNodeph* self, struct sNode* item){
void* __result_obj__;
_Bool _if_conditional39;
void* right_value65;
struct list_item$1sNodeph* litem_26;
struct sNode* __dec_obj21;
_Bool _if_conditional40;
void* right_value66;
struct list_item$1sNodeph* litem_27;
struct sNode* __dec_obj22;
void* right_value67;
struct list_item$1sNodeph* litem_28;
struct sNode* __dec_obj23;
struct list$1sNodeph* __result43__;
memset(&__result_obj__, 0, sizeof(void*));
right_value65 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1sNodeph*));
right_value66 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1sNodeph*));
right_value67 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional39=self->len==0,                        _if_conditional39) {
                            litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value65=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj21=litem_26->item;
                            litem_26->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional40=self->len==1,                            _if_conditional40) {
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value66=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj22=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value67=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj23=litem_28->item;
                                litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                self->tail->next=litem_28;
                                self->tail=litem_28;
                            }
                        }
                        self->len++;
                        __result43__ = __result_obj__ = self;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result43__;
                        if(item) { item = come_decrement_ref_count2(item, ((struct sNode*)item)->finalize, ((struct sNode*)item)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

static struct sNode* sNode_clone(struct sNode* self){
void* __result_obj__;
_Bool _if_conditional41;
struct sNode* __result44__;
void* right_value68;
struct sNode* result_29;
_Bool _if_conditional42;
_Bool _if_conditional43;
_Bool _if_conditional44;
_Bool _if_conditional45;
_Bool _if_conditional46;
_Bool _if_conditional47;
_Bool _if_conditional48;
_Bool _if_conditional49;
struct sNode* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
right_value68 = (void*)0;
memset(&result_29, 0, sizeof(struct sNode*));
                        if(_if_conditional41=self==(void*)0,                        _if_conditional41) {
                            __result44__ = __result_obj__ = (void*)0;
                            return __result44__;
                        }
                        result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value68) { right_value68 = come_decrement_ref_count2(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        if(_if_conditional42=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional42) {
                            result_29->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            result_29->finalize=self->finalize;
                        }
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            result_29->clone=self->clone;
                        }
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            result_29->compile=self->compile;
                        }
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            result_29->sline=self->sline;
                        }
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            result_29->sname=self->sname;
                        }
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            result_29->terminated=self->terminated;
                        }
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            result_29->kind=self->kind;
                        }
                        __result45__ = __result_obj__ = result_29;
                        if(result_29) { result_29 = come_decrement_ref_count2(result_29, ((struct sNode*)result_29)->finalize, ((struct sNode*)result_29)->_protocol_obj, 0, 1, 0, (void*)0); } 
                        return __result45__;
                        if(result_29) { result_29 = come_decrement_ref_count2(result_29, ((struct sNode*)result_29)->finalize, ((struct sNode*)result_29)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void list$1sNodeph_finalize(struct list$1sNodeph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static struct list$1charph* list$1charphp_clone(struct list$1charph* self){
void* __result_obj__;
_Bool _if_conditional53;
struct list$1charph* __result47__;
void* right_value72;
void* right_value73;
struct list$1charph* result_30;
struct list_item$1charph* it_31;
_Bool _while_condtional6;
void* right_value77;
struct list$1charph* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
right_value72 = (void*)0;
right_value73 = (void*)0;
memset(&result_30, 0, sizeof(struct list$1charph*));
memset(&it_31, 0, sizeof(struct list_item$1charph*));
right_value77 = (void*)0;
                if(_if_conditional53=self==((void*)0),                _if_conditional53) {
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value73=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value72=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                it_31=self->head;
                while(_while_condtional6=it_31!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value77=string_clone(it_31->item)))));
                    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    it_31=it_31->next;
                }
                __result50__ = __result_obj__ = result_30;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result50__;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                    self->head=((void*)0);
                    self->tail=((void*)0);
                    self->len=0;
                    __result48__ = __result_obj__ = self;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result48__;
                    come_call_finalizer2(list$1charphp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static struct list$1charph* list$1charph_add(struct list$1charph* self, char* item){
void* __result_obj__;
_Bool _if_conditional54;
void* right_value74;
struct list_item$1charph* litem_32;
char* __dec_obj26;
_Bool _if_conditional55;
void* right_value75;
struct list_item$1charph* litem_33;
char* __dec_obj27;
void* right_value76;
struct list_item$1charph* litem_34;
char* __dec_obj28;
struct list$1charph* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
right_value74 = (void*)0;
memset(&litem_32, 0, sizeof(struct list_item$1charph*));
right_value75 = (void*)0;
memset(&litem_33, 0, sizeof(struct list_item$1charph*));
right_value76 = (void*)0;
memset(&litem_34, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional54=self->len==0,                        _if_conditional54) {
                            litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value74=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            litem_32->prev=((void*)0);
                            litem_32->next=((void*)0);
                            __dec_obj26=litem_32->item;
                            litem_32->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            self->tail=litem_32;
                            self->head=litem_32;
                        }
                        else {
                            if(_if_conditional55=self->len==1,                            _if_conditional55) {
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value75=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_33->prev=self->head;
                                litem_33->next=((void*)0);
                                __dec_obj27=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail=litem_33;
                                self->head->next=litem_33;
                            }
                            else {
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value76=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                litem_34->prev=self->tail;
                                litem_34->next=((void*)0);
                                __dec_obj28=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                self->tail->next=litem_34;
                                self->tail=litem_34;
                            }
                        }
                        self->len++;
                        __result49__ = __result_obj__ = self;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
                        return __result49__;
                        item = come_decrement_ref_count2(item, (void*)0, (void*)0, 0, 1, 0, (void*)0);
}

static void list$1charph_finalize(struct list$1charph* self){
void* __result_obj__;
memset(&__result_obj__, 0, sizeof(void*));
}

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional98;
int __result52__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
        if(_if_conditional98=self==((void*)0),        _if_conditional98) {
            __result52__ = 0;
            return __result52__;
        }
        __result53__ = self->len;
        return __result53__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_43;
unsigned int it_44;
_Bool _while_condtional7;
_Bool _if_conditional100;
_Bool _if_conditional101;
struct sGenericsFun* __result54__;
_Bool _if_conditional112;
_Bool _if_conditional113;
struct sGenericsFun* __result55__;
struct sGenericsFun* __result56__;
struct sGenericsFun* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_43, 0, sizeof(unsigned int));
memset(&it_44, 0, sizeof(unsigned int));
            hash_43=string_get_hash_key(((char*)key))%self->size;
            it_44=hash_43;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional100=self->item_existance[it_44],                _if_conditional100) {
                    if(_if_conditional101=string_equals(self->keys[it_44],key),                    _if_conditional101) {
                        __result54__ = __result_obj__ = self->items[it_44];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result54__;
                    }
                    it_44++;
                    if(_if_conditional112=it_44>=self->size,                    _if_conditional112) {
                        it_44=0;
                    }
                    else {
                        if(_if_conditional113=it_44==hash_43,                        _if_conditional113) {
                            __result55__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result55__;
                        }
                    }
                }
                else {
                    __result56__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                }
            }
            __result57__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result57__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional102=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional102) {
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional103) {
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional104) {
                                come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional105=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional105) {
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional106=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional106) {
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional107=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional107) {
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional108=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional108) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional109=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional109) {
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional110=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional110) {
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            if(_if_conditional111=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional111) {
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_46;
unsigned int hash_47;
unsigned int it_48;
_Bool _while_condtional8;
_Bool _if_conditional116;
_Bool _if_conditional117;
struct sFun* __result59__;
_Bool _if_conditional133;
_Bool _if_conditional134;
struct sFun* __result60__;
struct sFun* __result61__;
struct sFun* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_46, 0, sizeof(struct sFun*));
memset(&hash_47, 0, sizeof(unsigned int));
memset(&it_48, 0, sizeof(unsigned int));
                memset(&default_value_46,0,sizeof(struct sFun*));
                hash_47=string_get_hash_key(((char*)key))%self->size;
                it_48=hash_47;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional116=self->item_existance[it_48],                    _if_conditional116) {
                        if(_if_conditional117=string_equals(self->keys[it_48],key),                        _if_conditional117) {
                            __result59__ = __result_obj__ = self->items[it_48];
                            come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result59__;
                        }
                        it_48++;
                        if(_if_conditional133=it_48>=self->size,                        _if_conditional133) {
                            it_48=0;
                        }
                        else {
                            if(_if_conditional134=it_48==hash_47,                            _if_conditional134) {
                                __result60__ = __result_obj__ = default_value_46;
                                come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result60__;
                            }
                        }
                    }
                    else {
                        __result61__ = __result_obj__ = default_value_46;
                        come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result61__;
                    }
                }
                __result62__ = __result_obj__ = default_value_46;
                come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result62__;
                come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional118;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional127;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional118=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional118) {
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional119=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional119) {
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional120=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional120) {
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional121=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional121) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional122=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional122) {
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional123=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional123) {
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional124=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional124) {
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional127=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional127) {
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional128=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional128) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional129=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional129) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional130=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional130) {
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional131=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional131) {
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                if(_if_conditional132=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional132) {
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional125;
_Bool _if_conditional126;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional125=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional125) {
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        if(_if_conditional126=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional126) {
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional136;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional136=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional136) {
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional141;
_Bool _if_conditional142;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional141=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional141) {
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            if(_if_conditional142=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional142) {
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional143;
struct list_item$1sTypeph* it_62;
int i_63;
_Bool _while_condtional9;
_Bool _if_conditional144;
struct sType* __result63__;
struct sType* default_value_64;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_63, 0, sizeof(int));
memset(&default_value_64, 0, sizeof(struct sType*));
            if(_if_conditional143=position<0,            _if_conditional143) {
                position+=self->len;
            }
            it_62=self->head;
            i_63=0;
            while(_while_condtional9=it_62!=((void*)0),            _while_condtional9) {
                if(_if_conditional144=position==i_63,                _if_conditional144) {
                    __result63__ = __result_obj__ = it_62->item;
                    return __result63__;
                }
                it_62=it_62->next;
                i_63++;
            }
            memset(&default_value_64,0,sizeof(struct sType*));
            __result64__ = __result_obj__ = default_value_64;
            come_call_finalizer2(sType_finalize,default_value_64, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result64__;
            come_call_finalizer2(sType_finalize,default_value_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional148;
void* right_value115;
struct list_item$1CVALUEph* litem_68;
struct CVALUE* __dec_obj47;
_Bool _if_conditional150;
void* right_value116;
struct list_item$1CVALUEph* litem_69;
struct CVALUE* __dec_obj48;
void* right_value117;
struct list_item$1CVALUEph* litem_70;
struct CVALUE* __dec_obj49;
struct list$1CVALUEph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value115 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1CVALUEph*));
right_value116 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1CVALUEph*));
right_value117 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional148=self->len==0,            _if_conditional148) {
                litem_68=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value115=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value115, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                litem_68->prev=((void*)0);
                litem_68->next=((void*)0);
                __dec_obj47=litem_68->item;
                litem_68->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj47, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                self->tail=litem_68;
                self->head=litem_68;
            }
            else {
                if(_if_conditional150=self->len==1,                _if_conditional150) {
                    litem_69=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value116=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value116, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_69->prev=self->head;
                    litem_69->next=((void*)0);
                    __dec_obj48=litem_69->item;
                    litem_69->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail=litem_69;
                    self->head->next=litem_69;
                }
                else {
                    litem_70=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value117=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    litem_70->prev=self->tail;
                    litem_70->next=((void*)0);
                    __dec_obj49=litem_70->item;
                    litem_70->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    self->tail->next=litem_70;
                    self->tail=litem_70;
                }
            }
            self->len++;
            __result65__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result65__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional149;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional149=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional149) {
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value118;
char* __dec_obj50;
struct sNullNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value118 = (void*)0;
    self->sline=info->sline;
    __dec_obj50=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value118=__builtin_string(info->sname))));
    __dec_obj50 = come_decrement_ref_count2(__dec_obj50, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value118 = come_decrement_ref_count2(right_value118, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result67__ = __result_obj__ = self;
    come_call_finalizer2(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result67__;
    come_call_finalizer2(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNode_terminated(){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    __result68__ = (_Bool)0;
    return __result68__;
}

char* sNullNode_kind(){
void* __result_obj__;
void* right_value119;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value119 = (void*)0;
    __result69__ = __result_obj__ = ((char*)(right_value119=__builtin_string("sNullNode")));
    right_value119 = come_decrement_ref_count2(right_value119, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value120;
struct CVALUE* come_value_71;
void* right_value121;
char* __dec_obj51;
void* right_value122;
void* right_value123;
struct sType* __dec_obj52;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
memset(&come_value_71, 0, sizeof(struct CVALUE*));
right_value121 = (void*)0;
right_value122 = (void*)0;
right_value123 = (void*)0;
    come_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 149, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj51=come_value_71->c_value;
    come_value_71->c_value=(char*)come_increment_ref_count(((char*)(right_value121=xsprintf("((void*)0)"))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj52=come_value_71->type;
    come_value_71->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value122=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 152, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj52, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_71->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_71->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_71));
    __result70__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result70__;
    come_call_finalizer2(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNullNode_sline(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    __result71__ = self->sline;
    return __result71__;
}

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value124;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value124 = (void*)0;
    __result72__ = __result_obj__ = ((char*)(right_value124=__builtin_string(self->sname)));
    right_value124 = come_decrement_ref_count2(right_value124, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result72__;
}

struct sNode* create_null_object(struct sInfo* info){
void* __result_obj__;
void* right_value125;
void* right_value126;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value129;
struct sNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value129 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 174, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value126=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value125=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 174, "sNullNode")))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNullNode_sline;
    _inf_value1->sname=(void*)sNullNode_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result75__ = __result_obj__ = ((struct sNode*)(right_value129=_inf_value1));
    come_call_finalizer2(sNullNode_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNullNode_finalize,right_value126, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value129) { right_value129 = come_decrement_ref_count2(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result75__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value130;
char* __dec_obj54;
struct sNilNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value130 = (void*)0;
    self->sline=info->sline;
    __dec_obj54=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value130=__builtin_string(info->sname))));
    __dec_obj54 = come_decrement_ref_count2(__dec_obj54, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value130 = come_decrement_ref_count2(right_value130, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __result76__ = __result_obj__ = self;
    come_call_finalizer2(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer2(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNilNode_terminated(){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    __result77__ = (_Bool)0;
    return __result77__;
}

char* sNilNode_kind(){
void* __result_obj__;
void* right_value131;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value131 = (void*)0;
    __result78__ = __result_obj__ = ((char*)(right_value131=__builtin_string("sNilNode")));
    right_value131 = come_decrement_ref_count2(right_value131, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value132;
struct CVALUE* come_value_73;
void* right_value133;
char* __dec_obj55;
void* right_value134;
void* right_value135;
struct sType* __dec_obj56;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
memset(&come_value_73, 0, sizeof(struct CVALUE*));
right_value133 = (void*)0;
right_value134 = (void*)0;
right_value135 = (void*)0;
    come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value132=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 204, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj55=come_value_73->c_value;
    come_value_73->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("((void*)0)"))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj56=come_value_73->type;
    come_value_73->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value134=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 207, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_73->type->mNullValue=(_Bool)1;
    come_value_73->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_73->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_73));
    __result79__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result79__;
    come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNilNode_sline(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    __result80__ = self->sline;
    return __result80__;
}

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value136;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value136 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value136=__builtin_string(self->sname)));
    right_value136 = come_decrement_ref_count2(right_value136, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value142;
char* __dec_obj58;
void* right_value143;
struct sNode* __dec_obj59;
void* right_value144;
struct sNode* __dec_obj60;
struct sAddNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value142 = (void*)0;
right_value143 = (void*)0;
right_value144 = (void*)0;
    self->sline=info->sline;
    __dec_obj58=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value142=__builtin_string(info->sname))));
    __dec_obj58 = come_decrement_ref_count2(__dec_obj58, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value142 = come_decrement_ref_count2(right_value142, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj59=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value143=sNode_clone(left))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count2(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value143) { right_value143 = come_decrement_ref_count2(right_value143, ((struct sNode*)right_value143)->finalize, ((struct sNode*)right_value143)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj60=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value144=sNode_clone(right))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value144) { right_value144 = come_decrement_ref_count2(right_value144, ((struct sNode*)right_value144)->finalize, ((struct sNode*)right_value144)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result85__ = __result_obj__ = self;
    come_call_finalizer2(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result85__;
    come_call_finalizer2(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAddNode_terminated(){
void* __result_obj__;
_Bool __result86__;
memset(&__result_obj__, 0, sizeof(void*));
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sAddNode_kind(){
void* __result_obj__;
void* right_value145;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value145 = (void*)0;
    __result87__ = __result_obj__ = ((char*)(right_value145=__builtin_string("sAddNode")));
    right_value145 = come_decrement_ref_count2(right_value145, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_75;
_Bool _if_conditional164;
_Bool __result88__;
void* right_value146;
struct CVALUE* left_value_76;
struct sNode* right_node_77;
_Bool _if_conditional165;
_Bool __result89__;
void* right_value147;
struct CVALUE* right_value_78;
struct sType* type_79;
char* fun_name_80;
_Bool calling_fun_81;
_Bool _if_conditional166;
_Bool _if_conditional167;
void* right_value148;
struct CVALUE* come_value_82;
void* right_value149;
char* __dec_obj61;
void* right_value150;
struct sType* __dec_obj62;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_75, 0, sizeof(struct sNode*));
right_value146 = (void*)0;
memset(&left_value_76, 0, sizeof(struct CVALUE*));
memset(&right_node_77, 0, sizeof(struct sNode*));
right_value147 = (void*)0;
memset(&right_value_78, 0, sizeof(struct CVALUE*));
memset(&type_79, 0, sizeof(struct sType*));
memset(&fun_name_80, 0, sizeof(char*));
memset(&calling_fun_81, 0, sizeof(_Bool));
right_value148 = (void*)0;
memset(&come_value_82, 0, sizeof(struct CVALUE*));
right_value149 = (void*)0;
right_value150 = (void*)0;
    left_node_75=self->mLeft;
    if(_if_conditional164=!node_compile(left_node_75,info),    _if_conditional164) {
        __result88__ = (_Bool)0;
        return __result88__;
    }
    left_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value146=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value146, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_77=self->mRight;
    if(_if_conditional165=!node_compile(right_node_77,info),    _if_conditional165) {
        __result89__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result89__;
    }
    right_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value147=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value147, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_79=(struct sType*)come_increment_ref_count(left_value_76->type);
    fun_name_80="operator_add";
    if(self->mQuote) {
        calling_fun_81=(_Bool)0;
    }
    else {
        calling_fun_81=operator_overload_fun(type_79,fun_name_80,left_value_76,right_value_78,info);
    }
    if(_if_conditional167=!calling_fun_81,    _if_conditional167) {
        come_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 300, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj61=come_value_82->c_value;
        come_value_82->c_value=(char*)come_increment_ref_count(((char*)(right_value149=xsprintf("%s+%s",left_value_76->c_value,right_value_78->c_value))));
        __dec_obj61 = come_decrement_ref_count2(__dec_obj61, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value149 = come_decrement_ref_count2(right_value149, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj62=come_value_82->type;
        come_value_82->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value150=sType_clone(left_value_76->type))));
        come_call_finalizer2(sType_finalize,__dec_obj62, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_82->type->mHeap=(_Bool)0;
        come_value_82->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_82->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_82));
        come_call_finalizer2(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result90__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result90__;
    come_call_finalizer2(CVALUE_finalize,left_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_79, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAddNode_sline(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
int __result91__;
memset(&__result_obj__, 0, sizeof(void*));
    __result91__ = self->sline;
    return __result91__;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value151;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value151 = (void*)0;
    __result92__ = __result_obj__ = ((char*)(right_value151=__builtin_string(self->sname)));
    right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value152;
char* __dec_obj63;
void* right_value153;
struct sNode* __dec_obj64;
void* right_value154;
struct sNode* __dec_obj65;
struct sSubNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value152 = (void*)0;
right_value153 = (void*)0;
right_value154 = (void*)0;
    self->sline=info->sline;
    __dec_obj63=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value152=__builtin_string(info->sname))));
    __dec_obj63 = come_decrement_ref_count2(__dec_obj63, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value152 = come_decrement_ref_count2(right_value152, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj64=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value153=sNode_clone(left))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count2(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value153) { right_value153 = come_decrement_ref_count2(right_value153, ((struct sNode*)right_value153)->finalize, ((struct sNode*)right_value153)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj65=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value154=sNode_clone(right))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value154) { right_value154 = come_decrement_ref_count2(right_value154, ((struct sNode*)right_value154)->finalize, ((struct sNode*)right_value154)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    self->mQuote=quote;
    __result93__ = __result_obj__ = self;
    come_call_finalizer2(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result93__;
    come_call_finalizer2(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sSubNode_terminated(){
void* __result_obj__;
_Bool __result94__;
memset(&__result_obj__, 0, sizeof(void*));
    __result94__ = (_Bool)0;
    return __result94__;
}

char* sSubNode_kind(){
void* __result_obj__;
void* right_value155;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value155 = (void*)0;
    __result95__ = __result_obj__ = ((char*)(right_value155=__builtin_string("sSubNode")));
    right_value155 = come_decrement_ref_count2(right_value155, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_83;
_Bool _if_conditional171;
_Bool __result96__;
void* right_value156;
struct CVALUE* left_value_84;
struct sNode* right_node_85;
_Bool _if_conditional172;
_Bool __result97__;
void* right_value157;
struct CVALUE* right_value_86;
struct sType* type_87;
char* fun_name_88;
_Bool calling_fun_89;
_Bool _if_conditional173;
_Bool _if_conditional174;
void* right_value158;
struct CVALUE* come_value_90;
void* right_value159;
char* __dec_obj66;
void* right_value160;
struct sType* __dec_obj67;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_83, 0, sizeof(struct sNode*));
right_value156 = (void*)0;
memset(&left_value_84, 0, sizeof(struct CVALUE*));
memset(&right_node_85, 0, sizeof(struct sNode*));
right_value157 = (void*)0;
memset(&right_value_86, 0, sizeof(struct CVALUE*));
memset(&type_87, 0, sizeof(struct sType*));
memset(&fun_name_88, 0, sizeof(char*));
memset(&calling_fun_89, 0, sizeof(_Bool));
right_value158 = (void*)0;
memset(&come_value_90, 0, sizeof(struct CVALUE*));
right_value159 = (void*)0;
right_value160 = (void*)0;
    left_node_83=self->mLeft;
    if(_if_conditional171=!node_compile(left_node_83,info),    _if_conditional171) {
        __result96__ = (_Bool)0;
        return __result96__;
    }
    left_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value156=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value156, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_85=self->mRight;
    if(_if_conditional172=!node_compile(right_node_85,info),    _if_conditional172) {
        __result97__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result97__;
    }
    right_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value157=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value157, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_87=(struct sType*)come_increment_ref_count(left_value_84->type);
    fun_name_88="operator_sub";
    if(self->mQuote) {
        calling_fun_89=(_Bool)0;
    }
    else {
        calling_fun_89=operator_overload_fun(type_87,fun_name_88,left_value_84,right_value_86,info);
    }
    if(_if_conditional174=!calling_fun_89,    _if_conditional174) {
        come_value_90=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 391, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj66=come_value_90->c_value;
        come_value_90->c_value=(char*)come_increment_ref_count(((char*)(right_value159=xsprintf("%s-%s",left_value_84->c_value,right_value_86->c_value))));
        __dec_obj66 = come_decrement_ref_count2(__dec_obj66, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value159 = come_decrement_ref_count2(right_value159, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj67=come_value_90->type;
        come_value_90->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value160=sType_clone(left_value_84->type))));
        come_call_finalizer2(sType_finalize,__dec_obj67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_90->type->mHeap=(_Bool)0;
        come_value_90->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_90->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_90));
        come_call_finalizer2(CVALUE_finalize,come_value_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result98__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result98__;
    come_call_finalizer2(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_86, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sSubNode_sline(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
int __result99__;
memset(&__result_obj__, 0, sizeof(void*));
    __result99__ = self->sline;
    return __result99__;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value161;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value161 = (void*)0;
    __result100__ = __result_obj__ = ((char*)(right_value161=__builtin_string(self->sname)));
    right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result100__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value162;
char* __dec_obj68;
void* right_value163;
struct sNode* __dec_obj69;
void* right_value164;
struct sNode* __dec_obj70;
struct sMultNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value162 = (void*)0;
right_value163 = (void*)0;
right_value164 = (void*)0;
    self->sline=info->sline;
    __dec_obj68=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value162=__builtin_string(info->sname))));
    __dec_obj68 = come_decrement_ref_count2(__dec_obj68, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value162 = come_decrement_ref_count2(right_value162, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj69=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value163=sNode_clone(left))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count2(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value163) { right_value163 = come_decrement_ref_count2(right_value163, ((struct sNode*)right_value163)->finalize, ((struct sNode*)right_value163)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj70=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value164=sNode_clone(right))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value164) { right_value164 = come_decrement_ref_count2(right_value164, ((struct sNode*)right_value164)->finalize, ((struct sNode*)right_value164)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result101__ = __result_obj__ = self;
    come_call_finalizer2(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result101__;
    come_call_finalizer2(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sMultNode_terminated(){
void* __result_obj__;
_Bool __result102__;
memset(&__result_obj__, 0, sizeof(void*));
    __result102__ = (_Bool)0;
    return __result102__;
}

char* sMultNode_kind(){
void* __result_obj__;
void* right_value165;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value165 = (void*)0;
    __result103__ = __result_obj__ = ((char*)(right_value165=__builtin_string("sMultNode")));
    right_value165 = come_decrement_ref_count2(right_value165, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_91;
_Bool _if_conditional178;
_Bool __result104__;
void* right_value166;
struct CVALUE* left_value_92;
struct sNode* right_node_93;
_Bool _if_conditional179;
_Bool __result105__;
void* right_value167;
struct CVALUE* right_value_94;
struct sType* type_95;
char* fun_name_96;
_Bool calling_fun_97;
_Bool _if_conditional180;
_Bool _if_conditional181;
void* right_value168;
struct CVALUE* come_value_98;
void* right_value169;
char* __dec_obj71;
void* right_value170;
struct sType* __dec_obj72;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_91, 0, sizeof(struct sNode*));
right_value166 = (void*)0;
memset(&left_value_92, 0, sizeof(struct CVALUE*));
memset(&right_node_93, 0, sizeof(struct sNode*));
right_value167 = (void*)0;
memset(&right_value_94, 0, sizeof(struct CVALUE*));
memset(&type_95, 0, sizeof(struct sType*));
memset(&fun_name_96, 0, sizeof(char*));
memset(&calling_fun_97, 0, sizeof(_Bool));
right_value168 = (void*)0;
memset(&come_value_98, 0, sizeof(struct CVALUE*));
right_value169 = (void*)0;
right_value170 = (void*)0;
    left_node_91=self->mLeft;
    if(_if_conditional178=!node_compile(left_node_91,info),    _if_conditional178) {
        __result104__ = (_Bool)0;
        return __result104__;
    }
    left_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value166=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value166, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_93=self->mRight;
    if(_if_conditional179=!node_compile(right_node_93,info),    _if_conditional179) {
        __result105__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result105__;
    }
    right_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value167=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value167, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_95=(struct sType*)come_increment_ref_count(left_value_92->type);
    fun_name_96="operator_mult";
    if(self->mQuote) {
        calling_fun_97=(_Bool)0;
    }
    else {
        calling_fun_97=operator_overload_fun(type_95,fun_name_96,left_value_92,right_value_94,info);
    }
    if(_if_conditional181=!calling_fun_97,    _if_conditional181) {
        come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 482, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj71=come_value_98->c_value;
        come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value169=xsprintf("%s*%s",left_value_92->c_value,right_value_94->c_value))));
        __dec_obj71 = come_decrement_ref_count2(__dec_obj71, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value169 = come_decrement_ref_count2(right_value169, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj72=come_value_98->type;
        come_value_98->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value170=sType_clone(left_value_92->type))));
        come_call_finalizer2(sType_finalize,__dec_obj72, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_98->type->mHeap=(_Bool)0;
        come_value_98->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_98->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_98));
        come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result106__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result106__;
    come_call_finalizer2(CVALUE_finalize,left_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_94, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_95, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sMultNode_sline(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
int __result107__;
memset(&__result_obj__, 0, sizeof(void*));
    __result107__ = self->sline;
    return __result107__;
}

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value171;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value171 = (void*)0;
    __result108__ = __result_obj__ = ((char*)(right_value171=__builtin_string(self->sname)));
    right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value172;
char* __dec_obj73;
void* right_value173;
struct sNode* __dec_obj74;
void* right_value174;
struct sNode* __dec_obj75;
struct sDivNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value172 = (void*)0;
right_value173 = (void*)0;
right_value174 = (void*)0;
    self->sline=info->sline;
    __dec_obj73=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value172=__builtin_string(info->sname))));
    __dec_obj73 = come_decrement_ref_count2(__dec_obj73, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value172 = come_decrement_ref_count2(right_value172, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj74=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value173=sNode_clone(left))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count2(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value173) { right_value173 = come_decrement_ref_count2(right_value173, ((struct sNode*)right_value173)->finalize, ((struct sNode*)right_value173)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj75=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value174=sNode_clone(right))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value174) { right_value174 = come_decrement_ref_count2(right_value174, ((struct sNode*)right_value174)->finalize, ((struct sNode*)right_value174)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result109__ = __result_obj__ = self;
    come_call_finalizer2(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result109__;
    come_call_finalizer2(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sDivNode_terminated(){
void* __result_obj__;
_Bool __result110__;
memset(&__result_obj__, 0, sizeof(void*));
    __result110__ = (_Bool)0;
    return __result110__;
}

char* sDivNode_kind(){
void* __result_obj__;
void* right_value175;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value175 = (void*)0;
    __result111__ = __result_obj__ = ((char*)(right_value175=__builtin_string("sDivNode")));
    right_value175 = come_decrement_ref_count2(right_value175, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_99;
_Bool _if_conditional185;
_Bool __result112__;
void* right_value176;
struct CVALUE* left_value_100;
struct sNode* right_node_101;
_Bool _if_conditional186;
_Bool __result113__;
void* right_value177;
struct CVALUE* right_value_102;
struct sType* type_103;
char* fun_name_104;
_Bool calling_fun_105;
_Bool _if_conditional187;
_Bool _if_conditional188;
void* right_value178;
struct CVALUE* come_value_106;
void* right_value179;
char* __dec_obj76;
void* right_value180;
struct sType* __dec_obj77;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_99, 0, sizeof(struct sNode*));
right_value176 = (void*)0;
memset(&left_value_100, 0, sizeof(struct CVALUE*));
memset(&right_node_101, 0, sizeof(struct sNode*));
right_value177 = (void*)0;
memset(&right_value_102, 0, sizeof(struct CVALUE*));
memset(&type_103, 0, sizeof(struct sType*));
memset(&fun_name_104, 0, sizeof(char*));
memset(&calling_fun_105, 0, sizeof(_Bool));
right_value178 = (void*)0;
memset(&come_value_106, 0, sizeof(struct CVALUE*));
right_value179 = (void*)0;
right_value180 = (void*)0;
    left_node_99=self->mLeft;
    if(_if_conditional185=!node_compile(left_node_99,info),    _if_conditional185) {
        __result112__ = (_Bool)0;
        return __result112__;
    }
    left_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value176=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value176, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_101=self->mRight;
    if(_if_conditional186=!node_compile(right_node_101,info),    _if_conditional186) {
        __result113__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result113__;
    }
    right_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value177=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value177, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_103=(struct sType*)come_increment_ref_count(left_value_100->type);
    fun_name_104="operator_div";
    if(self->mQuote) {
        calling_fun_105=(_Bool)0;
    }
    else {
        calling_fun_105=operator_overload_fun(type_103,fun_name_104,left_value_100,right_value_102,info);
    }
    if(_if_conditional188=!calling_fun_105,    _if_conditional188) {
        come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 573, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj76=come_value_106->c_value;
        come_value_106->c_value=(char*)come_increment_ref_count(((char*)(right_value179=xsprintf("%s/%s",left_value_100->c_value,right_value_102->c_value))));
        __dec_obj76 = come_decrement_ref_count2(__dec_obj76, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value179 = come_decrement_ref_count2(right_value179, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj77=come_value_106->type;
        come_value_106->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value180=sType_clone(left_value_100->type))));
        come_call_finalizer2(sType_finalize,__dec_obj77, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_106->type->mHeap=(_Bool)0;
        come_value_106->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_106->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_106));
        come_call_finalizer2(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result114__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result114__;
    come_call_finalizer2(CVALUE_finalize,left_value_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sDivNode_sline(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
int __result115__;
memset(&__result_obj__, 0, sizeof(void*));
    __result115__ = self->sline;
    return __result115__;
}

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value181;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value181 = (void*)0;
    __result116__ = __result_obj__ = ((char*)(right_value181=__builtin_string(self->sname)));
    right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result116__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value182;
char* __dec_obj78;
void* right_value183;
struct sNode* __dec_obj79;
void* right_value184;
struct sNode* __dec_obj80;
struct sModNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value182 = (void*)0;
right_value183 = (void*)0;
right_value184 = (void*)0;
    self->sline=info->sline;
    __dec_obj78=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value182=__builtin_string(info->sname))));
    __dec_obj78 = come_decrement_ref_count2(__dec_obj78, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value182 = come_decrement_ref_count2(right_value182, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj79=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value183=sNode_clone(left))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count2(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value183) { right_value183 = come_decrement_ref_count2(right_value183, ((struct sNode*)right_value183)->finalize, ((struct sNode*)right_value183)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj80=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value184=sNode_clone(right))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value184) { right_value184 = come_decrement_ref_count2(right_value184, ((struct sNode*)right_value184)->finalize, ((struct sNode*)right_value184)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result117__ = __result_obj__ = self;
    come_call_finalizer2(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result117__;
    come_call_finalizer2(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sModNode_terminated(){
void* __result_obj__;
_Bool __result118__;
memset(&__result_obj__, 0, sizeof(void*));
    __result118__ = (_Bool)0;
    return __result118__;
}

char* sModNode_kind(){
void* __result_obj__;
void* right_value185;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value185 = (void*)0;
    __result119__ = __result_obj__ = ((char*)(right_value185=__builtin_string("sModNode")));
    right_value185 = come_decrement_ref_count2(right_value185, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_107;
_Bool _if_conditional192;
_Bool __result120__;
void* right_value186;
struct CVALUE* left_value_108;
struct sNode* right_node_109;
_Bool _if_conditional193;
_Bool __result121__;
void* right_value187;
struct CVALUE* right_value_110;
struct sType* type_111;
char* fun_name_112;
_Bool calling_fun_113;
_Bool _if_conditional194;
_Bool _if_conditional195;
void* right_value188;
struct CVALUE* come_value_114;
void* right_value189;
char* __dec_obj81;
void* right_value190;
struct sType* __dec_obj82;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_107, 0, sizeof(struct sNode*));
right_value186 = (void*)0;
memset(&left_value_108, 0, sizeof(struct CVALUE*));
memset(&right_node_109, 0, sizeof(struct sNode*));
right_value187 = (void*)0;
memset(&right_value_110, 0, sizeof(struct CVALUE*));
memset(&type_111, 0, sizeof(struct sType*));
memset(&fun_name_112, 0, sizeof(char*));
memset(&calling_fun_113, 0, sizeof(_Bool));
right_value188 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value189 = (void*)0;
right_value190 = (void*)0;
    left_node_107=self->mLeft;
    if(_if_conditional192=!node_compile(left_node_107,info),    _if_conditional192) {
        __result120__ = (_Bool)0;
        return __result120__;
    }
    left_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value186=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value186, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_109=self->mRight;
    if(_if_conditional193=!node_compile(right_node_109,info),    _if_conditional193) {
        __result121__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result121__;
    }
    right_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value187=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value187, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_111=(struct sType*)come_increment_ref_count(left_value_108->type);
    fun_name_112="operator_mod";
    if(self->mQuote) {
        calling_fun_113=(_Bool)0;
    }
    else {
        calling_fun_113=operator_overload_fun(type_111,fun_name_112,left_value_108,right_value_110,info);
    }
    if(_if_conditional195=!calling_fun_113,    _if_conditional195) {
        come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 664, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj81=come_value_114->c_value;
        come_value_114->c_value=(char*)come_increment_ref_count(((char*)(right_value189=xsprintf("%s%%%s",left_value_108->c_value,right_value_110->c_value))));
        __dec_obj81 = come_decrement_ref_count2(__dec_obj81, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value189 = come_decrement_ref_count2(right_value189, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj82=come_value_114->type;
        come_value_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value190=sType_clone(left_value_108->type))));
        come_call_finalizer2(sType_finalize,__dec_obj82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_114->type->mHeap=(_Bool)0;
        come_value_114->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_114->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_114));
        come_call_finalizer2(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result122__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result122__;
    come_call_finalizer2(CVALUE_finalize,left_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_110, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_111, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sModNode_sline(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
int __result123__;
memset(&__result_obj__, 0, sizeof(void*));
    __result123__ = self->sline;
    return __result123__;
}

char* sModNode_sname(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value191;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value191 = (void*)0;
    __result124__ = __result_obj__ = ((char*)(right_value191=__builtin_string(self->sname)));
    right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result124__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value192;
char* __dec_obj83;
void* right_value193;
struct sNode* __dec_obj84;
void* right_value194;
struct sNode* __dec_obj85;
struct sLShiftNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value192 = (void*)0;
right_value193 = (void*)0;
right_value194 = (void*)0;
    self->sline=info->sline;
    __dec_obj83=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value192=__builtin_string(info->sname))));
    __dec_obj83 = come_decrement_ref_count2(__dec_obj83, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value192 = come_decrement_ref_count2(right_value192, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj84=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value193=sNode_clone(left))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count2(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value193) { right_value193 = come_decrement_ref_count2(right_value193, ((struct sNode*)right_value193)->finalize, ((struct sNode*)right_value193)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj85=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value194=sNode_clone(right))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value194) { right_value194 = come_decrement_ref_count2(right_value194, ((struct sNode*)right_value194)->finalize, ((struct sNode*)right_value194)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result125__ = __result_obj__ = self;
    come_call_finalizer2(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result125__;
    come_call_finalizer2(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLShiftNode_terminated(){
void* __result_obj__;
_Bool __result126__;
memset(&__result_obj__, 0, sizeof(void*));
    __result126__ = (_Bool)0;
    return __result126__;
}

char* sLShiftNode_kind(){
void* __result_obj__;
void* right_value195;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value195 = (void*)0;
    __result127__ = __result_obj__ = ((char*)(right_value195=__builtin_string("sLShiftNode")));
    right_value195 = come_decrement_ref_count2(right_value195, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_115;
_Bool _if_conditional199;
_Bool __result128__;
void* right_value196;
struct CVALUE* left_value_116;
struct sNode* right_node_117;
_Bool _if_conditional200;
_Bool __result129__;
void* right_value197;
struct CVALUE* right_value_118;
struct sType* type_119;
char* fun_name_120;
_Bool calling_fun_121;
_Bool _if_conditional201;
_Bool _if_conditional202;
void* right_value198;
struct CVALUE* come_value_122;
void* right_value199;
char* __dec_obj86;
void* right_value200;
struct sType* __dec_obj87;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_115, 0, sizeof(struct sNode*));
right_value196 = (void*)0;
memset(&left_value_116, 0, sizeof(struct CVALUE*));
memset(&right_node_117, 0, sizeof(struct sNode*));
right_value197 = (void*)0;
memset(&right_value_118, 0, sizeof(struct CVALUE*));
memset(&type_119, 0, sizeof(struct sType*));
memset(&fun_name_120, 0, sizeof(char*));
memset(&calling_fun_121, 0, sizeof(_Bool));
right_value198 = (void*)0;
memset(&come_value_122, 0, sizeof(struct CVALUE*));
right_value199 = (void*)0;
right_value200 = (void*)0;
    left_node_115=self->mLeft;
    if(_if_conditional199=!node_compile(left_node_115,info),    _if_conditional199) {
        __result128__ = (_Bool)0;
        return __result128__;
    }
    left_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value196=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value196, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_117=self->mRight;
    if(_if_conditional200=!node_compile(right_node_117,info),    _if_conditional200) {
        __result129__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result129__;
    }
    right_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value197=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value197, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_119=(struct sType*)come_increment_ref_count(left_value_116->type);
    fun_name_120="operator_lshift";
    if(self->mQuote) {
        calling_fun_121=(_Bool)0;
    }
    else {
        calling_fun_121=operator_overload_fun(type_119,fun_name_120,left_value_116,right_value_118,info);
    }
    if(_if_conditional202=!calling_fun_121,    _if_conditional202) {
        come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 755, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj86=come_value_122->c_value;
        come_value_122->c_value=(char*)come_increment_ref_count(((char*)(right_value199=xsprintf("%s<<%s",left_value_116->c_value,right_value_118->c_value))));
        __dec_obj86 = come_decrement_ref_count2(__dec_obj86, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value199 = come_decrement_ref_count2(right_value199, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj87=come_value_122->type;
        come_value_122->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value200=sType_clone(left_value_116->type))));
        come_call_finalizer2(sType_finalize,__dec_obj87, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_122->type->mHeap=(_Bool)0;
        come_value_122->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_122->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_122));
        come_call_finalizer2(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result130__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result130__;
    come_call_finalizer2(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_119, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
int __result131__;
memset(&__result_obj__, 0, sizeof(void*));
    __result131__ = self->sline;
    return __result131__;
}

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value201;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value201 = (void*)0;
    __result132__ = __result_obj__ = ((char*)(right_value201=__builtin_string(self->sname)));
    right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value202;
char* __dec_obj88;
void* right_value203;
struct sNode* __dec_obj89;
void* right_value204;
struct sNode* __dec_obj90;
struct sRShiftNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value202 = (void*)0;
right_value203 = (void*)0;
right_value204 = (void*)0;
    self->sline=info->sline;
    __dec_obj88=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value202=__builtin_string(info->sname))));
    __dec_obj88 = come_decrement_ref_count2(__dec_obj88, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value202 = come_decrement_ref_count2(right_value202, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj89=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value203=sNode_clone(left))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count2(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value203) { right_value203 = come_decrement_ref_count2(right_value203, ((struct sNode*)right_value203)->finalize, ((struct sNode*)right_value203)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj90=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value204=sNode_clone(right))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value204) { right_value204 = come_decrement_ref_count2(right_value204, ((struct sNode*)right_value204)->finalize, ((struct sNode*)right_value204)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result133__ = __result_obj__ = self;
    come_call_finalizer2(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result133__;
    come_call_finalizer2(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sRShiftNode_terminated(){
void* __result_obj__;
_Bool __result134__;
memset(&__result_obj__, 0, sizeof(void*));
    __result134__ = (_Bool)0;
    return __result134__;
}

char* sRShiftNode_kind(){
void* __result_obj__;
void* right_value205;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value205 = (void*)0;
    __result135__ = __result_obj__ = ((char*)(right_value205=__builtin_string("sRShiftNode")));
    right_value205 = come_decrement_ref_count2(right_value205, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_123;
_Bool _if_conditional206;
_Bool __result136__;
void* right_value206;
struct CVALUE* left_value_124;
struct sNode* right_node_125;
_Bool _if_conditional207;
_Bool __result137__;
void* right_value207;
struct CVALUE* right_value_126;
struct sType* type_127;
char* fun_name_128;
_Bool calling_fun_129;
_Bool _if_conditional208;
_Bool _if_conditional209;
void* right_value208;
struct CVALUE* come_value_130;
void* right_value209;
char* __dec_obj91;
void* right_value210;
struct sType* __dec_obj92;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_123, 0, sizeof(struct sNode*));
right_value206 = (void*)0;
memset(&left_value_124, 0, sizeof(struct CVALUE*));
memset(&right_node_125, 0, sizeof(struct sNode*));
right_value207 = (void*)0;
memset(&right_value_126, 0, sizeof(struct CVALUE*));
memset(&type_127, 0, sizeof(struct sType*));
memset(&fun_name_128, 0, sizeof(char*));
memset(&calling_fun_129, 0, sizeof(_Bool));
right_value208 = (void*)0;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
right_value209 = (void*)0;
right_value210 = (void*)0;
    left_node_123=self->mLeft;
    if(_if_conditional206=!node_compile(left_node_123,info),    _if_conditional206) {
        __result136__ = (_Bool)0;
        return __result136__;
    }
    left_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value206=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value206, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_125=self->mRight;
    if(_if_conditional207=!node_compile(right_node_125,info),    _if_conditional207) {
        __result137__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result137__;
    }
    right_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value207=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value207, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_127=(struct sType*)come_increment_ref_count(left_value_124->type);
    fun_name_128="operator_rshift";
    if(self->mQuote) {
        calling_fun_129=(_Bool)0;
    }
    else {
        calling_fun_129=operator_overload_fun(type_127,fun_name_128,left_value_124,right_value_126,info);
    }
    if(_if_conditional209=!calling_fun_129,    _if_conditional209) {
        come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 846, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj91=come_value_130->c_value;
        come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value209=xsprintf("%s>>%s",left_value_124->c_value,right_value_126->c_value))));
        __dec_obj91 = come_decrement_ref_count2(__dec_obj91, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value209 = come_decrement_ref_count2(right_value209, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj92=come_value_130->type;
        come_value_130->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value210=sType_clone(left_value_124->type))));
        come_call_finalizer2(sType_finalize,__dec_obj92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_130->type->mHeap=(_Bool)0;
        come_value_130->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_130->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
        come_call_finalizer2(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result138__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result138__;
    come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_126, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
int __result139__;
memset(&__result_obj__, 0, sizeof(void*));
    __result139__ = self->sline;
    return __result139__;
}

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value211;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value211 = (void*)0;
    __result140__ = __result_obj__ = ((char*)(right_value211=__builtin_string(self->sname)));
    right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value212;
char* __dec_obj93;
void* right_value213;
struct sNode* __dec_obj94;
void* right_value214;
struct sNode* __dec_obj95;
struct sGtEqNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value212 = (void*)0;
right_value213 = (void*)0;
right_value214 = (void*)0;
    self->sline=info->sline;
    __dec_obj93=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value212=__builtin_string(info->sname))));
    __dec_obj93 = come_decrement_ref_count2(__dec_obj93, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value212 = come_decrement_ref_count2(right_value212, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj94=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value213=sNode_clone(left))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count2(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value213) { right_value213 = come_decrement_ref_count2(right_value213, ((struct sNode*)right_value213)->finalize, ((struct sNode*)right_value213)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj95=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value214=sNode_clone(right))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value214) { right_value214 = come_decrement_ref_count2(right_value214, ((struct sNode*)right_value214)->finalize, ((struct sNode*)right_value214)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result141__ = __result_obj__ = self;
    come_call_finalizer2(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result141__;
    come_call_finalizer2(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGtEqNode_terminated(){
void* __result_obj__;
_Bool __result142__;
memset(&__result_obj__, 0, sizeof(void*));
    __result142__ = (_Bool)0;
    return __result142__;
}

char* sGtEqNode_kind(){
void* __result_obj__;
void* right_value215;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value215 = (void*)0;
    __result143__ = __result_obj__ = ((char*)(right_value215=__builtin_string("sGtEqNode")));
    right_value215 = come_decrement_ref_count2(right_value215, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_131;
_Bool _if_conditional213;
_Bool __result144__;
void* right_value216;
struct CVALUE* left_value_132;
struct sNode* right_node_133;
_Bool _if_conditional214;
_Bool __result145__;
void* right_value217;
struct CVALUE* right_value_134;
struct sType* type_135;
char* fun_name_136;
_Bool calling_fun_137;
_Bool _if_conditional215;
_Bool _if_conditional216;
void* right_value218;
struct CVALUE* come_value_138;
void* right_value219;
char* __dec_obj96;
void* right_value220;
struct sType* __dec_obj97;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_131, 0, sizeof(struct sNode*));
right_value216 = (void*)0;
memset(&left_value_132, 0, sizeof(struct CVALUE*));
memset(&right_node_133, 0, sizeof(struct sNode*));
right_value217 = (void*)0;
memset(&right_value_134, 0, sizeof(struct CVALUE*));
memset(&type_135, 0, sizeof(struct sType*));
memset(&fun_name_136, 0, sizeof(char*));
memset(&calling_fun_137, 0, sizeof(_Bool));
right_value218 = (void*)0;
memset(&come_value_138, 0, sizeof(struct CVALUE*));
right_value219 = (void*)0;
right_value220 = (void*)0;
    left_node_131=self->mLeft;
    if(_if_conditional213=!node_compile(left_node_131,info),    _if_conditional213) {
        __result144__ = (_Bool)0;
        return __result144__;
    }
    left_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value216=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value216, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_133=self->mRight;
    if(_if_conditional214=!node_compile(right_node_133,info),    _if_conditional214) {
        __result145__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result145__;
    }
    right_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value217=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value217, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_135=(struct sType*)come_increment_ref_count(left_value_132->type);
    fun_name_136="operator_gteq";
    if(self->mQuote) {
        calling_fun_137=(_Bool)0;
    }
    else {
        calling_fun_137=operator_overload_fun(type_135,fun_name_136,left_value_132,right_value_134,info);
    }
    if(_if_conditional216=!calling_fun_137,    _if_conditional216) {
        come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 937, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj96=come_value_138->c_value;
        come_value_138->c_value=(char*)come_increment_ref_count(((char*)(right_value219=xsprintf("%s>=%s",left_value_132->c_value,right_value_134->c_value))));
        __dec_obj96 = come_decrement_ref_count2(__dec_obj96, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value219 = come_decrement_ref_count2(right_value219, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj97=come_value_138->type;
        come_value_138->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value220=sType_clone(left_value_132->type))));
        come_call_finalizer2(sType_finalize,__dec_obj97, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_138->type->mHeap=(_Bool)0;
        come_value_138->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_138->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
        come_call_finalizer2(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result146__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result146__;
    come_call_finalizer2(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_134, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_135, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
    __result147__ = self->sline;
    return __result147__;
}

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value221;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value221 = (void*)0;
    __result148__ = __result_obj__ = ((char*)(right_value221=__builtin_string(self->sname)));
    right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result148__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value222;
char* __dec_obj98;
void* right_value223;
struct sNode* __dec_obj99;
void* right_value224;
struct sNode* __dec_obj100;
struct sLtEqNode* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value222 = (void*)0;
right_value223 = (void*)0;
right_value224 = (void*)0;
    self->sline=info->sline;
    __dec_obj98=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value222=__builtin_string(info->sname))));
    __dec_obj98 = come_decrement_ref_count2(__dec_obj98, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value222 = come_decrement_ref_count2(right_value222, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj99=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value223=sNode_clone(left))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count2(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value223) { right_value223 = come_decrement_ref_count2(right_value223, ((struct sNode*)right_value223)->finalize, ((struct sNode*)right_value223)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj100=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value224=sNode_clone(right))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value224) { right_value224 = come_decrement_ref_count2(right_value224, ((struct sNode*)right_value224)->finalize, ((struct sNode*)right_value224)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result149__ = __result_obj__ = self;
    come_call_finalizer2(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result149__;
    come_call_finalizer2(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLtEqNode_terminated(){
void* __result_obj__;
_Bool __result150__;
memset(&__result_obj__, 0, sizeof(void*));
    __result150__ = (_Bool)0;
    return __result150__;
}

char* sLtEqNode_kind(){
void* __result_obj__;
void* right_value225;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value225 = (void*)0;
    __result151__ = __result_obj__ = ((char*)(right_value225=__builtin_string("sLtEqNode")));
    right_value225 = come_decrement_ref_count2(right_value225, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_139;
_Bool _if_conditional220;
_Bool __result152__;
void* right_value226;
struct CVALUE* left_value_140;
struct sNode* right_node_141;
_Bool _if_conditional221;
_Bool __result153__;
void* right_value227;
struct CVALUE* right_value_142;
struct sType* type_143;
char* fun_name_144;
_Bool calling_fun_145;
_Bool _if_conditional222;
_Bool _if_conditional223;
void* right_value228;
struct CVALUE* come_value_146;
void* right_value229;
char* __dec_obj101;
void* right_value230;
struct sType* __dec_obj102;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_139, 0, sizeof(struct sNode*));
right_value226 = (void*)0;
memset(&left_value_140, 0, sizeof(struct CVALUE*));
memset(&right_node_141, 0, sizeof(struct sNode*));
right_value227 = (void*)0;
memset(&right_value_142, 0, sizeof(struct CVALUE*));
memset(&type_143, 0, sizeof(struct sType*));
memset(&fun_name_144, 0, sizeof(char*));
memset(&calling_fun_145, 0, sizeof(_Bool));
right_value228 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
right_value229 = (void*)0;
right_value230 = (void*)0;
    left_node_139=self->mLeft;
    if(_if_conditional220=!node_compile(left_node_139,info),    _if_conditional220) {
        __result152__ = (_Bool)0;
        return __result152__;
    }
    left_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value226=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value226, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_141=self->mRight;
    if(_if_conditional221=!node_compile(right_node_141,info),    _if_conditional221) {
        __result153__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result153__;
    }
    right_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value227=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value227, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_143=(struct sType*)come_increment_ref_count(left_value_140->type);
    fun_name_144="operator_lteq";
    if(self->mQuote) {
        calling_fun_145=(_Bool)0;
    }
    else {
        calling_fun_145=operator_overload_fun(type_143,fun_name_144,left_value_140,right_value_142,info);
    }
    if(_if_conditional223=!calling_fun_145,    _if_conditional223) {
        come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1028, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj101=come_value_146->c_value;
        come_value_146->c_value=(char*)come_increment_ref_count(((char*)(right_value229=xsprintf("%s<=%s",left_value_140->c_value,right_value_142->c_value))));
        __dec_obj101 = come_decrement_ref_count2(__dec_obj101, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value229 = come_decrement_ref_count2(right_value229, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj102=come_value_146->type;
        come_value_146->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value230=sType_clone(left_value_140->type))));
        come_call_finalizer2(sType_finalize,__dec_obj102, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_146->type->mHeap=(_Bool)0;
        come_value_146->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_146->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_146));
        come_call_finalizer2(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result154__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result154__;
    come_call_finalizer2(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result155__;
memset(&__result_obj__, 0, sizeof(void*));
    __result155__ = self->sline;
    return __result155__;
}

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value231;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value231 = (void*)0;
    __result156__ = __result_obj__ = ((char*)(right_value231=__builtin_string(self->sname)));
    right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result156__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value232;
char* __dec_obj103;
void* right_value233;
struct sNode* __dec_obj104;
void* right_value234;
struct sNode* __dec_obj105;
struct sLtNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value232 = (void*)0;
right_value233 = (void*)0;
right_value234 = (void*)0;
    self->sline=info->sline;
    __dec_obj103=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value232=__builtin_string(info->sname))));
    __dec_obj103 = come_decrement_ref_count2(__dec_obj103, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value232 = come_decrement_ref_count2(right_value232, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj104=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value233=sNode_clone(left))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count2(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value233) { right_value233 = come_decrement_ref_count2(right_value233, ((struct sNode*)right_value233)->finalize, ((struct sNode*)right_value233)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj105=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value234=sNode_clone(right))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value234) { right_value234 = come_decrement_ref_count2(right_value234, ((struct sNode*)right_value234)->finalize, ((struct sNode*)right_value234)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result157__ = __result_obj__ = self;
    come_call_finalizer2(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result157__;
    come_call_finalizer2(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sLtNode_terminated(){
void* __result_obj__;
_Bool __result158__;
memset(&__result_obj__, 0, sizeof(void*));
    __result158__ = (_Bool)0;
    return __result158__;
}

char* sLtNode_kind(){
void* __result_obj__;
void* right_value235;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value235 = (void*)0;
    __result159__ = __result_obj__ = ((char*)(right_value235=__builtin_string("sLtNode")));
    right_value235 = come_decrement_ref_count2(right_value235, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_147;
_Bool _if_conditional227;
_Bool __result160__;
void* right_value236;
struct CVALUE* left_value_148;
struct sNode* right_node_149;
_Bool _if_conditional228;
_Bool __result161__;
void* right_value237;
struct CVALUE* right_value_150;
struct sType* type_151;
char* fun_name_152;
_Bool calling_fun_153;
_Bool _if_conditional229;
_Bool _if_conditional230;
void* right_value238;
struct CVALUE* come_value_154;
void* right_value239;
char* __dec_obj106;
void* right_value240;
struct sType* __dec_obj107;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_147, 0, sizeof(struct sNode*));
right_value236 = (void*)0;
memset(&left_value_148, 0, sizeof(struct CVALUE*));
memset(&right_node_149, 0, sizeof(struct sNode*));
right_value237 = (void*)0;
memset(&right_value_150, 0, sizeof(struct CVALUE*));
memset(&type_151, 0, sizeof(struct sType*));
memset(&fun_name_152, 0, sizeof(char*));
memset(&calling_fun_153, 0, sizeof(_Bool));
right_value238 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
right_value239 = (void*)0;
right_value240 = (void*)0;
    left_node_147=self->mLeft;
    if(_if_conditional227=!node_compile(left_node_147,info),    _if_conditional227) {
        __result160__ = (_Bool)0;
        return __result160__;
    }
    left_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value236=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_149=self->mRight;
    if(_if_conditional228=!node_compile(right_node_149,info),    _if_conditional228) {
        __result161__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result161__;
    }
    right_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value237=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value237, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_151=(struct sType*)come_increment_ref_count(left_value_148->type);
    fun_name_152="operator_lt";
    if(self->mQuote) {
        calling_fun_153=(_Bool)0;
    }
    else {
        calling_fun_153=operator_overload_fun(type_151,fun_name_152,left_value_148,right_value_150,info);
    }
    if(_if_conditional230=!calling_fun_153,    _if_conditional230) {
        come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1119, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj106=come_value_154->c_value;
        come_value_154->c_value=(char*)come_increment_ref_count(((char*)(right_value239=xsprintf("%s<%s",left_value_148->c_value,right_value_150->c_value))));
        __dec_obj106 = come_decrement_ref_count2(__dec_obj106, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value239 = come_decrement_ref_count2(right_value239, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj107=come_value_154->type;
        come_value_154->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value240=sType_clone(left_value_148->type))));
        come_call_finalizer2(sType_finalize,__dec_obj107, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_154->type->mHeap=(_Bool)0;
        come_value_154->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_154->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
        come_call_finalizer2(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result162__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result162__;
    come_call_finalizer2(CVALUE_finalize,left_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_150, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_151, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sLtNode_sline(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
int __result163__;
memset(&__result_obj__, 0, sizeof(void*));
    __result163__ = self->sline;
    return __result163__;
}

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value241;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value241 = (void*)0;
    __result164__ = __result_obj__ = ((char*)(right_value241=__builtin_string(self->sname)));
    right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value242;
char* __dec_obj108;
void* right_value243;
struct sNode* __dec_obj109;
void* right_value244;
struct sNode* __dec_obj110;
struct sGtNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value242 = (void*)0;
right_value243 = (void*)0;
right_value244 = (void*)0;
    self->sline=info->sline;
    __dec_obj108=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value242=__builtin_string(info->sname))));
    __dec_obj108 = come_decrement_ref_count2(__dec_obj108, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value242 = come_decrement_ref_count2(right_value242, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj109=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value243=sNode_clone(left))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count2(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value243) { right_value243 = come_decrement_ref_count2(right_value243, ((struct sNode*)right_value243)->finalize, ((struct sNode*)right_value243)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj110=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value244=sNode_clone(right))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value244) { right_value244 = come_decrement_ref_count2(right_value244, ((struct sNode*)right_value244)->finalize, ((struct sNode*)right_value244)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result165__ = __result_obj__ = self;
    come_call_finalizer2(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result165__;
    come_call_finalizer2(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sGtNode_terminated(){
void* __result_obj__;
_Bool __result166__;
memset(&__result_obj__, 0, sizeof(void*));
    __result166__ = (_Bool)0;
    return __result166__;
}

char* sGtNode_kind(){
void* __result_obj__;
void* right_value245;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value245 = (void*)0;
    __result167__ = __result_obj__ = ((char*)(right_value245=__builtin_string("sGtNode")));
    right_value245 = come_decrement_ref_count2(right_value245, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_155;
_Bool _if_conditional234;
_Bool __result168__;
void* right_value246;
struct CVALUE* left_value_156;
struct sNode* right_node_157;
_Bool _if_conditional235;
_Bool __result169__;
void* right_value247;
struct CVALUE* right_value_158;
struct sType* type_159;
char* fun_name_160;
_Bool calling_fun_161;
_Bool _if_conditional236;
_Bool _if_conditional237;
void* right_value248;
struct CVALUE* come_value_162;
void* right_value249;
char* __dec_obj111;
void* right_value250;
struct sType* __dec_obj112;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_155, 0, sizeof(struct sNode*));
right_value246 = (void*)0;
memset(&left_value_156, 0, sizeof(struct CVALUE*));
memset(&right_node_157, 0, sizeof(struct sNode*));
right_value247 = (void*)0;
memset(&right_value_158, 0, sizeof(struct CVALUE*));
memset(&type_159, 0, sizeof(struct sType*));
memset(&fun_name_160, 0, sizeof(char*));
memset(&calling_fun_161, 0, sizeof(_Bool));
right_value248 = (void*)0;
memset(&come_value_162, 0, sizeof(struct CVALUE*));
right_value249 = (void*)0;
right_value250 = (void*)0;
    left_node_155=self->mLeft;
    if(_if_conditional234=!node_compile(left_node_155,info),    _if_conditional234) {
        __result168__ = (_Bool)0;
        return __result168__;
    }
    left_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value246=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value246, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_157=self->mRight;
    if(_if_conditional235=!node_compile(right_node_157,info),    _if_conditional235) {
        __result169__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result169__;
    }
    right_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value247=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value247, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_159=(struct sType*)come_increment_ref_count(left_value_156->type);
    fun_name_160="operator_gt";
    if(self->mQuote) {
        calling_fun_161=(_Bool)0;
    }
    else {
        calling_fun_161=operator_overload_fun(type_159,fun_name_160,left_value_156,right_value_158,info);
    }
    if(_if_conditional237=!calling_fun_161,    _if_conditional237) {
        come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1210, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj111=come_value_162->c_value;
        come_value_162->c_value=(char*)come_increment_ref_count(((char*)(right_value249=xsprintf("%s>%s",left_value_156->c_value,right_value_158->c_value))));
        __dec_obj111 = come_decrement_ref_count2(__dec_obj111, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value249 = come_decrement_ref_count2(right_value249, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj112=come_value_162->type;
        come_value_162->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value250=sType_clone(left_value_156->type))));
        come_call_finalizer2(sType_finalize,__dec_obj112, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_162->type->mHeap=(_Bool)0;
        come_value_162->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_162->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_162));
        come_call_finalizer2(CVALUE_finalize,come_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result170__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result170__;
    come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_159, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sGtNode_sline(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
int __result171__;
memset(&__result_obj__, 0, sizeof(void*));
    __result171__ = self->sline;
    return __result171__;
}

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value251;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value251 = (void*)0;
    __result172__ = __result_obj__ = ((char*)(right_value251=__builtin_string(self->sname)));
    right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result172__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value252;
char* __dec_obj113;
void* right_value253;
struct sNode* __dec_obj114;
void* right_value254;
struct sNode* __dec_obj115;
struct sEqNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value252 = (void*)0;
right_value253 = (void*)0;
right_value254 = (void*)0;
    self->sline=info->sline;
    __dec_obj113=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value252=__builtin_string(info->sname))));
    __dec_obj113 = come_decrement_ref_count2(__dec_obj113, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value252 = come_decrement_ref_count2(right_value252, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj114=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value253=sNode_clone(left))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count2(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value253) { right_value253 = come_decrement_ref_count2(right_value253, ((struct sNode*)right_value253)->finalize, ((struct sNode*)right_value253)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj115=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value254=sNode_clone(right))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value254) { right_value254 = come_decrement_ref_count2(right_value254, ((struct sNode*)right_value254)->finalize, ((struct sNode*)right_value254)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result173__ = __result_obj__ = self;
    come_call_finalizer2(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result173__;
    come_call_finalizer2(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

int sEqNode_sline(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result174__;
memset(&__result_obj__, 0, sizeof(void*));
    __result174__ = self->sline;
    return __result174__;
}

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value255;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value255 = (void*)0;
    __result175__ = __result_obj__ = ((char*)(right_value255=__builtin_string(self->sname)));
    right_value255 = come_decrement_ref_count2(right_value255, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result175__;
}

_Bool sEqNode_terminated(){
void* __result_obj__;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    __result176__ = (_Bool)0;
    return __result176__;
}

char* sEqNode_kind(){
void* __result_obj__;
void* right_value256;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value256 = (void*)0;
    __result177__ = __result_obj__ = ((char*)(right_value256=__builtin_string("sEqNode")));
    right_value256 = come_decrement_ref_count2(right_value256, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result177__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_163;
_Bool _if_conditional241;
_Bool __result178__;
void* right_value257;
struct CVALUE* left_value_164;
struct sNode* right_node_165;
_Bool _if_conditional242;
_Bool __result179__;
void* right_value258;
struct CVALUE* right_value_166;
void* right_value259;
struct CVALUE* come_value_167;
void* right_value260;
char* __dec_obj116;
void* right_value261;
struct sType* __dec_obj117;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_163, 0, sizeof(struct sNode*));
right_value257 = (void*)0;
memset(&left_value_164, 0, sizeof(struct CVALUE*));
memset(&right_node_165, 0, sizeof(struct sNode*));
right_value258 = (void*)0;
memset(&right_value_166, 0, sizeof(struct CVALUE*));
right_value259 = (void*)0;
memset(&come_value_167, 0, sizeof(struct CVALUE*));
right_value260 = (void*)0;
right_value261 = (void*)0;
    left_node_163=self->mLeft;
    if(_if_conditional241=!node_compile(left_node_163,info),    _if_conditional241) {
        __result178__ = (_Bool)0;
        return __result178__;
    }
    left_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value257=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value257, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_165=self->mRight;
    if(_if_conditional242=!node_compile(right_node_165,info),    _if_conditional242) {
        __result179__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result179__;
    }
    right_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value258=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value258, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1299, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj116=come_value_167->c_value;
    come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value260=xsprintf("%s==%s",left_value_164->c_value,right_value_166->c_value))));
    __dec_obj116 = come_decrement_ref_count2(__dec_obj116, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value260 = come_decrement_ref_count2(right_value260, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj117=come_value_167->type;
    come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value261=sType_clone(left_value_164->type))));
    come_call_finalizer2(sType_finalize,__dec_obj117, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_167->type->mHeap=(_Bool)0;
    come_value_167->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_167->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
    __result180__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result180__;
    come_call_finalizer2(CVALUE_finalize,left_value_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_166, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_167, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value262;
char* __dec_obj118;
void* right_value263;
struct sNode* __dec_obj119;
void* right_value264;
struct sNode* __dec_obj120;
struct sNotEqNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value262 = (void*)0;
right_value263 = (void*)0;
right_value264 = (void*)0;
    self->sline=info->sline;
    __dec_obj118=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value262=__builtin_string(info->sname))));
    __dec_obj118 = come_decrement_ref_count2(__dec_obj118, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj119=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value263=sNode_clone(left))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count2(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value263) { right_value263 = come_decrement_ref_count2(right_value263, ((struct sNode*)right_value263)->finalize, ((struct sNode*)right_value263)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj120=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value264=sNode_clone(right))));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value264) { right_value264 = come_decrement_ref_count2(right_value264, ((struct sNode*)right_value264)->finalize, ((struct sNode*)right_value264)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result181__ = __result_obj__ = self;
    come_call_finalizer2(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result181__;
    come_call_finalizer2(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sNotEqNode_terminated(){
void* __result_obj__;
_Bool __result182__;
memset(&__result_obj__, 0, sizeof(void*));
    __result182__ = (_Bool)0;
    return __result182__;
}

char* sNotEqNode_kind(){
void* __result_obj__;
void* right_value265;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value265 = (void*)0;
    __result183__ = __result_obj__ = ((char*)(right_value265=__builtin_string("sNotEqNode")));
    right_value265 = come_decrement_ref_count2(right_value265, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result183__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_168;
_Bool _if_conditional246;
_Bool __result184__;
void* right_value266;
struct CVALUE* left_value_169;
struct sNode* right_node_170;
_Bool _if_conditional247;
_Bool __result185__;
void* right_value267;
struct CVALUE* right_value_171;
void* right_value268;
struct CVALUE* come_value_172;
void* right_value269;
char* __dec_obj121;
void* right_value270;
struct sType* __dec_obj122;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_168, 0, sizeof(struct sNode*));
right_value266 = (void*)0;
memset(&left_value_169, 0, sizeof(struct CVALUE*));
memset(&right_node_170, 0, sizeof(struct sNode*));
right_value267 = (void*)0;
memset(&right_value_171, 0, sizeof(struct CVALUE*));
right_value268 = (void*)0;
memset(&come_value_172, 0, sizeof(struct CVALUE*));
right_value269 = (void*)0;
right_value270 = (void*)0;
    left_node_168=self->mLeft;
    if(_if_conditional246=!node_compile(left_node_168,info),    _if_conditional246) {
        __result184__ = (_Bool)0;
        return __result184__;
    }
    left_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value266=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value266, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_170=self->mRight;
    if(_if_conditional247=!node_compile(right_node_170,info),    _if_conditional247) {
        __result185__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result185__;
    }
    right_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value267=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value267, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value268=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1367, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj121=come_value_172->c_value;
    come_value_172->c_value=(char*)come_increment_ref_count(((char*)(right_value269=xsprintf("%s!=%s",left_value_169->c_value,right_value_171->c_value))));
    __dec_obj121 = come_decrement_ref_count2(__dec_obj121, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value269 = come_decrement_ref_count2(right_value269, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj122=come_value_172->type;
    come_value_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value270=sType_clone(left_value_169->type))));
    come_call_finalizer2(sType_finalize,__dec_obj122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_172->type->mHeap=(_Bool)0;
    come_value_172->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_172->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
    __result186__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result186__;
    come_call_finalizer2(CVALUE_finalize,left_value_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_171, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_172, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
int __result187__;
memset(&__result_obj__, 0, sizeof(void*));
    __result187__ = self->sline;
    return __result187__;
}

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value271;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value271 = (void*)0;
    __result188__ = __result_obj__ = ((char*)(right_value271=__builtin_string(self->sname)));
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result188__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value272;
char* __dec_obj123;
void* right_value273;
struct sNode* __dec_obj124;
void* right_value274;
struct sNode* __dec_obj125;
struct sEq2Node* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value272 = (void*)0;
right_value273 = (void*)0;
right_value274 = (void*)0;
    self->sline=info->sline;
    __dec_obj123=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value272=__builtin_string(info->sname))));
    __dec_obj123 = come_decrement_ref_count2(__dec_obj123, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value272 = come_decrement_ref_count2(right_value272, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj124=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value273=sNode_clone(left))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count2(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value273) { right_value273 = come_decrement_ref_count2(right_value273, ((struct sNode*)right_value273)->finalize, ((struct sNode*)right_value273)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj125=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value274=sNode_clone(right))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value274) { right_value274 = come_decrement_ref_count2(right_value274, ((struct sNode*)right_value274)->finalize, ((struct sNode*)right_value274)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result189__ = __result_obj__ = self;
    come_call_finalizer2(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result189__;
    come_call_finalizer2(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sEq2Node_terminated(){
void* __result_obj__;
_Bool __result190__;
memset(&__result_obj__, 0, sizeof(void*));
    __result190__ = (_Bool)0;
    return __result190__;
}

char* sEq2Node_kind(){
void* __result_obj__;
void* right_value275;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value275 = (void*)0;
    __result191__ = __result_obj__ = ((char*)(right_value275=__builtin_string("sEq2Node")));
    right_value275 = come_decrement_ref_count2(right_value275, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result191__;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_173;
_Bool _if_conditional251;
_Bool __result192__;
void* right_value276;
struct CVALUE* left_value_174;
struct sNode* right_node_175;
_Bool _if_conditional252;
_Bool __result193__;
void* right_value277;
struct CVALUE* right_value_176;
struct sType* type_177;
char* fun_name_178;
_Bool calling_fun_179;
_Bool _if_conditional253;
_Bool _if_conditional254;
void* right_value278;
struct CVALUE* come_value_180;
void* right_value279;
char* __dec_obj126;
void* right_value280;
struct sType* __dec_obj127;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_173, 0, sizeof(struct sNode*));
right_value276 = (void*)0;
memset(&left_value_174, 0, sizeof(struct CVALUE*));
memset(&right_node_175, 0, sizeof(struct sNode*));
right_value277 = (void*)0;
memset(&right_value_176, 0, sizeof(struct CVALUE*));
memset(&type_177, 0, sizeof(struct sType*));
memset(&fun_name_178, 0, sizeof(char*));
memset(&calling_fun_179, 0, sizeof(_Bool));
right_value278 = (void*)0;
memset(&come_value_180, 0, sizeof(struct CVALUE*));
right_value279 = (void*)0;
right_value280 = (void*)0;
    left_node_173=self->mLeft;
    if(_if_conditional251=!node_compile(left_node_173,info),    _if_conditional251) {
        __result192__ = (_Bool)0;
        return __result192__;
    }
    left_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value276=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value276, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_175=self->mRight;
    if(_if_conditional252=!node_compile(right_node_175,info),    _if_conditional252) {
        __result193__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result193__;
    }
    right_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value277=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value277, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_177=(struct sType*)come_increment_ref_count(left_value_174->type);
    fun_name_178="operator_equals";
    if(self->mQuote) {
        calling_fun_179=(_Bool)0;
    }
    else {
        calling_fun_179=operator_overload_fun(type_177,fun_name_178,left_value_174,right_value_176,info);
    }
    if(_if_conditional254=!calling_fun_179,    _if_conditional254) {
        come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1458, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj126=come_value_180->c_value;
        come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value279=xsprintf("%s==%s",left_value_174->c_value,right_value_176->c_value))));
        __dec_obj126 = come_decrement_ref_count2(__dec_obj126, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value279 = come_decrement_ref_count2(right_value279, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj127=come_value_180->type;
        come_value_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value280=sType_clone(left_value_174->type))));
        come_call_finalizer2(sType_finalize,__dec_obj127, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_180->type->mHeap=(_Bool)0;
        come_value_180->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_180->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
        come_call_finalizer2(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result194__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result194__;
    come_call_finalizer2(CVALUE_finalize,left_value_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_176, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_177, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
int __result195__;
memset(&__result_obj__, 0, sizeof(void*));
    __result195__ = self->sline;
    return __result195__;
}

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
void* right_value281;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value281 = (void*)0;
    __result196__ = __result_obj__ = ((char*)(right_value281=__builtin_string(self->sname)));
    right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result196__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value282;
char* __dec_obj128;
void* right_value283;
struct sNode* __dec_obj129;
void* right_value284;
struct sNode* __dec_obj130;
struct sNotEq2Node* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value282 = (void*)0;
right_value283 = (void*)0;
right_value284 = (void*)0;
    self->sline=info->sline;
    __dec_obj128=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value282=__builtin_string(info->sname))));
    __dec_obj128 = come_decrement_ref_count2(__dec_obj128, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value282 = come_decrement_ref_count2(right_value282, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj129=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value283=sNode_clone(left))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count2(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value283) { right_value283 = come_decrement_ref_count2(right_value283, ((struct sNode*)right_value283)->finalize, ((struct sNode*)right_value283)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj130=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value284=sNode_clone(right))));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value284) { right_value284 = come_decrement_ref_count2(right_value284, ((struct sNode*)right_value284)->finalize, ((struct sNode*)right_value284)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result197__ = __result_obj__ = self;
    come_call_finalizer2(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result197__;
    come_call_finalizer2(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sNotEq2Node_terminated(){
void* __result_obj__;
_Bool __result198__;
memset(&__result_obj__, 0, sizeof(void*));
    __result198__ = (_Bool)0;
    return __result198__;
}

char* sNotEq2Node_kind(){
void* __result_obj__;
void* right_value285;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value285 = (void*)0;
    __result199__ = __result_obj__ = ((char*)(right_value285=__builtin_string("sNotEq2Node")));
    right_value285 = come_decrement_ref_count2(right_value285, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result199__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_181;
_Bool _if_conditional258;
_Bool __result200__;
void* right_value286;
struct CVALUE* left_value_182;
struct sNode* right_node_183;
_Bool _if_conditional259;
_Bool __result201__;
void* right_value287;
struct CVALUE* right_value_184;
struct sType* type_185;
char* fun_name_186;
_Bool calling_fun_187;
_Bool _if_conditional260;
_Bool _if_conditional261;
void* right_value288;
struct CVALUE* come_value_188;
void* right_value289;
char* __dec_obj131;
void* right_value290;
struct sType* __dec_obj132;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_181, 0, sizeof(struct sNode*));
right_value286 = (void*)0;
memset(&left_value_182, 0, sizeof(struct CVALUE*));
memset(&right_node_183, 0, sizeof(struct sNode*));
right_value287 = (void*)0;
memset(&right_value_184, 0, sizeof(struct CVALUE*));
memset(&type_185, 0, sizeof(struct sType*));
memset(&fun_name_186, 0, sizeof(char*));
memset(&calling_fun_187, 0, sizeof(_Bool));
right_value288 = (void*)0;
memset(&come_value_188, 0, sizeof(struct CVALUE*));
right_value289 = (void*)0;
right_value290 = (void*)0;
    left_node_181=self->mLeft;
    if(_if_conditional258=!node_compile(left_node_181,info),    _if_conditional258) {
        __result200__ = (_Bool)0;
        return __result200__;
    }
    left_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value286=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value286, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_183=self->mRight;
    if(_if_conditional259=!node_compile(right_node_183,info),    _if_conditional259) {
        __result201__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result201__;
    }
    right_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value287=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value287, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_185=(struct sType*)come_increment_ref_count(left_value_182->type);
    fun_name_186="operator_not_equals";
    if(self->mQuote) {
        calling_fun_187=(_Bool)0;
    }
    else {
        calling_fun_187=operator_overload_fun(type_185,fun_name_186,left_value_182,right_value_184,info);
    }
    if(_if_conditional261=!calling_fun_187,    _if_conditional261) {
        come_value_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1549, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj131=come_value_188->c_value;
        come_value_188->c_value=(char*)come_increment_ref_count(((char*)(right_value289=xsprintf("%s!=%s",left_value_182->c_value,right_value_184->c_value))));
        __dec_obj131 = come_decrement_ref_count2(__dec_obj131, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value289 = come_decrement_ref_count2(right_value289, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj132=come_value_188->type;
        come_value_188->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value290=sType_clone(left_value_182->type))));
        come_call_finalizer2(sType_finalize,__dec_obj132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_188->type->mHeap=(_Bool)0;
        come_value_188->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_188->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_188));
        come_call_finalizer2(CVALUE_finalize,come_value_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result202__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result202__;
    come_call_finalizer2(CVALUE_finalize,left_value_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_184, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_185, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
int __result203__;
memset(&__result_obj__, 0, sizeof(void*));
    __result203__ = self->sline;
    return __result203__;
}

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
void* right_value291;
char* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value291 = (void*)0;
    __result204__ = __result_obj__ = ((char*)(right_value291=__builtin_string(self->sname)));
    right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result204__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value292;
char* __dec_obj133;
void* right_value293;
struct sNode* __dec_obj134;
void* right_value294;
struct sNode* __dec_obj135;
struct sAndNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value292 = (void*)0;
right_value293 = (void*)0;
right_value294 = (void*)0;
    self->sline=info->sline;
    __dec_obj133=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value292=__builtin_string(info->sname))));
    __dec_obj133 = come_decrement_ref_count2(__dec_obj133, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value292 = come_decrement_ref_count2(right_value292, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj134=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value293=sNode_clone(left))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count2(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value293) { right_value293 = come_decrement_ref_count2(right_value293, ((struct sNode*)right_value293)->finalize, ((struct sNode*)right_value293)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj135=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value294=sNode_clone(right))));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value294) { right_value294 = come_decrement_ref_count2(right_value294, ((struct sNode*)right_value294)->finalize, ((struct sNode*)right_value294)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result205__ = __result_obj__ = self;
    come_call_finalizer2(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result205__;
    come_call_finalizer2(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndNode_terminated(){
void* __result_obj__;
_Bool __result206__;
memset(&__result_obj__, 0, sizeof(void*));
    __result206__ = (_Bool)0;
    return __result206__;
}

char* sAndNode_kind(){
void* __result_obj__;
void* right_value295;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value295 = (void*)0;
    __result207__ = __result_obj__ = ((char*)(right_value295=__builtin_string("sAndNode")));
    right_value295 = come_decrement_ref_count2(right_value295, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result207__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_189;
_Bool _if_conditional265;
_Bool __result208__;
void* right_value296;
struct CVALUE* left_value_190;
struct sNode* right_node_191;
_Bool _if_conditional266;
_Bool __result209__;
void* right_value297;
struct CVALUE* right_value_192;
struct sType* type_193;
char* fun_name_194;
_Bool calling_fun_195;
_Bool _if_conditional267;
_Bool _if_conditional268;
void* right_value298;
struct CVALUE* come_value_196;
void* right_value299;
char* __dec_obj136;
void* right_value300;
struct sType* __dec_obj137;
_Bool __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_189, 0, sizeof(struct sNode*));
right_value296 = (void*)0;
memset(&left_value_190, 0, sizeof(struct CVALUE*));
memset(&right_node_191, 0, sizeof(struct sNode*));
right_value297 = (void*)0;
memset(&right_value_192, 0, sizeof(struct CVALUE*));
memset(&type_193, 0, sizeof(struct sType*));
memset(&fun_name_194, 0, sizeof(char*));
memset(&calling_fun_195, 0, sizeof(_Bool));
right_value298 = (void*)0;
memset(&come_value_196, 0, sizeof(struct CVALUE*));
right_value299 = (void*)0;
right_value300 = (void*)0;
    left_node_189=self->mLeft;
    if(_if_conditional265=!node_compile(left_node_189,info),    _if_conditional265) {
        __result208__ = (_Bool)0;
        return __result208__;
    }
    left_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value296=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value296, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_191=self->mRight;
    if(_if_conditional266=!node_compile(right_node_191,info),    _if_conditional266) {
        __result209__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result209__;
    }
    right_value_192=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value297=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value297, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_193=(struct sType*)come_increment_ref_count(left_value_190->type);
    fun_name_194="operator_and";
    if(self->mQuote) {
        calling_fun_195=(_Bool)0;
    }
    else {
        calling_fun_195=operator_overload_fun(type_193,fun_name_194,left_value_190,right_value_192,info);
    }
    if(_if_conditional268=!calling_fun_195,    _if_conditional268) {
        come_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1641, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj136=come_value_196->c_value;
        come_value_196->c_value=(char*)come_increment_ref_count(((char*)(right_value299=xsprintf("%s&%s",left_value_190->c_value,right_value_192->c_value))));
        __dec_obj136 = come_decrement_ref_count2(__dec_obj136, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value299 = come_decrement_ref_count2(right_value299, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj137=come_value_196->type;
        come_value_196->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value300=sType_clone(left_value_190->type))));
        come_call_finalizer2(sType_finalize,__dec_obj137, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_196->type->mHeap=(_Bool)0;
        come_value_196->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_196->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
        come_call_finalizer2(CVALUE_finalize,come_value_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result210__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result210__;
    come_call_finalizer2(CVALUE_finalize,left_value_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_192, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_193, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndNode_sline(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
int __result211__;
memset(&__result_obj__, 0, sizeof(void*));
    __result211__ = self->sline;
    return __result211__;
}

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value301;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value301 = (void*)0;
    __result212__ = __result_obj__ = ((char*)(right_value301=__builtin_string(self->sname)));
    right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result212__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value302;
char* __dec_obj138;
void* right_value303;
struct sNode* __dec_obj139;
void* right_value304;
struct sNode* __dec_obj140;
struct sXOrNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value302 = (void*)0;
right_value303 = (void*)0;
right_value304 = (void*)0;
    self->sline=info->sline;
    __dec_obj138=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value302=__builtin_string(info->sname))));
    __dec_obj138 = come_decrement_ref_count2(__dec_obj138, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value302 = come_decrement_ref_count2(right_value302, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj139=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value303=sNode_clone(left))));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count2(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value303) { right_value303 = come_decrement_ref_count2(right_value303, ((struct sNode*)right_value303)->finalize, ((struct sNode*)right_value303)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj140=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value304=sNode_clone(right))));
    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value304) { right_value304 = come_decrement_ref_count2(right_value304, ((struct sNode*)right_value304)->finalize, ((struct sNode*)right_value304)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result213__ = __result_obj__ = self;
    come_call_finalizer2(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result213__;
    come_call_finalizer2(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sXOrNode_terminated(){
void* __result_obj__;
_Bool __result214__;
memset(&__result_obj__, 0, sizeof(void*));
    __result214__ = (_Bool)0;
    return __result214__;
}

char* sXOrNode_kind(){
void* __result_obj__;
void* right_value305;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value305 = (void*)0;
    __result215__ = __result_obj__ = ((char*)(right_value305=__builtin_string("sXOrNode")));
    right_value305 = come_decrement_ref_count2(right_value305, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result215__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_197;
_Bool _if_conditional272;
_Bool __result216__;
void* right_value306;
struct CVALUE* left_value_198;
struct sNode* right_node_199;
_Bool _if_conditional273;
_Bool __result217__;
void* right_value307;
struct CVALUE* right_value_200;
struct sType* type_201;
char* fun_name_202;
_Bool calling_fun_203;
_Bool _if_conditional274;
_Bool _if_conditional275;
void* right_value308;
struct CVALUE* come_value_204;
void* right_value309;
char* __dec_obj141;
void* right_value310;
struct sType* __dec_obj142;
_Bool __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_197, 0, sizeof(struct sNode*));
right_value306 = (void*)0;
memset(&left_value_198, 0, sizeof(struct CVALUE*));
memset(&right_node_199, 0, sizeof(struct sNode*));
right_value307 = (void*)0;
memset(&right_value_200, 0, sizeof(struct CVALUE*));
memset(&type_201, 0, sizeof(struct sType*));
memset(&fun_name_202, 0, sizeof(char*));
memset(&calling_fun_203, 0, sizeof(_Bool));
right_value308 = (void*)0;
memset(&come_value_204, 0, sizeof(struct CVALUE*));
right_value309 = (void*)0;
right_value310 = (void*)0;
    left_node_197=self->mLeft;
    if(_if_conditional272=!node_compile(left_node_197,info),    _if_conditional272) {
        __result216__ = (_Bool)0;
        return __result216__;
    }
    left_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value306=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value306, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_199=self->mRight;
    if(_if_conditional273=!node_compile(right_node_199,info),    _if_conditional273) {
        __result217__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result217__;
    }
    right_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value307=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value307, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_201=(struct sType*)come_increment_ref_count(left_value_198->type);
    fun_name_202="operator_xor";
    if(self->mQuote) {
        calling_fun_203=(_Bool)0;
    }
    else {
        calling_fun_203=operator_overload_fun(type_201,fun_name_202,left_value_198,right_value_200,info);
    }
    if(_if_conditional275=!calling_fun_203,    _if_conditional275) {
        come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value308=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1732, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj141=come_value_204->c_value;
        come_value_204->c_value=(char*)come_increment_ref_count(((char*)(right_value309=xsprintf("%s^%s",left_value_198->c_value,right_value_200->c_value))));
        __dec_obj141 = come_decrement_ref_count2(__dec_obj141, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value309 = come_decrement_ref_count2(right_value309, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj142=come_value_204->type;
        come_value_204->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value310=sType_clone(left_value_198->type))));
        come_call_finalizer2(sType_finalize,__dec_obj142, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_204->type->mHeap=(_Bool)0;
        come_value_204->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_204->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_204));
        come_call_finalizer2(CVALUE_finalize,come_value_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result218__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result218__;
    come_call_finalizer2(CVALUE_finalize,left_value_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_200, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_201, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
int __result219__;
memset(&__result_obj__, 0, sizeof(void*));
    __result219__ = self->sline;
    return __result219__;
}

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value311;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
right_value311 = (void*)0;
    __result220__ = __result_obj__ = ((char*)(right_value311=__builtin_string(self->sname)));
    right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result220__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value312;
char* __dec_obj143;
void* right_value313;
struct sNode* __dec_obj144;
void* right_value314;
struct sNode* __dec_obj145;
struct sOrNode* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value312 = (void*)0;
right_value313 = (void*)0;
right_value314 = (void*)0;
    self->sline=info->sline;
    __dec_obj143=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value312=__builtin_string(info->sname))));
    __dec_obj143 = come_decrement_ref_count2(__dec_obj143, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value312 = come_decrement_ref_count2(right_value312, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj144=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value313=sNode_clone(left))));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count2(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value313) { right_value313 = come_decrement_ref_count2(right_value313, ((struct sNode*)right_value313)->finalize, ((struct sNode*)right_value313)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj145=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value314=sNode_clone(right))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value314) { right_value314 = come_decrement_ref_count2(right_value314, ((struct sNode*)right_value314)->finalize, ((struct sNode*)right_value314)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result221__ = __result_obj__ = self;
    come_call_finalizer2(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result221__;
    come_call_finalizer2(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrNode_terminated(){
void* __result_obj__;
_Bool __result222__;
memset(&__result_obj__, 0, sizeof(void*));
    __result222__ = (_Bool)0;
    return __result222__;
}

char* sOrNode_kind(){
void* __result_obj__;
void* right_value315;
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
right_value315 = (void*)0;
    __result223__ = __result_obj__ = ((char*)(right_value315=__builtin_string("sOrNode")));
    right_value315 = come_decrement_ref_count2(right_value315, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result223__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_205;
_Bool _if_conditional279;
_Bool __result224__;
void* right_value316;
struct CVALUE* left_value_206;
struct sNode* right_node_207;
_Bool _if_conditional280;
_Bool __result225__;
void* right_value317;
struct CVALUE* right_value_208;
struct sType* type_209;
char* fun_name_210;
_Bool calling_fun_211;
_Bool _if_conditional281;
_Bool _if_conditional282;
void* right_value318;
struct CVALUE* come_value_212;
void* right_value319;
char* __dec_obj146;
void* right_value320;
struct sType* __dec_obj147;
_Bool __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_205, 0, sizeof(struct sNode*));
right_value316 = (void*)0;
memset(&left_value_206, 0, sizeof(struct CVALUE*));
memset(&right_node_207, 0, sizeof(struct sNode*));
right_value317 = (void*)0;
memset(&right_value_208, 0, sizeof(struct CVALUE*));
memset(&type_209, 0, sizeof(struct sType*));
memset(&fun_name_210, 0, sizeof(char*));
memset(&calling_fun_211, 0, sizeof(_Bool));
right_value318 = (void*)0;
memset(&come_value_212, 0, sizeof(struct CVALUE*));
right_value319 = (void*)0;
right_value320 = (void*)0;
    left_node_205=self->mLeft;
    if(_if_conditional279=!node_compile(left_node_205,info),    _if_conditional279) {
        __result224__ = (_Bool)0;
        return __result224__;
    }
    left_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value316=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value316, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_207=self->mRight;
    if(_if_conditional280=!node_compile(right_node_207,info),    _if_conditional280) {
        __result225__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result225__;
    }
    right_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value317=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value317, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_209=(struct sType*)come_increment_ref_count(left_value_206->type);
    fun_name_210="operator_or";
    if(self->mQuote) {
        calling_fun_211=(_Bool)0;
    }
    else {
        calling_fun_211=operator_overload_fun(type_209,fun_name_210,left_value_206,right_value_208,info);
    }
    if(_if_conditional282=!calling_fun_211,    _if_conditional282) {
        come_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1823, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj146=come_value_212->c_value;
        come_value_212->c_value=(char*)come_increment_ref_count(((char*)(right_value319=xsprintf("%s|%s",left_value_206->c_value,right_value_208->c_value))));
        __dec_obj146 = come_decrement_ref_count2(__dec_obj146, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value319 = come_decrement_ref_count2(right_value319, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj147=come_value_212->type;
        come_value_212->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value320=sType_clone(left_value_206->type))));
        come_call_finalizer2(sType_finalize,__dec_obj147, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_212->type->mHeap=(_Bool)0;
        come_value_212->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_212->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_212));
        come_call_finalizer2(CVALUE_finalize,come_value_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result226__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result226__;
    come_call_finalizer2(CVALUE_finalize,left_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_208, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_209, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrNode_sline(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
int __result227__;
memset(&__result_obj__, 0, sizeof(void*));
    __result227__ = self->sline;
    return __result227__;
}

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value321;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value321 = (void*)0;
    __result228__ = __result_obj__ = ((char*)(right_value321=__builtin_string(self->sname)));
    right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result228__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value322;
char* __dec_obj148;
void* right_value323;
struct sNode* __dec_obj149;
void* right_value324;
struct sNode* __dec_obj150;
struct sAndAndNode* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
right_value322 = (void*)0;
right_value323 = (void*)0;
right_value324 = (void*)0;
    self->sline=info->sline;
    __dec_obj148=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value322=__builtin_string(info->sname))));
    __dec_obj148 = come_decrement_ref_count2(__dec_obj148, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value322 = come_decrement_ref_count2(right_value322, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj149=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value323=sNode_clone(left))));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count2(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value323) { right_value323 = come_decrement_ref_count2(right_value323, ((struct sNode*)right_value323)->finalize, ((struct sNode*)right_value323)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj150=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value324=sNode_clone(right))));
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value324) { right_value324 = come_decrement_ref_count2(right_value324, ((struct sNode*)right_value324)->finalize, ((struct sNode*)right_value324)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result229__ = __result_obj__ = self;
    come_call_finalizer2(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result229__;
    come_call_finalizer2(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sAndAndNode_terminated(){
void* __result_obj__;
_Bool __result230__;
memset(&__result_obj__, 0, sizeof(void*));
    __result230__ = (_Bool)0;
    return __result230__;
}

char* sAndAndNode_kind(){
void* __result_obj__;
void* right_value325;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
right_value325 = (void*)0;
    __result231__ = __result_obj__ = ((char*)(right_value325=__builtin_string("sAndAndNode")));
    right_value325 = come_decrement_ref_count2(right_value325, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result231__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_213;
_Bool _if_conditional286;
_Bool __result232__;
void* right_value326;
struct CVALUE* left_value_214;
struct sNode* right_node_215;
_Bool _if_conditional287;
_Bool __result233__;
void* right_value327;
struct CVALUE* right_value_216;
struct sType* type_217;
char* fun_name_218;
_Bool calling_fun_219;
_Bool _if_conditional288;
_Bool _if_conditional289;
void* right_value328;
struct CVALUE* come_value_220;
void* right_value329;
char* __dec_obj151;
void* right_value330;
struct sType* __dec_obj152;
_Bool __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_213, 0, sizeof(struct sNode*));
right_value326 = (void*)0;
memset(&left_value_214, 0, sizeof(struct CVALUE*));
memset(&right_node_215, 0, sizeof(struct sNode*));
right_value327 = (void*)0;
memset(&right_value_216, 0, sizeof(struct CVALUE*));
memset(&type_217, 0, sizeof(struct sType*));
memset(&fun_name_218, 0, sizeof(char*));
memset(&calling_fun_219, 0, sizeof(_Bool));
right_value328 = (void*)0;
memset(&come_value_220, 0, sizeof(struct CVALUE*));
right_value329 = (void*)0;
right_value330 = (void*)0;
    left_node_213=self->mLeft;
    if(_if_conditional286=!node_compile(left_node_213,info),    _if_conditional286) {
        __result232__ = (_Bool)0;
        return __result232__;
    }
    left_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value326=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_215=self->mRight;
    if(_if_conditional287=!node_compile(right_node_215,info),    _if_conditional287) {
        __result233__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result233__;
    }
    right_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value327=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value327, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_217=(struct sType*)come_increment_ref_count(left_value_214->type);
    fun_name_218="operator_andand";
    if(self->mQuote) {
        calling_fun_219=(_Bool)0;
    }
    else {
        calling_fun_219=operator_overload_fun(type_217,fun_name_218,left_value_214,right_value_216,info);
    }
    if(_if_conditional289=!calling_fun_219,    _if_conditional289) {
        come_value_220=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value328=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1914, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj151=come_value_220->c_value;
        come_value_220->c_value=(char*)come_increment_ref_count(((char*)(right_value329=xsprintf("%s&&%s",left_value_214->c_value,right_value_216->c_value))));
        __dec_obj151 = come_decrement_ref_count2(__dec_obj151, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value329 = come_decrement_ref_count2(right_value329, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj152=come_value_220->type;
        come_value_220->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value330=sType_clone(left_value_214->type))));
        come_call_finalizer2(sType_finalize,__dec_obj152, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_220->type->mHeap=(_Bool)0;
        come_value_220->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_220->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_220));
        come_call_finalizer2(CVALUE_finalize,come_value_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result234__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result234__;
    come_call_finalizer2(CVALUE_finalize,left_value_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_216, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_217, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
int __result235__;
memset(&__result_obj__, 0, sizeof(void*));
    __result235__ = self->sline;
    return __result235__;
}

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value331;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value331 = (void*)0;
    __result236__ = __result_obj__ = ((char*)(right_value331=__builtin_string(self->sname)));
    right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result236__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value332;
char* __dec_obj153;
void* right_value333;
struct sNode* __dec_obj154;
void* right_value334;
struct sNode* __dec_obj155;
struct sOrOrNode* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
right_value332 = (void*)0;
right_value333 = (void*)0;
right_value334 = (void*)0;
    self->sline=info->sline;
    __dec_obj153=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value332=__builtin_string(info->sname))));
    __dec_obj153 = come_decrement_ref_count2(__dec_obj153, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value332 = come_decrement_ref_count2(right_value332, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    self->mQuote=quote;
    __dec_obj154=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value333=sNode_clone(left))));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count2(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value333) { right_value333 = come_decrement_ref_count2(right_value333, ((struct sNode*)right_value333)->finalize, ((struct sNode*)right_value333)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj155=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value334=sNode_clone(right))));
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value334) { right_value334 = come_decrement_ref_count2(right_value334, ((struct sNode*)right_value334)->finalize, ((struct sNode*)right_value334)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result237__ = __result_obj__ = self;
    come_call_finalizer2(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result237__;
    come_call_finalizer2(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sOrOrNode_terminated(){
void* __result_obj__;
_Bool __result238__;
memset(&__result_obj__, 0, sizeof(void*));
    __result238__ = (_Bool)0;
    return __result238__;
}

char* sOrOrNode_kind(){
void* __result_obj__;
void* right_value335;
char* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
right_value335 = (void*)0;
    __result239__ = __result_obj__ = ((char*)(right_value335=__builtin_string("sOrOrNode")));
    right_value335 = come_decrement_ref_count2(right_value335, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result239__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_221;
_Bool _if_conditional293;
_Bool __result240__;
void* right_value336;
struct CVALUE* left_value_222;
struct sNode* right_node_223;
_Bool _if_conditional294;
_Bool __result241__;
void* right_value337;
struct CVALUE* right_value_224;
struct sType* type_225;
char* fun_name_226;
_Bool calling_fun_227;
_Bool _if_conditional295;
_Bool _if_conditional296;
void* right_value338;
struct CVALUE* come_value_228;
void* right_value339;
char* __dec_obj156;
void* right_value340;
struct sType* __dec_obj157;
_Bool __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_221, 0, sizeof(struct sNode*));
right_value336 = (void*)0;
memset(&left_value_222, 0, sizeof(struct CVALUE*));
memset(&right_node_223, 0, sizeof(struct sNode*));
right_value337 = (void*)0;
memset(&right_value_224, 0, sizeof(struct CVALUE*));
memset(&type_225, 0, sizeof(struct sType*));
memset(&fun_name_226, 0, sizeof(char*));
memset(&calling_fun_227, 0, sizeof(_Bool));
right_value338 = (void*)0;
memset(&come_value_228, 0, sizeof(struct CVALUE*));
right_value339 = (void*)0;
right_value340 = (void*)0;
    left_node_221=self->mLeft;
    if(_if_conditional293=!node_compile(left_node_221,info),    _if_conditional293) {
        __result240__ = (_Bool)0;
        return __result240__;
    }
    left_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value336=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value336, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_223=self->mRight;
    if(_if_conditional294=!node_compile(right_node_223,info),    _if_conditional294) {
        __result241__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result241__;
    }
    right_value_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value337=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    type_225=(struct sType*)come_increment_ref_count(left_value_222->type);
    fun_name_226="operator_oror";
    if(self->mQuote) {
        calling_fun_227=(_Bool)0;
    }
    else {
        calling_fun_227=operator_overload_fun(type_225,fun_name_226,left_value_222,right_value_224,info);
    }
    if(_if_conditional296=!calling_fun_227,    _if_conditional296) {
        come_value_228=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value338=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2004, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        __dec_obj156=come_value_228->c_value;
        come_value_228->c_value=(char*)come_increment_ref_count(((char*)(right_value339=xsprintf("%s||%s",left_value_222->c_value,right_value_224->c_value))));
        __dec_obj156 = come_decrement_ref_count2(__dec_obj156, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value339 = come_decrement_ref_count2(right_value339, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        __dec_obj157=come_value_228->type;
        come_value_228->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value340=sType_clone(left_value_222->type))));
        come_call_finalizer2(sType_finalize,__dec_obj157, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_value_228->type->mHeap=(_Bool)0;
        come_value_228->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_228->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_228));
        come_call_finalizer2(CVALUE_finalize,come_value_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    __result242__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result242__;
    come_call_finalizer2(CVALUE_finalize,left_value_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_224, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,type_225, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
int __result243__;
memset(&__result_obj__, 0, sizeof(void*));
    __result243__ = self->sline;
    return __result243__;
}

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value341;
char* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value341 = (void*)0;
    __result244__ = __result_obj__ = ((char*)(right_value341=__builtin_string(self->sname)));
    right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result244__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
void* right_value342;
char* __dec_obj158;
void* right_value343;
struct sNode* __dec_obj159;
void* right_value344;
struct sNode* __dec_obj160;
struct sCommaNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
right_value342 = (void*)0;
right_value343 = (void*)0;
right_value344 = (void*)0;
    self->sline=info->sline;
    __dec_obj158=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value342=__builtin_string(info->sname))));
    __dec_obj158 = come_decrement_ref_count2(__dec_obj158, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value342 = come_decrement_ref_count2(right_value342, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj159=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value343=sNode_clone(left))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count2(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value343) { right_value343 = come_decrement_ref_count2(right_value343, ((struct sNode*)right_value343)->finalize, ((struct sNode*)right_value343)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj160=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value344=sNode_clone(right))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value344) { right_value344 = come_decrement_ref_count2(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result245__ = __result_obj__ = self;
    come_call_finalizer2(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result245__;
    come_call_finalizer2(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(left) { left = come_decrement_ref_count2(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(right) { right = come_decrement_ref_count2(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sCommaNode_terminated(){
void* __result_obj__;
_Bool __result246__;
memset(&__result_obj__, 0, sizeof(void*));
    __result246__ = (_Bool)0;
    return __result246__;
}

char* sCommaNode_kind(){
void* __result_obj__;
void* right_value345;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value345 = (void*)0;
    __result247__ = __result_obj__ = ((char*)(right_value345=__builtin_string("sCommaNode")));
    right_value345 = come_decrement_ref_count2(right_value345, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result247__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_229;
_Bool _if_conditional300;
_Bool __result248__;
void* right_value346;
struct CVALUE* left_value_230;
struct sNode* right_node_231;
_Bool _if_conditional301;
_Bool __result249__;
void* right_value347;
struct CVALUE* right_value_232;
void* right_value348;
struct CVALUE* come_value_233;
void* right_value349;
char* __dec_obj161;
void* right_value350;
struct sType* __dec_obj162;
_Bool __result250__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_229, 0, sizeof(struct sNode*));
right_value346 = (void*)0;
memset(&left_value_230, 0, sizeof(struct CVALUE*));
memset(&right_node_231, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
memset(&right_value_232, 0, sizeof(struct CVALUE*));
right_value348 = (void*)0;
memset(&come_value_233, 0, sizeof(struct CVALUE*));
right_value349 = (void*)0;
right_value350 = (void*)0;
    left_node_229=self->mLeft;
    if(_if_conditional300=!node_compile(left_node_229,info),    _if_conditional300) {
        __result248__ = (_Bool)0;
        return __result248__;
    }
    left_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value346=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    right_node_231=self->mRight;
    if(_if_conditional301=!node_compile(right_node_231,info),    _if_conditional301) {
        __result249__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result249__;
    }
    right_value_232=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value347=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value348=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2081, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj161=come_value_233->c_value;
    come_value_233->c_value=(char*)come_increment_ref_count(((char*)(right_value349=xsprintf("%s,%s",left_value_230->c_value,right_value_232->c_value))));
    __dec_obj161 = come_decrement_ref_count2(__dec_obj161, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value349 = come_decrement_ref_count2(right_value349, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj162=come_value_233->type;
    come_value_233->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value350=sType_clone(left_value_230->type))));
    come_call_finalizer2(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_233->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_233->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_233));
    __result250__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,left_value_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result250__;
    come_call_finalizer2(CVALUE_finalize,left_value_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,right_value_232, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_233, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
int __result251__;
memset(&__result_obj__, 0, sizeof(void*));
    __result251__ = self->sline;
    return __result251__;
}

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value351;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value351 = (void*)0;
    __result252__ = __result_obj__ = ((char*)(right_value351=__builtin_string(self->sname)));
    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
void* right_value352;
char* __dec_obj163;
void* right_value353;
struct sNode* __dec_obj164;
void* right_value354;
struct sNode* __dec_obj165;
void* right_value355;
struct sNode* __dec_obj166;
struct sConditionalNode* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
right_value352 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
right_value355 = (void*)0;
    self->sline=info->sline;
    __dec_obj163=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value352=__builtin_string(info->sname))));
    __dec_obj163 = come_decrement_ref_count2(__dec_obj163, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value352 = come_decrement_ref_count2(right_value352, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj164=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=sNode_clone(value1))));
    if(__dec_obj164) { __dec_obj164 = come_decrement_ref_count2(__dec_obj164, ((struct sNode*)__dec_obj164)->finalize, ((struct sNode*)__dec_obj164)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value353) { right_value353 = come_decrement_ref_count2(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj165=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=sNode_clone(value2))));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value354) { right_value354 = come_decrement_ref_count2(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __dec_obj166=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=sNode_clone(value3))));
    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result253__ = __result_obj__ = self;
    come_call_finalizer2(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result253__;
    come_call_finalizer2(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    if(value1) { value1 = come_decrement_ref_count2(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value2) { value2 = come_decrement_ref_count2(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0, (void*)0); } 
    if(value3) { value3 = come_decrement_ref_count2(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0, (void*)0); } 
}

_Bool sConditionalNode_terminated(){
void* __result_obj__;
_Bool __result254__;
memset(&__result_obj__, 0, sizeof(void*));
    __result254__ = (_Bool)0;
    return __result254__;
}

char* sConditionalNode_kind(){
void* __result_obj__;
void* right_value356;
char* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
right_value356 = (void*)0;
    __result255__ = __result_obj__ = ((char*)(right_value356=__builtin_string("sConditionalNode")));
    right_value356 = come_decrement_ref_count2(right_value356, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result255__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value1_234;
_Bool _if_conditional306;
_Bool __result256__;
void* right_value357;
struct CVALUE* value1_value_235;
struct sNode* value2_236;
_Bool _if_conditional307;
_Bool __result257__;
void* right_value358;
struct CVALUE* value2_value_237;
struct sNode* value3_238;
_Bool _if_conditional308;
_Bool __result258__;
void* right_value359;
struct CVALUE* value3_value_239;
void* right_value360;
struct CVALUE* come_value_240;
void* right_value361;
char* __dec_obj167;
void* right_value362;
struct sType* __dec_obj168;
_Bool __result259__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value1_234, 0, sizeof(struct sNode*));
right_value357 = (void*)0;
memset(&value1_value_235, 0, sizeof(struct CVALUE*));
memset(&value2_236, 0, sizeof(struct sNode*));
right_value358 = (void*)0;
memset(&value2_value_237, 0, sizeof(struct CVALUE*));
memset(&value3_238, 0, sizeof(struct sNode*));
right_value359 = (void*)0;
memset(&value3_value_239, 0, sizeof(struct CVALUE*));
right_value360 = (void*)0;
memset(&come_value_240, 0, sizeof(struct CVALUE*));
right_value361 = (void*)0;
right_value362 = (void*)0;
    value1_234=self->mValue1;
    if(_if_conditional306=!node_compile(value1_234,info),    _if_conditional306) {
        __result256__ = (_Bool)0;
        return __result256__;
    }
    value1_value_235=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value357=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    value2_236=self->mValue2;
    if(_if_conditional307=!node_compile(value2_236,info),    _if_conditional307) {
        __result257__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,value1_value_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result257__;
    }
    value2_value_237=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value358=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    value3_238=self->mValue3;
    if(_if_conditional308=!node_compile(value3_238,info),    _if_conditional308) {
        __result258__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,value1_value_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,value2_value_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result258__;
    }
    value3_value_239=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value359=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    dec_stack_ptr(1,info);
    come_value_240=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value360=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2167, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    __dec_obj167=come_value_240->c_value;
    come_value_240->c_value=(char*)come_increment_ref_count(((char*)(right_value361=xsprintf("%s?%s:%s",value1_value_235->c_value,value2_value_237->c_value,value3_value_239->c_value))));
    __dec_obj167 = come_decrement_ref_count2(__dec_obj167, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value361 = come_decrement_ref_count2(right_value361, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    __dec_obj168=come_value_240->type;
    come_value_240->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value362=sType_clone(value1_value_235->type))));
    come_call_finalizer2(sType_finalize,__dec_obj168, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_value_240->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_240->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_240));
    __result259__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,value1_value_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value2_value_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value3_value_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result259__;
    come_call_finalizer2(CVALUE_finalize,value1_value_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value2_value_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,value3_value_239, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(CVALUE_finalize,come_value_240, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
int __result260__;
memset(&__result_obj__, 0, sizeof(void*));
    __result260__ = self->sline;
    return __result260__;
}

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value363;
char* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value363 = (void*)0;
    __result261__ = __result_obj__ = ((char*)(right_value363=__builtin_string(self->sname)));
    right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result261__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
void* right_value364;
struct sNode* node_241;
_Bool _while_condtional10;
_Bool _if_conditional309;
void* right_value365;
struct sNode* right_242;
void* right_value366;
void* right_value367;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* right_value372;
struct sNode* __result264__;
_Bool _if_conditional319;
void* right_value373;
struct sNode* right_244;
void* right_value374;
void* right_value375;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* right_value380;
struct sNode* __result267__;
_Bool _if_conditional329;
void* right_value381;
struct sNode* right_246;
void* right_value382;
void* right_value383;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* right_value388;
struct sNode* __result270__;
_Bool _if_conditional339;
void* right_value389;
struct sNode* right_248;
void* right_value390;
void* right_value391;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* right_value396;
struct sNode* __result273__;
_Bool _if_conditional349;
void* right_value397;
struct sNode* right_250;
void* right_value398;
void* right_value399;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* right_value404;
struct sNode* __result276__;
_Bool _if_conditional359;
void* right_value405;
struct sNode* right_252;
void* right_value406;
void* right_value407;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* right_value412;
struct sNode* __result279__;
struct sNode* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
right_value364 = (void*)0;
memset(&node_241, 0, sizeof(struct sNode*));
right_value365 = (void*)0;
memset(&right_242, 0, sizeof(struct sNode*));
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value372 = (void*)0;
right_value373 = (void*)0;
memset(&right_244, 0, sizeof(struct sNode*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value380 = (void*)0;
right_value381 = (void*)0;
memset(&right_246, 0, sizeof(struct sNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value388 = (void*)0;
right_value389 = (void*)0;
memset(&right_248, 0, sizeof(struct sNode*));
right_value390 = (void*)0;
right_value391 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
memset(&right_250, 0, sizeof(struct sNode*));
right_value398 = (void*)0;
right_value399 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
memset(&right_252, 0, sizeof(struct sNode*));
right_value406 = (void*)0;
right_value407 = (void*)0;
right_value412 = (void*)0;
    node_241=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=expression_node_v99(info))));
    if(right_value364) { right_value364 = come_decrement_ref_count2(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional10=*info->p,    _while_condtional10) {
        if(_if_conditional309=!node_241->terminated(node_241->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional309) {
            info->p++;
            skip_spaces_and_lf(info);
            right_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=mult_exp(info))));
            if(right_value365) { right_value365 = come_decrement_ref_count2(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2203, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sMultNode*)(right_value367=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value366=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2203, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_242),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sMultNode_sline;
            _inf_value3->sname=(void*)sMultNode_sname;
            _inf_value3->terminated=(void*)sMultNode_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result264__ = __result_obj__ = ((struct sNode*)(right_value372=_inf_value3));
            if(right_242) { right_242 = come_decrement_ref_count2(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sMultNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sMultNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value372) { right_value372 = come_decrement_ref_count2(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result264__;
            if(right_242) { right_242 = come_decrement_ref_count2(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional319=*info->p==47&&*(info->p+1)!=61,            _if_conditional319) {
                info->p++;
                skip_spaces_and_lf(info);
                right_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=mult_exp(info))));
                if(right_value373) { right_value373 = come_decrement_ref_count2(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2211, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sDivNode*)(right_value375=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value374=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2211, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_244),(_Bool)0,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDivNode_finalize;
                _inf_value4->clone=(void*)sDivNode_clone;
                _inf_value4->compile=(void*)sDivNode_compile;
                _inf_value4->sline=(void*)sDivNode_sline;
                _inf_value4->sname=(void*)sDivNode_sname;
                _inf_value4->terminated=(void*)sDivNode_terminated;
                _inf_value4->kind=(void*)sDivNode_kind;
                __result267__ = __result_obj__ = ((struct sNode*)(right_value380=_inf_value4));
                if(right_244) { right_244 = come_decrement_ref_count2(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sDivNode_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sDivNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value380) { right_value380 = come_decrement_ref_count2(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result267__;
                if(right_244) { right_244 = come_decrement_ref_count2(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional329=*info->p==37&&*(info->p+1)!=61,                _if_conditional329) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value381=expression_node_v99(info))));
                    if(right_value381) { right_value381 = come_decrement_ref_count2(right_value381, ((struct sNode*)right_value381)->finalize, ((struct sNode*)right_value381)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2219, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sModNode*)(right_value383=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value382=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2219, "sModNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_246),(_Bool)0,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sModNode_finalize;
                    _inf_value5->clone=(void*)sModNode_clone;
                    _inf_value5->compile=(void*)sModNode_compile;
                    _inf_value5->sline=(void*)sModNode_sline;
                    _inf_value5->sname=(void*)sModNode_sname;
                    _inf_value5->terminated=(void*)sModNode_terminated;
                    _inf_value5->kind=(void*)sModNode_kind;
                    __result270__ = __result_obj__ = ((struct sNode*)(right_value388=_inf_value5));
                    if(right_246) { right_246 = come_decrement_ref_count2(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sModNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sModNode_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value388) { right_value388 = come_decrement_ref_count2(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result270__;
                    if(right_246) { right_246 = come_decrement_ref_count2(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional339=!node_241->terminated(node_241->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional339) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value389=mult_exp(info))));
                        if(right_value389) { right_value389 = come_decrement_ref_count2(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2227, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sMultNode*)(right_value391=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value390=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2227, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_248),(_Bool)1,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sMultNode_finalize;
                        _inf_value6->clone=(void*)sMultNode_clone;
                        _inf_value6->compile=(void*)sMultNode_compile;
                        _inf_value6->sline=(void*)sMultNode_sline;
                        _inf_value6->sname=(void*)sMultNode_sname;
                        _inf_value6->terminated=(void*)sMultNode_terminated;
                        _inf_value6->kind=(void*)sMultNode_kind;
                        __result273__ = __result_obj__ = ((struct sNode*)(right_value396=_inf_value6));
                        if(right_248) { right_248 = come_decrement_ref_count2(right_248, ((struct sNode*)right_248)->finalize, ((struct sNode*)right_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sMultNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sMultNode_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result273__;
                        if(right_248) { right_248 = come_decrement_ref_count2(right_248, ((struct sNode*)right_248)->finalize, ((struct sNode*)right_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional349=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional349) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=mult_exp(info))));
                            if(right_value397) { right_value397 = come_decrement_ref_count2(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2235, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sDivNode*)(right_value399=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value398=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2235, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_250),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sDivNode_finalize;
                            _inf_value7->clone=(void*)sDivNode_clone;
                            _inf_value7->compile=(void*)sDivNode_compile;
                            _inf_value7->sline=(void*)sDivNode_sline;
                            _inf_value7->sname=(void*)sDivNode_sname;
                            _inf_value7->terminated=(void*)sDivNode_terminated;
                            _inf_value7->kind=(void*)sDivNode_kind;
                            __result276__ = __result_obj__ = ((struct sNode*)(right_value404=_inf_value7));
                            if(right_250) { right_250 = come_decrement_ref_count2(right_250, ((struct sNode*)right_250)->finalize, ((struct sNode*)right_250)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sDivNode_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sDivNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result276__;
                            if(right_250) { right_250 = come_decrement_ref_count2(right_250, ((struct sNode*)right_250)->finalize, ((struct sNode*)right_250)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional359=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional359) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=expression_node_v99(info))));
                                if(right_value405) { right_value405 = come_decrement_ref_count2(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2243, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sModNode*)(right_value407=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value406=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2243, "sModNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_252),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sModNode_finalize;
                                _inf_value8->clone=(void*)sModNode_clone;
                                _inf_value8->compile=(void*)sModNode_compile;
                                _inf_value8->sline=(void*)sModNode_sline;
                                _inf_value8->sname=(void*)sModNode_sname;
                                _inf_value8->terminated=(void*)sModNode_terminated;
                                _inf_value8->kind=(void*)sModNode_kind;
                                __result279__ = __result_obj__ = ((struct sNode*)(right_value412=_inf_value8));
                                if(right_252) { right_252 = come_decrement_ref_count2(right_252, ((struct sNode*)right_252)->finalize, ((struct sNode*)right_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sModNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sModNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result279__;
                                if(right_252) { right_252 = come_decrement_ref_count2(right_252, ((struct sNode*)right_252)->finalize, ((struct sNode*)right_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result280__ = __result_obj__ = node_241;
    if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result280__;
    if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional342;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional340=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional340) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional341=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional341) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional342=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional342) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional343;
struct sMultNode* __result271__;
void* right_value392;
struct sMultNode* result_249;
_Bool _if_conditional344;
void* right_value393;
struct sNode* __dec_obj178;
_Bool _if_conditional345;
void* right_value394;
struct sNode* __dec_obj179;
_Bool _if_conditional346;
_Bool _if_conditional347;
_Bool _if_conditional348;
void* right_value395;
char* __dec_obj180;
struct sMultNode* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
right_value392 = (void*)0;
memset(&result_249, 0, sizeof(struct sMultNode*));
right_value393 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
                            if(_if_conditional343=self==(void*)0,                            _if_conditional343) {
                                __result271__ = __result_obj__ = (void*)0;
                                return __result271__;
                            }
                            result_249=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value392=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"))));
                            come_call_finalizer2(sMultNode_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional344=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional344) {
                                __dec_obj178=result_249->mLeft;
                                result_249->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value393=sNode_clone(self->mLeft))));
                                if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count2(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value393) { right_value393 = come_decrement_ref_count2(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional345=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional345) {
                                __dec_obj179=result_249->mRight;
                                result_249->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=sNode_clone(self->mRight))));
                                if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value394) { right_value394 = come_decrement_ref_count2(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional346=self!=((void*)0),                            _if_conditional346) {
                                result_249->mQuote=self->mQuote;
                            }
                            if(_if_conditional347=self!=((void*)0),                            _if_conditional347) {
                                result_249->sline=self->sline;
                            }
                            if(_if_conditional348=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional348) {
                                __dec_obj180=result_249->sname;
                                result_249->sname=(char*)come_increment_ref_count(((char*)(right_value395=string_clone(self->sname))));
                                __dec_obj180 = come_decrement_ref_count2(__dec_obj180, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value395 = come_decrement_ref_count2(right_value395, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result272__ = __result_obj__ = result_249;
                            come_call_finalizer2(sMultNode_finalize,result_249, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result272__;
                            come_call_finalizer2(sMultNode_finalize,result_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional350=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional350) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional351=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional351) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional352=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional352) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional353;
struct sDivNode* __result274__;
void* right_value400;
struct sDivNode* result_251;
_Bool _if_conditional354;
void* right_value401;
struct sNode* __dec_obj181;
_Bool _if_conditional355;
void* right_value402;
struct sNode* __dec_obj182;
_Bool _if_conditional356;
_Bool _if_conditional357;
_Bool _if_conditional358;
void* right_value403;
char* __dec_obj183;
struct sDivNode* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
right_value400 = (void*)0;
memset(&result_251, 0, sizeof(struct sDivNode*));
right_value401 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
                                if(_if_conditional353=self==(void*)0,                                _if_conditional353) {
                                    __result274__ = __result_obj__ = (void*)0;
                                    return __result274__;
                                }
                                result_251=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value400=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"))));
                                come_call_finalizer2(sDivNode_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional354=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional354) {
                                    __dec_obj181=result_251->mLeft;
                                    result_251->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value401=sNode_clone(self->mLeft))));
                                    if(__dec_obj181) { __dec_obj181 = come_decrement_ref_count2(__dec_obj181, ((struct sNode*)__dec_obj181)->finalize, ((struct sNode*)__dec_obj181)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value401) { right_value401 = come_decrement_ref_count2(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional355=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional355) {
                                    __dec_obj182=result_251->mRight;
                                    result_251->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=sNode_clone(self->mRight))));
                                    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value402) { right_value402 = come_decrement_ref_count2(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional356=self!=((void*)0),                                _if_conditional356) {
                                    result_251->mQuote=self->mQuote;
                                }
                                if(_if_conditional357=self!=((void*)0),                                _if_conditional357) {
                                    result_251->sline=self->sline;
                                }
                                if(_if_conditional358=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional358) {
                                    __dec_obj183=result_251->sname;
                                    result_251->sname=(char*)come_increment_ref_count(((char*)(right_value403=string_clone(self->sname))));
                                    __dec_obj183 = come_decrement_ref_count2(__dec_obj183, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value403 = come_decrement_ref_count2(right_value403, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result275__ = __result_obj__ = result_251;
                                come_call_finalizer2(sDivNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result275__;
                                come_call_finalizer2(sDivNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional360=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional360) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional361=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional361) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional362) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional363;
struct sModNode* __result277__;
void* right_value408;
struct sModNode* result_253;
_Bool _if_conditional364;
void* right_value409;
struct sNode* __dec_obj184;
_Bool _if_conditional365;
void* right_value410;
struct sNode* __dec_obj185;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value411;
char* __dec_obj186;
struct sModNode* __result278__;
memset(&__result_obj__, 0, sizeof(void*));
right_value408 = (void*)0;
memset(&result_253, 0, sizeof(struct sModNode*));
right_value409 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
                                    if(_if_conditional363=self==(void*)0,                                    _if_conditional363) {
                                        __result277__ = __result_obj__ = (void*)0;
                                        return __result277__;
                                    }
                                    result_253=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value408=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"))));
                                    come_call_finalizer2(sModNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional364=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional364) {
                                        __dec_obj184=result_253->mLeft;
                                        result_253->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=sNode_clone(self->mLeft))));
                                        if(__dec_obj184) { __dec_obj184 = come_decrement_ref_count2(__dec_obj184, ((struct sNode*)__dec_obj184)->finalize, ((struct sNode*)__dec_obj184)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value409) { right_value409 = come_decrement_ref_count2(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional365=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional365) {
                                        __dec_obj185=result_253->mRight;
                                        result_253->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=sNode_clone(self->mRight))));
                                        if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value410) { right_value410 = come_decrement_ref_count2(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional366=self!=((void*)0),                                    _if_conditional366) {
                                        result_253->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional367=self!=((void*)0),                                    _if_conditional367) {
                                        result_253->sline=self->sline;
                                    }
                                    if(_if_conditional368=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional368) {
                                        __dec_obj186=result_253->sname;
                                        result_253->sname=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(self->sname))));
                                        __dec_obj186 = come_decrement_ref_count2(__dec_obj186, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value411 = come_decrement_ref_count2(right_value411, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result278__ = __result_obj__ = result_253;
                                    come_call_finalizer2(sModNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result278__;
                                    come_call_finalizer2(sModNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
void* right_value413;
struct sNode* node_254;
_Bool _while_condtional11;
_Bool _if_conditional369;
void* right_value414;
struct sNode* right_255;
void* right_value415;
void* right_value416;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value421;
struct sNode* __result283__;
_Bool _if_conditional379;
void* right_value422;
struct sNode* right_257;
void* right_value423;
void* right_value424;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value429;
struct sNode* __result286__;
_Bool _if_conditional389;
void* right_value430;
struct sNode* right_259;
void* right_value431;
void* right_value432;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* right_value437;
struct sNode* __result289__;
_Bool _if_conditional399;
void* right_value438;
struct sNode* right_261;
void* right_value439;
void* right_value440;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* right_value445;
struct sNode* __result292__;
struct sNode* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
right_value413 = (void*)0;
memset(&node_254, 0, sizeof(struct sNode*));
right_value414 = (void*)0;
memset(&right_255, 0, sizeof(struct sNode*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value421 = (void*)0;
right_value422 = (void*)0;
memset(&right_257, 0, sizeof(struct sNode*));
right_value423 = (void*)0;
right_value424 = (void*)0;
right_value429 = (void*)0;
right_value430 = (void*)0;
memset(&right_259, 0, sizeof(struct sNode*));
right_value431 = (void*)0;
right_value432 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
memset(&right_261, 0, sizeof(struct sNode*));
right_value439 = (void*)0;
right_value440 = (void*)0;
right_value445 = (void*)0;
    node_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=mult_exp(info))));
    if(right_value413) { right_value413 = come_decrement_ref_count2(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional11=*info->p,    _while_condtional11) {
        if(_if_conditional369=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional369) {
            info->p++;
            skip_spaces_and_lf(info);
            right_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value414=add_exp(info))));
            if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2269, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value416=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value415=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2269, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_254),(struct sNode*)come_increment_ref_count(right_255),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sAddNode_sline;
            _inf_value9->sname=(void*)sAddNode_sname;
            _inf_value9->terminated=(void*)sAddNode_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result283__ = __result_obj__ = ((struct sNode*)(right_value421=_inf_value9));
            if(right_255) { right_255 = come_decrement_ref_count2(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAddNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAddNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value421) { right_value421 = come_decrement_ref_count2(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result283__;
            if(right_255) { right_255 = come_decrement_ref_count2(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional379=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional379) {
                info->p++;
                skip_spaces_and_lf(info);
                right_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=add_exp(info))));
                if(right_value422) { right_value422 = come_decrement_ref_count2(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2278, "struct sNode");
                _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value424=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value423=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2278, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_254),(struct sNode*)come_increment_ref_count(right_257),(_Bool)0,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sSubNode_finalize;
                _inf_value10->clone=(void*)sSubNode_clone;
                _inf_value10->compile=(void*)sSubNode_compile;
                _inf_value10->sline=(void*)sSubNode_sline;
                _inf_value10->sname=(void*)sSubNode_sname;
                _inf_value10->terminated=(void*)sSubNode_terminated;
                _inf_value10->kind=(void*)sSubNode_kind;
                __result286__ = __result_obj__ = ((struct sNode*)(right_value429=_inf_value10));
                if(right_257) { right_257 = come_decrement_ref_count2(right_257, ((struct sNode*)right_257)->finalize, ((struct sNode*)right_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sSubNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sSubNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value429) { right_value429 = come_decrement_ref_count2(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result286__;
                if(right_257) { right_257 = come_decrement_ref_count2(right_257, ((struct sNode*)right_257)->finalize, ((struct sNode*)right_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional389=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional389) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=add_exp(info))));
                    if(right_value430) { right_value430 = come_decrement_ref_count2(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2287, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sAddNode*)(right_value432=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value431=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2287, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_254),(struct sNode*)come_increment_ref_count(right_259),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sAddNode_finalize;
                    _inf_value11->clone=(void*)sAddNode_clone;
                    _inf_value11->compile=(void*)sAddNode_compile;
                    _inf_value11->sline=(void*)sAddNode_sline;
                    _inf_value11->sname=(void*)sAddNode_sname;
                    _inf_value11->terminated=(void*)sAddNode_terminated;
                    _inf_value11->kind=(void*)sAddNode_kind;
                    __result289__ = __result_obj__ = ((struct sNode*)(right_value437=_inf_value11));
                    if(right_259) { right_259 = come_decrement_ref_count2(right_259, ((struct sNode*)right_259)->finalize, ((struct sNode*)right_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sAddNode_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sAddNode_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result289__;
                    if(right_259) { right_259 = come_decrement_ref_count2(right_259, ((struct sNode*)right_259)->finalize, ((struct sNode*)right_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional399=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional399) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=add_exp(info))));
                        if(right_value438) { right_value438 = come_decrement_ref_count2(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2296, "struct sNode");
                        _inf_obj_value12=come_increment_ref_count(((struct sSubNode*)(right_value440=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value439=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2296, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_254),(struct sNode*)come_increment_ref_count(right_261),(_Bool)1,info))));
                        _inf_value12->_protocol_obj=_inf_obj_value12;
                        _inf_value12->finalize=(void*)sSubNode_finalize;
                        _inf_value12->clone=(void*)sSubNode_clone;
                        _inf_value12->compile=(void*)sSubNode_compile;
                        _inf_value12->sline=(void*)sSubNode_sline;
                        _inf_value12->sname=(void*)sSubNode_sname;
                        _inf_value12->terminated=(void*)sSubNode_terminated;
                        _inf_value12->kind=(void*)sSubNode_kind;
                        __result292__ = __result_obj__ = ((struct sNode*)(right_value445=_inf_value12));
                        if(right_261) { right_261 = come_decrement_ref_count2(right_261, ((struct sNode*)right_261)->finalize, ((struct sNode*)right_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sSubNode_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sSubNode_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result292__;
                        if(right_261) { right_261 = come_decrement_ref_count2(right_261, ((struct sNode*)right_261)->finalize, ((struct sNode*)right_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result293__ = __result_obj__ = node_254;
    if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result293__;
    if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional390=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional390) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional391=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional391) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional392=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional392) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional393;
struct sAddNode* __result287__;
void* right_value433;
struct sAddNode* result_260;
_Bool _if_conditional394;
void* right_value434;
struct sNode* __dec_obj193;
_Bool _if_conditional395;
void* right_value435;
struct sNode* __dec_obj194;
_Bool _if_conditional396;
_Bool _if_conditional397;
_Bool _if_conditional398;
void* right_value436;
char* __dec_obj195;
struct sAddNode* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
right_value433 = (void*)0;
memset(&result_260, 0, sizeof(struct sAddNode*));
right_value434 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
                        if(_if_conditional393=self==(void*)0,                        _if_conditional393) {
                            __result287__ = __result_obj__ = (void*)0;
                            return __result287__;
                        }
                        result_260=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value433=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"))));
                        come_call_finalizer2(sAddNode_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional394=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional394) {
                            __dec_obj193=result_260->mLeft;
                            result_260->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value434=sNode_clone(self->mLeft))));
                            if(__dec_obj193) { __dec_obj193 = come_decrement_ref_count2(__dec_obj193, ((struct sNode*)__dec_obj193)->finalize, ((struct sNode*)__dec_obj193)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value434) { right_value434 = come_decrement_ref_count2(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional395=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional395) {
                            __dec_obj194=result_260->mRight;
                            result_260->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value435=sNode_clone(self->mRight))));
                            if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value435) { right_value435 = come_decrement_ref_count2(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional396=self!=((void*)0),                        _if_conditional396) {
                            result_260->mQuote=self->mQuote;
                        }
                        if(_if_conditional397=self!=((void*)0),                        _if_conditional397) {
                            result_260->sline=self->sline;
                        }
                        if(_if_conditional398=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional398) {
                            __dec_obj195=result_260->sname;
                            result_260->sname=(char*)come_increment_ref_count(((char*)(right_value436=string_clone(self->sname))));
                            __dec_obj195 = come_decrement_ref_count2(__dec_obj195, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value436 = come_decrement_ref_count2(right_value436, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result288__ = __result_obj__ = result_260;
                        come_call_finalizer2(sAddNode_finalize,result_260, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result288__;
                        come_call_finalizer2(sAddNode_finalize,result_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional400=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional400) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional401=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional401) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional402=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional402) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional403;
struct sSubNode* __result290__;
void* right_value441;
struct sSubNode* result_262;
_Bool _if_conditional404;
void* right_value442;
struct sNode* __dec_obj196;
_Bool _if_conditional405;
void* right_value443;
struct sNode* __dec_obj197;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
void* right_value444;
char* __dec_obj198;
struct sSubNode* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
right_value441 = (void*)0;
memset(&result_262, 0, sizeof(struct sSubNode*));
right_value442 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
                            if(_if_conditional403=self==(void*)0,                            _if_conditional403) {
                                __result290__ = __result_obj__ = (void*)0;
                                return __result290__;
                            }
                            result_262=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value441=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"))));
                            come_call_finalizer2(sSubNode_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional404=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional404) {
                                __dec_obj196=result_262->mLeft;
                                result_262->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=sNode_clone(self->mLeft))));
                                if(__dec_obj196) { __dec_obj196 = come_decrement_ref_count2(__dec_obj196, ((struct sNode*)__dec_obj196)->finalize, ((struct sNode*)__dec_obj196)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value442) { right_value442 = come_decrement_ref_count2(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional405=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional405) {
                                __dec_obj197=result_262->mRight;
                                result_262->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=sNode_clone(self->mRight))));
                                if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value443) { right_value443 = come_decrement_ref_count2(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional406=self!=((void*)0),                            _if_conditional406) {
                                result_262->mQuote=self->mQuote;
                            }
                            if(_if_conditional407=self!=((void*)0),                            _if_conditional407) {
                                result_262->sline=self->sline;
                            }
                            if(_if_conditional408=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional408) {
                                __dec_obj198=result_262->sname;
                                result_262->sname=(char*)come_increment_ref_count(((char*)(right_value444=string_clone(self->sname))));
                                __dec_obj198 = come_decrement_ref_count2(__dec_obj198, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value444 = come_decrement_ref_count2(right_value444, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result291__ = __result_obj__ = result_262;
                            come_call_finalizer2(sSubNode_finalize,result_262, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result291__;
                            come_call_finalizer2(sSubNode_finalize,result_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
void* right_value446;
struct sNode* node_263;
_Bool _while_condtional12;
_Bool _if_conditional409;
void* right_value447;
struct sNode* right_264;
void* right_value448;
void* right_value449;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value454;
struct sNode* __result296__;
_Bool _if_conditional419;
void* right_value455;
struct sNode* right_266;
void* right_value456;
void* right_value457;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value462;
struct sNode* __result299__;
_Bool _if_conditional429;
void* right_value463;
struct sNode* right_268;
void* right_value464;
void* right_value465;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* right_value470;
struct sNode* __result302__;
_Bool _if_conditional439;
void* right_value471;
struct sNode* right_270;
void* right_value472;
void* right_value473;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* right_value478;
struct sNode* __result305__;
struct sNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value446 = (void*)0;
memset(&node_263, 0, sizeof(struct sNode*));
right_value447 = (void*)0;
memset(&right_264, 0, sizeof(struct sNode*));
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value454 = (void*)0;
right_value455 = (void*)0;
memset(&right_266, 0, sizeof(struct sNode*));
right_value456 = (void*)0;
right_value457 = (void*)0;
right_value462 = (void*)0;
right_value463 = (void*)0;
memset(&right_268, 0, sizeof(struct sNode*));
right_value464 = (void*)0;
right_value465 = (void*)0;
right_value470 = (void*)0;
right_value471 = (void*)0;
memset(&right_270, 0, sizeof(struct sNode*));
right_value472 = (void*)0;
right_value473 = (void*)0;
right_value478 = (void*)0;
    parse_sharp_v5(info);
    node_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=add_exp(info))));
    if(right_value446) { right_value446 = come_decrement_ref_count2(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional12=*info->p,    _while_condtional12) {
        if(_if_conditional409=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional409) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value447=shift_exp(info))));
            if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2323, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value449=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value448=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2323, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_263),(struct sNode*)come_increment_ref_count(right_264),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sLShiftNode_sline;
            _inf_value13->sname=(void*)sLShiftNode_sname;
            _inf_value13->terminated=(void*)sLShiftNode_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result296__ = __result_obj__ = ((struct sNode*)(right_value454=_inf_value13));
            if(right_264) { right_264 = come_decrement_ref_count2(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sLShiftNode_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLShiftNode_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value454) { right_value454 = come_decrement_ref_count2(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result296__;
            if(right_264) { right_264 = come_decrement_ref_count2(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional419=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional419) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=shift_exp(info))));
                if(right_value455) { right_value455 = come_decrement_ref_count2(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2331, "struct sNode");
                _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value457=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value456=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2331, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_263),(struct sNode*)come_increment_ref_count(right_266),(_Bool)0,info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sRShiftNode_finalize;
                _inf_value14->clone=(void*)sRShiftNode_clone;
                _inf_value14->compile=(void*)sRShiftNode_compile;
                _inf_value14->sline=(void*)sRShiftNode_sline;
                _inf_value14->sname=(void*)sRShiftNode_sname;
                _inf_value14->terminated=(void*)sRShiftNode_terminated;
                _inf_value14->kind=(void*)sRShiftNode_kind;
                __result299__ = __result_obj__ = ((struct sNode*)(right_value462=_inf_value14));
                if(right_266) { right_266 = come_decrement_ref_count2(right_266, ((struct sNode*)right_266)->finalize, ((struct sNode*)right_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sRShiftNode_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sRShiftNode_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value462) { right_value462 = come_decrement_ref_count2(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result299__;
                if(right_266) { right_266 = come_decrement_ref_count2(right_266, ((struct sNode*)right_266)->finalize, ((struct sNode*)right_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional429=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional429) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value463=shift_exp(info))));
                    if(right_value463) { right_value463 = come_decrement_ref_count2(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2339, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sLShiftNode*)(right_value465=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value464=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2339, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_263),(struct sNode*)come_increment_ref_count(right_268),(_Bool)1,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sLShiftNode_finalize;
                    _inf_value15->clone=(void*)sLShiftNode_clone;
                    _inf_value15->compile=(void*)sLShiftNode_compile;
                    _inf_value15->sline=(void*)sLShiftNode_sline;
                    _inf_value15->sname=(void*)sLShiftNode_sname;
                    _inf_value15->terminated=(void*)sLShiftNode_terminated;
                    _inf_value15->kind=(void*)sLShiftNode_kind;
                    __result302__ = __result_obj__ = ((struct sNode*)(right_value470=_inf_value15));
                    if(right_268) { right_268 = come_decrement_ref_count2(right_268, ((struct sNode*)right_268)->finalize, ((struct sNode*)right_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sLShiftNode_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLShiftNode_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value470) { right_value470 = come_decrement_ref_count2(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result302__;
                    if(right_268) { right_268 = come_decrement_ref_count2(right_268, ((struct sNode*)right_268)->finalize, ((struct sNode*)right_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional439=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional439) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value471=shift_exp(info))));
                        if(right_value471) { right_value471 = come_decrement_ref_count2(right_value471, ((struct sNode*)right_value471)->finalize, ((struct sNode*)right_value471)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2347, "struct sNode");
                        _inf_obj_value16=come_increment_ref_count(((struct sRShiftNode*)(right_value473=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value472=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2347, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_263),(struct sNode*)come_increment_ref_count(right_270),(_Bool)1,info))));
                        _inf_value16->_protocol_obj=_inf_obj_value16;
                        _inf_value16->finalize=(void*)sRShiftNode_finalize;
                        _inf_value16->clone=(void*)sRShiftNode_clone;
                        _inf_value16->compile=(void*)sRShiftNode_compile;
                        _inf_value16->sline=(void*)sRShiftNode_sline;
                        _inf_value16->sname=(void*)sRShiftNode_sname;
                        _inf_value16->terminated=(void*)sRShiftNode_terminated;
                        _inf_value16->kind=(void*)sRShiftNode_kind;
                        __result305__ = __result_obj__ = ((struct sNode*)(right_value478=_inf_value16));
                        if(right_270) { right_270 = come_decrement_ref_count2(right_270, ((struct sNode*)right_270)->finalize, ((struct sNode*)right_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sRShiftNode_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sRShiftNode_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result305__;
                        if(right_270) { right_270 = come_decrement_ref_count2(right_270, ((struct sNode*)right_270)->finalize, ((struct sNode*)right_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result306__ = __result_obj__ = node_263;
    if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result306__;
    if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
memset(&__result_obj__, 0, sizeof(void*));
                        if(_if_conditional430=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional430) {
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional431=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional431) {
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional432) {
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional433;
struct sLShiftNode* __result300__;
void* right_value466;
struct sLShiftNode* result_269;
_Bool _if_conditional434;
void* right_value467;
struct sNode* __dec_obj205;
_Bool _if_conditional435;
void* right_value468;
struct sNode* __dec_obj206;
_Bool _if_conditional436;
_Bool _if_conditional437;
_Bool _if_conditional438;
void* right_value469;
char* __dec_obj207;
struct sLShiftNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value466 = (void*)0;
memset(&result_269, 0, sizeof(struct sLShiftNode*));
right_value467 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
                        if(_if_conditional433=self==(void*)0,                        _if_conditional433) {
                            __result300__ = __result_obj__ = (void*)0;
                            return __result300__;
                        }
                        result_269=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value466=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"))));
                        come_call_finalizer2(sLShiftNode_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(_if_conditional434=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional434) {
                            __dec_obj205=result_269->mLeft;
                            result_269->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value467=sNode_clone(self->mLeft))));
                            if(__dec_obj205) { __dec_obj205 = come_decrement_ref_count2(__dec_obj205, ((struct sNode*)__dec_obj205)->finalize, ((struct sNode*)__dec_obj205)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value467) { right_value467 = come_decrement_ref_count2(right_value467, ((struct sNode*)right_value467)->finalize, ((struct sNode*)right_value467)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional435=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional435) {
                            __dec_obj206=result_269->mRight;
                            result_269->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value468=sNode_clone(self->mRight))));
                            if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value468) { right_value468 = come_decrement_ref_count2(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        if(_if_conditional436=self!=((void*)0),                        _if_conditional436) {
                            result_269->mQuote=self->mQuote;
                        }
                        if(_if_conditional437=self!=((void*)0),                        _if_conditional437) {
                            result_269->sline=self->sline;
                        }
                        if(_if_conditional438=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional438) {
                            __dec_obj207=result_269->sname;
                            result_269->sname=(char*)come_increment_ref_count(((char*)(right_value469=string_clone(self->sname))));
                            __dec_obj207 = come_decrement_ref_count2(__dec_obj207, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value469 = come_decrement_ref_count2(right_value469, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        __result301__ = __result_obj__ = result_269;
                        come_call_finalizer2(sLShiftNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result301__;
                        come_call_finalizer2(sLShiftNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
memset(&__result_obj__, 0, sizeof(void*));
                            if(_if_conditional440=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional440) {
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional441=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional441) {
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            if(_if_conditional442=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional442) {
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional443;
struct sRShiftNode* __result303__;
void* right_value474;
struct sRShiftNode* result_271;
_Bool _if_conditional444;
void* right_value475;
struct sNode* __dec_obj208;
_Bool _if_conditional445;
void* right_value476;
struct sNode* __dec_obj209;
_Bool _if_conditional446;
_Bool _if_conditional447;
_Bool _if_conditional448;
void* right_value477;
char* __dec_obj210;
struct sRShiftNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value474 = (void*)0;
memset(&result_271, 0, sizeof(struct sRShiftNode*));
right_value475 = (void*)0;
right_value476 = (void*)0;
right_value477 = (void*)0;
                            if(_if_conditional443=self==(void*)0,                            _if_conditional443) {
                                __result303__ = __result_obj__ = (void*)0;
                                return __result303__;
                            }
                            result_271=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value474=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"))));
                            come_call_finalizer2(sRShiftNode_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(_if_conditional444=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional444) {
                                __dec_obj208=result_271->mLeft;
                                result_271->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value475=sNode_clone(self->mLeft))));
                                if(__dec_obj208) { __dec_obj208 = come_decrement_ref_count2(__dec_obj208, ((struct sNode*)__dec_obj208)->finalize, ((struct sNode*)__dec_obj208)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value475) { right_value475 = come_decrement_ref_count2(right_value475, ((struct sNode*)right_value475)->finalize, ((struct sNode*)right_value475)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional445=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional445) {
                                __dec_obj209=result_271->mRight;
                                result_271->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=sNode_clone(self->mRight))));
                                if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value476) { right_value476 = come_decrement_ref_count2(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            if(_if_conditional446=self!=((void*)0),                            _if_conditional446) {
                                result_271->mQuote=self->mQuote;
                            }
                            if(_if_conditional447=self!=((void*)0),                            _if_conditional447) {
                                result_271->sline=self->sline;
                            }
                            if(_if_conditional448=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional448) {
                                __dec_obj210=result_271->sname;
                                result_271->sname=(char*)come_increment_ref_count(((char*)(right_value477=string_clone(self->sname))));
                                __dec_obj210 = come_decrement_ref_count2(__dec_obj210, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value477 = come_decrement_ref_count2(right_value477, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            __result304__ = __result_obj__ = result_271;
                            come_call_finalizer2(sRShiftNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result304__;
                            come_call_finalizer2(sRShiftNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
void* right_value479;
struct sNode* node_272;
_Bool _while_condtional13;
_Bool _if_conditional449;
void* right_value480;
struct sNode* right_273;
void* right_value481;
void* right_value482;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* right_value487;
struct sNode* __result309__;
_Bool _if_conditional459;
void* right_value488;
struct sNode* right_275;
void* right_value489;
void* right_value490;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* right_value495;
struct sNode* __result312__;
_Bool _if_conditional469;
void* right_value496;
struct sNode* right_277;
void* right_value497;
void* right_value498;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* right_value503;
struct sNode* __result315__;
_Bool _if_conditional479;
void* right_value504;
struct sNode* right_279;
void* right_value505;
void* right_value506;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* right_value511;
struct sNode* __result318__;
_Bool _if_conditional489;
void* right_value512;
struct sNode* right_281;
void* right_value513;
void* right_value514;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* right_value519;
struct sNode* __result321__;
_Bool _if_conditional499;
void* right_value520;
struct sNode* right_283;
void* right_value521;
void* right_value522;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* right_value527;
struct sNode* __result324__;
_Bool _if_conditional509;
void* right_value528;
struct sNode* right_285;
void* right_value529;
void* right_value530;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* right_value535;
struct sNode* __result327__;
_Bool _if_conditional519;
void* right_value536;
struct sNode* right_287;
void* right_value537;
void* right_value538;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* right_value543;
struct sNode* __result330__;
struct sNode* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
right_value479 = (void*)0;
memset(&node_272, 0, sizeof(struct sNode*));
right_value480 = (void*)0;
memset(&right_273, 0, sizeof(struct sNode*));
right_value481 = (void*)0;
right_value482 = (void*)0;
right_value487 = (void*)0;
right_value488 = (void*)0;
memset(&right_275, 0, sizeof(struct sNode*));
right_value489 = (void*)0;
right_value490 = (void*)0;
right_value495 = (void*)0;
right_value496 = (void*)0;
memset(&right_277, 0, sizeof(struct sNode*));
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value503 = (void*)0;
right_value504 = (void*)0;
memset(&right_279, 0, sizeof(struct sNode*));
right_value505 = (void*)0;
right_value506 = (void*)0;
right_value511 = (void*)0;
right_value512 = (void*)0;
memset(&right_281, 0, sizeof(struct sNode*));
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
memset(&right_283, 0, sizeof(struct sNode*));
right_value521 = (void*)0;
right_value522 = (void*)0;
right_value527 = (void*)0;
right_value528 = (void*)0;
memset(&right_285, 0, sizeof(struct sNode*));
right_value529 = (void*)0;
right_value530 = (void*)0;
right_value535 = (void*)0;
right_value536 = (void*)0;
memset(&right_287, 0, sizeof(struct sNode*));
right_value537 = (void*)0;
right_value538 = (void*)0;
right_value543 = (void*)0;
    parse_sharp_v5(info);
    node_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=shift_exp(info))));
    if(right_value479) { right_value479 = come_decrement_ref_count2(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional13=*info->p,    _while_condtional13) {
        if(_if_conditional449=*info->p==62&&*(info->p+1)==61,        _if_conditional449) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value480=shift_exp(info))));
            if(right_value480) { right_value480 = come_decrement_ref_count2(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2374, "struct sNode");
            _inf_obj_value17=come_increment_ref_count(((struct sGtEqNode*)(right_value482=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value481=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2374, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_273),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sGtEqNode_sline;
            _inf_value17->sname=(void*)sGtEqNode_sname;
            _inf_value17->terminated=(void*)sGtEqNode_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result309__ = __result_obj__ = ((struct sNode*)(right_value487=_inf_value17));
            if(right_273) { right_273 = come_decrement_ref_count2(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sGtEqNode_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGtEqNode_finalize,right_value482, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value487) { right_value487 = come_decrement_ref_count2(right_value487, ((struct sNode*)right_value487)->finalize, ((struct sNode*)right_value487)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result309__;
            if(right_273) { right_273 = come_decrement_ref_count2(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional459=*info->p==60&&*(info->p+1)==61,            _if_conditional459) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value488=shift_exp(info))));
                if(right_value488) { right_value488 = come_decrement_ref_count2(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2382, "struct sNode");
                _inf_obj_value18=come_increment_ref_count(((struct sLtEqNode*)(right_value490=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value489=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2382, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_275),(_Bool)0,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLtEqNode_finalize;
                _inf_value18->clone=(void*)sLtEqNode_clone;
                _inf_value18->compile=(void*)sLtEqNode_compile;
                _inf_value18->sline=(void*)sLtEqNode_sline;
                _inf_value18->sname=(void*)sLtEqNode_sname;
                _inf_value18->terminated=(void*)sLtEqNode_terminated;
                _inf_value18->kind=(void*)sLtEqNode_kind;
                __result312__ = __result_obj__ = ((struct sNode*)(right_value495=_inf_value18));
                if(right_275) { right_275 = come_decrement_ref_count2(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sLtEqNode_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sLtEqNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value495) { right_value495 = come_decrement_ref_count2(right_value495, ((struct sNode*)right_value495)->finalize, ((struct sNode*)right_value495)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result312__;
                if(right_275) { right_275 = come_decrement_ref_count2(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional469=*info->p==62&&*(info->p+1)!=62,                _if_conditional469) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value496=shift_exp(info))));
                    if(right_value496) { right_value496 = come_decrement_ref_count2(right_value496, ((struct sNode*)right_value496)->finalize, ((struct sNode*)right_value496)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2390, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sGtNode*)(right_value498=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value497=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2390, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_277),(_Bool)0,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sGtNode_finalize;
                    _inf_value19->clone=(void*)sGtNode_clone;
                    _inf_value19->compile=(void*)sGtNode_compile;
                    _inf_value19->sline=(void*)sGtNode_sline;
                    _inf_value19->sname=(void*)sGtNode_sname;
                    _inf_value19->terminated=(void*)sGtNode_terminated;
                    _inf_value19->kind=(void*)sGtNode_kind;
                    __result315__ = __result_obj__ = ((struct sNode*)(right_value503=_inf_value19));
                    if(right_277) { right_277 = come_decrement_ref_count2(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sGtNode_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sGtNode_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value503) { right_value503 = come_decrement_ref_count2(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result315__;
                    if(right_277) { right_277 = come_decrement_ref_count2(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional479=*info->p==60&&*(info->p+1)!=60,                    _if_conditional479) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value504=shift_exp(info))));
                        if(right_value504) { right_value504 = come_decrement_ref_count2(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2398, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sLtNode*)(right_value506=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value505=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2398, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_279),(_Bool)0,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sLtNode_finalize;
                        _inf_value20->clone=(void*)sLtNode_clone;
                        _inf_value20->compile=(void*)sLtNode_compile;
                        _inf_value20->sline=(void*)sLtNode_sline;
                        _inf_value20->sname=(void*)sLtNode_sname;
                        _inf_value20->terminated=(void*)sLtNode_terminated;
                        _inf_value20->kind=(void*)sLtNode_kind;
                        __result318__ = __result_obj__ = ((struct sNode*)(right_value511=_inf_value20));
                        if(right_279) { right_279 = come_decrement_ref_count2(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sLtNode_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLtNode_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value511) { right_value511 = come_decrement_ref_count2(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result318__;
                        if(right_279) { right_279 = come_decrement_ref_count2(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional489=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional489) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value512=shift_exp(info))));
                            if(right_value512) { right_value512 = come_decrement_ref_count2(right_value512, ((struct sNode*)right_value512)->finalize, ((struct sNode*)right_value512)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2406, "struct sNode");
                            _inf_obj_value21=come_increment_ref_count(((struct sGtEqNode*)(right_value514=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value513=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2406, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_281),(_Bool)1,info))));
                            _inf_value21->_protocol_obj=_inf_obj_value21;
                            _inf_value21->finalize=(void*)sGtEqNode_finalize;
                            _inf_value21->clone=(void*)sGtEqNode_clone;
                            _inf_value21->compile=(void*)sGtEqNode_compile;
                            _inf_value21->sline=(void*)sGtEqNode_sline;
                            _inf_value21->sname=(void*)sGtEqNode_sname;
                            _inf_value21->terminated=(void*)sGtEqNode_terminated;
                            _inf_value21->kind=(void*)sGtEqNode_kind;
                            __result321__ = __result_obj__ = ((struct sNode*)(right_value519=_inf_value21));
                            if(right_281) { right_281 = come_decrement_ref_count2(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sGtEqNode_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sGtEqNode_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value519) { right_value519 = come_decrement_ref_count2(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result321__;
                            if(right_281) { right_281 = come_decrement_ref_count2(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional499=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional499) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value520=shift_exp(info))));
                                if(right_value520) { right_value520 = come_decrement_ref_count2(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2414, "struct sNode");
                                _inf_obj_value22=come_increment_ref_count(((struct sLtEqNode*)(right_value522=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value521=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2414, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_283),(_Bool)1,info))));
                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                _inf_value22->finalize=(void*)sLtEqNode_finalize;
                                _inf_value22->clone=(void*)sLtEqNode_clone;
                                _inf_value22->compile=(void*)sLtEqNode_compile;
                                _inf_value22->sline=(void*)sLtEqNode_sline;
                                _inf_value22->sname=(void*)sLtEqNode_sname;
                                _inf_value22->terminated=(void*)sLtEqNode_terminated;
                                _inf_value22->kind=(void*)sLtEqNode_kind;
                                __result324__ = __result_obj__ = ((struct sNode*)(right_value527=_inf_value22));
                                if(right_283) { right_283 = come_decrement_ref_count2(right_283, ((struct sNode*)right_283)->finalize, ((struct sNode*)right_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sLtEqNode_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sLtEqNode_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value527) { right_value527 = come_decrement_ref_count2(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result324__;
                                if(right_283) { right_283 = come_decrement_ref_count2(right_283, ((struct sNode*)right_283)->finalize, ((struct sNode*)right_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional509=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional509) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value528=shift_exp(info))));
                                    if(right_value528) { right_value528 = come_decrement_ref_count2(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2422, "struct sNode");
                                    _inf_obj_value23=come_increment_ref_count(((struct sGtNode*)(right_value530=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value529=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2422, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_285),(_Bool)1,info))));
                                    _inf_value23->_protocol_obj=_inf_obj_value23;
                                    _inf_value23->finalize=(void*)sGtNode_finalize;
                                    _inf_value23->clone=(void*)sGtNode_clone;
                                    _inf_value23->compile=(void*)sGtNode_compile;
                                    _inf_value23->sline=(void*)sGtNode_sline;
                                    _inf_value23->sname=(void*)sGtNode_sname;
                                    _inf_value23->terminated=(void*)sGtNode_terminated;
                                    _inf_value23->kind=(void*)sGtNode_kind;
                                    __result327__ = __result_obj__ = ((struct sNode*)(right_value535=_inf_value23));
                                    if(right_285) { right_285 = come_decrement_ref_count2(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sGtNode_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sGtNode_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value535) { right_value535 = come_decrement_ref_count2(right_value535, ((struct sNode*)right_value535)->finalize, ((struct sNode*)right_value535)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result327__;
                                    if(right_285) { right_285 = come_decrement_ref_count2(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional519=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional519) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value536=shift_exp(info))));
                                        if(right_value536) { right_value536 = come_decrement_ref_count2(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2430, "struct sNode");
                                        _inf_obj_value24=come_increment_ref_count(((struct sLtNode*)(right_value538=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value537=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2430, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_287),(_Bool)1,info))));
                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                        _inf_value24->finalize=(void*)sLtNode_finalize;
                                        _inf_value24->clone=(void*)sLtNode_clone;
                                        _inf_value24->compile=(void*)sLtNode_compile;
                                        _inf_value24->sline=(void*)sLtNode_sline;
                                        _inf_value24->sname=(void*)sLtNode_sname;
                                        _inf_value24->terminated=(void*)sLtNode_terminated;
                                        _inf_value24->kind=(void*)sLtNode_kind;
                                        __result330__ = __result_obj__ = ((struct sNode*)(right_value543=_inf_value24));
                                        if(right_287) { right_287 = come_decrement_ref_count2(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sLtNode_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sLtNode_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value543) { right_value543 = come_decrement_ref_count2(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result330__;
                                        if(right_287) { right_287 = come_decrement_ref_count2(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result331__ = __result_obj__ = node_272;
    if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result331__;
    if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional490;
_Bool _if_conditional491;
_Bool _if_conditional492;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional490=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional490) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional491=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional491) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional492=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional492) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional493;
struct sGtEqNode* __result319__;
void* right_value515;
struct sGtEqNode* result_282;
_Bool _if_conditional494;
void* right_value516;
struct sNode* __dec_obj223;
_Bool _if_conditional495;
void* right_value517;
struct sNode* __dec_obj224;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
void* right_value518;
char* __dec_obj225;
struct sGtEqNode* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
right_value515 = (void*)0;
memset(&result_282, 0, sizeof(struct sGtEqNode*));
right_value516 = (void*)0;
right_value517 = (void*)0;
right_value518 = (void*)0;
                                if(_if_conditional493=self==(void*)0,                                _if_conditional493) {
                                    __result319__ = __result_obj__ = (void*)0;
                                    return __result319__;
                                }
                                result_282=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value515=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"))));
                                come_call_finalizer2(sGtEqNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional494=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional494) {
                                    __dec_obj223=result_282->mLeft;
                                    result_282->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value516=sNode_clone(self->mLeft))));
                                    if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count2(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value516) { right_value516 = come_decrement_ref_count2(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional495=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional495) {
                                    __dec_obj224=result_282->mRight;
                                    result_282->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value517=sNode_clone(self->mRight))));
                                    if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value517) { right_value517 = come_decrement_ref_count2(right_value517, ((struct sNode*)right_value517)->finalize, ((struct sNode*)right_value517)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional496=self!=((void*)0),                                _if_conditional496) {
                                    result_282->mQuote=self->mQuote;
                                }
                                if(_if_conditional497=self!=((void*)0),                                _if_conditional497) {
                                    result_282->sline=self->sline;
                                }
                                if(_if_conditional498=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional498) {
                                    __dec_obj225=result_282->sname;
                                    result_282->sname=(char*)come_increment_ref_count(((char*)(right_value518=string_clone(self->sname))));
                                    __dec_obj225 = come_decrement_ref_count2(__dec_obj225, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value518 = come_decrement_ref_count2(right_value518, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result320__ = __result_obj__ = result_282;
                                come_call_finalizer2(sGtEqNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result320__;
                                come_call_finalizer2(sGtEqNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional500;
_Bool _if_conditional501;
_Bool _if_conditional502;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional500=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional500) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional501=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional501) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional502=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional502) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional503;
struct sLtEqNode* __result322__;
void* right_value523;
struct sLtEqNode* result_284;
_Bool _if_conditional504;
void* right_value524;
struct sNode* __dec_obj226;
_Bool _if_conditional505;
void* right_value525;
struct sNode* __dec_obj227;
_Bool _if_conditional506;
_Bool _if_conditional507;
_Bool _if_conditional508;
void* right_value526;
char* __dec_obj228;
struct sLtEqNode* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
right_value523 = (void*)0;
memset(&result_284, 0, sizeof(struct sLtEqNode*));
right_value524 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
                                    if(_if_conditional503=self==(void*)0,                                    _if_conditional503) {
                                        __result322__ = __result_obj__ = (void*)0;
                                        return __result322__;
                                    }
                                    result_284=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value523=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"))));
                                    come_call_finalizer2(sLtEqNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional504=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional504) {
                                        __dec_obj226=result_284->mLeft;
                                        result_284->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value524=sNode_clone(self->mLeft))));
                                        if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count2(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value524) { right_value524 = come_decrement_ref_count2(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional505=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional505) {
                                        __dec_obj227=result_284->mRight;
                                        result_284->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value525=sNode_clone(self->mRight))));
                                        if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value525) { right_value525 = come_decrement_ref_count2(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional506=self!=((void*)0),                                    _if_conditional506) {
                                        result_284->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional507=self!=((void*)0),                                    _if_conditional507) {
                                        result_284->sline=self->sline;
                                    }
                                    if(_if_conditional508=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional508) {
                                        __dec_obj228=result_284->sname;
                                        result_284->sname=(char*)come_increment_ref_count(((char*)(right_value526=string_clone(self->sname))));
                                        __dec_obj228 = come_decrement_ref_count2(__dec_obj228, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value526 = come_decrement_ref_count2(right_value526, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result323__ = __result_obj__ = result_284;
                                    come_call_finalizer2(sLtEqNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result323__;
                                    come_call_finalizer2(sLtEqNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional510;
_Bool _if_conditional511;
_Bool _if_conditional512;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional510=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional510) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional511=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional511) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional512=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional512) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional513;
struct sGtNode* __result325__;
void* right_value531;
struct sGtNode* result_286;
_Bool _if_conditional514;
void* right_value532;
struct sNode* __dec_obj229;
_Bool _if_conditional515;
void* right_value533;
struct sNode* __dec_obj230;
_Bool _if_conditional516;
_Bool _if_conditional517;
_Bool _if_conditional518;
void* right_value534;
char* __dec_obj231;
struct sGtNode* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value531 = (void*)0;
memset(&result_286, 0, sizeof(struct sGtNode*));
right_value532 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
                                        if(_if_conditional513=self==(void*)0,                                        _if_conditional513) {
                                            __result325__ = __result_obj__ = (void*)0;
                                            return __result325__;
                                        }
                                        result_286=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value531=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"))));
                                        come_call_finalizer2(sGtNode_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional514=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional514) {
                                            __dec_obj229=result_286->mLeft;
                                            result_286->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value532=sNode_clone(self->mLeft))));
                                            if(__dec_obj229) { __dec_obj229 = come_decrement_ref_count2(__dec_obj229, ((struct sNode*)__dec_obj229)->finalize, ((struct sNode*)__dec_obj229)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value532) { right_value532 = come_decrement_ref_count2(right_value532, ((struct sNode*)right_value532)->finalize, ((struct sNode*)right_value532)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional515=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional515) {
                                            __dec_obj230=result_286->mRight;
                                            result_286->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value533=sNode_clone(self->mRight))));
                                            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value533) { right_value533 = come_decrement_ref_count2(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional516=self!=((void*)0),                                        _if_conditional516) {
                                            result_286->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional517=self!=((void*)0),                                        _if_conditional517) {
                                            result_286->sline=self->sline;
                                        }
                                        if(_if_conditional518=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional518) {
                                            __dec_obj231=result_286->sname;
                                            result_286->sname=(char*)come_increment_ref_count(((char*)(right_value534=string_clone(self->sname))));
                                            __dec_obj231 = come_decrement_ref_count2(__dec_obj231, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value534 = come_decrement_ref_count2(right_value534, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result326__ = __result_obj__ = result_286;
                                        come_call_finalizer2(sGtNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result326__;
                                        come_call_finalizer2(sGtNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional520;
_Bool _if_conditional521;
_Bool _if_conditional522;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional520=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional520) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional521=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional521) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional522=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional522) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional523;
struct sLtNode* __result328__;
void* right_value539;
struct sLtNode* result_288;
_Bool _if_conditional524;
void* right_value540;
struct sNode* __dec_obj232;
_Bool _if_conditional525;
void* right_value541;
struct sNode* __dec_obj233;
_Bool _if_conditional526;
_Bool _if_conditional527;
_Bool _if_conditional528;
void* right_value542;
char* __dec_obj234;
struct sLtNode* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
right_value539 = (void*)0;
memset(&result_288, 0, sizeof(struct sLtNode*));
right_value540 = (void*)0;
right_value541 = (void*)0;
right_value542 = (void*)0;
                                            if(_if_conditional523=self==(void*)0,                                            _if_conditional523) {
                                                __result328__ = __result_obj__ = (void*)0;
                                                return __result328__;
                                            }
                                            result_288=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value539=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"))));
                                            come_call_finalizer2(sLtNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional524=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional524) {
                                                __dec_obj232=result_288->mLeft;
                                                result_288->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value540=sNode_clone(self->mLeft))));
                                                if(__dec_obj232) { __dec_obj232 = come_decrement_ref_count2(__dec_obj232, ((struct sNode*)__dec_obj232)->finalize, ((struct sNode*)__dec_obj232)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value540) { right_value540 = come_decrement_ref_count2(right_value540, ((struct sNode*)right_value540)->finalize, ((struct sNode*)right_value540)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional525=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional525) {
                                                __dec_obj233=result_288->mRight;
                                                result_288->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value541=sNode_clone(self->mRight))));
                                                if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value541) { right_value541 = come_decrement_ref_count2(right_value541, ((struct sNode*)right_value541)->finalize, ((struct sNode*)right_value541)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional526=self!=((void*)0),                                            _if_conditional526) {
                                                result_288->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional527=self!=((void*)0),                                            _if_conditional527) {
                                                result_288->sline=self->sline;
                                            }
                                            if(_if_conditional528=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional528) {
                                                __dec_obj234=result_288->sname;
                                                result_288->sname=(char*)come_increment_ref_count(((char*)(right_value542=string_clone(self->sname))));
                                                __dec_obj234 = come_decrement_ref_count2(__dec_obj234, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value542 = come_decrement_ref_count2(right_value542, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result329__ = __result_obj__ = result_288;
                                            come_call_finalizer2(sLtNode_finalize,result_288, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result329__;
                                            come_call_finalizer2(sLtNode_finalize,result_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
void* right_value544;
struct sNode* node_289;
_Bool _while_condtional14;
_Bool _if_conditional529;
void* right_value545;
struct sNode* right_290;
void* right_value546;
void* right_value547;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* right_value552;
struct sNode* __result334__;
_Bool _if_conditional539;
void* right_value553;
struct sNode* right_292;
void* right_value554;
void* right_value555;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* right_value560;
struct sNode* __result337__;
_Bool _if_conditional549;
void* right_value561;
struct sNode* right_294;
void* right_value562;
void* right_value563;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* right_value568;
struct sNode* __result340__;
_Bool _if_conditional559;
void* right_value569;
struct sNode* right_296;
void* right_value570;
void* right_value571;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* right_value576;
struct sNode* __result343__;
_Bool _if_conditional569;
void* right_value577;
struct sNode* right_298;
void* right_value578;
void* right_value579;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* right_value584;
struct sNode* __result346__;
_Bool _if_conditional579;
void* right_value585;
struct sNode* right_300;
void* right_value586;
void* right_value587;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* right_value592;
struct sNode* __result349__;
_Bool _if_conditional589;
void* right_value593;
struct sNode* right_302;
void* right_value594;
void* right_value595;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* right_value600;
struct sNode* __result352__;
_Bool _if_conditional599;
void* right_value601;
struct sNode* right_304;
void* right_value602;
void* right_value603;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* right_value608;
struct sNode* __result355__;
struct sNode* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
right_value544 = (void*)0;
memset(&node_289, 0, sizeof(struct sNode*));
right_value545 = (void*)0;
memset(&right_290, 0, sizeof(struct sNode*));
right_value546 = (void*)0;
right_value547 = (void*)0;
right_value552 = (void*)0;
right_value553 = (void*)0;
memset(&right_292, 0, sizeof(struct sNode*));
right_value554 = (void*)0;
right_value555 = (void*)0;
right_value560 = (void*)0;
right_value561 = (void*)0;
memset(&right_294, 0, sizeof(struct sNode*));
right_value562 = (void*)0;
right_value563 = (void*)0;
right_value568 = (void*)0;
right_value569 = (void*)0;
memset(&right_296, 0, sizeof(struct sNode*));
right_value570 = (void*)0;
right_value571 = (void*)0;
right_value576 = (void*)0;
right_value577 = (void*)0;
memset(&right_298, 0, sizeof(struct sNode*));
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
memset(&right_300, 0, sizeof(struct sNode*));
right_value586 = (void*)0;
right_value587 = (void*)0;
right_value592 = (void*)0;
right_value593 = (void*)0;
memset(&right_302, 0, sizeof(struct sNode*));
right_value594 = (void*)0;
right_value595 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
memset(&right_304, 0, sizeof(struct sNode*));
right_value602 = (void*)0;
right_value603 = (void*)0;
right_value608 = (void*)0;
    parse_sharp_v5(info);
    node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value544=comparison_exp(info))));
    if(right_value544) { right_value544 = come_decrement_ref_count2(right_value544, ((struct sNode*)right_value544)->finalize, ((struct sNode*)right_value544)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional14=*info->p,    _while_condtional14) {
        if(_if_conditional529=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional529) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value545=eq_exp(info))));
            if(right_value545) { right_value545 = come_decrement_ref_count2(right_value545, ((struct sNode*)right_value545)->finalize, ((struct sNode*)right_value545)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2457, "struct sNode");
            _inf_obj_value25=come_increment_ref_count(((struct sEq2Node*)(right_value547=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value546=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2457, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_290),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sEq2Node_sline;
            _inf_value25->sname=(void*)sEq2Node_sname;
            _inf_value25->terminated=(void*)sEq2Node_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result334__ = __result_obj__ = ((struct sNode*)(right_value552=_inf_value25));
            if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sEq2Node_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sEq2Node_finalize,right_value547, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value552) { right_value552 = come_decrement_ref_count2(right_value552, ((struct sNode*)right_value552)->finalize, ((struct sNode*)right_value552)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result334__;
            if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional539=*info->p==61&&*(info->p+1)==61,            _if_conditional539) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value553=eq_exp(info))));
                if(right_value553) { right_value553 = come_decrement_ref_count2(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2465, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sEqNode*)(right_value555=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value554=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2465, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_292),(_Bool)0,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sEqNode_finalize;
                _inf_value26->clone=(void*)sEqNode_clone;
                _inf_value26->compile=(void*)sEqNode_compile;
                _inf_value26->sline=(void*)sEqNode_sline;
                _inf_value26->sname=(void*)sEqNode_sname;
                _inf_value26->terminated=(void*)sEqNode_terminated;
                _inf_value26->kind=(void*)sEqNode_kind;
                __result337__ = __result_obj__ = ((struct sNode*)(right_value560=_inf_value26));
                if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sEqNode_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sEqNode_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value560) { right_value560 = come_decrement_ref_count2(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result337__;
                if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                if(_if_conditional549=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional549) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value561=eq_exp(info))));
                    if(right_value561) { right_value561 = come_decrement_ref_count2(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2473, "struct sNode");
                    _inf_obj_value27=come_increment_ref_count(((struct sNotEq2Node*)(right_value563=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value562=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2473, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_294),(_Bool)0,info))));
                    _inf_value27->_protocol_obj=_inf_obj_value27;
                    _inf_value27->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value27->clone=(void*)sNotEq2Node_clone;
                    _inf_value27->compile=(void*)sNotEq2Node_compile;
                    _inf_value27->sline=(void*)sNotEq2Node_sline;
                    _inf_value27->sname=(void*)sNotEq2Node_sname;
                    _inf_value27->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value27->kind=(void*)sNotEq2Node_kind;
                    __result340__ = __result_obj__ = ((struct sNode*)(right_value568=_inf_value27));
                    if(right_294) { right_294 = come_decrement_ref_count2(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sNotEq2Node_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sNotEq2Node_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value568) { right_value568 = come_decrement_ref_count2(right_value568, ((struct sNode*)right_value568)->finalize, ((struct sNode*)right_value568)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result340__;
                    if(right_294) { right_294 = come_decrement_ref_count2(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    if(_if_conditional559=*info->p==33&&*(info->p+1)==61,                    _if_conditional559) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value569=eq_exp(info))));
                        if(right_value569) { right_value569 = come_decrement_ref_count2(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2481, "struct sNode");
                        _inf_obj_value28=come_increment_ref_count(((struct sNotEqNode*)(right_value571=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value570=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2481, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_296),(_Bool)0,info))));
                        _inf_value28->_protocol_obj=_inf_obj_value28;
                        _inf_value28->finalize=(void*)sNotEqNode_finalize;
                        _inf_value28->clone=(void*)sNotEqNode_clone;
                        _inf_value28->compile=(void*)sNotEqNode_compile;
                        _inf_value28->sline=(void*)sNotEqNode_sline;
                        _inf_value28->sname=(void*)sNotEqNode_sname;
                        _inf_value28->terminated=(void*)sNotEqNode_terminated;
                        _inf_value28->kind=(void*)sNotEqNode_kind;
                        __result343__ = __result_obj__ = ((struct sNode*)(right_value576=_inf_value28));
                        if(right_296) { right_296 = come_decrement_ref_count2(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sNotEqNode_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sNotEqNode_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value576) { right_value576 = come_decrement_ref_count2(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result343__;
                        if(right_296) { right_296 = come_decrement_ref_count2(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        if(_if_conditional569=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional569) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value577=eq_exp(info))));
                            if(right_value577) { right_value577 = come_decrement_ref_count2(right_value577, ((struct sNode*)right_value577)->finalize, ((struct sNode*)right_value577)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2489, "struct sNode");
                            _inf_obj_value29=come_increment_ref_count(((struct sEq2Node*)(right_value579=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value578=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2489, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_298),(_Bool)1,info))));
                            _inf_value29->_protocol_obj=_inf_obj_value29;
                            _inf_value29->finalize=(void*)sEq2Node_finalize;
                            _inf_value29->clone=(void*)sEq2Node_clone;
                            _inf_value29->compile=(void*)sEq2Node_compile;
                            _inf_value29->sline=(void*)sEq2Node_sline;
                            _inf_value29->sname=(void*)sEq2Node_sname;
                            _inf_value29->terminated=(void*)sEq2Node_terminated;
                            _inf_value29->kind=(void*)sEq2Node_kind;
                            __result346__ = __result_obj__ = ((struct sNode*)(right_value584=_inf_value29));
                            if(right_298) { right_298 = come_decrement_ref_count2(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sEq2Node_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sEq2Node_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value584) { right_value584 = come_decrement_ref_count2(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result346__;
                            if(right_298) { right_298 = come_decrement_ref_count2(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            if(_if_conditional579=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional579) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value585=eq_exp(info))));
                                if(right_value585) { right_value585 = come_decrement_ref_count2(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2497, "struct sNode");
                                _inf_obj_value30=come_increment_ref_count(((struct sEqNode*)(right_value587=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value586=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2497, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_300),(_Bool)1,info))));
                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                _inf_value30->finalize=(void*)sEqNode_finalize;
                                _inf_value30->clone=(void*)sEqNode_clone;
                                _inf_value30->compile=(void*)sEqNode_compile;
                                _inf_value30->sline=(void*)sEqNode_sline;
                                _inf_value30->sname=(void*)sEqNode_sname;
                                _inf_value30->terminated=(void*)sEqNode_terminated;
                                _inf_value30->kind=(void*)sEqNode_kind;
                                __result349__ = __result_obj__ = ((struct sNode*)(right_value592=_inf_value30));
                                if(right_300) { right_300 = come_decrement_ref_count2(right_300, ((struct sNode*)right_300)->finalize, ((struct sNode*)right_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sEqNode_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sEqNode_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value592) { right_value592 = come_decrement_ref_count2(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result349__;
                                if(right_300) { right_300 = come_decrement_ref_count2(right_300, ((struct sNode*)right_300)->finalize, ((struct sNode*)right_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                if(_if_conditional589=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional589) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=eq_exp(info))));
                                    if(right_value593) { right_value593 = come_decrement_ref_count2(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2505, "struct sNode");
                                    _inf_obj_value31=come_increment_ref_count(((struct sNotEq2Node*)(right_value595=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value594=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2505, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_302),(_Bool)1,info))));
                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                    _inf_value31->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value31->clone=(void*)sNotEq2Node_clone;
                                    _inf_value31->compile=(void*)sNotEq2Node_compile;
                                    _inf_value31->sline=(void*)sNotEq2Node_sline;
                                    _inf_value31->sname=(void*)sNotEq2Node_sname;
                                    _inf_value31->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value31->kind=(void*)sNotEq2Node_kind;
                                    __result352__ = __result_obj__ = ((struct sNode*)(right_value600=_inf_value31));
                                    if(right_302) { right_302 = come_decrement_ref_count2(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sNotEq2Node_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sNotEq2Node_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value600) { right_value600 = come_decrement_ref_count2(right_value600, ((struct sNode*)right_value600)->finalize, ((struct sNode*)right_value600)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result352__;
                                    if(right_302) { right_302 = come_decrement_ref_count2(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    if(_if_conditional599=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional599) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value601=eq_exp(info))));
                                        if(right_value601) { right_value601 = come_decrement_ref_count2(right_value601, ((struct sNode*)right_value601)->finalize, ((struct sNode*)right_value601)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2513, "struct sNode");
                                        _inf_obj_value32=come_increment_ref_count(((struct sNotEqNode*)(right_value603=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value602=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2513, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_304),(_Bool)1,info))));
                                        _inf_value32->_protocol_obj=_inf_obj_value32;
                                        _inf_value32->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value32->clone=(void*)sNotEqNode_clone;
                                        _inf_value32->compile=(void*)sNotEqNode_compile;
                                        _inf_value32->sline=(void*)sNotEqNode_sline;
                                        _inf_value32->sname=(void*)sNotEqNode_sname;
                                        _inf_value32->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value32->kind=(void*)sNotEqNode_kind;
                                        __result355__ = __result_obj__ = ((struct sNode*)(right_value608=_inf_value32));
                                        if(right_304) { right_304 = come_decrement_ref_count2(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sNotEqNode_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sNotEqNode_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value608) { right_value608 = come_decrement_ref_count2(right_value608, ((struct sNode*)right_value608)->finalize, ((struct sNode*)right_value608)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result355__;
                                        if(right_304) { right_304 = come_decrement_ref_count2(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
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
    __result356__ = __result_obj__ = node_289;
    if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result356__;
    if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional570;
_Bool _if_conditional571;
_Bool _if_conditional572;
memset(&__result_obj__, 0, sizeof(void*));
                                if(_if_conditional570=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional570) {
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional571=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional571) {
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                if(_if_conditional572=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional572) {
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional573;
struct sEq2Node* __result344__;
void* right_value580;
struct sEq2Node* result_299;
_Bool _if_conditional574;
void* right_value581;
struct sNode* __dec_obj247;
_Bool _if_conditional575;
void* right_value582;
struct sNode* __dec_obj248;
_Bool _if_conditional576;
_Bool _if_conditional577;
_Bool _if_conditional578;
void* right_value583;
char* __dec_obj249;
struct sEq2Node* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
right_value580 = (void*)0;
memset(&result_299, 0, sizeof(struct sEq2Node*));
right_value581 = (void*)0;
right_value582 = (void*)0;
right_value583 = (void*)0;
                                if(_if_conditional573=self==(void*)0,                                _if_conditional573) {
                                    __result344__ = __result_obj__ = (void*)0;
                                    return __result344__;
                                }
                                result_299=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value580=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"))));
                                come_call_finalizer2(sEq2Node_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(_if_conditional574=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional574) {
                                    __dec_obj247=result_299->mLeft;
                                    result_299->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value581=sNode_clone(self->mLeft))));
                                    if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count2(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value581) { right_value581 = come_decrement_ref_count2(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional575=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional575) {
                                    __dec_obj248=result_299->mRight;
                                    result_299->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value582=sNode_clone(self->mRight))));
                                    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value582) { right_value582 = come_decrement_ref_count2(right_value582, ((struct sNode*)right_value582)->finalize, ((struct sNode*)right_value582)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                if(_if_conditional576=self!=((void*)0),                                _if_conditional576) {
                                    result_299->mQuote=self->mQuote;
                                }
                                if(_if_conditional577=self!=((void*)0),                                _if_conditional577) {
                                    result_299->sline=self->sline;
                                }
                                if(_if_conditional578=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional578) {
                                    __dec_obj249=result_299->sname;
                                    result_299->sname=(char*)come_increment_ref_count(((char*)(right_value583=string_clone(self->sname))));
                                    __dec_obj249 = come_decrement_ref_count2(__dec_obj249, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value583 = come_decrement_ref_count2(right_value583, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                __result345__ = __result_obj__ = result_299;
                                come_call_finalizer2(sEq2Node_finalize,result_299, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result345__;
                                come_call_finalizer2(sEq2Node_finalize,result_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional580;
_Bool _if_conditional581;
_Bool _if_conditional582;
memset(&__result_obj__, 0, sizeof(void*));
                                    if(_if_conditional580=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional580) {
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional581=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional581) {
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    if(_if_conditional582=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional582) {
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional583;
struct sEqNode* __result347__;
void* right_value588;
struct sEqNode* result_301;
_Bool _if_conditional584;
void* right_value589;
struct sNode* __dec_obj250;
_Bool _if_conditional585;
void* right_value590;
struct sNode* __dec_obj251;
_Bool _if_conditional586;
_Bool _if_conditional587;
_Bool _if_conditional588;
void* right_value591;
char* __dec_obj252;
struct sEqNode* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
right_value588 = (void*)0;
memset(&result_301, 0, sizeof(struct sEqNode*));
right_value589 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
                                    if(_if_conditional583=self==(void*)0,                                    _if_conditional583) {
                                        __result347__ = __result_obj__ = (void*)0;
                                        return __result347__;
                                    }
                                    result_301=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value588=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"))));
                                    come_call_finalizer2(sEqNode_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(_if_conditional584=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional584) {
                                        __dec_obj250=result_301->mLeft;
                                        result_301->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value589=sNode_clone(self->mLeft))));
                                        if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count2(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value589) { right_value589 = come_decrement_ref_count2(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional585=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional585) {
                                        __dec_obj251=result_301->mRight;
                                        result_301->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value590=sNode_clone(self->mRight))));
                                        if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value590) { right_value590 = come_decrement_ref_count2(right_value590, ((struct sNode*)right_value590)->finalize, ((struct sNode*)right_value590)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    if(_if_conditional586=self!=((void*)0),                                    _if_conditional586) {
                                        result_301->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional587=self!=((void*)0),                                    _if_conditional587) {
                                        result_301->sline=self->sline;
                                    }
                                    if(_if_conditional588=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional588) {
                                        __dec_obj252=result_301->sname;
                                        result_301->sname=(char*)come_increment_ref_count(((char*)(right_value591=string_clone(self->sname))));
                                        __dec_obj252 = come_decrement_ref_count2(__dec_obj252, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value591 = come_decrement_ref_count2(right_value591, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    __result348__ = __result_obj__ = result_301;
                                    come_call_finalizer2(sEqNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result348__;
                                    come_call_finalizer2(sEqNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional590;
_Bool _if_conditional591;
_Bool _if_conditional592;
memset(&__result_obj__, 0, sizeof(void*));
                                        if(_if_conditional590=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional590) {
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional591=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional591) {
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        if(_if_conditional592=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional592) {
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional593;
struct sNotEq2Node* __result350__;
void* right_value596;
struct sNotEq2Node* result_303;
_Bool _if_conditional594;
void* right_value597;
struct sNode* __dec_obj253;
_Bool _if_conditional595;
void* right_value598;
struct sNode* __dec_obj254;
_Bool _if_conditional596;
_Bool _if_conditional597;
_Bool _if_conditional598;
void* right_value599;
char* __dec_obj255;
struct sNotEq2Node* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
right_value596 = (void*)0;
memset(&result_303, 0, sizeof(struct sNotEq2Node*));
right_value597 = (void*)0;
right_value598 = (void*)0;
right_value599 = (void*)0;
                                        if(_if_conditional593=self==(void*)0,                                        _if_conditional593) {
                                            __result350__ = __result_obj__ = (void*)0;
                                            return __result350__;
                                        }
                                        result_303=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value596=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"))));
                                        come_call_finalizer2(sNotEq2Node_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(_if_conditional594=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional594) {
                                            __dec_obj253=result_303->mLeft;
                                            result_303->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value597=sNode_clone(self->mLeft))));
                                            if(__dec_obj253) { __dec_obj253 = come_decrement_ref_count2(__dec_obj253, ((struct sNode*)__dec_obj253)->finalize, ((struct sNode*)__dec_obj253)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value597) { right_value597 = come_decrement_ref_count2(right_value597, ((struct sNode*)right_value597)->finalize, ((struct sNode*)right_value597)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional595=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional595) {
                                            __dec_obj254=result_303->mRight;
                                            result_303->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value598=sNode_clone(self->mRight))));
                                            if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value598) { right_value598 = come_decrement_ref_count2(right_value598, ((struct sNode*)right_value598)->finalize, ((struct sNode*)right_value598)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        if(_if_conditional596=self!=((void*)0),                                        _if_conditional596) {
                                            result_303->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional597=self!=((void*)0),                                        _if_conditional597) {
                                            result_303->sline=self->sline;
                                        }
                                        if(_if_conditional598=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional598) {
                                            __dec_obj255=result_303->sname;
                                            result_303->sname=(char*)come_increment_ref_count(((char*)(right_value599=string_clone(self->sname))));
                                            __dec_obj255 = come_decrement_ref_count2(__dec_obj255, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value599 = come_decrement_ref_count2(right_value599, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        __result351__ = __result_obj__ = result_303;
                                        come_call_finalizer2(sNotEq2Node_finalize,result_303, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result351__;
                                        come_call_finalizer2(sNotEq2Node_finalize,result_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional600;
_Bool _if_conditional601;
_Bool _if_conditional602;
memset(&__result_obj__, 0, sizeof(void*));
                                            if(_if_conditional600=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional600) {
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional601=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional601) {
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            if(_if_conditional602=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional602) {
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional603;
struct sNotEqNode* __result353__;
void* right_value604;
struct sNotEqNode* result_305;
_Bool _if_conditional604;
void* right_value605;
struct sNode* __dec_obj256;
_Bool _if_conditional605;
void* right_value606;
struct sNode* __dec_obj257;
_Bool _if_conditional606;
_Bool _if_conditional607;
_Bool _if_conditional608;
void* right_value607;
char* __dec_obj258;
struct sNotEqNode* __result354__;
memset(&__result_obj__, 0, sizeof(void*));
right_value604 = (void*)0;
memset(&result_305, 0, sizeof(struct sNotEqNode*));
right_value605 = (void*)0;
right_value606 = (void*)0;
right_value607 = (void*)0;
                                            if(_if_conditional603=self==(void*)0,                                            _if_conditional603) {
                                                __result353__ = __result_obj__ = (void*)0;
                                                return __result353__;
                                            }
                                            result_305=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value604=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"))));
                                            come_call_finalizer2(sNotEqNode_finalize,right_value604, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            if(_if_conditional604=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional604) {
                                                __dec_obj256=result_305->mLeft;
                                                result_305->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value605=sNode_clone(self->mLeft))));
                                                if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count2(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value605) { right_value605 = come_decrement_ref_count2(right_value605, ((struct sNode*)right_value605)->finalize, ((struct sNode*)right_value605)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional605=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional605) {
                                                __dec_obj257=result_305->mRight;
                                                result_305->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value606=sNode_clone(self->mRight))));
                                                if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value606) { right_value606 = come_decrement_ref_count2(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            if(_if_conditional606=self!=((void*)0),                                            _if_conditional606) {
                                                result_305->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional607=self!=((void*)0),                                            _if_conditional607) {
                                                result_305->sline=self->sline;
                                            }
                                            if(_if_conditional608=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional608) {
                                                __dec_obj258=result_305->sname;
                                                result_305->sname=(char*)come_increment_ref_count(((char*)(right_value607=string_clone(self->sname))));
                                                __dec_obj258 = come_decrement_ref_count2(__dec_obj258, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value607 = come_decrement_ref_count2(right_value607, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            __result354__ = __result_obj__ = result_305;
                                            come_call_finalizer2(sNotEqNode_finalize,result_305, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result354__;
                                            come_call_finalizer2(sNotEqNode_finalize,result_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
void* right_value609;
struct sNode* node_306;
_Bool _while_condtional15;
_Bool _if_conditional609;
void* right_value610;
struct sNode* right_307;
void* right_value611;
void* right_value612;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value617;
struct sNode* __result359__;
_Bool _if_conditional619;
void* right_value618;
struct sNode* right_309;
void* right_value619;
void* right_value620;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* right_value625;
struct sNode* __result362__;
struct sNode* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
right_value609 = (void*)0;
memset(&node_306, 0, sizeof(struct sNode*));
right_value610 = (void*)0;
memset(&right_307, 0, sizeof(struct sNode*));
right_value611 = (void*)0;
right_value612 = (void*)0;
right_value617 = (void*)0;
right_value618 = (void*)0;
memset(&right_309, 0, sizeof(struct sNode*));
right_value619 = (void*)0;
right_value620 = (void*)0;
right_value625 = (void*)0;
    parse_sharp_v5(info);
    node_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value609=eq_exp(info))));
    if(right_value609) { right_value609 = come_decrement_ref_count2(right_value609, ((struct sNode*)right_value609)->finalize, ((struct sNode*)right_value609)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional15=*info->p,    _while_condtional15) {
        if(_if_conditional609=*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional609) {
            info->p++;
            skip_spaces_and_lf(info);
            right_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value610=and_exp(info))));
            if(right_value610) { right_value610 = come_decrement_ref_count2(right_value610, ((struct sNode*)right_value610)->finalize, ((struct sNode*)right_value610)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2540, "struct sNode");
            _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value612=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value611=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2540, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_306),(struct sNode*)come_increment_ref_count(right_307),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sAndNode_sline;
            _inf_value33->sname=(void*)sAndNode_sname;
            _inf_value33->terminated=(void*)sAndNode_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result359__ = __result_obj__ = ((struct sNode*)(right_value617=_inf_value33));
            if(right_307) { right_307 = come_decrement_ref_count2(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAndNode_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAndNode_finalize,right_value612, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value617) { right_value617 = come_decrement_ref_count2(right_value617, ((struct sNode*)right_value617)->finalize, ((struct sNode*)right_value617)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result359__;
            if(right_307) { right_307 = come_decrement_ref_count2(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional619=*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional619) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value618=and_exp(info))));
                if(right_value618) { right_value618 = come_decrement_ref_count2(right_value618, ((struct sNode*)right_value618)->finalize, ((struct sNode*)right_value618)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2548, "struct sNode");
                _inf_obj_value34=come_increment_ref_count(((struct sAndNode*)(right_value620=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value619=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2548, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_306),(struct sNode*)come_increment_ref_count(right_309),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sAndNode_finalize;
                _inf_value34->clone=(void*)sAndNode_clone;
                _inf_value34->compile=(void*)sAndNode_compile;
                _inf_value34->sline=(void*)sAndNode_sline;
                _inf_value34->sname=(void*)sAndNode_sname;
                _inf_value34->terminated=(void*)sAndNode_terminated;
                _inf_value34->kind=(void*)sAndNode_kind;
                __result362__ = __result_obj__ = ((struct sNode*)(right_value625=_inf_value34));
                if(right_309) { right_309 = come_decrement_ref_count2(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sAndNode_finalize,right_value619, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sAndNode_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value625) { right_value625 = come_decrement_ref_count2(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result362__;
                if(right_309) { right_309 = come_decrement_ref_count2(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result363__ = __result_obj__ = node_306;
    if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result363__;
    if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional620;
_Bool _if_conditional621;
_Bool _if_conditional622;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional620=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional620) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional621=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional621) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional622=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional622) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional623;
struct sAndNode* __result360__;
void* right_value621;
struct sAndNode* result_310;
_Bool _if_conditional624;
void* right_value622;
struct sNode* __dec_obj262;
_Bool _if_conditional625;
void* right_value623;
struct sNode* __dec_obj263;
_Bool _if_conditional626;
_Bool _if_conditional627;
_Bool _if_conditional628;
void* right_value624;
char* __dec_obj264;
struct sAndNode* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value621 = (void*)0;
memset(&result_310, 0, sizeof(struct sAndNode*));
right_value622 = (void*)0;
right_value623 = (void*)0;
right_value624 = (void*)0;
                    if(_if_conditional623=self==(void*)0,                    _if_conditional623) {
                        __result360__ = __result_obj__ = (void*)0;
                        return __result360__;
                    }
                    result_310=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value621=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"))));
                    come_call_finalizer2(sAndNode_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional624=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional624) {
                        __dec_obj262=result_310->mLeft;
                        result_310->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value622=sNode_clone(self->mLeft))));
                        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count2(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value622) { right_value622 = come_decrement_ref_count2(right_value622, ((struct sNode*)right_value622)->finalize, ((struct sNode*)right_value622)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional625=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional625) {
                        __dec_obj263=result_310->mRight;
                        result_310->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value623=sNode_clone(self->mRight))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value623) { right_value623 = come_decrement_ref_count2(right_value623, ((struct sNode*)right_value623)->finalize, ((struct sNode*)right_value623)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional626=self!=((void*)0),                    _if_conditional626) {
                        result_310->mQuote=self->mQuote;
                    }
                    if(_if_conditional627=self!=((void*)0),                    _if_conditional627) {
                        result_310->sline=self->sline;
                    }
                    if(_if_conditional628=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional628) {
                        __dec_obj264=result_310->sname;
                        result_310->sname=(char*)come_increment_ref_count(((char*)(right_value624=string_clone(self->sname))));
                        __dec_obj264 = come_decrement_ref_count2(__dec_obj264, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value624 = come_decrement_ref_count2(right_value624, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result361__ = __result_obj__ = result_310;
                    come_call_finalizer2(sAndNode_finalize,result_310, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result361__;
                    come_call_finalizer2(sAndNode_finalize,result_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
void* right_value626;
struct sNode* node_311;
_Bool _while_condtional16;
_Bool _if_conditional629;
void* right_value627;
struct sNode* right_312;
void* right_value628;
void* right_value629;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value634;
struct sNode* __result366__;
_Bool _if_conditional639;
void* right_value635;
struct sNode* right_314;
void* right_value636;
void* right_value637;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* right_value642;
struct sNode* __result369__;
struct sNode* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value626 = (void*)0;
memset(&node_311, 0, sizeof(struct sNode*));
right_value627 = (void*)0;
memset(&right_312, 0, sizeof(struct sNode*));
right_value628 = (void*)0;
right_value629 = (void*)0;
right_value634 = (void*)0;
right_value635 = (void*)0;
memset(&right_314, 0, sizeof(struct sNode*));
right_value636 = (void*)0;
right_value637 = (void*)0;
right_value642 = (void*)0;
    parse_sharp_v5(info);
    node_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value626=and_exp(info))));
    if(right_value626) { right_value626 = come_decrement_ref_count2(right_value626, ((struct sNode*)right_value626)->finalize, ((struct sNode*)right_value626)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional16=*info->p,    _while_condtional16) {
        if(_if_conditional629=*info->p==94&&*(info->p+1)!=61,        _if_conditional629) {
            info->p++;
            skip_spaces_and_lf(info);
            right_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value627=xor_exp(info))));
            if(right_value627) { right_value627 = come_decrement_ref_count2(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2575, "struct sNode");
            _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value629=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value628=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2575, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_312),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sXOrNode_sline;
            _inf_value35->sname=(void*)sXOrNode_sname;
            _inf_value35->terminated=(void*)sXOrNode_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result366__ = __result_obj__ = ((struct sNode*)(right_value634=_inf_value35));
            if(right_312) { right_312 = come_decrement_ref_count2(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_311) { node_311 = come_decrement_ref_count2(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sXOrNode_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sXOrNode_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value634) { right_value634 = come_decrement_ref_count2(right_value634, ((struct sNode*)right_value634)->finalize, ((struct sNode*)right_value634)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result366__;
            if(right_312) { right_312 = come_decrement_ref_count2(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional639=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional639) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value635=xor_exp(info))));
                if(right_value635) { right_value635 = come_decrement_ref_count2(right_value635, ((struct sNode*)right_value635)->finalize, ((struct sNode*)right_value635)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2583, "struct sNode");
                _inf_obj_value36=come_increment_ref_count(((struct sXOrNode*)(right_value637=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value636=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2583, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_314),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sXOrNode_finalize;
                _inf_value36->clone=(void*)sXOrNode_clone;
                _inf_value36->compile=(void*)sXOrNode_compile;
                _inf_value36->sline=(void*)sXOrNode_sline;
                _inf_value36->sname=(void*)sXOrNode_sname;
                _inf_value36->terminated=(void*)sXOrNode_terminated;
                _inf_value36->kind=(void*)sXOrNode_kind;
                __result369__ = __result_obj__ = ((struct sNode*)(right_value642=_inf_value36));
                if(right_314) { right_314 = come_decrement_ref_count2(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_311) { node_311 = come_decrement_ref_count2(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sXOrNode_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sXOrNode_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value642) { right_value642 = come_decrement_ref_count2(right_value642, ((struct sNode*)right_value642)->finalize, ((struct sNode*)right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result369__;
                if(right_314) { right_314 = come_decrement_ref_count2(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result370__ = __result_obj__ = node_311;
    if(node_311) { node_311 = come_decrement_ref_count2(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result370__;
    if(node_311) { node_311 = come_decrement_ref_count2(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional640;
_Bool _if_conditional641;
_Bool _if_conditional642;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional640=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional640) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional641=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional641) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional642=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional642) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional643;
struct sXOrNode* __result367__;
void* right_value638;
struct sXOrNode* result_315;
_Bool _if_conditional644;
void* right_value639;
struct sNode* __dec_obj268;
_Bool _if_conditional645;
void* right_value640;
struct sNode* __dec_obj269;
_Bool _if_conditional646;
_Bool _if_conditional647;
_Bool _if_conditional648;
void* right_value641;
char* __dec_obj270;
struct sXOrNode* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
right_value638 = (void*)0;
memset(&result_315, 0, sizeof(struct sXOrNode*));
right_value639 = (void*)0;
right_value640 = (void*)0;
right_value641 = (void*)0;
                    if(_if_conditional643=self==(void*)0,                    _if_conditional643) {
                        __result367__ = __result_obj__ = (void*)0;
                        return __result367__;
                    }
                    result_315=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value638=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"))));
                    come_call_finalizer2(sXOrNode_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional644=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional644) {
                        __dec_obj268=result_315->mLeft;
                        result_315->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value639=sNode_clone(self->mLeft))));
                        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count2(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value639) { right_value639 = come_decrement_ref_count2(right_value639, ((struct sNode*)right_value639)->finalize, ((struct sNode*)right_value639)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional645=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional645) {
                        __dec_obj269=result_315->mRight;
                        result_315->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value640=sNode_clone(self->mRight))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value640) { right_value640 = come_decrement_ref_count2(right_value640, ((struct sNode*)right_value640)->finalize, ((struct sNode*)right_value640)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional646=self!=((void*)0),                    _if_conditional646) {
                        result_315->mQuote=self->mQuote;
                    }
                    if(_if_conditional647=self!=((void*)0),                    _if_conditional647) {
                        result_315->sline=self->sline;
                    }
                    if(_if_conditional648=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional648) {
                        __dec_obj270=result_315->sname;
                        result_315->sname=(char*)come_increment_ref_count(((char*)(right_value641=string_clone(self->sname))));
                        __dec_obj270 = come_decrement_ref_count2(__dec_obj270, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value641 = come_decrement_ref_count2(right_value641, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result368__ = __result_obj__ = result_315;
                    come_call_finalizer2(sXOrNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result368__;
                    come_call_finalizer2(sXOrNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
void* right_value643;
struct sNode* node_316;
_Bool _while_condtional17;
_Bool _if_conditional649;
void* right_value644;
struct sNode* right_317;
void* right_value645;
void* right_value646;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value651;
struct sNode* __result373__;
_Bool _if_conditional659;
void* right_value652;
struct sNode* right_319;
void* right_value653;
void* right_value654;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* right_value659;
struct sNode* __result376__;
struct sNode* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
right_value643 = (void*)0;
memset(&node_316, 0, sizeof(struct sNode*));
right_value644 = (void*)0;
memset(&right_317, 0, sizeof(struct sNode*));
right_value645 = (void*)0;
right_value646 = (void*)0;
right_value651 = (void*)0;
right_value652 = (void*)0;
memset(&right_319, 0, sizeof(struct sNode*));
right_value653 = (void*)0;
right_value654 = (void*)0;
right_value659 = (void*)0;
    parse_sharp_v5(info);
    node_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value643=xor_exp(info))));
    if(right_value643) { right_value643 = come_decrement_ref_count2(right_value643, ((struct sNode*)right_value643)->finalize, ((struct sNode*)right_value643)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional17=*info->p,    _while_condtional17) {
        if(_if_conditional649=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional649) {
            info->p++;
            skip_spaces_and_lf(info);
            right_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value644=or_exp(info))));
            if(right_value644) { right_value644 = come_decrement_ref_count2(right_value644, ((struct sNode*)right_value644)->finalize, ((struct sNode*)right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2610, "struct sNode");
            _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value646=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value645=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2610, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_316),(struct sNode*)come_increment_ref_count(right_317),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sOrNode_sline;
            _inf_value37->sname=(void*)sOrNode_sname;
            _inf_value37->terminated=(void*)sOrNode_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result373__ = __result_obj__ = ((struct sNode*)(right_value651=_inf_value37));
            if(right_317) { right_317 = come_decrement_ref_count2(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_316) { node_316 = come_decrement_ref_count2(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sOrNode_finalize,right_value645, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sOrNode_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value651) { right_value651 = come_decrement_ref_count2(right_value651, ((struct sNode*)right_value651)->finalize, ((struct sNode*)right_value651)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result373__;
            if(right_317) { right_317 = come_decrement_ref_count2(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional659=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional659) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value652=or_exp(info))));
                if(right_value652) { right_value652 = come_decrement_ref_count2(right_value652, ((struct sNode*)right_value652)->finalize, ((struct sNode*)right_value652)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2618, "struct sNode");
                _inf_obj_value38=come_increment_ref_count(((struct sOrNode*)(right_value654=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value653=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2618, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_316),(struct sNode*)come_increment_ref_count(right_319),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sOrNode_finalize;
                _inf_value38->clone=(void*)sOrNode_clone;
                _inf_value38->compile=(void*)sOrNode_compile;
                _inf_value38->sline=(void*)sOrNode_sline;
                _inf_value38->sname=(void*)sOrNode_sname;
                _inf_value38->terminated=(void*)sOrNode_terminated;
                _inf_value38->kind=(void*)sOrNode_kind;
                __result376__ = __result_obj__ = ((struct sNode*)(right_value659=_inf_value38));
                if(right_319) { right_319 = come_decrement_ref_count2(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_316) { node_316 = come_decrement_ref_count2(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sOrNode_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sOrNode_finalize,right_value654, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value659) { right_value659 = come_decrement_ref_count2(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result376__;
                if(right_319) { right_319 = come_decrement_ref_count2(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result377__ = __result_obj__ = node_316;
    if(node_316) { node_316 = come_decrement_ref_count2(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result377__;
    if(node_316) { node_316 = come_decrement_ref_count2(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional660;
_Bool _if_conditional661;
_Bool _if_conditional662;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional660=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional660) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional661=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional661) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional662=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional662) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional663;
struct sOrNode* __result374__;
void* right_value655;
struct sOrNode* result_320;
_Bool _if_conditional664;
void* right_value656;
struct sNode* __dec_obj274;
_Bool _if_conditional665;
void* right_value657;
struct sNode* __dec_obj275;
_Bool _if_conditional666;
_Bool _if_conditional667;
_Bool _if_conditional668;
void* right_value658;
char* __dec_obj276;
struct sOrNode* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
right_value655 = (void*)0;
memset(&result_320, 0, sizeof(struct sOrNode*));
right_value656 = (void*)0;
right_value657 = (void*)0;
right_value658 = (void*)0;
                    if(_if_conditional663=self==(void*)0,                    _if_conditional663) {
                        __result374__ = __result_obj__ = (void*)0;
                        return __result374__;
                    }
                    result_320=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value655=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"))));
                    come_call_finalizer2(sOrNode_finalize,right_value655, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional664=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional664) {
                        __dec_obj274=result_320->mLeft;
                        result_320->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value656=sNode_clone(self->mLeft))));
                        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count2(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value656) { right_value656 = come_decrement_ref_count2(right_value656, ((struct sNode*)right_value656)->finalize, ((struct sNode*)right_value656)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional665=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional665) {
                        __dec_obj275=result_320->mRight;
                        result_320->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value657=sNode_clone(self->mRight))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value657) { right_value657 = come_decrement_ref_count2(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional666=self!=((void*)0),                    _if_conditional666) {
                        result_320->mQuote=self->mQuote;
                    }
                    if(_if_conditional667=self!=((void*)0),                    _if_conditional667) {
                        result_320->sline=self->sline;
                    }
                    if(_if_conditional668=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional668) {
                        __dec_obj276=result_320->sname;
                        result_320->sname=(char*)come_increment_ref_count(((char*)(right_value658=string_clone(self->sname))));
                        __dec_obj276 = come_decrement_ref_count2(__dec_obj276, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value658 = come_decrement_ref_count2(right_value658, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result375__ = __result_obj__ = result_320;
                    come_call_finalizer2(sOrNode_finalize,result_320, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result375__;
                    come_call_finalizer2(sOrNode_finalize,result_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
void* right_value660;
struct sNode* node_321;
_Bool _while_condtional18;
_Bool _if_conditional669;
void* right_value661;
struct sNode* right_322;
void* right_value662;
void* right_value663;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value668;
struct sNode* __result380__;
_Bool _if_conditional679;
void* right_value669;
struct sNode* right_324;
void* right_value670;
void* right_value671;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* right_value676;
struct sNode* __result383__;
struct sNode* __result384__;
memset(&__result_obj__, 0, sizeof(void*));
right_value660 = (void*)0;
memset(&node_321, 0, sizeof(struct sNode*));
right_value661 = (void*)0;
memset(&right_322, 0, sizeof(struct sNode*));
right_value662 = (void*)0;
right_value663 = (void*)0;
right_value668 = (void*)0;
right_value669 = (void*)0;
memset(&right_324, 0, sizeof(struct sNode*));
right_value670 = (void*)0;
right_value671 = (void*)0;
right_value676 = (void*)0;
    parse_sharp_v5(info);
    node_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value660=or_exp(info))));
    if(right_value660) { right_value660 = come_decrement_ref_count2(right_value660, ((struct sNode*)right_value660)->finalize, ((struct sNode*)right_value660)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional18=*info->p,    _while_condtional18) {
        if(_if_conditional669=*info->p==38&&*(info->p+1)==38,        _if_conditional669) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value661=andand_exp(info))));
            if(right_value661) { right_value661 = come_decrement_ref_count2(right_value661, ((struct sNode*)right_value661)->finalize, ((struct sNode*)right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2645, "struct sNode");
            _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value663=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value662=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2645, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_321),(struct sNode*)come_increment_ref_count(right_322),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sAndAndNode_sline;
            _inf_value39->sname=(void*)sAndAndNode_sname;
            _inf_value39->terminated=(void*)sAndAndNode_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result380__ = __result_obj__ = ((struct sNode*)(right_value668=_inf_value39));
            if(right_322) { right_322 = come_decrement_ref_count2(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAndAndNode_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAndAndNode_finalize,right_value663, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value668) { right_value668 = come_decrement_ref_count2(right_value668, ((struct sNode*)right_value668)->finalize, ((struct sNode*)right_value668)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result380__;
            if(right_322) { right_322 = come_decrement_ref_count2(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional679=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional679) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value669=andand_exp(info))));
                if(right_value669) { right_value669 = come_decrement_ref_count2(right_value669, ((struct sNode*)right_value669)->finalize, ((struct sNode*)right_value669)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2653, "struct sNode");
                _inf_obj_value40=come_increment_ref_count(((struct sAndAndNode*)(right_value671=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value670=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2653, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_321),(struct sNode*)come_increment_ref_count(right_324),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sAndAndNode_finalize;
                _inf_value40->clone=(void*)sAndAndNode_clone;
                _inf_value40->compile=(void*)sAndAndNode_compile;
                _inf_value40->sline=(void*)sAndAndNode_sline;
                _inf_value40->sname=(void*)sAndAndNode_sname;
                _inf_value40->terminated=(void*)sAndAndNode_terminated;
                _inf_value40->kind=(void*)sAndAndNode_kind;
                __result383__ = __result_obj__ = ((struct sNode*)(right_value676=_inf_value40));
                if(right_324) { right_324 = come_decrement_ref_count2(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sAndAndNode_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sAndAndNode_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value676) { right_value676 = come_decrement_ref_count2(right_value676, ((struct sNode*)right_value676)->finalize, ((struct sNode*)right_value676)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result383__;
                if(right_324) { right_324 = come_decrement_ref_count2(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result384__ = __result_obj__ = node_321;
    if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result384__;
    if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional680;
_Bool _if_conditional681;
_Bool _if_conditional682;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional680=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional680) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional681=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional681) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional682=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional682) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional683;
struct sAndAndNode* __result381__;
void* right_value672;
struct sAndAndNode* result_325;
_Bool _if_conditional684;
void* right_value673;
struct sNode* __dec_obj280;
_Bool _if_conditional685;
void* right_value674;
struct sNode* __dec_obj281;
_Bool _if_conditional686;
_Bool _if_conditional687;
_Bool _if_conditional688;
void* right_value675;
char* __dec_obj282;
struct sAndAndNode* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
right_value672 = (void*)0;
memset(&result_325, 0, sizeof(struct sAndAndNode*));
right_value673 = (void*)0;
right_value674 = (void*)0;
right_value675 = (void*)0;
                    if(_if_conditional683=self==(void*)0,                    _if_conditional683) {
                        __result381__ = __result_obj__ = (void*)0;
                        return __result381__;
                    }
                    result_325=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value672=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"))));
                    come_call_finalizer2(sAndAndNode_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional684=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional684) {
                        __dec_obj280=result_325->mLeft;
                        result_325->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value673=sNode_clone(self->mLeft))));
                        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count2(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value673) { right_value673 = come_decrement_ref_count2(right_value673, ((struct sNode*)right_value673)->finalize, ((struct sNode*)right_value673)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional685=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional685) {
                        __dec_obj281=result_325->mRight;
                        result_325->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value674=sNode_clone(self->mRight))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value674) { right_value674 = come_decrement_ref_count2(right_value674, ((struct sNode*)right_value674)->finalize, ((struct sNode*)right_value674)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional686=self!=((void*)0),                    _if_conditional686) {
                        result_325->mQuote=self->mQuote;
                    }
                    if(_if_conditional687=self!=((void*)0),                    _if_conditional687) {
                        result_325->sline=self->sline;
                    }
                    if(_if_conditional688=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional688) {
                        __dec_obj282=result_325->sname;
                        result_325->sname=(char*)come_increment_ref_count(((char*)(right_value675=string_clone(self->sname))));
                        __dec_obj282 = come_decrement_ref_count2(__dec_obj282, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value675 = come_decrement_ref_count2(right_value675, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result382__ = __result_obj__ = result_325;
                    come_call_finalizer2(sAndAndNode_finalize,result_325, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result382__;
                    come_call_finalizer2(sAndAndNode_finalize,result_325, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
void* right_value677;
struct sNode* node_326;
_Bool _while_condtional19;
_Bool _if_conditional689;
void* right_value678;
struct sNode* right_327;
void* right_value679;
void* right_value680;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value685;
struct sNode* __result387__;
_Bool _if_conditional699;
void* right_value686;
struct sNode* right_329;
void* right_value687;
void* right_value688;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* right_value693;
struct sNode* __result390__;
struct sNode* __result391__;
memset(&__result_obj__, 0, sizeof(void*));
right_value677 = (void*)0;
memset(&node_326, 0, sizeof(struct sNode*));
right_value678 = (void*)0;
memset(&right_327, 0, sizeof(struct sNode*));
right_value679 = (void*)0;
right_value680 = (void*)0;
right_value685 = (void*)0;
right_value686 = (void*)0;
memset(&right_329, 0, sizeof(struct sNode*));
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value693 = (void*)0;
    parse_sharp_v5(info);
    node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value677=andand_exp(info))));
    if(right_value677) { right_value677 = come_decrement_ref_count2(right_value677, ((struct sNode*)right_value677)->finalize, ((struct sNode*)right_value677)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional19=*info->p,    _while_condtional19) {
        if(_if_conditional689=*info->p==124&&*(info->p+1)==124,        _if_conditional689) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value678=oror_exp(info))));
            if(right_value678) { right_value678 = come_decrement_ref_count2(right_value678, ((struct sNode*)right_value678)->finalize, ((struct sNode*)right_value678)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2680, "struct sNode");
            _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value680=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value679=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2680, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(right_327),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sOrOrNode_sline;
            _inf_value41->sname=(void*)sOrOrNode_sname;
            _inf_value41->terminated=(void*)sOrOrNode_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result387__ = __result_obj__ = ((struct sNode*)(right_value685=_inf_value41));
            if(right_327) { right_327 = come_decrement_ref_count2(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sOrOrNode_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sOrOrNode_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value685) { right_value685 = come_decrement_ref_count2(right_value685, ((struct sNode*)right_value685)->finalize, ((struct sNode*)right_value685)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result387__;
            if(right_327) { right_327 = come_decrement_ref_count2(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            if(_if_conditional699=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional699) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value686=oror_exp(info))));
                if(right_value686) { right_value686 = come_decrement_ref_count2(right_value686, ((struct sNode*)right_value686)->finalize, ((struct sNode*)right_value686)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2688, "struct sNode");
                _inf_obj_value42=come_increment_ref_count(((struct sOrOrNode*)(right_value688=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value687=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2688, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(right_329),(_Bool)1,info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sOrOrNode_finalize;
                _inf_value42->clone=(void*)sOrOrNode_clone;
                _inf_value42->compile=(void*)sOrOrNode_compile;
                _inf_value42->sline=(void*)sOrOrNode_sline;
                _inf_value42->sname=(void*)sOrOrNode_sname;
                _inf_value42->terminated=(void*)sOrOrNode_terminated;
                _inf_value42->kind=(void*)sOrOrNode_kind;
                __result390__ = __result_obj__ = ((struct sNode*)(right_value693=_inf_value42));
                if(right_329) { right_329 = come_decrement_ref_count2(right_329, ((struct sNode*)right_329)->finalize, ((struct sNode*)right_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sOrOrNode_finalize,right_value687, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sOrOrNode_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value693) { right_value693 = come_decrement_ref_count2(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result390__;
                if(right_329) { right_329 = come_decrement_ref_count2(right_329, ((struct sNode*)right_329)->finalize, ((struct sNode*)right_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result391__ = __result_obj__ = node_326;
    if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result391__;
    if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional700;
_Bool _if_conditional701;
_Bool _if_conditional702;
memset(&__result_obj__, 0, sizeof(void*));
                    if(_if_conditional700=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional700) {
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional701=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional701) {
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    if(_if_conditional702=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional702) {
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional703;
struct sOrOrNode* __result388__;
void* right_value689;
struct sOrOrNode* result_330;
_Bool _if_conditional704;
void* right_value690;
struct sNode* __dec_obj286;
_Bool _if_conditional705;
void* right_value691;
struct sNode* __dec_obj287;
_Bool _if_conditional706;
_Bool _if_conditional707;
_Bool _if_conditional708;
void* right_value692;
char* __dec_obj288;
struct sOrOrNode* __result389__;
memset(&__result_obj__, 0, sizeof(void*));
right_value689 = (void*)0;
memset(&result_330, 0, sizeof(struct sOrOrNode*));
right_value690 = (void*)0;
right_value691 = (void*)0;
right_value692 = (void*)0;
                    if(_if_conditional703=self==(void*)0,                    _if_conditional703) {
                        __result388__ = __result_obj__ = (void*)0;
                        return __result388__;
                    }
                    result_330=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value689=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"))));
                    come_call_finalizer2(sOrOrNode_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(_if_conditional704=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional704) {
                        __dec_obj286=result_330->mLeft;
                        result_330->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value690=sNode_clone(self->mLeft))));
                        if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count2(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value690) { right_value690 = come_decrement_ref_count2(right_value690, ((struct sNode*)right_value690)->finalize, ((struct sNode*)right_value690)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional705=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional705) {
                        __dec_obj287=result_330->mRight;
                        result_330->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value691=sNode_clone(self->mRight))));
                        if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value691) { right_value691 = come_decrement_ref_count2(right_value691, ((struct sNode*)right_value691)->finalize, ((struct sNode*)right_value691)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    if(_if_conditional706=self!=((void*)0),                    _if_conditional706) {
                        result_330->mQuote=self->mQuote;
                    }
                    if(_if_conditional707=self!=((void*)0),                    _if_conditional707) {
                        result_330->sline=self->sline;
                    }
                    if(_if_conditional708=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional708) {
                        __dec_obj288=result_330->sname;
                        result_330->sname=(char*)come_increment_ref_count(((char*)(right_value692=string_clone(self->sname))));
                        __dec_obj288 = come_decrement_ref_count2(__dec_obj288, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value692 = come_decrement_ref_count2(right_value692, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    __result389__ = __result_obj__ = result_330;
                    come_call_finalizer2(sOrOrNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result389__;
                    come_call_finalizer2(sOrOrNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
void* right_value694;
struct sNode* node_331;
_Bool _while_condtional20;
_Bool _if_conditional709;
void* right_value695;
struct sNode* node2_332;
void* right_value696;
void* right_value697;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* right_value702;
struct sNode* __result394__;
struct sNode* __result395__;
memset(&__result_obj__, 0, sizeof(void*));
right_value694 = (void*)0;
memset(&node_331, 0, sizeof(struct sNode*));
right_value695 = (void*)0;
memset(&node2_332, 0, sizeof(struct sNode*));
right_value696 = (void*)0;
right_value697 = (void*)0;
right_value702 = (void*)0;
    parse_sharp_v5(info);
    node_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value694=oror_exp(info))));
    if(right_value694) { right_value694 = come_decrement_ref_count2(right_value694, ((struct sNode*)right_value694)->finalize, ((struct sNode*)right_value694)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional20=*info->p,    _while_condtional20) {
        if(_if_conditional709=!info->no_comma&&*info->p==44,        _if_conditional709) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value695=oror_exp(info))));
            if(right_value695) { right_value695 = come_decrement_ref_count2(right_value695, ((struct sNode*)right_value695)->finalize, ((struct sNode*)right_value695)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2715, "struct sNode");
            _inf_obj_value43=come_increment_ref_count(((struct sCommaNode*)(right_value697=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value696=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2715, "sCommaNode")))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(node2_332),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sCommaNode_sline;
            _inf_value43->sname=(void*)sCommaNode_sname;
            _inf_value43->terminated=(void*)sCommaNode_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result394__ = __result_obj__ = ((struct sNode*)(right_value702=_inf_value43));
            if(node2_332) { node2_332 = come_decrement_ref_count2(node2_332, ((struct sNode*)node2_332)->finalize, ((struct sNode*)node2_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sCommaNode_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sCommaNode_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value702) { right_value702 = come_decrement_ref_count2(right_value702, ((struct sNode*)right_value702)->finalize, ((struct sNode*)right_value702)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result394__;
            if(node2_332) { node2_332 = come_decrement_ref_count2(node2_332, ((struct sNode*)node2_332)->finalize, ((struct sNode*)node2_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result395__ = __result_obj__ = node_331;
    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result395__;
    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional710;
_Bool _if_conditional711;
_Bool _if_conditional712;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional710=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional710) {
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional711=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional711) {
                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional712=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional712) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional713;
struct sCommaNode* __result392__;
void* right_value698;
struct sCommaNode* result_333;
_Bool _if_conditional714;
void* right_value699;
struct sNode* __dec_obj289;
_Bool _if_conditional715;
void* right_value700;
struct sNode* __dec_obj290;
_Bool _if_conditional716;
_Bool _if_conditional717;
void* right_value701;
char* __dec_obj291;
struct sCommaNode* __result393__;
memset(&__result_obj__, 0, sizeof(void*));
right_value698 = (void*)0;
memset(&result_333, 0, sizeof(struct sCommaNode*));
right_value699 = (void*)0;
right_value700 = (void*)0;
right_value701 = (void*)0;
                if(_if_conditional713=self==(void*)0,                _if_conditional713) {
                    __result392__ = __result_obj__ = (void*)0;
                    return __result392__;
                }
                result_333=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value698=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"))));
                come_call_finalizer2(sCommaNode_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional714=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional714) {
                    __dec_obj289=result_333->mLeft;
                    result_333->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value699=sNode_clone(self->mLeft))));
                    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count2(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value699) { right_value699 = come_decrement_ref_count2(right_value699, ((struct sNode*)right_value699)->finalize, ((struct sNode*)right_value699)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional715=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional715) {
                    __dec_obj290=result_333->mRight;
                    result_333->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value700=sNode_clone(self->mRight))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value700) { right_value700 = come_decrement_ref_count2(right_value700, ((struct sNode*)right_value700)->finalize, ((struct sNode*)right_value700)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional716=self!=((void*)0),                _if_conditional716) {
                    result_333->sline=self->sline;
                }
                if(_if_conditional717=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional717) {
                    __dec_obj291=result_333->sname;
                    result_333->sname=(char*)come_increment_ref_count(((char*)(right_value701=string_clone(self->sname))));
                    __dec_obj291 = come_decrement_ref_count2(__dec_obj291, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value701 = come_decrement_ref_count2(right_value701, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result393__ = __result_obj__ = result_333;
                come_call_finalizer2(sCommaNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result393__;
                come_call_finalizer2(sCommaNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
void* right_value703;
struct sNode* node_334;
_Bool _while_condtional21;
_Bool _if_conditional718;
struct sNode* value1_335;
_Bool _if_conditional719;
void* right_value704;
void* right_value705;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value708;
struct sNode* __dec_obj293;
void* right_value709;
struct sNode* __dec_obj294;
void* right_value710;
struct sNode* value2_337;
void* right_value711;
void* right_value712;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* right_value718;
struct sNode* __result400__;
struct sNode* __result401__;
memset(&__result_obj__, 0, sizeof(void*));
right_value703 = (void*)0;
memset(&node_334, 0, sizeof(struct sNode*));
memset(&value1_335, 0, sizeof(struct sNode*));
right_value704 = (void*)0;
right_value705 = (void*)0;
right_value708 = (void*)0;
right_value709 = (void*)0;
right_value710 = (void*)0;
memset(&value2_337, 0, sizeof(struct sNode*));
right_value711 = (void*)0;
right_value712 = (void*)0;
right_value718 = (void*)0;
    parse_sharp_v5(info);
    node_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value703=comma_exp(info))));
    if(right_value703) { right_value703 = come_decrement_ref_count2(right_value703, ((struct sNode*)right_value703)->finalize, ((struct sNode*)right_value703)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    parse_sharp_v5(info);
    while(_while_condtional21=*info->p,    _while_condtional21) {
        if(_if_conditional718=*info->p==63,        _if_conditional718) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional719=*info->p==58,            _if_conditional719) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2744, "struct sNode");
                _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value705=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value704=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2744, "sNullNode")))),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNullNode_sline;
                _inf_value44->sname=(void*)sNullNode_sname;
                _inf_value44->terminated=(void*)sNullNode_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj293=value1_335;
                value1_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value708=_inf_value44)));
                if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count2(__dec_obj293, ((struct sNode*)__dec_obj293)->finalize, ((struct sNode*)__dec_obj293)->_protocol_obj, 0,0,0, (void*)0); }
                come_call_finalizer2(sNullNode_finalize,right_value704, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sNullNode_finalize,right_value705, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value708) { right_value708 = come_decrement_ref_count2(right_value708, ((struct sNode*)right_value708)->finalize, ((struct sNode*)right_value708)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            else {
                __dec_obj294=value1_335;
                value1_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value709=comma_exp(info))));
                if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value709) { right_value709 = come_decrement_ref_count2(right_value709, ((struct sNode*)right_value709)->finalize, ((struct sNode*)right_value709)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value710=comma_exp(info))));
            if(right_value710) { right_value710 = come_decrement_ref_count2(right_value710, ((struct sNode*)right_value710)->finalize, ((struct sNode*)right_value710)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            parse_sharp_v5(info);
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2758, "struct sNode");
            _inf_obj_value45=come_increment_ref_count(((struct sConditionalNode*)(right_value712=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value711=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2758, "sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_334),(struct sNode*)come_increment_ref_count(value1_335),(struct sNode*)come_increment_ref_count(value2_337),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sConditionalNode_sline;
            _inf_value45->sname=(void*)sConditionalNode_sname;
            _inf_value45->terminated=(void*)sConditionalNode_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result400__ = __result_obj__ = ((struct sNode*)(right_value718=_inf_value45));
            if(value1_335) { value1_335 = come_decrement_ref_count2(value1_335, ((struct sNode*)value1_335)->finalize, ((struct sNode*)value1_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_337) { value2_337 = come_decrement_ref_count2(value2_337, ((struct sNode*)value2_337)->finalize, ((struct sNode*)value2_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sConditionalNode_finalize,right_value711, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sConditionalNode_finalize,right_value712, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value718) { right_value718 = come_decrement_ref_count2(right_value718, ((struct sNode*)right_value718)->finalize, ((struct sNode*)right_value718)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result400__;
            if(value1_335) { value1_335 = come_decrement_ref_count2(value1_335, ((struct sNode*)value1_335)->finalize, ((struct sNode*)value1_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_337) { value2_337 = come_decrement_ref_count2(value2_337, ((struct sNode*)value2_337)->finalize, ((struct sNode*)value2_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result401__ = __result_obj__ = node_334;
    if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result401__;
    if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional724;
_Bool _if_conditional725;
_Bool _if_conditional726;
_Bool _if_conditional727;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional724=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional724) {
                    if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional725=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional725) {
                    if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional726=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional726) {
                    if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                if(_if_conditional727=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional727) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional728;
struct sConditionalNode* __result398__;
void* right_value713;
struct sConditionalNode* result_338;
_Bool _if_conditional729;
void* right_value714;
struct sNode* __dec_obj295;
_Bool _if_conditional730;
void* right_value715;
struct sNode* __dec_obj296;
_Bool _if_conditional731;
void* right_value716;
struct sNode* __dec_obj297;
_Bool _if_conditional732;
_Bool _if_conditional733;
void* right_value717;
char* __dec_obj298;
struct sConditionalNode* __result399__;
memset(&__result_obj__, 0, sizeof(void*));
right_value713 = (void*)0;
memset(&result_338, 0, sizeof(struct sConditionalNode*));
right_value714 = (void*)0;
right_value715 = (void*)0;
right_value716 = (void*)0;
right_value717 = (void*)0;
                if(_if_conditional728=self==(void*)0,                _if_conditional728) {
                    __result398__ = __result_obj__ = (void*)0;
                    return __result398__;
                }
                result_338=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value713=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"))));
                come_call_finalizer2(sConditionalNode_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional729=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional729) {
                    __dec_obj295=result_338->mValue1;
                    result_338->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value714=sNode_clone(self->mValue1))));
                    if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value714) { right_value714 = come_decrement_ref_count2(right_value714, ((struct sNode*)right_value714)->finalize, ((struct sNode*)right_value714)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional730=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional730) {
                    __dec_obj296=result_338->mValue2;
                    result_338->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value715=sNode_clone(self->mValue2))));
                    if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value715) { right_value715 = come_decrement_ref_count2(right_value715, ((struct sNode*)right_value715)->finalize, ((struct sNode*)right_value715)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional731=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional731) {
                    __dec_obj297=result_338->mValue3;
                    result_338->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value716=sNode_clone(self->mValue3))));
                    if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value716) { right_value716 = come_decrement_ref_count2(right_value716, ((struct sNode*)right_value716)->finalize, ((struct sNode*)right_value716)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                if(_if_conditional732=self!=((void*)0),                _if_conditional732) {
                    result_338->sline=self->sline;
                }
                if(_if_conditional733=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional733) {
                    __dec_obj298=result_338->sname;
                    result_338->sname=(char*)come_increment_ref_count(((char*)(right_value717=string_clone(self->sname))));
                    __dec_obj298 = come_decrement_ref_count2(__dec_obj298, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value717 = come_decrement_ref_count2(right_value717, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result399__ = __result_obj__ = result_338;
                come_call_finalizer2(sConditionalNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result399__;
                come_call_finalizer2(sConditionalNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
void* right_value719;
struct sNode* node_339;
struct sNode* __result402__;
memset(&__result_obj__, 0, sizeof(void*));
right_value719 = (void*)0;
memset(&node_339, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value719=conditional_exp(info))));
    if(right_value719) { right_value719 = come_decrement_ref_count2(right_value719, ((struct sNode*)right_value719)->finalize, ((struct sNode*)right_value719)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    __result402__ = __result_obj__ = node_339;
    if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result402__;
    if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional734;
void* right_value720;
void* right_value721;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* right_value724;
struct sNode* __result405__;
_Bool _if_conditional739;
void* right_value725;
void* right_value726;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* right_value729;
struct sNode* __result408__;
void* right_value730;
struct sNode* __result409__;
memset(&__result_obj__, 0, sizeof(void*));
right_value720 = (void*)0;
right_value721 = (void*)0;
right_value724 = (void*)0;
right_value725 = (void*)0;
right_value726 = (void*)0;
right_value729 = (void*)0;
right_value730 = (void*)0;
    if(_if_conditional734=charp_operator_equals(buf,"null"),    _if_conditional734) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2782, "struct sNode");
        _inf_obj_value46=come_increment_ref_count(((struct sNullNode*)(right_value721=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value720=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2782, "sNullNode")))),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNullNode_sline;
        _inf_value46->sname=(void*)sNullNode_sname;
        _inf_value46->terminated=(void*)sNullNode_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result405__ = __result_obj__ = ((struct sNode*)(right_value724=_inf_value46));
        come_call_finalizer2(sNullNode_finalize,right_value720, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sNullNode_finalize,right_value721, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value724) { right_value724 = come_decrement_ref_count2(right_value724, ((struct sNode*)right_value724)->finalize, ((struct sNode*)right_value724)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result405__;
    }
    else {
        if(_if_conditional739=charp_operator_equals(buf,"nil"),        _if_conditional739) {
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2785, "struct sNode");
            _inf_obj_value47=come_increment_ref_count(((struct sNilNode*)(right_value726=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value725=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2785, "sNilNode")))),info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sNilNode_finalize;
            _inf_value47->clone=(void*)sNilNode_clone;
            _inf_value47->compile=(void*)sNilNode_compile;
            _inf_value47->sline=(void*)sNilNode_sline;
            _inf_value47->sname=(void*)sNilNode_sname;
            _inf_value47->terminated=(void*)sNilNode_terminated;
            _inf_value47->kind=(void*)sNilNode_kind;
            __result408__ = __result_obj__ = ((struct sNode*)(right_value729=_inf_value47));
            come_call_finalizer2(sNilNode_finalize,right_value725, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sNilNode_finalize,right_value726, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value729) { right_value729 = come_decrement_ref_count2(right_value729, ((struct sNode*)right_value729)->finalize, ((struct sNode*)right_value729)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result408__;
        }
    }
    __result409__ = __result_obj__ = ((struct sNode*)(right_value730=string_node_v12(buf,head,head_sline,info)));
    if(right_value730) { right_value730 = come_decrement_ref_count2(right_value730, ((struct sNode*)right_value730)->finalize, ((struct sNode*)right_value730)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result409__;
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional735;
memset(&__result_obj__, 0, sizeof(void*));
            if(_if_conditional735=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional735) {
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional736;
struct sNullNode* __result403__;
void* right_value722;
struct sNullNode* result_340;
_Bool _if_conditional737;
_Bool _if_conditional738;
void* right_value723;
char* __dec_obj299;
struct sNullNode* __result404__;
memset(&__result_obj__, 0, sizeof(void*));
right_value722 = (void*)0;
memset(&result_340, 0, sizeof(struct sNullNode*));
right_value723 = (void*)0;
            if(_if_conditional736=self==(void*)0,            _if_conditional736) {
                __result403__ = __result_obj__ = (void*)0;
                return __result403__;
            }
            result_340=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value722=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"))));
            come_call_finalizer2(sNullNode_finalize,right_value722, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(_if_conditional737=self!=((void*)0),            _if_conditional737) {
                result_340->sline=self->sline;
            }
            if(_if_conditional738=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional738) {
                __dec_obj299=result_340->sname;
                result_340->sname=(char*)come_increment_ref_count(((char*)(right_value723=string_clone(self->sname))));
                __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value723 = come_decrement_ref_count2(right_value723, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            __result404__ = __result_obj__ = result_340;
            come_call_finalizer2(sNullNode_finalize,result_340, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result404__;
            come_call_finalizer2(sNullNode_finalize,result_340, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNilNode_finalize(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional740;
memset(&__result_obj__, 0, sizeof(void*));
                if(_if_conditional740=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional740) {
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional741;
struct sNilNode* __result406__;
void* right_value727;
struct sNilNode* result_341;
_Bool _if_conditional742;
_Bool _if_conditional743;
void* right_value728;
char* __dec_obj300;
struct sNilNode* __result407__;
memset(&__result_obj__, 0, sizeof(void*));
right_value727 = (void*)0;
memset(&result_341, 0, sizeof(struct sNilNode*));
right_value728 = (void*)0;
                if(_if_conditional741=self==(void*)0,                _if_conditional741) {
                    __result406__ = __result_obj__ = (void*)0;
                    return __result406__;
                }
                result_341=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value727=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"))));
                come_call_finalizer2(sNilNode_finalize,right_value727, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(_if_conditional742=self!=((void*)0),                _if_conditional742) {
                    result_341->sline=self->sline;
                }
                if(_if_conditional743=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional743) {
                    __dec_obj300=result_341->sname;
                    result_341->sname=(char*)come_increment_ref_count(((char*)(right_value728=string_clone(self->sname))));
                    __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value728 = come_decrement_ref_count2(right_value728, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                __result407__ = __result_obj__ = result_341;
                come_call_finalizer2(sNilNode_finalize,result_341, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result407__;
                come_call_finalizer2(sNilNode_finalize,result_341, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

