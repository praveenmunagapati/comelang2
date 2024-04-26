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
    _Bool mGuardValue;
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

_Bool operator_overload_fun_self(struct sType* type, char* fun_name, struct CVALUE* left_value, struct sInfo* info);

_Bool strmemcmp(char* p, char* p2);

void caller_begin(struct sInfo* info);

void caller_end(struct sInfo* info);

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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info);

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
    # 50 "./comelang2.h"
    perror(msg);
    # 51 "./comelang2.h"
    stackframe();
    # 52 "./comelang2.h"
    exit(4);
    # 54 "./comelang2.h"
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
    # 1943 "./comelang2.h"
    result_0=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value0=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1943, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1944 "./comelang2.h"
    buffer_append(result_0,self,sizeof(char)*len);
    # 1945 "./comelang2.h"
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
    # 1950 "./comelang2.h"
    result_1=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value2=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1950, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1951 "./comelang2.h"
    buffer_append(result_1,(char*)self,sizeof(short short)*len);
    # 1952 "./comelang2.h"
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
    # 1957 "./comelang2.h"
    result_2=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value4=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1957, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1958 "./comelang2.h"
    buffer_append(result_2,(char*)self,sizeof(int)*len);
    # 1959 "./comelang2.h"
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
    # 1964 "./comelang2.h"
    result_3=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value6=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1964, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1965 "./comelang2.h"
    buffer_append(result_3,(char*)self,sizeof(long)*len);
    # 1966 "./comelang2.h"
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
    # 1971 "./comelang2.h"
    result_4=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value8=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1971, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1972 "./comelang2.h"
    buffer_append(result_4,(char*)self,sizeof(float)*len);
    # 1973 "./comelang2.h"
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
    # 1978 "./comelang2.h"
    result_5=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value11=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value10=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 1978, "buffer"))))))));
    come_call_finalizer2(buffer_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(buffer_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1979 "./comelang2.h"
    buffer_append(result_5,(char*)self,sizeof(double)*len);
    # 1980 "./comelang2.h"
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
    # 1993 "./comelang2.h"
    result_6=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value12=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 1993, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1995 "./comelang2.h"
    __dec_obj1=result_6->memory;
    result_6->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value13=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1996 "./comelang2.h"
    result_6->p=result_6->memory->buf;
    # 1998 "./comelang2.h"
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
    # 2003 "./comelang2.h"
    result_7=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value14=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2003, "smart_pointer$1char"))));
    come_call_finalizer2(smart_pointer$1charp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2005 "./comelang2.h"
    __dec_obj2=result_7->memory;
    result_7->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value15=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value15, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2006 "./comelang2.h"
    result_7->p=(char*)result_7->memory->buf;
    # 2008 "./comelang2.h"
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
    # 2013 "./comelang2.h"
    result_8=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value16=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2013, "smart_pointer$1short"))));
    come_call_finalizer2(smart_pointer$1shortp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2015 "./comelang2.h"
    __dec_obj3=result_8->memory;
    result_8->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value17=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2016 "./comelang2.h"
    result_8->p=(short short*)result_8->memory->buf;
    # 2018 "./comelang2.h"
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
    # 2023 "./comelang2.h"
    result_9=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value18=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2023, "smart_pointer$1int"))));
    come_call_finalizer2(smart_pointer$1intp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2025 "./comelang2.h"
    __dec_obj4=result_9->memory;
    result_9->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value19=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2026 "./comelang2.h"
    result_9->p=(int*)result_9->memory->buf;
    # 2028 "./comelang2.h"
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
    # 2033 "./comelang2.h"
    result_10=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value20=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2033, "smart_pointer$1long"))));
    come_call_finalizer2(smart_pointer$1longp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2035 "./comelang2.h"
    __dec_obj5=result_10->memory;
    result_10->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value21=buffer_clone(self))));
    come_call_finalizer2(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(buffer_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2036 "./comelang2.h"
    result_10->p=(long*)result_10->memory->buf;
    # 2038 "./comelang2.h"
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
    # 2201 "./comelang2.h"
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
    # 2206 "./comelang2.h"
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
    # 2211 "./comelang2.h"
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
    # 2216 "./comelang2.h"
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
    # 2221 "./comelang2.h"
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
    # 2226 "./comelang2.h"
    __result24__ = __result_obj__ = ((struct smart_pointer$1double*)(right_value45=smart_pointer$1double_initialize((struct smart_pointer$1double*)come_increment_ref_count(((struct smart_pointer$1double*)(right_value42=(struct smart_pointer$1double*)come_calloc(1, sizeof(struct smart_pointer$1double)*(1), "./comelang2.h", 2226, "smart_pointer$1double")))),self,sizeof(double)*len)));
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value42, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(smart_pointer$1doublep_finalize,right_value45, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    return __result24__;
}
static inline unsigned long int charpa_length(char* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2255 "./comelang2.h"
    __result25__ = len;
    return __result25__;
}
static inline unsigned long int shortpa_length(short short* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result26__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2260 "./comelang2.h"
    __result26__ = len;
    return __result26__;
}
static inline unsigned long int intpa_length(int* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result27__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2265 "./comelang2.h"
    __result27__ = len;
    return __result27__;
}
static inline unsigned long int longpa_length(long* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result28__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2270 "./comelang2.h"
    __result28__ = len;
    return __result28__;
}
static inline unsigned long int floatpa_length(float* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result29__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2275 "./comelang2.h"
    __result29__ = len;
    return __result29__;
}
static inline unsigned long int doublepa_length(double* self, unsigned long int len){
void* __result_obj__;
unsigned long int __result30__;
memset(&__result_obj__, 0, sizeof(void*));
    # 2280 "./comelang2.h"
    __result30__ = len;
    return __result30__;
}
static inline char* string_xsprintf(char* self, char* msg, ...){
void* __result_obj__;
void* right_value46;
char* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
right_value46 = (void*)0;
    # 2341 "./comelang2.h"
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
    # 2346 "./comelang2.h"
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
    # 2351 "./comelang2.h"
    __result33__ = __result_obj__ = ((char*)(right_value48=xsprintf(msg,self)));
    right_value48 = come_decrement_ref_count2(right_value48, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result33__;
}

// body function








static void smart_pointer$1charp_finalize(struct smart_pointer$1char* self){
void* __result_obj__;
_Bool _if_conditional1;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1charp_finalize"
        # 0 "smart_pointer$1charp_finalize"
        if(_if_conditional1=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional1) {
            # 0 "smart_pointer$1charp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}



static void smart_pointer$1shortp_finalize(struct smart_pointer$1short* self){
void* __result_obj__;
_Bool _if_conditional2;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1shortp_finalize"
        # 0 "smart_pointer$1shortp_finalize"
        if(_if_conditional2=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional2) {
            # 0 "smart_pointer$1shortp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1intp_finalize(struct smart_pointer$1int* self){
void* __result_obj__;
_Bool _if_conditional3;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1intp_finalize"
        # 0 "smart_pointer$1intp_finalize"
        if(_if_conditional3=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional3) {
            # 0 "smart_pointer$1intp_finalize"
            come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        }
}


static void smart_pointer$1longp_finalize(struct smart_pointer$1long* self){
void* __result_obj__;
_Bool _if_conditional4;
memset(&__result_obj__, 0, sizeof(void*));
        # 1 "smart_pointer$1longp_finalize"
        # 0 "smart_pointer$1longp_finalize"
        if(_if_conditional4=self!=((void*)0)&&self->memory!=((void*)0),        _if_conditional4) {
            # 0 "smart_pointer$1longp_finalize"
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
        # 2045 "./comelang2.h"
        __dec_obj6=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value24=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value23=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(char)*size);
        # 2049 "./comelang2.h"
        self->p=(char*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj7=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value28=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value27=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value28, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(short short)*size);
        # 2049 "./comelang2.h"
        self->p=(short short*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj8=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value32=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value31=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(int)*size);
        # 2049 "./comelang2.h"
        self->p=(int*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj9=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value36=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value35=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj9, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(long)*size);
        # 2049 "./comelang2.h"
        self->p=(long*)self->memory->buf;
        # 2051 "./comelang2.h"
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
        # 2045 "./comelang2.h"
        __dec_obj10=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value40=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value39=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value40, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(float)*size);
        # 2049 "./comelang2.h"
        self->p=(float*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result21__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result21__;
        come_call_finalizer2(smart_pointer$1floatp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1floatp_finalize(struct smart_pointer$1float* self){
void* __result_obj__;
_Bool _if_conditional5;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1floatp_finalize"
            # 0 "smart_pointer$1floatp_finalize"
            if(_if_conditional5=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional5) {
                # 0 "smart_pointer$1floatp_finalize"
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
        # 2045 "./comelang2.h"
        __dec_obj11=self->memory;
        self->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value44=buffer_initialize((struct buffer*)come_increment_ref_count(((struct buffer*)(right_value43=(struct buffer*)come_calloc(1, sizeof(struct buffer)*(1), "./comelang2.h", 2045, "buffer"))))))));
        come_call_finalizer2(buffer_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(buffer_finalize,right_value43, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(buffer_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2047 "./comelang2.h"
        buffer_append(self->memory,memory,sizeof(double)*size);
        # 2049 "./comelang2.h"
        self->p=(double*)self->memory->buf;
        # 2051 "./comelang2.h"
        __result23__ = __result_obj__ = self;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
        return __result23__;
        come_call_finalizer2(smart_pointer$1doublep_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void smart_pointer$1doublep_finalize(struct smart_pointer$1double* self){
void* __result_obj__;
_Bool _if_conditional6;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "smart_pointer$1doublep_finalize"
            # 0 "smart_pointer$1doublep_finalize"
            if(_if_conditional6=self!=((void*)0)&&self->memory!=((void*)0),            _if_conditional6) {
                # 0 "smart_pointer$1doublep_finalize"
                come_call_finalizer2(buffer_finalize,self->memory, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}










_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, _Bool break_guard, struct sInfo* info){
void* __result_obj__;
void* right_value84;
struct sType* generics_type_35;
_Bool _if_conditional97;
struct sType* __dec_obj35;
_Bool _if_conditional98;
struct sClass* klass_36;
char* class_name_37;
struct sFun* operator_fun_38;
char* fun_name2_39;
_Bool _if_conditional100;
void* right_value85;
char* none_generics_name_40;
void* right_value86;
struct sType* obj_type_41;
void* right_value87;
char* __dec_obj36;
void* right_value88;
char* fun_name3_42;
struct sGenericsFun* generics_fun_45;
_Bool _if_conditional115;
void* right_value89;
_Bool _if_conditional116;
_Bool __result58__;
_Bool _if_conditional136;
void* right_value90;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_49;
char* fun_name_50;
void* right_value91;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_51;
char* fun_name2_52;
_Bool _if_conditional138;
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
_Bool _if_conditional139;
void* right_value96;
char* __dec_obj38;
_Bool _if_conditional140;
_Bool result_59;
_Bool _if_conditional141;
void* right_value97;
struct CVALUE* come_value_60;
char* left_value2_61;
void* right_value98;
void* right_value99;
_Bool _if_conditional146;
void* right_value100;
char* __dec_obj39;
void* right_value101;
char* __dec_obj40;
char* right_value2_65;
void* right_value102;
void* right_value103;
_Bool _if_conditional147;
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
_Bool _if_conditional148;
void* right_value113;
char* __dec_obj45;
_Bool _if_conditional149;
void* right_value114;
void* right_value115;
char* __dec_obj46;
void* right_value116;
char* __dec_obj47;
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
right_value115 = (void*)0;
right_value116 = (void*)0;
    # 5 "13op.c"
    generics_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=sType_clone(type))));
    come_call_finalizer2(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 10 "13op.c"
    # 6 "13op.c"
    if(generics_type_35->mNoSolvedGenericsType->v1) {
        # 7 "13op.c"
        __dec_obj35=generics_type_35;
        generics_type_35=(struct sType*)come_increment_ref_count(generics_type_35->mNoSolvedGenericsType->v1);
        come_call_finalizer2(sType_finalize,__dec_obj35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 13 "13op.c"
    # 10 "13op.c"
    if(type->mNoSolvedGenericsType->v1) {
        # 11 "13op.c"
        type=type->mNoSolvedGenericsType->v1;
    }
    # 13 "13op.c"
    klass_36=type->mClass;
    # 14 "13op.c"
    class_name_37=klass_36->mName;
    # 16 "13op.c"
    operator_fun_38=((void*)0);
    # 18 "13op.c"
    # 74 "13op.c"
    # 19 "13op.c"
    if(_if_conditional100=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional100) {
        # 20 "13op.c"
        none_generics_name_40=(char*)come_increment_ref_count(((char*)(right_value85=get_none_generics_name(type->mClass->mName))));
        right_value85 = come_decrement_ref_count2(right_value85, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 22 "13op.c"
        obj_type_41=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=solve_generics(type,info->generics_type,info))));
        come_call_finalizer2(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 24 "13op.c"
        __dec_obj36=fun_name2_39;
        fun_name2_39=(char*)come_increment_ref_count(((char*)(right_value87=create_method_name(obj_type_41,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj36 = come_decrement_ref_count2(__dec_obj36, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value87 = come_decrement_ref_count2(right_value87, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 25 "13op.c"
        fun_name3_42=(char*)come_increment_ref_count(((char*)(right_value88=xsprintf("%s_%s",none_generics_name_40,fun_name))));
        right_value88 = come_decrement_ref_count2(right_value88, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 27 "13op.c"
        generics_fun_45=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_42,((void*)0));
        # 54 "13op.c"
        # 30 "13op.c"
        if(generics_fun_45) {
            # 35 "13op.c"
            # 31 "13op.c"
            if(_if_conditional116=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value89=__builtin_string(fun_name2_39)))),generics_fun_45,obj_type_41,info),            right_value89 = come_decrement_ref_count2(right_value89, (void*)0, (void*)0, 1, 0, 0, __result_obj__),
            _if_conditional116) {
                # 32 "13op.c"
                __result58__ = (_Bool)0;
                none_generics_name_40 = come_decrement_ref_count2(none_generics_name_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,obj_type_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name3_42 = come_decrement_ref_count2(fun_name3_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                come_call_finalizer2(sType_finalize,generics_type_35, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                fun_name2_39 = come_decrement_ref_count2(fun_name2_39, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                return __result58__;
            }
            # 35 "13op.c"
            operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_39);
        }
        else {
            # 53 "13op.c"
            # 38 "13op.c"
            if(_if_conditional136=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional136) {
                # 39 "13op.c"
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value90=create_equals_automatically(obj_type_41,"equals",info)));
                fun_49=multiple_assign_var1->v1;
                fun_name_50=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 40 "13op.c"
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value91=create_operator_equals_automatically(obj_type_41,"operator_equals",info)));
                fun2_51=multiple_assign_var2->v1;
                fun_name2_52=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 42 "13op.c"
                operator_fun_38=fun2_51;
                fun_name_50 = come_decrement_ref_count2(fun_name_50, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                fun_name2_52 = come_decrement_ref_count2(fun_name2_52, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            else {
                # 53 "13op.c"
                # 44 "13op.c"
                if(_if_conditional138=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional138) {
                    # 45 "13op.c"
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value92=create_equals_automatically(obj_type_41,"not_equals",info)));
                    fun_53=multiple_assign_var3->v1;
                    fun_name_54=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 46 "13op.c"
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value93=create_operator_not_equals_automatically(obj_type_41,"operator_not_equals",info)));
                    fun2_55=multiple_assign_var4->v1;
                    fun_name2_56=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    come_call_finalizer2(tuple2$2sFunpcharphp_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 48 "13op.c"
                    operator_fun_38=fun2_55;
                    fun_name_54 = come_decrement_ref_count2(fun_name_54, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    fun_name2_56 = come_decrement_ref_count2(fun_name2_56, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
                else {
                    # 51 "13op.c"
                    operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_39);
                }
            }
        }
        none_generics_name_40 = come_decrement_ref_count2(none_generics_name_40, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,obj_type_41, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        fun_name3_42 = come_decrement_ref_count2(fun_name3_42, (void*)0, (void*)0, 0, 0, 0, (void*)0);
    }
    else {
        # 56 "13op.c"
        __dec_obj37=fun_name2_39;
        fun_name2_39=(char*)come_increment_ref_count(((char*)(right_value94=create_method_name(type,(_Bool)0,fun_name,info,(_Bool)1))));
        __dec_obj37 = come_decrement_ref_count2(__dec_obj37, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value94 = come_decrement_ref_count2(right_value94, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 58 "13op.c"
        # 69 "13op.c"
        for(        i_57=128-1;        i_57>=1;        i_57--        ){
            # 60 "13op.c"
            new_fun_name_58=(char*)come_increment_ref_count(((char*)(right_value95=xsprintf("%s_v%d",fun_name2_39,i_57))));
            right_value95 = come_decrement_ref_count2(right_value95, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            # 61 "13op.c"
            operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_58);
            # 67 "13op.c"
            # 63 "13op.c"
            if(operator_fun_38) {
                # 64 "13op.c"
                __dec_obj38=fun_name2_39;
                fun_name2_39=(char*)come_increment_ref_count(((char*)(right_value96=__builtin_string(new_fun_name_58))));
                __dec_obj38 = come_decrement_ref_count2(__dec_obj38, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value96 = come_decrement_ref_count2(right_value96, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                # 65 "13op.c"
                new_fun_name_58 = come_decrement_ref_count2(new_fun_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                break;
            }
            new_fun_name_58 = come_decrement_ref_count2(new_fun_name_58, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        }
        # 72 "13op.c"
        # 69 "13op.c"
        if(_if_conditional140=operator_fun_38==((void*)0),        _if_conditional140) {
            # 70 "13op.c"
            operator_fun_38=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_39);
        }
    }
    # 74 "13op.c"
    result_59=(_Bool)0;
    # 123 "13op.c"
    # 76 "13op.c"
    if(_if_conditional141=operator_fun_38&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional141) {
        # 77 "13op.c"
        come_value_60=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value97=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 78 "13op.c"
        # 79 "13op.c"
        check_assign_type(((char*)(right_value99=xsprintf("\%s is assigned to",((char*)(right_value98=string_to_string(fun_name2_39)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0), "13op.c", 79, 0)),left_value->type,left_value,(_Bool)0,(_Bool)1,info);
        right_value98 = come_decrement_ref_count2(right_value98, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value99 = come_decrement_ref_count2(right_value99, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 87 "13op.c"
        # 80 "13op.c"
        if(_if_conditional146=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0), "13op.c", 80, 1))->mHeap&&left_value->type->mHeap,        _if_conditional146) {
            # 81 "13op.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,0), "13op.c", 81, 2)),left_value->type,left_value,info);
            # 82 "13op.c"
            __dec_obj39=left_value2_61;
            left_value2_61=(char*)come_increment_ref_count(((char*)(right_value100=xsprintf("%s",left_value->c_value))));
            __dec_obj39 = come_decrement_ref_count2(__dec_obj39, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value100 = come_decrement_ref_count2(right_value100, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 85 "13op.c"
            __dec_obj40=left_value2_61;
            left_value2_61=(char*)come_increment_ref_count(((char*)(right_value101=string_clone(left_value->c_value))));
            __dec_obj40 = come_decrement_ref_count2(__dec_obj40, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value101 = come_decrement_ref_count2(right_value101, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 87 "13op.c"
        # 88 "13op.c"
        check_assign_type(((char*)(right_value103=xsprintf("\%s is assigned to",((char*)(right_value102=string_to_string(fun_name2_39)))))),((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,1), "13op.c", 88, 3)),right_value->type,right_value,(_Bool)0,(_Bool)1,info);
        right_value102 = come_decrement_ref_count2(right_value102, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value103 = come_decrement_ref_count2(right_value103, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 97 "13op.c"
        # 89 "13op.c"
        if(_if_conditional147=((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,1), "13op.c", 89, 4))->mHeap&&right_value->type->mHeap,        _if_conditional147) {
            # 90 "13op.c"
            std_move(((struct sType*)come_null_check(list$1sTypephp_operator_load_element(operator_fun_38->mParamTypes,1), "13op.c", 90, 5)),right_value->type,right_value,info);
            # 91 "13op.c"
            __dec_obj41=right_value2_65;
            right_value2_65=(char*)come_increment_ref_count(((char*)(right_value104=xsprintf("%s",right_value->c_value))));
            __dec_obj41 = come_decrement_ref_count2(__dec_obj41, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value104 = come_decrement_ref_count2(right_value104, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        else {
            # 94 "13op.c"
            __dec_obj42=right_value2_65;
            right_value2_65=(char*)come_increment_ref_count(((char*)(right_value105=string_clone(right_value->c_value))));
            __dec_obj42 = come_decrement_ref_count2(__dec_obj42, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value105 = come_decrement_ref_count2(right_value105, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 97 "13op.c"
        __dec_obj43=come_value_60->c_value;
        come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value109=xsprintf("\%s(\%s,\%s)",((char*)(right_value106=string_to_string(fun_name2_39))),((char*)(right_value107=string_to_string(left_value2_61))),((char*)(right_value108=string_to_string(right_value2_65)))))));
        __dec_obj43 = come_decrement_ref_count2(__dec_obj43, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value106 = come_decrement_ref_count2(right_value106, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value107 = come_decrement_ref_count2(right_value107, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value108 = come_decrement_ref_count2(right_value108, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        right_value109 = come_decrement_ref_count2(right_value109, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 99 "13op.c"
        type2_66=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_clone(operator_fun_38->mResultType))));
        come_call_finalizer2(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 101 "13op.c"
        type3_67=(struct sType*)come_increment_ref_count(((struct sType*)(right_value111=solve_generics(type2_66,generics_type_35,info))));
        come_call_finalizer2(sType_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 103 "13op.c"
        __dec_obj44=come_value_60->type;
        come_value_60->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value112=sType_clone(type3_67))));
        come_call_finalizer2(sType_finalize,__dec_obj44, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 104 "13op.c"
        come_value_60->var=((void*)0);
        # 110 "13op.c"
        # 106 "13op.c"
        if(type3_67->mHeap) {
            # 107 "13op.c"
            __dec_obj45=come_value_60->c_value;
            come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value113=append_object_to_right_values(come_value_60->c_value,(struct sType*)come_increment_ref_count(type3_67),info))));
            __dec_obj45 = come_decrement_ref_count2(__dec_obj45, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value113 = come_decrement_ref_count2(right_value113, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 114 "13op.c"
        # 110 "13op.c"
        if(_if_conditional149=!break_guard&&type3_67->mGuardValue&&type3_67->mPointerNum>0,        _if_conditional149) {
            # 111 "13op.c"
            __dec_obj46=come_value_60->c_value;
            come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value115=xsprintf("((%s)come_null_check(%s, \"%s\", %d, %d))",((char*)(right_value114=make_type_name_string(type3_67,(_Bool)0,(_Bool)0,(_Bool)0,info))),come_value_60->c_value,info->sname,info->sline,gComeDebugStackFrameID++))));
            __dec_obj46 = come_decrement_ref_count2(__dec_obj46, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value114 = come_decrement_ref_count2(right_value114, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            right_value115 = come_decrement_ref_count2(right_value115, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 114 "13op.c"
        __dec_obj47=come_value_60->c_value;
        come_value_60->c_value=(char*)come_increment_ref_count(((char*)(right_value116=append_stackframe(come_value_60->c_value,come_value_60->type,info))));
        __dec_obj47 = come_decrement_ref_count2(__dec_obj47, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value116 = come_decrement_ref_count2(right_value116, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 116 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_60->c_value);
        # 118 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_60));
        # 120 "13op.c"
        result_59=(_Bool)1;
        come_call_finalizer2(CVALUE_finalize,come_value_60, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        left_value2_61 = come_decrement_ref_count2(left_value2_61, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        right_value2_65 = come_decrement_ref_count2(right_value2_65, (void*)0, (void*)0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type2_66, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,type3_67, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 123 "13op.c"
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
_Bool _if_conditional95;
void* right_value83;
char* __dec_obj34;
_Bool _if_conditional96;
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
        # 3 "sType_clone"
        # 2 "sType_clone"
        if(_if_conditional7=self==(void*)0,        _if_conditional7) {
            # 2 "sType_clone"
            __result34__ = __result_obj__ = (void*)0;
            return __result34__;
        }
        # 3 "sType_clone"
        result_11=(struct sType*)come_increment_ref_count(((struct sType*)(right_value49=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "sType"))));
        come_call_finalizer2(sType_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 5 "sType_clone"
        # 4 "sType_clone"
        if(_if_conditional25=self!=((void*)0),        _if_conditional25) {
            # 4 "sType_clone"
            result_11->mClass=self->mClass;
        }
        # 6 "sType_clone"
        # 5 "sType_clone"
        if(_if_conditional26=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),        _if_conditional26) {
            # 5 "sType_clone"
            __dec_obj15=result_11->mMultipleTypes;
            result_11->mMultipleTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value56=list$1sTypephp_clone(self->mMultipleTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 7 "sType_clone"
        # 6 "sType_clone"
        if(_if_conditional30=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional30) {
            # 6 "sType_clone"
            __dec_obj17=result_11->mNoSolvedGenericsType;
            result_11->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value59=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 8 "sType_clone"
        # 7 "sType_clone"
        if(_if_conditional34=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional34) {
            # 7 "sType_clone"
            __dec_obj18=result_11->mOriginalLoadVarType;
            result_11->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value60=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 9 "sType_clone"
        # 8 "sType_clone"
        if(_if_conditional35=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional35) {
            # 8 "sType_clone"
            __dec_obj19=result_11->mGenericsName;
            result_11->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value61=string_clone(self->mGenericsName))));
            __dec_obj19 = come_decrement_ref_count2(__dec_obj19, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value61 = come_decrement_ref_count2(right_value61, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 10 "sType_clone"
        # 9 "sType_clone"
        if(_if_conditional36=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional36) {
            # 9 "sType_clone"
            __dec_obj20=result_11->mGenericsTypes;
            result_11->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value62=list$1sTypephp_clone(self->mGenericsTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj20, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value62, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 11 "sType_clone"
        # 10 "sType_clone"
        if(_if_conditional37=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional37) {
            # 10 "sType_clone"
            __dec_obj24=result_11->mArrayNum;
            result_11->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value70=list$1sNodephp_clone(self->mArrayNum))));
            come_call_finalizer2(list$1sNodeph_finalize,__dec_obj24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sNodephp_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 12 "sType_clone"
        # 11 "sType_clone"
        if(_if_conditional50=self!=((void*)0),        _if_conditional50) {
            # 11 "sType_clone"
            result_11->mOmitArrayNum=self->mOmitArrayNum;
        }
        # 13 "sType_clone"
        # 12 "sType_clone"
        if(_if_conditional51=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional51) {
            # 12 "sType_clone"
            __dec_obj25=result_11->mParamTypes;
            result_11->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value71=list$1sTypephp_clone(self->mParamTypes))));
            come_call_finalizer2(list$1sTypeph_finalize,__dec_obj25, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1sTypephp_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 14 "sType_clone"
        # 13 "sType_clone"
        if(_if_conditional52=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional52) {
            # 13 "sType_clone"
            __dec_obj29=result_11->mParamNames;
            result_11->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value78=list$1charphp_clone(self->mParamNames))));
            come_call_finalizer2(list$1charph_finalize,__dec_obj29, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(list$1charphp_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 15 "sType_clone"
        # 14 "sType_clone"
        if(_if_conditional56=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional56) {
            # 14 "sType_clone"
            __dec_obj30=result_11->mResultType;
            result_11->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value79=tuple1$1sTypephp_clone(self->mResultType))));
            come_call_finalizer2(tuple1$1sTypeph_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            come_call_finalizer2(tuple1$1sTypephp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        }
        # 16 "sType_clone"
        # 15 "sType_clone"
        if(_if_conditional57=self!=((void*)0),        _if_conditional57) {
            # 15 "sType_clone"
            result_11->mVarArgs=self->mVarArgs;
        }
        # 17 "sType_clone"
        # 16 "sType_clone"
        if(_if_conditional58=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional58) {
            # 16 "sType_clone"
            __dec_obj31=result_11->mAlignas;
            result_11->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value80=sNode_clone(self->mAlignas))));
            if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count2(__dec_obj31, ((struct sNode*)__dec_obj31)->finalize, ((struct sNode*)__dec_obj31)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value80) { right_value80 = come_decrement_ref_count2(right_value80, ((struct sNode*)right_value80)->finalize, ((struct sNode*)right_value80)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 18 "sType_clone"
        # 17 "sType_clone"
        if(_if_conditional59=self!=((void*)0),        _if_conditional59) {
            # 17 "sType_clone"
            result_11->mUnsigned=self->mUnsigned;
        }
        # 19 "sType_clone"
        # 18 "sType_clone"
        if(_if_conditional60=self!=((void*)0),        _if_conditional60) {
            # 18 "sType_clone"
            result_11->mShort=self->mShort;
        }
        # 20 "sType_clone"
        # 19 "sType_clone"
        if(_if_conditional61=self!=((void*)0),        _if_conditional61) {
            # 19 "sType_clone"
            result_11->mLong=self->mLong;
        }
        # 21 "sType_clone"
        # 20 "sType_clone"
        if(_if_conditional62=self!=((void*)0),        _if_conditional62) {
            # 20 "sType_clone"
            result_11->mLongLong=self->mLongLong;
        }
        # 22 "sType_clone"
        # 21 "sType_clone"
        if(_if_conditional63=self!=((void*)0),        _if_conditional63) {
            # 21 "sType_clone"
            result_11->mConstant=self->mConstant;
        }
        # 23 "sType_clone"
        # 22 "sType_clone"
        if(_if_conditional64=self!=((void*)0),        _if_conditional64) {
            # 22 "sType_clone"
            result_11->mRegister=self->mRegister;
        }
        # 24 "sType_clone"
        # 23 "sType_clone"
        if(_if_conditional65=self!=((void*)0),        _if_conditional65) {
            # 23 "sType_clone"
            result_11->mVolatile=self->mVolatile;
        }
        # 25 "sType_clone"
        # 24 "sType_clone"
        if(_if_conditional66=self!=((void*)0),        _if_conditional66) {
            # 24 "sType_clone"
            result_11->mStatic=self->mStatic;
        }
        # 26 "sType_clone"
        # 25 "sType_clone"
        if(_if_conditional67=self!=((void*)0),        _if_conditional67) {
            # 25 "sType_clone"
            result_11->mExtern=self->mExtern;
        }
        # 27 "sType_clone"
        # 26 "sType_clone"
        if(_if_conditional68=self!=((void*)0),        _if_conditional68) {
            # 26 "sType_clone"
            result_11->mRestrict=self->mRestrict;
        }
        # 28 "sType_clone"
        # 27 "sType_clone"
        if(_if_conditional69=self!=((void*)0),        _if_conditional69) {
            # 27 "sType_clone"
            result_11->mImmutable=self->mImmutable;
        }
        # 29 "sType_clone"
        # 28 "sType_clone"
        if(_if_conditional70=self!=((void*)0),        _if_conditional70) {
            # 28 "sType_clone"
            result_11->mHeap=self->mHeap;
        }
        # 30 "sType_clone"
        # 29 "sType_clone"
        if(_if_conditional71=self!=((void*)0),        _if_conditional71) {
            # 29 "sType_clone"
            result_11->mDummyHeap=self->mDummyHeap;
        }
        # 31 "sType_clone"
        # 30 "sType_clone"
        if(_if_conditional72=self!=((void*)0),        _if_conditional72) {
            # 30 "sType_clone"
            result_11->mDelegate=self->mDelegate;
        }
        # 32 "sType_clone"
        # 31 "sType_clone"
        if(_if_conditional73=self!=((void*)0),        _if_conditional73) {
            # 31 "sType_clone"
            result_11->mShare=self->mShare;
        }
        # 33 "sType_clone"
        # 32 "sType_clone"
        if(_if_conditional74=self!=((void*)0),        _if_conditional74) {
            # 32 "sType_clone"
            result_11->mClone=self->mClone;
        }
        # 34 "sType_clone"
        # 33 "sType_clone"
        if(_if_conditional75=self!=((void*)0),        _if_conditional75) {
            # 33 "sType_clone"
            result_11->mNoHeap=self->mNoHeap;
        }
        # 35 "sType_clone"
        # 34 "sType_clone"
        if(_if_conditional76=self!=((void*)0),        _if_conditional76) {
            # 34 "sType_clone"
            result_11->mNoCallingDestructor=self->mNoCallingDestructor;
        }
        # 36 "sType_clone"
        # 35 "sType_clone"
        if(_if_conditional77=self!=((void*)0),        _if_conditional77) {
            # 35 "sType_clone"
            result_11->mRefference=self->mRefference;
        }
        # 37 "sType_clone"
        # 36 "sType_clone"
        if(_if_conditional78=self!=((void*)0),        _if_conditional78) {
            # 36 "sType_clone"
            result_11->mException=self->mException;
        }
        # 38 "sType_clone"
        # 37 "sType_clone"
        if(_if_conditional79=self!=((void*)0),        _if_conditional79) {
            # 37 "sType_clone"
            result_11->mPointerNum=self->mPointerNum;
        }
        # 39 "sType_clone"
        # 38 "sType_clone"
        if(_if_conditional80=self!=((void*)0),        _if_conditional80) {
            # 38 "sType_clone"
            result_11->mOriginalTypeNamePointerNum=self->mOriginalTypeNamePointerNum;
        }
        # 40 "sType_clone"
        # 39 "sType_clone"
        if(_if_conditional81=self!=((void*)0),        _if_conditional81) {
            # 39 "sType_clone"
            result_11->mNoArrayPointerNum=self->mNoArrayPointerNum;
        }
        # 41 "sType_clone"
        # 40 "sType_clone"
        if(_if_conditional82=self!=((void*)0)&&self->mSizeNum!=((void*)0),        _if_conditional82) {
            # 40 "sType_clone"
            __dec_obj32=result_11->mSizeNum;
            result_11->mSizeNum=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value81=sNode_clone(self->mSizeNum))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count2(__dec_obj32, ((struct sNode*)__dec_obj32)->finalize, ((struct sNode*)__dec_obj32)->_protocol_obj, 0,0,0, (void*)0); }
            if(right_value81) { right_value81 = come_decrement_ref_count2(right_value81, ((struct sNode*)right_value81)->finalize, ((struct sNode*)right_value81)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        }
        # 42 "sType_clone"
        # 41 "sType_clone"
        if(_if_conditional83=self!=((void*)0),        _if_conditional83) {
            # 41 "sType_clone"
            result_11->mDynamicArrayNum=self->mDynamicArrayNum;
        }
        # 43 "sType_clone"
        # 42 "sType_clone"
        if(_if_conditional84=self!=((void*)0),        _if_conditional84) {
            # 42 "sType_clone"
            result_11->mTypeOfExpression=self->mTypeOfExpression;
        }
        # 44 "sType_clone"
        # 43 "sType_clone"
        if(_if_conditional85=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),        _if_conditional85) {
            # 43 "sType_clone"
            __dec_obj33=result_11->mOriginalTypeName;
            result_11->mOriginalTypeName=(char*)come_increment_ref_count(((char*)(right_value82=string_clone(self->mOriginalTypeName))));
            __dec_obj33 = come_decrement_ref_count2(__dec_obj33, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value82 = come_decrement_ref_count2(right_value82, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 45 "sType_clone"
        # 44 "sType_clone"
        if(_if_conditional86=self!=((void*)0),        _if_conditional86) {
            # 44 "sType_clone"
            result_11->mOriginalPointerNum=self->mOriginalPointerNum;
        }
        # 46 "sType_clone"
        # 45 "sType_clone"
        if(_if_conditional87=self!=((void*)0),        _if_conditional87) {
            # 45 "sType_clone"
            result_11->mFunctionParam=self->mFunctionParam;
        }
        # 47 "sType_clone"
        # 46 "sType_clone"
        if(_if_conditional88=self!=((void*)0),        _if_conditional88) {
            # 46 "sType_clone"
            result_11->mAllocaValue=self->mAllocaValue;
        }
        # 48 "sType_clone"
        # 47 "sType_clone"
        if(_if_conditional89=self!=((void*)0),        _if_conditional89) {
            # 47 "sType_clone"
            result_11->mGenericsStruct=self->mGenericsStruct;
        }
        # 49 "sType_clone"
        # 48 "sType_clone"
        if(_if_conditional90=self!=((void*)0),        _if_conditional90) {
            # 48 "sType_clone"
            result_11->mSolvedGenericsName=self->mSolvedGenericsName;
        }
        # 50 "sType_clone"
        # 49 "sType_clone"
        if(_if_conditional91=self!=((void*)0),        _if_conditional91) {
            # 49 "sType_clone"
            result_11->mComeMemCore=self->mComeMemCore;
        }
        # 51 "sType_clone"
        # 50 "sType_clone"
        if(_if_conditional92=self!=((void*)0),        _if_conditional92) {
            # 50 "sType_clone"
            result_11->mInline=self->mInline;
        }
        # 52 "sType_clone"
        # 51 "sType_clone"
        if(_if_conditional93=self!=((void*)0),        _if_conditional93) {
            # 51 "sType_clone"
            result_11->mNullValue=self->mNullValue;
        }
        # 53 "sType_clone"
        # 52 "sType_clone"
        if(_if_conditional94=self!=((void*)0),        _if_conditional94) {
            # 52 "sType_clone"
            result_11->mGuardValue=self->mGuardValue;
        }
        # 54 "sType_clone"
        # 53 "sType_clone"
        if(_if_conditional95=self!=((void*)0)&&self->mAsmName!=((void*)0),        _if_conditional95) {
            # 53 "sType_clone"
            __dec_obj34=result_11->mAsmName;
            result_11->mAsmName=(char*)come_increment_ref_count(((char*)(right_value83=string_clone(self->mAsmName))));
            __dec_obj34 = come_decrement_ref_count2(__dec_obj34, (void*)0, (void*)0, 0,0,0, (void*)0);
            right_value83 = come_decrement_ref_count2(right_value83, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        }
        # 55 "sType_clone"
        # 54 "sType_clone"
        if(_if_conditional96=self!=((void*)0),        _if_conditional96) {
            # 54 "sType_clone"
            result_11->mArrayPointerType=self->mArrayPointerType;
        }
        # 55 "sType_clone"
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
            # 1 "sType_finalize"
            # 0 "sType_finalize"
            if(_if_conditional8=self!=((void*)0)&&self->mMultipleTypes!=((void*)0),            _if_conditional8) {
                # 0 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mMultipleTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 2 "sType_finalize"
            # 1 "sType_finalize"
            if(_if_conditional10=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional10) {
                # 1 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 3 "sType_finalize"
            # 2 "sType_finalize"
            if(_if_conditional12=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional12) {
                # 2 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 4 "sType_finalize"
            # 3 "sType_finalize"
            if(_if_conditional13=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional13) {
                # 3 "sType_finalize"
                self->mGenericsName = come_decrement_ref_count2(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 5 "sType_finalize"
            # 4 "sType_finalize"
            if(_if_conditional14=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional14) {
                # 4 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 6 "sType_finalize"
            # 5 "sType_finalize"
            if(_if_conditional15=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional15) {
                # 5 "sType_finalize"
                come_call_finalizer2(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 7 "sType_finalize"
            # 6 "sType_finalize"
            if(_if_conditional17=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional17) {
                # 6 "sType_finalize"
                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 8 "sType_finalize"
            # 7 "sType_finalize"
            if(_if_conditional18=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional18) {
                # 7 "sType_finalize"
                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 9 "sType_finalize"
            # 8 "sType_finalize"
            if(_if_conditional20=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional20) {
                # 8 "sType_finalize"
                come_call_finalizer2(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
            # 10 "sType_finalize"
            # 9 "sType_finalize"
            if(_if_conditional21=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional21) {
                # 9 "sType_finalize"
                if(self->mAlignas) { self->mAlignas = come_decrement_ref_count2(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 11 "sType_finalize"
            # 10 "sType_finalize"
            if(_if_conditional22=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional22) {
                # 10 "sType_finalize"
                if(self->mSizeNum) { self->mSizeNum = come_decrement_ref_count2(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            # 12 "sType_finalize"
            # 11 "sType_finalize"
            if(_if_conditional23=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional23) {
                # 11 "sType_finalize"
                self->mOriginalTypeName = come_decrement_ref_count2(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 13 "sType_finalize"
            # 12 "sType_finalize"
            if(_if_conditional24=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional24) {
                # 12 "sType_finalize"
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
                    # 123 "./comelang2.h"
                    it_12=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional1=it_12!=((void*)0),                    _while_condtional1) {
                        # 125 "./comelang2.h"
                        prev_it_13=it_12;
                        # 126 "./comelang2.h"
                        it_12=it_12->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1sTypephp_finalize,prev_it_13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional9;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sTypephp_finalize"
                            # 0 "list_item$1sTypephp_finalize"
                            if(_if_conditional9=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional9) {
                                # 0 "list_item$1sTypephp_finalize"
                                come_call_finalizer2(sType_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypephp_finalize"
                    # 0 "tuple1$1sTypephp_finalize"
                    if(_if_conditional11=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional11) {
                        # 0 "tuple1$1sTypephp_finalize"
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
                    # 123 "./comelang2.h"
                    it_14=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional2=it_14!=((void*)0),                    _while_condtional2) {
                        # 125 "./comelang2.h"
                        prev_it_15=it_14;
                        # 126 "./comelang2.h"
                        it_14=it_14->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1sNodephp_finalize,prev_it_15, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1sNodephp_finalize"
                            # 0 "list_item$1sNodephp_finalize"
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                # 0 "list_item$1sNodephp_finalize"
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
                    # 123 "./comelang2.h"
                    it_16=self->head;
                    # 129 "./comelang2.h"
                    while(_while_condtional3=it_16!=((void*)0),                    _while_condtional3) {
                        # 125 "./comelang2.h"
                        prev_it_17=it_16;
                        # 126 "./comelang2.h"
                        it_16=it_16->next;
                        # 127 "./comelang2.h"
                        come_call_finalizer2(list_item$1charphp_finalize,prev_it_17, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool _if_conditional19;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "list_item$1charphp_finalize"
                            # 0 "list_item$1charphp_finalize"
                            if(_if_conditional19=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional19) {
                                # 0 "list_item$1charphp_finalize"
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
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional27=self==((void*)0),                _if_conditional27) {
                    # 140 "./comelang2.h"
                    __result35__ = __result_obj__ = ((void*)0);
                    return __result35__;
                }
                # 142 "./comelang2.h"
                result_18=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value51=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value50=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 142, "list$1sTypeph"))))))));
                come_call_finalizer2(list$1sTypephp_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sTypephp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_19=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional4=it_19!=((void*)0),                _while_condtional4) {
                    # 146 "./comelang2.h"
                    list$1sTypeph_add(result_18,(struct sType*)come_increment_ref_count(((struct sType*)(right_value55=sType_clone(it_19->item)))));
                    come_call_finalizer2(sType_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 148 "./comelang2.h"
                    it_19=it_19->next;
                }
                # 151 "./comelang2.h"
                __result38__ = __result_obj__ = result_18;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result38__;
                come_call_finalizer2(list$1sTypephp_finalize,result_18, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sTypeph* list$1sTypeph_initialize(struct list$1sTypeph* self){
void* __result_obj__;
struct list$1sTypeph* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
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
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional28=self->len==0,                        _if_conditional28) {
                            # 156 "./comelang2.h"
                            litem_20=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value52=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 156, "list_item$1sTypeph"))));
                            come_call_finalizer2(list_item$1sTypephp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_20->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_20->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj12=litem_20->item;
                            litem_20->item=(struct sType*)come_increment_ref_count(item);
                            come_call_finalizer2(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_20;
                            # 163 "./comelang2.h"
                            self->head=litem_20;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional29=self->len==1,                            _if_conditional29) {
                                # 166 "./comelang2.h"
                                litem_21=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value53=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 166, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_21->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_21->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj13=litem_21->item;
                                litem_21->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_21;
                                # 173 "./comelang2.h"
                                self->head->next=litem_21;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_22=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value54=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 176, "list_item$1sTypeph"))));
                                come_call_finalizer2(list_item$1sTypephp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_22->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_22->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj14=litem_22->item;
                                litem_22->item=(struct sType*)come_increment_ref_count(item);
                                come_call_finalizer2(sType_finalize,__dec_obj14, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                # 182 "./comelang2.h"
                                self->tail->next=litem_22;
                                # 183 "./comelang2.h"
                                self->tail=litem_22;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
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
                # 3 "tuple1$1sTypephp_clone"
                # 2 "tuple1$1sTypephp_clone"
                if(_if_conditional31=self==(void*)0,                _if_conditional31) {
                    # 2 "tuple1$1sTypephp_clone"
                    __result39__ = __result_obj__ = (void*)0;
                    return __result39__;
                }
                # 3 "tuple1$1sTypephp_clone"
                result_23=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value57=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "tuple1$1sTypeph"))));
                come_call_finalizer2(tuple1$1sTypeph_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "tuple1$1sTypephp_clone"
                # 4 "tuple1$1sTypephp_clone"
                if(_if_conditional33=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional33) {
                    # 4 "tuple1$1sTypephp_clone"
                    __dec_obj16=result_23->v1;
                    result_23->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value58=sType_clone(self->v1))));
                    come_call_finalizer2(sType_finalize,__dec_obj16, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    come_call_finalizer2(sType_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                }
                # 5 "tuple1$1sTypephp_clone"
                __result40__ = __result_obj__ = result_23;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result40__;
                come_call_finalizer2(tuple1$1sTypeph_finalize,result_23, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void tuple1$1sTypeph_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool _if_conditional32;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple1$1sTypeph_finalize"
                    # 0 "tuple1$1sTypeph_finalize"
                    if(_if_conditional32=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional32) {
                        # 0 "tuple1$1sTypeph_finalize"
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
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional38=self==((void*)0),                _if_conditional38) {
                    # 140 "./comelang2.h"
                    __result41__ = __result_obj__ = ((void*)0);
                    return __result41__;
                }
                # 142 "./comelang2.h"
                result_24=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value64=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value63=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 142, "list$1sNodeph"))))))));
                come_call_finalizer2(list$1sNodephp_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1sNodephp_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_25=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional5=it_25!=((void*)0),                _while_condtional5) {
                    # 146 "./comelang2.h"
                    list$1sNodeph_add(result_24,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value69=sNode_clone(it_25->item)))));
                    if(right_value69) { right_value69 = come_decrement_ref_count2(right_value69, ((struct sNode*)right_value69)->finalize, ((struct sNode*)right_value69)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 148 "./comelang2.h"
                    it_25=it_25->next;
                }
                # 151 "./comelang2.h"
                __result46__ = __result_obj__ = result_24;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result46__;
                come_call_finalizer2(list$1sNodephp_finalize,result_24, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1sNodeph* list$1sNodeph_initialize(struct list$1sNodeph* self){
void* __result_obj__;
struct list$1sNodeph* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
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
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional39=self->len==0,                        _if_conditional39) {
                            # 156 "./comelang2.h"
                            litem_26=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value65=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 156, "list_item$1sNodeph"))));
                            come_call_finalizer2(list_item$1sNodephp_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_26->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_26->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj21=litem_26->item;
                            litem_26->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count2(__dec_obj21, ((struct sNode*)__dec_obj21)->finalize, ((struct sNode*)__dec_obj21)->_protocol_obj, 0,0,0, (void*)0); }
                            # 162 "./comelang2.h"
                            self->tail=litem_26;
                            # 163 "./comelang2.h"
                            self->head=litem_26;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional40=self->len==1,                            _if_conditional40) {
                                # 166 "./comelang2.h"
                                litem_27=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value66=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 166, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_27->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_27->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj22=litem_27->item;
                                litem_27->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj22) { __dec_obj22 = come_decrement_ref_count2(__dec_obj22, ((struct sNode*)__dec_obj22)->finalize, ((struct sNode*)__dec_obj22)->_protocol_obj, 0,0,0, (void*)0); }
                                # 172 "./comelang2.h"
                                self->tail=litem_27;
                                # 173 "./comelang2.h"
                                self->head->next=litem_27;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_28=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value67=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 176, "list_item$1sNodeph"))));
                                come_call_finalizer2(list_item$1sNodephp_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_28->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_28->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj23=litem_28->item;
                                litem_28->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj23) { __dec_obj23 = come_decrement_ref_count2(__dec_obj23, ((struct sNode*)__dec_obj23)->finalize, ((struct sNode*)__dec_obj23)->_protocol_obj, 0,0,0, (void*)0); }
                                # 182 "./comelang2.h"
                                self->tail->next=litem_28;
                                # 183 "./comelang2.h"
                                self->tail=litem_28;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
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
                        # 3 "sNode_clone"
                        # 2 "sNode_clone"
                        if(_if_conditional41=self==(void*)0,                        _if_conditional41) {
                            # 2 "sNode_clone"
                            __result44__ = __result_obj__ = (void*)0;
                            return __result44__;
                        }
                        # 3 "sNode_clone"
                        result_29=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value68=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "sNode"))));
                        if(right_value68) { right_value68 = come_decrement_ref_count2(right_value68, ((struct sNode*)right_value68)->finalize, ((struct sNode*)right_value68)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 5 "sNode_clone"
                        # 4 "sNode_clone"
                        if(_if_conditional42=self!=((void*)0)&&self->clone!=((void*)0),                        _if_conditional42) {
                            # 4 "sNode_clone"
                            result_29->_protocol_obj=self->clone(self->_protocol_obj);
                        }
                        # 6 "sNode_clone"
                        # 5 "sNode_clone"
                        if(_if_conditional43=self!=((void*)0),                        _if_conditional43) {
                            # 5 "sNode_clone"
                            result_29->finalize=self->finalize;
                        }
                        # 7 "sNode_clone"
                        # 6 "sNode_clone"
                        if(_if_conditional44=self!=((void*)0),                        _if_conditional44) {
                            # 6 "sNode_clone"
                            result_29->clone=self->clone;
                        }
                        # 8 "sNode_clone"
                        # 7 "sNode_clone"
                        if(_if_conditional45=self!=((void*)0),                        _if_conditional45) {
                            # 7 "sNode_clone"
                            result_29->compile=self->compile;
                        }
                        # 9 "sNode_clone"
                        # 8 "sNode_clone"
                        if(_if_conditional46=self!=((void*)0),                        _if_conditional46) {
                            # 8 "sNode_clone"
                            result_29->sline=self->sline;
                        }
                        # 10 "sNode_clone"
                        # 9 "sNode_clone"
                        if(_if_conditional47=self!=((void*)0),                        _if_conditional47) {
                            # 9 "sNode_clone"
                            result_29->sname=self->sname;
                        }
                        # 11 "sNode_clone"
                        # 10 "sNode_clone"
                        if(_if_conditional48=self!=((void*)0),                        _if_conditional48) {
                            # 10 "sNode_clone"
                            result_29->terminated=self->terminated;
                        }
                        # 12 "sNode_clone"
                        # 11 "sNode_clone"
                        if(_if_conditional49=self!=((void*)0),                        _if_conditional49) {
                            # 11 "sNode_clone"
                            result_29->kind=self->kind;
                        }
                        # 12 "sNode_clone"
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
                # 142 "./comelang2.h"
                # 139 "./comelang2.h"
                if(_if_conditional53=self==((void*)0),                _if_conditional53) {
                    # 140 "./comelang2.h"
                    __result47__ = __result_obj__ = ((void*)0);
                    return __result47__;
                }
                # 142 "./comelang2.h"
                result_30=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value73=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value72=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 142, "list$1charph"))))))));
                come_call_finalizer2(list$1charphp_finalize,right_value72, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(list$1charphp_finalize,right_value73, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 144 "./comelang2.h"
                it_31=self->head;
                # 151 "./comelang2.h"
                while(_while_condtional6=it_31!=((void*)0),                _while_condtional6) {
                    # 146 "./comelang2.h"
                    list$1charph_add(result_30,(char*)come_increment_ref_count(((char*)(right_value77=string_clone(it_31->item)))));
                    right_value77 = come_decrement_ref_count2(right_value77, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    # 148 "./comelang2.h"
                    it_31=it_31->next;
                }
                # 151 "./comelang2.h"
                __result50__ = __result_obj__ = result_30;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result50__;
                come_call_finalizer2(list$1charphp_finalize,result_30, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1charph* list$1charph_initialize(struct list$1charph* self){
void* __result_obj__;
struct list$1charph* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
                    # 104 "./comelang2.h"
                    self->head=((void*)0);
                    # 105 "./comelang2.h"
                    self->tail=((void*)0);
                    # 106 "./comelang2.h"
                    self->len=0;
                    # 108 "./comelang2.h"
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
                        # 186 "./comelang2.h"
                        # 155 "./comelang2.h"
                        if(_if_conditional54=self->len==0,                        _if_conditional54) {
                            # 156 "./comelang2.h"
                            litem_32=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value74=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 156, "list_item$1charph"))));
                            come_call_finalizer2(list_item$1charphp_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 158 "./comelang2.h"
                            litem_32->prev=((void*)0);
                            # 159 "./comelang2.h"
                            litem_32->next=((void*)0);
                            # 160 "./comelang2.h"
                            __dec_obj26=litem_32->item;
                            litem_32->item=(char*)come_increment_ref_count(item);
                            __dec_obj26 = come_decrement_ref_count2(__dec_obj26, (void*)0, (void*)0, 0,0,0, (void*)0);
                            # 162 "./comelang2.h"
                            self->tail=litem_32;
                            # 163 "./comelang2.h"
                            self->head=litem_32;
                        }
                        else {
                            # 186 "./comelang2.h"
                            # 165 "./comelang2.h"
                            if(_if_conditional55=self->len==1,                            _if_conditional55) {
                                # 166 "./comelang2.h"
                                litem_33=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value75=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 166, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 168 "./comelang2.h"
                                litem_33->prev=self->head;
                                # 169 "./comelang2.h"
                                litem_33->next=((void*)0);
                                # 170 "./comelang2.h"
                                __dec_obj27=litem_33->item;
                                litem_33->item=(char*)come_increment_ref_count(item);
                                __dec_obj27 = come_decrement_ref_count2(__dec_obj27, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 172 "./comelang2.h"
                                self->tail=litem_33;
                                # 173 "./comelang2.h"
                                self->head->next=litem_33;
                            }
                            else {
                                # 176 "./comelang2.h"
                                litem_34=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value76=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 176, "list_item$1charph"))));
                                come_call_finalizer2(list_item$1charphp_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 178 "./comelang2.h"
                                litem_34->prev=self->tail;
                                # 179 "./comelang2.h"
                                litem_34->next=((void*)0);
                                # 180 "./comelang2.h"
                                __dec_obj28=litem_34->item;
                                litem_34->item=(char*)come_increment_ref_count(item);
                                __dec_obj28 = come_decrement_ref_count2(__dec_obj28, (void*)0, (void*)0, 0,0,0, (void*)0);
                                # 182 "./comelang2.h"
                                self->tail->next=litem_34;
                                # 183 "./comelang2.h"
                                self->tail=litem_34;
                            }
                        }
                        # 186 "./comelang2.h"
                        self->len++;
                        # 188 "./comelang2.h"
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
_Bool _if_conditional99;
int __result52__;
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
        # 367 "./comelang2.h"
        # 364 "./comelang2.h"
        if(_if_conditional99=self==((void*)0),        _if_conditional99) {
            # 365 "./comelang2.h"
            __result52__ = 0;
            return __result52__;
        }
        # 367 "./comelang2.h"
        __result53__ = self->len;
        return __result53__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
unsigned int hash_43;
unsigned int it_44;
_Bool _while_condtional7;
_Bool _if_conditional101;
_Bool _if_conditional102;
struct sGenericsFun* __result54__;
_Bool _if_conditional113;
_Bool _if_conditional114;
struct sGenericsFun* __result55__;
struct sGenericsFun* __result56__;
struct sGenericsFun* __result57__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&hash_43, 0, sizeof(unsigned int));
memset(&it_44, 0, sizeof(unsigned int));
            # 1226 "./comelang2.h"
            hash_43=string_get_hash_key(((char*)key))%self->size;
            # 1227 "./comelang2.h"
            it_44=hash_43;
            # 1251 "./comelang2.h"
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                # 1249 "./comelang2.h"
                # 1230 "./comelang2.h"
                if(_if_conditional101=self->item_existance[it_44],                _if_conditional101) {
                    # 1237 "./comelang2.h"
                    # 1232 "./comelang2.h"
                    if(_if_conditional102=string_equals(self->keys[it_44],key),                    _if_conditional102) {
                        # 1234 "./comelang2.h"
                        __result54__ = __result_obj__ = self->items[it_44];
                        come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result54__;
                    }
                    # 1237 "./comelang2.h"
                    it_44++;
                    # 1245 "./comelang2.h"
                    # 1239 "./comelang2.h"
                    if(_if_conditional113=it_44>=self->size,                    _if_conditional113) {
                        # 1240 "./comelang2.h"
                        it_44=0;
                    }
                    else {
                        # 1245 "./comelang2.h"
                        # 1242 "./comelang2.h"
                        if(_if_conditional114=it_44==hash_43,                        _if_conditional114) {
                            # 1243 "./comelang2.h"
                            __result55__ = __result_obj__ = default_value;
                            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result55__;
                        }
                    }
                }
                else {
                    # 1247 "./comelang2.h"
                    __result56__ = __result_obj__ = default_value;
                    come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result56__;
                }
            }
            # 1251 "./comelang2.h"
            __result57__ = __result_obj__ = default_value;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result57__;
            come_call_finalizer2(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
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
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sGenericsFun_finalize"
                            # 0 "sGenericsFun_finalize"
                            if(_if_conditional103=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional103) {
                                # 0 "sGenericsFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 2 "sGenericsFun_finalize"
                            # 1 "sGenericsFun_finalize"
                            if(_if_conditional104=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional104) {
                                # 1 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 3 "sGenericsFun_finalize"
                            # 2 "sGenericsFun_finalize"
                            if(_if_conditional105=self!=((void*)0)&&self->mMethodGenericsTypeNames!=((void*)0),                            _if_conditional105) {
                                # 2 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mMethodGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 4 "sGenericsFun_finalize"
                            # 3 "sGenericsFun_finalize"
                            if(_if_conditional106=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional106) {
                                # 3 "sGenericsFun_finalize"
                                self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 5 "sGenericsFun_finalize"
                            # 4 "sGenericsFun_finalize"
                            if(_if_conditional107=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional107) {
                                # 4 "sGenericsFun_finalize"
                                come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 6 "sGenericsFun_finalize"
                            # 5 "sGenericsFun_finalize"
                            if(_if_conditional108=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional108) {
                                # 5 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 7 "sGenericsFun_finalize"
                            # 6 "sGenericsFun_finalize"
                            if(_if_conditional109=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional109) {
                                # 6 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 8 "sGenericsFun_finalize"
                            # 7 "sGenericsFun_finalize"
                            if(_if_conditional110=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional110) {
                                # 7 "sGenericsFun_finalize"
                                come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            }
                            # 9 "sGenericsFun_finalize"
                            # 8 "sGenericsFun_finalize"
                            if(_if_conditional111=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional111) {
                                # 8 "sGenericsFun_finalize"
                                self->mBlock = come_decrement_ref_count2(self->mBlock, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
                            # 10 "sGenericsFun_finalize"
                            # 9 "sGenericsFun_finalize"
                            if(_if_conditional112=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional112) {
                                # 9 "sGenericsFun_finalize"
                                self->mGenericsSName = come_decrement_ref_count2(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
struct sFun* default_value_46;
unsigned int hash_47;
unsigned int it_48;
_Bool _while_condtional8;
_Bool _if_conditional117;
_Bool _if_conditional118;
struct sFun* __result59__;
_Bool _if_conditional134;
_Bool _if_conditional135;
struct sFun* __result60__;
struct sFun* __result61__;
struct sFun* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&default_value_46, 0, sizeof(struct sFun*));
memset(&hash_47, 0, sizeof(unsigned int));
memset(&it_48, 0, sizeof(unsigned int));
                # 1545 "./comelang2.h"
                # 1546 "./comelang2.h"
                memset(&default_value_46,0,sizeof(struct sFun*));
                # 1548 "./comelang2.h"
                hash_47=string_get_hash_key(((char*)key))%self->size;
                # 1549 "./comelang2.h"
                it_48=hash_47;
                # 1573 "./comelang2.h"
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    # 1571 "./comelang2.h"
                    # 1552 "./comelang2.h"
                    if(_if_conditional117=self->item_existance[it_48],                    _if_conditional117) {
                        # 1559 "./comelang2.h"
                        # 1554 "./comelang2.h"
                        if(_if_conditional118=string_equals(self->keys[it_48],key),                        _if_conditional118) {
                            # 1556 "./comelang2.h"
                            __result59__ = __result_obj__ = self->items[it_48];
                            come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                            return __result59__;
                        }
                        # 1559 "./comelang2.h"
                        it_48++;
                        # 1567 "./comelang2.h"
                        # 1561 "./comelang2.h"
                        if(_if_conditional134=it_48>=self->size,                        _if_conditional134) {
                            # 1562 "./comelang2.h"
                            it_48=0;
                        }
                        else {
                            # 1567 "./comelang2.h"
                            # 1564 "./comelang2.h"
                            if(_if_conditional135=it_48==hash_47,                            _if_conditional135) {
                                # 1565 "./comelang2.h"
                                __result60__ = __result_obj__ = default_value_46;
                                come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result60__;
                            }
                        }
                    }
                    else {
                        # 1569 "./comelang2.h"
                        __result61__ = __result_obj__ = default_value_46;
                        come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result61__;
                    }
                }
                # 1573 "./comelang2.h"
                __result62__ = __result_obj__ = default_value_46;
                come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result62__;
                come_call_finalizer2(sFun_finalize,default_value_46, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool _if_conditional119;
_Bool _if_conditional120;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional128;
_Bool _if_conditional129;
_Bool _if_conditional130;
_Bool _if_conditional131;
_Bool _if_conditional132;
_Bool _if_conditional133;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sFun_finalize"
                                # 0 "sFun_finalize"
                                if(_if_conditional119=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional119) {
                                    # 0 "sFun_finalize"
                                    self->mName = come_decrement_ref_count2(self->mName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 2 "sFun_finalize"
                                # 1 "sFun_finalize"
                                if(_if_conditional120=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional120) {
                                    # 1 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 3 "sFun_finalize"
                                # 2 "sFun_finalize"
                                if(_if_conditional121=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional121) {
                                    # 2 "sFun_finalize"
                                    come_call_finalizer2(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 4 "sFun_finalize"
                                # 3 "sFun_finalize"
                                if(_if_conditional122=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional122) {
                                    # 3 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 5 "sFun_finalize"
                                # 4 "sFun_finalize"
                                if(_if_conditional123=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional123) {
                                    # 4 "sFun_finalize"
                                    come_call_finalizer2(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 6 "sFun_finalize"
                                # 5 "sFun_finalize"
                                if(_if_conditional124=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional124) {
                                    # 5 "sFun_finalize"
                                    come_call_finalizer2(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 7 "sFun_finalize"
                                # 6 "sFun_finalize"
                                if(_if_conditional125=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional125) {
                                    # 6 "sFun_finalize"
                                    come_call_finalizer2(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 8 "sFun_finalize"
                                # 7 "sFun_finalize"
                                if(_if_conditional128=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional128) {
                                    # 7 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 9 "sFun_finalize"
                                # 8 "sFun_finalize"
                                if(_if_conditional129=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional129) {
                                    # 8 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 10 "sFun_finalize"
                                # 9 "sFun_finalize"
                                if(_if_conditional130=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional130) {
                                    # 9 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 11 "sFun_finalize"
                                # 10 "sFun_finalize"
                                if(_if_conditional131=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional131) {
                                    # 10 "sFun_finalize"
                                    come_call_finalizer2(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                }
                                # 12 "sFun_finalize"
                                # 11 "sFun_finalize"
                                if(_if_conditional132=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional132) {
                                    # 11 "sFun_finalize"
                                    self->mComeHeader = come_decrement_ref_count2(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
                                # 13 "sFun_finalize"
                                # 12 "sFun_finalize"
                                if(_if_conditional133=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional133) {
                                    # 12 "sFun_finalize"
                                    self->mDeclareSName = come_decrement_ref_count2(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool _if_conditional126;
_Bool _if_conditional127;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sBlock_finalize"
                                        # 0 "sBlock_finalize"
                                        if(_if_conditional126=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional126) {
                                            # 0 "sBlock_finalize"
                                            come_call_finalizer2(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
                                        # 2 "sBlock_finalize"
                                        # 1 "sBlock_finalize"
                                        if(_if_conditional127=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional127) {
                                            # 1 "sBlock_finalize"
                                            come_call_finalizer2(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "tuple2$2sFunpcharphp_finalize"
                    # 0 "tuple2$2sFunpcharphp_finalize"
                    if(_if_conditional137=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional137) {
                        # 0 "tuple2$2sFunpcharphp_finalize"
                        self->v2 = come_decrement_ref_count2(self->v2, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool _if_conditional142;
_Bool _if_conditional143;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "CVALUE_finalize"
            # 0 "CVALUE_finalize"
            if(_if_conditional142=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional142) {
                # 0 "CVALUE_finalize"
                self->c_value = come_decrement_ref_count2(self->c_value, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
            # 2 "CVALUE_finalize"
            # 1 "CVALUE_finalize"
            if(_if_conditional143=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional143) {
                # 1 "CVALUE_finalize"
                come_call_finalizer2(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool _if_conditional144;
struct list_item$1sTypeph* it_62;
int i_63;
_Bool _while_condtional9;
_Bool _if_conditional145;
struct sType* __result63__;
struct sType* default_value_64;
struct sType* __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&it_62, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_63, 0, sizeof(int));
memset(&default_value_64, 0, sizeof(struct sType*));
            # 686 "./comelang2.h"
            # 682 "./comelang2.h"
            if(_if_conditional144=position<0,            _if_conditional144) {
                # 683 "./comelang2.h"
                position+=self->len;
            }
            # 686 "./comelang2.h"
            it_62=self->head;
            # 687 "./comelang2.h"
            i_63=0;
            # 694 "./comelang2.h"
            while(_while_condtional9=it_62!=((void*)0),            _while_condtional9) {
                # 692 "./comelang2.h"
                # 689 "./comelang2.h"
                if(_if_conditional145=position==i_63,                _if_conditional145) {
                    # 690 "./comelang2.h"
                    __result63__ = __result_obj__ = it_62->item;
                    return __result63__;
                }
                # 692 "./comelang2.h"
                it_62=it_62->next;
                # 693 "./comelang2.h"
                i_63++;
            }
            # 696 "./comelang2.h"
            # 697 "./comelang2.h"
            memset(&default_value_64,0,sizeof(struct sType*));
            # 698 "./comelang2.h"
            __result64__ = __result_obj__ = default_value_64;
            come_call_finalizer2(sType_finalize,default_value_64, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result64__;
            come_call_finalizer2(sType_finalize,default_value_64, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool _if_conditional150;
void* right_value117;
struct list_item$1CVALUEph* litem_68;
struct CVALUE* __dec_obj48;
_Bool _if_conditional152;
void* right_value118;
struct list_item$1CVALUEph* litem_69;
struct CVALUE* __dec_obj49;
void* right_value119;
struct list_item$1CVALUEph* litem_70;
struct CVALUE* __dec_obj50;
struct list$1CVALUEph* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
right_value117 = (void*)0;
memset(&litem_68, 0, sizeof(struct list_item$1CVALUEph*));
right_value118 = (void*)0;
memset(&litem_69, 0, sizeof(struct list_item$1CVALUEph*));
right_value119 = (void*)0;
memset(&litem_70, 0, sizeof(struct list_item$1CVALUEph*));
            # 256 "./comelang2.h"
            # 225 "./comelang2.h"
            if(_if_conditional150=self->len==0,            _if_conditional150) {
                # 226 "./comelang2.h"
                litem_68=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value117=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 226, "list_item$1CVALUEph"))));
                come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value117, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 228 "./comelang2.h"
                litem_68->prev=((void*)0);
                # 229 "./comelang2.h"
                litem_68->next=((void*)0);
                # 230 "./comelang2.h"
                __dec_obj48=litem_68->item;
                litem_68->item=(struct CVALUE*)come_increment_ref_count(item);
                come_call_finalizer2(CVALUE_finalize,__dec_obj48, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                # 232 "./comelang2.h"
                self->tail=litem_68;
                # 233 "./comelang2.h"
                self->head=litem_68;
            }
            else {
                # 256 "./comelang2.h"
                # 235 "./comelang2.h"
                if(_if_conditional152=self->len==1,                _if_conditional152) {
                    # 236 "./comelang2.h"
                    litem_69=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value118=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 236, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value118, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 238 "./comelang2.h"
                    litem_69->prev=self->head;
                    # 239 "./comelang2.h"
                    litem_69->next=((void*)0);
                    # 240 "./comelang2.h"
                    __dec_obj49=litem_69->item;
                    litem_69->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 242 "./comelang2.h"
                    self->tail=litem_69;
                    # 243 "./comelang2.h"
                    self->head->next=litem_69;
                }
                else {
                    # 246 "./comelang2.h"
                    litem_70=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value119=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 246, "list_item$1CVALUEph"))));
                    come_call_finalizer2(list_item$1CVALUEphp_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 248 "./comelang2.h"
                    litem_70->prev=self->tail;
                    # 249 "./comelang2.h"
                    litem_70->next=((void*)0);
                    # 250 "./comelang2.h"
                    __dec_obj50=litem_70->item;
                    litem_70->item=(struct CVALUE*)come_increment_ref_count(item);
                    come_call_finalizer2(CVALUE_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    # 252 "./comelang2.h"
                    self->tail->next=litem_70;
                    # 253 "./comelang2.h"
                    self->tail=litem_70;
                }
            }
            # 256 "./comelang2.h"
            self->len++;
            # 258 "./comelang2.h"
            __result65__ = __result_obj__ = self;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result65__;
            come_call_finalizer2(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool _if_conditional151;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "list_item$1CVALUEphp_finalize"
                    # 0 "list_item$1CVALUEphp_finalize"
                    if(_if_conditional151=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional151) {
                        # 0 "list_item$1CVALUEphp_finalize"
                        come_call_finalizer2(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value120;
char* __dec_obj51;
struct sNullNode* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
right_value120 = (void*)0;
    # 135 "13op.c"
    self->sline=info->sline;
    # 136 "13op.c"
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value120=__builtin_string(info->sname))));
    __dec_obj51 = come_decrement_ref_count2(__dec_obj51, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value120 = come_decrement_ref_count2(right_value120, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 138 "13op.c"
    __result67__ = __result_obj__ = self;
    come_call_finalizer2(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result67__;
    come_call_finalizer2(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNullNode_terminated(){
void* __result_obj__;
_Bool __result68__;
memset(&__result_obj__, 0, sizeof(void*));
    # 143 "13op.c"
    __result68__ = (_Bool)0;
    return __result68__;
}

char* sNullNode_kind(){
void* __result_obj__;
void* right_value121;
char* __result69__;
memset(&__result_obj__, 0, sizeof(void*));
right_value121 = (void*)0;
    # 148 "13op.c"
    __result69__ = __result_obj__ = ((char*)(right_value121=__builtin_string("sNullNode")));
    right_value121 = come_decrement_ref_count2(right_value121, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result69__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value122;
struct CVALUE* come_value_71;
void* right_value123;
char* __dec_obj52;
void* right_value124;
void* right_value125;
struct sType* __dec_obj53;
_Bool __result70__;
memset(&__result_obj__, 0, sizeof(void*));
right_value122 = (void*)0;
memset(&come_value_71, 0, sizeof(struct CVALUE*));
right_value123 = (void*)0;
right_value124 = (void*)0;
right_value125 = (void*)0;
    # 153 "13op.c"
    come_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 153, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 155 "13op.c"
    __dec_obj52=come_value_71->c_value;
    come_value_71->c_value=(char*)come_increment_ref_count(((char*)(right_value123=xsprintf("((void*)0)"))));
    __dec_obj52 = come_decrement_ref_count2(__dec_obj52, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value123 = come_decrement_ref_count2(right_value123, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 156 "13op.c"
    __dec_obj53=come_value_71->type;
    come_value_71->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value124=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 156, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj53, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 157 "13op.c"
    come_value_71->var=((void*)0);
    # 159 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_71->c_value);
    # 161 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_71));
    # 163 "13op.c"
    __result70__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result70__;
    come_call_finalizer2(CVALUE_finalize,come_value_71, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNullNode_sline(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
int __result71__;
memset(&__result_obj__, 0, sizeof(void*));
    # 168 "13op.c"
    __result71__ = self->sline;
    return __result71__;
}

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value126;
char* __result72__;
memset(&__result_obj__, 0, sizeof(void*));
right_value126 = (void*)0;
    # 173 "13op.c"
    __result72__ = __result_obj__ = ((char*)(right_value126=__builtin_string(self->sname)));
    right_value126 = come_decrement_ref_count2(right_value126, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result72__;
}

struct sNode* create_null_object(struct sInfo* info){
void* __result_obj__;
void* right_value127;
void* right_value128;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value131;
struct sNode* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
right_value127 = (void*)0;
right_value128 = (void*)0;
right_value131 = (void*)0;
    # 178 "13op.c"
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 178, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value128=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value127=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 178, "sNullNode")))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNullNode_sline;
    _inf_value1->sname=(void*)sNullNode_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result75__ = __result_obj__ = ((struct sNode*)(right_value131=_inf_value1));
    come_call_finalizer2(sNullNode_finalize,right_value127, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sNullNode_finalize,right_value128, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    if(right_value131) { right_value131 = come_decrement_ref_count2(right_value131, ((struct sNode*)right_value131)->finalize, ((struct sNode*)right_value131)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result75__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value132;
char* __dec_obj55;
struct sNilNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
right_value132 = (void*)0;
    # 190 "13op.c"
    self->sline=info->sline;
    # 191 "13op.c"
    __dec_obj55=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value132=__builtin_string(info->sname))));
    __dec_obj55 = come_decrement_ref_count2(__dec_obj55, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value132 = come_decrement_ref_count2(right_value132, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 193 "13op.c"
    __result76__ = __result_obj__ = self;
    come_call_finalizer2(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
    return __result76__;
    come_call_finalizer2(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
}

_Bool sNilNode_terminated(){
void* __result_obj__;
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
    # 198 "13op.c"
    __result77__ = (_Bool)0;
    return __result77__;
}

char* sNilNode_kind(){
void* __result_obj__;
void* right_value133;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
right_value133 = (void*)0;
    # 203 "13op.c"
    __result78__ = __result_obj__ = ((char*)(right_value133=__builtin_string("sNilNode")));
    right_value133 = come_decrement_ref_count2(right_value133, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result78__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value134;
struct CVALUE* come_value_73;
void* right_value135;
char* __dec_obj56;
void* right_value136;
void* right_value137;
struct sType* __dec_obj57;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
right_value134 = (void*)0;
memset(&come_value_73, 0, sizeof(struct CVALUE*));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
    # 208 "13op.c"
    come_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value134=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 208, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 210 "13op.c"
    __dec_obj56=come_value_73->c_value;
    come_value_73->c_value=(char*)come_increment_ref_count(((char*)(right_value135=xsprintf("((void*)0)"))));
    __dec_obj56 = come_decrement_ref_count2(__dec_obj56, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value135 = come_decrement_ref_count2(right_value135, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 211 "13op.c"
    __dec_obj57=come_value_73->type;
    come_value_73->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value137=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value136=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 211, "sType")))),"void*",(_Bool)0,info))));
    come_call_finalizer2(sType_finalize,__dec_obj57, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value136, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    come_call_finalizer2(sType_finalize,right_value137, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 212 "13op.c"
    come_value_73->type->mNullValue=(_Bool)1;
    # 213 "13op.c"
    come_value_73->var=((void*)0);
    # 215 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_73->c_value);
    # 217 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_73));
    # 219 "13op.c"
    __result79__ = (_Bool)1;
    come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    return __result79__;
    come_call_finalizer2(CVALUE_finalize,come_value_73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

int sNilNode_sline(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
    # 224 "13op.c"
    __result80__ = self->sline;
    return __result80__;
}

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value138;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
right_value138 = (void*)0;
    # 229 "13op.c"
    __result81__ = __result_obj__ = ((char*)(right_value138=__builtin_string(self->sname)));
    right_value138 = come_decrement_ref_count2(right_value138, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result81__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value144;
char* __dec_obj59;
void* right_value145;
struct sNode* __dec_obj60;
void* right_value146;
struct sNode* __dec_obj61;
struct sAddNode* __result85__;
memset(&__result_obj__, 0, sizeof(void*));
right_value144 = (void*)0;
right_value145 = (void*)0;
right_value146 = (void*)0;
    # 251 "13op.c"
    self->sline=info->sline;
    # 252 "13op.c"
    __dec_obj59=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value144=__builtin_string(info->sname))));
    __dec_obj59 = come_decrement_ref_count2(__dec_obj59, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value144 = come_decrement_ref_count2(right_value144, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 254 "13op.c"
    __dec_obj60=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value145=sNode_clone(left))));
    if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count2(__dec_obj60, ((struct sNode*)__dec_obj60)->finalize, ((struct sNode*)__dec_obj60)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value145) { right_value145 = come_decrement_ref_count2(right_value145, ((struct sNode*)right_value145)->finalize, ((struct sNode*)right_value145)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 255 "13op.c"
    __dec_obj61=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=sNode_clone(right))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count2(__dec_obj61, ((struct sNode*)__dec_obj61)->finalize, ((struct sNode*)__dec_obj61)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value146) { right_value146 = come_decrement_ref_count2(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 256 "13op.c"
    self->mQuote=quote;
    # 258 "13op.c"
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
    # 263 "13op.c"
    __result86__ = (_Bool)0;
    return __result86__;
}

char* sAddNode_kind(){
void* __result_obj__;
void* right_value147;
char* __result87__;
memset(&__result_obj__, 0, sizeof(void*));
right_value147 = (void*)0;
    # 268 "13op.c"
    __result87__ = __result_obj__ = ((char*)(right_value147=__builtin_string("sAddNode")));
    right_value147 = come_decrement_ref_count2(right_value147, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result87__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_75;
_Bool _if_conditional166;
_Bool __result88__;
void* right_value148;
struct CVALUE* left_value_76;
struct sNode* right_node_77;
_Bool _if_conditional167;
_Bool __result89__;
void* right_value149;
struct CVALUE* right_value_78;
struct sType* type_79;
char* fun_name_80;
_Bool calling_fun_81;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value150;
struct CVALUE* come_value_82;
void* right_value151;
char* __dec_obj62;
void* right_value152;
struct sType* __dec_obj63;
_Bool __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_75, 0, sizeof(struct sNode*));
right_value148 = (void*)0;
memset(&left_value_76, 0, sizeof(struct CVALUE*));
memset(&right_node_77, 0, sizeof(struct sNode*));
right_value149 = (void*)0;
memset(&right_value_78, 0, sizeof(struct CVALUE*));
memset(&type_79, 0, sizeof(struct sType*));
memset(&fun_name_80, 0, sizeof(char*));
memset(&calling_fun_81, 0, sizeof(_Bool));
right_value150 = (void*)0;
memset(&come_value_82, 0, sizeof(struct CVALUE*));
right_value151 = (void*)0;
right_value152 = (void*)0;
    # 274 "13op.c"
    left_node_75=self->mLeft;
    # 280 "13op.c"
    # 276 "13op.c"
    if(_if_conditional166=!node_compile(left_node_75,info),    _if_conditional166) {
        # 277 "13op.c"
        __result88__ = (_Bool)0;
        return __result88__;
    }
    # 280 "13op.c"
    left_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value148=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value148, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 281 "13op.c"
    dec_stack_ptr(1,info);
    # 283 "13op.c"
    right_node_77=self->mRight;
    # 289 "13op.c"
    # 285 "13op.c"
    if(_if_conditional167=!node_compile(right_node_77,info),    _if_conditional167) {
        # 286 "13op.c"
        __result89__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_76, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result89__;
    }
    # 289 "13op.c"
    right_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 290 "13op.c"
    dec_stack_ptr(1,info);
    # 292 "13op.c"
    type_79=(struct sType*)come_increment_ref_count(left_value_76->type);
    # 294 "13op.c"
    fun_name_80="operator_add";
    # 295 "13op.c"
    # 303 "13op.c"
    # 296 "13op.c"
    if(self->mQuote) {
        # 297 "13op.c"
        calling_fun_81=(_Bool)0;
    }
    else {
        # 300 "13op.c"
        calling_fun_81=operator_overload_fun(type_79,fun_name_80,left_value_76,right_value_78,(_Bool)0,info);
    }
    # 316 "13op.c"
    # 303 "13op.c"
    if(_if_conditional169=!calling_fun_81,    _if_conditional169) {
        # 304 "13op.c"
        come_value_82=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 304, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 306 "13op.c"
        __dec_obj62=come_value_82->c_value;
        come_value_82->c_value=(char*)come_increment_ref_count(((char*)(right_value151=xsprintf("%s+%s",left_value_76->c_value,right_value_78->c_value))));
        __dec_obj62 = come_decrement_ref_count2(__dec_obj62, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value151 = come_decrement_ref_count2(right_value151, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 307 "13op.c"
        __dec_obj63=come_value_82->type;
        come_value_82->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value152=sType_clone(left_value_76->type))));
        come_call_finalizer2(sType_finalize,__dec_obj63, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 308 "13op.c"
        come_value_82->type->mHeap=(_Bool)0;
        # 309 "13op.c"
        come_value_82->var=((void*)0);
        # 311 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_82->c_value);
        # 313 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_82));
        come_call_finalizer2(CVALUE_finalize,come_value_82, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 316 "13op.c"
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
    # 321 "13op.c"
    __result91__ = self->sline;
    return __result91__;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value153;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
right_value153 = (void*)0;
    # 326 "13op.c"
    __result92__ = __result_obj__ = ((char*)(right_value153=__builtin_string(self->sname)));
    right_value153 = come_decrement_ref_count2(right_value153, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result92__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value154;
char* __dec_obj64;
void* right_value155;
struct sNode* __dec_obj65;
void* right_value156;
struct sNode* __dec_obj66;
struct sSubNode* __result93__;
memset(&__result_obj__, 0, sizeof(void*));
right_value154 = (void*)0;
right_value155 = (void*)0;
right_value156 = (void*)0;
    # 342 "13op.c"
    self->sline=info->sline;
    # 343 "13op.c"
    __dec_obj64=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value154=__builtin_string(info->sname))));
    __dec_obj64 = come_decrement_ref_count2(__dec_obj64, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value154 = come_decrement_ref_count2(right_value154, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 345 "13op.c"
    __dec_obj65=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value155=sNode_clone(left))));
    if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count2(__dec_obj65, ((struct sNode*)__dec_obj65)->finalize, ((struct sNode*)__dec_obj65)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value155) { right_value155 = come_decrement_ref_count2(right_value155, ((struct sNode*)right_value155)->finalize, ((struct sNode*)right_value155)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 346 "13op.c"
    __dec_obj66=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value156=sNode_clone(right))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count2(__dec_obj66, ((struct sNode*)__dec_obj66)->finalize, ((struct sNode*)__dec_obj66)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value156) { right_value156 = come_decrement_ref_count2(right_value156, ((struct sNode*)right_value156)->finalize, ((struct sNode*)right_value156)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 347 "13op.c"
    self->mQuote=quote;
    # 349 "13op.c"
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
    # 354 "13op.c"
    __result94__ = (_Bool)0;
    return __result94__;
}

char* sSubNode_kind(){
void* __result_obj__;
void* right_value157;
char* __result95__;
memset(&__result_obj__, 0, sizeof(void*));
right_value157 = (void*)0;
    # 359 "13op.c"
    __result95__ = __result_obj__ = ((char*)(right_value157=__builtin_string("sSubNode")));
    right_value157 = come_decrement_ref_count2(right_value157, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result95__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_83;
_Bool _if_conditional173;
_Bool __result96__;
void* right_value158;
struct CVALUE* left_value_84;
struct sNode* right_node_85;
_Bool _if_conditional174;
_Bool __result97__;
void* right_value159;
struct CVALUE* right_value_86;
struct sType* type_87;
char* fun_name_88;
_Bool calling_fun_89;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value160;
struct CVALUE* come_value_90;
void* right_value161;
char* __dec_obj67;
void* right_value162;
struct sType* __dec_obj68;
_Bool __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_83, 0, sizeof(struct sNode*));
right_value158 = (void*)0;
memset(&left_value_84, 0, sizeof(struct CVALUE*));
memset(&right_node_85, 0, sizeof(struct sNode*));
right_value159 = (void*)0;
memset(&right_value_86, 0, sizeof(struct CVALUE*));
memset(&type_87, 0, sizeof(struct sType*));
memset(&fun_name_88, 0, sizeof(char*));
memset(&calling_fun_89, 0, sizeof(_Bool));
right_value160 = (void*)0;
memset(&come_value_90, 0, sizeof(struct CVALUE*));
right_value161 = (void*)0;
right_value162 = (void*)0;
    # 365 "13op.c"
    left_node_83=self->mLeft;
    # 371 "13op.c"
    # 367 "13op.c"
    if(_if_conditional173=!node_compile(left_node_83,info),    _if_conditional173) {
        # 368 "13op.c"
        __result96__ = (_Bool)0;
        return __result96__;
    }
    # 371 "13op.c"
    left_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value158=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value158, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 372 "13op.c"
    dec_stack_ptr(1,info);
    # 374 "13op.c"
    right_node_85=self->mRight;
    # 380 "13op.c"
    # 376 "13op.c"
    if(_if_conditional174=!node_compile(right_node_85,info),    _if_conditional174) {
        # 377 "13op.c"
        __result97__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_84, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result97__;
    }
    # 380 "13op.c"
    right_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 381 "13op.c"
    dec_stack_ptr(1,info);
    # 383 "13op.c"
    type_87=(struct sType*)come_increment_ref_count(left_value_84->type);
    # 385 "13op.c"
    fun_name_88="operator_sub";
    # 386 "13op.c"
    # 394 "13op.c"
    # 387 "13op.c"
    if(self->mQuote) {
        # 388 "13op.c"
        calling_fun_89=(_Bool)0;
    }
    else {
        # 391 "13op.c"
        calling_fun_89=operator_overload_fun(type_87,fun_name_88,left_value_84,right_value_86,(_Bool)0,info);
    }
    # 407 "13op.c"
    # 394 "13op.c"
    if(_if_conditional176=!calling_fun_89,    _if_conditional176) {
        # 395 "13op.c"
        come_value_90=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 395, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 397 "13op.c"
        __dec_obj67=come_value_90->c_value;
        come_value_90->c_value=(char*)come_increment_ref_count(((char*)(right_value161=xsprintf("%s-%s",left_value_84->c_value,right_value_86->c_value))));
        __dec_obj67 = come_decrement_ref_count2(__dec_obj67, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value161 = come_decrement_ref_count2(right_value161, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 398 "13op.c"
        __dec_obj68=come_value_90->type;
        come_value_90->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value162=sType_clone(left_value_84->type))));
        come_call_finalizer2(sType_finalize,__dec_obj68, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 399 "13op.c"
        come_value_90->type->mHeap=(_Bool)0;
        # 400 "13op.c"
        come_value_90->var=((void*)0);
        # 402 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_90->c_value);
        # 404 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_90));
        come_call_finalizer2(CVALUE_finalize,come_value_90, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 407 "13op.c"
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
    # 412 "13op.c"
    __result99__ = self->sline;
    return __result99__;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value163;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
right_value163 = (void*)0;
    # 417 "13op.c"
    __result100__ = __result_obj__ = ((char*)(right_value163=__builtin_string(self->sname)));
    right_value163 = come_decrement_ref_count2(right_value163, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result100__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value164;
char* __dec_obj69;
void* right_value165;
struct sNode* __dec_obj70;
void* right_value166;
struct sNode* __dec_obj71;
struct sMultNode* __result101__;
memset(&__result_obj__, 0, sizeof(void*));
right_value164 = (void*)0;
right_value165 = (void*)0;
right_value166 = (void*)0;
    # 433 "13op.c"
    self->sline=info->sline;
    # 434 "13op.c"
    __dec_obj69=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value164=__builtin_string(info->sname))));
    __dec_obj69 = come_decrement_ref_count2(__dec_obj69, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value164 = come_decrement_ref_count2(right_value164, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 436 "13op.c"
    self->mQuote=quote;
    # 437 "13op.c"
    __dec_obj70=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value165=sNode_clone(left))));
    if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count2(__dec_obj70, ((struct sNode*)__dec_obj70)->finalize, ((struct sNode*)__dec_obj70)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value165) { right_value165 = come_decrement_ref_count2(right_value165, ((struct sNode*)right_value165)->finalize, ((struct sNode*)right_value165)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 438 "13op.c"
    __dec_obj71=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=sNode_clone(right))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count2(__dec_obj71, ((struct sNode*)__dec_obj71)->finalize, ((struct sNode*)__dec_obj71)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value166) { right_value166 = come_decrement_ref_count2(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 440 "13op.c"
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
    # 445 "13op.c"
    __result102__ = (_Bool)0;
    return __result102__;
}

char* sMultNode_kind(){
void* __result_obj__;
void* right_value167;
char* __result103__;
memset(&__result_obj__, 0, sizeof(void*));
right_value167 = (void*)0;
    # 450 "13op.c"
    __result103__ = __result_obj__ = ((char*)(right_value167=__builtin_string("sMultNode")));
    right_value167 = come_decrement_ref_count2(right_value167, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result103__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_91;
_Bool _if_conditional180;
_Bool __result104__;
void* right_value168;
struct CVALUE* left_value_92;
struct sNode* right_node_93;
_Bool _if_conditional181;
_Bool __result105__;
void* right_value169;
struct CVALUE* right_value_94;
struct sType* type_95;
char* fun_name_96;
_Bool calling_fun_97;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value170;
struct CVALUE* come_value_98;
void* right_value171;
char* __dec_obj72;
void* right_value172;
struct sType* __dec_obj73;
_Bool __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_91, 0, sizeof(struct sNode*));
right_value168 = (void*)0;
memset(&left_value_92, 0, sizeof(struct CVALUE*));
memset(&right_node_93, 0, sizeof(struct sNode*));
right_value169 = (void*)0;
memset(&right_value_94, 0, sizeof(struct CVALUE*));
memset(&type_95, 0, sizeof(struct sType*));
memset(&fun_name_96, 0, sizeof(char*));
memset(&calling_fun_97, 0, sizeof(_Bool));
right_value170 = (void*)0;
memset(&come_value_98, 0, sizeof(struct CVALUE*));
right_value171 = (void*)0;
right_value172 = (void*)0;
    # 456 "13op.c"
    left_node_91=self->mLeft;
    # 462 "13op.c"
    # 458 "13op.c"
    if(_if_conditional180=!node_compile(left_node_91,info),    _if_conditional180) {
        # 459 "13op.c"
        __result104__ = (_Bool)0;
        return __result104__;
    }
    # 462 "13op.c"
    left_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value168=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value168, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 463 "13op.c"
    dec_stack_ptr(1,info);
    # 465 "13op.c"
    right_node_93=self->mRight;
    # 471 "13op.c"
    # 467 "13op.c"
    if(_if_conditional181=!node_compile(right_node_93,info),    _if_conditional181) {
        # 468 "13op.c"
        __result105__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_92, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result105__;
    }
    # 471 "13op.c"
    right_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 472 "13op.c"
    dec_stack_ptr(1,info);
    # 474 "13op.c"
    type_95=(struct sType*)come_increment_ref_count(left_value_92->type);
    # 476 "13op.c"
    fun_name_96="operator_mult";
    # 477 "13op.c"
    # 485 "13op.c"
    # 478 "13op.c"
    if(self->mQuote) {
        # 479 "13op.c"
        calling_fun_97=(_Bool)0;
    }
    else {
        # 482 "13op.c"
        calling_fun_97=operator_overload_fun(type_95,fun_name_96,left_value_92,right_value_94,(_Bool)0,info);
    }
    # 498 "13op.c"
    # 485 "13op.c"
    if(_if_conditional183=!calling_fun_97,    _if_conditional183) {
        # 486 "13op.c"
        come_value_98=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 486, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 488 "13op.c"
        __dec_obj72=come_value_98->c_value;
        come_value_98->c_value=(char*)come_increment_ref_count(((char*)(right_value171=xsprintf("%s*%s",left_value_92->c_value,right_value_94->c_value))));
        __dec_obj72 = come_decrement_ref_count2(__dec_obj72, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value171 = come_decrement_ref_count2(right_value171, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 489 "13op.c"
        __dec_obj73=come_value_98->type;
        come_value_98->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value172=sType_clone(left_value_92->type))));
        come_call_finalizer2(sType_finalize,__dec_obj73, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 490 "13op.c"
        come_value_98->type->mHeap=(_Bool)0;
        # 491 "13op.c"
        come_value_98->var=((void*)0);
        # 493 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_98->c_value);
        # 495 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_98));
        come_call_finalizer2(CVALUE_finalize,come_value_98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 498 "13op.c"
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
    # 503 "13op.c"
    __result107__ = self->sline;
    return __result107__;
}

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value173;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
right_value173 = (void*)0;
    # 508 "13op.c"
    __result108__ = __result_obj__ = ((char*)(right_value173=__builtin_string(self->sname)));
    right_value173 = come_decrement_ref_count2(right_value173, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result108__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value174;
char* __dec_obj74;
void* right_value175;
struct sNode* __dec_obj75;
void* right_value176;
struct sNode* __dec_obj76;
struct sDivNode* __result109__;
memset(&__result_obj__, 0, sizeof(void*));
right_value174 = (void*)0;
right_value175 = (void*)0;
right_value176 = (void*)0;
    # 524 "13op.c"
    self->sline=info->sline;
    # 525 "13op.c"
    __dec_obj74=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value174=__builtin_string(info->sname))));
    __dec_obj74 = come_decrement_ref_count2(__dec_obj74, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value174 = come_decrement_ref_count2(right_value174, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 527 "13op.c"
    self->mQuote=quote;
    # 528 "13op.c"
    __dec_obj75=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value175=sNode_clone(left))));
    if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count2(__dec_obj75, ((struct sNode*)__dec_obj75)->finalize, ((struct sNode*)__dec_obj75)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value175) { right_value175 = come_decrement_ref_count2(right_value175, ((struct sNode*)right_value175)->finalize, ((struct sNode*)right_value175)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 529 "13op.c"
    __dec_obj76=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value176=sNode_clone(right))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count2(__dec_obj76, ((struct sNode*)__dec_obj76)->finalize, ((struct sNode*)__dec_obj76)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value176) { right_value176 = come_decrement_ref_count2(right_value176, ((struct sNode*)right_value176)->finalize, ((struct sNode*)right_value176)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 531 "13op.c"
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
    # 536 "13op.c"
    __result110__ = (_Bool)0;
    return __result110__;
}

char* sDivNode_kind(){
void* __result_obj__;
void* right_value177;
char* __result111__;
memset(&__result_obj__, 0, sizeof(void*));
right_value177 = (void*)0;
    # 541 "13op.c"
    __result111__ = __result_obj__ = ((char*)(right_value177=__builtin_string("sDivNode")));
    right_value177 = come_decrement_ref_count2(right_value177, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result111__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_99;
_Bool _if_conditional187;
_Bool __result112__;
void* right_value178;
struct CVALUE* left_value_100;
struct sNode* right_node_101;
_Bool _if_conditional188;
_Bool __result113__;
void* right_value179;
struct CVALUE* right_value_102;
struct sType* type_103;
char* fun_name_104;
_Bool calling_fun_105;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value180;
struct CVALUE* come_value_106;
void* right_value181;
char* __dec_obj77;
void* right_value182;
struct sType* __dec_obj78;
_Bool __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_99, 0, sizeof(struct sNode*));
right_value178 = (void*)0;
memset(&left_value_100, 0, sizeof(struct CVALUE*));
memset(&right_node_101, 0, sizeof(struct sNode*));
right_value179 = (void*)0;
memset(&right_value_102, 0, sizeof(struct CVALUE*));
memset(&type_103, 0, sizeof(struct sType*));
memset(&fun_name_104, 0, sizeof(char*));
memset(&calling_fun_105, 0, sizeof(_Bool));
right_value180 = (void*)0;
memset(&come_value_106, 0, sizeof(struct CVALUE*));
right_value181 = (void*)0;
right_value182 = (void*)0;
    # 547 "13op.c"
    left_node_99=self->mLeft;
    # 553 "13op.c"
    # 549 "13op.c"
    if(_if_conditional187=!node_compile(left_node_99,info),    _if_conditional187) {
        # 550 "13op.c"
        __result112__ = (_Bool)0;
        return __result112__;
    }
    # 553 "13op.c"
    left_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value178=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value178, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 554 "13op.c"
    dec_stack_ptr(1,info);
    # 556 "13op.c"
    right_node_101=self->mRight;
    # 562 "13op.c"
    # 558 "13op.c"
    if(_if_conditional188=!node_compile(right_node_101,info),    _if_conditional188) {
        # 559 "13op.c"
        __result113__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_100, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result113__;
    }
    # 562 "13op.c"
    right_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value179=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 563 "13op.c"
    dec_stack_ptr(1,info);
    # 565 "13op.c"
    type_103=(struct sType*)come_increment_ref_count(left_value_100->type);
    # 567 "13op.c"
    fun_name_104="operator_div";
    # 568 "13op.c"
    # 576 "13op.c"
    # 569 "13op.c"
    if(self->mQuote) {
        # 570 "13op.c"
        calling_fun_105=(_Bool)0;
    }
    else {
        # 573 "13op.c"
        calling_fun_105=operator_overload_fun(type_103,fun_name_104,left_value_100,right_value_102,(_Bool)0,info);
    }
    # 589 "13op.c"
    # 576 "13op.c"
    if(_if_conditional190=!calling_fun_105,    _if_conditional190) {
        # 577 "13op.c"
        come_value_106=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 577, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 579 "13op.c"
        __dec_obj77=come_value_106->c_value;
        come_value_106->c_value=(char*)come_increment_ref_count(((char*)(right_value181=xsprintf("%s/%s",left_value_100->c_value,right_value_102->c_value))));
        __dec_obj77 = come_decrement_ref_count2(__dec_obj77, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value181 = come_decrement_ref_count2(right_value181, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 580 "13op.c"
        __dec_obj78=come_value_106->type;
        come_value_106->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value182=sType_clone(left_value_100->type))));
        come_call_finalizer2(sType_finalize,__dec_obj78, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 581 "13op.c"
        come_value_106->type->mHeap=(_Bool)0;
        # 582 "13op.c"
        come_value_106->var=((void*)0);
        # 584 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_106->c_value);
        # 586 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_106));
        come_call_finalizer2(CVALUE_finalize,come_value_106, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 589 "13op.c"
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
    # 594 "13op.c"
    __result115__ = self->sline;
    return __result115__;
}

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value183;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
right_value183 = (void*)0;
    # 599 "13op.c"
    __result116__ = __result_obj__ = ((char*)(right_value183=__builtin_string(self->sname)));
    right_value183 = come_decrement_ref_count2(right_value183, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result116__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value184;
char* __dec_obj79;
void* right_value185;
struct sNode* __dec_obj80;
void* right_value186;
struct sNode* __dec_obj81;
struct sModNode* __result117__;
memset(&__result_obj__, 0, sizeof(void*));
right_value184 = (void*)0;
right_value185 = (void*)0;
right_value186 = (void*)0;
    # 615 "13op.c"
    self->sline=info->sline;
    # 616 "13op.c"
    __dec_obj79=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value184=__builtin_string(info->sname))));
    __dec_obj79 = come_decrement_ref_count2(__dec_obj79, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value184 = come_decrement_ref_count2(right_value184, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 618 "13op.c"
    self->mQuote=quote;
    # 619 "13op.c"
    __dec_obj80=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value185=sNode_clone(left))));
    if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count2(__dec_obj80, ((struct sNode*)__dec_obj80)->finalize, ((struct sNode*)__dec_obj80)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value185) { right_value185 = come_decrement_ref_count2(right_value185, ((struct sNode*)right_value185)->finalize, ((struct sNode*)right_value185)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 620 "13op.c"
    __dec_obj81=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=sNode_clone(right))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count2(__dec_obj81, ((struct sNode*)__dec_obj81)->finalize, ((struct sNode*)__dec_obj81)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value186) { right_value186 = come_decrement_ref_count2(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 622 "13op.c"
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
    # 627 "13op.c"
    __result118__ = (_Bool)0;
    return __result118__;
}

char* sModNode_kind(){
void* __result_obj__;
void* right_value187;
char* __result119__;
memset(&__result_obj__, 0, sizeof(void*));
right_value187 = (void*)0;
    # 632 "13op.c"
    __result119__ = __result_obj__ = ((char*)(right_value187=__builtin_string("sModNode")));
    right_value187 = come_decrement_ref_count2(right_value187, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result119__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_107;
_Bool _if_conditional194;
_Bool __result120__;
void* right_value188;
struct CVALUE* left_value_108;
struct sNode* right_node_109;
_Bool _if_conditional195;
_Bool __result121__;
void* right_value189;
struct CVALUE* right_value_110;
struct sType* type_111;
char* fun_name_112;
_Bool calling_fun_113;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value190;
struct CVALUE* come_value_114;
void* right_value191;
char* __dec_obj82;
void* right_value192;
struct sType* __dec_obj83;
_Bool __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_107, 0, sizeof(struct sNode*));
right_value188 = (void*)0;
memset(&left_value_108, 0, sizeof(struct CVALUE*));
memset(&right_node_109, 0, sizeof(struct sNode*));
right_value189 = (void*)0;
memset(&right_value_110, 0, sizeof(struct CVALUE*));
memset(&type_111, 0, sizeof(struct sType*));
memset(&fun_name_112, 0, sizeof(char*));
memset(&calling_fun_113, 0, sizeof(_Bool));
right_value190 = (void*)0;
memset(&come_value_114, 0, sizeof(struct CVALUE*));
right_value191 = (void*)0;
right_value192 = (void*)0;
    # 638 "13op.c"
    left_node_107=self->mLeft;
    # 644 "13op.c"
    # 640 "13op.c"
    if(_if_conditional194=!node_compile(left_node_107,info),    _if_conditional194) {
        # 641 "13op.c"
        __result120__ = (_Bool)0;
        return __result120__;
    }
    # 644 "13op.c"
    left_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value188=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value188, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 645 "13op.c"
    dec_stack_ptr(1,info);
    # 647 "13op.c"
    right_node_109=self->mRight;
    # 653 "13op.c"
    # 649 "13op.c"
    if(_if_conditional195=!node_compile(right_node_109,info),    _if_conditional195) {
        # 650 "13op.c"
        __result121__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result121__;
    }
    # 653 "13op.c"
    right_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 654 "13op.c"
    dec_stack_ptr(1,info);
    # 656 "13op.c"
    type_111=(struct sType*)come_increment_ref_count(left_value_108->type);
    # 658 "13op.c"
    fun_name_112="operator_mod";
    # 659 "13op.c"
    # 667 "13op.c"
    # 660 "13op.c"
    if(self->mQuote) {
        # 661 "13op.c"
        calling_fun_113=(_Bool)0;
    }
    else {
        # 664 "13op.c"
        calling_fun_113=operator_overload_fun(type_111,fun_name_112,left_value_108,right_value_110,(_Bool)0,info);
    }
    # 680 "13op.c"
    # 667 "13op.c"
    if(_if_conditional197=!calling_fun_113,    _if_conditional197) {
        # 668 "13op.c"
        come_value_114=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 668, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 670 "13op.c"
        __dec_obj82=come_value_114->c_value;
        come_value_114->c_value=(char*)come_increment_ref_count(((char*)(right_value191=xsprintf("%s%%%s",left_value_108->c_value,right_value_110->c_value))));
        __dec_obj82 = come_decrement_ref_count2(__dec_obj82, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value191 = come_decrement_ref_count2(right_value191, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 671 "13op.c"
        __dec_obj83=come_value_114->type;
        come_value_114->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value192=sType_clone(left_value_108->type))));
        come_call_finalizer2(sType_finalize,__dec_obj83, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 672 "13op.c"
        come_value_114->type->mHeap=(_Bool)0;
        # 673 "13op.c"
        come_value_114->var=((void*)0);
        # 675 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_114->c_value);
        # 677 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_114));
        come_call_finalizer2(CVALUE_finalize,come_value_114, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 680 "13op.c"
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
    # 685 "13op.c"
    __result123__ = self->sline;
    return __result123__;
}

char* sModNode_sname(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value193;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
right_value193 = (void*)0;
    # 690 "13op.c"
    __result124__ = __result_obj__ = ((char*)(right_value193=__builtin_string(self->sname)));
    right_value193 = come_decrement_ref_count2(right_value193, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result124__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value194;
char* __dec_obj84;
void* right_value195;
struct sNode* __dec_obj85;
void* right_value196;
struct sNode* __dec_obj86;
struct sLShiftNode* __result125__;
memset(&__result_obj__, 0, sizeof(void*));
right_value194 = (void*)0;
right_value195 = (void*)0;
right_value196 = (void*)0;
    # 706 "13op.c"
    self->sline=info->sline;
    # 707 "13op.c"
    __dec_obj84=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value194=__builtin_string(info->sname))));
    __dec_obj84 = come_decrement_ref_count2(__dec_obj84, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value194 = come_decrement_ref_count2(right_value194, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 708 "13op.c"
    self->mQuote=quote;
    # 710 "13op.c"
    __dec_obj85=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value195=sNode_clone(left))));
    if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count2(__dec_obj85, ((struct sNode*)__dec_obj85)->finalize, ((struct sNode*)__dec_obj85)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value195) { right_value195 = come_decrement_ref_count2(right_value195, ((struct sNode*)right_value195)->finalize, ((struct sNode*)right_value195)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 711 "13op.c"
    __dec_obj86=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=sNode_clone(right))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count2(__dec_obj86, ((struct sNode*)__dec_obj86)->finalize, ((struct sNode*)__dec_obj86)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value196) { right_value196 = come_decrement_ref_count2(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 713 "13op.c"
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
    # 718 "13op.c"
    __result126__ = (_Bool)0;
    return __result126__;
}

char* sLShiftNode_kind(){
void* __result_obj__;
void* right_value197;
char* __result127__;
memset(&__result_obj__, 0, sizeof(void*));
right_value197 = (void*)0;
    # 723 "13op.c"
    __result127__ = __result_obj__ = ((char*)(right_value197=__builtin_string("sLShiftNode")));
    right_value197 = come_decrement_ref_count2(right_value197, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result127__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_115;
_Bool _if_conditional201;
_Bool __result128__;
void* right_value198;
struct CVALUE* left_value_116;
struct sNode* right_node_117;
_Bool _if_conditional202;
_Bool __result129__;
void* right_value199;
struct CVALUE* right_value_118;
struct sType* type_119;
char* fun_name_120;
_Bool calling_fun_121;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value200;
struct CVALUE* come_value_122;
void* right_value201;
char* __dec_obj87;
void* right_value202;
struct sType* __dec_obj88;
_Bool __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_115, 0, sizeof(struct sNode*));
right_value198 = (void*)0;
memset(&left_value_116, 0, sizeof(struct CVALUE*));
memset(&right_node_117, 0, sizeof(struct sNode*));
right_value199 = (void*)0;
memset(&right_value_118, 0, sizeof(struct CVALUE*));
memset(&type_119, 0, sizeof(struct sType*));
memset(&fun_name_120, 0, sizeof(char*));
memset(&calling_fun_121, 0, sizeof(_Bool));
right_value200 = (void*)0;
memset(&come_value_122, 0, sizeof(struct CVALUE*));
right_value201 = (void*)0;
right_value202 = (void*)0;
    # 729 "13op.c"
    left_node_115=self->mLeft;
    # 735 "13op.c"
    # 731 "13op.c"
    if(_if_conditional201=!node_compile(left_node_115,info),    _if_conditional201) {
        # 732 "13op.c"
        __result128__ = (_Bool)0;
        return __result128__;
    }
    # 735 "13op.c"
    left_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value198=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value198, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 736 "13op.c"
    dec_stack_ptr(1,info);
    # 738 "13op.c"
    right_node_117=self->mRight;
    # 744 "13op.c"
    # 740 "13op.c"
    if(_if_conditional202=!node_compile(right_node_117,info),    _if_conditional202) {
        # 741 "13op.c"
        __result129__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_116, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result129__;
    }
    # 744 "13op.c"
    right_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 745 "13op.c"
    dec_stack_ptr(1,info);
    # 747 "13op.c"
    type_119=(struct sType*)come_increment_ref_count(left_value_116->type);
    # 749 "13op.c"
    fun_name_120="operator_lshift";
    # 750 "13op.c"
    # 758 "13op.c"
    # 751 "13op.c"
    if(self->mQuote) {
        # 752 "13op.c"
        calling_fun_121=(_Bool)0;
    }
    else {
        # 755 "13op.c"
        calling_fun_121=operator_overload_fun(type_119,fun_name_120,left_value_116,right_value_118,(_Bool)0,info);
    }
    # 771 "13op.c"
    # 758 "13op.c"
    if(_if_conditional204=!calling_fun_121,    _if_conditional204) {
        # 759 "13op.c"
        come_value_122=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 759, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 761 "13op.c"
        __dec_obj87=come_value_122->c_value;
        come_value_122->c_value=(char*)come_increment_ref_count(((char*)(right_value201=xsprintf("%s<<%s",left_value_116->c_value,right_value_118->c_value))));
        __dec_obj87 = come_decrement_ref_count2(__dec_obj87, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value201 = come_decrement_ref_count2(right_value201, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 762 "13op.c"
        __dec_obj88=come_value_122->type;
        come_value_122->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value202=sType_clone(left_value_116->type))));
        come_call_finalizer2(sType_finalize,__dec_obj88, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 763 "13op.c"
        come_value_122->type->mHeap=(_Bool)0;
        # 764 "13op.c"
        come_value_122->var=((void*)0);
        # 766 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_122->c_value);
        # 768 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_122));
        come_call_finalizer2(CVALUE_finalize,come_value_122, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 771 "13op.c"
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
    # 776 "13op.c"
    __result131__ = self->sline;
    return __result131__;
}

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value203;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
right_value203 = (void*)0;
    # 781 "13op.c"
    __result132__ = __result_obj__ = ((char*)(right_value203=__builtin_string(self->sname)));
    right_value203 = come_decrement_ref_count2(right_value203, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result132__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value204;
char* __dec_obj89;
void* right_value205;
struct sNode* __dec_obj90;
void* right_value206;
struct sNode* __dec_obj91;
struct sRShiftNode* __result133__;
memset(&__result_obj__, 0, sizeof(void*));
right_value204 = (void*)0;
right_value205 = (void*)0;
right_value206 = (void*)0;
    # 797 "13op.c"
    self->sline=info->sline;
    # 798 "13op.c"
    __dec_obj89=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value204=__builtin_string(info->sname))));
    __dec_obj89 = come_decrement_ref_count2(__dec_obj89, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value204 = come_decrement_ref_count2(right_value204, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 800 "13op.c"
    self->mQuote=quote;
    # 801 "13op.c"
    __dec_obj90=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value205=sNode_clone(left))));
    if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count2(__dec_obj90, ((struct sNode*)__dec_obj90)->finalize, ((struct sNode*)__dec_obj90)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value205) { right_value205 = come_decrement_ref_count2(right_value205, ((struct sNode*)right_value205)->finalize, ((struct sNode*)right_value205)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 802 "13op.c"
    __dec_obj91=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value206=sNode_clone(right))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count2(__dec_obj91, ((struct sNode*)__dec_obj91)->finalize, ((struct sNode*)__dec_obj91)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value206) { right_value206 = come_decrement_ref_count2(right_value206, ((struct sNode*)right_value206)->finalize, ((struct sNode*)right_value206)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 804 "13op.c"
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
    # 809 "13op.c"
    __result134__ = (_Bool)0;
    return __result134__;
}

char* sRShiftNode_kind(){
void* __result_obj__;
void* right_value207;
char* __result135__;
memset(&__result_obj__, 0, sizeof(void*));
right_value207 = (void*)0;
    # 814 "13op.c"
    __result135__ = __result_obj__ = ((char*)(right_value207=__builtin_string("sRShiftNode")));
    right_value207 = come_decrement_ref_count2(right_value207, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result135__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_123;
_Bool _if_conditional208;
_Bool __result136__;
void* right_value208;
struct CVALUE* left_value_124;
struct sNode* right_node_125;
_Bool _if_conditional209;
_Bool __result137__;
void* right_value209;
struct CVALUE* right_value_126;
struct sType* type_127;
char* fun_name_128;
_Bool calling_fun_129;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value210;
struct CVALUE* come_value_130;
void* right_value211;
char* __dec_obj92;
void* right_value212;
struct sType* __dec_obj93;
_Bool __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_123, 0, sizeof(struct sNode*));
right_value208 = (void*)0;
memset(&left_value_124, 0, sizeof(struct CVALUE*));
memset(&right_node_125, 0, sizeof(struct sNode*));
right_value209 = (void*)0;
memset(&right_value_126, 0, sizeof(struct CVALUE*));
memset(&type_127, 0, sizeof(struct sType*));
memset(&fun_name_128, 0, sizeof(char*));
memset(&calling_fun_129, 0, sizeof(_Bool));
right_value210 = (void*)0;
memset(&come_value_130, 0, sizeof(struct CVALUE*));
right_value211 = (void*)0;
right_value212 = (void*)0;
    # 820 "13op.c"
    left_node_123=self->mLeft;
    # 826 "13op.c"
    # 822 "13op.c"
    if(_if_conditional208=!node_compile(left_node_123,info),    _if_conditional208) {
        # 823 "13op.c"
        __result136__ = (_Bool)0;
        return __result136__;
    }
    # 826 "13op.c"
    left_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value208=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value208, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 827 "13op.c"
    dec_stack_ptr(1,info);
    # 829 "13op.c"
    right_node_125=self->mRight;
    # 835 "13op.c"
    # 831 "13op.c"
    if(_if_conditional209=!node_compile(right_node_125,info),    _if_conditional209) {
        # 832 "13op.c"
        __result137__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_124, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result137__;
    }
    # 835 "13op.c"
    right_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 836 "13op.c"
    dec_stack_ptr(1,info);
    # 838 "13op.c"
    type_127=(struct sType*)come_increment_ref_count(left_value_124->type);
    # 840 "13op.c"
    fun_name_128="operator_rshift";
    # 841 "13op.c"
    # 849 "13op.c"
    # 842 "13op.c"
    if(self->mQuote) {
        # 843 "13op.c"
        calling_fun_129=(_Bool)0;
    }
    else {
        # 846 "13op.c"
        calling_fun_129=operator_overload_fun(type_127,fun_name_128,left_value_124,right_value_126,(_Bool)0,info);
    }
    # 862 "13op.c"
    # 849 "13op.c"
    if(_if_conditional211=!calling_fun_129,    _if_conditional211) {
        # 850 "13op.c"
        come_value_130=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 850, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 852 "13op.c"
        __dec_obj92=come_value_130->c_value;
        come_value_130->c_value=(char*)come_increment_ref_count(((char*)(right_value211=xsprintf("%s>>%s",left_value_124->c_value,right_value_126->c_value))));
        __dec_obj92 = come_decrement_ref_count2(__dec_obj92, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value211 = come_decrement_ref_count2(right_value211, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 853 "13op.c"
        __dec_obj93=come_value_130->type;
        come_value_130->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value212=sType_clone(left_value_124->type))));
        come_call_finalizer2(sType_finalize,__dec_obj93, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 854 "13op.c"
        come_value_130->type->mHeap=(_Bool)0;
        # 855 "13op.c"
        come_value_130->var=((void*)0);
        # 857 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_130->c_value);
        # 859 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_130));
        come_call_finalizer2(CVALUE_finalize,come_value_130, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 862 "13op.c"
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
    # 867 "13op.c"
    __result139__ = self->sline;
    return __result139__;
}

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value213;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
right_value213 = (void*)0;
    # 872 "13op.c"
    __result140__ = __result_obj__ = ((char*)(right_value213=__builtin_string(self->sname)));
    right_value213 = come_decrement_ref_count2(right_value213, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result140__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value214;
char* __dec_obj94;
void* right_value215;
struct sNode* __dec_obj95;
void* right_value216;
struct sNode* __dec_obj96;
struct sGtEqNode* __result141__;
memset(&__result_obj__, 0, sizeof(void*));
right_value214 = (void*)0;
right_value215 = (void*)0;
right_value216 = (void*)0;
    # 888 "13op.c"
    self->sline=info->sline;
    # 889 "13op.c"
    __dec_obj94=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value214=__builtin_string(info->sname))));
    __dec_obj94 = come_decrement_ref_count2(__dec_obj94, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value214 = come_decrement_ref_count2(right_value214, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 891 "13op.c"
    self->mQuote=quote;
    # 892 "13op.c"
    __dec_obj95=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value215=sNode_clone(left))));
    if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count2(__dec_obj95, ((struct sNode*)__dec_obj95)->finalize, ((struct sNode*)__dec_obj95)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value215) { right_value215 = come_decrement_ref_count2(right_value215, ((struct sNode*)right_value215)->finalize, ((struct sNode*)right_value215)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 893 "13op.c"
    __dec_obj96=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=sNode_clone(right))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count2(__dec_obj96, ((struct sNode*)__dec_obj96)->finalize, ((struct sNode*)__dec_obj96)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value216) { right_value216 = come_decrement_ref_count2(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 895 "13op.c"
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
    # 900 "13op.c"
    __result142__ = (_Bool)0;
    return __result142__;
}

char* sGtEqNode_kind(){
void* __result_obj__;
void* right_value217;
char* __result143__;
memset(&__result_obj__, 0, sizeof(void*));
right_value217 = (void*)0;
    # 905 "13op.c"
    __result143__ = __result_obj__ = ((char*)(right_value217=__builtin_string("sGtEqNode")));
    right_value217 = come_decrement_ref_count2(right_value217, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result143__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_131;
_Bool _if_conditional215;
_Bool __result144__;
void* right_value218;
struct CVALUE* left_value_132;
struct sNode* right_node_133;
_Bool _if_conditional216;
_Bool __result145__;
void* right_value219;
struct CVALUE* right_value_134;
struct sType* type_135;
char* fun_name_136;
_Bool calling_fun_137;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value220;
struct CVALUE* come_value_138;
void* right_value221;
char* __dec_obj97;
void* right_value222;
struct sType* __dec_obj98;
_Bool __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_131, 0, sizeof(struct sNode*));
right_value218 = (void*)0;
memset(&left_value_132, 0, sizeof(struct CVALUE*));
memset(&right_node_133, 0, sizeof(struct sNode*));
right_value219 = (void*)0;
memset(&right_value_134, 0, sizeof(struct CVALUE*));
memset(&type_135, 0, sizeof(struct sType*));
memset(&fun_name_136, 0, sizeof(char*));
memset(&calling_fun_137, 0, sizeof(_Bool));
right_value220 = (void*)0;
memset(&come_value_138, 0, sizeof(struct CVALUE*));
right_value221 = (void*)0;
right_value222 = (void*)0;
    # 911 "13op.c"
    left_node_131=self->mLeft;
    # 917 "13op.c"
    # 913 "13op.c"
    if(_if_conditional215=!node_compile(left_node_131,info),    _if_conditional215) {
        # 914 "13op.c"
        __result144__ = (_Bool)0;
        return __result144__;
    }
    # 917 "13op.c"
    left_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value218=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value218, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 918 "13op.c"
    dec_stack_ptr(1,info);
    # 920 "13op.c"
    right_node_133=self->mRight;
    # 926 "13op.c"
    # 922 "13op.c"
    if(_if_conditional216=!node_compile(right_node_133,info),    _if_conditional216) {
        # 923 "13op.c"
        __result145__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_132, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result145__;
    }
    # 926 "13op.c"
    right_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value219=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 927 "13op.c"
    dec_stack_ptr(1,info);
    # 929 "13op.c"
    type_135=(struct sType*)come_increment_ref_count(left_value_132->type);
    # 931 "13op.c"
    fun_name_136="operator_gteq";
    # 932 "13op.c"
    # 940 "13op.c"
    # 933 "13op.c"
    if(self->mQuote) {
        # 934 "13op.c"
        calling_fun_137=(_Bool)0;
    }
    else {
        # 937 "13op.c"
        calling_fun_137=operator_overload_fun(type_135,fun_name_136,left_value_132,right_value_134,(_Bool)0,info);
    }
    # 953 "13op.c"
    # 940 "13op.c"
    if(_if_conditional218=!calling_fun_137,    _if_conditional218) {
        # 941 "13op.c"
        come_value_138=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 941, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 943 "13op.c"
        __dec_obj97=come_value_138->c_value;
        come_value_138->c_value=(char*)come_increment_ref_count(((char*)(right_value221=xsprintf("%s>=%s",left_value_132->c_value,right_value_134->c_value))));
        __dec_obj97 = come_decrement_ref_count2(__dec_obj97, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value221 = come_decrement_ref_count2(right_value221, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 944 "13op.c"
        __dec_obj98=come_value_138->type;
        come_value_138->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value222=sType_clone(left_value_132->type))));
        come_call_finalizer2(sType_finalize,__dec_obj98, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 945 "13op.c"
        come_value_138->type->mHeap=(_Bool)0;
        # 946 "13op.c"
        come_value_138->var=((void*)0);
        # 948 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_138->c_value);
        # 950 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_138));
        come_call_finalizer2(CVALUE_finalize,come_value_138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 953 "13op.c"
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
    # 958 "13op.c"
    __result147__ = self->sline;
    return __result147__;
}

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value223;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
right_value223 = (void*)0;
    # 963 "13op.c"
    __result148__ = __result_obj__ = ((char*)(right_value223=__builtin_string(self->sname)));
    right_value223 = come_decrement_ref_count2(right_value223, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result148__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value224;
char* __dec_obj99;
void* right_value225;
struct sNode* __dec_obj100;
void* right_value226;
struct sNode* __dec_obj101;
struct sLtEqNode* __result149__;
memset(&__result_obj__, 0, sizeof(void*));
right_value224 = (void*)0;
right_value225 = (void*)0;
right_value226 = (void*)0;
    # 979 "13op.c"
    self->sline=info->sline;
    # 980 "13op.c"
    __dec_obj99=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value224=__builtin_string(info->sname))));
    __dec_obj99 = come_decrement_ref_count2(__dec_obj99, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value224 = come_decrement_ref_count2(right_value224, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 982 "13op.c"
    self->mQuote=quote;
    # 983 "13op.c"
    __dec_obj100=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value225=sNode_clone(left))));
    if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count2(__dec_obj100, ((struct sNode*)__dec_obj100)->finalize, ((struct sNode*)__dec_obj100)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value225) { right_value225 = come_decrement_ref_count2(right_value225, ((struct sNode*)right_value225)->finalize, ((struct sNode*)right_value225)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 984 "13op.c"
    __dec_obj101=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNode_clone(right))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count2(__dec_obj101, ((struct sNode*)__dec_obj101)->finalize, ((struct sNode*)__dec_obj101)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value226) { right_value226 = come_decrement_ref_count2(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 986 "13op.c"
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
    # 991 "13op.c"
    __result150__ = (_Bool)0;
    return __result150__;
}

char* sLtEqNode_kind(){
void* __result_obj__;
void* right_value227;
char* __result151__;
memset(&__result_obj__, 0, sizeof(void*));
right_value227 = (void*)0;
    # 996 "13op.c"
    __result151__ = __result_obj__ = ((char*)(right_value227=__builtin_string("sLtEqNode")));
    right_value227 = come_decrement_ref_count2(right_value227, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result151__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_139;
_Bool _if_conditional222;
_Bool __result152__;
void* right_value228;
struct CVALUE* left_value_140;
struct sNode* right_node_141;
_Bool _if_conditional223;
_Bool __result153__;
void* right_value229;
struct CVALUE* right_value_142;
struct sType* type_143;
char* fun_name_144;
_Bool calling_fun_145;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value230;
struct CVALUE* come_value_146;
void* right_value231;
char* __dec_obj102;
void* right_value232;
struct sType* __dec_obj103;
_Bool __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_139, 0, sizeof(struct sNode*));
right_value228 = (void*)0;
memset(&left_value_140, 0, sizeof(struct CVALUE*));
memset(&right_node_141, 0, sizeof(struct sNode*));
right_value229 = (void*)0;
memset(&right_value_142, 0, sizeof(struct CVALUE*));
memset(&type_143, 0, sizeof(struct sType*));
memset(&fun_name_144, 0, sizeof(char*));
memset(&calling_fun_145, 0, sizeof(_Bool));
right_value230 = (void*)0;
memset(&come_value_146, 0, sizeof(struct CVALUE*));
right_value231 = (void*)0;
right_value232 = (void*)0;
    # 1002 "13op.c"
    left_node_139=self->mLeft;
    # 1008 "13op.c"
    # 1004 "13op.c"
    if(_if_conditional222=!node_compile(left_node_139,info),    _if_conditional222) {
        # 1005 "13op.c"
        __result152__ = (_Bool)0;
        return __result152__;
    }
    # 1008 "13op.c"
    left_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value228=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value228, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1009 "13op.c"
    dec_stack_ptr(1,info);
    # 1011 "13op.c"
    right_node_141=self->mRight;
    # 1017 "13op.c"
    # 1013 "13op.c"
    if(_if_conditional223=!node_compile(right_node_141,info),    _if_conditional223) {
        # 1014 "13op.c"
        __result153__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_140, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result153__;
    }
    # 1017 "13op.c"
    right_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value229=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value229, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1018 "13op.c"
    dec_stack_ptr(1,info);
    # 1020 "13op.c"
    type_143=(struct sType*)come_increment_ref_count(left_value_140->type);
    # 1022 "13op.c"
    fun_name_144="operator_lteq";
    # 1023 "13op.c"
    # 1031 "13op.c"
    # 1024 "13op.c"
    if(self->mQuote) {
        # 1025 "13op.c"
        calling_fun_145=(_Bool)0;
    }
    else {
        # 1028 "13op.c"
        calling_fun_145=operator_overload_fun(type_143,fun_name_144,left_value_140,right_value_142,(_Bool)0,info);
    }
    # 1044 "13op.c"
    # 1031 "13op.c"
    if(_if_conditional225=!calling_fun_145,    _if_conditional225) {
        # 1032 "13op.c"
        come_value_146=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1032, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1034 "13op.c"
        __dec_obj102=come_value_146->c_value;
        come_value_146->c_value=(char*)come_increment_ref_count(((char*)(right_value231=xsprintf("%s<=%s",left_value_140->c_value,right_value_142->c_value))));
        __dec_obj102 = come_decrement_ref_count2(__dec_obj102, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value231 = come_decrement_ref_count2(right_value231, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1035 "13op.c"
        __dec_obj103=come_value_146->type;
        come_value_146->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value232=sType_clone(left_value_140->type))));
        come_call_finalizer2(sType_finalize,__dec_obj103, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1036 "13op.c"
        come_value_146->type->mHeap=(_Bool)0;
        # 1037 "13op.c"
        come_value_146->var=((void*)0);
        # 1039 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_146->c_value);
        # 1041 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_146));
        come_call_finalizer2(CVALUE_finalize,come_value_146, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1044 "13op.c"
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
    # 1049 "13op.c"
    __result155__ = self->sline;
    return __result155__;
}

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value233;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
right_value233 = (void*)0;
    # 1054 "13op.c"
    __result156__ = __result_obj__ = ((char*)(right_value233=__builtin_string(self->sname)));
    right_value233 = come_decrement_ref_count2(right_value233, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result156__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value234;
char* __dec_obj104;
void* right_value235;
struct sNode* __dec_obj105;
void* right_value236;
struct sNode* __dec_obj106;
struct sLtNode* __result157__;
memset(&__result_obj__, 0, sizeof(void*));
right_value234 = (void*)0;
right_value235 = (void*)0;
right_value236 = (void*)0;
    # 1070 "13op.c"
    self->sline=info->sline;
    # 1071 "13op.c"
    __dec_obj104=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value234=__builtin_string(info->sname))));
    __dec_obj104 = come_decrement_ref_count2(__dec_obj104, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value234 = come_decrement_ref_count2(right_value234, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1073 "13op.c"
    self->mQuote=quote;
    # 1074 "13op.c"
    __dec_obj105=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value235=sNode_clone(left))));
    if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count2(__dec_obj105, ((struct sNode*)__dec_obj105)->finalize, ((struct sNode*)__dec_obj105)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value235) { right_value235 = come_decrement_ref_count2(right_value235, ((struct sNode*)right_value235)->finalize, ((struct sNode*)right_value235)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1075 "13op.c"
    __dec_obj106=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=sNode_clone(right))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count2(__dec_obj106, ((struct sNode*)__dec_obj106)->finalize, ((struct sNode*)__dec_obj106)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value236) { right_value236 = come_decrement_ref_count2(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1077 "13op.c"
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
    # 1082 "13op.c"
    __result158__ = (_Bool)0;
    return __result158__;
}

char* sLtNode_kind(){
void* __result_obj__;
void* right_value237;
char* __result159__;
memset(&__result_obj__, 0, sizeof(void*));
right_value237 = (void*)0;
    # 1087 "13op.c"
    __result159__ = __result_obj__ = ((char*)(right_value237=__builtin_string("sLtNode")));
    right_value237 = come_decrement_ref_count2(right_value237, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result159__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_147;
_Bool _if_conditional229;
_Bool __result160__;
void* right_value238;
struct CVALUE* left_value_148;
struct sNode* right_node_149;
_Bool _if_conditional230;
_Bool __result161__;
void* right_value239;
struct CVALUE* right_value_150;
struct sType* type_151;
char* fun_name_152;
_Bool calling_fun_153;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value240;
struct CVALUE* come_value_154;
void* right_value241;
char* __dec_obj107;
void* right_value242;
struct sType* __dec_obj108;
_Bool __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_147, 0, sizeof(struct sNode*));
right_value238 = (void*)0;
memset(&left_value_148, 0, sizeof(struct CVALUE*));
memset(&right_node_149, 0, sizeof(struct sNode*));
right_value239 = (void*)0;
memset(&right_value_150, 0, sizeof(struct CVALUE*));
memset(&type_151, 0, sizeof(struct sType*));
memset(&fun_name_152, 0, sizeof(char*));
memset(&calling_fun_153, 0, sizeof(_Bool));
right_value240 = (void*)0;
memset(&come_value_154, 0, sizeof(struct CVALUE*));
right_value241 = (void*)0;
right_value242 = (void*)0;
    # 1093 "13op.c"
    left_node_147=self->mLeft;
    # 1099 "13op.c"
    # 1095 "13op.c"
    if(_if_conditional229=!node_compile(left_node_147,info),    _if_conditional229) {
        # 1096 "13op.c"
        __result160__ = (_Bool)0;
        return __result160__;
    }
    # 1099 "13op.c"
    left_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value238=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value238, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1100 "13op.c"
    dec_stack_ptr(1,info);
    # 1102 "13op.c"
    right_node_149=self->mRight;
    # 1108 "13op.c"
    # 1104 "13op.c"
    if(_if_conditional230=!node_compile(right_node_149,info),    _if_conditional230) {
        # 1105 "13op.c"
        __result161__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result161__;
    }
    # 1108 "13op.c"
    right_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1109 "13op.c"
    dec_stack_ptr(1,info);
    # 1111 "13op.c"
    type_151=(struct sType*)come_increment_ref_count(left_value_148->type);
    # 1113 "13op.c"
    fun_name_152="operator_lt";
    # 1114 "13op.c"
    # 1122 "13op.c"
    # 1115 "13op.c"
    if(self->mQuote) {
        # 1116 "13op.c"
        calling_fun_153=(_Bool)0;
    }
    else {
        # 1119 "13op.c"
        calling_fun_153=operator_overload_fun(type_151,fun_name_152,left_value_148,right_value_150,(_Bool)0,info);
    }
    # 1135 "13op.c"
    # 1122 "13op.c"
    if(_if_conditional232=!calling_fun_153,    _if_conditional232) {
        # 1123 "13op.c"
        come_value_154=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1123, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1125 "13op.c"
        __dec_obj107=come_value_154->c_value;
        come_value_154->c_value=(char*)come_increment_ref_count(((char*)(right_value241=xsprintf("%s<%s",left_value_148->c_value,right_value_150->c_value))));
        __dec_obj107 = come_decrement_ref_count2(__dec_obj107, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value241 = come_decrement_ref_count2(right_value241, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1126 "13op.c"
        __dec_obj108=come_value_154->type;
        come_value_154->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value242=sType_clone(left_value_148->type))));
        come_call_finalizer2(sType_finalize,__dec_obj108, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1127 "13op.c"
        come_value_154->type->mHeap=(_Bool)0;
        # 1128 "13op.c"
        come_value_154->var=((void*)0);
        # 1130 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_154->c_value);
        # 1132 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_154));
        come_call_finalizer2(CVALUE_finalize,come_value_154, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1135 "13op.c"
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
    # 1140 "13op.c"
    __result163__ = self->sline;
    return __result163__;
}

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value243;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
right_value243 = (void*)0;
    # 1145 "13op.c"
    __result164__ = __result_obj__ = ((char*)(right_value243=__builtin_string(self->sname)));
    right_value243 = come_decrement_ref_count2(right_value243, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result164__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value244;
char* __dec_obj109;
void* right_value245;
struct sNode* __dec_obj110;
void* right_value246;
struct sNode* __dec_obj111;
struct sGtNode* __result165__;
memset(&__result_obj__, 0, sizeof(void*));
right_value244 = (void*)0;
right_value245 = (void*)0;
right_value246 = (void*)0;
    # 1161 "13op.c"
    self->sline=info->sline;
    # 1162 "13op.c"
    __dec_obj109=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value244=__builtin_string(info->sname))));
    __dec_obj109 = come_decrement_ref_count2(__dec_obj109, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value244 = come_decrement_ref_count2(right_value244, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1164 "13op.c"
    self->mQuote=quote;
    # 1165 "13op.c"
    __dec_obj110=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value245=sNode_clone(left))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count2(__dec_obj110, ((struct sNode*)__dec_obj110)->finalize, ((struct sNode*)__dec_obj110)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value245) { right_value245 = come_decrement_ref_count2(right_value245, ((struct sNode*)right_value245)->finalize, ((struct sNode*)right_value245)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1166 "13op.c"
    __dec_obj111=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=sNode_clone(right))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count2(__dec_obj111, ((struct sNode*)__dec_obj111)->finalize, ((struct sNode*)__dec_obj111)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value246) { right_value246 = come_decrement_ref_count2(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1168 "13op.c"
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
    # 1173 "13op.c"
    __result166__ = (_Bool)0;
    return __result166__;
}

char* sGtNode_kind(){
void* __result_obj__;
void* right_value247;
char* __result167__;
memset(&__result_obj__, 0, sizeof(void*));
right_value247 = (void*)0;
    # 1178 "13op.c"
    __result167__ = __result_obj__ = ((char*)(right_value247=__builtin_string("sGtNode")));
    right_value247 = come_decrement_ref_count2(right_value247, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result167__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_155;
_Bool _if_conditional236;
_Bool __result168__;
void* right_value248;
struct CVALUE* left_value_156;
struct sNode* right_node_157;
_Bool _if_conditional237;
_Bool __result169__;
void* right_value249;
struct CVALUE* right_value_158;
struct sType* type_159;
char* fun_name_160;
_Bool calling_fun_161;
_Bool _if_conditional238;
_Bool _if_conditional239;
void* right_value250;
struct CVALUE* come_value_162;
void* right_value251;
char* __dec_obj112;
void* right_value252;
struct sType* __dec_obj113;
_Bool __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_155, 0, sizeof(struct sNode*));
right_value248 = (void*)0;
memset(&left_value_156, 0, sizeof(struct CVALUE*));
memset(&right_node_157, 0, sizeof(struct sNode*));
right_value249 = (void*)0;
memset(&right_value_158, 0, sizeof(struct CVALUE*));
memset(&type_159, 0, sizeof(struct sType*));
memset(&fun_name_160, 0, sizeof(char*));
memset(&calling_fun_161, 0, sizeof(_Bool));
right_value250 = (void*)0;
memset(&come_value_162, 0, sizeof(struct CVALUE*));
right_value251 = (void*)0;
right_value252 = (void*)0;
    # 1184 "13op.c"
    left_node_155=self->mLeft;
    # 1190 "13op.c"
    # 1186 "13op.c"
    if(_if_conditional236=!node_compile(left_node_155,info),    _if_conditional236) {
        # 1187 "13op.c"
        __result168__ = (_Bool)0;
        return __result168__;
    }
    # 1190 "13op.c"
    left_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value248=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value248, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1191 "13op.c"
    dec_stack_ptr(1,info);
    # 1193 "13op.c"
    right_node_157=self->mRight;
    # 1199 "13op.c"
    # 1195 "13op.c"
    if(_if_conditional237=!node_compile(right_node_157,info),    _if_conditional237) {
        # 1196 "13op.c"
        __result169__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_156, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result169__;
    }
    # 1199 "13op.c"
    right_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1200 "13op.c"
    dec_stack_ptr(1,info);
    # 1202 "13op.c"
    type_159=(struct sType*)come_increment_ref_count(left_value_156->type);
    # 1204 "13op.c"
    fun_name_160="operator_gt";
    # 1205 "13op.c"
    # 1213 "13op.c"
    # 1206 "13op.c"
    if(self->mQuote) {
        # 1207 "13op.c"
        calling_fun_161=(_Bool)0;
    }
    else {
        # 1210 "13op.c"
        calling_fun_161=operator_overload_fun(type_159,fun_name_160,left_value_156,right_value_158,(_Bool)0,info);
    }
    # 1226 "13op.c"
    # 1213 "13op.c"
    if(_if_conditional239=!calling_fun_161,    _if_conditional239) {
        # 1214 "13op.c"
        come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1214, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1216 "13op.c"
        __dec_obj112=come_value_162->c_value;
        come_value_162->c_value=(char*)come_increment_ref_count(((char*)(right_value251=xsprintf("%s>%s",left_value_156->c_value,right_value_158->c_value))));
        __dec_obj112 = come_decrement_ref_count2(__dec_obj112, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value251 = come_decrement_ref_count2(right_value251, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1217 "13op.c"
        __dec_obj113=come_value_162->type;
        come_value_162->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value252=sType_clone(left_value_156->type))));
        come_call_finalizer2(sType_finalize,__dec_obj113, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1218 "13op.c"
        come_value_162->type->mHeap=(_Bool)0;
        # 1219 "13op.c"
        come_value_162->var=((void*)0);
        # 1221 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_162->c_value);
        # 1223 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_162));
        come_call_finalizer2(CVALUE_finalize,come_value_162, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1226 "13op.c"
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
    # 1231 "13op.c"
    __result171__ = self->sline;
    return __result171__;
}

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value253;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
right_value253 = (void*)0;
    # 1236 "13op.c"
    __result172__ = __result_obj__ = ((char*)(right_value253=__builtin_string(self->sname)));
    right_value253 = come_decrement_ref_count2(right_value253, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result172__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value254;
char* __dec_obj114;
void* right_value255;
struct sNode* __dec_obj115;
void* right_value256;
struct sNode* __dec_obj116;
struct sEqNode* __result173__;
memset(&__result_obj__, 0, sizeof(void*));
right_value254 = (void*)0;
right_value255 = (void*)0;
right_value256 = (void*)0;
    # 1252 "13op.c"
    self->sline=info->sline;
    # 1253 "13op.c"
    __dec_obj114=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value254=__builtin_string(info->sname))));
    __dec_obj114 = come_decrement_ref_count2(__dec_obj114, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value254 = come_decrement_ref_count2(right_value254, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1255 "13op.c"
    self->mQuote=quote;
    # 1256 "13op.c"
    __dec_obj115=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value255=sNode_clone(left))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count2(__dec_obj115, ((struct sNode*)__dec_obj115)->finalize, ((struct sNode*)__dec_obj115)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value255) { right_value255 = come_decrement_ref_count2(right_value255, ((struct sNode*)right_value255)->finalize, ((struct sNode*)right_value255)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1257 "13op.c"
    __dec_obj116=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=sNode_clone(right))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count2(__dec_obj116, ((struct sNode*)__dec_obj116)->finalize, ((struct sNode*)__dec_obj116)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value256) { right_value256 = come_decrement_ref_count2(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1259 "13op.c"
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
    # 1264 "13op.c"
    __result174__ = self->sline;
    return __result174__;
}

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value257;
char* __result175__;
memset(&__result_obj__, 0, sizeof(void*));
right_value257 = (void*)0;
    # 1269 "13op.c"
    __result175__ = __result_obj__ = ((char*)(right_value257=__builtin_string(self->sname)));
    right_value257 = come_decrement_ref_count2(right_value257, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result175__;
}

_Bool sEqNode_terminated(){
void* __result_obj__;
_Bool __result176__;
memset(&__result_obj__, 0, sizeof(void*));
    # 1274 "13op.c"
    __result176__ = (_Bool)0;
    return __result176__;
}

char* sEqNode_kind(){
void* __result_obj__;
void* right_value258;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
right_value258 = (void*)0;
    # 1279 "13op.c"
    __result177__ = __result_obj__ = ((char*)(right_value258=__builtin_string("sEqNode")));
    right_value258 = come_decrement_ref_count2(right_value258, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result177__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_163;
_Bool _if_conditional243;
_Bool __result178__;
void* right_value259;
struct CVALUE* left_value_164;
struct sNode* right_node_165;
_Bool _if_conditional244;
_Bool __result179__;
void* right_value260;
struct CVALUE* right_value_166;
void* right_value261;
struct CVALUE* come_value_167;
void* right_value262;
char* __dec_obj117;
void* right_value263;
struct sType* __dec_obj118;
_Bool __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_163, 0, sizeof(struct sNode*));
right_value259 = (void*)0;
memset(&left_value_164, 0, sizeof(struct CVALUE*));
memset(&right_node_165, 0, sizeof(struct sNode*));
right_value260 = (void*)0;
memset(&right_value_166, 0, sizeof(struct CVALUE*));
right_value261 = (void*)0;
memset(&come_value_167, 0, sizeof(struct CVALUE*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    # 1285 "13op.c"
    left_node_163=self->mLeft;
    # 1291 "13op.c"
    # 1287 "13op.c"
    if(_if_conditional243=!node_compile(left_node_163,info),    _if_conditional243) {
        # 1288 "13op.c"
        __result178__ = (_Bool)0;
        return __result178__;
    }
    # 1291 "13op.c"
    left_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1292 "13op.c"
    dec_stack_ptr(1,info);
    # 1294 "13op.c"
    right_node_165=self->mRight;
    # 1300 "13op.c"
    # 1296 "13op.c"
    if(_if_conditional244=!node_compile(right_node_165,info),    _if_conditional244) {
        # 1297 "13op.c"
        __result179__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_164, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result179__;
    }
    # 1300 "13op.c"
    right_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1301 "13op.c"
    dec_stack_ptr(1,info);
    # 1303 "13op.c"
    come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1303, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1305 "13op.c"
    __dec_obj117=come_value_167->c_value;
    come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value262=xsprintf("%s==%s",left_value_164->c_value,right_value_166->c_value))));
    __dec_obj117 = come_decrement_ref_count2(__dec_obj117, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value262 = come_decrement_ref_count2(right_value262, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1306 "13op.c"
    __dec_obj118=come_value_167->type;
    come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(left_value_164->type))));
    come_call_finalizer2(sType_finalize,__dec_obj118, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1307 "13op.c"
    come_value_167->type->mHeap=(_Bool)0;
    # 1308 "13op.c"
    come_value_167->var=((void*)0);
    # 1310 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_167->c_value);
    # 1312 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
    # 1314 "13op.c"
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
void* right_value264;
char* __dec_obj119;
void* right_value265;
struct sNode* __dec_obj120;
void* right_value266;
struct sNode* __dec_obj121;
struct sNotEqNode* __result181__;
memset(&__result_obj__, 0, sizeof(void*));
right_value264 = (void*)0;
right_value265 = (void*)0;
right_value266 = (void*)0;
    # 1330 "13op.c"
    self->sline=info->sline;
    # 1331 "13op.c"
    __dec_obj119=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value264=__builtin_string(info->sname))));
    __dec_obj119 = come_decrement_ref_count2(__dec_obj119, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value264 = come_decrement_ref_count2(right_value264, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1333 "13op.c"
    self->mQuote=quote;
    # 1334 "13op.c"
    __dec_obj120=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value265=sNode_clone(left))));
    if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count2(__dec_obj120, ((struct sNode*)__dec_obj120)->finalize, ((struct sNode*)__dec_obj120)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value265) { right_value265 = come_decrement_ref_count2(right_value265, ((struct sNode*)right_value265)->finalize, ((struct sNode*)right_value265)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1335 "13op.c"
    __dec_obj121=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=sNode_clone(right))));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count2(__dec_obj121, ((struct sNode*)__dec_obj121)->finalize, ((struct sNode*)__dec_obj121)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value266) { right_value266 = come_decrement_ref_count2(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1337 "13op.c"
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
    # 1342 "13op.c"
    __result182__ = (_Bool)0;
    return __result182__;
}

char* sNotEqNode_kind(){
void* __result_obj__;
void* right_value267;
char* __result183__;
memset(&__result_obj__, 0, sizeof(void*));
right_value267 = (void*)0;
    # 1347 "13op.c"
    __result183__ = __result_obj__ = ((char*)(right_value267=__builtin_string("sNotEqNode")));
    right_value267 = come_decrement_ref_count2(right_value267, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result183__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_168;
_Bool _if_conditional248;
_Bool __result184__;
void* right_value268;
struct CVALUE* left_value_169;
struct sNode* right_node_170;
_Bool _if_conditional249;
_Bool __result185__;
void* right_value269;
struct CVALUE* right_value_171;
void* right_value270;
struct CVALUE* come_value_172;
void* right_value271;
char* __dec_obj122;
void* right_value272;
struct sType* __dec_obj123;
_Bool __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_168, 0, sizeof(struct sNode*));
right_value268 = (void*)0;
memset(&left_value_169, 0, sizeof(struct CVALUE*));
memset(&right_node_170, 0, sizeof(struct sNode*));
right_value269 = (void*)0;
memset(&right_value_171, 0, sizeof(struct CVALUE*));
right_value270 = (void*)0;
memset(&come_value_172, 0, sizeof(struct CVALUE*));
right_value271 = (void*)0;
right_value272 = (void*)0;
    # 1353 "13op.c"
    left_node_168=self->mLeft;
    # 1359 "13op.c"
    # 1355 "13op.c"
    if(_if_conditional248=!node_compile(left_node_168,info),    _if_conditional248) {
        # 1356 "13op.c"
        __result184__ = (_Bool)0;
        return __result184__;
    }
    # 1359 "13op.c"
    left_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value268=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value268, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1360 "13op.c"
    dec_stack_ptr(1,info);
    # 1362 "13op.c"
    right_node_170=self->mRight;
    # 1368 "13op.c"
    # 1364 "13op.c"
    if(_if_conditional249=!node_compile(right_node_170,info),    _if_conditional249) {
        # 1365 "13op.c"
        __result185__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result185__;
    }
    # 1368 "13op.c"
    right_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1369 "13op.c"
    dec_stack_ptr(1,info);
    # 1371 "13op.c"
    come_value_172=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1371, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1373 "13op.c"
    __dec_obj122=come_value_172->c_value;
    come_value_172->c_value=(char*)come_increment_ref_count(((char*)(right_value271=xsprintf("%s!=%s",left_value_169->c_value,right_value_171->c_value))));
    __dec_obj122 = come_decrement_ref_count2(__dec_obj122, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value271 = come_decrement_ref_count2(right_value271, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1374 "13op.c"
    __dec_obj123=come_value_172->type;
    come_value_172->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value272=sType_clone(left_value_169->type))));
    come_call_finalizer2(sType_finalize,__dec_obj123, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1375 "13op.c"
    come_value_172->type->mHeap=(_Bool)0;
    # 1376 "13op.c"
    come_value_172->var=((void*)0);
    # 1378 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_172->c_value);
    # 1380 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_172));
    # 1382 "13op.c"
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
    # 1387 "13op.c"
    __result187__ = self->sline;
    return __result187__;
}

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value273;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
right_value273 = (void*)0;
    # 1392 "13op.c"
    __result188__ = __result_obj__ = ((char*)(right_value273=__builtin_string(self->sname)));
    right_value273 = come_decrement_ref_count2(right_value273, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result188__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value274;
char* __dec_obj124;
void* right_value275;
struct sNode* __dec_obj125;
void* right_value276;
struct sNode* __dec_obj126;
struct sEq2Node* __result189__;
memset(&__result_obj__, 0, sizeof(void*));
right_value274 = (void*)0;
right_value275 = (void*)0;
right_value276 = (void*)0;
    # 1408 "13op.c"
    self->sline=info->sline;
    # 1409 "13op.c"
    __dec_obj124=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value274=__builtin_string(info->sname))));
    __dec_obj124 = come_decrement_ref_count2(__dec_obj124, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value274 = come_decrement_ref_count2(right_value274, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1411 "13op.c"
    self->mQuote=quote;
    # 1412 "13op.c"
    __dec_obj125=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value275=sNode_clone(left))));
    if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count2(__dec_obj125, ((struct sNode*)__dec_obj125)->finalize, ((struct sNode*)__dec_obj125)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value275) { right_value275 = come_decrement_ref_count2(right_value275, ((struct sNode*)right_value275)->finalize, ((struct sNode*)right_value275)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1413 "13op.c"
    __dec_obj126=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=sNode_clone(right))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count2(__dec_obj126, ((struct sNode*)__dec_obj126)->finalize, ((struct sNode*)__dec_obj126)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value276) { right_value276 = come_decrement_ref_count2(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1415 "13op.c"
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
    # 1421 "13op.c"
    __result190__ = (_Bool)0;
    return __result190__;
}

char* sEq2Node_kind(){
void* __result_obj__;
void* right_value277;
char* __result191__;
memset(&__result_obj__, 0, sizeof(void*));
right_value277 = (void*)0;
    # 1426 "13op.c"
    __result191__ = __result_obj__ = ((char*)(right_value277=__builtin_string("sEq2Node")));
    right_value277 = come_decrement_ref_count2(right_value277, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result191__;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_173;
_Bool _if_conditional253;
_Bool __result192__;
void* right_value278;
struct CVALUE* left_value_174;
struct sNode* right_node_175;
_Bool _if_conditional254;
_Bool __result193__;
void* right_value279;
struct CVALUE* right_value_176;
struct sType* type_177;
char* fun_name_178;
_Bool calling_fun_179;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value280;
struct CVALUE* come_value_180;
void* right_value281;
char* __dec_obj127;
void* right_value282;
struct sType* __dec_obj128;
_Bool __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_173, 0, sizeof(struct sNode*));
right_value278 = (void*)0;
memset(&left_value_174, 0, sizeof(struct CVALUE*));
memset(&right_node_175, 0, sizeof(struct sNode*));
right_value279 = (void*)0;
memset(&right_value_176, 0, sizeof(struct CVALUE*));
memset(&type_177, 0, sizeof(struct sType*));
memset(&fun_name_178, 0, sizeof(char*));
memset(&calling_fun_179, 0, sizeof(_Bool));
right_value280 = (void*)0;
memset(&come_value_180, 0, sizeof(struct CVALUE*));
right_value281 = (void*)0;
right_value282 = (void*)0;
    # 1432 "13op.c"
    left_node_173=self->mLeft;
    # 1438 "13op.c"
    # 1434 "13op.c"
    if(_if_conditional253=!node_compile(left_node_173,info),    _if_conditional253) {
        # 1435 "13op.c"
        __result192__ = (_Bool)0;
        return __result192__;
    }
    # 1438 "13op.c"
    left_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value278=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value278, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1439 "13op.c"
    dec_stack_ptr(1,info);
    # 1441 "13op.c"
    right_node_175=self->mRight;
    # 1447 "13op.c"
    # 1443 "13op.c"
    if(_if_conditional254=!node_compile(right_node_175,info),    _if_conditional254) {
        # 1444 "13op.c"
        __result193__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_174, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result193__;
    }
    # 1447 "13op.c"
    right_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value279=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1448 "13op.c"
    dec_stack_ptr(1,info);
    # 1450 "13op.c"
    type_177=(struct sType*)come_increment_ref_count(left_value_174->type);
    # 1452 "13op.c"
    fun_name_178="operator_equals";
    # 1453 "13op.c"
    # 1461 "13op.c"
    # 1454 "13op.c"
    if(self->mQuote) {
        # 1455 "13op.c"
        calling_fun_179=(_Bool)0;
    }
    else {
        # 1458 "13op.c"
        calling_fun_179=operator_overload_fun(type_177,fun_name_178,left_value_174,right_value_176,(_Bool)0,info);
    }
    # 1474 "13op.c"
    # 1461 "13op.c"
    if(_if_conditional256=!calling_fun_179,    _if_conditional256) {
        # 1462 "13op.c"
        come_value_180=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1462, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1464 "13op.c"
        __dec_obj127=come_value_180->c_value;
        come_value_180->c_value=(char*)come_increment_ref_count(((char*)(right_value281=xsprintf("%s==%s",left_value_174->c_value,right_value_176->c_value))));
        __dec_obj127 = come_decrement_ref_count2(__dec_obj127, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value281 = come_decrement_ref_count2(right_value281, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1465 "13op.c"
        __dec_obj128=come_value_180->type;
        come_value_180->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value282=sType_clone(left_value_174->type))));
        come_call_finalizer2(sType_finalize,__dec_obj128, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1466 "13op.c"
        come_value_180->type->mHeap=(_Bool)0;
        # 1467 "13op.c"
        come_value_180->var=((void*)0);
        # 1469 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_180->c_value);
        # 1471 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_180));
        come_call_finalizer2(CVALUE_finalize,come_value_180, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1474 "13op.c"
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
    # 1479 "13op.c"
    __result195__ = self->sline;
    return __result195__;
}

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
void* right_value283;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
right_value283 = (void*)0;
    # 1484 "13op.c"
    __result196__ = __result_obj__ = ((char*)(right_value283=__builtin_string(self->sname)));
    right_value283 = come_decrement_ref_count2(right_value283, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result196__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value284;
char* __dec_obj129;
void* right_value285;
struct sNode* __dec_obj130;
void* right_value286;
struct sNode* __dec_obj131;
struct sNotEq2Node* __result197__;
memset(&__result_obj__, 0, sizeof(void*));
right_value284 = (void*)0;
right_value285 = (void*)0;
right_value286 = (void*)0;
    # 1500 "13op.c"
    self->sline=info->sline;
    # 1501 "13op.c"
    __dec_obj129=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value284=__builtin_string(info->sname))));
    __dec_obj129 = come_decrement_ref_count2(__dec_obj129, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value284 = come_decrement_ref_count2(right_value284, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1503 "13op.c"
    self->mQuote=quote;
    # 1504 "13op.c"
    __dec_obj130=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value285=sNode_clone(left))));
    if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count2(__dec_obj130, ((struct sNode*)__dec_obj130)->finalize, ((struct sNode*)__dec_obj130)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value285) { right_value285 = come_decrement_ref_count2(right_value285, ((struct sNode*)right_value285)->finalize, ((struct sNode*)right_value285)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1505 "13op.c"
    __dec_obj131=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(right))));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count2(__dec_obj131, ((struct sNode*)__dec_obj131)->finalize, ((struct sNode*)__dec_obj131)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value286) { right_value286 = come_decrement_ref_count2(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1507 "13op.c"
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
    # 1512 "13op.c"
    __result198__ = (_Bool)0;
    return __result198__;
}

char* sNotEq2Node_kind(){
void* __result_obj__;
void* right_value287;
char* __result199__;
memset(&__result_obj__, 0, sizeof(void*));
right_value287 = (void*)0;
    # 1517 "13op.c"
    __result199__ = __result_obj__ = ((char*)(right_value287=__builtin_string("sNotEq2Node")));
    right_value287 = come_decrement_ref_count2(right_value287, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result199__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_181;
_Bool _if_conditional260;
_Bool __result200__;
void* right_value288;
struct CVALUE* left_value_182;
struct sNode* right_node_183;
_Bool _if_conditional261;
_Bool __result201__;
void* right_value289;
struct CVALUE* right_value_184;
struct sType* type_185;
char* fun_name_186;
_Bool calling_fun_187;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value290;
struct CVALUE* come_value_188;
void* right_value291;
char* __dec_obj132;
void* right_value292;
struct sType* __dec_obj133;
_Bool __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_181, 0, sizeof(struct sNode*));
right_value288 = (void*)0;
memset(&left_value_182, 0, sizeof(struct CVALUE*));
memset(&right_node_183, 0, sizeof(struct sNode*));
right_value289 = (void*)0;
memset(&right_value_184, 0, sizeof(struct CVALUE*));
memset(&type_185, 0, sizeof(struct sType*));
memset(&fun_name_186, 0, sizeof(char*));
memset(&calling_fun_187, 0, sizeof(_Bool));
right_value290 = (void*)0;
memset(&come_value_188, 0, sizeof(struct CVALUE*));
right_value291 = (void*)0;
right_value292 = (void*)0;
    # 1523 "13op.c"
    left_node_181=self->mLeft;
    # 1529 "13op.c"
    # 1525 "13op.c"
    if(_if_conditional260=!node_compile(left_node_181,info),    _if_conditional260) {
        # 1526 "13op.c"
        __result200__ = (_Bool)0;
        return __result200__;
    }
    # 1529 "13op.c"
    left_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value288=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value288, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1530 "13op.c"
    dec_stack_ptr(1,info);
    # 1532 "13op.c"
    right_node_183=self->mRight;
    # 1538 "13op.c"
    # 1534 "13op.c"
    if(_if_conditional261=!node_compile(right_node_183,info),    _if_conditional261) {
        # 1535 "13op.c"
        __result201__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_182, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result201__;
    }
    # 1538 "13op.c"
    right_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1539 "13op.c"
    dec_stack_ptr(1,info);
    # 1541 "13op.c"
    type_185=(struct sType*)come_increment_ref_count(left_value_182->type);
    # 1543 "13op.c"
    fun_name_186="operator_not_equals";
    # 1544 "13op.c"
    # 1552 "13op.c"
    # 1545 "13op.c"
    if(self->mQuote) {
        # 1546 "13op.c"
        calling_fun_187=(_Bool)0;
    }
    else {
        # 1549 "13op.c"
        calling_fun_187=operator_overload_fun(type_185,fun_name_186,left_value_182,right_value_184,(_Bool)0,info);
    }
    # 1565 "13op.c"
    # 1552 "13op.c"
    if(_if_conditional263=!calling_fun_187,    _if_conditional263) {
        # 1553 "13op.c"
        come_value_188=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1553, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1555 "13op.c"
        __dec_obj132=come_value_188->c_value;
        come_value_188->c_value=(char*)come_increment_ref_count(((char*)(right_value291=xsprintf("%s!=%s",left_value_182->c_value,right_value_184->c_value))));
        __dec_obj132 = come_decrement_ref_count2(__dec_obj132, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value291 = come_decrement_ref_count2(right_value291, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1556 "13op.c"
        __dec_obj133=come_value_188->type;
        come_value_188->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value292=sType_clone(left_value_182->type))));
        come_call_finalizer2(sType_finalize,__dec_obj133, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1557 "13op.c"
        come_value_188->type->mHeap=(_Bool)0;
        # 1558 "13op.c"
        come_value_188->var=((void*)0);
        # 1560 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_188->c_value);
        # 1562 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_188));
        come_call_finalizer2(CVALUE_finalize,come_value_188, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1565 "13op.c"
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
    # 1570 "13op.c"
    __result203__ = self->sline;
    return __result203__;
}

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
void* right_value293;
char* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
right_value293 = (void*)0;
    # 1575 "13op.c"
    __result204__ = __result_obj__ = ((char*)(right_value293=__builtin_string(self->sname)));
    right_value293 = come_decrement_ref_count2(right_value293, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result204__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value294;
char* __dec_obj134;
void* right_value295;
struct sNode* __dec_obj135;
void* right_value296;
struct sNode* __dec_obj136;
struct sAndNode* __result205__;
memset(&__result_obj__, 0, sizeof(void*));
right_value294 = (void*)0;
right_value295 = (void*)0;
right_value296 = (void*)0;
    # 1591 "13op.c"
    self->sline=info->sline;
    # 1592 "13op.c"
    __dec_obj134=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value294=__builtin_string(info->sname))));
    __dec_obj134 = come_decrement_ref_count2(__dec_obj134, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value294 = come_decrement_ref_count2(right_value294, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1594 "13op.c"
    self->mQuote=quote;
    # 1595 "13op.c"
    __dec_obj135=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value295=sNode_clone(left))));
    if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count2(__dec_obj135, ((struct sNode*)__dec_obj135)->finalize, ((struct sNode*)__dec_obj135)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value295) { right_value295 = come_decrement_ref_count2(right_value295, ((struct sNode*)right_value295)->finalize, ((struct sNode*)right_value295)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1596 "13op.c"
    __dec_obj136=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=sNode_clone(right))));
    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count2(__dec_obj136, ((struct sNode*)__dec_obj136)->finalize, ((struct sNode*)__dec_obj136)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value296) { right_value296 = come_decrement_ref_count2(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1598 "13op.c"
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
    # 1603 "13op.c"
    __result206__ = (_Bool)0;
    return __result206__;
}

char* sAndNode_kind(){
void* __result_obj__;
void* right_value297;
char* __result207__;
memset(&__result_obj__, 0, sizeof(void*));
right_value297 = (void*)0;
    # 1608 "13op.c"
    __result207__ = __result_obj__ = ((char*)(right_value297=__builtin_string("sAndNode")));
    right_value297 = come_decrement_ref_count2(right_value297, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result207__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_189;
_Bool _if_conditional267;
_Bool __result208__;
void* right_value298;
struct CVALUE* left_value_190;
struct sNode* right_node_191;
_Bool _if_conditional268;
_Bool __result209__;
void* right_value299;
struct CVALUE* right_value_192;
struct sType* type_193;
char* fun_name_194;
_Bool calling_fun_195;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value300;
struct CVALUE* come_value_196;
void* right_value301;
char* __dec_obj137;
void* right_value302;
struct sType* __dec_obj138;
_Bool __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_189, 0, sizeof(struct sNode*));
right_value298 = (void*)0;
memset(&left_value_190, 0, sizeof(struct CVALUE*));
memset(&right_node_191, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
memset(&right_value_192, 0, sizeof(struct CVALUE*));
memset(&type_193, 0, sizeof(struct sType*));
memset(&fun_name_194, 0, sizeof(char*));
memset(&calling_fun_195, 0, sizeof(_Bool));
right_value300 = (void*)0;
memset(&come_value_196, 0, sizeof(struct CVALUE*));
right_value301 = (void*)0;
right_value302 = (void*)0;
    # 1614 "13op.c"
    left_node_189=self->mLeft;
    # 1620 "13op.c"
    # 1616 "13op.c"
    if(_if_conditional267=!node_compile(left_node_189,info),    _if_conditional267) {
        # 1617 "13op.c"
        __result208__ = (_Bool)0;
        return __result208__;
    }
    # 1620 "13op.c"
    left_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value298=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value298, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1621 "13op.c"
    dec_stack_ptr(1,info);
    # 1623 "13op.c"
    right_node_191=self->mRight;
    # 1629 "13op.c"
    # 1625 "13op.c"
    if(_if_conditional268=!node_compile(right_node_191,info),    _if_conditional268) {
        # 1626 "13op.c"
        __result209__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_190, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result209__;
    }
    # 1629 "13op.c"
    right_value_192=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value299=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1630 "13op.c"
    dec_stack_ptr(1,info);
    # 1632 "13op.c"
    type_193=(struct sType*)come_increment_ref_count(left_value_190->type);
    # 1634 "13op.c"
    fun_name_194="operator_and";
    # 1635 "13op.c"
    # 1644 "13op.c"
    # 1636 "13op.c"
    if(self->mQuote) {
        # 1637 "13op.c"
        calling_fun_195=(_Bool)0;
    }
    else {
        # 1640 "13op.c"
        calling_fun_195=operator_overload_fun(type_193,fun_name_194,left_value_190,right_value_192,(_Bool)0,info);
    }
    # 1657 "13op.c"
    # 1644 "13op.c"
    if(_if_conditional270=!calling_fun_195,    _if_conditional270) {
        # 1645 "13op.c"
        come_value_196=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1645, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1647 "13op.c"
        __dec_obj137=come_value_196->c_value;
        come_value_196->c_value=(char*)come_increment_ref_count(((char*)(right_value301=xsprintf("%s&%s",left_value_190->c_value,right_value_192->c_value))));
        __dec_obj137 = come_decrement_ref_count2(__dec_obj137, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value301 = come_decrement_ref_count2(right_value301, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1648 "13op.c"
        __dec_obj138=come_value_196->type;
        come_value_196->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value302=sType_clone(left_value_190->type))));
        come_call_finalizer2(sType_finalize,__dec_obj138, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1649 "13op.c"
        come_value_196->type->mHeap=(_Bool)0;
        # 1650 "13op.c"
        come_value_196->var=((void*)0);
        # 1652 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_196->c_value);
        # 1654 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_196));
        come_call_finalizer2(CVALUE_finalize,come_value_196, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1657 "13op.c"
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
    # 1662 "13op.c"
    __result211__ = self->sline;
    return __result211__;
}

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value303;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
right_value303 = (void*)0;
    # 1667 "13op.c"
    __result212__ = __result_obj__ = ((char*)(right_value303=__builtin_string(self->sname)));
    right_value303 = come_decrement_ref_count2(right_value303, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result212__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value304;
char* __dec_obj139;
void* right_value305;
struct sNode* __dec_obj140;
void* right_value306;
struct sNode* __dec_obj141;
struct sXOrNode* __result213__;
memset(&__result_obj__, 0, sizeof(void*));
right_value304 = (void*)0;
right_value305 = (void*)0;
right_value306 = (void*)0;
    # 1683 "13op.c"
    self->sline=info->sline;
    # 1684 "13op.c"
    __dec_obj139=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value304=__builtin_string(info->sname))));
    __dec_obj139 = come_decrement_ref_count2(__dec_obj139, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value304 = come_decrement_ref_count2(right_value304, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1686 "13op.c"
    self->mQuote=quote;
    # 1687 "13op.c"
    __dec_obj140=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value305=sNode_clone(left))));
    if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count2(__dec_obj140, ((struct sNode*)__dec_obj140)->finalize, ((struct sNode*)__dec_obj140)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value305) { right_value305 = come_decrement_ref_count2(right_value305, ((struct sNode*)right_value305)->finalize, ((struct sNode*)right_value305)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1688 "13op.c"
    __dec_obj141=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=sNode_clone(right))));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count2(__dec_obj141, ((struct sNode*)__dec_obj141)->finalize, ((struct sNode*)__dec_obj141)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value306) { right_value306 = come_decrement_ref_count2(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1690 "13op.c"
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
    # 1695 "13op.c"
    __result214__ = (_Bool)0;
    return __result214__;
}

char* sXOrNode_kind(){
void* __result_obj__;
void* right_value307;
char* __result215__;
memset(&__result_obj__, 0, sizeof(void*));
right_value307 = (void*)0;
    # 1700 "13op.c"
    __result215__ = __result_obj__ = ((char*)(right_value307=__builtin_string("sXOrNode")));
    right_value307 = come_decrement_ref_count2(right_value307, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result215__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_197;
_Bool _if_conditional274;
_Bool __result216__;
void* right_value308;
struct CVALUE* left_value_198;
struct sNode* right_node_199;
_Bool _if_conditional275;
_Bool __result217__;
void* right_value309;
struct CVALUE* right_value_200;
struct sType* type_201;
char* fun_name_202;
_Bool calling_fun_203;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value310;
struct CVALUE* come_value_204;
void* right_value311;
char* __dec_obj142;
void* right_value312;
struct sType* __dec_obj143;
_Bool __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_197, 0, sizeof(struct sNode*));
right_value308 = (void*)0;
memset(&left_value_198, 0, sizeof(struct CVALUE*));
memset(&right_node_199, 0, sizeof(struct sNode*));
right_value309 = (void*)0;
memset(&right_value_200, 0, sizeof(struct CVALUE*));
memset(&type_201, 0, sizeof(struct sType*));
memset(&fun_name_202, 0, sizeof(char*));
memset(&calling_fun_203, 0, sizeof(_Bool));
right_value310 = (void*)0;
memset(&come_value_204, 0, sizeof(struct CVALUE*));
right_value311 = (void*)0;
right_value312 = (void*)0;
    # 1706 "13op.c"
    left_node_197=self->mLeft;
    # 1712 "13op.c"
    # 1708 "13op.c"
    if(_if_conditional274=!node_compile(left_node_197,info),    _if_conditional274) {
        # 1709 "13op.c"
        __result216__ = (_Bool)0;
        return __result216__;
    }
    # 1712 "13op.c"
    left_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value308=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value308, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1713 "13op.c"
    dec_stack_ptr(1,info);
    # 1715 "13op.c"
    right_node_199=self->mRight;
    # 1721 "13op.c"
    # 1717 "13op.c"
    if(_if_conditional275=!node_compile(right_node_199,info),    _if_conditional275) {
        # 1718 "13op.c"
        __result217__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_198, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result217__;
    }
    # 1721 "13op.c"
    right_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value309=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1722 "13op.c"
    dec_stack_ptr(1,info);
    # 1724 "13op.c"
    type_201=(struct sType*)come_increment_ref_count(left_value_198->type);
    # 1726 "13op.c"
    fun_name_202="operator_xor";
    # 1727 "13op.c"
    # 1735 "13op.c"
    # 1728 "13op.c"
    if(self->mQuote) {
        # 1729 "13op.c"
        calling_fun_203=(_Bool)0;
    }
    else {
        # 1732 "13op.c"
        calling_fun_203=operator_overload_fun(type_201,fun_name_202,left_value_198,right_value_200,(_Bool)0,info);
    }
    # 1748 "13op.c"
    # 1735 "13op.c"
    if(_if_conditional277=!calling_fun_203,    _if_conditional277) {
        # 1736 "13op.c"
        come_value_204=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1736, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1738 "13op.c"
        __dec_obj142=come_value_204->c_value;
        come_value_204->c_value=(char*)come_increment_ref_count(((char*)(right_value311=xsprintf("%s^%s",left_value_198->c_value,right_value_200->c_value))));
        __dec_obj142 = come_decrement_ref_count2(__dec_obj142, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value311 = come_decrement_ref_count2(right_value311, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1739 "13op.c"
        __dec_obj143=come_value_204->type;
        come_value_204->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value312=sType_clone(left_value_198->type))));
        come_call_finalizer2(sType_finalize,__dec_obj143, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1740 "13op.c"
        come_value_204->type->mHeap=(_Bool)0;
        # 1741 "13op.c"
        come_value_204->var=((void*)0);
        # 1743 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_204->c_value);
        # 1745 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_204));
        come_call_finalizer2(CVALUE_finalize,come_value_204, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1748 "13op.c"
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
    # 1753 "13op.c"
    __result219__ = self->sline;
    return __result219__;
}

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value313;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
right_value313 = (void*)0;
    # 1758 "13op.c"
    __result220__ = __result_obj__ = ((char*)(right_value313=__builtin_string(self->sname)));
    right_value313 = come_decrement_ref_count2(right_value313, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result220__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value314;
char* __dec_obj144;
void* right_value315;
struct sNode* __dec_obj145;
void* right_value316;
struct sNode* __dec_obj146;
struct sOrNode* __result221__;
memset(&__result_obj__, 0, sizeof(void*));
right_value314 = (void*)0;
right_value315 = (void*)0;
right_value316 = (void*)0;
    # 1773 "13op.c"
    self->sline=info->sline;
    # 1774 "13op.c"
    __dec_obj144=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value314=__builtin_string(info->sname))));
    __dec_obj144 = come_decrement_ref_count2(__dec_obj144, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value314 = come_decrement_ref_count2(right_value314, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1776 "13op.c"
    self->mQuote=quote;
    # 1777 "13op.c"
    __dec_obj145=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value315=sNode_clone(left))));
    if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count2(__dec_obj145, ((struct sNode*)__dec_obj145)->finalize, ((struct sNode*)__dec_obj145)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value315) { right_value315 = come_decrement_ref_count2(right_value315, ((struct sNode*)right_value315)->finalize, ((struct sNode*)right_value315)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1778 "13op.c"
    __dec_obj146=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=sNode_clone(right))));
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count2(__dec_obj146, ((struct sNode*)__dec_obj146)->finalize, ((struct sNode*)__dec_obj146)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value316) { right_value316 = come_decrement_ref_count2(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1780 "13op.c"
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
    # 1785 "13op.c"
    __result222__ = (_Bool)0;
    return __result222__;
}

char* sOrNode_kind(){
void* __result_obj__;
void* right_value317;
char* __result223__;
memset(&__result_obj__, 0, sizeof(void*));
right_value317 = (void*)0;
    # 1790 "13op.c"
    __result223__ = __result_obj__ = ((char*)(right_value317=__builtin_string("sOrNode")));
    right_value317 = come_decrement_ref_count2(right_value317, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result223__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_205;
_Bool _if_conditional281;
_Bool __result224__;
void* right_value318;
struct CVALUE* left_value_206;
struct sNode* right_node_207;
_Bool _if_conditional282;
_Bool __result225__;
void* right_value319;
struct CVALUE* right_value_208;
struct sType* type_209;
char* fun_name_210;
_Bool calling_fun_211;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value320;
struct CVALUE* come_value_212;
void* right_value321;
char* __dec_obj147;
void* right_value322;
struct sType* __dec_obj148;
_Bool __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_205, 0, sizeof(struct sNode*));
right_value318 = (void*)0;
memset(&left_value_206, 0, sizeof(struct CVALUE*));
memset(&right_node_207, 0, sizeof(struct sNode*));
right_value319 = (void*)0;
memset(&right_value_208, 0, sizeof(struct CVALUE*));
memset(&type_209, 0, sizeof(struct sType*));
memset(&fun_name_210, 0, sizeof(char*));
memset(&calling_fun_211, 0, sizeof(_Bool));
right_value320 = (void*)0;
memset(&come_value_212, 0, sizeof(struct CVALUE*));
right_value321 = (void*)0;
right_value322 = (void*)0;
    # 1796 "13op.c"
    left_node_205=self->mLeft;
    # 1802 "13op.c"
    # 1798 "13op.c"
    if(_if_conditional281=!node_compile(left_node_205,info),    _if_conditional281) {
        # 1799 "13op.c"
        __result224__ = (_Bool)0;
        return __result224__;
    }
    # 1802 "13op.c"
    left_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value318=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value318, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1803 "13op.c"
    dec_stack_ptr(1,info);
    # 1805 "13op.c"
    right_node_207=self->mRight;
    # 1811 "13op.c"
    # 1807 "13op.c"
    if(_if_conditional282=!node_compile(right_node_207,info),    _if_conditional282) {
        # 1808 "13op.c"
        __result225__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_206, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result225__;
    }
    # 1811 "13op.c"
    right_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value319=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1812 "13op.c"
    dec_stack_ptr(1,info);
    # 1814 "13op.c"
    type_209=(struct sType*)come_increment_ref_count(left_value_206->type);
    # 1816 "13op.c"
    fun_name_210="operator_or";
    # 1817 "13op.c"
    # 1826 "13op.c"
    # 1818 "13op.c"
    if(self->mQuote) {
        # 1819 "13op.c"
        calling_fun_211=(_Bool)0;
    }
    else {
        # 1822 "13op.c"
        calling_fun_211=operator_overload_fun(type_209,fun_name_210,left_value_206,right_value_208,(_Bool)0,info);
    }
    # 1839 "13op.c"
    # 1826 "13op.c"
    if(_if_conditional284=!calling_fun_211,    _if_conditional284) {
        # 1827 "13op.c"
        come_value_212=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1827, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1829 "13op.c"
        __dec_obj147=come_value_212->c_value;
        come_value_212->c_value=(char*)come_increment_ref_count(((char*)(right_value321=xsprintf("%s|%s",left_value_206->c_value,right_value_208->c_value))));
        __dec_obj147 = come_decrement_ref_count2(__dec_obj147, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value321 = come_decrement_ref_count2(right_value321, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1830 "13op.c"
        __dec_obj148=come_value_212->type;
        come_value_212->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value322=sType_clone(left_value_206->type))));
        come_call_finalizer2(sType_finalize,__dec_obj148, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1831 "13op.c"
        come_value_212->type->mHeap=(_Bool)0;
        # 1832 "13op.c"
        come_value_212->var=((void*)0);
        # 1834 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_212->c_value);
        # 1836 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_212));
        come_call_finalizer2(CVALUE_finalize,come_value_212, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1839 "13op.c"
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
    # 1844 "13op.c"
    __result227__ = self->sline;
    return __result227__;
}

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value323;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
right_value323 = (void*)0;
    # 1849 "13op.c"
    __result228__ = __result_obj__ = ((char*)(right_value323=__builtin_string(self->sname)));
    right_value323 = come_decrement_ref_count2(right_value323, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result228__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value324;
char* __dec_obj149;
void* right_value325;
struct sNode* __dec_obj150;
void* right_value326;
struct sNode* __dec_obj151;
struct sAndAndNode* __result229__;
memset(&__result_obj__, 0, sizeof(void*));
right_value324 = (void*)0;
right_value325 = (void*)0;
right_value326 = (void*)0;
    # 1864 "13op.c"
    self->sline=info->sline;
    # 1865 "13op.c"
    __dec_obj149=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value324=__builtin_string(info->sname))));
    __dec_obj149 = come_decrement_ref_count2(__dec_obj149, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value324 = come_decrement_ref_count2(right_value324, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1867 "13op.c"
    self->mQuote=quote;
    # 1868 "13op.c"
    __dec_obj150=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value325=sNode_clone(left))));
    if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count2(__dec_obj150, ((struct sNode*)__dec_obj150)->finalize, ((struct sNode*)__dec_obj150)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value325) { right_value325 = come_decrement_ref_count2(right_value325, ((struct sNode*)right_value325)->finalize, ((struct sNode*)right_value325)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1869 "13op.c"
    __dec_obj151=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=sNode_clone(right))));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count2(__dec_obj151, ((struct sNode*)__dec_obj151)->finalize, ((struct sNode*)__dec_obj151)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value326) { right_value326 = come_decrement_ref_count2(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1871 "13op.c"
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
    # 1876 "13op.c"
    __result230__ = (_Bool)0;
    return __result230__;
}

char* sAndAndNode_kind(){
void* __result_obj__;
void* right_value327;
char* __result231__;
memset(&__result_obj__, 0, sizeof(void*));
right_value327 = (void*)0;
    # 1881 "13op.c"
    __result231__ = __result_obj__ = ((char*)(right_value327=__builtin_string("sAndAndNode")));
    right_value327 = come_decrement_ref_count2(right_value327, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result231__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_213;
_Bool _if_conditional288;
_Bool __result232__;
void* right_value328;
struct CVALUE* left_value_214;
struct sNode* right_node_215;
_Bool _if_conditional289;
_Bool __result233__;
void* right_value329;
struct CVALUE* right_value_216;
struct sType* type_217;
char* fun_name_218;
_Bool calling_fun_219;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value330;
struct CVALUE* come_value_220;
void* right_value331;
char* __dec_obj152;
void* right_value332;
struct sType* __dec_obj153;
_Bool __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_213, 0, sizeof(struct sNode*));
right_value328 = (void*)0;
memset(&left_value_214, 0, sizeof(struct CVALUE*));
memset(&right_node_215, 0, sizeof(struct sNode*));
right_value329 = (void*)0;
memset(&right_value_216, 0, sizeof(struct CVALUE*));
memset(&type_217, 0, sizeof(struct sType*));
memset(&fun_name_218, 0, sizeof(char*));
memset(&calling_fun_219, 0, sizeof(_Bool));
right_value330 = (void*)0;
memset(&come_value_220, 0, sizeof(struct CVALUE*));
right_value331 = (void*)0;
right_value332 = (void*)0;
    # 1887 "13op.c"
    left_node_213=self->mLeft;
    # 1893 "13op.c"
    # 1889 "13op.c"
    if(_if_conditional288=!node_compile(left_node_213,info),    _if_conditional288) {
        # 1890 "13op.c"
        __result232__ = (_Bool)0;
        return __result232__;
    }
    # 1893 "13op.c"
    left_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value328=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value328, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1894 "13op.c"
    dec_stack_ptr(1,info);
    # 1896 "13op.c"
    right_node_215=self->mRight;
    # 1902 "13op.c"
    # 1898 "13op.c"
    if(_if_conditional289=!node_compile(right_node_215,info),    _if_conditional289) {
        # 1899 "13op.c"
        __result233__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_214, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result233__;
    }
    # 1902 "13op.c"
    right_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value329=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value329, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1903 "13op.c"
    dec_stack_ptr(1,info);
    # 1905 "13op.c"
    type_217=(struct sType*)come_increment_ref_count(left_value_214->type);
    # 1907 "13op.c"
    fun_name_218="operator_andand";
    # 1908 "13op.c"
    # 1917 "13op.c"
    # 1909 "13op.c"
    if(self->mQuote) {
        # 1910 "13op.c"
        calling_fun_219=(_Bool)0;
    }
    else {
        # 1913 "13op.c"
        calling_fun_219=operator_overload_fun(type_217,fun_name_218,left_value_214,right_value_216,(_Bool)0,info);
    }
    # 1930 "13op.c"
    # 1917 "13op.c"
    if(_if_conditional291=!calling_fun_219,    _if_conditional291) {
        # 1918 "13op.c"
        come_value_220=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value330=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1918, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1920 "13op.c"
        __dec_obj152=come_value_220->c_value;
        come_value_220->c_value=(char*)come_increment_ref_count(((char*)(right_value331=xsprintf("%s&&%s",left_value_214->c_value,right_value_216->c_value))));
        __dec_obj152 = come_decrement_ref_count2(__dec_obj152, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value331 = come_decrement_ref_count2(right_value331, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 1921 "13op.c"
        __dec_obj153=come_value_220->type;
        come_value_220->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value332=sType_clone(left_value_214->type))));
        come_call_finalizer2(sType_finalize,__dec_obj153, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 1922 "13op.c"
        come_value_220->type->mHeap=(_Bool)0;
        # 1923 "13op.c"
        come_value_220->var=left_value_214->var;
        # 1925 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_220->c_value);
        # 1927 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_220));
        come_call_finalizer2(CVALUE_finalize,come_value_220, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 1930 "13op.c"
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
    # 1935 "13op.c"
    __result235__ = self->sline;
    return __result235__;
}

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value333;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
right_value333 = (void*)0;
    # 1940 "13op.c"
    __result236__ = __result_obj__ = ((char*)(right_value333=__builtin_string(self->sname)));
    right_value333 = come_decrement_ref_count2(right_value333, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result236__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
void* right_value334;
char* __dec_obj154;
void* right_value335;
struct sNode* __dec_obj155;
void* right_value336;
struct sNode* __dec_obj156;
struct sOrOrNode* __result237__;
memset(&__result_obj__, 0, sizeof(void*));
right_value334 = (void*)0;
right_value335 = (void*)0;
right_value336 = (void*)0;
    # 1955 "13op.c"
    self->sline=info->sline;
    # 1956 "13op.c"
    __dec_obj154=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value334=__builtin_string(info->sname))));
    __dec_obj154 = come_decrement_ref_count2(__dec_obj154, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value334 = come_decrement_ref_count2(right_value334, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 1958 "13op.c"
    self->mQuote=quote;
    # 1959 "13op.c"
    __dec_obj155=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value335=sNode_clone(left))));
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count2(__dec_obj155, ((struct sNode*)__dec_obj155)->finalize, ((struct sNode*)__dec_obj155)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value335) { right_value335 = come_decrement_ref_count2(right_value335, ((struct sNode*)right_value335)->finalize, ((struct sNode*)right_value335)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1960 "13op.c"
    __dec_obj156=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value336=sNode_clone(right))));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count2(__dec_obj156, ((struct sNode*)__dec_obj156)->finalize, ((struct sNode*)__dec_obj156)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value336) { right_value336 = come_decrement_ref_count2(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 1962 "13op.c"
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
    # 1967 "13op.c"
    __result238__ = (_Bool)0;
    return __result238__;
}

char* sOrOrNode_kind(){
void* __result_obj__;
void* right_value337;
char* __result239__;
memset(&__result_obj__, 0, sizeof(void*));
right_value337 = (void*)0;
    # 1972 "13op.c"
    __result239__ = __result_obj__ = ((char*)(right_value337=__builtin_string("sOrOrNode")));
    right_value337 = come_decrement_ref_count2(right_value337, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result239__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_221;
_Bool _if_conditional295;
_Bool __result240__;
void* right_value338;
struct CVALUE* left_value_222;
struct sNode* right_node_223;
_Bool _if_conditional296;
_Bool __result241__;
void* right_value339;
struct CVALUE* right_value_224;
struct sType* type_225;
char* fun_name_226;
_Bool calling_fun_227;
_Bool _if_conditional297;
_Bool _if_conditional298;
void* right_value340;
struct CVALUE* come_value_228;
void* right_value341;
char* __dec_obj157;
void* right_value342;
struct sType* __dec_obj158;
_Bool __result242__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_221, 0, sizeof(struct sNode*));
right_value338 = (void*)0;
memset(&left_value_222, 0, sizeof(struct CVALUE*));
memset(&right_node_223, 0, sizeof(struct sNode*));
right_value339 = (void*)0;
memset(&right_value_224, 0, sizeof(struct CVALUE*));
memset(&type_225, 0, sizeof(struct sType*));
memset(&fun_name_226, 0, sizeof(char*));
memset(&calling_fun_227, 0, sizeof(_Bool));
right_value340 = (void*)0;
memset(&come_value_228, 0, sizeof(struct CVALUE*));
right_value341 = (void*)0;
right_value342 = (void*)0;
    # 1978 "13op.c"
    left_node_221=self->mLeft;
    # 1984 "13op.c"
    # 1980 "13op.c"
    if(_if_conditional295=!node_compile(left_node_221,info),    _if_conditional295) {
        # 1981 "13op.c"
        __result240__ = (_Bool)0;
        return __result240__;
    }
    # 1984 "13op.c"
    left_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value338=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1985 "13op.c"
    dec_stack_ptr(1,info);
    # 1987 "13op.c"
    right_node_223=self->mRight;
    # 1993 "13op.c"
    # 1989 "13op.c"
    if(_if_conditional296=!node_compile(right_node_223,info),    _if_conditional296) {
        # 1990 "13op.c"
        __result241__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_222, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result241__;
    }
    # 1993 "13op.c"
    right_value_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value339=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 1994 "13op.c"
    dec_stack_ptr(1,info);
    # 1996 "13op.c"
    type_225=(struct sType*)come_increment_ref_count(left_value_222->type);
    # 1998 "13op.c"
    fun_name_226="operator_oror";
    # 1999 "13op.c"
    # 2007 "13op.c"
    # 2000 "13op.c"
    if(self->mQuote) {
        # 2001 "13op.c"
        calling_fun_227=(_Bool)0;
    }
    else {
        # 2004 "13op.c"
        calling_fun_227=operator_overload_fun(type_225,fun_name_226,left_value_222,right_value_224,(_Bool)0,info);
    }
    # 2020 "13op.c"
    # 2007 "13op.c"
    if(_if_conditional298=!calling_fun_227,    _if_conditional298) {
        # 2008 "13op.c"
        come_value_228=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value340=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2008, "CVALUE"))));
        come_call_finalizer2(CVALUE_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2010 "13op.c"
        __dec_obj157=come_value_228->c_value;
        come_value_228->c_value=(char*)come_increment_ref_count(((char*)(right_value341=xsprintf("%s||%s",left_value_222->c_value,right_value_224->c_value))));
        __dec_obj157 = come_decrement_ref_count2(__dec_obj157, (void*)0, (void*)0, 0,0,0, (void*)0);
        right_value341 = come_decrement_ref_count2(right_value341, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
        # 2011 "13op.c"
        __dec_obj158=come_value_228->type;
        come_value_228->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value342=sType_clone(left_value_222->type))));
        come_call_finalizer2(sType_finalize,__dec_obj158, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(sType_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        # 2012 "13op.c"
        come_value_228->type->mHeap=(_Bool)0;
        # 2013 "13op.c"
        come_value_228->var=left_value_222->var;
        # 2015 "13op.c"
        add_come_last_code(info,"%s;\n",come_value_228->c_value);
        # 2017 "13op.c"
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_228));
        come_call_finalizer2(CVALUE_finalize,come_value_228, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    }
    # 2020 "13op.c"
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
    # 2025 "13op.c"
    __result243__ = self->sline;
    return __result243__;
}

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value343;
char* __result244__;
memset(&__result_obj__, 0, sizeof(void*));
right_value343 = (void*)0;
    # 2030 "13op.c"
    __result244__ = __result_obj__ = ((char*)(right_value343=__builtin_string(self->sname)));
    right_value343 = come_decrement_ref_count2(right_value343, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result244__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
void* right_value344;
char* __dec_obj159;
void* right_value345;
struct sNode* __dec_obj160;
void* right_value346;
struct sNode* __dec_obj161;
struct sCommaNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
right_value344 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
    # 2045 "13op.c"
    self->sline=info->sline;
    # 2046 "13op.c"
    __dec_obj159=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value344=__builtin_string(info->sname))));
    __dec_obj159 = come_decrement_ref_count2(__dec_obj159, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value344 = come_decrement_ref_count2(right_value344, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2048 "13op.c"
    __dec_obj160=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=sNode_clone(left))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count2(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value345) { right_value345 = come_decrement_ref_count2(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2049 "13op.c"
    __dec_obj161=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=sNode_clone(right))));
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count2(__dec_obj161, ((struct sNode*)__dec_obj161)->finalize, ((struct sNode*)__dec_obj161)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value346) { right_value346 = come_decrement_ref_count2(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2051 "13op.c"
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
    # 2056 "13op.c"
    __result246__ = (_Bool)0;
    return __result246__;
}

char* sCommaNode_kind(){
void* __result_obj__;
void* right_value347;
char* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
right_value347 = (void*)0;
    # 2061 "13op.c"
    __result247__ = __result_obj__ = ((char*)(right_value347=__builtin_string("sCommaNode")));
    right_value347 = come_decrement_ref_count2(right_value347, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result247__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* left_node_229;
_Bool _if_conditional302;
_Bool __result248__;
void* right_value348;
struct CVALUE* left_value_230;
struct sNode* right_node_231;
_Bool _if_conditional303;
_Bool __result249__;
void* right_value349;
struct CVALUE* right_value_232;
void* right_value350;
struct CVALUE* come_value_233;
void* right_value351;
char* __dec_obj162;
void* right_value352;
struct sType* __dec_obj163;
_Bool __result250__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&left_node_229, 0, sizeof(struct sNode*));
right_value348 = (void*)0;
memset(&left_value_230, 0, sizeof(struct CVALUE*));
memset(&right_node_231, 0, sizeof(struct sNode*));
right_value349 = (void*)0;
memset(&right_value_232, 0, sizeof(struct CVALUE*));
right_value350 = (void*)0;
memset(&come_value_233, 0, sizeof(struct CVALUE*));
right_value351 = (void*)0;
right_value352 = (void*)0;
    # 2067 "13op.c"
    left_node_229=self->mLeft;
    # 2073 "13op.c"
    # 2069 "13op.c"
    if(_if_conditional302=!node_compile(left_node_229,info),    _if_conditional302) {
        # 2070 "13op.c"
        __result248__ = (_Bool)0;
        return __result248__;
    }
    # 2073 "13op.c"
    left_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value348=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2074 "13op.c"
    dec_stack_ptr(1,info);
    # 2076 "13op.c"
    right_node_231=self->mRight;
    # 2082 "13op.c"
    # 2078 "13op.c"
    if(_if_conditional303=!node_compile(right_node_231,info),    _if_conditional303) {
        # 2079 "13op.c"
        __result249__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,left_value_230, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result249__;
    }
    # 2082 "13op.c"
    right_value_232=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value349=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2083 "13op.c"
    dec_stack_ptr(1,info);
    # 2085 "13op.c"
    come_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value350=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2085, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2087 "13op.c"
    __dec_obj162=come_value_233->c_value;
    come_value_233->c_value=(char*)come_increment_ref_count(((char*)(right_value351=xsprintf("%s,%s",left_value_230->c_value,right_value_232->c_value))));
    __dec_obj162 = come_decrement_ref_count2(__dec_obj162, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value351 = come_decrement_ref_count2(right_value351, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2088 "13op.c"
    __dec_obj163=come_value_233->type;
    come_value_233->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value352=sType_clone(left_value_230->type))));
    come_call_finalizer2(sType_finalize,__dec_obj163, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value352, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2089 "13op.c"
    come_value_233->var=((void*)0);
    # 2091 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_233->c_value);
    # 2093 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_233));
    # 2095 "13op.c"
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
    # 2100 "13op.c"
    __result251__ = self->sline;
    return __result251__;
}

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value353;
char* __result252__;
memset(&__result_obj__, 0, sizeof(void*));
right_value353 = (void*)0;
    # 2105 "13op.c"
    __result252__ = __result_obj__ = ((char*)(right_value353=__builtin_string(self->sname)));
    right_value353 = come_decrement_ref_count2(right_value353, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result252__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
void* right_value354;
char* __dec_obj164;
void* right_value355;
struct sNode* __dec_obj165;
void* right_value356;
struct sNode* __dec_obj166;
void* right_value357;
struct sNode* __dec_obj167;
struct sConditionalNode* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
right_value354 = (void*)0;
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value357 = (void*)0;
    # 2121 "13op.c"
    self->sline=info->sline;
    # 2122 "13op.c"
    __dec_obj164=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value354=__builtin_string(info->sname))));
    __dec_obj164 = come_decrement_ref_count2(__dec_obj164, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value354 = come_decrement_ref_count2(right_value354, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2124 "13op.c"
    __dec_obj165=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value355=sNode_clone(value1))));
    if(__dec_obj165) { __dec_obj165 = come_decrement_ref_count2(__dec_obj165, ((struct sNode*)__dec_obj165)->finalize, ((struct sNode*)__dec_obj165)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value355) { right_value355 = come_decrement_ref_count2(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2125 "13op.c"
    __dec_obj166=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=sNode_clone(value2))));
    if(__dec_obj166) { __dec_obj166 = come_decrement_ref_count2(__dec_obj166, ((struct sNode*)__dec_obj166)->finalize, ((struct sNode*)__dec_obj166)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value356) { right_value356 = come_decrement_ref_count2(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2126 "13op.c"
    __dec_obj167=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=sNode_clone(value3))));
    if(__dec_obj167) { __dec_obj167 = come_decrement_ref_count2(__dec_obj167, ((struct sNode*)__dec_obj167)->finalize, ((struct sNode*)__dec_obj167)->_protocol_obj, 0,0,0, (void*)0); }
    if(right_value357) { right_value357 = come_decrement_ref_count2(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2128 "13op.c"
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
    # 2133 "13op.c"
    __result254__ = (_Bool)0;
    return __result254__;
}

char* sConditionalNode_kind(){
void* __result_obj__;
void* right_value358;
char* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
right_value358 = (void*)0;
    # 2138 "13op.c"
    __result255__ = __result_obj__ = ((char*)(right_value358=__builtin_string("sConditionalNode")));
    right_value358 = come_decrement_ref_count2(right_value358, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result255__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
struct sNode* value1_234;
_Bool _if_conditional308;
_Bool __result256__;
void* right_value359;
struct CVALUE* value1_value_235;
struct sNode* value2_236;
_Bool _if_conditional309;
_Bool __result257__;
void* right_value360;
struct CVALUE* value2_value_237;
struct sNode* value3_238;
_Bool _if_conditional310;
_Bool __result258__;
void* right_value361;
struct CVALUE* value3_value_239;
void* right_value362;
struct CVALUE* come_value_240;
void* right_value363;
char* __dec_obj168;
void* right_value364;
struct sType* __dec_obj169;
_Bool __result259__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&value1_234, 0, sizeof(struct sNode*));
right_value359 = (void*)0;
memset(&value1_value_235, 0, sizeof(struct CVALUE*));
memset(&value2_236, 0, sizeof(struct sNode*));
right_value360 = (void*)0;
memset(&value2_value_237, 0, sizeof(struct CVALUE*));
memset(&value3_238, 0, sizeof(struct sNode*));
right_value361 = (void*)0;
memset(&value3_value_239, 0, sizeof(struct CVALUE*));
right_value362 = (void*)0;
memset(&come_value_240, 0, sizeof(struct CVALUE*));
right_value363 = (void*)0;
right_value364 = (void*)0;
    # 2144 "13op.c"
    value1_234=self->mValue1;
    # 2150 "13op.c"
    # 2146 "13op.c"
    if(_if_conditional308=!node_compile(value1_234,info),    _if_conditional308) {
        # 2147 "13op.c"
        __result256__ = (_Bool)0;
        return __result256__;
    }
    # 2150 "13op.c"
    value1_value_235=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value359=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value359, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2151 "13op.c"
    dec_stack_ptr(1,info);
    # 2153 "13op.c"
    value2_236=self->mValue2;
    # 2159 "13op.c"
    # 2155 "13op.c"
    if(_if_conditional309=!node_compile(value2_236,info),    _if_conditional309) {
        # 2156 "13op.c"
        __result257__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,value1_value_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result257__;
    }
    # 2159 "13op.c"
    value2_value_237=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value360=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value360, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2160 "13op.c"
    dec_stack_ptr(1,info);
    # 2162 "13op.c"
    value3_238=self->mValue3;
    # 2168 "13op.c"
    # 2164 "13op.c"
    if(_if_conditional310=!node_compile(value3_238,info),    _if_conditional310) {
        # 2165 "13op.c"
        __result258__ = (_Bool)0;
        come_call_finalizer2(CVALUE_finalize,value1_value_235, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        come_call_finalizer2(CVALUE_finalize,value2_value_237, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
        return __result258__;
    }
    # 2168 "13op.c"
    value3_value_239=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value361=get_value_from_stack(-1,info))));
    come_call_finalizer2(CVALUE_finalize,right_value361, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2169 "13op.c"
    dec_stack_ptr(1,info);
    # 2171 "13op.c"
    come_value_240=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value362=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2171, "CVALUE"))));
    come_call_finalizer2(CVALUE_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2173 "13op.c"
    __dec_obj168=come_value_240->c_value;
    come_value_240->c_value=(char*)come_increment_ref_count(((char*)(right_value363=xsprintf("%s?%s:%s",value1_value_235->c_value,value2_value_237->c_value,value3_value_239->c_value))));
    __dec_obj168 = come_decrement_ref_count2(__dec_obj168, (void*)0, (void*)0, 0,0,0, (void*)0);
    right_value363 = come_decrement_ref_count2(right_value363, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    # 2174 "13op.c"
    __dec_obj169=come_value_240->type;
    come_value_240->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value364=sType_clone(value1_value_235->type))));
    come_call_finalizer2(sType_finalize,__dec_obj169, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
    come_call_finalizer2(sType_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
    # 2175 "13op.c"
    come_value_240->var=((void*)0);
    # 2177 "13op.c"
    add_come_last_code(info,"%s;\n",come_value_240->c_value);
    # 2179 "13op.c"
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_240));
    # 2181 "13op.c"
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
    # 2186 "13op.c"
    __result260__ = self->sline;
    return __result260__;
}

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
void* right_value365;
char* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
right_value365 = (void*)0;
    # 2191 "13op.c"
    __result261__ = __result_obj__ = ((char*)(right_value365=__builtin_string(self->sname)));
    right_value365 = come_decrement_ref_count2(right_value365, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
    return __result261__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
void* right_value366;
struct sNode* node_241;
_Bool _while_condtional10;
_Bool _if_conditional311;
void* right_value367;
struct sNode* right_242;
void* right_value368;
void* right_value369;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* right_value374;
struct sNode* __result264__;
_Bool _if_conditional321;
void* right_value375;
struct sNode* right_244;
void* right_value376;
void* right_value377;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* right_value382;
struct sNode* __result267__;
_Bool _if_conditional331;
void* right_value383;
struct sNode* right_246;
void* right_value384;
void* right_value385;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* right_value390;
struct sNode* __result270__;
_Bool _if_conditional341;
void* right_value391;
struct sNode* right_248;
void* right_value392;
void* right_value393;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* right_value398;
struct sNode* __result273__;
_Bool _if_conditional351;
void* right_value399;
struct sNode* right_250;
void* right_value400;
void* right_value401;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* right_value406;
struct sNode* __result276__;
_Bool _if_conditional361;
void* right_value407;
struct sNode* right_252;
void* right_value408;
void* right_value409;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* right_value414;
struct sNode* __result279__;
struct sNode* __result280__;
memset(&__result_obj__, 0, sizeof(void*));
right_value366 = (void*)0;
memset(&node_241, 0, sizeof(struct sNode*));
right_value367 = (void*)0;
memset(&right_242, 0, sizeof(struct sNode*));
right_value368 = (void*)0;
right_value369 = (void*)0;
right_value374 = (void*)0;
right_value375 = (void*)0;
memset(&right_244, 0, sizeof(struct sNode*));
right_value376 = (void*)0;
right_value377 = (void*)0;
right_value382 = (void*)0;
right_value383 = (void*)0;
memset(&right_246, 0, sizeof(struct sNode*));
right_value384 = (void*)0;
right_value385 = (void*)0;
right_value390 = (void*)0;
right_value391 = (void*)0;
memset(&right_248, 0, sizeof(struct sNode*));
right_value392 = (void*)0;
right_value393 = (void*)0;
right_value398 = (void*)0;
right_value399 = (void*)0;
memset(&right_250, 0, sizeof(struct sNode*));
right_value400 = (void*)0;
right_value401 = (void*)0;
right_value406 = (void*)0;
right_value407 = (void*)0;
memset(&right_252, 0, sizeof(struct sNode*));
right_value408 = (void*)0;
right_value409 = (void*)0;
right_value414 = (void*)0;
    # 2196 "13op.c"
    node_241=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=expression_node_v99(info))));
    if(right_value366) { right_value366 = come_decrement_ref_count2(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2200 "13op.c"
    parse_sharp_v5(info);
    # 2254 "13op.c"
    while(_while_condtional10=*info->p,    _while_condtional10) {
        # 2252 "13op.c"
        # 2201 "13op.c"
        if(_if_conditional311=!node_241->terminated(node_241->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional311) {
            # 2202 "13op.c"
            info->p++;
            # 2203 "13op.c"
            skip_spaces_and_lf(info);
            # 2205 "13op.c"
            right_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=mult_exp(info))));
            if(right_value367) { right_value367 = come_decrement_ref_count2(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2207 "13op.c"
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2207, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sMultNode*)(right_value369=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value368=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2207, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_242),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sMultNode_sline;
            _inf_value3->sname=(void*)sMultNode_sname;
            _inf_value3->terminated=(void*)sMultNode_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result264__ = __result_obj__ = ((struct sNode*)(right_value374=_inf_value3));
            if(right_242) { right_242 = come_decrement_ref_count2(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sMultNode_finalize,right_value368, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sMultNode_finalize,right_value369, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value374) { right_value374 = come_decrement_ref_count2(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result264__;
            if(right_242) { right_242 = come_decrement_ref_count2(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2252 "13op.c"
            # 2209 "13op.c"
            if(_if_conditional321=*info->p==47&&*(info->p+1)!=61,            _if_conditional321) {
                # 2210 "13op.c"
                info->p++;
                # 2211 "13op.c"
                skip_spaces_and_lf(info);
                # 2213 "13op.c"
                right_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=mult_exp(info))));
                if(right_value375) { right_value375 = come_decrement_ref_count2(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2215 "13op.c"
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2215, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sDivNode*)(right_value377=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value376=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2215, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_244),(_Bool)0,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDivNode_finalize;
                _inf_value4->clone=(void*)sDivNode_clone;
                _inf_value4->compile=(void*)sDivNode_compile;
                _inf_value4->sline=(void*)sDivNode_sline;
                _inf_value4->sname=(void*)sDivNode_sname;
                _inf_value4->terminated=(void*)sDivNode_terminated;
                _inf_value4->kind=(void*)sDivNode_kind;
                __result267__ = __result_obj__ = ((struct sNode*)(right_value382=_inf_value4));
                if(right_244) { right_244 = come_decrement_ref_count2(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sDivNode_finalize,right_value376, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sDivNode_finalize,right_value377, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value382) { right_value382 = come_decrement_ref_count2(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result267__;
                if(right_244) { right_244 = come_decrement_ref_count2(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2252 "13op.c"
                # 2217 "13op.c"
                if(_if_conditional331=*info->p==37&&*(info->p+1)!=61,                _if_conditional331) {
                    # 2218 "13op.c"
                    info->p++;
                    # 2219 "13op.c"
                    skip_spaces_and_lf(info);
                    # 2221 "13op.c"
                    right_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=expression_node_v99(info))));
                    if(right_value383) { right_value383 = come_decrement_ref_count2(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 2223 "13op.c"
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2223, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sModNode*)(right_value385=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value384=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2223, "sModNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_246),(_Bool)0,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sModNode_finalize;
                    _inf_value5->clone=(void*)sModNode_clone;
                    _inf_value5->compile=(void*)sModNode_compile;
                    _inf_value5->sline=(void*)sModNode_sline;
                    _inf_value5->sname=(void*)sModNode_sname;
                    _inf_value5->terminated=(void*)sModNode_terminated;
                    _inf_value5->kind=(void*)sModNode_kind;
                    __result270__ = __result_obj__ = ((struct sNode*)(right_value390=_inf_value5));
                    if(right_246) { right_246 = come_decrement_ref_count2(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sModNode_finalize,right_value384, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sModNode_finalize,right_value385, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value390) { right_value390 = come_decrement_ref_count2(right_value390, ((struct sNode*)right_value390)->finalize, ((struct sNode*)right_value390)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result270__;
                    if(right_246) { right_246 = come_decrement_ref_count2(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 2252 "13op.c"
                    # 2225 "13op.c"
                    if(_if_conditional341=!node_241->terminated(node_241->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional341) {
                        # 2226 "13op.c"
                        info->p+=2;
                        # 2227 "13op.c"
                        skip_spaces_and_lf(info);
                        # 2229 "13op.c"
                        right_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value391=mult_exp(info))));
                        if(right_value391) { right_value391 = come_decrement_ref_count2(right_value391, ((struct sNode*)right_value391)->finalize, ((struct sNode*)right_value391)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 2231 "13op.c"
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2231, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sMultNode*)(right_value393=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value392=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2231, "sMultNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_248),(_Bool)1,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sMultNode_finalize;
                        _inf_value6->clone=(void*)sMultNode_clone;
                        _inf_value6->compile=(void*)sMultNode_compile;
                        _inf_value6->sline=(void*)sMultNode_sline;
                        _inf_value6->sname=(void*)sMultNode_sname;
                        _inf_value6->terminated=(void*)sMultNode_terminated;
                        _inf_value6->kind=(void*)sMultNode_kind;
                        __result273__ = __result_obj__ = ((struct sNode*)(right_value398=_inf_value6));
                        if(right_248) { right_248 = come_decrement_ref_count2(right_248, ((struct sNode*)right_248)->finalize, ((struct sNode*)right_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sMultNode_finalize,right_value392, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sMultNode_finalize,right_value393, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value398) { right_value398 = come_decrement_ref_count2(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result273__;
                        if(right_248) { right_248 = come_decrement_ref_count2(right_248, ((struct sNode*)right_248)->finalize, ((struct sNode*)right_248)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 2252 "13op.c"
                        # 2233 "13op.c"
                        if(_if_conditional351=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional351) {
                            # 2234 "13op.c"
                            info->p+=2;
                            # 2235 "13op.c"
                            skip_spaces_and_lf(info);
                            # 2237 "13op.c"
                            right_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=mult_exp(info))));
                            if(right_value399) { right_value399 = come_decrement_ref_count2(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2239 "13op.c"
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2239, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sDivNode*)(right_value401=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value400=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2239, "sDivNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_250),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sDivNode_finalize;
                            _inf_value7->clone=(void*)sDivNode_clone;
                            _inf_value7->compile=(void*)sDivNode_compile;
                            _inf_value7->sline=(void*)sDivNode_sline;
                            _inf_value7->sname=(void*)sDivNode_sname;
                            _inf_value7->terminated=(void*)sDivNode_terminated;
                            _inf_value7->kind=(void*)sDivNode_kind;
                            __result276__ = __result_obj__ = ((struct sNode*)(right_value406=_inf_value7));
                            if(right_250) { right_250 = come_decrement_ref_count2(right_250, ((struct sNode*)right_250)->finalize, ((struct sNode*)right_250)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sDivNode_finalize,right_value400, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sDivNode_finalize,right_value401, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value406) { right_value406 = come_decrement_ref_count2(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result276__;
                            if(right_250) { right_250 = come_decrement_ref_count2(right_250, ((struct sNode*)right_250)->finalize, ((struct sNode*)right_250)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 2252 "13op.c"
                            # 2241 "13op.c"
                            if(_if_conditional361=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional361) {
                                # 2242 "13op.c"
                                info->p+=2;
                                # 2243 "13op.c"
                                skip_spaces_and_lf(info);
                                # 2245 "13op.c"
                                right_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=expression_node_v99(info))));
                                if(right_value407) { right_value407 = come_decrement_ref_count2(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 2247 "13op.c"
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2247, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sModNode*)(right_value409=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value408=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2247, "sModNode")))),(struct sNode*)come_increment_ref_count(node_241),(struct sNode*)come_increment_ref_count(right_252),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sModNode_finalize;
                                _inf_value8->clone=(void*)sModNode_clone;
                                _inf_value8->compile=(void*)sModNode_compile;
                                _inf_value8->sline=(void*)sModNode_sline;
                                _inf_value8->sname=(void*)sModNode_sname;
                                _inf_value8->terminated=(void*)sModNode_terminated;
                                _inf_value8->kind=(void*)sModNode_kind;
                                __result279__ = __result_obj__ = ((struct sNode*)(right_value414=_inf_value8));
                                if(right_252) { right_252 = come_decrement_ref_count2(right_252, ((struct sNode*)right_252)->finalize, ((struct sNode*)right_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sModNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sModNode_finalize,right_value409, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value414) { right_value414 = come_decrement_ref_count2(right_value414, ((struct sNode*)right_value414)->finalize, ((struct sNode*)right_value414)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result279__;
                                if(right_252) { right_252 = come_decrement_ref_count2(right_252, ((struct sNode*)right_252)->finalize, ((struct sNode*)right_252)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 2250 "13op.c"
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    # 2254 "13op.c"
    parse_sharp_v5(info);
    # 2256 "13op.c"
    __result280__ = __result_obj__ = node_241;
    if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result280__;
    if(node_241) { node_241 = come_decrement_ref_count2(node_241, ((struct sNode*)node_241)->finalize, ((struct sNode*)node_241)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional342;
_Bool _if_conditional343;
_Bool _if_conditional344;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sMultNode_finalize"
                            # 0 "sMultNode_finalize"
                            if(_if_conditional342=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional342) {
                                # 0 "sMultNode_finalize"
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 2 "sMultNode_finalize"
                            # 1 "sMultNode_finalize"
                            if(_if_conditional343=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional343) {
                                # 1 "sMultNode_finalize"
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 3 "sMultNode_finalize"
                            # 2 "sMultNode_finalize"
                            if(_if_conditional344=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional344) {
                                # 2 "sMultNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool _if_conditional345;
struct sMultNode* __result271__;
void* right_value394;
struct sMultNode* result_249;
_Bool _if_conditional346;
void* right_value395;
struct sNode* __dec_obj179;
_Bool _if_conditional347;
void* right_value396;
struct sNode* __dec_obj180;
_Bool _if_conditional348;
_Bool _if_conditional349;
_Bool _if_conditional350;
void* right_value397;
char* __dec_obj181;
struct sMultNode* __result272__;
memset(&__result_obj__, 0, sizeof(void*));
right_value394 = (void*)0;
memset(&result_249, 0, sizeof(struct sMultNode*));
right_value395 = (void*)0;
right_value396 = (void*)0;
right_value397 = (void*)0;
                            # 3 "sMultNode_clone"
                            # 2 "sMultNode_clone"
                            if(_if_conditional345=self==(void*)0,                            _if_conditional345) {
                                # 2 "sMultNode_clone"
                                __result271__ = __result_obj__ = (void*)0;
                                return __result271__;
                            }
                            # 3 "sMultNode_clone"
                            result_249=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value394=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "sMultNode"))));
                            come_call_finalizer2(sMultNode_finalize,right_value394, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "sMultNode_clone"
                            # 4 "sMultNode_clone"
                            if(_if_conditional346=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional346) {
                                # 4 "sMultNode_clone"
                                __dec_obj179=result_249->mLeft;
                                result_249->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=sNode_clone(self->mLeft))));
                                if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count2(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value395) { right_value395 = come_decrement_ref_count2(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 6 "sMultNode_clone"
                            # 5 "sMultNode_clone"
                            if(_if_conditional347=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional347) {
                                # 5 "sMultNode_clone"
                                __dec_obj180=result_249->mRight;
                                result_249->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value396=sNode_clone(self->mRight))));
                                if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count2(__dec_obj180, ((struct sNode*)__dec_obj180)->finalize, ((struct sNode*)__dec_obj180)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value396) { right_value396 = come_decrement_ref_count2(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 7 "sMultNode_clone"
                            # 6 "sMultNode_clone"
                            if(_if_conditional348=self!=((void*)0),                            _if_conditional348) {
                                # 6 "sMultNode_clone"
                                result_249->mQuote=self->mQuote;
                            }
                            # 8 "sMultNode_clone"
                            # 7 "sMultNode_clone"
                            if(_if_conditional349=self!=((void*)0),                            _if_conditional349) {
                                # 7 "sMultNode_clone"
                                result_249->sline=self->sline;
                            }
                            # 9 "sMultNode_clone"
                            # 8 "sMultNode_clone"
                            if(_if_conditional350=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional350) {
                                # 8 "sMultNode_clone"
                                __dec_obj181=result_249->sname;
                                result_249->sname=(char*)come_increment_ref_count(((char*)(right_value397=string_clone(self->sname))));
                                __dec_obj181 = come_decrement_ref_count2(__dec_obj181, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value397 = come_decrement_ref_count2(right_value397, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 9 "sMultNode_clone"
                            __result272__ = __result_obj__ = result_249;
                            come_call_finalizer2(sMultNode_finalize,result_249, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result272__;
                            come_call_finalizer2(sMultNode_finalize,result_249, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional352;
_Bool _if_conditional353;
_Bool _if_conditional354;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sDivNode_finalize"
                                # 0 "sDivNode_finalize"
                                if(_if_conditional352=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional352) {
                                    # 0 "sDivNode_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 2 "sDivNode_finalize"
                                # 1 "sDivNode_finalize"
                                if(_if_conditional353=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional353) {
                                    # 1 "sDivNode_finalize"
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 3 "sDivNode_finalize"
                                # 2 "sDivNode_finalize"
                                if(_if_conditional354=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional354) {
                                    # 2 "sDivNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool _if_conditional355;
struct sDivNode* __result274__;
void* right_value402;
struct sDivNode* result_251;
_Bool _if_conditional356;
void* right_value403;
struct sNode* __dec_obj182;
_Bool _if_conditional357;
void* right_value404;
struct sNode* __dec_obj183;
_Bool _if_conditional358;
_Bool _if_conditional359;
_Bool _if_conditional360;
void* right_value405;
char* __dec_obj184;
struct sDivNode* __result275__;
memset(&__result_obj__, 0, sizeof(void*));
right_value402 = (void*)0;
memset(&result_251, 0, sizeof(struct sDivNode*));
right_value403 = (void*)0;
right_value404 = (void*)0;
right_value405 = (void*)0;
                                # 3 "sDivNode_clone"
                                # 2 "sDivNode_clone"
                                if(_if_conditional355=self==(void*)0,                                _if_conditional355) {
                                    # 2 "sDivNode_clone"
                                    __result274__ = __result_obj__ = (void*)0;
                                    return __result274__;
                                }
                                # 3 "sDivNode_clone"
                                result_251=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value402=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "sDivNode"))));
                                come_call_finalizer2(sDivNode_finalize,right_value402, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sDivNode_clone"
                                # 4 "sDivNode_clone"
                                if(_if_conditional356=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional356) {
                                    # 4 "sDivNode_clone"
                                    __dec_obj182=result_251->mLeft;
                                    result_251->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=sNode_clone(self->mLeft))));
                                    if(__dec_obj182) { __dec_obj182 = come_decrement_ref_count2(__dec_obj182, ((struct sNode*)__dec_obj182)->finalize, ((struct sNode*)__dec_obj182)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value403) { right_value403 = come_decrement_ref_count2(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 6 "sDivNode_clone"
                                # 5 "sDivNode_clone"
                                if(_if_conditional357=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional357) {
                                    # 5 "sDivNode_clone"
                                    __dec_obj183=result_251->mRight;
                                    result_251->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value404=sNode_clone(self->mRight))));
                                    if(__dec_obj183) { __dec_obj183 = come_decrement_ref_count2(__dec_obj183, ((struct sNode*)__dec_obj183)->finalize, ((struct sNode*)__dec_obj183)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value404) { right_value404 = come_decrement_ref_count2(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 7 "sDivNode_clone"
                                # 6 "sDivNode_clone"
                                if(_if_conditional358=self!=((void*)0),                                _if_conditional358) {
                                    # 6 "sDivNode_clone"
                                    result_251->mQuote=self->mQuote;
                                }
                                # 8 "sDivNode_clone"
                                # 7 "sDivNode_clone"
                                if(_if_conditional359=self!=((void*)0),                                _if_conditional359) {
                                    # 7 "sDivNode_clone"
                                    result_251->sline=self->sline;
                                }
                                # 9 "sDivNode_clone"
                                # 8 "sDivNode_clone"
                                if(_if_conditional360=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional360) {
                                    # 8 "sDivNode_clone"
                                    __dec_obj184=result_251->sname;
                                    result_251->sname=(char*)come_increment_ref_count(((char*)(right_value405=string_clone(self->sname))));
                                    __dec_obj184 = come_decrement_ref_count2(__dec_obj184, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value405 = come_decrement_ref_count2(right_value405, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 9 "sDivNode_clone"
                                __result275__ = __result_obj__ = result_251;
                                come_call_finalizer2(sDivNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result275__;
                                come_call_finalizer2(sDivNode_finalize,result_251, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional362;
_Bool _if_conditional363;
_Bool _if_conditional364;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sModNode_finalize"
                                    # 0 "sModNode_finalize"
                                    if(_if_conditional362=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional362) {
                                        # 0 "sModNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 2 "sModNode_finalize"
                                    # 1 "sModNode_finalize"
                                    if(_if_conditional363=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional363) {
                                        # 1 "sModNode_finalize"
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 3 "sModNode_finalize"
                                    # 2 "sModNode_finalize"
                                    if(_if_conditional364=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional364) {
                                        # 2 "sModNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool _if_conditional365;
struct sModNode* __result277__;
void* right_value410;
struct sModNode* result_253;
_Bool _if_conditional366;
void* right_value411;
struct sNode* __dec_obj185;
_Bool _if_conditional367;
void* right_value412;
struct sNode* __dec_obj186;
_Bool _if_conditional368;
_Bool _if_conditional369;
_Bool _if_conditional370;
void* right_value413;
char* __dec_obj187;
struct sModNode* __result278__;
memset(&__result_obj__, 0, sizeof(void*));
right_value410 = (void*)0;
memset(&result_253, 0, sizeof(struct sModNode*));
right_value411 = (void*)0;
right_value412 = (void*)0;
right_value413 = (void*)0;
                                    # 3 "sModNode_clone"
                                    # 2 "sModNode_clone"
                                    if(_if_conditional365=self==(void*)0,                                    _if_conditional365) {
                                        # 2 "sModNode_clone"
                                        __result277__ = __result_obj__ = (void*)0;
                                        return __result277__;
                                    }
                                    # 3 "sModNode_clone"
                                    result_253=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value410=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "sModNode"))));
                                    come_call_finalizer2(sModNode_finalize,right_value410, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sModNode_clone"
                                    # 4 "sModNode_clone"
                                    if(_if_conditional366=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional366) {
                                        # 4 "sModNode_clone"
                                        __dec_obj185=result_253->mLeft;
                                        result_253->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=sNode_clone(self->mLeft))));
                                        if(__dec_obj185) { __dec_obj185 = come_decrement_ref_count2(__dec_obj185, ((struct sNode*)__dec_obj185)->finalize, ((struct sNode*)__dec_obj185)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value411) { right_value411 = come_decrement_ref_count2(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 6 "sModNode_clone"
                                    # 5 "sModNode_clone"
                                    if(_if_conditional367=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional367) {
                                        # 5 "sModNode_clone"
                                        __dec_obj186=result_253->mRight;
                                        result_253->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value412=sNode_clone(self->mRight))));
                                        if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count2(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value412) { right_value412 = come_decrement_ref_count2(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 7 "sModNode_clone"
                                    # 6 "sModNode_clone"
                                    if(_if_conditional368=self!=((void*)0),                                    _if_conditional368) {
                                        # 6 "sModNode_clone"
                                        result_253->mQuote=self->mQuote;
                                    }
                                    # 8 "sModNode_clone"
                                    # 7 "sModNode_clone"
                                    if(_if_conditional369=self!=((void*)0),                                    _if_conditional369) {
                                        # 7 "sModNode_clone"
                                        result_253->sline=self->sline;
                                    }
                                    # 9 "sModNode_clone"
                                    # 8 "sModNode_clone"
                                    if(_if_conditional370=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional370) {
                                        # 8 "sModNode_clone"
                                        __dec_obj187=result_253->sname;
                                        result_253->sname=(char*)come_increment_ref_count(((char*)(right_value413=string_clone(self->sname))));
                                        __dec_obj187 = come_decrement_ref_count2(__dec_obj187, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value413 = come_decrement_ref_count2(right_value413, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sModNode_clone"
                                    __result278__ = __result_obj__ = result_253;
                                    come_call_finalizer2(sModNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result278__;
                                    come_call_finalizer2(sModNode_finalize,result_253, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
void* right_value415;
struct sNode* node_254;
_Bool _while_condtional11;
_Bool _if_conditional371;
void* right_value416;
struct sNode* right_255;
void* right_value417;
void* right_value418;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value423;
struct sNode* __result283__;
_Bool _if_conditional381;
void* right_value424;
struct sNode* right_257;
void* right_value425;
void* right_value426;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value431;
struct sNode* __result286__;
_Bool _if_conditional391;
void* right_value432;
struct sNode* right_259;
void* right_value433;
void* right_value434;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* right_value439;
struct sNode* __result289__;
_Bool _if_conditional401;
void* right_value440;
struct sNode* right_261;
void* right_value441;
void* right_value442;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* right_value447;
struct sNode* __result292__;
struct sNode* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
right_value415 = (void*)0;
memset(&node_254, 0, sizeof(struct sNode*));
right_value416 = (void*)0;
memset(&right_255, 0, sizeof(struct sNode*));
right_value417 = (void*)0;
right_value418 = (void*)0;
right_value423 = (void*)0;
right_value424 = (void*)0;
memset(&right_257, 0, sizeof(struct sNode*));
right_value425 = (void*)0;
right_value426 = (void*)0;
right_value431 = (void*)0;
right_value432 = (void*)0;
memset(&right_259, 0, sizeof(struct sNode*));
right_value433 = (void*)0;
right_value434 = (void*)0;
right_value439 = (void*)0;
right_value440 = (void*)0;
memset(&right_261, 0, sizeof(struct sNode*));
right_value441 = (void*)0;
right_value442 = (void*)0;
right_value447 = (void*)0;
    # 2261 "13op.c"
    node_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=mult_exp(info))));
    if(right_value415) { right_value415 = come_decrement_ref_count2(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2265 "13op.c"
    parse_sharp_v5(info);
    # 2307 "13op.c"
    while(_while_condtional11=*info->p,    _while_condtional11) {
        # 2305 "13op.c"
        # 2266 "13op.c"
        if(_if_conditional371=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional371) {
            # 2268 "13op.c"
            info->p++;
            # 2269 "13op.c"
            skip_spaces_and_lf(info);
            # 2271 "13op.c"
            right_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=add_exp(info))));
            if(right_value416) { right_value416 = come_decrement_ref_count2(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2273 "13op.c"
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2273, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value418=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value417=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2273, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_254),(struct sNode*)come_increment_ref_count(right_255),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sAddNode_sline;
            _inf_value9->sname=(void*)sAddNode_sname;
            _inf_value9->terminated=(void*)sAddNode_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result283__ = __result_obj__ = ((struct sNode*)(right_value423=_inf_value9));
            if(right_255) { right_255 = come_decrement_ref_count2(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAddNode_finalize,right_value417, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAddNode_finalize,right_value418, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value423) { right_value423 = come_decrement_ref_count2(right_value423, ((struct sNode*)right_value423)->finalize, ((struct sNode*)right_value423)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result283__;
            if(right_255) { right_255 = come_decrement_ref_count2(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2305 "13op.c"
            # 2275 "13op.c"
            if(_if_conditional381=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional381) {
                # 2277 "13op.c"
                info->p++;
                # 2278 "13op.c"
                skip_spaces_and_lf(info);
                # 2280 "13op.c"
                right_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value424=add_exp(info))));
                if(right_value424) { right_value424 = come_decrement_ref_count2(right_value424, ((struct sNode*)right_value424)->finalize, ((struct sNode*)right_value424)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2282 "13op.c"
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2282, "struct sNode");
                _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value426=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value425=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2282, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_254),(struct sNode*)come_increment_ref_count(right_257),(_Bool)0,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sSubNode_finalize;
                _inf_value10->clone=(void*)sSubNode_clone;
                _inf_value10->compile=(void*)sSubNode_compile;
                _inf_value10->sline=(void*)sSubNode_sline;
                _inf_value10->sname=(void*)sSubNode_sname;
                _inf_value10->terminated=(void*)sSubNode_terminated;
                _inf_value10->kind=(void*)sSubNode_kind;
                __result286__ = __result_obj__ = ((struct sNode*)(right_value431=_inf_value10));
                if(right_257) { right_257 = come_decrement_ref_count2(right_257, ((struct sNode*)right_257)->finalize, ((struct sNode*)right_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sSubNode_finalize,right_value425, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sSubNode_finalize,right_value426, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value431) { right_value431 = come_decrement_ref_count2(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result286__;
                if(right_257) { right_257 = come_decrement_ref_count2(right_257, ((struct sNode*)right_257)->finalize, ((struct sNode*)right_257)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2305 "13op.c"
                # 2284 "13op.c"
                if(_if_conditional391=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional391) {
                    # 2286 "13op.c"
                    info->p+=2;
                    # 2287 "13op.c"
                    skip_spaces_and_lf(info);
                    # 2289 "13op.c"
                    right_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value432=add_exp(info))));
                    if(right_value432) { right_value432 = come_decrement_ref_count2(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 2291 "13op.c"
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2291, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sAddNode*)(right_value434=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value433=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2291, "sAddNode")))),(struct sNode*)come_increment_ref_count(node_254),(struct sNode*)come_increment_ref_count(right_259),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sAddNode_finalize;
                    _inf_value11->clone=(void*)sAddNode_clone;
                    _inf_value11->compile=(void*)sAddNode_compile;
                    _inf_value11->sline=(void*)sAddNode_sline;
                    _inf_value11->sname=(void*)sAddNode_sname;
                    _inf_value11->terminated=(void*)sAddNode_terminated;
                    _inf_value11->kind=(void*)sAddNode_kind;
                    __result289__ = __result_obj__ = ((struct sNode*)(right_value439=_inf_value11));
                    if(right_259) { right_259 = come_decrement_ref_count2(right_259, ((struct sNode*)right_259)->finalize, ((struct sNode*)right_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sAddNode_finalize,right_value433, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sAddNode_finalize,right_value434, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value439) { right_value439 = come_decrement_ref_count2(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result289__;
                    if(right_259) { right_259 = come_decrement_ref_count2(right_259, ((struct sNode*)right_259)->finalize, ((struct sNode*)right_259)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 2305 "13op.c"
                    # 2293 "13op.c"
                    if(_if_conditional401=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional401) {
                        # 2295 "13op.c"
                        info->p+=2;
                        # 2296 "13op.c"
                        skip_spaces_and_lf(info);
                        # 2298 "13op.c"
                        right_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=add_exp(info))));
                        if(right_value440) { right_value440 = come_decrement_ref_count2(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 2300 "13op.c"
                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2300, "struct sNode");
                        _inf_obj_value12=come_increment_ref_count(((struct sSubNode*)(right_value442=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value441=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2300, "sSubNode")))),(struct sNode*)come_increment_ref_count(node_254),(struct sNode*)come_increment_ref_count(right_261),(_Bool)1,info))));
                        _inf_value12->_protocol_obj=_inf_obj_value12;
                        _inf_value12->finalize=(void*)sSubNode_finalize;
                        _inf_value12->clone=(void*)sSubNode_clone;
                        _inf_value12->compile=(void*)sSubNode_compile;
                        _inf_value12->sline=(void*)sSubNode_sline;
                        _inf_value12->sname=(void*)sSubNode_sname;
                        _inf_value12->terminated=(void*)sSubNode_terminated;
                        _inf_value12->kind=(void*)sSubNode_kind;
                        __result292__ = __result_obj__ = ((struct sNode*)(right_value447=_inf_value12));
                        if(right_261) { right_261 = come_decrement_ref_count2(right_261, ((struct sNode*)right_261)->finalize, ((struct sNode*)right_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sSubNode_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sSubNode_finalize,right_value442, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value447) { right_value447 = come_decrement_ref_count2(right_value447, ((struct sNode*)right_value447)->finalize, ((struct sNode*)right_value447)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result292__;
                        if(right_261) { right_261 = come_decrement_ref_count2(right_261, ((struct sNode*)right_261)->finalize, ((struct sNode*)right_261)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 2303 "13op.c"
                        break;
                    }
                }
            }
        }
    }
    # 2307 "13op.c"
    parse_sharp_v5(info);
    # 2309 "13op.c"
    __result293__ = __result_obj__ = node_254;
    if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result293__;
    if(node_254) { node_254 = come_decrement_ref_count2(node_254, ((struct sNode*)node_254)->finalize, ((struct sNode*)node_254)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional392;
_Bool _if_conditional393;
_Bool _if_conditional394;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sAddNode_finalize"
                        # 0 "sAddNode_finalize"
                        if(_if_conditional392=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional392) {
                            # 0 "sAddNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sAddNode_finalize"
                        # 1 "sAddNode_finalize"
                        if(_if_conditional393=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional393) {
                            # 1 "sAddNode_finalize"
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sAddNode_finalize"
                        # 2 "sAddNode_finalize"
                        if(_if_conditional394=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional394) {
                            # 2 "sAddNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool _if_conditional395;
struct sAddNode* __result287__;
void* right_value435;
struct sAddNode* result_260;
_Bool _if_conditional396;
void* right_value436;
struct sNode* __dec_obj194;
_Bool _if_conditional397;
void* right_value437;
struct sNode* __dec_obj195;
_Bool _if_conditional398;
_Bool _if_conditional399;
_Bool _if_conditional400;
void* right_value438;
char* __dec_obj196;
struct sAddNode* __result288__;
memset(&__result_obj__, 0, sizeof(void*));
right_value435 = (void*)0;
memset(&result_260, 0, sizeof(struct sAddNode*));
right_value436 = (void*)0;
right_value437 = (void*)0;
right_value438 = (void*)0;
                        # 3 "sAddNode_clone"
                        # 2 "sAddNode_clone"
                        if(_if_conditional395=self==(void*)0,                        _if_conditional395) {
                            # 2 "sAddNode_clone"
                            __result287__ = __result_obj__ = (void*)0;
                            return __result287__;
                        }
                        # 3 "sAddNode_clone"
                        result_260=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value435=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "sAddNode"))));
                        come_call_finalizer2(sAddNode_finalize,right_value435, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sAddNode_clone"
                        # 4 "sAddNode_clone"
                        if(_if_conditional396=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional396) {
                            # 4 "sAddNode_clone"
                            __dec_obj194=result_260->mLeft;
                            result_260->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=sNode_clone(self->mLeft))));
                            if(__dec_obj194) { __dec_obj194 = come_decrement_ref_count2(__dec_obj194, ((struct sNode*)__dec_obj194)->finalize, ((struct sNode*)__dec_obj194)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value436) { right_value436 = come_decrement_ref_count2(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sAddNode_clone"
                        # 5 "sAddNode_clone"
                        if(_if_conditional397=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional397) {
                            # 5 "sAddNode_clone"
                            __dec_obj195=result_260->mRight;
                            result_260->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value437=sNode_clone(self->mRight))));
                            if(__dec_obj195) { __dec_obj195 = come_decrement_ref_count2(__dec_obj195, ((struct sNode*)__dec_obj195)->finalize, ((struct sNode*)__dec_obj195)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value437) { right_value437 = come_decrement_ref_count2(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sAddNode_clone"
                        # 6 "sAddNode_clone"
                        if(_if_conditional398=self!=((void*)0),                        _if_conditional398) {
                            # 6 "sAddNode_clone"
                            result_260->mQuote=self->mQuote;
                        }
                        # 8 "sAddNode_clone"
                        # 7 "sAddNode_clone"
                        if(_if_conditional399=self!=((void*)0),                        _if_conditional399) {
                            # 7 "sAddNode_clone"
                            result_260->sline=self->sline;
                        }
                        # 9 "sAddNode_clone"
                        # 8 "sAddNode_clone"
                        if(_if_conditional400=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional400) {
                            # 8 "sAddNode_clone"
                            __dec_obj196=result_260->sname;
                            result_260->sname=(char*)come_increment_ref_count(((char*)(right_value438=string_clone(self->sname))));
                            __dec_obj196 = come_decrement_ref_count2(__dec_obj196, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value438 = come_decrement_ref_count2(right_value438, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 9 "sAddNode_clone"
                        __result288__ = __result_obj__ = result_260;
                        come_call_finalizer2(sAddNode_finalize,result_260, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result288__;
                        come_call_finalizer2(sAddNode_finalize,result_260, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional402;
_Bool _if_conditional403;
_Bool _if_conditional404;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sSubNode_finalize"
                            # 0 "sSubNode_finalize"
                            if(_if_conditional402=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional402) {
                                # 0 "sSubNode_finalize"
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 2 "sSubNode_finalize"
                            # 1 "sSubNode_finalize"
                            if(_if_conditional403=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional403) {
                                # 1 "sSubNode_finalize"
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 3 "sSubNode_finalize"
                            # 2 "sSubNode_finalize"
                            if(_if_conditional404=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional404) {
                                # 2 "sSubNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool _if_conditional405;
struct sSubNode* __result290__;
void* right_value443;
struct sSubNode* result_262;
_Bool _if_conditional406;
void* right_value444;
struct sNode* __dec_obj197;
_Bool _if_conditional407;
void* right_value445;
struct sNode* __dec_obj198;
_Bool _if_conditional408;
_Bool _if_conditional409;
_Bool _if_conditional410;
void* right_value446;
char* __dec_obj199;
struct sSubNode* __result291__;
memset(&__result_obj__, 0, sizeof(void*));
right_value443 = (void*)0;
memset(&result_262, 0, sizeof(struct sSubNode*));
right_value444 = (void*)0;
right_value445 = (void*)0;
right_value446 = (void*)0;
                            # 3 "sSubNode_clone"
                            # 2 "sSubNode_clone"
                            if(_if_conditional405=self==(void*)0,                            _if_conditional405) {
                                # 2 "sSubNode_clone"
                                __result290__ = __result_obj__ = (void*)0;
                                return __result290__;
                            }
                            # 3 "sSubNode_clone"
                            result_262=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value443=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "sSubNode"))));
                            come_call_finalizer2(sSubNode_finalize,right_value443, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "sSubNode_clone"
                            # 4 "sSubNode_clone"
                            if(_if_conditional406=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional406) {
                                # 4 "sSubNode_clone"
                                __dec_obj197=result_262->mLeft;
                                result_262->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=sNode_clone(self->mLeft))));
                                if(__dec_obj197) { __dec_obj197 = come_decrement_ref_count2(__dec_obj197, ((struct sNode*)__dec_obj197)->finalize, ((struct sNode*)__dec_obj197)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value444) { right_value444 = come_decrement_ref_count2(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 6 "sSubNode_clone"
                            # 5 "sSubNode_clone"
                            if(_if_conditional407=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional407) {
                                # 5 "sSubNode_clone"
                                __dec_obj198=result_262->mRight;
                                result_262->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value445=sNode_clone(self->mRight))));
                                if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count2(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value445) { right_value445 = come_decrement_ref_count2(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 7 "sSubNode_clone"
                            # 6 "sSubNode_clone"
                            if(_if_conditional408=self!=((void*)0),                            _if_conditional408) {
                                # 6 "sSubNode_clone"
                                result_262->mQuote=self->mQuote;
                            }
                            # 8 "sSubNode_clone"
                            # 7 "sSubNode_clone"
                            if(_if_conditional409=self!=((void*)0),                            _if_conditional409) {
                                # 7 "sSubNode_clone"
                                result_262->sline=self->sline;
                            }
                            # 9 "sSubNode_clone"
                            # 8 "sSubNode_clone"
                            if(_if_conditional410=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional410) {
                                # 8 "sSubNode_clone"
                                __dec_obj199=result_262->sname;
                                result_262->sname=(char*)come_increment_ref_count(((char*)(right_value446=string_clone(self->sname))));
                                __dec_obj199 = come_decrement_ref_count2(__dec_obj199, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value446 = come_decrement_ref_count2(right_value446, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 9 "sSubNode_clone"
                            __result291__ = __result_obj__ = result_262;
                            come_call_finalizer2(sSubNode_finalize,result_262, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result291__;
                            come_call_finalizer2(sSubNode_finalize,result_262, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
void* right_value448;
struct sNode* node_263;
_Bool _while_condtional12;
_Bool _if_conditional411;
void* right_value449;
struct sNode* right_264;
void* right_value450;
void* right_value451;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value456;
struct sNode* __result296__;
_Bool _if_conditional421;
void* right_value457;
struct sNode* right_266;
void* right_value458;
void* right_value459;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value464;
struct sNode* __result299__;
_Bool _if_conditional431;
void* right_value465;
struct sNode* right_268;
void* right_value466;
void* right_value467;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* right_value472;
struct sNode* __result302__;
_Bool _if_conditional441;
void* right_value473;
struct sNode* right_270;
void* right_value474;
void* right_value475;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* right_value480;
struct sNode* __result305__;
struct sNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
right_value448 = (void*)0;
memset(&node_263, 0, sizeof(struct sNode*));
right_value449 = (void*)0;
memset(&right_264, 0, sizeof(struct sNode*));
right_value450 = (void*)0;
right_value451 = (void*)0;
right_value456 = (void*)0;
right_value457 = (void*)0;
memset(&right_266, 0, sizeof(struct sNode*));
right_value458 = (void*)0;
right_value459 = (void*)0;
right_value464 = (void*)0;
right_value465 = (void*)0;
memset(&right_268, 0, sizeof(struct sNode*));
right_value466 = (void*)0;
right_value467 = (void*)0;
right_value472 = (void*)0;
right_value473 = (void*)0;
memset(&right_270, 0, sizeof(struct sNode*));
right_value474 = (void*)0;
right_value475 = (void*)0;
right_value480 = (void*)0;
    # 2314 "13op.c"
    parse_sharp_v5(info);
    # 2316 "13op.c"
    node_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value448=add_exp(info))));
    if(right_value448) { right_value448 = come_decrement_ref_count2(right_value448, ((struct sNode*)right_value448)->finalize, ((struct sNode*)right_value448)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2320 "13op.c"
    parse_sharp_v5(info);
    # 2358 "13op.c"
    while(_while_condtional12=*info->p,    _while_condtional12) {
        # 2356 "13op.c"
        # 2321 "13op.c"
        if(_if_conditional411=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional411) {
            # 2322 "13op.c"
            info->p+=2;
            # 2323 "13op.c"
            skip_spaces_and_lf(info);
            # 2325 "13op.c"
            right_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value449=shift_exp(info))));
            if(right_value449) { right_value449 = come_decrement_ref_count2(right_value449, ((struct sNode*)right_value449)->finalize, ((struct sNode*)right_value449)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2327 "13op.c"
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2327, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value451=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value450=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2327, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_263),(struct sNode*)come_increment_ref_count(right_264),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sLShiftNode_sline;
            _inf_value13->sname=(void*)sLShiftNode_sname;
            _inf_value13->terminated=(void*)sLShiftNode_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result296__ = __result_obj__ = ((struct sNode*)(right_value456=_inf_value13));
            if(right_264) { right_264 = come_decrement_ref_count2(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sLShiftNode_finalize,right_value450, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sLShiftNode_finalize,right_value451, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value456) { right_value456 = come_decrement_ref_count2(right_value456, ((struct sNode*)right_value456)->finalize, ((struct sNode*)right_value456)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result296__;
            if(right_264) { right_264 = come_decrement_ref_count2(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2356 "13op.c"
            # 2329 "13op.c"
            if(_if_conditional421=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional421) {
                # 2330 "13op.c"
                info->p+=2;
                # 2331 "13op.c"
                skip_spaces_and_lf(info);
                # 2333 "13op.c"
                right_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value457=shift_exp(info))));
                if(right_value457) { right_value457 = come_decrement_ref_count2(right_value457, ((struct sNode*)right_value457)->finalize, ((struct sNode*)right_value457)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2335 "13op.c"
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2335, "struct sNode");
                _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value459=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value458=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2335, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_263),(struct sNode*)come_increment_ref_count(right_266),(_Bool)0,info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sRShiftNode_finalize;
                _inf_value14->clone=(void*)sRShiftNode_clone;
                _inf_value14->compile=(void*)sRShiftNode_compile;
                _inf_value14->sline=(void*)sRShiftNode_sline;
                _inf_value14->sname=(void*)sRShiftNode_sname;
                _inf_value14->terminated=(void*)sRShiftNode_terminated;
                _inf_value14->kind=(void*)sRShiftNode_kind;
                __result299__ = __result_obj__ = ((struct sNode*)(right_value464=_inf_value14));
                if(right_266) { right_266 = come_decrement_ref_count2(right_266, ((struct sNode*)right_266)->finalize, ((struct sNode*)right_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sRShiftNode_finalize,right_value458, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sRShiftNode_finalize,right_value459, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value464) { right_value464 = come_decrement_ref_count2(right_value464, ((struct sNode*)right_value464)->finalize, ((struct sNode*)right_value464)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result299__;
                if(right_266) { right_266 = come_decrement_ref_count2(right_266, ((struct sNode*)right_266)->finalize, ((struct sNode*)right_266)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2356 "13op.c"
                # 2337 "13op.c"
                if(_if_conditional431=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional431) {
                    # 2338 "13op.c"
                    info->p+=3;
                    # 2339 "13op.c"
                    skip_spaces_and_lf(info);
                    # 2341 "13op.c"
                    right_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value465=shift_exp(info))));
                    if(right_value465) { right_value465 = come_decrement_ref_count2(right_value465, ((struct sNode*)right_value465)->finalize, ((struct sNode*)right_value465)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 2343 "13op.c"
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2343, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sLShiftNode*)(right_value467=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value466=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2343, "sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_263),(struct sNode*)come_increment_ref_count(right_268),(_Bool)1,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sLShiftNode_finalize;
                    _inf_value15->clone=(void*)sLShiftNode_clone;
                    _inf_value15->compile=(void*)sLShiftNode_compile;
                    _inf_value15->sline=(void*)sLShiftNode_sline;
                    _inf_value15->sname=(void*)sLShiftNode_sname;
                    _inf_value15->terminated=(void*)sLShiftNode_terminated;
                    _inf_value15->kind=(void*)sLShiftNode_kind;
                    __result302__ = __result_obj__ = ((struct sNode*)(right_value472=_inf_value15));
                    if(right_268) { right_268 = come_decrement_ref_count2(right_268, ((struct sNode*)right_268)->finalize, ((struct sNode*)right_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sLShiftNode_finalize,right_value466, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sLShiftNode_finalize,right_value467, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value472) { right_value472 = come_decrement_ref_count2(right_value472, ((struct sNode*)right_value472)->finalize, ((struct sNode*)right_value472)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result302__;
                    if(right_268) { right_268 = come_decrement_ref_count2(right_268, ((struct sNode*)right_268)->finalize, ((struct sNode*)right_268)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 2356 "13op.c"
                    # 2345 "13op.c"
                    if(_if_conditional441=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional441) {
                        # 2346 "13op.c"
                        info->p+=3;
                        # 2347 "13op.c"
                        skip_spaces_and_lf(info);
                        # 2349 "13op.c"
                        right_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value473=shift_exp(info))));
                        if(right_value473) { right_value473 = come_decrement_ref_count2(right_value473, ((struct sNode*)right_value473)->finalize, ((struct sNode*)right_value473)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 2351 "13op.c"
                        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2351, "struct sNode");
                        _inf_obj_value16=come_increment_ref_count(((struct sRShiftNode*)(right_value475=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value474=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2351, "sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_263),(struct sNode*)come_increment_ref_count(right_270),(_Bool)1,info))));
                        _inf_value16->_protocol_obj=_inf_obj_value16;
                        _inf_value16->finalize=(void*)sRShiftNode_finalize;
                        _inf_value16->clone=(void*)sRShiftNode_clone;
                        _inf_value16->compile=(void*)sRShiftNode_compile;
                        _inf_value16->sline=(void*)sRShiftNode_sline;
                        _inf_value16->sname=(void*)sRShiftNode_sname;
                        _inf_value16->terminated=(void*)sRShiftNode_terminated;
                        _inf_value16->kind=(void*)sRShiftNode_kind;
                        __result305__ = __result_obj__ = ((struct sNode*)(right_value480=_inf_value16));
                        if(right_270) { right_270 = come_decrement_ref_count2(right_270, ((struct sNode*)right_270)->finalize, ((struct sNode*)right_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sRShiftNode_finalize,right_value474, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sRShiftNode_finalize,right_value475, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value480) { right_value480 = come_decrement_ref_count2(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result305__;
                        if(right_270) { right_270 = come_decrement_ref_count2(right_270, ((struct sNode*)right_270)->finalize, ((struct sNode*)right_270)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 2354 "13op.c"
                        break;
                    }
                }
            }
        }
    }
    # 2358 "13op.c"
    parse_sharp_v5(info);
    # 2360 "13op.c"
    __result306__ = __result_obj__ = node_263;
    if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result306__;
    if(node_263) { node_263 = come_decrement_ref_count2(node_263, ((struct sNode*)node_263)->finalize, ((struct sNode*)node_263)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional432;
_Bool _if_conditional433;
_Bool _if_conditional434;
memset(&__result_obj__, 0, sizeof(void*));
                        # 1 "sLShiftNode_finalize"
                        # 0 "sLShiftNode_finalize"
                        if(_if_conditional432=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional432) {
                            # 0 "sLShiftNode_finalize"
                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 2 "sLShiftNode_finalize"
                        # 1 "sLShiftNode_finalize"
                        if(_if_conditional433=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional433) {
                            # 1 "sLShiftNode_finalize"
                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        # 3 "sLShiftNode_finalize"
                        # 2 "sLShiftNode_finalize"
                        if(_if_conditional434=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional434) {
                            # 2 "sLShiftNode_finalize"
                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool _if_conditional435;
struct sLShiftNode* __result300__;
void* right_value468;
struct sLShiftNode* result_269;
_Bool _if_conditional436;
void* right_value469;
struct sNode* __dec_obj206;
_Bool _if_conditional437;
void* right_value470;
struct sNode* __dec_obj207;
_Bool _if_conditional438;
_Bool _if_conditional439;
_Bool _if_conditional440;
void* right_value471;
char* __dec_obj208;
struct sLShiftNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
right_value468 = (void*)0;
memset(&result_269, 0, sizeof(struct sLShiftNode*));
right_value469 = (void*)0;
right_value470 = (void*)0;
right_value471 = (void*)0;
                        # 3 "sLShiftNode_clone"
                        # 2 "sLShiftNode_clone"
                        if(_if_conditional435=self==(void*)0,                        _if_conditional435) {
                            # 2 "sLShiftNode_clone"
                            __result300__ = __result_obj__ = (void*)0;
                            return __result300__;
                        }
                        # 3 "sLShiftNode_clone"
                        result_269=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value468=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "sLShiftNode"))));
                        come_call_finalizer2(sLShiftNode_finalize,right_value468, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        # 5 "sLShiftNode_clone"
                        # 4 "sLShiftNode_clone"
                        if(_if_conditional436=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional436) {
                            # 4 "sLShiftNode_clone"
                            __dec_obj206=result_269->mLeft;
                            result_269->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value469=sNode_clone(self->mLeft))));
                            if(__dec_obj206) { __dec_obj206 = come_decrement_ref_count2(__dec_obj206, ((struct sNode*)__dec_obj206)->finalize, ((struct sNode*)__dec_obj206)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value469) { right_value469 = come_decrement_ref_count2(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 6 "sLShiftNode_clone"
                        # 5 "sLShiftNode_clone"
                        if(_if_conditional437=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional437) {
                            # 5 "sLShiftNode_clone"
                            __dec_obj207=result_269->mRight;
                            result_269->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value470=sNode_clone(self->mRight))));
                            if(__dec_obj207) { __dec_obj207 = come_decrement_ref_count2(__dec_obj207, ((struct sNode*)__dec_obj207)->finalize, ((struct sNode*)__dec_obj207)->_protocol_obj, 0,0,0, (void*)0); }
                            if(right_value470) { right_value470 = come_decrement_ref_count2(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        }
                        # 7 "sLShiftNode_clone"
                        # 6 "sLShiftNode_clone"
                        if(_if_conditional438=self!=((void*)0),                        _if_conditional438) {
                            # 6 "sLShiftNode_clone"
                            result_269->mQuote=self->mQuote;
                        }
                        # 8 "sLShiftNode_clone"
                        # 7 "sLShiftNode_clone"
                        if(_if_conditional439=self!=((void*)0),                        _if_conditional439) {
                            # 7 "sLShiftNode_clone"
                            result_269->sline=self->sline;
                        }
                        # 9 "sLShiftNode_clone"
                        # 8 "sLShiftNode_clone"
                        if(_if_conditional440=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional440) {
                            # 8 "sLShiftNode_clone"
                            __dec_obj208=result_269->sname;
                            result_269->sname=(char*)come_increment_ref_count(((char*)(right_value471=string_clone(self->sname))));
                            __dec_obj208 = come_decrement_ref_count2(__dec_obj208, (void*)0, (void*)0, 0,0,0, (void*)0);
                            right_value471 = come_decrement_ref_count2(right_value471, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                        }
                        # 9 "sLShiftNode_clone"
                        __result301__ = __result_obj__ = result_269;
                        come_call_finalizer2(sLShiftNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                        return __result301__;
                        come_call_finalizer2(sLShiftNode_finalize,result_269, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional442;
_Bool _if_conditional443;
_Bool _if_conditional444;
memset(&__result_obj__, 0, sizeof(void*));
                            # 1 "sRShiftNode_finalize"
                            # 0 "sRShiftNode_finalize"
                            if(_if_conditional442=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional442) {
                                # 0 "sRShiftNode_finalize"
                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 2 "sRShiftNode_finalize"
                            # 1 "sRShiftNode_finalize"
                            if(_if_conditional443=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional443) {
                                # 1 "sRShiftNode_finalize"
                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            # 3 "sRShiftNode_finalize"
                            # 2 "sRShiftNode_finalize"
                            if(_if_conditional444=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional444) {
                                # 2 "sRShiftNode_finalize"
                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool _if_conditional445;
struct sRShiftNode* __result303__;
void* right_value476;
struct sRShiftNode* result_271;
_Bool _if_conditional446;
void* right_value477;
struct sNode* __dec_obj209;
_Bool _if_conditional447;
void* right_value478;
struct sNode* __dec_obj210;
_Bool _if_conditional448;
_Bool _if_conditional449;
_Bool _if_conditional450;
void* right_value479;
char* __dec_obj211;
struct sRShiftNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
right_value476 = (void*)0;
memset(&result_271, 0, sizeof(struct sRShiftNode*));
right_value477 = (void*)0;
right_value478 = (void*)0;
right_value479 = (void*)0;
                            # 3 "sRShiftNode_clone"
                            # 2 "sRShiftNode_clone"
                            if(_if_conditional445=self==(void*)0,                            _if_conditional445) {
                                # 2 "sRShiftNode_clone"
                                __result303__ = __result_obj__ = (void*)0;
                                return __result303__;
                            }
                            # 3 "sRShiftNode_clone"
                            result_271=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value476=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "sRShiftNode"))));
                            come_call_finalizer2(sRShiftNode_finalize,right_value476, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            # 5 "sRShiftNode_clone"
                            # 4 "sRShiftNode_clone"
                            if(_if_conditional446=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional446) {
                                # 4 "sRShiftNode_clone"
                                __dec_obj209=result_271->mLeft;
                                result_271->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value477=sNode_clone(self->mLeft))));
                                if(__dec_obj209) { __dec_obj209 = come_decrement_ref_count2(__dec_obj209, ((struct sNode*)__dec_obj209)->finalize, ((struct sNode*)__dec_obj209)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value477) { right_value477 = come_decrement_ref_count2(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 6 "sRShiftNode_clone"
                            # 5 "sRShiftNode_clone"
                            if(_if_conditional447=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional447) {
                                # 5 "sRShiftNode_clone"
                                __dec_obj210=result_271->mRight;
                                result_271->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value478=sNode_clone(self->mRight))));
                                if(__dec_obj210) { __dec_obj210 = come_decrement_ref_count2(__dec_obj210, ((struct sNode*)__dec_obj210)->finalize, ((struct sNode*)__dec_obj210)->_protocol_obj, 0,0,0, (void*)0); }
                                if(right_value478) { right_value478 = come_decrement_ref_count2(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            }
                            # 7 "sRShiftNode_clone"
                            # 6 "sRShiftNode_clone"
                            if(_if_conditional448=self!=((void*)0),                            _if_conditional448) {
                                # 6 "sRShiftNode_clone"
                                result_271->mQuote=self->mQuote;
                            }
                            # 8 "sRShiftNode_clone"
                            # 7 "sRShiftNode_clone"
                            if(_if_conditional449=self!=((void*)0),                            _if_conditional449) {
                                # 7 "sRShiftNode_clone"
                                result_271->sline=self->sline;
                            }
                            # 9 "sRShiftNode_clone"
                            # 8 "sRShiftNode_clone"
                            if(_if_conditional450=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional450) {
                                # 8 "sRShiftNode_clone"
                                __dec_obj211=result_271->sname;
                                result_271->sname=(char*)come_increment_ref_count(((char*)(right_value479=string_clone(self->sname))));
                                __dec_obj211 = come_decrement_ref_count2(__dec_obj211, (void*)0, (void*)0, 0,0,0, (void*)0);
                                right_value479 = come_decrement_ref_count2(right_value479, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                            }
                            # 9 "sRShiftNode_clone"
                            __result304__ = __result_obj__ = result_271;
                            come_call_finalizer2(sRShiftNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                            return __result304__;
                            come_call_finalizer2(sRShiftNode_finalize,result_271, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
void* right_value481;
struct sNode* node_272;
_Bool _while_condtional13;
_Bool _if_conditional451;
void* right_value482;
struct sNode* right_273;
void* right_value483;
void* right_value484;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* right_value489;
struct sNode* __result309__;
_Bool _if_conditional461;
void* right_value490;
struct sNode* right_275;
void* right_value491;
void* right_value492;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* right_value497;
struct sNode* __result312__;
_Bool _if_conditional471;
void* right_value498;
struct sNode* right_277;
void* right_value499;
void* right_value500;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* right_value505;
struct sNode* __result315__;
_Bool _if_conditional481;
void* right_value506;
struct sNode* right_279;
void* right_value507;
void* right_value508;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* right_value513;
struct sNode* __result318__;
_Bool _if_conditional491;
void* right_value514;
struct sNode* right_281;
void* right_value515;
void* right_value516;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* right_value521;
struct sNode* __result321__;
_Bool _if_conditional501;
void* right_value522;
struct sNode* right_283;
void* right_value523;
void* right_value524;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* right_value529;
struct sNode* __result324__;
_Bool _if_conditional511;
void* right_value530;
struct sNode* right_285;
void* right_value531;
void* right_value532;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* right_value537;
struct sNode* __result327__;
_Bool _if_conditional521;
void* right_value538;
struct sNode* right_287;
void* right_value539;
void* right_value540;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* right_value545;
struct sNode* __result330__;
struct sNode* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
right_value481 = (void*)0;
memset(&node_272, 0, sizeof(struct sNode*));
right_value482 = (void*)0;
memset(&right_273, 0, sizeof(struct sNode*));
right_value483 = (void*)0;
right_value484 = (void*)0;
right_value489 = (void*)0;
right_value490 = (void*)0;
memset(&right_275, 0, sizeof(struct sNode*));
right_value491 = (void*)0;
right_value492 = (void*)0;
right_value497 = (void*)0;
right_value498 = (void*)0;
memset(&right_277, 0, sizeof(struct sNode*));
right_value499 = (void*)0;
right_value500 = (void*)0;
right_value505 = (void*)0;
right_value506 = (void*)0;
memset(&right_279, 0, sizeof(struct sNode*));
right_value507 = (void*)0;
right_value508 = (void*)0;
right_value513 = (void*)0;
right_value514 = (void*)0;
memset(&right_281, 0, sizeof(struct sNode*));
right_value515 = (void*)0;
right_value516 = (void*)0;
right_value521 = (void*)0;
right_value522 = (void*)0;
memset(&right_283, 0, sizeof(struct sNode*));
right_value523 = (void*)0;
right_value524 = (void*)0;
right_value529 = (void*)0;
right_value530 = (void*)0;
memset(&right_285, 0, sizeof(struct sNode*));
right_value531 = (void*)0;
right_value532 = (void*)0;
right_value537 = (void*)0;
right_value538 = (void*)0;
memset(&right_287, 0, sizeof(struct sNode*));
right_value539 = (void*)0;
right_value540 = (void*)0;
right_value545 = (void*)0;
    # 2365 "13op.c"
    parse_sharp_v5(info);
    # 2367 "13op.c"
    node_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value481=shift_exp(info))));
    if(right_value481) { right_value481 = come_decrement_ref_count2(right_value481, ((struct sNode*)right_value481)->finalize, ((struct sNode*)right_value481)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2371 "13op.c"
    parse_sharp_v5(info);
    # 2441 "13op.c"
    while(_while_condtional13=*info->p,    _while_condtional13) {
        # 2439 "13op.c"
        # 2372 "13op.c"
        if(_if_conditional451=*info->p==62&&*(info->p+1)==61,        _if_conditional451) {
            # 2373 "13op.c"
            info->p+=2;
            # 2374 "13op.c"
            skip_spaces_and_lf(info);
            # 2376 "13op.c"
            right_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value482=shift_exp(info))));
            if(right_value482) { right_value482 = come_decrement_ref_count2(right_value482, ((struct sNode*)right_value482)->finalize, ((struct sNode*)right_value482)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2378 "13op.c"
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2378, "struct sNode");
            _inf_obj_value17=come_increment_ref_count(((struct sGtEqNode*)(right_value484=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value483=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2378, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_273),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sGtEqNode_sline;
            _inf_value17->sname=(void*)sGtEqNode_sname;
            _inf_value17->terminated=(void*)sGtEqNode_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result309__ = __result_obj__ = ((struct sNode*)(right_value489=_inf_value17));
            if(right_273) { right_273 = come_decrement_ref_count2(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sGtEqNode_finalize,right_value483, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sGtEqNode_finalize,right_value484, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value489) { right_value489 = come_decrement_ref_count2(right_value489, ((struct sNode*)right_value489)->finalize, ((struct sNode*)right_value489)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result309__;
            if(right_273) { right_273 = come_decrement_ref_count2(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2439 "13op.c"
            # 2380 "13op.c"
            if(_if_conditional461=*info->p==60&&*(info->p+1)==61,            _if_conditional461) {
                # 2381 "13op.c"
                info->p+=2;
                # 2382 "13op.c"
                skip_spaces_and_lf(info);
                # 2384 "13op.c"
                right_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value490=shift_exp(info))));
                if(right_value490) { right_value490 = come_decrement_ref_count2(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2386 "13op.c"
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2386, "struct sNode");
                _inf_obj_value18=come_increment_ref_count(((struct sLtEqNode*)(right_value492=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value491=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2386, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_275),(_Bool)0,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLtEqNode_finalize;
                _inf_value18->clone=(void*)sLtEqNode_clone;
                _inf_value18->compile=(void*)sLtEqNode_compile;
                _inf_value18->sline=(void*)sLtEqNode_sline;
                _inf_value18->sname=(void*)sLtEqNode_sname;
                _inf_value18->terminated=(void*)sLtEqNode_terminated;
                _inf_value18->kind=(void*)sLtEqNode_kind;
                __result312__ = __result_obj__ = ((struct sNode*)(right_value497=_inf_value18));
                if(right_275) { right_275 = come_decrement_ref_count2(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sLtEqNode_finalize,right_value491, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sLtEqNode_finalize,right_value492, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value497) { right_value497 = come_decrement_ref_count2(right_value497, ((struct sNode*)right_value497)->finalize, ((struct sNode*)right_value497)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result312__;
                if(right_275) { right_275 = come_decrement_ref_count2(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2439 "13op.c"
                # 2388 "13op.c"
                if(_if_conditional471=*info->p==62&&*(info->p+1)!=62,                _if_conditional471) {
                    # 2389 "13op.c"
                    info->p++;
                    # 2390 "13op.c"
                    skip_spaces_and_lf(info);
                    # 2392 "13op.c"
                    right_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value498=shift_exp(info))));
                    if(right_value498) { right_value498 = come_decrement_ref_count2(right_value498, ((struct sNode*)right_value498)->finalize, ((struct sNode*)right_value498)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 2394 "13op.c"
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2394, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sGtNode*)(right_value500=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value499=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2394, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_277),(_Bool)0,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sGtNode_finalize;
                    _inf_value19->clone=(void*)sGtNode_clone;
                    _inf_value19->compile=(void*)sGtNode_compile;
                    _inf_value19->sline=(void*)sGtNode_sline;
                    _inf_value19->sname=(void*)sGtNode_sname;
                    _inf_value19->terminated=(void*)sGtNode_terminated;
                    _inf_value19->kind=(void*)sGtNode_kind;
                    __result315__ = __result_obj__ = ((struct sNode*)(right_value505=_inf_value19));
                    if(right_277) { right_277 = come_decrement_ref_count2(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sGtNode_finalize,right_value499, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sGtNode_finalize,right_value500, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value505) { right_value505 = come_decrement_ref_count2(right_value505, ((struct sNode*)right_value505)->finalize, ((struct sNode*)right_value505)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result315__;
                    if(right_277) { right_277 = come_decrement_ref_count2(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 2439 "13op.c"
                    # 2396 "13op.c"
                    if(_if_conditional481=*info->p==60&&*(info->p+1)!=60,                    _if_conditional481) {
                        # 2397 "13op.c"
                        info->p++;
                        # 2398 "13op.c"
                        skip_spaces_and_lf(info);
                        # 2400 "13op.c"
                        right_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value506=shift_exp(info))));
                        if(right_value506) { right_value506 = come_decrement_ref_count2(right_value506, ((struct sNode*)right_value506)->finalize, ((struct sNode*)right_value506)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 2402 "13op.c"
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2402, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sLtNode*)(right_value508=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value507=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2402, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_279),(_Bool)0,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sLtNode_finalize;
                        _inf_value20->clone=(void*)sLtNode_clone;
                        _inf_value20->compile=(void*)sLtNode_compile;
                        _inf_value20->sline=(void*)sLtNode_sline;
                        _inf_value20->sname=(void*)sLtNode_sname;
                        _inf_value20->terminated=(void*)sLtNode_terminated;
                        _inf_value20->kind=(void*)sLtNode_kind;
                        __result318__ = __result_obj__ = ((struct sNode*)(right_value513=_inf_value20));
                        if(right_279) { right_279 = come_decrement_ref_count2(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sLtNode_finalize,right_value507, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sLtNode_finalize,right_value508, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value513) { right_value513 = come_decrement_ref_count2(right_value513, ((struct sNode*)right_value513)->finalize, ((struct sNode*)right_value513)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result318__;
                        if(right_279) { right_279 = come_decrement_ref_count2(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 2439 "13op.c"
                        # 2404 "13op.c"
                        if(_if_conditional491=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional491) {
                            # 2405 "13op.c"
                            info->p+=3;
                            # 2406 "13op.c"
                            skip_spaces_and_lf(info);
                            # 2408 "13op.c"
                            right_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value514=shift_exp(info))));
                            if(right_value514) { right_value514 = come_decrement_ref_count2(right_value514, ((struct sNode*)right_value514)->finalize, ((struct sNode*)right_value514)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2410 "13op.c"
                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2410, "struct sNode");
                            _inf_obj_value21=come_increment_ref_count(((struct sGtEqNode*)(right_value516=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value515=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2410, "sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_281),(_Bool)1,info))));
                            _inf_value21->_protocol_obj=_inf_obj_value21;
                            _inf_value21->finalize=(void*)sGtEqNode_finalize;
                            _inf_value21->clone=(void*)sGtEqNode_clone;
                            _inf_value21->compile=(void*)sGtEqNode_compile;
                            _inf_value21->sline=(void*)sGtEqNode_sline;
                            _inf_value21->sname=(void*)sGtEqNode_sname;
                            _inf_value21->terminated=(void*)sGtEqNode_terminated;
                            _inf_value21->kind=(void*)sGtEqNode_kind;
                            __result321__ = __result_obj__ = ((struct sNode*)(right_value521=_inf_value21));
                            if(right_281) { right_281 = come_decrement_ref_count2(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sGtEqNode_finalize,right_value515, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sGtEqNode_finalize,right_value516, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value521) { right_value521 = come_decrement_ref_count2(right_value521, ((struct sNode*)right_value521)->finalize, ((struct sNode*)right_value521)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result321__;
                            if(right_281) { right_281 = come_decrement_ref_count2(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 2439 "13op.c"
                            # 2412 "13op.c"
                            if(_if_conditional501=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional501) {
                                # 2413 "13op.c"
                                info->p+=3;
                                # 2414 "13op.c"
                                skip_spaces_and_lf(info);
                                # 2416 "13op.c"
                                right_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value522=shift_exp(info))));
                                if(right_value522) { right_value522 = come_decrement_ref_count2(right_value522, ((struct sNode*)right_value522)->finalize, ((struct sNode*)right_value522)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 2418 "13op.c"
                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2418, "struct sNode");
                                _inf_obj_value22=come_increment_ref_count(((struct sLtEqNode*)(right_value524=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value523=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2418, "sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_283),(_Bool)1,info))));
                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                _inf_value22->finalize=(void*)sLtEqNode_finalize;
                                _inf_value22->clone=(void*)sLtEqNode_clone;
                                _inf_value22->compile=(void*)sLtEqNode_compile;
                                _inf_value22->sline=(void*)sLtEqNode_sline;
                                _inf_value22->sname=(void*)sLtEqNode_sname;
                                _inf_value22->terminated=(void*)sLtEqNode_terminated;
                                _inf_value22->kind=(void*)sLtEqNode_kind;
                                __result324__ = __result_obj__ = ((struct sNode*)(right_value529=_inf_value22));
                                if(right_283) { right_283 = come_decrement_ref_count2(right_283, ((struct sNode*)right_283)->finalize, ((struct sNode*)right_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sLtEqNode_finalize,right_value523, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sLtEqNode_finalize,right_value524, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value529) { right_value529 = come_decrement_ref_count2(right_value529, ((struct sNode*)right_value529)->finalize, ((struct sNode*)right_value529)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result324__;
                                if(right_283) { right_283 = come_decrement_ref_count2(right_283, ((struct sNode*)right_283)->finalize, ((struct sNode*)right_283)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 2439 "13op.c"
                                # 2420 "13op.c"
                                if(_if_conditional511=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional511) {
                                    # 2421 "13op.c"
                                    info->p+=2;
                                    # 2422 "13op.c"
                                    skip_spaces_and_lf(info);
                                    # 2424 "13op.c"
                                    right_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value530=shift_exp(info))));
                                    if(right_value530) { right_value530 = come_decrement_ref_count2(right_value530, ((struct sNode*)right_value530)->finalize, ((struct sNode*)right_value530)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 2426 "13op.c"
                                    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2426, "struct sNode");
                                    _inf_obj_value23=come_increment_ref_count(((struct sGtNode*)(right_value532=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value531=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2426, "sGtNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_285),(_Bool)1,info))));
                                    _inf_value23->_protocol_obj=_inf_obj_value23;
                                    _inf_value23->finalize=(void*)sGtNode_finalize;
                                    _inf_value23->clone=(void*)sGtNode_clone;
                                    _inf_value23->compile=(void*)sGtNode_compile;
                                    _inf_value23->sline=(void*)sGtNode_sline;
                                    _inf_value23->sname=(void*)sGtNode_sname;
                                    _inf_value23->terminated=(void*)sGtNode_terminated;
                                    _inf_value23->kind=(void*)sGtNode_kind;
                                    __result327__ = __result_obj__ = ((struct sNode*)(right_value537=_inf_value23));
                                    if(right_285) { right_285 = come_decrement_ref_count2(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sGtNode_finalize,right_value531, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sGtNode_finalize,right_value532, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value537) { right_value537 = come_decrement_ref_count2(right_value537, ((struct sNode*)right_value537)->finalize, ((struct sNode*)right_value537)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result327__;
                                    if(right_285) { right_285 = come_decrement_ref_count2(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 2439 "13op.c"
                                    # 2428 "13op.c"
                                    if(_if_conditional521=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional521) {
                                        # 2429 "13op.c"
                                        info->p+=2;
                                        # 2430 "13op.c"
                                        skip_spaces_and_lf(info);
                                        # 2432 "13op.c"
                                        right_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value538=shift_exp(info))));
                                        if(right_value538) { right_value538 = come_decrement_ref_count2(right_value538, ((struct sNode*)right_value538)->finalize, ((struct sNode*)right_value538)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 2434 "13op.c"
                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2434, "struct sNode");
                                        _inf_obj_value24=come_increment_ref_count(((struct sLtNode*)(right_value540=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value539=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2434, "sLtNode")))),(struct sNode*)come_increment_ref_count(node_272),(struct sNode*)come_increment_ref_count(right_287),(_Bool)1,info))));
                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                        _inf_value24->finalize=(void*)sLtNode_finalize;
                                        _inf_value24->clone=(void*)sLtNode_clone;
                                        _inf_value24->compile=(void*)sLtNode_compile;
                                        _inf_value24->sline=(void*)sLtNode_sline;
                                        _inf_value24->sname=(void*)sLtNode_sname;
                                        _inf_value24->terminated=(void*)sLtNode_terminated;
                                        _inf_value24->kind=(void*)sLtNode_kind;
                                        __result330__ = __result_obj__ = ((struct sNode*)(right_value545=_inf_value24));
                                        if(right_287) { right_287 = come_decrement_ref_count2(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sLtNode_finalize,right_value539, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sLtNode_finalize,right_value540, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value545) { right_value545 = come_decrement_ref_count2(right_value545, ((struct sNode*)right_value545)->finalize, ((struct sNode*)right_value545)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result330__;
                                        if(right_287) { right_287 = come_decrement_ref_count2(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 2437 "13op.c"
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
    # 2441 "13op.c"
    parse_sharp_v5(info);
    # 2443 "13op.c"
    __result331__ = __result_obj__ = node_272;
    if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result331__;
    if(node_272) { node_272 = come_decrement_ref_count2(node_272, ((struct sNode*)node_272)->finalize, ((struct sNode*)node_272)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional492;
_Bool _if_conditional493;
_Bool _if_conditional494;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sGtEqNode_finalize"
                                # 0 "sGtEqNode_finalize"
                                if(_if_conditional492=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional492) {
                                    # 0 "sGtEqNode_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 2 "sGtEqNode_finalize"
                                # 1 "sGtEqNode_finalize"
                                if(_if_conditional493=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional493) {
                                    # 1 "sGtEqNode_finalize"
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 3 "sGtEqNode_finalize"
                                # 2 "sGtEqNode_finalize"
                                if(_if_conditional494=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional494) {
                                    # 2 "sGtEqNode_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool _if_conditional495;
struct sGtEqNode* __result319__;
void* right_value517;
struct sGtEqNode* result_282;
_Bool _if_conditional496;
void* right_value518;
struct sNode* __dec_obj224;
_Bool _if_conditional497;
void* right_value519;
struct sNode* __dec_obj225;
_Bool _if_conditional498;
_Bool _if_conditional499;
_Bool _if_conditional500;
void* right_value520;
char* __dec_obj226;
struct sGtEqNode* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
right_value517 = (void*)0;
memset(&result_282, 0, sizeof(struct sGtEqNode*));
right_value518 = (void*)0;
right_value519 = (void*)0;
right_value520 = (void*)0;
                                # 3 "sGtEqNode_clone"
                                # 2 "sGtEqNode_clone"
                                if(_if_conditional495=self==(void*)0,                                _if_conditional495) {
                                    # 2 "sGtEqNode_clone"
                                    __result319__ = __result_obj__ = (void*)0;
                                    return __result319__;
                                }
                                # 3 "sGtEqNode_clone"
                                result_282=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value517=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "sGtEqNode"))));
                                come_call_finalizer2(sGtEqNode_finalize,right_value517, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sGtEqNode_clone"
                                # 4 "sGtEqNode_clone"
                                if(_if_conditional496=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional496) {
                                    # 4 "sGtEqNode_clone"
                                    __dec_obj224=result_282->mLeft;
                                    result_282->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value518=sNode_clone(self->mLeft))));
                                    if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count2(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value518) { right_value518 = come_decrement_ref_count2(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 6 "sGtEqNode_clone"
                                # 5 "sGtEqNode_clone"
                                if(_if_conditional497=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional497) {
                                    # 5 "sGtEqNode_clone"
                                    __dec_obj225=result_282->mRight;
                                    result_282->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value519=sNode_clone(self->mRight))));
                                    if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count2(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value519) { right_value519 = come_decrement_ref_count2(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 7 "sGtEqNode_clone"
                                # 6 "sGtEqNode_clone"
                                if(_if_conditional498=self!=((void*)0),                                _if_conditional498) {
                                    # 6 "sGtEqNode_clone"
                                    result_282->mQuote=self->mQuote;
                                }
                                # 8 "sGtEqNode_clone"
                                # 7 "sGtEqNode_clone"
                                if(_if_conditional499=self!=((void*)0),                                _if_conditional499) {
                                    # 7 "sGtEqNode_clone"
                                    result_282->sline=self->sline;
                                }
                                # 9 "sGtEqNode_clone"
                                # 8 "sGtEqNode_clone"
                                if(_if_conditional500=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional500) {
                                    # 8 "sGtEqNode_clone"
                                    __dec_obj226=result_282->sname;
                                    result_282->sname=(char*)come_increment_ref_count(((char*)(right_value520=string_clone(self->sname))));
                                    __dec_obj226 = come_decrement_ref_count2(__dec_obj226, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value520 = come_decrement_ref_count2(right_value520, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 9 "sGtEqNode_clone"
                                __result320__ = __result_obj__ = result_282;
                                come_call_finalizer2(sGtEqNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result320__;
                                come_call_finalizer2(sGtEqNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional502;
_Bool _if_conditional503;
_Bool _if_conditional504;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sLtEqNode_finalize"
                                    # 0 "sLtEqNode_finalize"
                                    if(_if_conditional502=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional502) {
                                        # 0 "sLtEqNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 2 "sLtEqNode_finalize"
                                    # 1 "sLtEqNode_finalize"
                                    if(_if_conditional503=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional503) {
                                        # 1 "sLtEqNode_finalize"
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 3 "sLtEqNode_finalize"
                                    # 2 "sLtEqNode_finalize"
                                    if(_if_conditional504=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional504) {
                                        # 2 "sLtEqNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool _if_conditional505;
struct sLtEqNode* __result322__;
void* right_value525;
struct sLtEqNode* result_284;
_Bool _if_conditional506;
void* right_value526;
struct sNode* __dec_obj227;
_Bool _if_conditional507;
void* right_value527;
struct sNode* __dec_obj228;
_Bool _if_conditional508;
_Bool _if_conditional509;
_Bool _if_conditional510;
void* right_value528;
char* __dec_obj229;
struct sLtEqNode* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
right_value525 = (void*)0;
memset(&result_284, 0, sizeof(struct sLtEqNode*));
right_value526 = (void*)0;
right_value527 = (void*)0;
right_value528 = (void*)0;
                                    # 3 "sLtEqNode_clone"
                                    # 2 "sLtEqNode_clone"
                                    if(_if_conditional505=self==(void*)0,                                    _if_conditional505) {
                                        # 2 "sLtEqNode_clone"
                                        __result322__ = __result_obj__ = (void*)0;
                                        return __result322__;
                                    }
                                    # 3 "sLtEqNode_clone"
                                    result_284=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value525=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "sLtEqNode"))));
                                    come_call_finalizer2(sLtEqNode_finalize,right_value525, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sLtEqNode_clone"
                                    # 4 "sLtEqNode_clone"
                                    if(_if_conditional506=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional506) {
                                        # 4 "sLtEqNode_clone"
                                        __dec_obj227=result_284->mLeft;
                                        result_284->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value526=sNode_clone(self->mLeft))));
                                        if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count2(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value526) { right_value526 = come_decrement_ref_count2(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 6 "sLtEqNode_clone"
                                    # 5 "sLtEqNode_clone"
                                    if(_if_conditional507=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional507) {
                                        # 5 "sLtEqNode_clone"
                                        __dec_obj228=result_284->mRight;
                                        result_284->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value527=sNode_clone(self->mRight))));
                                        if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count2(__dec_obj228, ((struct sNode*)__dec_obj228)->finalize, ((struct sNode*)__dec_obj228)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value527) { right_value527 = come_decrement_ref_count2(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 7 "sLtEqNode_clone"
                                    # 6 "sLtEqNode_clone"
                                    if(_if_conditional508=self!=((void*)0),                                    _if_conditional508) {
                                        # 6 "sLtEqNode_clone"
                                        result_284->mQuote=self->mQuote;
                                    }
                                    # 8 "sLtEqNode_clone"
                                    # 7 "sLtEqNode_clone"
                                    if(_if_conditional509=self!=((void*)0),                                    _if_conditional509) {
                                        # 7 "sLtEqNode_clone"
                                        result_284->sline=self->sline;
                                    }
                                    # 9 "sLtEqNode_clone"
                                    # 8 "sLtEqNode_clone"
                                    if(_if_conditional510=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional510) {
                                        # 8 "sLtEqNode_clone"
                                        __dec_obj229=result_284->sname;
                                        result_284->sname=(char*)come_increment_ref_count(((char*)(right_value528=string_clone(self->sname))));
                                        __dec_obj229 = come_decrement_ref_count2(__dec_obj229, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value528 = come_decrement_ref_count2(right_value528, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sLtEqNode_clone"
                                    __result323__ = __result_obj__ = result_284;
                                    come_call_finalizer2(sLtEqNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result323__;
                                    come_call_finalizer2(sLtEqNode_finalize,result_284, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional512;
_Bool _if_conditional513;
_Bool _if_conditional514;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sGtNode_finalize"
                                        # 0 "sGtNode_finalize"
                                        if(_if_conditional512=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional512) {
                                            # 0 "sGtNode_finalize"
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 2 "sGtNode_finalize"
                                        # 1 "sGtNode_finalize"
                                        if(_if_conditional513=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional513) {
                                            # 1 "sGtNode_finalize"
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sGtNode_finalize"
                                        # 2 "sGtNode_finalize"
                                        if(_if_conditional514=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional514) {
                                            # 2 "sGtNode_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool _if_conditional515;
struct sGtNode* __result325__;
void* right_value533;
struct sGtNode* result_286;
_Bool _if_conditional516;
void* right_value534;
struct sNode* __dec_obj230;
_Bool _if_conditional517;
void* right_value535;
struct sNode* __dec_obj231;
_Bool _if_conditional518;
_Bool _if_conditional519;
_Bool _if_conditional520;
void* right_value536;
char* __dec_obj232;
struct sGtNode* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
right_value533 = (void*)0;
memset(&result_286, 0, sizeof(struct sGtNode*));
right_value534 = (void*)0;
right_value535 = (void*)0;
right_value536 = (void*)0;
                                        # 3 "sGtNode_clone"
                                        # 2 "sGtNode_clone"
                                        if(_if_conditional515=self==(void*)0,                                        _if_conditional515) {
                                            # 2 "sGtNode_clone"
                                            __result325__ = __result_obj__ = (void*)0;
                                            return __result325__;
                                        }
                                        # 3 "sGtNode_clone"
                                        result_286=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value533=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "sGtNode"))));
                                        come_call_finalizer2(sGtNode_finalize,right_value533, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sGtNode_clone"
                                        # 4 "sGtNode_clone"
                                        if(_if_conditional516=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional516) {
                                            # 4 "sGtNode_clone"
                                            __dec_obj230=result_286->mLeft;
                                            result_286->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value534=sNode_clone(self->mLeft))));
                                            if(__dec_obj230) { __dec_obj230 = come_decrement_ref_count2(__dec_obj230, ((struct sNode*)__dec_obj230)->finalize, ((struct sNode*)__dec_obj230)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value534) { right_value534 = come_decrement_ref_count2(right_value534, ((struct sNode*)right_value534)->finalize, ((struct sNode*)right_value534)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 6 "sGtNode_clone"
                                        # 5 "sGtNode_clone"
                                        if(_if_conditional517=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional517) {
                                            # 5 "sGtNode_clone"
                                            __dec_obj231=result_286->mRight;
                                            result_286->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value535=sNode_clone(self->mRight))));
                                            if(__dec_obj231) { __dec_obj231 = come_decrement_ref_count2(__dec_obj231, ((struct sNode*)__dec_obj231)->finalize, ((struct sNode*)__dec_obj231)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value535) { right_value535 = come_decrement_ref_count2(right_value535, ((struct sNode*)right_value535)->finalize, ((struct sNode*)right_value535)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 7 "sGtNode_clone"
                                        # 6 "sGtNode_clone"
                                        if(_if_conditional518=self!=((void*)0),                                        _if_conditional518) {
                                            # 6 "sGtNode_clone"
                                            result_286->mQuote=self->mQuote;
                                        }
                                        # 8 "sGtNode_clone"
                                        # 7 "sGtNode_clone"
                                        if(_if_conditional519=self!=((void*)0),                                        _if_conditional519) {
                                            # 7 "sGtNode_clone"
                                            result_286->sline=self->sline;
                                        }
                                        # 9 "sGtNode_clone"
                                        # 8 "sGtNode_clone"
                                        if(_if_conditional520=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional520) {
                                            # 8 "sGtNode_clone"
                                            __dec_obj232=result_286->sname;
                                            result_286->sname=(char*)come_increment_ref_count(((char*)(right_value536=string_clone(self->sname))));
                                            __dec_obj232 = come_decrement_ref_count2(__dec_obj232, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value536 = come_decrement_ref_count2(right_value536, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 9 "sGtNode_clone"
                                        __result326__ = __result_obj__ = result_286;
                                        come_call_finalizer2(sGtNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result326__;
                                        come_call_finalizer2(sGtNode_finalize,result_286, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional522;
_Bool _if_conditional523;
_Bool _if_conditional524;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sLtNode_finalize"
                                            # 0 "sLtNode_finalize"
                                            if(_if_conditional522=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional522) {
                                                # 0 "sLtNode_finalize"
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 2 "sLtNode_finalize"
                                            # 1 "sLtNode_finalize"
                                            if(_if_conditional523=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional523) {
                                                # 1 "sLtNode_finalize"
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 3 "sLtNode_finalize"
                                            # 2 "sLtNode_finalize"
                                            if(_if_conditional524=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional524) {
                                                # 2 "sLtNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool _if_conditional525;
struct sLtNode* __result328__;
void* right_value541;
struct sLtNode* result_288;
_Bool _if_conditional526;
void* right_value542;
struct sNode* __dec_obj233;
_Bool _if_conditional527;
void* right_value543;
struct sNode* __dec_obj234;
_Bool _if_conditional528;
_Bool _if_conditional529;
_Bool _if_conditional530;
void* right_value544;
char* __dec_obj235;
struct sLtNode* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
right_value541 = (void*)0;
memset(&result_288, 0, sizeof(struct sLtNode*));
right_value542 = (void*)0;
right_value543 = (void*)0;
right_value544 = (void*)0;
                                            # 3 "sLtNode_clone"
                                            # 2 "sLtNode_clone"
                                            if(_if_conditional525=self==(void*)0,                                            _if_conditional525) {
                                                # 2 "sLtNode_clone"
                                                __result328__ = __result_obj__ = (void*)0;
                                                return __result328__;
                                            }
                                            # 3 "sLtNode_clone"
                                            result_288=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value541=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "sLtNode"))));
                                            come_call_finalizer2(sLtNode_finalize,right_value541, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sLtNode_clone"
                                            # 4 "sLtNode_clone"
                                            if(_if_conditional526=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional526) {
                                                # 4 "sLtNode_clone"
                                                __dec_obj233=result_288->mLeft;
                                                result_288->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value542=sNode_clone(self->mLeft))));
                                                if(__dec_obj233) { __dec_obj233 = come_decrement_ref_count2(__dec_obj233, ((struct sNode*)__dec_obj233)->finalize, ((struct sNode*)__dec_obj233)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value542) { right_value542 = come_decrement_ref_count2(right_value542, ((struct sNode*)right_value542)->finalize, ((struct sNode*)right_value542)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 6 "sLtNode_clone"
                                            # 5 "sLtNode_clone"
                                            if(_if_conditional527=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional527) {
                                                # 5 "sLtNode_clone"
                                                __dec_obj234=result_288->mRight;
                                                result_288->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value543=sNode_clone(self->mRight))));
                                                if(__dec_obj234) { __dec_obj234 = come_decrement_ref_count2(__dec_obj234, ((struct sNode*)__dec_obj234)->finalize, ((struct sNode*)__dec_obj234)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value543) { right_value543 = come_decrement_ref_count2(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 7 "sLtNode_clone"
                                            # 6 "sLtNode_clone"
                                            if(_if_conditional528=self!=((void*)0),                                            _if_conditional528) {
                                                # 6 "sLtNode_clone"
                                                result_288->mQuote=self->mQuote;
                                            }
                                            # 8 "sLtNode_clone"
                                            # 7 "sLtNode_clone"
                                            if(_if_conditional529=self!=((void*)0),                                            _if_conditional529) {
                                                # 7 "sLtNode_clone"
                                                result_288->sline=self->sline;
                                            }
                                            # 9 "sLtNode_clone"
                                            # 8 "sLtNode_clone"
                                            if(_if_conditional530=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional530) {
                                                # 8 "sLtNode_clone"
                                                __dec_obj235=result_288->sname;
                                                result_288->sname=(char*)come_increment_ref_count(((char*)(right_value544=string_clone(self->sname))));
                                                __dec_obj235 = come_decrement_ref_count2(__dec_obj235, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value544 = come_decrement_ref_count2(right_value544, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 9 "sLtNode_clone"
                                            __result329__ = __result_obj__ = result_288;
                                            come_call_finalizer2(sLtNode_finalize,result_288, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result329__;
                                            come_call_finalizer2(sLtNode_finalize,result_288, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
void* right_value546;
struct sNode* node_289;
_Bool _while_condtional14;
_Bool _if_conditional531;
void* right_value547;
struct sNode* right_290;
void* right_value548;
void* right_value549;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* right_value554;
struct sNode* __result334__;
_Bool _if_conditional541;
void* right_value555;
struct sNode* right_292;
void* right_value556;
void* right_value557;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* right_value562;
struct sNode* __result337__;
_Bool _if_conditional551;
void* right_value563;
struct sNode* right_294;
void* right_value564;
void* right_value565;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* right_value570;
struct sNode* __result340__;
_Bool _if_conditional561;
void* right_value571;
struct sNode* right_296;
void* right_value572;
void* right_value573;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* right_value578;
struct sNode* __result343__;
_Bool _if_conditional571;
void* right_value579;
struct sNode* right_298;
void* right_value580;
void* right_value581;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* right_value586;
struct sNode* __result346__;
_Bool _if_conditional581;
void* right_value587;
struct sNode* right_300;
void* right_value588;
void* right_value589;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* right_value594;
struct sNode* __result349__;
_Bool _if_conditional591;
void* right_value595;
struct sNode* right_302;
void* right_value596;
void* right_value597;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* right_value602;
struct sNode* __result352__;
_Bool _if_conditional601;
void* right_value603;
struct sNode* right_304;
void* right_value604;
void* right_value605;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* right_value610;
struct sNode* __result355__;
struct sNode* __result356__;
memset(&__result_obj__, 0, sizeof(void*));
right_value546 = (void*)0;
memset(&node_289, 0, sizeof(struct sNode*));
right_value547 = (void*)0;
memset(&right_290, 0, sizeof(struct sNode*));
right_value548 = (void*)0;
right_value549 = (void*)0;
right_value554 = (void*)0;
right_value555 = (void*)0;
memset(&right_292, 0, sizeof(struct sNode*));
right_value556 = (void*)0;
right_value557 = (void*)0;
right_value562 = (void*)0;
right_value563 = (void*)0;
memset(&right_294, 0, sizeof(struct sNode*));
right_value564 = (void*)0;
right_value565 = (void*)0;
right_value570 = (void*)0;
right_value571 = (void*)0;
memset(&right_296, 0, sizeof(struct sNode*));
right_value572 = (void*)0;
right_value573 = (void*)0;
right_value578 = (void*)0;
right_value579 = (void*)0;
memset(&right_298, 0, sizeof(struct sNode*));
right_value580 = (void*)0;
right_value581 = (void*)0;
right_value586 = (void*)0;
right_value587 = (void*)0;
memset(&right_300, 0, sizeof(struct sNode*));
right_value588 = (void*)0;
right_value589 = (void*)0;
right_value594 = (void*)0;
right_value595 = (void*)0;
memset(&right_302, 0, sizeof(struct sNode*));
right_value596 = (void*)0;
right_value597 = (void*)0;
right_value602 = (void*)0;
right_value603 = (void*)0;
memset(&right_304, 0, sizeof(struct sNode*));
right_value604 = (void*)0;
right_value605 = (void*)0;
right_value610 = (void*)0;
    # 2448 "13op.c"
    parse_sharp_v5(info);
    # 2450 "13op.c"
    node_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value546=comparison_exp(info))));
    if(right_value546) { right_value546 = come_decrement_ref_count2(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2454 "13op.c"
    parse_sharp_v5(info);
    # 2524 "13op.c"
    while(_while_condtional14=*info->p,    _while_condtional14) {
        # 2522 "13op.c"
        # 2455 "13op.c"
        if(_if_conditional531=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional531) {
            # 2456 "13op.c"
            info->p+=3;
            # 2457 "13op.c"
            skip_spaces_and_lf(info);
            # 2459 "13op.c"
            right_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value547=eq_exp(info))));
            if(right_value547) { right_value547 = come_decrement_ref_count2(right_value547, ((struct sNode*)right_value547)->finalize, ((struct sNode*)right_value547)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2461 "13op.c"
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2461, "struct sNode");
            _inf_obj_value25=come_increment_ref_count(((struct sEq2Node*)(right_value549=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value548=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2461, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_290),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sEq2Node_sline;
            _inf_value25->sname=(void*)sEq2Node_sname;
            _inf_value25->terminated=(void*)sEq2Node_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result334__ = __result_obj__ = ((struct sNode*)(right_value554=_inf_value25));
            if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sEq2Node_finalize,right_value548, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sEq2Node_finalize,right_value549, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value554) { right_value554 = come_decrement_ref_count2(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result334__;
            if(right_290) { right_290 = come_decrement_ref_count2(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2522 "13op.c"
            # 2463 "13op.c"
            if(_if_conditional541=*info->p==61&&*(info->p+1)==61,            _if_conditional541) {
                # 2464 "13op.c"
                info->p+=2;
                # 2465 "13op.c"
                skip_spaces_and_lf(info);
                # 2467 "13op.c"
                right_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value555=eq_exp(info))));
                if(right_value555) { right_value555 = come_decrement_ref_count2(right_value555, ((struct sNode*)right_value555)->finalize, ((struct sNode*)right_value555)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2469 "13op.c"
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2469, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sEqNode*)(right_value557=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value556=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2469, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_292),(_Bool)0,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sEqNode_finalize;
                _inf_value26->clone=(void*)sEqNode_clone;
                _inf_value26->compile=(void*)sEqNode_compile;
                _inf_value26->sline=(void*)sEqNode_sline;
                _inf_value26->sname=(void*)sEqNode_sname;
                _inf_value26->terminated=(void*)sEqNode_terminated;
                _inf_value26->kind=(void*)sEqNode_kind;
                __result337__ = __result_obj__ = ((struct sNode*)(right_value562=_inf_value26));
                if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sEqNode_finalize,right_value556, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sEqNode_finalize,right_value557, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value562) { right_value562 = come_decrement_ref_count2(right_value562, ((struct sNode*)right_value562)->finalize, ((struct sNode*)right_value562)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result337__;
                if(right_292) { right_292 = come_decrement_ref_count2(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2522 "13op.c"
                # 2471 "13op.c"
                if(_if_conditional551=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional551) {
                    # 2472 "13op.c"
                    info->p+=3;
                    # 2473 "13op.c"
                    skip_spaces_and_lf(info);
                    # 2475 "13op.c"
                    right_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value563=eq_exp(info))));
                    if(right_value563) { right_value563 = come_decrement_ref_count2(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    # 2477 "13op.c"
                    _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2477, "struct sNode");
                    _inf_obj_value27=come_increment_ref_count(((struct sNotEq2Node*)(right_value565=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value564=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2477, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_294),(_Bool)0,info))));
                    _inf_value27->_protocol_obj=_inf_obj_value27;
                    _inf_value27->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value27->clone=(void*)sNotEq2Node_clone;
                    _inf_value27->compile=(void*)sNotEq2Node_compile;
                    _inf_value27->sline=(void*)sNotEq2Node_sline;
                    _inf_value27->sname=(void*)sNotEq2Node_sname;
                    _inf_value27->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value27->kind=(void*)sNotEq2Node_kind;
                    __result340__ = __result_obj__ = ((struct sNode*)(right_value570=_inf_value27));
                    if(right_294) { right_294 = come_decrement_ref_count2(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    come_call_finalizer2(sNotEq2Node_finalize,right_value564, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    come_call_finalizer2(sNotEq2Node_finalize,right_value565, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    if(right_value570) { right_value570 = come_decrement_ref_count2(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    return __result340__;
                    if(right_294) { right_294 = come_decrement_ref_count2(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                else {
                    # 2522 "13op.c"
                    # 2479 "13op.c"
                    if(_if_conditional561=*info->p==33&&*(info->p+1)==61,                    _if_conditional561) {
                        # 2480 "13op.c"
                        info->p+=2;
                        # 2481 "13op.c"
                        skip_spaces_and_lf(info);
                        # 2483 "13op.c"
                        right_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value571=eq_exp(info))));
                        if(right_value571) { right_value571 = come_decrement_ref_count2(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        # 2485 "13op.c"
                        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2485, "struct sNode");
                        _inf_obj_value28=come_increment_ref_count(((struct sNotEqNode*)(right_value573=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value572=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2485, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_296),(_Bool)0,info))));
                        _inf_value28->_protocol_obj=_inf_obj_value28;
                        _inf_value28->finalize=(void*)sNotEqNode_finalize;
                        _inf_value28->clone=(void*)sNotEqNode_clone;
                        _inf_value28->compile=(void*)sNotEqNode_compile;
                        _inf_value28->sline=(void*)sNotEqNode_sline;
                        _inf_value28->sname=(void*)sNotEqNode_sname;
                        _inf_value28->terminated=(void*)sNotEqNode_terminated;
                        _inf_value28->kind=(void*)sNotEqNode_kind;
                        __result343__ = __result_obj__ = ((struct sNode*)(right_value578=_inf_value28));
                        if(right_296) { right_296 = come_decrement_ref_count2(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        come_call_finalizer2(sNotEqNode_finalize,right_value572, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        come_call_finalizer2(sNotEqNode_finalize,right_value573, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                        if(right_value578) { right_value578 = come_decrement_ref_count2(right_value578, ((struct sNode*)right_value578)->finalize, ((struct sNode*)right_value578)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                        return __result343__;
                        if(right_296) { right_296 = come_decrement_ref_count2(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    else {
                        # 2522 "13op.c"
                        # 2487 "13op.c"
                        if(_if_conditional571=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional571) {
                            # 2488 "13op.c"
                            info->p+=4;
                            # 2489 "13op.c"
                            skip_spaces_and_lf(info);
                            # 2491 "13op.c"
                            right_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value579=eq_exp(info))));
                            if(right_value579) { right_value579 = come_decrement_ref_count2(right_value579, ((struct sNode*)right_value579)->finalize, ((struct sNode*)right_value579)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            # 2493 "13op.c"
                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2493, "struct sNode");
                            _inf_obj_value29=come_increment_ref_count(((struct sEq2Node*)(right_value581=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value580=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2493, "sEq2Node")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_298),(_Bool)1,info))));
                            _inf_value29->_protocol_obj=_inf_obj_value29;
                            _inf_value29->finalize=(void*)sEq2Node_finalize;
                            _inf_value29->clone=(void*)sEq2Node_clone;
                            _inf_value29->compile=(void*)sEq2Node_compile;
                            _inf_value29->sline=(void*)sEq2Node_sline;
                            _inf_value29->sname=(void*)sEq2Node_sname;
                            _inf_value29->terminated=(void*)sEq2Node_terminated;
                            _inf_value29->kind=(void*)sEq2Node_kind;
                            __result346__ = __result_obj__ = ((struct sNode*)(right_value586=_inf_value29));
                            if(right_298) { right_298 = come_decrement_ref_count2(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            come_call_finalizer2(sEq2Node_finalize,right_value580, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            come_call_finalizer2(sEq2Node_finalize,right_value581, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                            if(right_value586) { right_value586 = come_decrement_ref_count2(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                            return __result346__;
                            if(right_298) { right_298 = come_decrement_ref_count2(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0, (void*)0); } 
                        }
                        else {
                            # 2522 "13op.c"
                            # 2495 "13op.c"
                            if(_if_conditional581=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional581) {
                                # 2496 "13op.c"
                                info->p+=3;
                                # 2497 "13op.c"
                                skip_spaces_and_lf(info);
                                # 2499 "13op.c"
                                right_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value587=eq_exp(info))));
                                if(right_value587) { right_value587 = come_decrement_ref_count2(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                # 2501 "13op.c"
                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2501, "struct sNode");
                                _inf_obj_value30=come_increment_ref_count(((struct sEqNode*)(right_value589=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value588=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2501, "sEqNode")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_300),(_Bool)1,info))));
                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                _inf_value30->finalize=(void*)sEqNode_finalize;
                                _inf_value30->clone=(void*)sEqNode_clone;
                                _inf_value30->compile=(void*)sEqNode_compile;
                                _inf_value30->sline=(void*)sEqNode_sline;
                                _inf_value30->sname=(void*)sEqNode_sname;
                                _inf_value30->terminated=(void*)sEqNode_terminated;
                                _inf_value30->kind=(void*)sEqNode_kind;
                                __result349__ = __result_obj__ = ((struct sNode*)(right_value594=_inf_value30));
                                if(right_300) { right_300 = come_decrement_ref_count2(right_300, ((struct sNode*)right_300)->finalize, ((struct sNode*)right_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                come_call_finalizer2(sEqNode_finalize,right_value588, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                come_call_finalizer2(sEqNode_finalize,right_value589, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                if(right_value594) { right_value594 = come_decrement_ref_count2(right_value594, ((struct sNode*)right_value594)->finalize, ((struct sNode*)right_value594)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                return __result349__;
                                if(right_300) { right_300 = come_decrement_ref_count2(right_300, ((struct sNode*)right_300)->finalize, ((struct sNode*)right_300)->_protocol_obj, 0, 0, 0, (void*)0); } 
                            }
                            else {
                                # 2522 "13op.c"
                                # 2503 "13op.c"
                                if(_if_conditional591=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional591) {
                                    # 2504 "13op.c"
                                    info->p+=4;
                                    # 2505 "13op.c"
                                    skip_spaces_and_lf(info);
                                    # 2507 "13op.c"
                                    right_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value595=eq_exp(info))));
                                    if(right_value595) { right_value595 = come_decrement_ref_count2(right_value595, ((struct sNode*)right_value595)->finalize, ((struct sNode*)right_value595)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    # 2509 "13op.c"
                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2509, "struct sNode");
                                    _inf_obj_value31=come_increment_ref_count(((struct sNotEq2Node*)(right_value597=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value596=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2509, "sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_302),(_Bool)1,info))));
                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                    _inf_value31->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value31->clone=(void*)sNotEq2Node_clone;
                                    _inf_value31->compile=(void*)sNotEq2Node_compile;
                                    _inf_value31->sline=(void*)sNotEq2Node_sline;
                                    _inf_value31->sname=(void*)sNotEq2Node_sname;
                                    _inf_value31->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value31->kind=(void*)sNotEq2Node_kind;
                                    __result352__ = __result_obj__ = ((struct sNode*)(right_value602=_inf_value31));
                                    if(right_302) { right_302 = come_decrement_ref_count2(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    come_call_finalizer2(sNotEq2Node_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    come_call_finalizer2(sNotEq2Node_finalize,right_value597, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    if(right_value602) { right_value602 = come_decrement_ref_count2(right_value602, ((struct sNode*)right_value602)->finalize, ((struct sNode*)right_value602)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    return __result352__;
                                    if(right_302) { right_302 = come_decrement_ref_count2(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                else {
                                    # 2522 "13op.c"
                                    # 2511 "13op.c"
                                    if(_if_conditional601=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional601) {
                                        # 2512 "13op.c"
                                        info->p+=3;
                                        # 2513 "13op.c"
                                        skip_spaces_and_lf(info);
                                        # 2515 "13op.c"
                                        right_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value603=eq_exp(info))));
                                        if(right_value603) { right_value603 = come_decrement_ref_count2(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        # 2517 "13op.c"
                                        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2517, "struct sNode");
                                        _inf_obj_value32=come_increment_ref_count(((struct sNotEqNode*)(right_value605=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value604=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2517, "sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_289),(struct sNode*)come_increment_ref_count(right_304),(_Bool)1,info))));
                                        _inf_value32->_protocol_obj=_inf_obj_value32;
                                        _inf_value32->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value32->clone=(void*)sNotEqNode_clone;
                                        _inf_value32->compile=(void*)sNotEqNode_compile;
                                        _inf_value32->sline=(void*)sNotEqNode_sline;
                                        _inf_value32->sname=(void*)sNotEqNode_sname;
                                        _inf_value32->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value32->kind=(void*)sNotEqNode_kind;
                                        __result355__ = __result_obj__ = ((struct sNode*)(right_value610=_inf_value32));
                                        if(right_304) { right_304 = come_decrement_ref_count2(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        come_call_finalizer2(sNotEqNode_finalize,right_value604, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        come_call_finalizer2(sNotEqNode_finalize,right_value605, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        if(right_value610) { right_value610 = come_decrement_ref_count2(right_value610, ((struct sNode*)right_value610)->finalize, ((struct sNode*)right_value610)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        return __result355__;
                                        if(right_304) { right_304 = come_decrement_ref_count2(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    else {
                                        # 2520 "13op.c"
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
    # 2524 "13op.c"
    parse_sharp_v5(info);
    # 2526 "13op.c"
    __result356__ = __result_obj__ = node_289;
    if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result356__;
    if(node_289) { node_289 = come_decrement_ref_count2(node_289, ((struct sNode*)node_289)->finalize, ((struct sNode*)node_289)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional572;
_Bool _if_conditional573;
_Bool _if_conditional574;
memset(&__result_obj__, 0, sizeof(void*));
                                # 1 "sEq2Node_finalize"
                                # 0 "sEq2Node_finalize"
                                if(_if_conditional572=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional572) {
                                    # 0 "sEq2Node_finalize"
                                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 2 "sEq2Node_finalize"
                                # 1 "sEq2Node_finalize"
                                if(_if_conditional573=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional573) {
                                    # 1 "sEq2Node_finalize"
                                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                }
                                # 3 "sEq2Node_finalize"
                                # 2 "sEq2Node_finalize"
                                if(_if_conditional574=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional574) {
                                    # 2 "sEq2Node_finalize"
                                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool _if_conditional575;
struct sEq2Node* __result344__;
void* right_value582;
struct sEq2Node* result_299;
_Bool _if_conditional576;
void* right_value583;
struct sNode* __dec_obj248;
_Bool _if_conditional577;
void* right_value584;
struct sNode* __dec_obj249;
_Bool _if_conditional578;
_Bool _if_conditional579;
_Bool _if_conditional580;
void* right_value585;
char* __dec_obj250;
struct sEq2Node* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
right_value582 = (void*)0;
memset(&result_299, 0, sizeof(struct sEq2Node*));
right_value583 = (void*)0;
right_value584 = (void*)0;
right_value585 = (void*)0;
                                # 3 "sEq2Node_clone"
                                # 2 "sEq2Node_clone"
                                if(_if_conditional575=self==(void*)0,                                _if_conditional575) {
                                    # 2 "sEq2Node_clone"
                                    __result344__ = __result_obj__ = (void*)0;
                                    return __result344__;
                                }
                                # 3 "sEq2Node_clone"
                                result_299=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value582=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "sEq2Node"))));
                                come_call_finalizer2(sEq2Node_finalize,right_value582, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                # 5 "sEq2Node_clone"
                                # 4 "sEq2Node_clone"
                                if(_if_conditional576=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional576) {
                                    # 4 "sEq2Node_clone"
                                    __dec_obj248=result_299->mLeft;
                                    result_299->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value583=sNode_clone(self->mLeft))));
                                    if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count2(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value583) { right_value583 = come_decrement_ref_count2(right_value583, ((struct sNode*)right_value583)->finalize, ((struct sNode*)right_value583)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 6 "sEq2Node_clone"
                                # 5 "sEq2Node_clone"
                                if(_if_conditional577=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional577) {
                                    # 5 "sEq2Node_clone"
                                    __dec_obj249=result_299->mRight;
                                    result_299->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value584=sNode_clone(self->mRight))));
                                    if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count2(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0, (void*)0); }
                                    if(right_value584) { right_value584 = come_decrement_ref_count2(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                }
                                # 7 "sEq2Node_clone"
                                # 6 "sEq2Node_clone"
                                if(_if_conditional578=self!=((void*)0),                                _if_conditional578) {
                                    # 6 "sEq2Node_clone"
                                    result_299->mQuote=self->mQuote;
                                }
                                # 8 "sEq2Node_clone"
                                # 7 "sEq2Node_clone"
                                if(_if_conditional579=self!=((void*)0),                                _if_conditional579) {
                                    # 7 "sEq2Node_clone"
                                    result_299->sline=self->sline;
                                }
                                # 9 "sEq2Node_clone"
                                # 8 "sEq2Node_clone"
                                if(_if_conditional580=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional580) {
                                    # 8 "sEq2Node_clone"
                                    __dec_obj250=result_299->sname;
                                    result_299->sname=(char*)come_increment_ref_count(((char*)(right_value585=string_clone(self->sname))));
                                    __dec_obj250 = come_decrement_ref_count2(__dec_obj250, (void*)0, (void*)0, 0,0,0, (void*)0);
                                    right_value585 = come_decrement_ref_count2(right_value585, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                }
                                # 9 "sEq2Node_clone"
                                __result345__ = __result_obj__ = result_299;
                                come_call_finalizer2(sEq2Node_finalize,result_299, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                return __result345__;
                                come_call_finalizer2(sEq2Node_finalize,result_299, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional582;
_Bool _if_conditional583;
_Bool _if_conditional584;
memset(&__result_obj__, 0, sizeof(void*));
                                    # 1 "sEqNode_finalize"
                                    # 0 "sEqNode_finalize"
                                    if(_if_conditional582=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional582) {
                                        # 0 "sEqNode_finalize"
                                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 2 "sEqNode_finalize"
                                    # 1 "sEqNode_finalize"
                                    if(_if_conditional583=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional583) {
                                        # 1 "sEqNode_finalize"
                                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                    }
                                    # 3 "sEqNode_finalize"
                                    # 2 "sEqNode_finalize"
                                    if(_if_conditional584=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional584) {
                                        # 2 "sEqNode_finalize"
                                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool _if_conditional585;
struct sEqNode* __result347__;
void* right_value590;
struct sEqNode* result_301;
_Bool _if_conditional586;
void* right_value591;
struct sNode* __dec_obj251;
_Bool _if_conditional587;
void* right_value592;
struct sNode* __dec_obj252;
_Bool _if_conditional588;
_Bool _if_conditional589;
_Bool _if_conditional590;
void* right_value593;
char* __dec_obj253;
struct sEqNode* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
right_value590 = (void*)0;
memset(&result_301, 0, sizeof(struct sEqNode*));
right_value591 = (void*)0;
right_value592 = (void*)0;
right_value593 = (void*)0;
                                    # 3 "sEqNode_clone"
                                    # 2 "sEqNode_clone"
                                    if(_if_conditional585=self==(void*)0,                                    _if_conditional585) {
                                        # 2 "sEqNode_clone"
                                        __result347__ = __result_obj__ = (void*)0;
                                        return __result347__;
                                    }
                                    # 3 "sEqNode_clone"
                                    result_301=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value590=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "sEqNode"))));
                                    come_call_finalizer2(sEqNode_finalize,right_value590, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                    # 5 "sEqNode_clone"
                                    # 4 "sEqNode_clone"
                                    if(_if_conditional586=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional586) {
                                        # 4 "sEqNode_clone"
                                        __dec_obj251=result_301->mLeft;
                                        result_301->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value591=sNode_clone(self->mLeft))));
                                        if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count2(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value591) { right_value591 = come_decrement_ref_count2(right_value591, ((struct sNode*)right_value591)->finalize, ((struct sNode*)right_value591)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 6 "sEqNode_clone"
                                    # 5 "sEqNode_clone"
                                    if(_if_conditional587=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional587) {
                                        # 5 "sEqNode_clone"
                                        __dec_obj252=result_301->mRight;
                                        result_301->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value592=sNode_clone(self->mRight))));
                                        if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count2(__dec_obj252, ((struct sNode*)__dec_obj252)->finalize, ((struct sNode*)__dec_obj252)->_protocol_obj, 0,0,0, (void*)0); }
                                        if(right_value592) { right_value592 = come_decrement_ref_count2(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                    }
                                    # 7 "sEqNode_clone"
                                    # 6 "sEqNode_clone"
                                    if(_if_conditional588=self!=((void*)0),                                    _if_conditional588) {
                                        # 6 "sEqNode_clone"
                                        result_301->mQuote=self->mQuote;
                                    }
                                    # 8 "sEqNode_clone"
                                    # 7 "sEqNode_clone"
                                    if(_if_conditional589=self!=((void*)0),                                    _if_conditional589) {
                                        # 7 "sEqNode_clone"
                                        result_301->sline=self->sline;
                                    }
                                    # 9 "sEqNode_clone"
                                    # 8 "sEqNode_clone"
                                    if(_if_conditional590=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional590) {
                                        # 8 "sEqNode_clone"
                                        __dec_obj253=result_301->sname;
                                        result_301->sname=(char*)come_increment_ref_count(((char*)(right_value593=string_clone(self->sname))));
                                        __dec_obj253 = come_decrement_ref_count2(__dec_obj253, (void*)0, (void*)0, 0,0,0, (void*)0);
                                        right_value593 = come_decrement_ref_count2(right_value593, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                    }
                                    # 9 "sEqNode_clone"
                                    __result348__ = __result_obj__ = result_301;
                                    come_call_finalizer2(sEqNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                    return __result348__;
                                    come_call_finalizer2(sEqNode_finalize,result_301, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional592;
_Bool _if_conditional593;
_Bool _if_conditional594;
memset(&__result_obj__, 0, sizeof(void*));
                                        # 1 "sNotEq2Node_finalize"
                                        # 0 "sNotEq2Node_finalize"
                                        if(_if_conditional592=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional592) {
                                            # 0 "sNotEq2Node_finalize"
                                            if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 2 "sNotEq2Node_finalize"
                                        # 1 "sNotEq2Node_finalize"
                                        if(_if_conditional593=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional593) {
                                            # 1 "sNotEq2Node_finalize"
                                            if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                        }
                                        # 3 "sNotEq2Node_finalize"
                                        # 2 "sNotEq2Node_finalize"
                                        if(_if_conditional594=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional594) {
                                            # 2 "sNotEq2Node_finalize"
                                            self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool _if_conditional595;
struct sNotEq2Node* __result350__;
void* right_value598;
struct sNotEq2Node* result_303;
_Bool _if_conditional596;
void* right_value599;
struct sNode* __dec_obj254;
_Bool _if_conditional597;
void* right_value600;
struct sNode* __dec_obj255;
_Bool _if_conditional598;
_Bool _if_conditional599;
_Bool _if_conditional600;
void* right_value601;
char* __dec_obj256;
struct sNotEq2Node* __result351__;
memset(&__result_obj__, 0, sizeof(void*));
right_value598 = (void*)0;
memset(&result_303, 0, sizeof(struct sNotEq2Node*));
right_value599 = (void*)0;
right_value600 = (void*)0;
right_value601 = (void*)0;
                                        # 3 "sNotEq2Node_clone"
                                        # 2 "sNotEq2Node_clone"
                                        if(_if_conditional595=self==(void*)0,                                        _if_conditional595) {
                                            # 2 "sNotEq2Node_clone"
                                            __result350__ = __result_obj__ = (void*)0;
                                            return __result350__;
                                        }
                                        # 3 "sNotEq2Node_clone"
                                        result_303=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value598=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "sNotEq2Node"))));
                                        come_call_finalizer2(sNotEq2Node_finalize,right_value598, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                        # 5 "sNotEq2Node_clone"
                                        # 4 "sNotEq2Node_clone"
                                        if(_if_conditional596=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional596) {
                                            # 4 "sNotEq2Node_clone"
                                            __dec_obj254=result_303->mLeft;
                                            result_303->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value599=sNode_clone(self->mLeft))));
                                            if(__dec_obj254) { __dec_obj254 = come_decrement_ref_count2(__dec_obj254, ((struct sNode*)__dec_obj254)->finalize, ((struct sNode*)__dec_obj254)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value599) { right_value599 = come_decrement_ref_count2(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 6 "sNotEq2Node_clone"
                                        # 5 "sNotEq2Node_clone"
                                        if(_if_conditional597=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional597) {
                                            # 5 "sNotEq2Node_clone"
                                            __dec_obj255=result_303->mRight;
                                            result_303->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value600=sNode_clone(self->mRight))));
                                            if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count2(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0, (void*)0); }
                                            if(right_value600) { right_value600 = come_decrement_ref_count2(right_value600, ((struct sNode*)right_value600)->finalize, ((struct sNode*)right_value600)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                        }
                                        # 7 "sNotEq2Node_clone"
                                        # 6 "sNotEq2Node_clone"
                                        if(_if_conditional598=self!=((void*)0),                                        _if_conditional598) {
                                            # 6 "sNotEq2Node_clone"
                                            result_303->mQuote=self->mQuote;
                                        }
                                        # 8 "sNotEq2Node_clone"
                                        # 7 "sNotEq2Node_clone"
                                        if(_if_conditional599=self!=((void*)0),                                        _if_conditional599) {
                                            # 7 "sNotEq2Node_clone"
                                            result_303->sline=self->sline;
                                        }
                                        # 9 "sNotEq2Node_clone"
                                        # 8 "sNotEq2Node_clone"
                                        if(_if_conditional600=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional600) {
                                            # 8 "sNotEq2Node_clone"
                                            __dec_obj256=result_303->sname;
                                            result_303->sname=(char*)come_increment_ref_count(((char*)(right_value601=string_clone(self->sname))));
                                            __dec_obj256 = come_decrement_ref_count2(__dec_obj256, (void*)0, (void*)0, 0,0,0, (void*)0);
                                            right_value601 = come_decrement_ref_count2(right_value601, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                        }
                                        # 9 "sNotEq2Node_clone"
                                        __result351__ = __result_obj__ = result_303;
                                        come_call_finalizer2(sNotEq2Node_finalize,result_303, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                        return __result351__;
                                        come_call_finalizer2(sNotEq2Node_finalize,result_303, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional602;
_Bool _if_conditional603;
_Bool _if_conditional604;
memset(&__result_obj__, 0, sizeof(void*));
                                            # 1 "sNotEqNode_finalize"
                                            # 0 "sNotEqNode_finalize"
                                            if(_if_conditional602=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional602) {
                                                # 0 "sNotEqNode_finalize"
                                                if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 2 "sNotEqNode_finalize"
                                            # 1 "sNotEqNode_finalize"
                                            if(_if_conditional603=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional603) {
                                                # 1 "sNotEqNode_finalize"
                                                if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                                            }
                                            # 3 "sNotEqNode_finalize"
                                            # 2 "sNotEqNode_finalize"
                                            if(_if_conditional604=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional604) {
                                                # 2 "sNotEqNode_finalize"
                                                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool _if_conditional605;
struct sNotEqNode* __result353__;
void* right_value606;
struct sNotEqNode* result_305;
_Bool _if_conditional606;
void* right_value607;
struct sNode* __dec_obj257;
_Bool _if_conditional607;
void* right_value608;
struct sNode* __dec_obj258;
_Bool _if_conditional608;
_Bool _if_conditional609;
_Bool _if_conditional610;
void* right_value609;
char* __dec_obj259;
struct sNotEqNode* __result354__;
memset(&__result_obj__, 0, sizeof(void*));
right_value606 = (void*)0;
memset(&result_305, 0, sizeof(struct sNotEqNode*));
right_value607 = (void*)0;
right_value608 = (void*)0;
right_value609 = (void*)0;
                                            # 3 "sNotEqNode_clone"
                                            # 2 "sNotEqNode_clone"
                                            if(_if_conditional605=self==(void*)0,                                            _if_conditional605) {
                                                # 2 "sNotEqNode_clone"
                                                __result353__ = __result_obj__ = (void*)0;
                                                return __result353__;
                                            }
                                            # 3 "sNotEqNode_clone"
                                            result_305=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value606=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "sNotEqNode"))));
                                            come_call_finalizer2(sNotEqNode_finalize,right_value606, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                                            # 5 "sNotEqNode_clone"
                                            # 4 "sNotEqNode_clone"
                                            if(_if_conditional606=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional606) {
                                                # 4 "sNotEqNode_clone"
                                                __dec_obj257=result_305->mLeft;
                                                result_305->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value607=sNode_clone(self->mLeft))));
                                                if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count2(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value607) { right_value607 = come_decrement_ref_count2(right_value607, ((struct sNode*)right_value607)->finalize, ((struct sNode*)right_value607)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 6 "sNotEqNode_clone"
                                            # 5 "sNotEqNode_clone"
                                            if(_if_conditional607=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional607) {
                                                # 5 "sNotEqNode_clone"
                                                __dec_obj258=result_305->mRight;
                                                result_305->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value608=sNode_clone(self->mRight))));
                                                if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count2(__dec_obj258, ((struct sNode*)__dec_obj258)->finalize, ((struct sNode*)__dec_obj258)->_protocol_obj, 0,0,0, (void*)0); }
                                                if(right_value608) { right_value608 = come_decrement_ref_count2(right_value608, ((struct sNode*)right_value608)->finalize, ((struct sNode*)right_value608)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                                            }
                                            # 7 "sNotEqNode_clone"
                                            # 6 "sNotEqNode_clone"
                                            if(_if_conditional608=self!=((void*)0),                                            _if_conditional608) {
                                                # 6 "sNotEqNode_clone"
                                                result_305->mQuote=self->mQuote;
                                            }
                                            # 8 "sNotEqNode_clone"
                                            # 7 "sNotEqNode_clone"
                                            if(_if_conditional609=self!=((void*)0),                                            _if_conditional609) {
                                                # 7 "sNotEqNode_clone"
                                                result_305->sline=self->sline;
                                            }
                                            # 9 "sNotEqNode_clone"
                                            # 8 "sNotEqNode_clone"
                                            if(_if_conditional610=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional610) {
                                                # 8 "sNotEqNode_clone"
                                                __dec_obj259=result_305->sname;
                                                result_305->sname=(char*)come_increment_ref_count(((char*)(right_value609=string_clone(self->sname))));
                                                __dec_obj259 = come_decrement_ref_count2(__dec_obj259, (void*)0, (void*)0, 0,0,0, (void*)0);
                                                right_value609 = come_decrement_ref_count2(right_value609, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                                            }
                                            # 9 "sNotEqNode_clone"
                                            __result354__ = __result_obj__ = result_305;
                                            come_call_finalizer2(sNotEqNode_finalize,result_305, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                                            return __result354__;
                                            come_call_finalizer2(sNotEqNode_finalize,result_305, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
void* right_value611;
struct sNode* node_306;
_Bool _while_condtional15;
_Bool _if_conditional611;
void* right_value612;
struct sNode* right_307;
void* right_value613;
void* right_value614;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value619;
struct sNode* __result359__;
_Bool _if_conditional621;
void* right_value620;
struct sNode* right_309;
void* right_value621;
void* right_value622;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* right_value627;
struct sNode* __result362__;
struct sNode* __result363__;
memset(&__result_obj__, 0, sizeof(void*));
right_value611 = (void*)0;
memset(&node_306, 0, sizeof(struct sNode*));
right_value612 = (void*)0;
memset(&right_307, 0, sizeof(struct sNode*));
right_value613 = (void*)0;
right_value614 = (void*)0;
right_value619 = (void*)0;
right_value620 = (void*)0;
memset(&right_309, 0, sizeof(struct sNode*));
right_value621 = (void*)0;
right_value622 = (void*)0;
right_value627 = (void*)0;
    # 2531 "13op.c"
    parse_sharp_v5(info);
    # 2533 "13op.c"
    node_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value611=eq_exp(info))));
    if(right_value611) { right_value611 = come_decrement_ref_count2(right_value611, ((struct sNode*)right_value611)->finalize, ((struct sNode*)right_value611)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2535 "13op.c"
    parse_sharp_v5(info);
    # 2559 "13op.c"
    while(_while_condtional15=*info->p,    _while_condtional15) {
        # 2557 "13op.c"
        # 2538 "13op.c"
        if(_if_conditional611=*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional611) {
            # 2539 "13op.c"
            info->p++;
            # 2540 "13op.c"
            skip_spaces_and_lf(info);
            # 2542 "13op.c"
            right_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value612=and_exp(info))));
            if(right_value612) { right_value612 = come_decrement_ref_count2(right_value612, ((struct sNode*)right_value612)->finalize, ((struct sNode*)right_value612)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2544 "13op.c"
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2544, "struct sNode");
            _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value614=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value613=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2544, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_306),(struct sNode*)come_increment_ref_count(right_307),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sAndNode_sline;
            _inf_value33->sname=(void*)sAndNode_sname;
            _inf_value33->terminated=(void*)sAndNode_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result359__ = __result_obj__ = ((struct sNode*)(right_value619=_inf_value33));
            if(right_307) { right_307 = come_decrement_ref_count2(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAndNode_finalize,right_value613, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAndNode_finalize,right_value614, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value619) { right_value619 = come_decrement_ref_count2(right_value619, ((struct sNode*)right_value619)->finalize, ((struct sNode*)right_value619)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result359__;
            if(right_307) { right_307 = come_decrement_ref_count2(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2557 "13op.c"
            # 2546 "13op.c"
            if(_if_conditional621=*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional621) {
                # 2547 "13op.c"
                info->p+=2;
                # 2548 "13op.c"
                skip_spaces_and_lf(info);
                # 2550 "13op.c"
                right_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value620=and_exp(info))));
                if(right_value620) { right_value620 = come_decrement_ref_count2(right_value620, ((struct sNode*)right_value620)->finalize, ((struct sNode*)right_value620)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2552 "13op.c"
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2552, "struct sNode");
                _inf_obj_value34=come_increment_ref_count(((struct sAndNode*)(right_value622=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value621=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2552, "sAndNode")))),(struct sNode*)come_increment_ref_count(node_306),(struct sNode*)come_increment_ref_count(right_309),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sAndNode_finalize;
                _inf_value34->clone=(void*)sAndNode_clone;
                _inf_value34->compile=(void*)sAndNode_compile;
                _inf_value34->sline=(void*)sAndNode_sline;
                _inf_value34->sname=(void*)sAndNode_sname;
                _inf_value34->terminated=(void*)sAndNode_terminated;
                _inf_value34->kind=(void*)sAndNode_kind;
                __result362__ = __result_obj__ = ((struct sNode*)(right_value627=_inf_value34));
                if(right_309) { right_309 = come_decrement_ref_count2(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sAndNode_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sAndNode_finalize,right_value622, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value627) { right_value627 = come_decrement_ref_count2(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result362__;
                if(right_309) { right_309 = come_decrement_ref_count2(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2555 "13op.c"
                break;
            }
        }
    }
    # 2559 "13op.c"
    parse_sharp_v5(info);
    # 2561 "13op.c"
    __result363__ = __result_obj__ = node_306;
    if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result363__;
    if(node_306) { node_306 = come_decrement_ref_count2(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional622;
_Bool _if_conditional623;
_Bool _if_conditional624;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sAndNode_finalize"
                    # 0 "sAndNode_finalize"
                    if(_if_conditional622=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional622) {
                        # 0 "sAndNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 2 "sAndNode_finalize"
                    # 1 "sAndNode_finalize"
                    if(_if_conditional623=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional623) {
                        # 1 "sAndNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sAndNode_finalize"
                    # 2 "sAndNode_finalize"
                    if(_if_conditional624=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional624) {
                        # 2 "sAndNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool _if_conditional625;
struct sAndNode* __result360__;
void* right_value623;
struct sAndNode* result_310;
_Bool _if_conditional626;
void* right_value624;
struct sNode* __dec_obj263;
_Bool _if_conditional627;
void* right_value625;
struct sNode* __dec_obj264;
_Bool _if_conditional628;
_Bool _if_conditional629;
_Bool _if_conditional630;
void* right_value626;
char* __dec_obj265;
struct sAndNode* __result361__;
memset(&__result_obj__, 0, sizeof(void*));
right_value623 = (void*)0;
memset(&result_310, 0, sizeof(struct sAndNode*));
right_value624 = (void*)0;
right_value625 = (void*)0;
right_value626 = (void*)0;
                    # 3 "sAndNode_clone"
                    # 2 "sAndNode_clone"
                    if(_if_conditional625=self==(void*)0,                    _if_conditional625) {
                        # 2 "sAndNode_clone"
                        __result360__ = __result_obj__ = (void*)0;
                        return __result360__;
                    }
                    # 3 "sAndNode_clone"
                    result_310=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value623=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "sAndNode"))));
                    come_call_finalizer2(sAndNode_finalize,right_value623, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sAndNode_clone"
                    # 4 "sAndNode_clone"
                    if(_if_conditional626=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional626) {
                        # 4 "sAndNode_clone"
                        __dec_obj263=result_310->mLeft;
                        result_310->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value624=sNode_clone(self->mLeft))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count2(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value624) { right_value624 = come_decrement_ref_count2(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 6 "sAndNode_clone"
                    # 5 "sAndNode_clone"
                    if(_if_conditional627=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional627) {
                        # 5 "sAndNode_clone"
                        __dec_obj264=result_310->mRight;
                        result_310->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value625=sNode_clone(self->mRight))));
                        if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count2(__dec_obj264, ((struct sNode*)__dec_obj264)->finalize, ((struct sNode*)__dec_obj264)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value625) { right_value625 = come_decrement_ref_count2(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "sAndNode_clone"
                    # 6 "sAndNode_clone"
                    if(_if_conditional628=self!=((void*)0),                    _if_conditional628) {
                        # 6 "sAndNode_clone"
                        result_310->mQuote=self->mQuote;
                    }
                    # 8 "sAndNode_clone"
                    # 7 "sAndNode_clone"
                    if(_if_conditional629=self!=((void*)0),                    _if_conditional629) {
                        # 7 "sAndNode_clone"
                        result_310->sline=self->sline;
                    }
                    # 9 "sAndNode_clone"
                    # 8 "sAndNode_clone"
                    if(_if_conditional630=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional630) {
                        # 8 "sAndNode_clone"
                        __dec_obj265=result_310->sname;
                        result_310->sname=(char*)come_increment_ref_count(((char*)(right_value626=string_clone(self->sname))));
                        __dec_obj265 = come_decrement_ref_count2(__dec_obj265, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value626 = come_decrement_ref_count2(right_value626, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sAndNode_clone"
                    __result361__ = __result_obj__ = result_310;
                    come_call_finalizer2(sAndNode_finalize,result_310, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result361__;
                    come_call_finalizer2(sAndNode_finalize,result_310, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
void* right_value628;
struct sNode* node_311;
_Bool _while_condtional16;
_Bool _if_conditional631;
void* right_value629;
struct sNode* right_312;
void* right_value630;
void* right_value631;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value636;
struct sNode* __result366__;
_Bool _if_conditional641;
void* right_value637;
struct sNode* right_314;
void* right_value638;
void* right_value639;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* right_value644;
struct sNode* __result369__;
struct sNode* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
right_value628 = (void*)0;
memset(&node_311, 0, sizeof(struct sNode*));
right_value629 = (void*)0;
memset(&right_312, 0, sizeof(struct sNode*));
right_value630 = (void*)0;
right_value631 = (void*)0;
right_value636 = (void*)0;
right_value637 = (void*)0;
memset(&right_314, 0, sizeof(struct sNode*));
right_value638 = (void*)0;
right_value639 = (void*)0;
right_value644 = (void*)0;
    # 2566 "13op.c"
    parse_sharp_v5(info);
    # 2568 "13op.c"
    node_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value628=and_exp(info))));
    if(right_value628) { right_value628 = come_decrement_ref_count2(right_value628, ((struct sNode*)right_value628)->finalize, ((struct sNode*)right_value628)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2570 "13op.c"
    parse_sharp_v5(info);
    # 2594 "13op.c"
    while(_while_condtional16=*info->p,    _while_condtional16) {
        # 2592 "13op.c"
        # 2573 "13op.c"
        if(_if_conditional631=*info->p==94&&*(info->p+1)!=61,        _if_conditional631) {
            # 2574 "13op.c"
            info->p++;
            # 2575 "13op.c"
            skip_spaces_and_lf(info);
            # 2577 "13op.c"
            right_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value629=xor_exp(info))));
            if(right_value629) { right_value629 = come_decrement_ref_count2(right_value629, ((struct sNode*)right_value629)->finalize, ((struct sNode*)right_value629)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2579 "13op.c"
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2579, "struct sNode");
            _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value631=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value630=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2579, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_312),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sXOrNode_sline;
            _inf_value35->sname=(void*)sXOrNode_sname;
            _inf_value35->terminated=(void*)sXOrNode_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result366__ = __result_obj__ = ((struct sNode*)(right_value636=_inf_value35));
            if(right_312) { right_312 = come_decrement_ref_count2(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_311) { node_311 = come_decrement_ref_count2(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sXOrNode_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sXOrNode_finalize,right_value631, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value636) { right_value636 = come_decrement_ref_count2(right_value636, ((struct sNode*)right_value636)->finalize, ((struct sNode*)right_value636)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result366__;
            if(right_312) { right_312 = come_decrement_ref_count2(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2592 "13op.c"
            # 2581 "13op.c"
            if(_if_conditional641=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional641) {
                # 2582 "13op.c"
                info->p+=2;
                # 2583 "13op.c"
                skip_spaces_and_lf(info);
                # 2585 "13op.c"
                right_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value637=xor_exp(info))));
                if(right_value637) { right_value637 = come_decrement_ref_count2(right_value637, ((struct sNode*)right_value637)->finalize, ((struct sNode*)right_value637)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2587 "13op.c"
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2587, "struct sNode");
                _inf_obj_value36=come_increment_ref_count(((struct sXOrNode*)(right_value639=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value638=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2587, "sXOrNode")))),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_314),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sXOrNode_finalize;
                _inf_value36->clone=(void*)sXOrNode_clone;
                _inf_value36->compile=(void*)sXOrNode_compile;
                _inf_value36->sline=(void*)sXOrNode_sline;
                _inf_value36->sname=(void*)sXOrNode_sname;
                _inf_value36->terminated=(void*)sXOrNode_terminated;
                _inf_value36->kind=(void*)sXOrNode_kind;
                __result369__ = __result_obj__ = ((struct sNode*)(right_value644=_inf_value36));
                if(right_314) { right_314 = come_decrement_ref_count2(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_311) { node_311 = come_decrement_ref_count2(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sXOrNode_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sXOrNode_finalize,right_value639, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value644) { right_value644 = come_decrement_ref_count2(right_value644, ((struct sNode*)right_value644)->finalize, ((struct sNode*)right_value644)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result369__;
                if(right_314) { right_314 = come_decrement_ref_count2(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2590 "13op.c"
                break;
            }
        }
    }
    # 2594 "13op.c"
    parse_sharp_v5(info);
    # 2596 "13op.c"
    __result370__ = __result_obj__ = node_311;
    if(node_311) { node_311 = come_decrement_ref_count2(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result370__;
    if(node_311) { node_311 = come_decrement_ref_count2(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional642;
_Bool _if_conditional643;
_Bool _if_conditional644;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sXOrNode_finalize"
                    # 0 "sXOrNode_finalize"
                    if(_if_conditional642=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional642) {
                        # 0 "sXOrNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 2 "sXOrNode_finalize"
                    # 1 "sXOrNode_finalize"
                    if(_if_conditional643=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional643) {
                        # 1 "sXOrNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sXOrNode_finalize"
                    # 2 "sXOrNode_finalize"
                    if(_if_conditional644=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional644) {
                        # 2 "sXOrNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool _if_conditional645;
struct sXOrNode* __result367__;
void* right_value640;
struct sXOrNode* result_315;
_Bool _if_conditional646;
void* right_value641;
struct sNode* __dec_obj269;
_Bool _if_conditional647;
void* right_value642;
struct sNode* __dec_obj270;
_Bool _if_conditional648;
_Bool _if_conditional649;
_Bool _if_conditional650;
void* right_value643;
char* __dec_obj271;
struct sXOrNode* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
right_value640 = (void*)0;
memset(&result_315, 0, sizeof(struct sXOrNode*));
right_value641 = (void*)0;
right_value642 = (void*)0;
right_value643 = (void*)0;
                    # 3 "sXOrNode_clone"
                    # 2 "sXOrNode_clone"
                    if(_if_conditional645=self==(void*)0,                    _if_conditional645) {
                        # 2 "sXOrNode_clone"
                        __result367__ = __result_obj__ = (void*)0;
                        return __result367__;
                    }
                    # 3 "sXOrNode_clone"
                    result_315=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value640=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "sXOrNode"))));
                    come_call_finalizer2(sXOrNode_finalize,right_value640, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sXOrNode_clone"
                    # 4 "sXOrNode_clone"
                    if(_if_conditional646=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional646) {
                        # 4 "sXOrNode_clone"
                        __dec_obj269=result_315->mLeft;
                        result_315->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value641=sNode_clone(self->mLeft))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count2(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value641) { right_value641 = come_decrement_ref_count2(right_value641, ((struct sNode*)right_value641)->finalize, ((struct sNode*)right_value641)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 6 "sXOrNode_clone"
                    # 5 "sXOrNode_clone"
                    if(_if_conditional647=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional647) {
                        # 5 "sXOrNode_clone"
                        __dec_obj270=result_315->mRight;
                        result_315->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value642=sNode_clone(self->mRight))));
                        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count2(__dec_obj270, ((struct sNode*)__dec_obj270)->finalize, ((struct sNode*)__dec_obj270)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value642) { right_value642 = come_decrement_ref_count2(right_value642, ((struct sNode*)right_value642)->finalize, ((struct sNode*)right_value642)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "sXOrNode_clone"
                    # 6 "sXOrNode_clone"
                    if(_if_conditional648=self!=((void*)0),                    _if_conditional648) {
                        # 6 "sXOrNode_clone"
                        result_315->mQuote=self->mQuote;
                    }
                    # 8 "sXOrNode_clone"
                    # 7 "sXOrNode_clone"
                    if(_if_conditional649=self!=((void*)0),                    _if_conditional649) {
                        # 7 "sXOrNode_clone"
                        result_315->sline=self->sline;
                    }
                    # 9 "sXOrNode_clone"
                    # 8 "sXOrNode_clone"
                    if(_if_conditional650=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional650) {
                        # 8 "sXOrNode_clone"
                        __dec_obj271=result_315->sname;
                        result_315->sname=(char*)come_increment_ref_count(((char*)(right_value643=string_clone(self->sname))));
                        __dec_obj271 = come_decrement_ref_count2(__dec_obj271, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value643 = come_decrement_ref_count2(right_value643, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sXOrNode_clone"
                    __result368__ = __result_obj__ = result_315;
                    come_call_finalizer2(sXOrNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result368__;
                    come_call_finalizer2(sXOrNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
void* right_value645;
struct sNode* node_316;
_Bool _while_condtional17;
_Bool _if_conditional651;
void* right_value646;
struct sNode* right_317;
void* right_value647;
void* right_value648;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value653;
struct sNode* __result373__;
_Bool _if_conditional661;
void* right_value654;
struct sNode* right_319;
void* right_value655;
void* right_value656;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* right_value661;
struct sNode* __result376__;
struct sNode* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
right_value645 = (void*)0;
memset(&node_316, 0, sizeof(struct sNode*));
right_value646 = (void*)0;
memset(&right_317, 0, sizeof(struct sNode*));
right_value647 = (void*)0;
right_value648 = (void*)0;
right_value653 = (void*)0;
right_value654 = (void*)0;
memset(&right_319, 0, sizeof(struct sNode*));
right_value655 = (void*)0;
right_value656 = (void*)0;
right_value661 = (void*)0;
    # 2601 "13op.c"
    parse_sharp_v5(info);
    # 2603 "13op.c"
    node_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value645=xor_exp(info))));
    if(right_value645) { right_value645 = come_decrement_ref_count2(right_value645, ((struct sNode*)right_value645)->finalize, ((struct sNode*)right_value645)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2605 "13op.c"
    parse_sharp_v5(info);
    # 2629 "13op.c"
    while(_while_condtional17=*info->p,    _while_condtional17) {
        # 2627 "13op.c"
        # 2608 "13op.c"
        if(_if_conditional651=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional651) {
            # 2609 "13op.c"
            info->p++;
            # 2610 "13op.c"
            skip_spaces_and_lf(info);
            # 2612 "13op.c"
            right_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value646=or_exp(info))));
            if(right_value646) { right_value646 = come_decrement_ref_count2(right_value646, ((struct sNode*)right_value646)->finalize, ((struct sNode*)right_value646)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2614 "13op.c"
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2614, "struct sNode");
            _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value648=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value647=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2614, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_316),(struct sNode*)come_increment_ref_count(right_317),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sOrNode_sline;
            _inf_value37->sname=(void*)sOrNode_sname;
            _inf_value37->terminated=(void*)sOrNode_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result373__ = __result_obj__ = ((struct sNode*)(right_value653=_inf_value37));
            if(right_317) { right_317 = come_decrement_ref_count2(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_316) { node_316 = come_decrement_ref_count2(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sOrNode_finalize,right_value647, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sOrNode_finalize,right_value648, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value653) { right_value653 = come_decrement_ref_count2(right_value653, ((struct sNode*)right_value653)->finalize, ((struct sNode*)right_value653)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result373__;
            if(right_317) { right_317 = come_decrement_ref_count2(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2627 "13op.c"
            # 2616 "13op.c"
            if(_if_conditional661=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional661) {
                # 2617 "13op.c"
                info->p+=2;
                # 2618 "13op.c"
                skip_spaces_and_lf(info);
                # 2620 "13op.c"
                right_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value654=or_exp(info))));
                if(right_value654) { right_value654 = come_decrement_ref_count2(right_value654, ((struct sNode*)right_value654)->finalize, ((struct sNode*)right_value654)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2622 "13op.c"
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2622, "struct sNode");
                _inf_obj_value38=come_increment_ref_count(((struct sOrNode*)(right_value656=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value655=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2622, "sOrNode")))),(struct sNode*)come_increment_ref_count(node_316),(struct sNode*)come_increment_ref_count(right_319),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sOrNode_finalize;
                _inf_value38->clone=(void*)sOrNode_clone;
                _inf_value38->compile=(void*)sOrNode_compile;
                _inf_value38->sline=(void*)sOrNode_sline;
                _inf_value38->sname=(void*)sOrNode_sname;
                _inf_value38->terminated=(void*)sOrNode_terminated;
                _inf_value38->kind=(void*)sOrNode_kind;
                __result376__ = __result_obj__ = ((struct sNode*)(right_value661=_inf_value38));
                if(right_319) { right_319 = come_decrement_ref_count2(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_316) { node_316 = come_decrement_ref_count2(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sOrNode_finalize,right_value655, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sOrNode_finalize,right_value656, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value661) { right_value661 = come_decrement_ref_count2(right_value661, ((struct sNode*)right_value661)->finalize, ((struct sNode*)right_value661)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result376__;
                if(right_319) { right_319 = come_decrement_ref_count2(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2625 "13op.c"
                break;
            }
        }
    }
    # 2629 "13op.c"
    parse_sharp_v5(info);
    # 2631 "13op.c"
    __result377__ = __result_obj__ = node_316;
    if(node_316) { node_316 = come_decrement_ref_count2(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result377__;
    if(node_316) { node_316 = come_decrement_ref_count2(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional662;
_Bool _if_conditional663;
_Bool _if_conditional664;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sOrNode_finalize"
                    # 0 "sOrNode_finalize"
                    if(_if_conditional662=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional662) {
                        # 0 "sOrNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 2 "sOrNode_finalize"
                    # 1 "sOrNode_finalize"
                    if(_if_conditional663=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional663) {
                        # 1 "sOrNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sOrNode_finalize"
                    # 2 "sOrNode_finalize"
                    if(_if_conditional664=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional664) {
                        # 2 "sOrNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool _if_conditional665;
struct sOrNode* __result374__;
void* right_value657;
struct sOrNode* result_320;
_Bool _if_conditional666;
void* right_value658;
struct sNode* __dec_obj275;
_Bool _if_conditional667;
void* right_value659;
struct sNode* __dec_obj276;
_Bool _if_conditional668;
_Bool _if_conditional669;
_Bool _if_conditional670;
void* right_value660;
char* __dec_obj277;
struct sOrNode* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
right_value657 = (void*)0;
memset(&result_320, 0, sizeof(struct sOrNode*));
right_value658 = (void*)0;
right_value659 = (void*)0;
right_value660 = (void*)0;
                    # 3 "sOrNode_clone"
                    # 2 "sOrNode_clone"
                    if(_if_conditional665=self==(void*)0,                    _if_conditional665) {
                        # 2 "sOrNode_clone"
                        __result374__ = __result_obj__ = (void*)0;
                        return __result374__;
                    }
                    # 3 "sOrNode_clone"
                    result_320=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value657=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "sOrNode"))));
                    come_call_finalizer2(sOrNode_finalize,right_value657, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sOrNode_clone"
                    # 4 "sOrNode_clone"
                    if(_if_conditional666=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional666) {
                        # 4 "sOrNode_clone"
                        __dec_obj275=result_320->mLeft;
                        result_320->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value658=sNode_clone(self->mLeft))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count2(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value658) { right_value658 = come_decrement_ref_count2(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 6 "sOrNode_clone"
                    # 5 "sOrNode_clone"
                    if(_if_conditional667=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional667) {
                        # 5 "sOrNode_clone"
                        __dec_obj276=result_320->mRight;
                        result_320->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value659=sNode_clone(self->mRight))));
                        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count2(__dec_obj276, ((struct sNode*)__dec_obj276)->finalize, ((struct sNode*)__dec_obj276)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value659) { right_value659 = come_decrement_ref_count2(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "sOrNode_clone"
                    # 6 "sOrNode_clone"
                    if(_if_conditional668=self!=((void*)0),                    _if_conditional668) {
                        # 6 "sOrNode_clone"
                        result_320->mQuote=self->mQuote;
                    }
                    # 8 "sOrNode_clone"
                    # 7 "sOrNode_clone"
                    if(_if_conditional669=self!=((void*)0),                    _if_conditional669) {
                        # 7 "sOrNode_clone"
                        result_320->sline=self->sline;
                    }
                    # 9 "sOrNode_clone"
                    # 8 "sOrNode_clone"
                    if(_if_conditional670=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional670) {
                        # 8 "sOrNode_clone"
                        __dec_obj277=result_320->sname;
                        result_320->sname=(char*)come_increment_ref_count(((char*)(right_value660=string_clone(self->sname))));
                        __dec_obj277 = come_decrement_ref_count2(__dec_obj277, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value660 = come_decrement_ref_count2(right_value660, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sOrNode_clone"
                    __result375__ = __result_obj__ = result_320;
                    come_call_finalizer2(sOrNode_finalize,result_320, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result375__;
                    come_call_finalizer2(sOrNode_finalize,result_320, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
void* right_value662;
struct sNode* node_321;
_Bool _while_condtional18;
_Bool _if_conditional671;
void* right_value663;
struct sNode* right_322;
void* right_value664;
void* right_value665;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value670;
struct sNode* __result380__;
_Bool _if_conditional681;
void* right_value671;
struct sNode* right_324;
void* right_value672;
void* right_value673;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* right_value678;
struct sNode* __result383__;
struct sNode* __result384__;
memset(&__result_obj__, 0, sizeof(void*));
right_value662 = (void*)0;
memset(&node_321, 0, sizeof(struct sNode*));
right_value663 = (void*)0;
memset(&right_322, 0, sizeof(struct sNode*));
right_value664 = (void*)0;
right_value665 = (void*)0;
right_value670 = (void*)0;
right_value671 = (void*)0;
memset(&right_324, 0, sizeof(struct sNode*));
right_value672 = (void*)0;
right_value673 = (void*)0;
right_value678 = (void*)0;
    # 2636 "13op.c"
    parse_sharp_v5(info);
    # 2638 "13op.c"
    node_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value662=or_exp(info))));
    if(right_value662) { right_value662 = come_decrement_ref_count2(right_value662, ((struct sNode*)right_value662)->finalize, ((struct sNode*)right_value662)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2640 "13op.c"
    parse_sharp_v5(info);
    # 2664 "13op.c"
    while(_while_condtional18=*info->p,    _while_condtional18) {
        # 2662 "13op.c"
        # 2643 "13op.c"
        if(_if_conditional671=*info->p==38&&*(info->p+1)==38,        _if_conditional671) {
            # 2644 "13op.c"
            info->p+=2;
            # 2645 "13op.c"
            skip_spaces_and_lf(info);
            # 2647 "13op.c"
            right_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value663=andand_exp(info))));
            if(right_value663) { right_value663 = come_decrement_ref_count2(right_value663, ((struct sNode*)right_value663)->finalize, ((struct sNode*)right_value663)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2649 "13op.c"
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2649, "struct sNode");
            _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value665=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value664=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2649, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_321),(struct sNode*)come_increment_ref_count(right_322),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sAndAndNode_sline;
            _inf_value39->sname=(void*)sAndAndNode_sname;
            _inf_value39->terminated=(void*)sAndAndNode_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result380__ = __result_obj__ = ((struct sNode*)(right_value670=_inf_value39));
            if(right_322) { right_322 = come_decrement_ref_count2(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sAndAndNode_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sAndAndNode_finalize,right_value665, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value670) { right_value670 = come_decrement_ref_count2(right_value670, ((struct sNode*)right_value670)->finalize, ((struct sNode*)right_value670)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result380__;
            if(right_322) { right_322 = come_decrement_ref_count2(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2662 "13op.c"
            # 2651 "13op.c"
            if(_if_conditional681=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional681) {
                # 2652 "13op.c"
                info->p+=3;
                # 2653 "13op.c"
                skip_spaces_and_lf(info);
                # 2655 "13op.c"
                right_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value671=andand_exp(info))));
                if(right_value671) { right_value671 = come_decrement_ref_count2(right_value671, ((struct sNode*)right_value671)->finalize, ((struct sNode*)right_value671)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2657 "13op.c"
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2657, "struct sNode");
                _inf_obj_value40=come_increment_ref_count(((struct sAndAndNode*)(right_value673=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value672=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2657, "sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_321),(struct sNode*)come_increment_ref_count(right_324),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sAndAndNode_finalize;
                _inf_value40->clone=(void*)sAndAndNode_clone;
                _inf_value40->compile=(void*)sAndAndNode_compile;
                _inf_value40->sline=(void*)sAndAndNode_sline;
                _inf_value40->sname=(void*)sAndAndNode_sname;
                _inf_value40->terminated=(void*)sAndAndNode_terminated;
                _inf_value40->kind=(void*)sAndAndNode_kind;
                __result383__ = __result_obj__ = ((struct sNode*)(right_value678=_inf_value40));
                if(right_324) { right_324 = come_decrement_ref_count2(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sAndAndNode_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sAndAndNode_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value678) { right_value678 = come_decrement_ref_count2(right_value678, ((struct sNode*)right_value678)->finalize, ((struct sNode*)right_value678)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result383__;
                if(right_324) { right_324 = come_decrement_ref_count2(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2660 "13op.c"
                break;
            }
        }
    }
    # 2664 "13op.c"
    parse_sharp_v5(info);
    # 2666 "13op.c"
    __result384__ = __result_obj__ = node_321;
    if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result384__;
    if(node_321) { node_321 = come_decrement_ref_count2(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional682;
_Bool _if_conditional683;
_Bool _if_conditional684;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sAndAndNode_finalize"
                    # 0 "sAndAndNode_finalize"
                    if(_if_conditional682=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional682) {
                        # 0 "sAndAndNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 2 "sAndAndNode_finalize"
                    # 1 "sAndAndNode_finalize"
                    if(_if_conditional683=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional683) {
                        # 1 "sAndAndNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sAndAndNode_finalize"
                    # 2 "sAndAndNode_finalize"
                    if(_if_conditional684=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional684) {
                        # 2 "sAndAndNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool _if_conditional685;
struct sAndAndNode* __result381__;
void* right_value674;
struct sAndAndNode* result_325;
_Bool _if_conditional686;
void* right_value675;
struct sNode* __dec_obj281;
_Bool _if_conditional687;
void* right_value676;
struct sNode* __dec_obj282;
_Bool _if_conditional688;
_Bool _if_conditional689;
_Bool _if_conditional690;
void* right_value677;
char* __dec_obj283;
struct sAndAndNode* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
right_value674 = (void*)0;
memset(&result_325, 0, sizeof(struct sAndAndNode*));
right_value675 = (void*)0;
right_value676 = (void*)0;
right_value677 = (void*)0;
                    # 3 "sAndAndNode_clone"
                    # 2 "sAndAndNode_clone"
                    if(_if_conditional685=self==(void*)0,                    _if_conditional685) {
                        # 2 "sAndAndNode_clone"
                        __result381__ = __result_obj__ = (void*)0;
                        return __result381__;
                    }
                    # 3 "sAndAndNode_clone"
                    result_325=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value674=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "sAndAndNode"))));
                    come_call_finalizer2(sAndAndNode_finalize,right_value674, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sAndAndNode_clone"
                    # 4 "sAndAndNode_clone"
                    if(_if_conditional686=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional686) {
                        # 4 "sAndAndNode_clone"
                        __dec_obj281=result_325->mLeft;
                        result_325->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value675=sNode_clone(self->mLeft))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count2(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value675) { right_value675 = come_decrement_ref_count2(right_value675, ((struct sNode*)right_value675)->finalize, ((struct sNode*)right_value675)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 6 "sAndAndNode_clone"
                    # 5 "sAndAndNode_clone"
                    if(_if_conditional687=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional687) {
                        # 5 "sAndAndNode_clone"
                        __dec_obj282=result_325->mRight;
                        result_325->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value676=sNode_clone(self->mRight))));
                        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count2(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value676) { right_value676 = come_decrement_ref_count2(right_value676, ((struct sNode*)right_value676)->finalize, ((struct sNode*)right_value676)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "sAndAndNode_clone"
                    # 6 "sAndAndNode_clone"
                    if(_if_conditional688=self!=((void*)0),                    _if_conditional688) {
                        # 6 "sAndAndNode_clone"
                        result_325->mQuote=self->mQuote;
                    }
                    # 8 "sAndAndNode_clone"
                    # 7 "sAndAndNode_clone"
                    if(_if_conditional689=self!=((void*)0),                    _if_conditional689) {
                        # 7 "sAndAndNode_clone"
                        result_325->sline=self->sline;
                    }
                    # 9 "sAndAndNode_clone"
                    # 8 "sAndAndNode_clone"
                    if(_if_conditional690=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional690) {
                        # 8 "sAndAndNode_clone"
                        __dec_obj283=result_325->sname;
                        result_325->sname=(char*)come_increment_ref_count(((char*)(right_value677=string_clone(self->sname))));
                        __dec_obj283 = come_decrement_ref_count2(__dec_obj283, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value677 = come_decrement_ref_count2(right_value677, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sAndAndNode_clone"
                    __result382__ = __result_obj__ = result_325;
                    come_call_finalizer2(sAndAndNode_finalize,result_325, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result382__;
                    come_call_finalizer2(sAndAndNode_finalize,result_325, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
void* right_value679;
struct sNode* node_326;
_Bool _while_condtional19;
_Bool _if_conditional691;
void* right_value680;
struct sNode* right_327;
void* right_value681;
void* right_value682;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value687;
struct sNode* __result387__;
_Bool _if_conditional701;
void* right_value688;
struct sNode* right_329;
void* right_value689;
void* right_value690;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* right_value695;
struct sNode* __result390__;
struct sNode* __result391__;
memset(&__result_obj__, 0, sizeof(void*));
right_value679 = (void*)0;
memset(&node_326, 0, sizeof(struct sNode*));
right_value680 = (void*)0;
memset(&right_327, 0, sizeof(struct sNode*));
right_value681 = (void*)0;
right_value682 = (void*)0;
right_value687 = (void*)0;
right_value688 = (void*)0;
memset(&right_329, 0, sizeof(struct sNode*));
right_value689 = (void*)0;
right_value690 = (void*)0;
right_value695 = (void*)0;
    # 2671 "13op.c"
    parse_sharp_v5(info);
    # 2673 "13op.c"
    node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value679=andand_exp(info))));
    if(right_value679) { right_value679 = come_decrement_ref_count2(right_value679, ((struct sNode*)right_value679)->finalize, ((struct sNode*)right_value679)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2675 "13op.c"
    parse_sharp_v5(info);
    # 2699 "13op.c"
    while(_while_condtional19=*info->p,    _while_condtional19) {
        # 2697 "13op.c"
        # 2678 "13op.c"
        if(_if_conditional691=*info->p==124&&*(info->p+1)==124,        _if_conditional691) {
            # 2679 "13op.c"
            info->p+=2;
            # 2680 "13op.c"
            skip_spaces_and_lf(info);
            # 2682 "13op.c"
            right_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value680=oror_exp(info))));
            if(right_value680) { right_value680 = come_decrement_ref_count2(right_value680, ((struct sNode*)right_value680)->finalize, ((struct sNode*)right_value680)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2684 "13op.c"
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2684, "struct sNode");
            _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value682=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value681=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2684, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(right_327),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sOrOrNode_sline;
            _inf_value41->sname=(void*)sOrOrNode_sname;
            _inf_value41->terminated=(void*)sOrOrNode_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result387__ = __result_obj__ = ((struct sNode*)(right_value687=_inf_value41));
            if(right_327) { right_327 = come_decrement_ref_count2(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sOrOrNode_finalize,right_value681, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sOrOrNode_finalize,right_value682, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value687) { right_value687 = come_decrement_ref_count2(right_value687, ((struct sNode*)right_value687)->finalize, ((struct sNode*)right_value687)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result387__;
            if(right_327) { right_327 = come_decrement_ref_count2(right_327, ((struct sNode*)right_327)->finalize, ((struct sNode*)right_327)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2697 "13op.c"
            # 2686 "13op.c"
            if(_if_conditional701=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional701) {
                # 2687 "13op.c"
                info->p+=3;
                # 2688 "13op.c"
                skip_spaces_and_lf(info);
                # 2690 "13op.c"
                right_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value688=oror_exp(info))));
                if(right_value688) { right_value688 = come_decrement_ref_count2(right_value688, ((struct sNode*)right_value688)->finalize, ((struct sNode*)right_value688)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                # 2692 "13op.c"
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2692, "struct sNode");
                _inf_obj_value42=come_increment_ref_count(((struct sOrOrNode*)(right_value690=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value689=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2692, "sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(right_329),(_Bool)1,info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sOrOrNode_finalize;
                _inf_value42->clone=(void*)sOrOrNode_clone;
                _inf_value42->compile=(void*)sOrOrNode_compile;
                _inf_value42->sline=(void*)sOrOrNode_sline;
                _inf_value42->sname=(void*)sOrOrNode_sname;
                _inf_value42->terminated=(void*)sOrOrNode_terminated;
                _inf_value42->kind=(void*)sOrOrNode_kind;
                __result390__ = __result_obj__ = ((struct sNode*)(right_value695=_inf_value42));
                if(right_329) { right_329 = come_decrement_ref_count2(right_329, ((struct sNode*)right_329)->finalize, ((struct sNode*)right_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
                if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
                come_call_finalizer2(sOrOrNode_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sOrOrNode_finalize,right_value690, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value695) { right_value695 = come_decrement_ref_count2(right_value695, ((struct sNode*)right_value695)->finalize, ((struct sNode*)right_value695)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                return __result390__;
                if(right_329) { right_329 = come_decrement_ref_count2(right_329, ((struct sNode*)right_329)->finalize, ((struct sNode*)right_329)->_protocol_obj, 0, 0, 0, (void*)0); } 
            }
            else {
                # 2695 "13op.c"
                break;
            }
        }
    }
    # 2699 "13op.c"
    parse_sharp_v5(info);
    # 2701 "13op.c"
    __result391__ = __result_obj__ = node_326;
    if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result391__;
    if(node_326) { node_326 = come_decrement_ref_count2(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional702;
_Bool _if_conditional703;
_Bool _if_conditional704;
memset(&__result_obj__, 0, sizeof(void*));
                    # 1 "sOrOrNode_finalize"
                    # 0 "sOrOrNode_finalize"
                    if(_if_conditional702=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional702) {
                        # 0 "sOrOrNode_finalize"
                        if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 2 "sOrOrNode_finalize"
                    # 1 "sOrOrNode_finalize"
                    if(_if_conditional703=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional703) {
                        # 1 "sOrOrNode_finalize"
                        if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                    }
                    # 3 "sOrOrNode_finalize"
                    # 2 "sOrOrNode_finalize"
                    if(_if_conditional704=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional704) {
                        # 2 "sOrOrNode_finalize"
                        self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool _if_conditional705;
struct sOrOrNode* __result388__;
void* right_value691;
struct sOrOrNode* result_330;
_Bool _if_conditional706;
void* right_value692;
struct sNode* __dec_obj287;
_Bool _if_conditional707;
void* right_value693;
struct sNode* __dec_obj288;
_Bool _if_conditional708;
_Bool _if_conditional709;
_Bool _if_conditional710;
void* right_value694;
char* __dec_obj289;
struct sOrOrNode* __result389__;
memset(&__result_obj__, 0, sizeof(void*));
right_value691 = (void*)0;
memset(&result_330, 0, sizeof(struct sOrOrNode*));
right_value692 = (void*)0;
right_value693 = (void*)0;
right_value694 = (void*)0;
                    # 3 "sOrOrNode_clone"
                    # 2 "sOrOrNode_clone"
                    if(_if_conditional705=self==(void*)0,                    _if_conditional705) {
                        # 2 "sOrOrNode_clone"
                        __result388__ = __result_obj__ = (void*)0;
                        return __result388__;
                    }
                    # 3 "sOrOrNode_clone"
                    result_330=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value691=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "sOrOrNode"))));
                    come_call_finalizer2(sOrOrNode_finalize,right_value691, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                    # 5 "sOrOrNode_clone"
                    # 4 "sOrOrNode_clone"
                    if(_if_conditional706=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional706) {
                        # 4 "sOrOrNode_clone"
                        __dec_obj287=result_330->mLeft;
                        result_330->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value692=sNode_clone(self->mLeft))));
                        if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count2(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value692) { right_value692 = come_decrement_ref_count2(right_value692, ((struct sNode*)right_value692)->finalize, ((struct sNode*)right_value692)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 6 "sOrOrNode_clone"
                    # 5 "sOrOrNode_clone"
                    if(_if_conditional707=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional707) {
                        # 5 "sOrOrNode_clone"
                        __dec_obj288=result_330->mRight;
                        result_330->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value693=sNode_clone(self->mRight))));
                        if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count2(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0, (void*)0); }
                        if(right_value693) { right_value693 = come_decrement_ref_count2(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                    }
                    # 7 "sOrOrNode_clone"
                    # 6 "sOrOrNode_clone"
                    if(_if_conditional708=self!=((void*)0),                    _if_conditional708) {
                        # 6 "sOrOrNode_clone"
                        result_330->mQuote=self->mQuote;
                    }
                    # 8 "sOrOrNode_clone"
                    # 7 "sOrOrNode_clone"
                    if(_if_conditional709=self!=((void*)0),                    _if_conditional709) {
                        # 7 "sOrOrNode_clone"
                        result_330->sline=self->sline;
                    }
                    # 9 "sOrOrNode_clone"
                    # 8 "sOrOrNode_clone"
                    if(_if_conditional710=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional710) {
                        # 8 "sOrOrNode_clone"
                        __dec_obj289=result_330->sname;
                        result_330->sname=(char*)come_increment_ref_count(((char*)(right_value694=string_clone(self->sname))));
                        __dec_obj289 = come_decrement_ref_count2(__dec_obj289, (void*)0, (void*)0, 0,0,0, (void*)0);
                        right_value694 = come_decrement_ref_count2(right_value694, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                    }
                    # 9 "sOrOrNode_clone"
                    __result389__ = __result_obj__ = result_330;
                    come_call_finalizer2(sOrOrNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                    return __result389__;
                    come_call_finalizer2(sOrOrNode_finalize,result_330, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
void* right_value696;
struct sNode* node_331;
_Bool _while_condtional20;
_Bool _if_conditional711;
void* right_value697;
struct sNode* node2_332;
void* right_value698;
void* right_value699;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* right_value704;
struct sNode* __result394__;
struct sNode* __result395__;
memset(&__result_obj__, 0, sizeof(void*));
right_value696 = (void*)0;
memset(&node_331, 0, sizeof(struct sNode*));
right_value697 = (void*)0;
memset(&node2_332, 0, sizeof(struct sNode*));
right_value698 = (void*)0;
right_value699 = (void*)0;
right_value704 = (void*)0;
    # 2706 "13op.c"
    parse_sharp_v5(info);
    # 2708 "13op.c"
    node_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value696=oror_exp(info))));
    if(right_value696) { right_value696 = come_decrement_ref_count2(right_value696, ((struct sNode*)right_value696)->finalize, ((struct sNode*)right_value696)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2710 "13op.c"
    parse_sharp_v5(info);
    # 2726 "13op.c"
    while(_while_condtional20=*info->p,    _while_condtional20) {
        # 2724 "13op.c"
        # 2713 "13op.c"
        if(_if_conditional711=!info->no_comma&&*info->p==44,        _if_conditional711) {
            # 2714 "13op.c"
            info->p++;
            # 2715 "13op.c"
            skip_spaces_and_lf(info);
            # 2717 "13op.c"
            node2_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value697=oror_exp(info))));
            if(right_value697) { right_value697 = come_decrement_ref_count2(right_value697, ((struct sNode*)right_value697)->finalize, ((struct sNode*)right_value697)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2719 "13op.c"
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2719, "struct sNode");
            _inf_obj_value43=come_increment_ref_count(((struct sCommaNode*)(right_value699=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value698=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2719, "sCommaNode")))),(struct sNode*)come_increment_ref_count(node_331),(struct sNode*)come_increment_ref_count(node2_332),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sCommaNode_sline;
            _inf_value43->sname=(void*)sCommaNode_sname;
            _inf_value43->terminated=(void*)sCommaNode_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result394__ = __result_obj__ = ((struct sNode*)(right_value704=_inf_value43));
            if(node2_332) { node2_332 = come_decrement_ref_count2(node2_332, ((struct sNode*)node2_332)->finalize, ((struct sNode*)node2_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sCommaNode_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sCommaNode_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value704) { right_value704 = come_decrement_ref_count2(right_value704, ((struct sNode*)right_value704)->finalize, ((struct sNode*)right_value704)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result394__;
            if(node2_332) { node2_332 = come_decrement_ref_count2(node2_332, ((struct sNode*)node2_332)->finalize, ((struct sNode*)node2_332)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2722 "13op.c"
            break;
        }
    }
    # 2726 "13op.c"
    parse_sharp_v5(info);
    # 2728 "13op.c"
    __result395__ = __result_obj__ = node_331;
    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result395__;
    if(node_331) { node_331 = come_decrement_ref_count2(node_331, ((struct sNode*)node_331)->finalize, ((struct sNode*)node_331)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional712;
_Bool _if_conditional713;
_Bool _if_conditional714;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sCommaNode_finalize"
                # 0 "sCommaNode_finalize"
                if(_if_conditional712=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional712) {
                    # 0 "sCommaNode_finalize"
                    if(self->mLeft) { self->mLeft = come_decrement_ref_count2(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 2 "sCommaNode_finalize"
                # 1 "sCommaNode_finalize"
                if(_if_conditional713=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional713) {
                    # 1 "sCommaNode_finalize"
                    if(self->mRight) { self->mRight = come_decrement_ref_count2(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 3 "sCommaNode_finalize"
                # 2 "sCommaNode_finalize"
                if(_if_conditional714=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional714) {
                    # 2 "sCommaNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool _if_conditional715;
struct sCommaNode* __result392__;
void* right_value700;
struct sCommaNode* result_333;
_Bool _if_conditional716;
void* right_value701;
struct sNode* __dec_obj290;
_Bool _if_conditional717;
void* right_value702;
struct sNode* __dec_obj291;
_Bool _if_conditional718;
_Bool _if_conditional719;
void* right_value703;
char* __dec_obj292;
struct sCommaNode* __result393__;
memset(&__result_obj__, 0, sizeof(void*));
right_value700 = (void*)0;
memset(&result_333, 0, sizeof(struct sCommaNode*));
right_value701 = (void*)0;
right_value702 = (void*)0;
right_value703 = (void*)0;
                # 3 "sCommaNode_clone"
                # 2 "sCommaNode_clone"
                if(_if_conditional715=self==(void*)0,                _if_conditional715) {
                    # 2 "sCommaNode_clone"
                    __result392__ = __result_obj__ = (void*)0;
                    return __result392__;
                }
                # 3 "sCommaNode_clone"
                result_333=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value700=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "sCommaNode"))));
                come_call_finalizer2(sCommaNode_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sCommaNode_clone"
                # 4 "sCommaNode_clone"
                if(_if_conditional716=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional716) {
                    # 4 "sCommaNode_clone"
                    __dec_obj290=result_333->mLeft;
                    result_333->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value701=sNode_clone(self->mLeft))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count2(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value701) { right_value701 = come_decrement_ref_count2(right_value701, ((struct sNode*)right_value701)->finalize, ((struct sNode*)right_value701)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "sCommaNode_clone"
                # 5 "sCommaNode_clone"
                if(_if_conditional717=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional717) {
                    # 5 "sCommaNode_clone"
                    __dec_obj291=result_333->mRight;
                    result_333->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value702=sNode_clone(self->mRight))));
                    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count2(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value702) { right_value702 = come_decrement_ref_count2(right_value702, ((struct sNode*)right_value702)->finalize, ((struct sNode*)right_value702)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 7 "sCommaNode_clone"
                # 6 "sCommaNode_clone"
                if(_if_conditional718=self!=((void*)0),                _if_conditional718) {
                    # 6 "sCommaNode_clone"
                    result_333->sline=self->sline;
                }
                # 8 "sCommaNode_clone"
                # 7 "sCommaNode_clone"
                if(_if_conditional719=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional719) {
                    # 7 "sCommaNode_clone"
                    __dec_obj292=result_333->sname;
                    result_333->sname=(char*)come_increment_ref_count(((char*)(right_value703=string_clone(self->sname))));
                    __dec_obj292 = come_decrement_ref_count2(__dec_obj292, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value703 = come_decrement_ref_count2(right_value703, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 8 "sCommaNode_clone"
                __result393__ = __result_obj__ = result_333;
                come_call_finalizer2(sCommaNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result393__;
                come_call_finalizer2(sCommaNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
void* right_value705;
struct sNode* node_334;
_Bool _while_condtional21;
_Bool _if_conditional720;
struct sNode* value1_335;
_Bool _if_conditional721;
void* right_value706;
void* right_value707;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value710;
struct sNode* __dec_obj294;
void* right_value711;
struct sNode* __dec_obj295;
void* right_value712;
struct sNode* value2_337;
void* right_value713;
void* right_value714;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* right_value720;
struct sNode* __result400__;
struct sNode* __result401__;
memset(&__result_obj__, 0, sizeof(void*));
right_value705 = (void*)0;
memset(&node_334, 0, sizeof(struct sNode*));
memset(&value1_335, 0, sizeof(struct sNode*));
right_value706 = (void*)0;
right_value707 = (void*)0;
right_value710 = (void*)0;
right_value711 = (void*)0;
right_value712 = (void*)0;
memset(&value2_337, 0, sizeof(struct sNode*));
right_value713 = (void*)0;
right_value714 = (void*)0;
right_value720 = (void*)0;
    # 2733 "13op.c"
    parse_sharp_v5(info);
    # 2735 "13op.c"
    node_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value705=comma_exp(info))));
    if(right_value705) { right_value705 = come_decrement_ref_count2(right_value705, ((struct sNode*)right_value705)->finalize, ((struct sNode*)right_value705)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2737 "13op.c"
    parse_sharp_v5(info);
    # 2769 "13op.c"
    while(_while_condtional21=*info->p,    _while_condtional21) {
        # 2767 "13op.c"
        # 2740 "13op.c"
        if(_if_conditional720=*info->p==63,        _if_conditional720) {
            # 2741 "13op.c"
            info->p++;
            # 2742 "13op.c"
            skip_spaces_and_lf(info);
            # 2744 "13op.c"
            parse_sharp_v5(info);
            # 2746 "13op.c"
            # 2754 "13op.c"
            # 2747 "13op.c"
            if(_if_conditional721=*info->p==58,            _if_conditional721) {
                # 2748 "13op.c"
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2748, "struct sNode");
                _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value707=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value706=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2748, "sNullNode")))),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNullNode_sline;
                _inf_value44->sname=(void*)sNullNode_sname;
                _inf_value44->terminated=(void*)sNullNode_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj294=value1_335;
                value1_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value710=_inf_value44)));
                if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count2(__dec_obj294, ((struct sNode*)__dec_obj294)->finalize, ((struct sNode*)__dec_obj294)->_protocol_obj, 0,0,0, (void*)0); }
                come_call_finalizer2(sNullNode_finalize,right_value706, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                come_call_finalizer2(sNullNode_finalize,right_value707, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                if(right_value710) { right_value710 = come_decrement_ref_count2(right_value710, ((struct sNode*)right_value710)->finalize, ((struct sNode*)right_value710)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            else {
                # 2751 "13op.c"
                __dec_obj295=value1_335;
                value1_335=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value711=comma_exp(info))));
                if(__dec_obj295) { __dec_obj295 = come_decrement_ref_count2(__dec_obj295, ((struct sNode*)__dec_obj295)->finalize, ((struct sNode*)__dec_obj295)->_protocol_obj, 0,0,0, (void*)0); }
                if(right_value711) { right_value711 = come_decrement_ref_count2(right_value711, ((struct sNode*)right_value711)->finalize, ((struct sNode*)right_value711)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            }
            # 2754 "13op.c"
            parse_sharp_v5(info);
            # 2756 "13op.c"
            expected_next_character(58,info);
            # 2758 "13op.c"
            value2_337=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value712=comma_exp(info))));
            if(right_value712) { right_value712 = come_decrement_ref_count2(right_value712, ((struct sNode*)right_value712)->finalize, ((struct sNode*)right_value712)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            # 2760 "13op.c"
            parse_sharp_v5(info);
            # 2762 "13op.c"
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2762, "struct sNode");
            _inf_obj_value45=come_increment_ref_count(((struct sConditionalNode*)(right_value714=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value713=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2762, "sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_334),(struct sNode*)come_increment_ref_count(value1_335),(struct sNode*)come_increment_ref_count(value2_337),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sConditionalNode_sline;
            _inf_value45->sname=(void*)sConditionalNode_sname;
            _inf_value45->terminated=(void*)sConditionalNode_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result400__ = __result_obj__ = ((struct sNode*)(right_value720=_inf_value45));
            if(value1_335) { value1_335 = come_decrement_ref_count2(value1_335, ((struct sNode*)value1_335)->finalize, ((struct sNode*)value1_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_337) { value2_337 = come_decrement_ref_count2(value2_337, ((struct sNode*)value2_337)->finalize, ((struct sNode*)value2_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
            come_call_finalizer2(sConditionalNode_finalize,right_value713, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sConditionalNode_finalize,right_value714, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value720) { right_value720 = come_decrement_ref_count2(right_value720, ((struct sNode*)right_value720)->finalize, ((struct sNode*)right_value720)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result400__;
            if(value1_335) { value1_335 = come_decrement_ref_count2(value1_335, ((struct sNode*)value1_335)->finalize, ((struct sNode*)value1_335)->_protocol_obj, 0, 0, 0, (void*)0); } 
            if(value2_337) { value2_337 = come_decrement_ref_count2(value2_337, ((struct sNode*)value2_337)->finalize, ((struct sNode*)value2_337)->_protocol_obj, 0, 0, 0, (void*)0); } 
        }
        else {
            # 2765 "13op.c"
            break;
        }
    }
    # 2769 "13op.c"
    parse_sharp_v5(info);
    # 2771 "13op.c"
    __result401__ = __result_obj__ = node_334;
    if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result401__;
    if(node_334) { node_334 = come_decrement_ref_count2(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional726;
_Bool _if_conditional727;
_Bool _if_conditional728;
_Bool _if_conditional729;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sConditionalNode_finalize"
                # 0 "sConditionalNode_finalize"
                if(_if_conditional726=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional726) {
                    # 0 "sConditionalNode_finalize"
                    if(self->mValue1) { self->mValue1 = come_decrement_ref_count2(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 2 "sConditionalNode_finalize"
                # 1 "sConditionalNode_finalize"
                if(_if_conditional727=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional727) {
                    # 1 "sConditionalNode_finalize"
                    if(self->mValue2) { self->mValue2 = come_decrement_ref_count2(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 3 "sConditionalNode_finalize"
                # 2 "sConditionalNode_finalize"
                if(_if_conditional728=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional728) {
                    # 2 "sConditionalNode_finalize"
                    if(self->mValue3) { self->mValue3 = come_decrement_ref_count2(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0, (void*)0); } 
                }
                # 4 "sConditionalNode_finalize"
                # 3 "sConditionalNode_finalize"
                if(_if_conditional729=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional729) {
                    # 3 "sConditionalNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool _if_conditional730;
struct sConditionalNode* __result398__;
void* right_value715;
struct sConditionalNode* result_338;
_Bool _if_conditional731;
void* right_value716;
struct sNode* __dec_obj296;
_Bool _if_conditional732;
void* right_value717;
struct sNode* __dec_obj297;
_Bool _if_conditional733;
void* right_value718;
struct sNode* __dec_obj298;
_Bool _if_conditional734;
_Bool _if_conditional735;
void* right_value719;
char* __dec_obj299;
struct sConditionalNode* __result399__;
memset(&__result_obj__, 0, sizeof(void*));
right_value715 = (void*)0;
memset(&result_338, 0, sizeof(struct sConditionalNode*));
right_value716 = (void*)0;
right_value717 = (void*)0;
right_value718 = (void*)0;
right_value719 = (void*)0;
                # 3 "sConditionalNode_clone"
                # 2 "sConditionalNode_clone"
                if(_if_conditional730=self==(void*)0,                _if_conditional730) {
                    # 2 "sConditionalNode_clone"
                    __result398__ = __result_obj__ = (void*)0;
                    return __result398__;
                }
                # 3 "sConditionalNode_clone"
                result_338=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value715=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "sConditionalNode"))));
                come_call_finalizer2(sConditionalNode_finalize,right_value715, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sConditionalNode_clone"
                # 4 "sConditionalNode_clone"
                if(_if_conditional731=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional731) {
                    # 4 "sConditionalNode_clone"
                    __dec_obj296=result_338->mValue1;
                    result_338->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value716=sNode_clone(self->mValue1))));
                    if(__dec_obj296) { __dec_obj296 = come_decrement_ref_count2(__dec_obj296, ((struct sNode*)__dec_obj296)->finalize, ((struct sNode*)__dec_obj296)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value716) { right_value716 = come_decrement_ref_count2(right_value716, ((struct sNode*)right_value716)->finalize, ((struct sNode*)right_value716)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 6 "sConditionalNode_clone"
                # 5 "sConditionalNode_clone"
                if(_if_conditional732=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional732) {
                    # 5 "sConditionalNode_clone"
                    __dec_obj297=result_338->mValue2;
                    result_338->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value717=sNode_clone(self->mValue2))));
                    if(__dec_obj297) { __dec_obj297 = come_decrement_ref_count2(__dec_obj297, ((struct sNode*)__dec_obj297)->finalize, ((struct sNode*)__dec_obj297)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value717) { right_value717 = come_decrement_ref_count2(right_value717, ((struct sNode*)right_value717)->finalize, ((struct sNode*)right_value717)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 7 "sConditionalNode_clone"
                # 6 "sConditionalNode_clone"
                if(_if_conditional733=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional733) {
                    # 6 "sConditionalNode_clone"
                    __dec_obj298=result_338->mValue3;
                    result_338->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value718=sNode_clone(self->mValue3))));
                    if(__dec_obj298) { __dec_obj298 = come_decrement_ref_count2(__dec_obj298, ((struct sNode*)__dec_obj298)->finalize, ((struct sNode*)__dec_obj298)->_protocol_obj, 0,0,0, (void*)0); }
                    if(right_value718) { right_value718 = come_decrement_ref_count2(right_value718, ((struct sNode*)right_value718)->finalize, ((struct sNode*)right_value718)->_protocol_obj, 1, 0, 0, __result_obj__); } 
                }
                # 8 "sConditionalNode_clone"
                # 7 "sConditionalNode_clone"
                if(_if_conditional734=self!=((void*)0),                _if_conditional734) {
                    # 7 "sConditionalNode_clone"
                    result_338->sline=self->sline;
                }
                # 9 "sConditionalNode_clone"
                # 8 "sConditionalNode_clone"
                if(_if_conditional735=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional735) {
                    # 8 "sConditionalNode_clone"
                    __dec_obj299=result_338->sname;
                    result_338->sname=(char*)come_increment_ref_count(((char*)(right_value719=string_clone(self->sname))));
                    __dec_obj299 = come_decrement_ref_count2(__dec_obj299, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value719 = come_decrement_ref_count2(right_value719, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 9 "sConditionalNode_clone"
                __result399__ = __result_obj__ = result_338;
                come_call_finalizer2(sConditionalNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result399__;
                come_call_finalizer2(sConditionalNode_finalize,result_338, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
void* right_value721;
struct sNode* node_339;
struct sNode* __result402__;
memset(&__result_obj__, 0, sizeof(void*));
right_value721 = (void*)0;
memset(&node_339, 0, sizeof(struct sNode*));
    # 2776 "13op.c"
    parse_sharp_v5(info);
    # 2778 "13op.c"
    node_339=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value721=conditional_exp(info))));
    if(right_value721) { right_value721 = come_decrement_ref_count2(right_value721, ((struct sNode*)right_value721)->finalize, ((struct sNode*)right_value721)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    # 2780 "13op.c"
    __result402__ = __result_obj__ = node_339;
    if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 1, 0, (void*)0); } 
    return __result402__;
    if(node_339) { node_339 = come_decrement_ref_count2(node_339, ((struct sNode*)node_339)->finalize, ((struct sNode*)node_339)->_protocol_obj, 0, 0, 0, (void*)0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool _if_conditional736;
void* right_value722;
void* right_value723;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* right_value726;
struct sNode* __result405__;
_Bool _if_conditional741;
void* right_value727;
void* right_value728;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* right_value731;
struct sNode* __result408__;
void* right_value732;
struct sNode* __result409__;
memset(&__result_obj__, 0, sizeof(void*));
right_value722 = (void*)0;
right_value723 = (void*)0;
right_value726 = (void*)0;
right_value727 = (void*)0;
right_value728 = (void*)0;
right_value731 = (void*)0;
right_value732 = (void*)0;
    # 2792 "13op.c"
    # 2785 "13op.c"
    if(_if_conditional736=charp_operator_equals(buf,"null"),    _if_conditional736) {
        # 2786 "13op.c"
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2786, "struct sNode");
        _inf_obj_value46=come_increment_ref_count(((struct sNullNode*)(right_value723=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value722=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2786, "sNullNode")))),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNullNode_sline;
        _inf_value46->sname=(void*)sNullNode_sname;
        _inf_value46->terminated=(void*)sNullNode_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result405__ = __result_obj__ = ((struct sNode*)(right_value726=_inf_value46));
        come_call_finalizer2(sNullNode_finalize,right_value722, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        come_call_finalizer2(sNullNode_finalize,right_value723, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
        if(right_value726) { right_value726 = come_decrement_ref_count2(right_value726, ((struct sNode*)right_value726)->finalize, ((struct sNode*)right_value726)->_protocol_obj, 1, 0, 0, __result_obj__); } 
        return __result405__;
    }
    else {
        # 2792 "13op.c"
        # 2788 "13op.c"
        if(_if_conditional741=charp_operator_equals(buf,"nil"),        _if_conditional741) {
            # 2789 "13op.c"
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2789, "struct sNode");
            _inf_obj_value47=come_increment_ref_count(((struct sNilNode*)(right_value728=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value727=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2789, "sNilNode")))),info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sNilNode_finalize;
            _inf_value47->clone=(void*)sNilNode_clone;
            _inf_value47->compile=(void*)sNilNode_compile;
            _inf_value47->sline=(void*)sNilNode_sline;
            _inf_value47->sname=(void*)sNilNode_sname;
            _inf_value47->terminated=(void*)sNilNode_terminated;
            _inf_value47->kind=(void*)sNilNode_kind;
            __result408__ = __result_obj__ = ((struct sNode*)(right_value731=_inf_value47));
            come_call_finalizer2(sNilNode_finalize,right_value727, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            come_call_finalizer2(sNilNode_finalize,right_value728, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            if(right_value731) { right_value731 = come_decrement_ref_count2(right_value731, ((struct sNode*)right_value731)->finalize, ((struct sNode*)right_value731)->_protocol_obj, 1, 0, 0, __result_obj__); } 
            return __result408__;
        }
    }
    # 2792 "13op.c"
    __result409__ = __result_obj__ = ((struct sNode*)(right_value732=string_node_v12(buf,head,head_sline,info)));
    if(right_value732) { right_value732 = come_decrement_ref_count2(right_value732, ((struct sNode*)right_value732)->finalize, ((struct sNode*)right_value732)->_protocol_obj, 1, 0, 0, __result_obj__); } 
    return __result409__;
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional737;
memset(&__result_obj__, 0, sizeof(void*));
            # 1 "sNullNode_finalize"
            # 0 "sNullNode_finalize"
            if(_if_conditional737=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional737) {
                # 0 "sNullNode_finalize"
                self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool _if_conditional738;
struct sNullNode* __result403__;
void* right_value724;
struct sNullNode* result_340;
_Bool _if_conditional739;
_Bool _if_conditional740;
void* right_value725;
char* __dec_obj300;
struct sNullNode* __result404__;
memset(&__result_obj__, 0, sizeof(void*));
right_value724 = (void*)0;
memset(&result_340, 0, sizeof(struct sNullNode*));
right_value725 = (void*)0;
            # 3 "sNullNode_clone"
            # 2 "sNullNode_clone"
            if(_if_conditional738=self==(void*)0,            _if_conditional738) {
                # 2 "sNullNode_clone"
                __result403__ = __result_obj__ = (void*)0;
                return __result403__;
            }
            # 3 "sNullNode_clone"
            result_340=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value724=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "sNullNode"))));
            come_call_finalizer2(sNullNode_finalize,right_value724, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
            # 5 "sNullNode_clone"
            # 4 "sNullNode_clone"
            if(_if_conditional739=self!=((void*)0),            _if_conditional739) {
                # 4 "sNullNode_clone"
                result_340->sline=self->sline;
            }
            # 6 "sNullNode_clone"
            # 5 "sNullNode_clone"
            if(_if_conditional740=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional740) {
                # 5 "sNullNode_clone"
                __dec_obj300=result_340->sname;
                result_340->sname=(char*)come_increment_ref_count(((char*)(right_value725=string_clone(self->sname))));
                __dec_obj300 = come_decrement_ref_count2(__dec_obj300, (void*)0, (void*)0, 0,0,0, (void*)0);
                right_value725 = come_decrement_ref_count2(right_value725, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
            }
            # 6 "sNullNode_clone"
            __result404__ = __result_obj__ = result_340;
            come_call_finalizer2(sNullNode_finalize,result_340, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
            return __result404__;
            come_call_finalizer2(sNullNode_finalize,result_340, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

static void sNilNode_finalize(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional742;
memset(&__result_obj__, 0, sizeof(void*));
                # 1 "sNilNode_finalize"
                # 0 "sNilNode_finalize"
                if(_if_conditional742=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional742) {
                    # 0 "sNilNode_finalize"
                    self->sname = come_decrement_ref_count2(self->sname, (void*)0, (void*)0, 0, 0, 0, (void*)0);
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool _if_conditional743;
struct sNilNode* __result406__;
void* right_value729;
struct sNilNode* result_341;
_Bool _if_conditional744;
_Bool _if_conditional745;
void* right_value730;
char* __dec_obj301;
struct sNilNode* __result407__;
memset(&__result_obj__, 0, sizeof(void*));
right_value729 = (void*)0;
memset(&result_341, 0, sizeof(struct sNilNode*));
right_value730 = (void*)0;
                # 3 "sNilNode_clone"
                # 2 "sNilNode_clone"
                if(_if_conditional743=self==(void*)0,                _if_conditional743) {
                    # 2 "sNilNode_clone"
                    __result406__ = __result_obj__ = (void*)0;
                    return __result406__;
                }
                # 3 "sNilNode_clone"
                result_341=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value729=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "sNilNode"))));
                come_call_finalizer2(sNilNode_finalize,right_value729, (void*)0, (void*)0, 0, 1, 0, 0, __result_obj__);
                # 5 "sNilNode_clone"
                # 4 "sNilNode_clone"
                if(_if_conditional744=self!=((void*)0),                _if_conditional744) {
                    # 4 "sNilNode_clone"
                    result_341->sline=self->sline;
                }
                # 6 "sNilNode_clone"
                # 5 "sNilNode_clone"
                if(_if_conditional745=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional745) {
                    # 5 "sNilNode_clone"
                    __dec_obj301=result_341->sname;
                    result_341->sname=(char*)come_increment_ref_count(((char*)(right_value730=string_clone(self->sname))));
                    __dec_obj301 = come_decrement_ref_count2(__dec_obj301, (void*)0, (void*)0, 0,0,0, (void*)0);
                    right_value730 = come_decrement_ref_count2(right_value730, (void*)0, (void*)0, 1, 0, 0, __result_obj__);
                }
                # 6 "sNilNode_clone"
                __result407__ = __result_obj__ = result_341;
                come_call_finalizer2(sNilNode_finalize,result_341, (void*)0, (void*)0, 0, 0, 1, 0, (void*)0);
                return __result407__;
                come_call_finalizer2(sNilNode_finalize,result_341, (void*)0, (void*)0, 0, 0, 0, 0, (void*)0);
}

