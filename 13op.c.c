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
struct optional$2sFunpbool
{
    struct sFun* v1;
    _Bool v2;
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
static _Bool optional$2boolbool_value(struct optional$2boolbool* self);
static void optional$2boolboolp_finalize(struct optional$2boolbool* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self);
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
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2000, "struct smart_pointer$1char"))));
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2010, "struct smart_pointer$1char"))));
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2020, "struct smart_pointer$1short"))));
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2030, "struct smart_pointer$1int"))));
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2040, "struct smart_pointer$1long"))));
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

_Bool operator_overload_fun(struct sType* type, char* fun_name, struct CVALUE* left_value, struct CVALUE* right_value, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
struct sGenericsFun* generics_fun_40;
_Bool _if_conditional99;
void* right_value50;
_Bool _if_conditional100;
_Bool __result32__;
_Bool _if_conditional105;
void* right_value54;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_44;
char* fun_name_45;
void* right_value55;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_46;
char* fun_name2_47;
_Bool _if_conditional107;
void* right_value56;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_48;
char* fun_name_49;
void* right_value57;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_50;
char* fun_name2_51;
void* right_value58;
char* __dec_obj30;
int i_52;
_Bool _for_condtionalA1;
void* right_value59;
char* new_fun_name_53;
_Bool _if_conditional108;
void* right_value60;
char* __dec_obj31;
_Bool _if_conditional109;
_Bool result_54;
_Bool _if_conditional110;
void* right_value61;
struct CVALUE* come_value_55;
char* left_value2_56;
void* right_value62;
void* right_value63;
_Bool _if_conditional115;
void* right_value64;
char* __dec_obj32;
void* right_value65;
char* __dec_obj33;
char* right_value2_60;
void* right_value66;
void* right_value67;
_Bool _if_conditional116;
void* right_value68;
char* __dec_obj34;
void* right_value69;
char* __dec_obj35;
void* right_value70;
void* right_value71;
void* right_value72;
void* right_value73;
char* __dec_obj36;
void* right_value74;
struct sType* type2_61;
void* right_value75;
struct sType* type3_62;
void* right_value76;
struct sType* __dec_obj37;
_Bool _if_conditional117;
void* right_value77;
char* __dec_obj38;
void* right_value78;
char* __dec_obj39;
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value44, 0, sizeof(void*));
memset(&generics_type_29, 0, sizeof(struct sType*));
memset(&klass_30, 0, sizeof(struct sClass*));
memset(&class_name_31, 0, sizeof(char*));
memset(&operator_fun_32, 0, sizeof(struct sFun*));
memset(&fun_name2_33, 0, sizeof(char*));
memset(&right_value45, 0, sizeof(void*));
memset(&none_generics_name_34, 0, sizeof(char*));
memset(&right_value46, 0, sizeof(void*));
memset(&obj_type_35, 0, sizeof(struct sType*));
memset(&right_value47, 0, sizeof(void*));
memset(&right_value48, 0, sizeof(void*));
memset(&fun_name3_36, 0, sizeof(char*));
memset(&generics_fun_40, 0, sizeof(struct sGenericsFun*));
memset(&right_value50, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
memset(&fun_44, 0, sizeof(struct sFun*));
memset(&fun_name_45, 0, sizeof(char*));
memset(&fun_44, 0, sizeof(struct sFun*));
memset(&fun_name_45, 0, sizeof(char*));
memset(&right_value55, 0, sizeof(void*));
memset(&fun2_46, 0, sizeof(struct sFun*));
memset(&fun_name2_47, 0, sizeof(char*));
memset(&fun2_46, 0, sizeof(struct sFun*));
memset(&fun_name2_47, 0, sizeof(char*));
memset(&right_value56, 0, sizeof(void*));
memset(&fun_48, 0, sizeof(struct sFun*));
memset(&fun_name_49, 0, sizeof(char*));
memset(&fun_48, 0, sizeof(struct sFun*));
memset(&fun_name_49, 0, sizeof(char*));
memset(&right_value57, 0, sizeof(void*));
memset(&fun2_50, 0, sizeof(struct sFun*));
memset(&fun_name2_51, 0, sizeof(char*));
memset(&fun2_50, 0, sizeof(struct sFun*));
memset(&fun_name2_51, 0, sizeof(char*));
memset(&right_value58, 0, sizeof(void*));
memset(&i_52, 0, sizeof(int));
memset(&right_value59, 0, sizeof(void*));
memset(&new_fun_name_53, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
memset(&result_54, 0, sizeof(_Bool));
memset(&right_value61, 0, sizeof(void*));
memset(&come_value_55, 0, sizeof(struct CVALUE*));
memset(&left_value2_56, 0, sizeof(char*));
memset(&right_value62, 0, sizeof(void*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&right_value2_60, 0, sizeof(char*));
memset(&right_value66, 0, sizeof(void*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value74, 0, sizeof(void*));
memset(&type2_61, 0, sizeof(struct sType*));
memset(&right_value75, 0, sizeof(void*));
memset(&type3_62, 0, sizeof(struct sType*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44;
    __freed_obj__ = 0;
    if(_if_conditional91=generics_type_29->mNoSolvedGenericsType->v1,    _if_conditional91) {
        __dec_obj28=generics_type_29;
        generics_type_29=(struct sType*)come_increment_ref_count(generics_type_29->mNoSolvedGenericsType->v1);
        if(__dec_obj28) { come_call_finalizer(sType_finalize,__dec_obj28, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    if(_if_conditional92=type->mNoSolvedGenericsType->v1,    _if_conditional92) {
        type=type->mNoSolvedGenericsType->v1;
    }
    klass_30=type->mClass;
    class_name_31=klass_30->mName;
    operator_fun_32=((void*)0);
    if(_if_conditional93=list$1sTypeph_length(type->mGenericsTypes)>0,    _if_conditional93) {
        none_generics_name_34=(char*)come_increment_ref_count(((char*)(right_value45=get_none_generics_name(type->mClass->mName))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value45);
        if(right_value45 && right_value45 != __result_obj__ && !__freed_obj__) { right_value45 = come_decrement_ref_count(right_value45, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value45;
        __freed_obj__ = 0;
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value46;
        __freed_obj__ = 0;
        __dec_obj29=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value47;
        __freed_obj__ = 0;
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value48;
        __freed_obj__ = 0;
        generics_fun_40=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0));
        if(_if_conditional99=generics_fun_40,        _if_conditional99) {
            if(_if_conditional100=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(fun_name2_33)))),generics_fun_40,obj_type_35,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50),
            (right_value50 && right_value50 != __result_obj__ && !__freed_obj__) ? right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value50, 
            __freed_obj__ = 0, 
            _if_conditional100) {
                __result32__ = (_Bool)0;
                if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_33 && !__freed_obj__) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
                return __result32__;
            }
            operator_fun_32=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33);
        }
        else {
            if(_if_conditional105=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional105) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value54=create_equals_automatically(obj_type_35,"equals",info)));
                fun_44=multiple_assign_var1->v1;
                fun_name_45=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54;
                __freed_obj__ = 0;
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value55=create_operator_equals_automatically(obj_type_35,"operator_equals",info)));
                fun2_46=multiple_assign_var2->v1;
                fun_name2_47=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value55;
                __freed_obj__ = 0;
                operator_fun_32=fun2_46;
                if(fun_name_45 && !__freed_obj__) { fun_name_45 = come_decrement_ref_count(fun_name_45, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_47 && !__freed_obj__) { fun_name2_47 = come_decrement_ref_count(fun_name2_47, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional107=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional107) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value56=create_equals_automatically(obj_type_35,"not_equals",info)));
                    fun_48=multiple_assign_var3->v1;
                    fun_name_49=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value56;
                    __freed_obj__ = 0;
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value57=create_operator_not_equals_automatically(obj_type_35,"operator_not_equals",info)));
                    fun2_50=multiple_assign_var4->v1;
                    fun_name2_51=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value57);
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value57;
                    __freed_obj__ = 0;
                    operator_fun_32=fun2_50;
                    if(fun_name_49 && !__freed_obj__) { fun_name_49 = come_decrement_ref_count(fun_name_49, (void*)0, (void*)0, 0, 0, 0); }
                    if(fun_name2_51 && !__freed_obj__) { fun_name2_51 = come_decrement_ref_count(fun_name2_51, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    operator_fun_32=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33);
                }
            }
        }
        if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj30=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value58=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj30) { __dec_obj30 = come_decrement_ref_count(__dec_obj30, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
        if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { right_value58 = come_decrement_ref_count(right_value58, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value58;
        __freed_obj__ = 0;
        for(
        i_52=128-1 ,        0;        _for_condtionalA1=        i_52>=1 ,        _for_condtionalA1;        i_52-- ,        0        ){
            new_fun_name_53=(char*)come_increment_ref_count(((char*)(right_value59=xsprintf("%s_v%d",fun_name2_33,i_52))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
            if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value59;
            __freed_obj__ = 0;
            operator_fun_32=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_53);
            if(_if_conditional108=operator_fun_32,            _if_conditional108) {
                __dec_obj31=fun_name2_33;
                fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value60=__builtin_string(new_fun_name_53))));
                if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value60;
                __freed_obj__ = 0;
                if(new_fun_name_53 && !__freed_obj__) { new_fun_name_53 = come_decrement_ref_count(new_fun_name_53, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_53 && !__freed_obj__) { new_fun_name_53 = come_decrement_ref_count(new_fun_name_53, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional109=operator_fun_32==((void*)0),        _if_conditional109) {
            operator_fun_32=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33);
        }
    }
    result_54=(_Bool)0;
    if(_if_conditional110=operator_fun_32&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional110) {
        come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value61=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value61;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value63=xsprintf("\%s is assigned to",((char*)(right_value62=string_to_string(fun_name2_33)))))),list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0),left_value->type,left_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value62);
        if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value62;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value63);
        if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { right_value63 = come_decrement_ref_count(right_value63, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value63;
        __freed_obj__ = 0;
        if(_if_conditional115=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0)->mHeap&&left_value->type->mHeap,        _if_conditional115) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0),left_value->type,left_value,info);
            __dec_obj32=left_value2_56;
            left_value2_56=(char*)come_increment_ref_count(((char*)(right_value64=xsprintf("%s",left_value->c_value))));
            if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
            if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value64;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj33=left_value2_56;
            left_value2_56=(char*)come_increment_ref_count(((char*)(right_value65=string_clone(left_value->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65;
            __freed_obj__ = 0;
        }
        check_assign_type(((char*)(right_value67=xsprintf("\%s is assigned to",((char*)(right_value66=string_to_string(fun_name2_33)))))),list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1),right_value->type,right_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value66;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[4] = right_value67;
        __freed_obj__ = 0;
        if(_if_conditional116=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1)->mHeap&&right_value->type->mHeap,        _if_conditional116) {
            std_move(list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1),right_value->type,right_value,info);
            __dec_obj34=right_value2_60;
            right_value2_60=(char*)come_increment_ref_count(((char*)(right_value68=xsprintf("%s",right_value->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68);
            if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value68;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj35=right_value2_60;
            right_value2_60=(char*)come_increment_ref_count(((char*)(right_value69=string_clone(right_value->c_value))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { right_value69 = come_decrement_ref_count(right_value69, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value69;
            __freed_obj__ = 0;
        }
        __dec_obj36=come_value_55->c_value;
        come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value73=xsprintf("\%s(\%s,\%s)",((char*)(right_value70=string_to_string(fun_name2_33))),((char*)(right_value71=string_to_string(left_value2_56))),((char*)(right_value72=string_to_string(right_value2_60)))))));
        if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value70);
        if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[5] = right_value70;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 6, right_value71);
        if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[6] = right_value71;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 7, right_value72);
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[7] = right_value72;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 8, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[8] = right_value73;
        __freed_obj__ = 0;
        type2_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value74=sType_clone(operator_fun_32->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 9, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[9] = right_value74;
        __freed_obj__ = 0;
        type3_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value75=solve_generics(type2_61,generics_type_29,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 10, right_value75);
        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[10] = right_value75;
        __freed_obj__ = 0;
        __dec_obj37=come_value_55->type;
        come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value76=sType_clone(type3_62))));
        if(__dec_obj37) { come_call_finalizer(sType_finalize,__dec_obj37, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 11, right_value76);
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[11] = right_value76;
        __freed_obj__ = 0;
        come_value_55->var=((void*)0);
        if(_if_conditional117=type3_62->mHeap,        _if_conditional117) {
            __dec_obj38=come_value_55->c_value;
            come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value77=append_object_to_right_values(come_value_55->c_value,(struct sType*)come_increment_ref_count(type3_62),info))));
            if(__dec_obj38) { __dec_obj38 = come_decrement_ref_count(__dec_obj38, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value77;
            __freed_obj__ = 0;
        }
        __dec_obj39=come_value_55->c_value;
        come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value78=append_exception_value(come_value_55->c_value,come_value_55->type,info))));
        if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 12, right_value78);
        if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[12] = right_value78;
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_55->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_55));
        result_54=(_Bool)1;
        if(come_value_55 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_55, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_56 && !__freed_obj__) { left_value2_56 = come_decrement_ref_count(left_value2_56, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_60 && !__freed_obj__) { right_value2_60 = come_decrement_ref_count(right_value2_60, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_61, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type3_62 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_62, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result41__ = result_54;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_33 && !__freed_obj__) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
    return __result41__;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_33 && !__freed_obj__) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
}

static struct sType* sType_clone(struct sType* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value10, 0, sizeof(void*));
memset(&result_5, 0, sizeof(struct sType*));
memset(&right_value13, 0, sizeof(void*));
memset(&right_value14, 0, sizeof(void*));
memset(&right_value15, 0, sizeof(void*));
memset(&right_value22, 0, sizeof(void*));
memset(&right_value30, 0, sizeof(void*));
memset(&right_value31, 0, sizeof(void*));
memset(&right_value38, 0, sizeof(void*));
memset(&right_value39, 0, sizeof(void*));
memset(&right_value40, 0, sizeof(void*));
memset(&right_value41, 0, sizeof(void*));
memset(&right_value42, 0, sizeof(void*));
memset(&right_value43, 0, sizeof(void*));
        if(_if_conditional5=self==(void*)0,        _if_conditional5) {
            __result7__ = __result_obj__ = (void*)0;
            return __result7__;
        }
        result_5=(struct sType*)come_increment_ref_count(((struct sType*)(right_value10=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "sType_clone", 3, "struct sType"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value10;
        __freed_obj__ = 0;
        if(_if_conditional22=self!=((void*)0),        _if_conditional22) {
            result_5->mClass=self->mClass;
        }
        if(_if_conditional23=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),        _if_conditional23) {
            __dec_obj7=result_5->mNoSolvedGenericsType;
            result_5->mNoSolvedGenericsType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value13=tuple1$1sTypephp_clone(self->mNoSolvedGenericsType))));
            if(__dec_obj7) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj7, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value13);
            if(right_value13 && right_value13 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value13, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value13;
            __freed_obj__ = 0;
        }
        if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional27) {
            __dec_obj8=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value14;
            __freed_obj__ = 0;
        }
        if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value15=string_clone(self->mGenericsName))));
            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15;
            __freed_obj__ = 0;
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional29) {
            __dec_obj13=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value22;
            __freed_obj__ = 0;
        }
        if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional33) {
            __dec_obj17=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value30;
            __freed_obj__ = 0;
        }
        if(_if_conditional46=self!=((void*)0),        _if_conditional46) {
            result_5->mOmitArrayNum=self->mOmitArrayNum;
        }
        if(_if_conditional47=self!=((void*)0)&&self->mParamTypes!=((void*)0),        _if_conditional47) {
            __dec_obj18=result_5->mParamTypes;
            result_5->mParamTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value31=list$1sTypephp_clone(self->mParamTypes))));
            if(__dec_obj18) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj18, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value31);
            if(right_value31 && right_value31 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value31, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value31;
            __freed_obj__ = 0;
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional48) {
            __dec_obj22=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38;
            __freed_obj__ = 0;
        }
        if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional52) {
            __dec_obj23=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value39;
            __freed_obj__ = 0;
        }
        if(_if_conditional53=self!=((void*)0),        _if_conditional53) {
            result_5->mVarArgs=self->mVarArgs;
        }
        if(_if_conditional54=self!=((void*)0)&&self->mAlignas!=((void*)0),        _if_conditional54) {
            __dec_obj24=result_5->mAlignas;
            result_5->mAlignas=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value40=sNode_clone(self->mAlignas))));
            if(__dec_obj24) { __dec_obj24 = come_decrement_ref_count(__dec_obj24, ((struct sNode*)__dec_obj24)->finalize, ((struct sNode*)__dec_obj24)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value40);
            if(right_value40 && right_value40 != __result_obj__ && !__freed_obj__) { right_value40 = come_decrement_ref_count(right_value40, ((struct sNode*)right_value40)->finalize, ((struct sNode*)right_value40)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value40;
            __freed_obj__ = 0;
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
            if(__dec_obj25) { __dec_obj25 = come_decrement_ref_count(__dec_obj25, ((struct sNode*)__dec_obj25)->finalize, ((struct sNode*)__dec_obj25)->_protocol_obj, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value41);
            if(right_value41 && right_value41 != __result_obj__ && !__freed_obj__) { right_value41 = come_decrement_ref_count(right_value41, ((struct sNode*)right_value41)->finalize, ((struct sNode*)right_value41)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value41;
            __freed_obj__ = 0;
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
            if(__dec_obj26) { __dec_obj26 = come_decrement_ref_count(__dec_obj26, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value42);
            if(right_value42 && right_value42 != __result_obj__ && !__freed_obj__) { right_value42 = come_decrement_ref_count(right_value42, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value42;
            __freed_obj__ = 0;
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
            if(__dec_obj27) { __dec_obj27 = come_decrement_ref_count(__dec_obj27, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value43);
            if(right_value43 && right_value43 != __result_obj__ && !__freed_obj__) { right_value43 = come_decrement_ref_count(right_value43, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value43;
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
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional6=self!=((void*)0)&&self->mNoSolvedGenericsType!=((void*)0),            _if_conditional6) {
                if(self->mNoSolvedGenericsType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mNoSolvedGenericsType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional8=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),            _if_conditional8) {
                if(self->mOriginalLoadVarType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mOriginalLoadVarType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional9=self!=((void*)0)&&self->mGenericsName!=((void*)0),            _if_conditional9) {
                if(self->mGenericsName && !__freed_obj__) { self->mGenericsName = come_decrement_ref_count(self->mGenericsName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional10=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),            _if_conditional10) {
                if(self->mGenericsTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mGenericsTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional12=self!=((void*)0)&&self->mArrayNum!=((void*)0),            _if_conditional12) {
                if(self->mArrayNum && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mArrayNum, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional14=self!=((void*)0)&&self->mParamTypes!=((void*)0),            _if_conditional14) {
                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional15=self!=((void*)0)&&self->mParamNames!=((void*)0),            _if_conditional15) {
                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional17=self!=((void*)0)&&self->mResultType!=((void*)0),            _if_conditional17) {
                if(self->mResultType && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
            if(_if_conditional18=self!=((void*)0)&&self->mAlignas!=((void*)0),            _if_conditional18) {
                if(self->mAlignas && !__freed_obj__) { self->mAlignas = come_decrement_ref_count(self->mAlignas, ((struct sNode*)self->mAlignas)->finalize, ((struct sNode*)self->mAlignas)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional19=self!=((void*)0)&&self->mSizeNum!=((void*)0),            _if_conditional19) {
                if(self->mSizeNum && !__freed_obj__) { self->mSizeNum = come_decrement_ref_count(self->mSizeNum, ((struct sNode*)self->mSizeNum)->finalize, ((struct sNode*)self->mSizeNum)->_protocol_obj, 0, 0, 0); } 
            }
            if(_if_conditional20=self!=((void*)0)&&self->mOriginalTypeName!=((void*)0),            _if_conditional20) {
                if(self->mOriginalTypeName && !__freed_obj__) { self->mOriginalTypeName = come_decrement_ref_count(self->mOriginalTypeName, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional21=self!=((void*)0)&&self->mAsmName!=((void*)0),            _if_conditional21) {
                if(self->mAsmName && !__freed_obj__) { self->mAsmName = come_decrement_ref_count(self->mAsmName, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static void tuple1$1sTypephp_finalize(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional7;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional7=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional7) {
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
                    while(_while_condtional1=it_6!=((void*)0),                    _while_condtional1) {
                        prev_it_7=it_6;
                        it_6=it_6->next;
                        if(prev_it_7 && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,prev_it_7, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sTypephp_finalize(struct list_item$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional11;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional11=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional11) {
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
                    while(_while_condtional2=it_8!=((void*)0),                    _while_condtional2) {
                        prev_it_9=it_8;
                        it_8=it_8->next;
                        if(prev_it_9 && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,prev_it_9, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1sNodephp_finalize(struct list_item$1sNodeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional13;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional13=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional13) {
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
                    while(_while_condtional3=it_10!=((void*)0),                    _while_condtional3) {
                        prev_it_11=it_10;
                        it_10=it_10->next;
                        if(prev_it_11 && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,prev_it_11, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static void list_item$1charphp_finalize(struct list_item$1charph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional16;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional16=self!=((void*)0)&&self->item!=((void*)0),                            _if_conditional16) {
                                if(self->item && !__freed_obj__) { self->item = come_decrement_ref_count(self->item, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct tuple1$1sTypeph* tuple1$1sTypephp_clone(struct tuple1$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional24;
struct tuple1$1sTypeph* __result8__;
void* right_value11;
struct tuple1$1sTypeph* result_12;
_Bool _if_conditional26;
void* right_value12;
struct sType* __dec_obj6;
struct tuple1$1sTypeph* __result9__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value11, 0, sizeof(void*));
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
memset(&right_value12, 0, sizeof(void*));
                if(_if_conditional24=self==(void*)0,                _if_conditional24) {
                    __result8__ = __result_obj__ = (void*)0;
                    return __result8__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value11;
                __freed_obj__ = 0;
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional26) {
                    __dec_obj6=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(self->v1))));
                    if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12;
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
_Bool _if_conditional25;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional25=self!=((void*)0)&&self->v1!=((void*)0),                    _if_conditional25) {
                        if(self->v1 && !__freed_obj__) { come_call_finalizer(sType_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

static struct list$1sTypeph* list$1sTypephp_clone(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value16, 0, sizeof(void*));
memset(&right_value17, 0, sizeof(void*));
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value21, 0, sizeof(void*));
                if(_if_conditional30=self==((void*)0),                _if_conditional30) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value17;
                __freed_obj__ = 0;
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(it_14->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value21;
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value18, 0, sizeof(void*));
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value19, 0, sizeof(void*));
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
memset(&right_value20, 0, sizeof(void*));
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value18;
                            __freed_obj__ = 0;
                            litem_15->prev=((void*)0);
                            litem_15->next=((void*)0);
                            __dec_obj10=litem_15->item;
                            litem_15->item=(struct sType*)come_increment_ref_count(item);
                            if(__dec_obj10) { come_call_finalizer(sType_finalize,__dec_obj10, (void*)0, (void*)0, 0, 0, 0, 0); }
                            self->tail=litem_15;
                            self->head=litem_15;
                        }
                        else {
                            if(_if_conditional32=self->len==1,                            _if_conditional32) {
                                litem_16=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value19=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 222, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value19);
                                if(right_value19 && right_value19 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value19, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value19;
                                __freed_obj__ = 0;
                                litem_16->prev=self->head;
                                litem_16->next=((void*)0);
                                __dec_obj11=litem_16->item;
                                litem_16->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj11) { come_call_finalizer(sType_finalize,__dec_obj11, (void*)0, (void*)0, 0, 0, 0, 0); }
                                self->tail=litem_16;
                                self->head->next=litem_16;
                            }
                            else {
                                litem_17=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value20=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 232, "struct list_item$1sTypeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value20);
                                if(right_value20 && right_value20 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value20, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value20;
                                __freed_obj__ = 0;
                                litem_17->prev=self->tail;
                                litem_17->next=((void*)0);
                                __dec_obj12=litem_17->item;
                                litem_17->item=(struct sType*)come_increment_ref_count(item);
                                if(__dec_obj12) { come_call_finalizer(sType_finalize,__dec_obj12, (void*)0, (void*)0, 0, 0, 0, 0); }
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value23, 0, sizeof(void*));
memset(&right_value24, 0, sizeof(void*));
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value29, 0, sizeof(void*));
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result14__ = __result_obj__ = ((void*)0);
                    return __result14__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value24;
                __freed_obj__ = 0;
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(it_19->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value29;
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value25, 0, sizeof(void*));
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value26, 0, sizeof(void*));
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
memset(&right_value27, 0, sizeof(void*));
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value25;
                            __freed_obj__ = 0;
                            litem_20->prev=((void*)0);
                            litem_20->next=((void*)0);
                            __dec_obj14=litem_20->item;
                            litem_20->item=(struct sNode*)come_increment_ref_count(item);
                            if(__dec_obj14) { __dec_obj14 = come_decrement_ref_count(__dec_obj14, ((struct sNode*)__dec_obj14)->finalize, ((struct sNode*)__dec_obj14)->_protocol_obj, 0,0,0); }
                            self->tail=litem_20;
                            self->head=litem_20;
                        }
                        else {
                            if(_if_conditional36=self->len==1,                            _if_conditional36) {
                                litem_21=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value26=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 222, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value26);
                                if(right_value26 && right_value26 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value26, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value26;
                                __freed_obj__ = 0;
                                litem_21->prev=self->head;
                                litem_21->next=((void*)0);
                                __dec_obj15=litem_21->item;
                                litem_21->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj15) { __dec_obj15 = come_decrement_ref_count(__dec_obj15, ((struct sNode*)__dec_obj15)->finalize, ((struct sNode*)__dec_obj15)->_protocol_obj, 0,0,0); }
                                self->tail=litem_21;
                                self->head->next=litem_21;
                            }
                            else {
                                litem_22=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value27=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 232, "struct list_item$1sNodeph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value27);
                                if(right_value27 && right_value27 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value27, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value27;
                                __freed_obj__ = 0;
                                litem_22->prev=self->tail;
                                litem_22->next=((void*)0);
                                __dec_obj16=litem_22->item;
                                litem_22->item=(struct sNode*)come_increment_ref_count(item);
                                if(__dec_obj16) { __dec_obj16 = come_decrement_ref_count(__dec_obj16, ((struct sNode*)__dec_obj16)->finalize, ((struct sNode*)__dec_obj16)->_protocol_obj, 0,0,0); }
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value28, 0, sizeof(void*));
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            __result17__ = __result_obj__ = (void*)0;
                            return __result17__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value28;
                        __freed_obj__ = 0;
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value32, 0, sizeof(void*));
memset(&right_value33, 0, sizeof(void*));
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
memset(&right_value37, 0, sizeof(void*));
                if(_if_conditional49=self==((void*)0),                _if_conditional49) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value33;
                __freed_obj__ = 0;
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value37=string_clone(it_25->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value37;
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
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value34, 0, sizeof(void*));
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
memset(&right_value35, 0, sizeof(void*));
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
memset(&right_value36, 0, sizeof(void*));
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=self->len==0,                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value34;
                            __freed_obj__ = 0;
                            litem_26->prev=((void*)0);
                            litem_26->next=((void*)0);
                            __dec_obj19=litem_26->item;
                            litem_26->item=(char*)come_increment_ref_count(item);
                            if(__dec_obj19) { __dec_obj19 = come_decrement_ref_count(__dec_obj19, (void*)0, (void*)0, 0,0,0); }
                            self->tail=litem_26;
                            self->head=litem_26;
                        }
                        else {
                            if(_if_conditional51=self->len==1,                            _if_conditional51) {
                                litem_27=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value35=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 222, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value35);
                                if(right_value35 && right_value35 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value35, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value35;
                                __freed_obj__ = 0;
                                litem_27->prev=self->head;
                                litem_27->next=((void*)0);
                                __dec_obj20=litem_27->item;
                                litem_27->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj20) { __dec_obj20 = come_decrement_ref_count(__dec_obj20, (void*)0, (void*)0, 0,0,0); }
                                self->tail=litem_27;
                                self->head->next=litem_27;
                            }
                            else {
                                litem_28=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value36=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 232, "struct list_item$1charph"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value36);
                                if(right_value36 && right_value36 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value36, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value36;
                                __freed_obj__ = 0;
                                litem_28->prev=self->tail;
                                litem_28->next=((void*)0);
                                __dec_obj21=litem_28->item;
                                litem_28->item=(char*)come_increment_ref_count(item);
                                if(__dec_obj21) { __dec_obj21 = come_decrement_ref_count(__dec_obj21, (void*)0, (void*)0, 0,0,0); }
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

static int list$1sTypeph_length(struct list$1sTypeph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result25__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
        __result25__ = self->len;
        return __result25__;
}

static struct sGenericsFun* map$2charphsGenericsFunph_at(struct map$2charphsGenericsFunph* self, char* key, struct sGenericsFun* default_value){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
unsigned int hash_37;
unsigned int it_38;
_Bool _while_condtional7;
_Bool _if_conditional94;
void* right_value49;
_Bool _if_conditional96;
struct sGenericsFun* __result28__;
_Bool _if_conditional97;
_Bool _if_conditional98;
struct sGenericsFun* __result29__;
struct sGenericsFun* __result30__;
struct sGenericsFun* __result31__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
memset(&right_value49, 0, sizeof(void*));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            it_38=hash_37;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional94=self->item_existance[it_38],                _if_conditional94) {
                    if(_if_conditional96=optional$2boolbool_value(((struct optional$2boolbool*)(right_value49=string_equals(self->keys[it_38],key)))),                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49),
                    (right_value49 && right_value49 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0):0,
                    __right_value_freed_obj[0] = right_value49, 
                    __freed_obj__ = 0, 
                    _if_conditional96) {
                        __result28__ = __result_obj__ = self->items[it_38];
                        return __result28__;
                    }
                    it_38++;
                    if(_if_conditional97=it_38>=self->size,                    _if_conditional97) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional98=it_38==hash_37,                        _if_conditional98) {
                            __result29__ = __result_obj__ = default_value;
                            return __result29__;
                        }
                    }
                }
                else {
                    __result30__ = __result_obj__ = default_value;
                    return __result30__;
                }
            }
            __result31__ = __result_obj__ = default_value;
            return __result31__;
}

static _Bool optional$2boolbool_value(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional95;
_Bool default_value_39;
_Bool __result26__;
_Bool __result27__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_39, 0, sizeof(_Bool));
                        if(_if_conditional95=self==((void*)0),                        _if_conditional95) {
                            memset(&default_value_39,0,sizeof(_Bool));
                            __result26__ = default_value_39;
                            return __result26__;
                        }
                        else {
                            __result27__ = self->v1;
                            return __result27__;
                        }
}

static void optional$2boolboolp_finalize(struct optional$2boolbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_41;
unsigned int hash_42;
unsigned int it_43;
_Bool _while_condtional8;
_Bool _if_conditional101;
void* right_value51;
_Bool _if_conditional102;
struct sFun* __result33__;
_Bool _if_conditional103;
_Bool _if_conditional104;
struct sFun* __result34__;
struct sFun* __result35__;
void* right_value52;
void* right_value53;
struct sFun* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_41, 0, sizeof(struct sFun*));
memset(&hash_42, 0, sizeof(unsigned int));
memset(&it_43, 0, sizeof(unsigned int));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
                memset(&default_value_41,0,sizeof(struct sFun*));
                hash_42=string_get_hash_key(((char*)key))%self->size;
                it_43=hash_42;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional101=self->item_existance[it_43],                    _if_conditional101) {
                        if(_if_conditional102=optional$2boolbool_value(((struct optional$2boolbool*)(right_value51=string_equals(self->keys[it_43],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51),
                        (right_value51 && right_value51 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value51, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value51, 
                        __freed_obj__ = 0, 
                        _if_conditional102) {
                            __result33__ = __result_obj__ = self->items[it_43];
                            return __result33__;
                        }
                        it_43++;
                        if(_if_conditional103=it_43>=self->size,                        _if_conditional103) {
                            it_43=0;
                        }
                        else {
                            if(_if_conditional104=it_43==hash_42,                            _if_conditional104) {
                                __result34__ = __result_obj__ = default_value_41;
                                return __result34__;
                            }
                        }
                    }
                    else {
                        __result35__ = __result_obj__ = default_value_41;
                        return __result35__;
                    }
                }
                __result37__ = __result_obj__ = ((struct optional$2sFunpbool*)(right_value53=optional$2sFunpbool_initialize(((struct optional$2sFunpbool*)(right_value52=(struct optional$2sFunpbool*)come_calloc(1, sizeof(struct optional$2sFunpbool)*(1), "./comelang2.h", 1622, "struct optional$2sFunpbool"))),default_value_41,(_Bool)0)));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52);
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { right_value52 = come_decrement_ref_count(right_value52, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value52;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value53;
                __freed_obj__ = 0;
                return __result37__;
}

static struct optional$2sFunpbool* optional$2sFunpbool_initialize(struct optional$2sFunpbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct optional$2sFunpbool* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    self->v1=v1;
                    self->v2=v2;
                    __result36__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result36__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunpboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunpboolp_finalize(struct optional$2sFunpbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional106;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional106=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional106) {
                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional111;
_Bool _if_conditional112;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional111=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional111) {
                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional112=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional112) {
                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional113;
struct list_item$1sTypeph* it_57;
int i_58;
_Bool _while_condtional9;
_Bool _if_conditional114;
struct sType* __result38__;
struct sType* default_value_59;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_57, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_58, 0, sizeof(int));
memset(&default_value_59, 0, sizeof(struct sType*));
            if(_if_conditional113=position<0,            _if_conditional113) {
                position+=self->len;
            }
            it_57=self->head;
            i_58=0;
            while(_while_condtional9=it_57!=((void*)0),            _while_condtional9) {
                if(_if_conditional114=position==i_58,                _if_conditional114) {
                    __result38__ = __result_obj__ = it_57->item;
                    return __result38__;
                }
                it_57=it_57->next;
                i_58++;
            }
            memset(&default_value_59,0,sizeof(struct sType*));
            __result39__ = __result_obj__ = default_value_59;
            if(default_value_59 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_59, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result39__;
            if(default_value_59 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_59, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
void* right_value79;
struct list_item$1CVALUEph* litem_63;
struct CVALUE* __dec_obj40;
_Bool _if_conditional120;
void* right_value80;
struct list_item$1CVALUEph* litem_64;
struct CVALUE* __dec_obj41;
void* right_value81;
struct list_item$1CVALUEph* litem_65;
struct CVALUE* __dec_obj42;
struct list$1CVALUEph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value79, 0, sizeof(void*));
memset(&litem_63, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value80, 0, sizeof(void*));
memset(&litem_64, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value81, 0, sizeof(void*));
memset(&litem_65, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional118=self->len==0,            _if_conditional118) {
                litem_63=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value79=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
                if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value79, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value79;
                __freed_obj__ = 0;
                litem_63->prev=((void*)0);
                litem_63->next=((void*)0);
                __dec_obj40=litem_63->item;
                litem_63->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj40) { come_call_finalizer(CVALUE_finalize,__dec_obj40, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_63;
                self->head=litem_63;
            }
            else {
                if(_if_conditional120=self->len==1,                _if_conditional120) {
                    litem_64=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value80=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
                    if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value80, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value80;
                    __freed_obj__ = 0;
                    litem_64->prev=self->head;
                    litem_64->next=((void*)0);
                    __dec_obj41=litem_64->item;
                    litem_64->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_64;
                    self->head->next=litem_64;
                }
                else {
                    litem_65=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value81=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 302, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
                    if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value81, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value81;
                    __freed_obj__ = 0;
                    litem_65->prev=self->tail;
                    litem_65->next=((void*)0);
                    __dec_obj42=litem_65->item;
                    litem_65->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_65;
                    self->tail=litem_65;
                }
            }
            self->len++;
            __result40__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result40__;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional119=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional119) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value82;
char* __dec_obj43;
struct sNullNode* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value82, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj43=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value82=__builtin_string(info->sname))));
    if(__dec_obj43) { __dec_obj43 = come_decrement_ref_count(__dec_obj43, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value82);
    if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value82;
    __freed_obj__ = 0;
    __result42__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result42__;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result43__ = (_Bool)0;
    return __result43__;
}

char* sNullNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value83;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value83, 0, sizeof(void*));
    __result44__ = __result_obj__ = ((char*)(right_value83=__builtin_string("sNullNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
    if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value83;
    __freed_obj__ = 0;
    return __result44__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value84;
struct CVALUE* come_value_66;
void* right_value85;
char* __dec_obj44;
void* right_value86;
void* right_value87;
struct sType* __dec_obj45;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value84, 0, sizeof(void*));
memset(&come_value_66, 0, sizeof(struct CVALUE*));
memset(&right_value85, 0, sizeof(void*));
memset(&right_value86, 0, sizeof(void*));
memset(&right_value87, 0, sizeof(void*));
    come_value_66=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value84=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 150, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
    if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value84;
    __freed_obj__ = 0;
    __dec_obj44=come_value_66->c_value;
    come_value_66->c_value=(char*)come_increment_ref_count(((char*)(right_value85=xsprintf("((void*)0)"))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value85);
    if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { right_value85 = come_decrement_ref_count(right_value85, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value85;
    __freed_obj__ = 0;
    __dec_obj45=come_value_66->type;
    come_value_66->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value86=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 153, "struct sType")))),"void*",(_Bool)0,info))));
    if(__dec_obj45) { come_call_finalizer(sType_finalize,__dec_obj45, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value86);
    if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value86;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value87);
    if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value87;
    __freed_obj__ = 0;
    come_value_66->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_66->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_66));
    __result45__ = (_Bool)1;
    if(come_value_66 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_66, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result45__;
    if(come_value_66 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_66, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNullNode_sline(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result46__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result46__ = self->sline;
    return __result46__;
}

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value88;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value88, 0, sizeof(void*));
    __result47__ = __result_obj__ = ((char*)(right_value88=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
    if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value88;
    __freed_obj__ = 0;
    return __result47__;
}

struct sNode* create_null_object(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value89;
void* right_value90;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value93;
struct sNode* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value89, 0, sizeof(void*));
memset(&right_value90, 0, sizeof(void*));
memset(&right_value93, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 175, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value90=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value89=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 175, "struct sNullNode")))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNullNode_sline;
    _inf_value1->sname=(void*)sNullNode_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result50__ = __result_obj__ = ((struct sNode*)(right_value93=_inf_value1));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value89;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value90);
    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value90;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, ((struct sNode*)right_value93)->finalize, ((struct sNode*)right_value93)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value93;
    __freed_obj__ = 0;
    return __result50__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value94;
char* __dec_obj47;
struct sNilNode* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj47=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value94=__builtin_string(info->sname))));
    if(__dec_obj47) { __dec_obj47 = come_decrement_ref_count(__dec_obj47, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94;
    __freed_obj__ = 0;
    __result51__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result51__;
    if(self && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNilNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result52__ = (_Bool)0;
    return __result52__;
}

char* sNilNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value95;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
    __result53__ = __result_obj__ = ((char*)(right_value95=__builtin_string("sNilNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { right_value95 = come_decrement_ref_count(right_value95, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95;
    __freed_obj__ = 0;
    return __result53__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value96;
struct CVALUE* come_value_68;
void* right_value97;
char* __dec_obj48;
void* right_value98;
void* right_value99;
struct sType* __dec_obj49;
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value96, 0, sizeof(void*));
memset(&come_value_68, 0, sizeof(struct CVALUE*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
memset(&right_value99, 0, sizeof(void*));
    come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value96=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 205, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = 0;
    __dec_obj48=come_value_68->c_value;
    come_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value97=xsprintf("((void*)0)"))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value97;
    __freed_obj__ = 0;
    __dec_obj49=come_value_68->type;
    come_value_68->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value99=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value98=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 208, "struct sType")))),"void*",(_Bool)0,info))));
    if(__dec_obj49) { come_call_finalizer(sType_finalize,__dec_obj49, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value98;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value99;
    __freed_obj__ = 0;
    come_value_68->type->mNullValue=(_Bool)1;
    come_value_68->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_68->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_68));
    __result54__ = (_Bool)1;
    if(come_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result54__;
    if(come_value_68 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_68, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNilNode_sline(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result55__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result55__ = self->sline;
    return __result55__;
}

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value100;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
    __result56__ = __result_obj__ = ((char*)(right_value100=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { right_value100 = come_decrement_ref_count(right_value100, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100;
    __freed_obj__ = 0;
    return __result56__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value106;
char* __dec_obj51;
void* right_value107;
struct sNode* __dec_obj52;
void* right_value108;
struct sNode* __dec_obj53;
struct sAddNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
memset(&right_value107, 0, sizeof(void*));
memset(&right_value108, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj51=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value106=__builtin_string(info->sname))));
    if(__dec_obj51) { __dec_obj51 = come_decrement_ref_count(__dec_obj51, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106;
    __freed_obj__ = 0;
    __dec_obj52=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value107=sNode_clone(left))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, ((struct sNode*)__dec_obj52)->finalize, ((struct sNode*)__dec_obj52)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { right_value107 = come_decrement_ref_count(right_value107, ((struct sNode*)right_value107)->finalize, ((struct sNode*)right_value107)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value107;
    __freed_obj__ = 0;
    __dec_obj53=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value108=sNode_clone(right))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, ((struct sNode*)right_value108)->finalize, ((struct sNode*)right_value108)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value108;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __result60__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result60__;
    if(self && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAddNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result61__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result61__ = (_Bool)0;
    return __result61__;
}

char* sAddNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value109;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value109, 0, sizeof(void*));
    __result62__ = __result_obj__ = ((char*)(right_value109=__builtin_string("sAddNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109;
    __freed_obj__ = 0;
    return __result62__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_70;
_Bool _if_conditional134;
_Bool __result63__;
void* right_value110;
struct CVALUE* left_value_71;
struct sNode* right_node_72;
_Bool _if_conditional135;
_Bool __result64__;
void* right_value111;
struct CVALUE* right_value_73;
struct sType* type_74;
char* fun_name_75;
_Bool calling_fun_76;
_Bool _if_conditional136;
_Bool _if_conditional137;
void* right_value112;
struct CVALUE* come_value_77;
void* right_value113;
char* __dec_obj54;
void* right_value114;
struct sType* __dec_obj55;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_70, 0, sizeof(struct sNode*));
memset(&right_value110, 0, sizeof(void*));
memset(&left_value_71, 0, sizeof(struct CVALUE*));
memset(&right_node_72, 0, sizeof(struct sNode*));
memset(&right_value111, 0, sizeof(void*));
memset(&right_value_73, 0, sizeof(struct CVALUE*));
memset(&type_74, 0, sizeof(struct sType*));
memset(&fun_name_75, 0, sizeof(char*));
memset(&calling_fun_76, 0, sizeof(_Bool));
memset(&right_value112, 0, sizeof(void*));
memset(&come_value_77, 0, sizeof(struct CVALUE*));
memset(&right_value113, 0, sizeof(void*));
memset(&right_value114, 0, sizeof(void*));
    left_node_70=self->mLeft;
    if(_if_conditional134=!node_compile(left_node_70,info),    _if_conditional134) {
        __result63__ = (_Bool)0;
        return __result63__;
    }
    left_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value110=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value110;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_72=self->mRight;
    if(_if_conditional135=!node_compile(right_node_72,info),    _if_conditional135) {
        __result64__ = (_Bool)0;
        if(left_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result64__;
    }
    right_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value111=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value111, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value111;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_74=(struct sType*)come_increment_ref_count(left_value_71->type);
    fun_name_75="operator_add";
    if(_if_conditional136=self->mQuote,    _if_conditional136) {
        calling_fun_76=(_Bool)0;
    }
    else {
        calling_fun_76=operator_overload_fun(type_74,fun_name_75,left_value_71,right_value_73,info);
    }
    if(_if_conditional137=!calling_fun_76,    _if_conditional137) {
        come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value112=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 301, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value112);
        if(right_value112 && right_value112 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value112, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value112;
        __freed_obj__ = 0;
        __dec_obj54=come_value_77->c_value;
        come_value_77->c_value=(char*)come_increment_ref_count(((char*)(right_value113=xsprintf("%s+%s",left_value_71->c_value,right_value_73->c_value))));
        if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value113);
        if(right_value113 && right_value113 != __result_obj__ && !__freed_obj__) { right_value113 = come_decrement_ref_count(right_value113, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value113;
        __freed_obj__ = 0;
        __dec_obj55=come_value_77->type;
        come_value_77->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value114=sType_clone(left_value_71->type))));
        if(__dec_obj55) { come_call_finalizer(sType_finalize,__dec_obj55, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value114);
        if(right_value114 && right_value114 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value114, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value114;
        __freed_obj__ = 0;
        come_value_77->type->mHeap=(_Bool)0;
        come_value_77->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_77->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_77));
        if(come_value_77 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_77, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result65__ = (_Bool)1;
    if(left_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_73 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result65__;
    if(left_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_73 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_74 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_74, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAddNode_sline(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result66__ = self->sline;
    return __result66__;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value115;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value115, 0, sizeof(void*));
    __result67__ = __result_obj__ = ((char*)(right_value115=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115;
    __freed_obj__ = 0;
    return __result67__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value116;
char* __dec_obj56;
void* right_value117;
struct sNode* __dec_obj57;
void* right_value118;
struct sNode* __dec_obj58;
struct sSubNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value116, 0, sizeof(void*));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj56=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value116=__builtin_string(info->sname))));
    if(__dec_obj56) { __dec_obj56 = come_decrement_ref_count(__dec_obj56, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value116;
    __freed_obj__ = 0;
    __dec_obj57=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(left))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, ((struct sNode*)__dec_obj57)->finalize, ((struct sNode*)__dec_obj57)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value117;
    __freed_obj__ = 0;
    __dec_obj58=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(right))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value118;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __result68__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result68__;
    if(self && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sSubNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result69__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result69__ = (_Bool)0;
    return __result69__;
}

char* sSubNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value119;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value119, 0, sizeof(void*));
    __result70__ = __result_obj__ = ((char*)(right_value119=__builtin_string("sSubNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119;
    __freed_obj__ = 0;
    return __result70__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_78;
_Bool _if_conditional141;
_Bool __result71__;
void* right_value120;
struct CVALUE* left_value_79;
struct sNode* right_node_80;
_Bool _if_conditional142;
_Bool __result72__;
void* right_value121;
struct CVALUE* right_value_81;
struct sType* type_82;
char* fun_name_83;
_Bool calling_fun_84;
_Bool _if_conditional143;
_Bool _if_conditional144;
void* right_value122;
struct CVALUE* come_value_85;
void* right_value123;
char* __dec_obj59;
void* right_value124;
struct sType* __dec_obj60;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_78, 0, sizeof(struct sNode*));
memset(&right_value120, 0, sizeof(void*));
memset(&left_value_79, 0, sizeof(struct CVALUE*));
memset(&right_node_80, 0, sizeof(struct sNode*));
memset(&right_value121, 0, sizeof(void*));
memset(&right_value_81, 0, sizeof(struct CVALUE*));
memset(&type_82, 0, sizeof(struct sType*));
memset(&fun_name_83, 0, sizeof(char*));
memset(&calling_fun_84, 0, sizeof(_Bool));
memset(&right_value122, 0, sizeof(void*));
memset(&come_value_85, 0, sizeof(struct CVALUE*));
memset(&right_value123, 0, sizeof(void*));
memset(&right_value124, 0, sizeof(void*));
    left_node_78=self->mLeft;
    if(_if_conditional141=!node_compile(left_node_78,info),    _if_conditional141) {
        __result71__ = (_Bool)0;
        return __result71__;
    }
    left_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_80=self->mRight;
    if(_if_conditional142=!node_compile(right_node_80,info),    _if_conditional142) {
        __result72__ = (_Bool)0;
        if(left_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result72__;
    }
    right_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value121;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_82=(struct sType*)come_increment_ref_count(left_value_79->type);
    fun_name_83="operator_sub";
    if(_if_conditional143=self->mQuote,    _if_conditional143) {
        calling_fun_84=(_Bool)0;
    }
    else {
        calling_fun_84=operator_overload_fun(type_82,fun_name_83,left_value_79,right_value_81,info);
    }
    if(_if_conditional144=!calling_fun_84,    _if_conditional144) {
        come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 392, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value122;
        __freed_obj__ = 0;
        __dec_obj59=come_value_85->c_value;
        come_value_85->c_value=(char*)come_increment_ref_count(((char*)(right_value123=xsprintf("%s-%s",left_value_79->c_value,right_value_81->c_value))));
        if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { right_value123 = come_decrement_ref_count(right_value123, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value123;
        __freed_obj__ = 0;
        __dec_obj60=come_value_85->type;
        come_value_85->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value124=sType_clone(left_value_79->type))));
        if(__dec_obj60) { come_call_finalizer(sType_finalize,__dec_obj60, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value124);
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value124, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value124;
        __freed_obj__ = 0;
        come_value_85->type->mHeap=(_Bool)0;
        come_value_85->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_85->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_85));
        if(come_value_85 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_85, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result73__ = (_Bool)1;
    if(left_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_81 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_82 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_82, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result73__;
    if(left_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_81 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_82 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_82, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSubNode_sline(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result74__ = self->sline;
    return __result74__;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value125;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value125, 0, sizeof(void*));
    __result75__ = __result_obj__ = ((char*)(right_value125=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value125;
    __freed_obj__ = 0;
    return __result75__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value126;
char* __dec_obj61;
void* right_value127;
struct sNode* __dec_obj62;
void* right_value128;
struct sNode* __dec_obj63;
struct sMultNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj61=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value126=__builtin_string(info->sname))));
    if(__dec_obj61) { __dec_obj61 = come_decrement_ref_count(__dec_obj61, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value126;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj62=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(left))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, ((struct sNode*)__dec_obj62)->finalize, ((struct sNode*)__dec_obj62)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value127;
    __freed_obj__ = 0;
    __dec_obj63=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(right))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value128;
    __freed_obj__ = 0;
    __result76__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result76__;
    if(self && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMultNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result77__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result77__ = (_Bool)0;
    return __result77__;
}

char* sMultNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value129;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value129, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(right_value129=__builtin_string("sMultNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value129;
    __freed_obj__ = 0;
    return __result78__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_86;
_Bool _if_conditional148;
_Bool __result79__;
void* right_value130;
struct CVALUE* left_value_87;
struct sNode* right_node_88;
_Bool _if_conditional149;
_Bool __result80__;
void* right_value131;
struct CVALUE* right_value_89;
struct sType* type_90;
char* fun_name_91;
_Bool calling_fun_92;
_Bool _if_conditional150;
_Bool _if_conditional151;
void* right_value132;
struct CVALUE* come_value_93;
void* right_value133;
char* __dec_obj64;
void* right_value134;
struct sType* __dec_obj65;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_86, 0, sizeof(struct sNode*));
memset(&right_value130, 0, sizeof(void*));
memset(&left_value_87, 0, sizeof(struct CVALUE*));
memset(&right_node_88, 0, sizeof(struct sNode*));
memset(&right_value131, 0, sizeof(void*));
memset(&right_value_89, 0, sizeof(struct CVALUE*));
memset(&type_90, 0, sizeof(struct sType*));
memset(&fun_name_91, 0, sizeof(char*));
memset(&calling_fun_92, 0, sizeof(_Bool));
memset(&right_value132, 0, sizeof(void*));
memset(&come_value_93, 0, sizeof(struct CVALUE*));
memset(&right_value133, 0, sizeof(void*));
memset(&right_value134, 0, sizeof(void*));
    left_node_86=self->mLeft;
    if(_if_conditional148=!node_compile(left_node_86,info),    _if_conditional148) {
        __result79__ = (_Bool)0;
        return __result79__;
    }
    left_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value130;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_88=self->mRight;
    if(_if_conditional149=!node_compile(right_node_88,info),    _if_conditional149) {
        __result80__ = (_Bool)0;
        if(left_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result80__;
    }
    right_value_89=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value131;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_90=(struct sType*)come_increment_ref_count(left_value_87->type);
    fun_name_91="operator_mult";
    if(_if_conditional150=self->mQuote,    _if_conditional150) {
        calling_fun_92=(_Bool)0;
    }
    else {
        calling_fun_92=operator_overload_fun(type_90,fun_name_91,left_value_87,right_value_89,info);
    }
    if(_if_conditional151=!calling_fun_92,    _if_conditional151) {
        come_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value132=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 483, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value132;
        __freed_obj__ = 0;
        __dec_obj64=come_value_93->c_value;
        come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value133=xsprintf("%s*%s",left_value_87->c_value,right_value_89->c_value))));
        if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { right_value133 = come_decrement_ref_count(right_value133, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value133;
        __freed_obj__ = 0;
        __dec_obj65=come_value_93->type;
        come_value_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value134=sType_clone(left_value_87->type))));
        if(__dec_obj65) { come_call_finalizer(sType_finalize,__dec_obj65, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value134, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value134;
        __freed_obj__ = 0;
        come_value_93->type->mHeap=(_Bool)0;
        come_value_93->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_93->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_93));
        if(come_value_93 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_93, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result81__ = (_Bool)1;
    if(left_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_89 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_90, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result81__;
    if(left_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_89 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_90 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_90, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMultNode_sline(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result82__ = self->sline;
    return __result82__;
}

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value135;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value135, 0, sizeof(void*));
    __result83__ = __result_obj__ = ((char*)(right_value135=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value135;
    __freed_obj__ = 0;
    return __result83__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value136;
char* __dec_obj66;
void* right_value137;
struct sNode* __dec_obj67;
void* right_value138;
struct sNode* __dec_obj68;
struct sDivNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj66=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value136=__builtin_string(info->sname))));
    if(__dec_obj66) { __dec_obj66 = come_decrement_ref_count(__dec_obj66, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj67=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value137=sNode_clone(left))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, ((struct sNode*)__dec_obj67)->finalize, ((struct sNode*)__dec_obj67)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value137;
    __freed_obj__ = 0;
    __dec_obj68=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=sNode_clone(right))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value138;
    __freed_obj__ = 0;
    __result84__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result84__;
    if(self && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sDivNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result85__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result85__ = (_Bool)0;
    return __result85__;
}

char* sDivNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value139;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value139, 0, sizeof(void*));
    __result86__ = __result_obj__ = ((char*)(right_value139=__builtin_string("sDivNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139;
    __freed_obj__ = 0;
    return __result86__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_94;
_Bool _if_conditional155;
_Bool __result87__;
void* right_value140;
struct CVALUE* left_value_95;
struct sNode* right_node_96;
_Bool _if_conditional156;
_Bool __result88__;
void* right_value141;
struct CVALUE* right_value_97;
struct sType* type_98;
char* fun_name_99;
_Bool calling_fun_100;
_Bool _if_conditional157;
_Bool _if_conditional158;
void* right_value142;
struct CVALUE* come_value_101;
void* right_value143;
char* __dec_obj69;
void* right_value144;
struct sType* __dec_obj70;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_94, 0, sizeof(struct sNode*));
memset(&right_value140, 0, sizeof(void*));
memset(&left_value_95, 0, sizeof(struct CVALUE*));
memset(&right_node_96, 0, sizeof(struct sNode*));
memset(&right_value141, 0, sizeof(void*));
memset(&right_value_97, 0, sizeof(struct CVALUE*));
memset(&type_98, 0, sizeof(struct sType*));
memset(&fun_name_99, 0, sizeof(char*));
memset(&calling_fun_100, 0, sizeof(_Bool));
memset(&right_value142, 0, sizeof(void*));
memset(&come_value_101, 0, sizeof(struct CVALUE*));
memset(&right_value143, 0, sizeof(void*));
memset(&right_value144, 0, sizeof(void*));
    left_node_94=self->mLeft;
    if(_if_conditional155=!node_compile(left_node_94,info),    _if_conditional155) {
        __result87__ = (_Bool)0;
        return __result87__;
    }
    left_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_96=self->mRight;
    if(_if_conditional156=!node_compile(right_node_96,info),    _if_conditional156) {
        __result88__ = (_Bool)0;
        if(left_value_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result88__;
    }
    right_value_97=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value141;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_98=(struct sType*)come_increment_ref_count(left_value_95->type);
    fun_name_99="operator_div";
    if(_if_conditional157=self->mQuote,    _if_conditional157) {
        calling_fun_100=(_Bool)0;
    }
    else {
        calling_fun_100=operator_overload_fun(type_98,fun_name_99,left_value_95,right_value_97,info);
    }
    if(_if_conditional158=!calling_fun_100,    _if_conditional158) {
        come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 574, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value142;
        __freed_obj__ = 0;
        __dec_obj69=come_value_101->c_value;
        come_value_101->c_value=(char*)come_increment_ref_count(((char*)(right_value143=xsprintf("%s/%s",left_value_95->c_value,right_value_97->c_value))));
        if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { right_value143 = come_decrement_ref_count(right_value143, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value143;
        __freed_obj__ = 0;
        __dec_obj70=come_value_101->type;
        come_value_101->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value144=sType_clone(left_value_95->type))));
        if(__dec_obj70) { come_call_finalizer(sType_finalize,__dec_obj70, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value144, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value144;
        __freed_obj__ = 0;
        come_value_101->type->mHeap=(_Bool)0;
        come_value_101->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_101->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_101));
        if(come_value_101 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_101, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result89__ = (_Bool)1;
    if(left_value_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_97 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_98, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result89__;
    if(left_value_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_97 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_98 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_98, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sDivNode_sline(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result90__ = self->sline;
    return __result90__;
}

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value145;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value145, 0, sizeof(void*));
    __result91__ = __result_obj__ = ((char*)(right_value145=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value145;
    __freed_obj__ = 0;
    return __result91__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value146;
char* __dec_obj71;
void* right_value147;
struct sNode* __dec_obj72;
void* right_value148;
struct sNode* __dec_obj73;
struct sModNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj71=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value146=__builtin_string(info->sname))));
    if(__dec_obj71) { __dec_obj71 = come_decrement_ref_count(__dec_obj71, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value146;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj72=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(left))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, ((struct sNode*)__dec_obj72)->finalize, ((struct sNode*)__dec_obj72)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value147;
    __freed_obj__ = 0;
    __dec_obj73=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value148=sNode_clone(right))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, ((struct sNode*)right_value148)->finalize, ((struct sNode*)right_value148)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value148;
    __freed_obj__ = 0;
    __result92__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result92__;
    if(self && !__freed_obj__) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sModNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result93__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result93__ = (_Bool)0;
    return __result93__;
}

char* sModNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value149;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value149, 0, sizeof(void*));
    __result94__ = __result_obj__ = ((char*)(right_value149=__builtin_string("sModNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value149;
    __freed_obj__ = 0;
    return __result94__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_102;
_Bool _if_conditional162;
_Bool __result95__;
void* right_value150;
struct CVALUE* left_value_103;
struct sNode* right_node_104;
_Bool _if_conditional163;
_Bool __result96__;
void* right_value151;
struct CVALUE* right_value_105;
struct sType* type_106;
char* fun_name_107;
_Bool calling_fun_108;
_Bool _if_conditional164;
_Bool _if_conditional165;
void* right_value152;
struct CVALUE* come_value_109;
void* right_value153;
char* __dec_obj74;
void* right_value154;
struct sType* __dec_obj75;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_102, 0, sizeof(struct sNode*));
memset(&right_value150, 0, sizeof(void*));
memset(&left_value_103, 0, sizeof(struct CVALUE*));
memset(&right_node_104, 0, sizeof(struct sNode*));
memset(&right_value151, 0, sizeof(void*));
memset(&right_value_105, 0, sizeof(struct CVALUE*));
memset(&type_106, 0, sizeof(struct sType*));
memset(&fun_name_107, 0, sizeof(char*));
memset(&calling_fun_108, 0, sizeof(_Bool));
memset(&right_value152, 0, sizeof(void*));
memset(&come_value_109, 0, sizeof(struct CVALUE*));
memset(&right_value153, 0, sizeof(void*));
memset(&right_value154, 0, sizeof(void*));
    left_node_102=self->mLeft;
    if(_if_conditional162=!node_compile(left_node_102,info),    _if_conditional162) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    left_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value150;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_104=self->mRight;
    if(_if_conditional163=!node_compile(right_node_104,info),    _if_conditional163) {
        __result96__ = (_Bool)0;
        if(left_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result96__;
    }
    right_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value151=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value151;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_106=(struct sType*)come_increment_ref_count(left_value_103->type);
    fun_name_107="operator_mod";
    if(_if_conditional164=self->mQuote,    _if_conditional164) {
        calling_fun_108=(_Bool)0;
    }
    else {
        calling_fun_108=operator_overload_fun(type_106,fun_name_107,left_value_103,right_value_105,info);
    }
    if(_if_conditional165=!calling_fun_108,    _if_conditional165) {
        come_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 665, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value152;
        __freed_obj__ = 0;
        __dec_obj74=come_value_109->c_value;
        come_value_109->c_value=(char*)come_increment_ref_count(((char*)(right_value153=xsprintf("%s%%%s",left_value_103->c_value,right_value_105->c_value))));
        if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { right_value153 = come_decrement_ref_count(right_value153, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value153;
        __freed_obj__ = 0;
        __dec_obj75=come_value_109->type;
        come_value_109->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value154=sType_clone(left_value_103->type))));
        if(__dec_obj75) { come_call_finalizer(sType_finalize,__dec_obj75, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value154, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value154;
        __freed_obj__ = 0;
        come_value_109->type->mHeap=(_Bool)0;
        come_value_109->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_109->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_109));
        if(come_value_109 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_109, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result97__ = (_Bool)1;
    if(left_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_105 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_106 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_106, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result97__;
    if(left_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_105 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_106 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_106, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sModNode_sline(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result98__ = self->sline;
    return __result98__;
}

char* sModNode_sname(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value155;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value155, 0, sizeof(void*));
    __result99__ = __result_obj__ = ((char*)(right_value155=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value155;
    __freed_obj__ = 0;
    return __result99__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value156;
char* __dec_obj76;
void* right_value157;
struct sNode* __dec_obj77;
void* right_value158;
struct sNode* __dec_obj78;
struct sLShiftNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value156, 0, sizeof(void*));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj76=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value156=__builtin_string(info->sname))));
    if(__dec_obj76) { __dec_obj76 = come_decrement_ref_count(__dec_obj76, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value156;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj77=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=sNode_clone(left))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, ((struct sNode*)__dec_obj77)->finalize, ((struct sNode*)__dec_obj77)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value157;
    __freed_obj__ = 0;
    __dec_obj78=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=sNode_clone(right))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value158;
    __freed_obj__ = 0;
    __result100__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result100__;
    if(self && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLShiftNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result101__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result101__ = (_Bool)0;
    return __result101__;
}

char* sLShiftNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value159;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value159, 0, sizeof(void*));
    __result102__ = __result_obj__ = ((char*)(right_value159=__builtin_string("sLShiftNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value159;
    __freed_obj__ = 0;
    return __result102__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_110;
_Bool _if_conditional169;
_Bool __result103__;
void* right_value160;
struct CVALUE* left_value_111;
struct sNode* right_node_112;
_Bool _if_conditional170;
_Bool __result104__;
void* right_value161;
struct CVALUE* right_value_113;
struct sType* type_114;
char* fun_name_115;
_Bool calling_fun_116;
_Bool _if_conditional171;
_Bool _if_conditional172;
void* right_value162;
struct CVALUE* come_value_117;
void* right_value163;
char* __dec_obj79;
void* right_value164;
struct sType* __dec_obj80;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_110, 0, sizeof(struct sNode*));
memset(&right_value160, 0, sizeof(void*));
memset(&left_value_111, 0, sizeof(struct CVALUE*));
memset(&right_node_112, 0, sizeof(struct sNode*));
memset(&right_value161, 0, sizeof(void*));
memset(&right_value_113, 0, sizeof(struct CVALUE*));
memset(&type_114, 0, sizeof(struct sType*));
memset(&fun_name_115, 0, sizeof(char*));
memset(&calling_fun_116, 0, sizeof(_Bool));
memset(&right_value162, 0, sizeof(void*));
memset(&come_value_117, 0, sizeof(struct CVALUE*));
memset(&right_value163, 0, sizeof(void*));
memset(&right_value164, 0, sizeof(void*));
    left_node_110=self->mLeft;
    if(_if_conditional169=!node_compile(left_node_110,info),    _if_conditional169) {
        __result103__ = (_Bool)0;
        return __result103__;
    }
    left_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_112=self->mRight;
    if(_if_conditional170=!node_compile(right_node_112,info),    _if_conditional170) {
        __result104__ = (_Bool)0;
        if(left_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result104__;
    }
    right_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value161;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_114=(struct sType*)come_increment_ref_count(left_value_111->type);
    fun_name_115="operator_lshift";
    if(_if_conditional171=self->mQuote,    _if_conditional171) {
        calling_fun_116=(_Bool)0;
    }
    else {
        calling_fun_116=operator_overload_fun(type_114,fun_name_115,left_value_111,right_value_113,info);
    }
    if(_if_conditional172=!calling_fun_116,    _if_conditional172) {
        come_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 756, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value162;
        __freed_obj__ = 0;
        __dec_obj79=come_value_117->c_value;
        come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value163=xsprintf("%s<<%s",left_value_111->c_value,right_value_113->c_value))));
        if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { right_value163 = come_decrement_ref_count(right_value163, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value163;
        __freed_obj__ = 0;
        __dec_obj80=come_value_117->type;
        come_value_117->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value164=sType_clone(left_value_111->type))));
        if(__dec_obj80) { come_call_finalizer(sType_finalize,__dec_obj80, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value164, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value164;
        __freed_obj__ = 0;
        come_value_117->type->mHeap=(_Bool)0;
        come_value_117->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_117->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_117));
        if(come_value_117 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_117, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result105__ = (_Bool)1;
    if(left_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_113 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_114 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_114, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result105__;
    if(left_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_113 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_114 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_114, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result106__ = self->sline;
    return __result106__;
}

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value165;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value165, 0, sizeof(void*));
    __result107__ = __result_obj__ = ((char*)(right_value165=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value165;
    __freed_obj__ = 0;
    return __result107__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value166;
char* __dec_obj81;
void* right_value167;
struct sNode* __dec_obj82;
void* right_value168;
struct sNode* __dec_obj83;
struct sRShiftNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj81=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value166=__builtin_string(info->sname))));
    if(__dec_obj81) { __dec_obj81 = come_decrement_ref_count(__dec_obj81, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value166;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj82=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNode_clone(left))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, ((struct sNode*)__dec_obj82)->finalize, ((struct sNode*)__dec_obj82)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value167;
    __freed_obj__ = 0;
    __dec_obj83=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value168=sNode_clone(right))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value168;
    __freed_obj__ = 0;
    __result108__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result108__;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sRShiftNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result109__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result109__ = (_Bool)0;
    return __result109__;
}

char* sRShiftNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value169;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value169, 0, sizeof(void*));
    __result110__ = __result_obj__ = ((char*)(right_value169=__builtin_string("sRShiftNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value169;
    __freed_obj__ = 0;
    return __result110__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_118;
_Bool _if_conditional176;
_Bool __result111__;
void* right_value170;
struct CVALUE* left_value_119;
struct sNode* right_node_120;
_Bool _if_conditional177;
_Bool __result112__;
void* right_value171;
struct CVALUE* right_value_121;
struct sType* type_122;
char* fun_name_123;
_Bool calling_fun_124;
_Bool _if_conditional178;
_Bool _if_conditional179;
void* right_value172;
struct CVALUE* come_value_125;
void* right_value173;
char* __dec_obj84;
void* right_value174;
struct sType* __dec_obj85;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_118, 0, sizeof(struct sNode*));
memset(&right_value170, 0, sizeof(void*));
memset(&left_value_119, 0, sizeof(struct CVALUE*));
memset(&right_node_120, 0, sizeof(struct sNode*));
memset(&right_value171, 0, sizeof(void*));
memset(&right_value_121, 0, sizeof(struct CVALUE*));
memset(&type_122, 0, sizeof(struct sType*));
memset(&fun_name_123, 0, sizeof(char*));
memset(&calling_fun_124, 0, sizeof(_Bool));
memset(&right_value172, 0, sizeof(void*));
memset(&come_value_125, 0, sizeof(struct CVALUE*));
memset(&right_value173, 0, sizeof(void*));
memset(&right_value174, 0, sizeof(void*));
    left_node_118=self->mLeft;
    if(_if_conditional176=!node_compile(left_node_118,info),    _if_conditional176) {
        __result111__ = (_Bool)0;
        return __result111__;
    }
    left_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value170;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_120=self->mRight;
    if(_if_conditional177=!node_compile(right_node_120,info),    _if_conditional177) {
        __result112__ = (_Bool)0;
        if(left_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result112__;
    }
    right_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value171;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_122=(struct sType*)come_increment_ref_count(left_value_119->type);
    fun_name_123="operator_rshift";
    if(_if_conditional178=self->mQuote,    _if_conditional178) {
        calling_fun_124=(_Bool)0;
    }
    else {
        calling_fun_124=operator_overload_fun(type_122,fun_name_123,left_value_119,right_value_121,info);
    }
    if(_if_conditional179=!calling_fun_124,    _if_conditional179) {
        come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 847, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value172;
        __freed_obj__ = 0;
        __dec_obj84=come_value_125->c_value;
        come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value173=xsprintf("%s>>%s",left_value_119->c_value,right_value_121->c_value))));
        if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { right_value173 = come_decrement_ref_count(right_value173, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value173;
        __freed_obj__ = 0;
        __dec_obj85=come_value_125->type;
        come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value174=sType_clone(left_value_119->type))));
        if(__dec_obj85) { come_call_finalizer(sType_finalize,__dec_obj85, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value174);
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value174, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value174;
        __freed_obj__ = 0;
        come_value_125->type->mHeap=(_Bool)0;
        come_value_125->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_125->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_125));
        if(come_value_125 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_125, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result113__ = (_Bool)1;
    if(left_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_122 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result113__;
    if(left_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_121 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_122 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_122, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result114__ = self->sline;
    return __result114__;
}

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value175;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value175, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(right_value175=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value175;
    __freed_obj__ = 0;
    return __result115__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value176;
char* __dec_obj86;
void* right_value177;
struct sNode* __dec_obj87;
void* right_value178;
struct sNode* __dec_obj88;
struct sGtEqNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value176, 0, sizeof(void*));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj86=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value176=__builtin_string(info->sname))));
    if(__dec_obj86) { __dec_obj86 = come_decrement_ref_count(__dec_obj86, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value176;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj87=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value177=sNode_clone(left))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, ((struct sNode*)__dec_obj87)->finalize, ((struct sNode*)__dec_obj87)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value177;
    __freed_obj__ = 0;
    __dec_obj88=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(right))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value178;
    __freed_obj__ = 0;
    __result116__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result116__;
    if(self && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sGtEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result117__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result117__ = (_Bool)0;
    return __result117__;
}

char* sGtEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value179;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value179, 0, sizeof(void*));
    __result118__ = __result_obj__ = ((char*)(right_value179=__builtin_string("sGtEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value179;
    __freed_obj__ = 0;
    return __result118__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_126;
_Bool _if_conditional183;
_Bool __result119__;
void* right_value180;
struct CVALUE* left_value_127;
struct sNode* right_node_128;
_Bool _if_conditional184;
_Bool __result120__;
void* right_value181;
struct CVALUE* right_value_129;
struct sType* type_130;
char* fun_name_131;
_Bool calling_fun_132;
_Bool _if_conditional185;
_Bool _if_conditional186;
void* right_value182;
struct CVALUE* come_value_133;
void* right_value183;
char* __dec_obj89;
void* right_value184;
struct sType* __dec_obj90;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_126, 0, sizeof(struct sNode*));
memset(&right_value180, 0, sizeof(void*));
memset(&left_value_127, 0, sizeof(struct CVALUE*));
memset(&right_node_128, 0, sizeof(struct sNode*));
memset(&right_value181, 0, sizeof(void*));
memset(&right_value_129, 0, sizeof(struct CVALUE*));
memset(&type_130, 0, sizeof(struct sType*));
memset(&fun_name_131, 0, sizeof(char*));
memset(&calling_fun_132, 0, sizeof(_Bool));
memset(&right_value182, 0, sizeof(void*));
memset(&come_value_133, 0, sizeof(struct CVALUE*));
memset(&right_value183, 0, sizeof(void*));
memset(&right_value184, 0, sizeof(void*));
    left_node_126=self->mLeft;
    if(_if_conditional183=!node_compile(left_node_126,info),    _if_conditional183) {
        __result119__ = (_Bool)0;
        return __result119__;
    }
    left_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_128=self->mRight;
    if(_if_conditional184=!node_compile(right_node_128,info),    _if_conditional184) {
        __result120__ = (_Bool)0;
        if(left_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result120__;
    }
    right_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value181;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_130=(struct sType*)come_increment_ref_count(left_value_127->type);
    fun_name_131="operator_gteq";
    if(_if_conditional185=self->mQuote,    _if_conditional185) {
        calling_fun_132=(_Bool)0;
    }
    else {
        calling_fun_132=operator_overload_fun(type_130,fun_name_131,left_value_127,right_value_129,info);
    }
    if(_if_conditional186=!calling_fun_132,    _if_conditional186) {
        come_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 938, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value182;
        __freed_obj__ = 0;
        __dec_obj89=come_value_133->c_value;
        come_value_133->c_value=(char*)come_increment_ref_count(((char*)(right_value183=xsprintf("%s>=%s",left_value_127->c_value,right_value_129->c_value))));
        if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { right_value183 = come_decrement_ref_count(right_value183, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value183;
        __freed_obj__ = 0;
        __dec_obj90=come_value_133->type;
        come_value_133->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value184=sType_clone(left_value_127->type))));
        if(__dec_obj90) { come_call_finalizer(sType_finalize,__dec_obj90, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value184, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value184;
        __freed_obj__ = 0;
        come_value_133->type->mHeap=(_Bool)0;
        come_value_133->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_133->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_133));
        if(come_value_133 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_133, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result121__ = (_Bool)1;
    if(left_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_129 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_130, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result121__;
    if(left_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_129 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_130 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_130, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result122__ = self->sline;
    return __result122__;
}

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value185;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value185, 0, sizeof(void*));
    __result123__ = __result_obj__ = ((char*)(right_value185=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value185;
    __freed_obj__ = 0;
    return __result123__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value186;
char* __dec_obj91;
void* right_value187;
struct sNode* __dec_obj92;
void* right_value188;
struct sNode* __dec_obj93;
struct sLtEqNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value186, 0, sizeof(void*));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj91=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value186=__builtin_string(info->sname))));
    if(__dec_obj91) { __dec_obj91 = come_decrement_ref_count(__dec_obj91, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value186;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj92=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=sNode_clone(left))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, ((struct sNode*)__dec_obj92)->finalize, ((struct sNode*)__dec_obj92)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value187;
    __freed_obj__ = 0;
    __dec_obj93=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=sNode_clone(right))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value188;
    __freed_obj__ = 0;
    __result124__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result124__;
    if(self && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLtEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result125__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result125__ = (_Bool)0;
    return __result125__;
}

char* sLtEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value189;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value189, 0, sizeof(void*));
    __result126__ = __result_obj__ = ((char*)(right_value189=__builtin_string("sLtEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value189;
    __freed_obj__ = 0;
    return __result126__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_134;
_Bool _if_conditional190;
_Bool __result127__;
void* right_value190;
struct CVALUE* left_value_135;
struct sNode* right_node_136;
_Bool _if_conditional191;
_Bool __result128__;
void* right_value191;
struct CVALUE* right_value_137;
struct sType* type_138;
char* fun_name_139;
_Bool calling_fun_140;
_Bool _if_conditional192;
_Bool _if_conditional193;
void* right_value192;
struct CVALUE* come_value_141;
void* right_value193;
char* __dec_obj94;
void* right_value194;
struct sType* __dec_obj95;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_134, 0, sizeof(struct sNode*));
memset(&right_value190, 0, sizeof(void*));
memset(&left_value_135, 0, sizeof(struct CVALUE*));
memset(&right_node_136, 0, sizeof(struct sNode*));
memset(&right_value191, 0, sizeof(void*));
memset(&right_value_137, 0, sizeof(struct CVALUE*));
memset(&type_138, 0, sizeof(struct sType*));
memset(&fun_name_139, 0, sizeof(char*));
memset(&calling_fun_140, 0, sizeof(_Bool));
memset(&right_value192, 0, sizeof(void*));
memset(&come_value_141, 0, sizeof(struct CVALUE*));
memset(&right_value193, 0, sizeof(void*));
memset(&right_value194, 0, sizeof(void*));
    left_node_134=self->mLeft;
    if(_if_conditional190=!node_compile(left_node_134,info),    _if_conditional190) {
        __result127__ = (_Bool)0;
        return __result127__;
    }
    left_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value190;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_136=self->mRight;
    if(_if_conditional191=!node_compile(right_node_136,info),    _if_conditional191) {
        __result128__ = (_Bool)0;
        if(left_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result128__;
    }
    right_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value191;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_138=(struct sType*)come_increment_ref_count(left_value_135->type);
    fun_name_139="operator_lteq";
    if(_if_conditional192=self->mQuote,    _if_conditional192) {
        calling_fun_140=(_Bool)0;
    }
    else {
        calling_fun_140=operator_overload_fun(type_138,fun_name_139,left_value_135,right_value_137,info);
    }
    if(_if_conditional193=!calling_fun_140,    _if_conditional193) {
        come_value_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1029, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value192;
        __freed_obj__ = 0;
        __dec_obj94=come_value_141->c_value;
        come_value_141->c_value=(char*)come_increment_ref_count(((char*)(right_value193=xsprintf("%s<=%s",left_value_135->c_value,right_value_137->c_value))));
        if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value193);
        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { right_value193 = come_decrement_ref_count(right_value193, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value193;
        __freed_obj__ = 0;
        __dec_obj95=come_value_141->type;
        come_value_141->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value194=sType_clone(left_value_135->type))));
        if(__dec_obj95) { come_call_finalizer(sType_finalize,__dec_obj95, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value194, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value194;
        __freed_obj__ = 0;
        come_value_141->type->mHeap=(_Bool)0;
        come_value_141->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_141->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_141));
        if(come_value_141 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_141, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result129__ = (_Bool)1;
    if(left_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_137 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_138, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result129__;
    if(left_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_137 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_138 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_138, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result130__ = self->sline;
    return __result130__;
}

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value195;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value195, 0, sizeof(void*));
    __result131__ = __result_obj__ = ((char*)(right_value195=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value195;
    __freed_obj__ = 0;
    return __result131__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value196;
char* __dec_obj96;
void* right_value197;
struct sNode* __dec_obj97;
void* right_value198;
struct sNode* __dec_obj98;
struct sLtNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj96=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value196=__builtin_string(info->sname))));
    if(__dec_obj96) { __dec_obj96 = come_decrement_ref_count(__dec_obj96, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value196;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj97=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=sNode_clone(left))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, ((struct sNode*)__dec_obj97)->finalize, ((struct sNode*)__dec_obj97)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value197;
    __freed_obj__ = 0;
    __dec_obj98=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=sNode_clone(right))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value198;
    __freed_obj__ = 0;
    __result132__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result132__;
    if(self && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLtNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result133__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result133__ = (_Bool)0;
    return __result133__;
}

char* sLtNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value199;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value199, 0, sizeof(void*));
    __result134__ = __result_obj__ = ((char*)(right_value199=__builtin_string("sLtNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value199;
    __freed_obj__ = 0;
    return __result134__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_142;
_Bool _if_conditional197;
_Bool __result135__;
void* right_value200;
struct CVALUE* left_value_143;
struct sNode* right_node_144;
_Bool _if_conditional198;
_Bool __result136__;
void* right_value201;
struct CVALUE* right_value_145;
struct sType* type_146;
char* fun_name_147;
_Bool calling_fun_148;
_Bool _if_conditional199;
_Bool _if_conditional200;
void* right_value202;
struct CVALUE* come_value_149;
void* right_value203;
char* __dec_obj99;
void* right_value204;
struct sType* __dec_obj100;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_142, 0, sizeof(struct sNode*));
memset(&right_value200, 0, sizeof(void*));
memset(&left_value_143, 0, sizeof(struct CVALUE*));
memset(&right_node_144, 0, sizeof(struct sNode*));
memset(&right_value201, 0, sizeof(void*));
memset(&right_value_145, 0, sizeof(struct CVALUE*));
memset(&type_146, 0, sizeof(struct sType*));
memset(&fun_name_147, 0, sizeof(char*));
memset(&calling_fun_148, 0, sizeof(_Bool));
memset(&right_value202, 0, sizeof(void*));
memset(&come_value_149, 0, sizeof(struct CVALUE*));
memset(&right_value203, 0, sizeof(void*));
memset(&right_value204, 0, sizeof(void*));
    left_node_142=self->mLeft;
    if(_if_conditional197=!node_compile(left_node_142,info),    _if_conditional197) {
        __result135__ = (_Bool)0;
        return __result135__;
    }
    left_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value200;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_144=self->mRight;
    if(_if_conditional198=!node_compile(right_node_144,info),    _if_conditional198) {
        __result136__ = (_Bool)0;
        if(left_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result136__;
    }
    right_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value201;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_146=(struct sType*)come_increment_ref_count(left_value_143->type);
    fun_name_147="operator_lt";
    if(_if_conditional199=self->mQuote,    _if_conditional199) {
        calling_fun_148=(_Bool)0;
    }
    else {
        calling_fun_148=operator_overload_fun(type_146,fun_name_147,left_value_143,right_value_145,info);
    }
    if(_if_conditional200=!calling_fun_148,    _if_conditional200) {
        come_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1120, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value202;
        __freed_obj__ = 0;
        __dec_obj99=come_value_149->c_value;
        come_value_149->c_value=(char*)come_increment_ref_count(((char*)(right_value203=xsprintf("%s<%s",left_value_143->c_value,right_value_145->c_value))));
        if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value203);
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { right_value203 = come_decrement_ref_count(right_value203, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value203;
        __freed_obj__ = 0;
        __dec_obj100=come_value_149->type;
        come_value_149->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value204=sType_clone(left_value_143->type))));
        if(__dec_obj100) { come_call_finalizer(sType_finalize,__dec_obj100, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value204, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value204;
        __freed_obj__ = 0;
        come_value_149->type->mHeap=(_Bool)0;
        come_value_149->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_149->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_149));
        if(come_value_149 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_149, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result137__ = (_Bool)1;
    if(left_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_145 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_146 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_146, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result137__;
    if(left_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_145 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_146 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_146, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLtNode_sline(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result138__ = self->sline;
    return __result138__;
}

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value205;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value205, 0, sizeof(void*));
    __result139__ = __result_obj__ = ((char*)(right_value205=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value205;
    __freed_obj__ = 0;
    return __result139__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value206;
char* __dec_obj101;
void* right_value207;
struct sNode* __dec_obj102;
void* right_value208;
struct sNode* __dec_obj103;
struct sGtNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value206, 0, sizeof(void*));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj101=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value206=__builtin_string(info->sname))));
    if(__dec_obj101) { __dec_obj101 = come_decrement_ref_count(__dec_obj101, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value206;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj102=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value207=sNode_clone(left))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, ((struct sNode*)__dec_obj102)->finalize, ((struct sNode*)__dec_obj102)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value207;
    __freed_obj__ = 0;
    __dec_obj103=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNode_clone(right))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value208;
    __freed_obj__ = 0;
    __result140__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result140__;
    if(self && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sGtNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result141__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result141__ = (_Bool)0;
    return __result141__;
}

char* sGtNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value209;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value209, 0, sizeof(void*));
    __result142__ = __result_obj__ = ((char*)(right_value209=__builtin_string("sGtNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value209;
    __freed_obj__ = 0;
    return __result142__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_150;
_Bool _if_conditional204;
_Bool __result143__;
void* right_value210;
struct CVALUE* left_value_151;
struct sNode* right_node_152;
_Bool _if_conditional205;
_Bool __result144__;
void* right_value211;
struct CVALUE* right_value_153;
struct sType* type_154;
char* fun_name_155;
_Bool calling_fun_156;
_Bool _if_conditional206;
_Bool _if_conditional207;
void* right_value212;
struct CVALUE* come_value_157;
void* right_value213;
char* __dec_obj104;
void* right_value214;
struct sType* __dec_obj105;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_150, 0, sizeof(struct sNode*));
memset(&right_value210, 0, sizeof(void*));
memset(&left_value_151, 0, sizeof(struct CVALUE*));
memset(&right_node_152, 0, sizeof(struct sNode*));
memset(&right_value211, 0, sizeof(void*));
memset(&right_value_153, 0, sizeof(struct CVALUE*));
memset(&type_154, 0, sizeof(struct sType*));
memset(&fun_name_155, 0, sizeof(char*));
memset(&calling_fun_156, 0, sizeof(_Bool));
memset(&right_value212, 0, sizeof(void*));
memset(&come_value_157, 0, sizeof(struct CVALUE*));
memset(&right_value213, 0, sizeof(void*));
memset(&right_value214, 0, sizeof(void*));
    left_node_150=self->mLeft;
    if(_if_conditional204=!node_compile(left_node_150,info),    _if_conditional204) {
        __result143__ = (_Bool)0;
        return __result143__;
    }
    left_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value210;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_152=self->mRight;
    if(_if_conditional205=!node_compile(right_node_152,info),    _if_conditional205) {
        __result144__ = (_Bool)0;
        if(left_value_151 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result144__;
    }
    right_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value211;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_154=(struct sType*)come_increment_ref_count(left_value_151->type);
    fun_name_155="operator_gt";
    if(_if_conditional206=self->mQuote,    _if_conditional206) {
        calling_fun_156=(_Bool)0;
    }
    else {
        calling_fun_156=operator_overload_fun(type_154,fun_name_155,left_value_151,right_value_153,info);
    }
    if(_if_conditional207=!calling_fun_156,    _if_conditional207) {
        come_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1211, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value212;
        __freed_obj__ = 0;
        __dec_obj104=come_value_157->c_value;
        come_value_157->c_value=(char*)come_increment_ref_count(((char*)(right_value213=xsprintf("%s>%s",left_value_151->c_value,right_value_153->c_value))));
        if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { right_value213 = come_decrement_ref_count(right_value213, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value213;
        __freed_obj__ = 0;
        __dec_obj105=come_value_157->type;
        come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value214=sType_clone(left_value_151->type))));
        if(__dec_obj105) { come_call_finalizer(sType_finalize,__dec_obj105, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value214, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value214;
        __freed_obj__ = 0;
        come_value_157->type->mHeap=(_Bool)0;
        come_value_157->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_157->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_157));
        if(come_value_157 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_157, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result145__ = (_Bool)1;
    if(left_value_151 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_154 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result145__;
    if(left_value_151 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_151, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_153 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_154 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_154, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sGtNode_sline(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result146__ = self->sline;
    return __result146__;
}

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value215;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value215, 0, sizeof(void*));
    __result147__ = __result_obj__ = ((char*)(right_value215=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value215;
    __freed_obj__ = 0;
    return __result147__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value216;
char* __dec_obj106;
void* right_value217;
struct sNode* __dec_obj107;
void* right_value218;
struct sNode* __dec_obj108;
struct sEqNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value216, 0, sizeof(void*));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj106=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value216=__builtin_string(info->sname))));
    if(__dec_obj106) { __dec_obj106 = come_decrement_ref_count(__dec_obj106, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value216;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj107=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(left))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, ((struct sNode*)__dec_obj107)->finalize, ((struct sNode*)__dec_obj107)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value217;
    __freed_obj__ = 0;
    __dec_obj108=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(right))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value218;
    __freed_obj__ = 0;
    __result148__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result148__;
    if(self && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

int sEqNode_sline(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result149__ = self->sline;
    return __result149__;
}

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value219;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value219, 0, sizeof(void*));
    __result150__ = __result_obj__ = ((char*)(right_value219=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value219;
    __freed_obj__ = 0;
    return __result150__;
}

_Bool sEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result151__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result151__ = (_Bool)0;
    return __result151__;
}

char* sEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value220;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
    __result152__ = __result_obj__ = ((char*)(right_value220=__builtin_string("sEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220;
    __freed_obj__ = 0;
    return __result152__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_158;
_Bool _if_conditional211;
_Bool __result153__;
void* right_value221;
struct CVALUE* left_value_159;
struct sNode* right_node_160;
_Bool _if_conditional212;
_Bool __result154__;
void* right_value222;
struct CVALUE* right_value_161;
void* right_value223;
struct CVALUE* come_value_162;
void* right_value224;
char* __dec_obj109;
void* right_value225;
struct sType* __dec_obj110;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_158, 0, sizeof(struct sNode*));
memset(&right_value221, 0, sizeof(void*));
memset(&left_value_159, 0, sizeof(struct CVALUE*));
memset(&right_node_160, 0, sizeof(struct sNode*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value_161, 0, sizeof(struct CVALUE*));
memset(&right_value223, 0, sizeof(void*));
memset(&come_value_162, 0, sizeof(struct CVALUE*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
    left_node_158=self->mLeft;
    if(_if_conditional211=!node_compile(left_node_158,info),    _if_conditional211) {
        __result153__ = (_Bool)0;
        return __result153__;
    }
    left_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value221;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_160=self->mRight;
    if(_if_conditional212=!node_compile(right_node_160,info),    _if_conditional212) {
        __result154__ = (_Bool)0;
        if(left_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result154__;
    }
    right_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value222;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1300, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value223);
    if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value223;
    __freed_obj__ = 0;
    __dec_obj109=come_value_162->c_value;
    come_value_162->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("%s==%s",left_value_159->c_value,right_value_161->c_value))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value224;
    __freed_obj__ = 0;
    __dec_obj110=come_value_162->type;
    come_value_162->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(left_value_159->type))));
    if(__dec_obj110) { come_call_finalizer(sType_finalize,__dec_obj110, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value225;
    __freed_obj__ = 0;
    come_value_162->type->mHeap=(_Bool)0;
    come_value_162->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_162->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_162));
    __result155__ = (_Bool)1;
    if(left_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result155__;
    if(left_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_162 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_162, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value226;
char* __dec_obj111;
void* right_value227;
struct sNode* __dec_obj112;
void* right_value228;
struct sNode* __dec_obj113;
struct sNotEqNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj111=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value226=__builtin_string(info->sname))));
    if(__dec_obj111) { __dec_obj111 = come_decrement_ref_count(__dec_obj111, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value226;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj112=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(left))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, ((struct sNode*)__dec_obj112)->finalize, ((struct sNode*)__dec_obj112)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value227;
    __freed_obj__ = 0;
    __dec_obj113=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value228=sNode_clone(right))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value228;
    __freed_obj__ = 0;
    __result156__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result156__;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sNotEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result157__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result157__ = (_Bool)0;
    return __result157__;
}

char* sNotEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value229;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value229, 0, sizeof(void*));
    __result158__ = __result_obj__ = ((char*)(right_value229=__builtin_string("sNotEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value229;
    __freed_obj__ = 0;
    return __result158__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_163;
_Bool _if_conditional216;
_Bool __result159__;
void* right_value230;
struct CVALUE* left_value_164;
struct sNode* right_node_165;
_Bool _if_conditional217;
_Bool __result160__;
void* right_value231;
struct CVALUE* right_value_166;
void* right_value232;
struct CVALUE* come_value_167;
void* right_value233;
char* __dec_obj114;
void* right_value234;
struct sType* __dec_obj115;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_163, 0, sizeof(struct sNode*));
memset(&right_value230, 0, sizeof(void*));
memset(&left_value_164, 0, sizeof(struct CVALUE*));
memset(&right_node_165, 0, sizeof(struct sNode*));
memset(&right_value231, 0, sizeof(void*));
memset(&right_value_166, 0, sizeof(struct CVALUE*));
memset(&right_value232, 0, sizeof(void*));
memset(&come_value_167, 0, sizeof(struct CVALUE*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value234, 0, sizeof(void*));
    left_node_163=self->mLeft;
    if(_if_conditional216=!node_compile(left_node_163,info),    _if_conditional216) {
        __result159__ = (_Bool)0;
        return __result159__;
    }
    left_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value230;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_165=self->mRight;
    if(_if_conditional217=!node_compile(right_node_165,info),    _if_conditional217) {
        __result160__ = (_Bool)0;
        if(left_value_164 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result160__;
    }
    right_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value231;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1368, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value232;
    __freed_obj__ = 0;
    __dec_obj114=come_value_167->c_value;
    come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("%s!=%s",left_value_164->c_value,right_value_166->c_value))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value233);
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value233;
    __freed_obj__ = 0;
    __dec_obj115=come_value_167->type;
    come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(left_value_164->type))));
    if(__dec_obj115) { come_call_finalizer(sType_finalize,__dec_obj115, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value234;
    __freed_obj__ = 0;
    come_value_167->type->mHeap=(_Bool)0;
    come_value_167->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_167->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_167));
    __result161__ = (_Bool)1;
    if(left_value_164 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_167 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_167, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result161__;
    if(left_value_164 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_167 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_167, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result162__ = self->sline;
    return __result162__;
}

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value235;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value235, 0, sizeof(void*));
    __result163__ = __result_obj__ = ((char*)(right_value235=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value235;
    __freed_obj__ = 0;
    return __result163__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value236;
char* __dec_obj116;
void* right_value237;
struct sNode* __dec_obj117;
void* right_value238;
struct sNode* __dec_obj118;
struct sEq2Node* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value236, 0, sizeof(void*));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj116=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value236=__builtin_string(info->sname))));
    if(__dec_obj116) { __dec_obj116 = come_decrement_ref_count(__dec_obj116, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value236;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj117=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=sNode_clone(left))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, ((struct sNode*)__dec_obj117)->finalize, ((struct sNode*)__dec_obj117)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value237);
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value237;
    __freed_obj__ = 0;
    __dec_obj118=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=sNode_clone(right))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value238;
    __freed_obj__ = 0;
    __result164__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result164__;
    if(self && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sEq2Node_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result165__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result165__ = (_Bool)0;
    return __result165__;
}

char* sEq2Node_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value239;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value239, 0, sizeof(void*));
    __result166__ = __result_obj__ = ((char*)(right_value239=__builtin_string("sEq2Node")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value239;
    __freed_obj__ = 0;
    return __result166__;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_168;
_Bool _if_conditional221;
_Bool __result167__;
void* right_value240;
struct CVALUE* left_value_169;
struct sNode* right_node_170;
_Bool _if_conditional222;
_Bool __result168__;
void* right_value241;
struct CVALUE* right_value_171;
struct sType* type_172;
char* fun_name_173;
_Bool calling_fun_174;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value242;
struct CVALUE* come_value_175;
void* right_value243;
char* __dec_obj119;
void* right_value244;
struct sType* __dec_obj120;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_168, 0, sizeof(struct sNode*));
memset(&right_value240, 0, sizeof(void*));
memset(&left_value_169, 0, sizeof(struct CVALUE*));
memset(&right_node_170, 0, sizeof(struct sNode*));
memset(&right_value241, 0, sizeof(void*));
memset(&right_value_171, 0, sizeof(struct CVALUE*));
memset(&type_172, 0, sizeof(struct sType*));
memset(&fun_name_173, 0, sizeof(char*));
memset(&calling_fun_174, 0, sizeof(_Bool));
memset(&right_value242, 0, sizeof(void*));
memset(&come_value_175, 0, sizeof(struct CVALUE*));
memset(&right_value243, 0, sizeof(void*));
memset(&right_value244, 0, sizeof(void*));
    left_node_168=self->mLeft;
    if(_if_conditional221=!node_compile(left_node_168,info),    _if_conditional221) {
        __result167__ = (_Bool)0;
        return __result167__;
    }
    left_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value240;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_170=self->mRight;
    if(_if_conditional222=!node_compile(right_node_170,info),    _if_conditional222) {
        __result168__ = (_Bool)0;
        if(left_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result168__;
    }
    right_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value241;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_172=(struct sType*)come_increment_ref_count(left_value_169->type);
    fun_name_173="operator_equals";
    if(_if_conditional223=self->mQuote,    _if_conditional223) {
        calling_fun_174=(_Bool)0;
    }
    else {
        calling_fun_174=operator_overload_fun(type_172,fun_name_173,left_value_169,right_value_171,info);
    }
    if(_if_conditional224=!calling_fun_174,    _if_conditional224) {
        come_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1459, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
        if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value242;
        __freed_obj__ = 0;
        __dec_obj119=come_value_175->c_value;
        come_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value243=xsprintf("%s==%s",left_value_169->c_value,right_value_171->c_value))));
        if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value243);
        if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { right_value243 = come_decrement_ref_count(right_value243, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value243;
        __freed_obj__ = 0;
        __dec_obj120=come_value_175->type;
        come_value_175->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value244=sType_clone(left_value_169->type))));
        if(__dec_obj120) { come_call_finalizer(sType_finalize,__dec_obj120, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value244);
        if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value244, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value244;
        __freed_obj__ = 0;
        come_value_175->type->mHeap=(_Bool)0;
        come_value_175->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_175->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_175));
        if(come_value_175 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_175, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result169__ = (_Bool)1;
    if(left_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_172 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_172, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result169__;
    if(left_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_171 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_171, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_172 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_172, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result170__ = self->sline;
    return __result170__;
}

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value245;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value245, 0, sizeof(void*));
    __result171__ = __result_obj__ = ((char*)(right_value245=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value245;
    __freed_obj__ = 0;
    return __result171__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value246;
char* __dec_obj121;
void* right_value247;
struct sNode* __dec_obj122;
void* right_value248;
struct sNode* __dec_obj123;
struct sNotEq2Node* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value246, 0, sizeof(void*));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj121=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value246=__builtin_string(info->sname))));
    if(__dec_obj121) { __dec_obj121 = come_decrement_ref_count(__dec_obj121, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value246;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj122=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=sNode_clone(left))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, ((struct sNode*)__dec_obj122)->finalize, ((struct sNode*)__dec_obj122)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value247;
    __freed_obj__ = 0;
    __dec_obj123=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=sNode_clone(right))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value248;
    __freed_obj__ = 0;
    __result172__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result172__;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sNotEq2Node_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result173__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result173__ = (_Bool)0;
    return __result173__;
}

char* sNotEq2Node_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value249;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value249, 0, sizeof(void*));
    __result174__ = __result_obj__ = ((char*)(right_value249=__builtin_string("sNotEq2Node")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value249;
    __freed_obj__ = 0;
    return __result174__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_176;
_Bool _if_conditional228;
_Bool __result175__;
void* right_value250;
struct CVALUE* left_value_177;
struct sNode* right_node_178;
_Bool _if_conditional229;
_Bool __result176__;
void* right_value251;
struct CVALUE* right_value_179;
struct sType* type_180;
char* fun_name_181;
_Bool calling_fun_182;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value252;
struct CVALUE* come_value_183;
void* right_value253;
char* __dec_obj124;
void* right_value254;
struct sType* __dec_obj125;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_176, 0, sizeof(struct sNode*));
memset(&right_value250, 0, sizeof(void*));
memset(&left_value_177, 0, sizeof(struct CVALUE*));
memset(&right_node_178, 0, sizeof(struct sNode*));
memset(&right_value251, 0, sizeof(void*));
memset(&right_value_179, 0, sizeof(struct CVALUE*));
memset(&type_180, 0, sizeof(struct sType*));
memset(&fun_name_181, 0, sizeof(char*));
memset(&calling_fun_182, 0, sizeof(_Bool));
memset(&right_value252, 0, sizeof(void*));
memset(&come_value_183, 0, sizeof(struct CVALUE*));
memset(&right_value253, 0, sizeof(void*));
memset(&right_value254, 0, sizeof(void*));
    left_node_176=self->mLeft;
    if(_if_conditional228=!node_compile(left_node_176,info),    _if_conditional228) {
        __result175__ = (_Bool)0;
        return __result175__;
    }
    left_value_177=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value250;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_178=self->mRight;
    if(_if_conditional229=!node_compile(right_node_178,info),    _if_conditional229) {
        __result176__ = (_Bool)0;
        if(left_value_177 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result176__;
    }
    right_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value251);
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value251;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_180=(struct sType*)come_increment_ref_count(left_value_177->type);
    fun_name_181="operator_not_equals";
    if(_if_conditional230=self->mQuote,    _if_conditional230) {
        calling_fun_182=(_Bool)0;
    }
    else {
        calling_fun_182=operator_overload_fun(type_180,fun_name_181,left_value_177,right_value_179,info);
    }
    if(_if_conditional231=!calling_fun_182,    _if_conditional231) {
        come_value_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1550, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value252;
        __freed_obj__ = 0;
        __dec_obj124=come_value_183->c_value;
        come_value_183->c_value=(char*)come_increment_ref_count(((char*)(right_value253=xsprintf("%s!=%s",left_value_177->c_value,right_value_179->c_value))));
        if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { right_value253 = come_decrement_ref_count(right_value253, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value253;
        __freed_obj__ = 0;
        __dec_obj125=come_value_183->type;
        come_value_183->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value254=sType_clone(left_value_177->type))));
        if(__dec_obj125) { come_call_finalizer(sType_finalize,__dec_obj125, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value254, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value254;
        __freed_obj__ = 0;
        come_value_183->type->mHeap=(_Bool)0;
        come_value_183->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_183->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_183));
        if(come_value_183 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_183, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result177__ = (_Bool)1;
    if(left_value_177 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_180 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_180, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result177__;
    if(left_value_177 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_179 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_179, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_180 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_180, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result178__ = self->sline;
    return __result178__;
}

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value255;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value255, 0, sizeof(void*));
    __result179__ = __result_obj__ = ((char*)(right_value255=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value255;
    __freed_obj__ = 0;
    return __result179__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value256;
char* __dec_obj126;
void* right_value257;
struct sNode* __dec_obj127;
void* right_value258;
struct sNode* __dec_obj128;
struct sAndNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value256, 0, sizeof(void*));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj126=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value256=__builtin_string(info->sname))));
    if(__dec_obj126) { __dec_obj126 = come_decrement_ref_count(__dec_obj126, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value256;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj127=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value257=sNode_clone(left))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, ((struct sNode*)__dec_obj127)->finalize, ((struct sNode*)__dec_obj127)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value257);
    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value257;
    __freed_obj__ = 0;
    __dec_obj128=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=sNode_clone(right))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value258);
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value258;
    __freed_obj__ = 0;
    __result180__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result180__;
    if(self && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result181__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result181__ = (_Bool)0;
    return __result181__;
}

char* sAndNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value259;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value259, 0, sizeof(void*));
    __result182__ = __result_obj__ = ((char*)(right_value259=__builtin_string("sAndNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value259;
    __freed_obj__ = 0;
    return __result182__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_184;
_Bool _if_conditional235;
_Bool __result183__;
void* right_value260;
struct CVALUE* left_value_185;
struct sNode* right_node_186;
_Bool _if_conditional236;
_Bool __result184__;
void* right_value261;
struct CVALUE* right_value_187;
struct sType* type_188;
char* fun_name_189;
_Bool calling_fun_190;
_Bool _if_conditional237;
_Bool _if_conditional238;
void* right_value262;
struct CVALUE* come_value_191;
void* right_value263;
char* __dec_obj129;
void* right_value264;
struct sType* __dec_obj130;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_184, 0, sizeof(struct sNode*));
memset(&right_value260, 0, sizeof(void*));
memset(&left_value_185, 0, sizeof(struct CVALUE*));
memset(&right_node_186, 0, sizeof(struct sNode*));
memset(&right_value261, 0, sizeof(void*));
memset(&right_value_187, 0, sizeof(struct CVALUE*));
memset(&type_188, 0, sizeof(struct sType*));
memset(&fun_name_189, 0, sizeof(char*));
memset(&calling_fun_190, 0, sizeof(_Bool));
memset(&right_value262, 0, sizeof(void*));
memset(&come_value_191, 0, sizeof(struct CVALUE*));
memset(&right_value263, 0, sizeof(void*));
memset(&right_value264, 0, sizeof(void*));
    left_node_184=self->mLeft;
    if(_if_conditional235=!node_compile(left_node_184,info),    _if_conditional235) {
        __result183__ = (_Bool)0;
        return __result183__;
    }
    left_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value260;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_186=self->mRight;
    if(_if_conditional236=!node_compile(right_node_186,info),    _if_conditional236) {
        __result184__ = (_Bool)0;
        if(left_value_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result184__;
    }
    right_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value261);
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value261;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_188=(struct sType*)come_increment_ref_count(left_value_185->type);
    fun_name_189="operator_and";
    if(_if_conditional237=self->mQuote,    _if_conditional237) {
        calling_fun_190=(_Bool)0;
    }
    else {
        calling_fun_190=operator_overload_fun(type_188,fun_name_189,left_value_185,right_value_187,info);
    }
    if(_if_conditional238=!calling_fun_190,    _if_conditional238) {
        come_value_191=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1642, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value262;
        __freed_obj__ = 0;
        __dec_obj129=come_value_191->c_value;
        come_value_191->c_value=(char*)come_increment_ref_count(((char*)(right_value263=xsprintf("%s&%s",left_value_185->c_value,right_value_187->c_value))));
        if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { right_value263 = come_decrement_ref_count(right_value263, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value263;
        __freed_obj__ = 0;
        __dec_obj130=come_value_191->type;
        come_value_191->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value264=sType_clone(left_value_185->type))));
        if(__dec_obj130) { come_call_finalizer(sType_finalize,__dec_obj130, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value264, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value264;
        __freed_obj__ = 0;
        come_value_191->type->mHeap=(_Bool)0;
        come_value_191->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_191->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_191));
        if(come_value_191 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_191, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result185__ = (_Bool)1;
    if(left_value_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_187 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_187, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_188, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result185__;
    if(left_value_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_187 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_187, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_188 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_188, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndNode_sline(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result186__ = self->sline;
    return __result186__;
}

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value265;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value265, 0, sizeof(void*));
    __result187__ = __result_obj__ = ((char*)(right_value265=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value265;
    __freed_obj__ = 0;
    return __result187__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value266;
char* __dec_obj131;
void* right_value267;
struct sNode* __dec_obj132;
void* right_value268;
struct sNode* __dec_obj133;
struct sXOrNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value266, 0, sizeof(void*));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj131=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value266=__builtin_string(info->sname))));
    if(__dec_obj131) { __dec_obj131 = come_decrement_ref_count(__dec_obj131, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value266;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj132=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=sNode_clone(left))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, ((struct sNode*)__dec_obj132)->finalize, ((struct sNode*)__dec_obj132)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value267);
    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value267;
    __freed_obj__ = 0;
    __dec_obj133=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=sNode_clone(right))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value268);
    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value268;
    __freed_obj__ = 0;
    __result188__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result188__;
    if(self && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sXOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result189__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result189__ = (_Bool)0;
    return __result189__;
}

char* sXOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value269;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value269, 0, sizeof(void*));
    __result190__ = __result_obj__ = ((char*)(right_value269=__builtin_string("sXOrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value269;
    __freed_obj__ = 0;
    return __result190__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_192;
_Bool _if_conditional242;
_Bool __result191__;
void* right_value270;
struct CVALUE* left_value_193;
struct sNode* right_node_194;
_Bool _if_conditional243;
_Bool __result192__;
void* right_value271;
struct CVALUE* right_value_195;
struct sType* type_196;
char* fun_name_197;
_Bool calling_fun_198;
_Bool _if_conditional244;
_Bool _if_conditional245;
void* right_value272;
struct CVALUE* come_value_199;
void* right_value273;
char* __dec_obj134;
void* right_value274;
struct sType* __dec_obj135;
_Bool __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_192, 0, sizeof(struct sNode*));
memset(&right_value270, 0, sizeof(void*));
memset(&left_value_193, 0, sizeof(struct CVALUE*));
memset(&right_node_194, 0, sizeof(struct sNode*));
memset(&right_value271, 0, sizeof(void*));
memset(&right_value_195, 0, sizeof(struct CVALUE*));
memset(&type_196, 0, sizeof(struct sType*));
memset(&fun_name_197, 0, sizeof(char*));
memset(&calling_fun_198, 0, sizeof(_Bool));
memset(&right_value272, 0, sizeof(void*));
memset(&come_value_199, 0, sizeof(struct CVALUE*));
memset(&right_value273, 0, sizeof(void*));
memset(&right_value274, 0, sizeof(void*));
    left_node_192=self->mLeft;
    if(_if_conditional242=!node_compile(left_node_192,info),    _if_conditional242) {
        __result191__ = (_Bool)0;
        return __result191__;
    }
    left_value_193=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value270;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_194=self->mRight;
    if(_if_conditional243=!node_compile(right_node_194,info),    _if_conditional243) {
        __result192__ = (_Bool)0;
        if(left_value_193 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_193, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result192__;
    }
    right_value_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value271);
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value271;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_196=(struct sType*)come_increment_ref_count(left_value_193->type);
    fun_name_197="operator_xor";
    if(_if_conditional244=self->mQuote,    _if_conditional244) {
        calling_fun_198=(_Bool)0;
    }
    else {
        calling_fun_198=operator_overload_fun(type_196,fun_name_197,left_value_193,right_value_195,info);
    }
    if(_if_conditional245=!calling_fun_198,    _if_conditional245) {
        come_value_199=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1733, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value272;
        __freed_obj__ = 0;
        __dec_obj134=come_value_199->c_value;
        come_value_199->c_value=(char*)come_increment_ref_count(((char*)(right_value273=xsprintf("%s^%s",left_value_193->c_value,right_value_195->c_value))));
        if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { right_value273 = come_decrement_ref_count(right_value273, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value273;
        __freed_obj__ = 0;
        __dec_obj135=come_value_199->type;
        come_value_199->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value274=sType_clone(left_value_193->type))));
        if(__dec_obj135) { come_call_finalizer(sType_finalize,__dec_obj135, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value274, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value274;
        __freed_obj__ = 0;
        come_value_199->type->mHeap=(_Bool)0;
        come_value_199->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_199->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_199));
        if(come_value_199 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_199, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result193__ = (_Bool)1;
    if(left_value_193 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_193, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_195 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_195, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_196 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_196, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result193__;
    if(left_value_193 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_193, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_195 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_195, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_196 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_196, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result194__ = self->sline;
    return __result194__;
}

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value275;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value275, 0, sizeof(void*));
    __result195__ = __result_obj__ = ((char*)(right_value275=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
    if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value275;
    __freed_obj__ = 0;
    return __result195__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value276;
char* __dec_obj136;
void* right_value277;
struct sNode* __dec_obj137;
void* right_value278;
struct sNode* __dec_obj138;
struct sOrNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj136=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value276=__builtin_string(info->sname))));
    if(__dec_obj136) { __dec_obj136 = come_decrement_ref_count(__dec_obj136, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value276;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj137=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=sNode_clone(left))));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, ((struct sNode*)__dec_obj137)->finalize, ((struct sNode*)__dec_obj137)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value277;
    __freed_obj__ = 0;
    __dec_obj138=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(right))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value278;
    __freed_obj__ = 0;
    __result196__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result196__;
    if(self && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result197__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result197__ = (_Bool)0;
    return __result197__;
}

char* sOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value279;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value279, 0, sizeof(void*));
    __result198__ = __result_obj__ = ((char*)(right_value279=__builtin_string("sOrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value279;
    __freed_obj__ = 0;
    return __result198__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_200;
_Bool _if_conditional249;
_Bool __result199__;
void* right_value280;
struct CVALUE* left_value_201;
struct sNode* right_node_202;
_Bool _if_conditional250;
_Bool __result200__;
void* right_value281;
struct CVALUE* right_value_203;
struct sType* type_204;
char* fun_name_205;
_Bool calling_fun_206;
_Bool _if_conditional251;
_Bool _if_conditional252;
void* right_value282;
struct CVALUE* come_value_207;
void* right_value283;
char* __dec_obj139;
void* right_value284;
struct sType* __dec_obj140;
_Bool __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_200, 0, sizeof(struct sNode*));
memset(&right_value280, 0, sizeof(void*));
memset(&left_value_201, 0, sizeof(struct CVALUE*));
memset(&right_node_202, 0, sizeof(struct sNode*));
memset(&right_value281, 0, sizeof(void*));
memset(&right_value_203, 0, sizeof(struct CVALUE*));
memset(&type_204, 0, sizeof(struct sType*));
memset(&fun_name_205, 0, sizeof(char*));
memset(&calling_fun_206, 0, sizeof(_Bool));
memset(&right_value282, 0, sizeof(void*));
memset(&come_value_207, 0, sizeof(struct CVALUE*));
memset(&right_value283, 0, sizeof(void*));
memset(&right_value284, 0, sizeof(void*));
    left_node_200=self->mLeft;
    if(_if_conditional249=!node_compile(left_node_200,info),    _if_conditional249) {
        __result199__ = (_Bool)0;
        return __result199__;
    }
    left_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value280;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_202=self->mRight;
    if(_if_conditional250=!node_compile(right_node_202,info),    _if_conditional250) {
        __result200__ = (_Bool)0;
        if(left_value_201 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result200__;
    }
    right_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value281);
    if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value281;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_204=(struct sType*)come_increment_ref_count(left_value_201->type);
    fun_name_205="operator_or";
    if(_if_conditional251=self->mQuote,    _if_conditional251) {
        calling_fun_206=(_Bool)0;
    }
    else {
        calling_fun_206=operator_overload_fun(type_204,fun_name_205,left_value_201,right_value_203,info);
    }
    if(_if_conditional252=!calling_fun_206,    _if_conditional252) {
        come_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1824, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value282;
        __freed_obj__ = 0;
        __dec_obj139=come_value_207->c_value;
        come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value283=xsprintf("%s|%s",left_value_201->c_value,right_value_203->c_value))));
        if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value283);
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { right_value283 = come_decrement_ref_count(right_value283, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value283;
        __freed_obj__ = 0;
        __dec_obj140=come_value_207->type;
        come_value_207->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value284=sType_clone(left_value_201->type))));
        if(__dec_obj140) { come_call_finalizer(sType_finalize,__dec_obj140, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value284);
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value284, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value284;
        __freed_obj__ = 0;
        come_value_207->type->mHeap=(_Bool)0;
        come_value_207->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_207->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_207));
        if(come_value_207 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_207, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result201__ = (_Bool)1;
    if(left_value_201 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_201, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_203 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_204 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_204, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result201__;
    if(left_value_201 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_201, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_203 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_204 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_204, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrNode_sline(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result202__ = self->sline;
    return __result202__;
}

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value285;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value285, 0, sizeof(void*));
    __result203__ = __result_obj__ = ((char*)(right_value285=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value285;
    __freed_obj__ = 0;
    return __result203__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value286;
char* __dec_obj141;
void* right_value287;
struct sNode* __dec_obj142;
void* right_value288;
struct sNode* __dec_obj143;
struct sAndAndNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value286, 0, sizeof(void*));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj141=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value286=__builtin_string(info->sname))));
    if(__dec_obj141) { __dec_obj141 = come_decrement_ref_count(__dec_obj141, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value286;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj142=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=sNode_clone(left))));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, ((struct sNode*)__dec_obj142)->finalize, ((struct sNode*)__dec_obj142)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value287);
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value287;
    __freed_obj__ = 0;
    __dec_obj143=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value288=sNode_clone(right))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value288);
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value288;
    __freed_obj__ = 0;
    __result204__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result204__;
    if(self && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndAndNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result205__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result205__ = (_Bool)0;
    return __result205__;
}

char* sAndAndNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value289;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value289, 0, sizeof(void*));
    __result206__ = __result_obj__ = ((char*)(right_value289=__builtin_string("sAndAndNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value289;
    __freed_obj__ = 0;
    return __result206__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_208;
_Bool _if_conditional256;
_Bool __result207__;
void* right_value290;
struct CVALUE* left_value_209;
struct sNode* right_node_210;
_Bool _if_conditional257;
_Bool __result208__;
void* right_value291;
struct CVALUE* right_value_211;
struct sType* type_212;
char* fun_name_213;
_Bool calling_fun_214;
_Bool _if_conditional258;
_Bool _if_conditional259;
void* right_value292;
struct CVALUE* come_value_215;
void* right_value293;
char* __dec_obj144;
void* right_value294;
struct sType* __dec_obj145;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_208, 0, sizeof(struct sNode*));
memset(&right_value290, 0, sizeof(void*));
memset(&left_value_209, 0, sizeof(struct CVALUE*));
memset(&right_node_210, 0, sizeof(struct sNode*));
memset(&right_value291, 0, sizeof(void*));
memset(&right_value_211, 0, sizeof(struct CVALUE*));
memset(&type_212, 0, sizeof(struct sType*));
memset(&fun_name_213, 0, sizeof(char*));
memset(&calling_fun_214, 0, sizeof(_Bool));
memset(&right_value292, 0, sizeof(void*));
memset(&come_value_215, 0, sizeof(struct CVALUE*));
memset(&right_value293, 0, sizeof(void*));
memset(&right_value294, 0, sizeof(void*));
    left_node_208=self->mLeft;
    if(_if_conditional256=!node_compile(left_node_208,info),    _if_conditional256) {
        __result207__ = (_Bool)0;
        return __result207__;
    }
    left_value_209=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value290;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_210=self->mRight;
    if(_if_conditional257=!node_compile(right_node_210,info),    _if_conditional257) {
        __result208__ = (_Bool)0;
        if(left_value_209 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_209, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result208__;
    }
    right_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value291);
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value291;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_212=(struct sType*)come_increment_ref_count(left_value_209->type);
    fun_name_213="operator_andand";
    if(_if_conditional258=self->mQuote,    _if_conditional258) {
        calling_fun_214=(_Bool)0;
    }
    else {
        calling_fun_214=operator_overload_fun(type_212,fun_name_213,left_value_209,right_value_211,info);
    }
    if(_if_conditional259=!calling_fun_214,    _if_conditional259) {
        come_value_215=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value292=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1915, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value292;
        __freed_obj__ = 0;
        __dec_obj144=come_value_215->c_value;
        come_value_215->c_value=(char*)come_increment_ref_count(((char*)(right_value293=xsprintf("%s&&%s",left_value_209->c_value,right_value_211->c_value))));
        if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value293);
        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { right_value293 = come_decrement_ref_count(right_value293, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value293;
        __freed_obj__ = 0;
        __dec_obj145=come_value_215->type;
        come_value_215->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value294=sType_clone(left_value_209->type))));
        if(__dec_obj145) { come_call_finalizer(sType_finalize,__dec_obj145, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value294);
        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value294, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value294;
        __freed_obj__ = 0;
        come_value_215->type->mHeap=(_Bool)0;
        come_value_215->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_215->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_215));
        if(come_value_215 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_215, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result209__ = (_Bool)1;
    if(left_value_209 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_211 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result209__;
    if(left_value_209 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_209, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_211 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_212 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_212, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result210__ = self->sline;
    return __result210__;
}

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value295;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value295, 0, sizeof(void*));
    __result211__ = __result_obj__ = ((char*)(right_value295=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value295;
    __freed_obj__ = 0;
    return __result211__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value296;
char* __dec_obj146;
void* right_value297;
struct sNode* __dec_obj147;
void* right_value298;
struct sNode* __dec_obj148;
struct sOrOrNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value296, 0, sizeof(void*));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj146=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value296=__builtin_string(info->sname))));
    if(__dec_obj146) { __dec_obj146 = come_decrement_ref_count(__dec_obj146, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value296;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj147=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=sNode_clone(left))));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, ((struct sNode*)__dec_obj147)->finalize, ((struct sNode*)__dec_obj147)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value297);
    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value297;
    __freed_obj__ = 0;
    __dec_obj148=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=sNode_clone(right))));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value298;
    __freed_obj__ = 0;
    __result212__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result212__;
    if(self && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result213__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result213__ = (_Bool)0;
    return __result213__;
}

char* sOrOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value299;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value299, 0, sizeof(void*));
    __result214__ = __result_obj__ = ((char*)(right_value299=__builtin_string("sOrOrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value299;
    __freed_obj__ = 0;
    return __result214__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_216;
_Bool _if_conditional263;
_Bool __result215__;
void* right_value300;
struct CVALUE* left_value_217;
struct sNode* right_node_218;
_Bool _if_conditional264;
_Bool __result216__;
void* right_value301;
struct CVALUE* right_value_219;
struct sType* type_220;
char* fun_name_221;
_Bool calling_fun_222;
_Bool _if_conditional265;
_Bool _if_conditional266;
void* right_value302;
struct CVALUE* come_value_223;
void* right_value303;
char* __dec_obj149;
void* right_value304;
struct sType* __dec_obj150;
_Bool __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_216, 0, sizeof(struct sNode*));
memset(&right_value300, 0, sizeof(void*));
memset(&left_value_217, 0, sizeof(struct CVALUE*));
memset(&right_node_218, 0, sizeof(struct sNode*));
memset(&right_value301, 0, sizeof(void*));
memset(&right_value_219, 0, sizeof(struct CVALUE*));
memset(&type_220, 0, sizeof(struct sType*));
memset(&fun_name_221, 0, sizeof(char*));
memset(&calling_fun_222, 0, sizeof(_Bool));
memset(&right_value302, 0, sizeof(void*));
memset(&come_value_223, 0, sizeof(struct CVALUE*));
memset(&right_value303, 0, sizeof(void*));
memset(&right_value304, 0, sizeof(void*));
    left_node_216=self->mLeft;
    if(_if_conditional263=!node_compile(left_node_216,info),    _if_conditional263) {
        __result215__ = (_Bool)0;
        return __result215__;
    }
    left_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value300;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_218=self->mRight;
    if(_if_conditional264=!node_compile(right_node_218,info),    _if_conditional264) {
        __result216__ = (_Bool)0;
        if(left_value_217 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_217, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result216__;
    }
    right_value_219=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value301=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value301);
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value301;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_220=(struct sType*)come_increment_ref_count(left_value_217->type);
    fun_name_221="operator_oror";
    if(_if_conditional265=self->mQuote,    _if_conditional265) {
        calling_fun_222=(_Bool)0;
    }
    else {
        calling_fun_222=operator_overload_fun(type_220,fun_name_221,left_value_217,right_value_219,info);
    }
    if(_if_conditional266=!calling_fun_222,    _if_conditional266) {
        come_value_223=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2005, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value302;
        __freed_obj__ = 0;
        __dec_obj149=come_value_223->c_value;
        come_value_223->c_value=(char*)come_increment_ref_count(((char*)(right_value303=xsprintf("%s||%s",left_value_217->c_value,right_value_219->c_value))));
        if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value303);
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { right_value303 = come_decrement_ref_count(right_value303, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value303;
        __freed_obj__ = 0;
        __dec_obj150=come_value_223->type;
        come_value_223->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value304=sType_clone(left_value_217->type))));
        if(__dec_obj150) { come_call_finalizer(sType_finalize,__dec_obj150, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value304);
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value304, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value304;
        __freed_obj__ = 0;
        come_value_223->type->mHeap=(_Bool)0;
        come_value_223->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_223->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_223));
        if(come_value_223 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_223, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result217__ = (_Bool)1;
    if(left_value_217 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_219 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_219, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result217__;
    if(left_value_217 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_217, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_219 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_219, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_220 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_220, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result218__ = self->sline;
    return __result218__;
}

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value305;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value305, 0, sizeof(void*));
    __result219__ = __result_obj__ = ((char*)(right_value305=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value305;
    __freed_obj__ = 0;
    return __result219__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value306;
char* __dec_obj151;
void* right_value307;
struct sNode* __dec_obj152;
void* right_value308;
struct sNode* __dec_obj153;
struct sCommaNode* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value306, 0, sizeof(void*));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj151=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value306=__builtin_string(info->sname))));
    if(__dec_obj151) { __dec_obj151 = come_decrement_ref_count(__dec_obj151, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value306;
    __freed_obj__ = 0;
    __dec_obj152=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(left))));
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, ((struct sNode*)__dec_obj152)->finalize, ((struct sNode*)__dec_obj152)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value307);
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value307;
    __freed_obj__ = 0;
    __dec_obj153=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(right))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value308;
    __freed_obj__ = 0;
    __result220__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result220__;
    if(self && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sCommaNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result221__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result221__ = (_Bool)0;
    return __result221__;
}

char* sCommaNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value309;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value309, 0, sizeof(void*));
    __result222__ = __result_obj__ = ((char*)(right_value309=__builtin_string("sCommaNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value309;
    __freed_obj__ = 0;
    return __result222__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_224;
_Bool _if_conditional270;
_Bool __result223__;
void* right_value310;
struct CVALUE* left_value_225;
struct sNode* right_node_226;
_Bool _if_conditional271;
_Bool __result224__;
void* right_value311;
struct CVALUE* right_value_227;
void* right_value312;
struct CVALUE* come_value_228;
void* right_value313;
char* __dec_obj154;
void* right_value314;
struct sType* __dec_obj155;
_Bool __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_224, 0, sizeof(struct sNode*));
memset(&right_value310, 0, sizeof(void*));
memset(&left_value_225, 0, sizeof(struct CVALUE*));
memset(&right_node_226, 0, sizeof(struct sNode*));
memset(&right_value311, 0, sizeof(void*));
memset(&right_value_227, 0, sizeof(struct CVALUE*));
memset(&right_value312, 0, sizeof(void*));
memset(&come_value_228, 0, sizeof(struct CVALUE*));
memset(&right_value313, 0, sizeof(void*));
memset(&right_value314, 0, sizeof(void*));
    left_node_224=self->mLeft;
    if(_if_conditional270=!node_compile(left_node_224,info),    _if_conditional270) {
        __result223__ = (_Bool)0;
        return __result223__;
    }
    left_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value310;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_226=self->mRight;
    if(_if_conditional271=!node_compile(right_node_226,info),    _if_conditional271) {
        __result224__ = (_Bool)0;
        if(left_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result224__;
    }
    right_value_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value311);
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value311;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_228=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2082, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value312);
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value312;
    __freed_obj__ = 0;
    __dec_obj154=come_value_228->c_value;
    come_value_228->c_value=(char*)come_increment_ref_count(((char*)(right_value313=xsprintf("%s,%s",left_value_225->c_value,right_value_227->c_value))));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value313);
    if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { right_value313 = come_decrement_ref_count(right_value313, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value313;
    __freed_obj__ = 0;
    __dec_obj155=come_value_228->type;
    come_value_228->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value314=sType_clone(left_value_225->type))));
    if(__dec_obj155) { come_call_finalizer(sType_finalize,__dec_obj155, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value314);
    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value314, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value314;
    __freed_obj__ = 0;
    come_value_228->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_228->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_228));
    __result225__ = (_Bool)1;
    if(left_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_227 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_228 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_228, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result225__;
    if(left_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_227 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_228 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_228, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result226__ = self->sline;
    return __result226__;
}

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value315;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value315, 0, sizeof(void*));
    __result227__ = __result_obj__ = ((char*)(right_value315=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value315;
    __freed_obj__ = 0;
    return __result227__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value316;
char* __dec_obj156;
void* right_value317;
struct sNode* __dec_obj157;
void* right_value318;
struct sNode* __dec_obj158;
void* right_value319;
struct sNode* __dec_obj159;
struct sConditionalNode* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value316, 0, sizeof(void*));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj156=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value316=__builtin_string(info->sname))));
    if(__dec_obj156) { __dec_obj156 = come_decrement_ref_count(__dec_obj156, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value316;
    __freed_obj__ = 0;
    __dec_obj157=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=sNode_clone(value1))));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, ((struct sNode*)__dec_obj157)->finalize, ((struct sNode*)__dec_obj157)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value317);
    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[1] = right_value317;
    __freed_obj__ = 0;
    __dec_obj158=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=sNode_clone(value2))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value318);
    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value318;
    __freed_obj__ = 0;
    __dec_obj159=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=sNode_clone(value3))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value319);
    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[3] = right_value319;
    __freed_obj__ = 0;
    __result228__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value1 && !__freed_obj__) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0); } 
    if(value2 && !__freed_obj__) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0); } 
    if(value3 && !__freed_obj__) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0); } 
    return __result228__;
    if(self && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value1 && !__freed_obj__) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0); } 
    if(value2 && !__freed_obj__) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0); } 
    if(value3 && !__freed_obj__) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0); } 
}

_Bool sConditionalNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result229__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result229__ = (_Bool)0;
    return __result229__;
}

char* sConditionalNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value320;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value320, 0, sizeof(void*));
    __result230__ = __result_obj__ = ((char*)(right_value320=__builtin_string("sConditionalNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value320;
    __freed_obj__ = 0;
    return __result230__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* value1_229;
_Bool _if_conditional276;
_Bool __result231__;
void* right_value321;
struct CVALUE* value1_value_230;
struct sNode* value2_231;
_Bool _if_conditional277;
_Bool __result232__;
void* right_value322;
struct CVALUE* value2_value_232;
struct sNode* value3_233;
_Bool _if_conditional278;
_Bool __result233__;
void* right_value323;
struct CVALUE* value3_value_234;
void* right_value324;
struct CVALUE* come_value_235;
void* right_value325;
char* __dec_obj160;
void* right_value326;
struct sType* __dec_obj161;
_Bool __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&value1_229, 0, sizeof(struct sNode*));
memset(&right_value321, 0, sizeof(void*));
memset(&value1_value_230, 0, sizeof(struct CVALUE*));
memset(&value2_231, 0, sizeof(struct sNode*));
memset(&right_value322, 0, sizeof(void*));
memset(&value2_value_232, 0, sizeof(struct CVALUE*));
memset(&value3_233, 0, sizeof(struct sNode*));
memset(&right_value323, 0, sizeof(void*));
memset(&value3_value_234, 0, sizeof(struct CVALUE*));
memset(&right_value324, 0, sizeof(void*));
memset(&come_value_235, 0, sizeof(struct CVALUE*));
memset(&right_value325, 0, sizeof(void*));
memset(&right_value326, 0, sizeof(void*));
    value1_229=self->mValue1;
    if(_if_conditional276=!node_compile(value1_229,info),    _if_conditional276) {
        __result231__ = (_Bool)0;
        return __result231__;
    }
    value1_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321);
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value321;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    value2_231=self->mValue2;
    if(_if_conditional277=!node_compile(value2_231,info),    _if_conditional277) {
        __result232__ = (_Bool)0;
        if(value1_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result232__;
    }
    value2_value_232=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value322=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value322);
    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value322;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    value3_233=self->mValue3;
    if(_if_conditional278=!node_compile(value3_233,info),    _if_conditional278) {
        __result233__ = (_Bool)0;
        if(value1_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value2_value_232 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_232, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result233__;
    }
    value3_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value323=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value323);
    if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[2] = right_value323;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_235=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value324=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2168, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value324);
    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value324, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[3] = right_value324;
    __freed_obj__ = 0;
    __dec_obj160=come_value_235->c_value;
    come_value_235->c_value=(char*)come_increment_ref_count(((char*)(right_value325=xsprintf("%s?%s:%s",value1_value_230->c_value,value2_value_232->c_value,value3_value_234->c_value))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 4, right_value325);
    if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[4] = right_value325;
    __freed_obj__ = 0;
    __dec_obj161=come_value_235->type;
    come_value_235->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value326=sType_clone(value1_value_230->type))));
    if(__dec_obj161) { come_call_finalizer(sType_finalize,__dec_obj161, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 5, right_value326);
    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value326, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[5] = right_value326;
    __freed_obj__ = 0;
    come_value_235->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_235->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_235));
    __result234__ = (_Bool)1;
    if(value1_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value2_value_232 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value3_value_234 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value3_value_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_235 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_235, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result234__;
    if(value1_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value2_value_232 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_232, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value3_value_234 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value3_value_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_235 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_235, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result235__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result235__ = self->sline;
    return __result235__;
}

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value327;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value327, 0, sizeof(void*));
    __result236__ = __result_obj__ = ((char*)(right_value327=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value327;
    __freed_obj__ = 0;
    return __result236__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value328;
struct sNode* node_236;
_Bool _while_condtional10;
_Bool _if_conditional279;
void* right_value329;
struct sNode* right_237;
void* right_value330;
void* right_value331;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* right_value336;
struct sNode* __result239__;
_Bool _if_conditional289;
void* right_value337;
struct sNode* right_239;
void* right_value338;
void* right_value339;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* right_value344;
struct sNode* __result242__;
_Bool _if_conditional299;
void* right_value345;
struct sNode* right_241;
void* right_value346;
void* right_value347;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* right_value352;
struct sNode* __result245__;
_Bool _if_conditional309;
void* right_value353;
struct sNode* right_243;
void* right_value354;
void* right_value355;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* right_value360;
struct sNode* __result248__;
_Bool _if_conditional319;
void* right_value361;
struct sNode* right_245;
void* right_value362;
void* right_value363;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* right_value368;
struct sNode* __result251__;
_Bool _if_conditional329;
void* right_value369;
struct sNode* right_247;
void* right_value370;
void* right_value371;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* right_value376;
struct sNode* __result254__;
struct sNode* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value328, 0, sizeof(void*));
memset(&node_236, 0, sizeof(struct sNode*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_237, 0, sizeof(struct sNode*));
memset(&right_value330, 0, sizeof(void*));
memset(&right_value331, 0, sizeof(void*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
memset(&right_239, 0, sizeof(struct sNode*));
memset(&right_value338, 0, sizeof(void*));
memset(&right_value339, 0, sizeof(void*));
memset(&right_value344, 0, sizeof(void*));
memset(&right_value345, 0, sizeof(void*));
memset(&right_241, 0, sizeof(struct sNode*));
memset(&right_value346, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value352, 0, sizeof(void*));
memset(&right_value353, 0, sizeof(void*));
memset(&right_243, 0, sizeof(struct sNode*));
memset(&right_value354, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value360, 0, sizeof(void*));
memset(&right_value361, 0, sizeof(void*));
memset(&right_245, 0, sizeof(struct sNode*));
memset(&right_value362, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_247, 0, sizeof(struct sNode*));
memset(&right_value370, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value376, 0, sizeof(void*));
    node_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=expression_node_v99(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value328;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional10=*info->p,    _while_condtional10) {
        if(_if_conditional279=!node_236->terminated(node_236->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional279) {
            info->p++;
            skip_spaces_and_lf(info);
            right_237=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=mult_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
            if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value329;
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2204, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sMultNode*)(right_value331=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value330=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2204, "struct sMultNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_237),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sMultNode_sline;
            _inf_value3->sname=(void*)sMultNode_sname;
            _inf_value3->terminated=(void*)sMultNode_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result239__ = __result_obj__ = ((struct sNode*)(right_value336=_inf_value3));
            if(right_237 && !__freed_obj__) { right_237 = come_decrement_ref_count(right_237, ((struct sNode*)right_237)->finalize, ((struct sNode*)right_237)->_protocol_obj, 0, 0, 0); } 
            if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value330);
            if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value330;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value331);
            if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value331;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value336);
            if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, ((struct sNode*)right_value336)->finalize, ((struct sNode*)right_value336)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value336;
            __freed_obj__ = 0;
            return __result239__;
            if(right_237 && !__freed_obj__) { right_237 = come_decrement_ref_count(right_237, ((struct sNode*)right_237)->finalize, ((struct sNode*)right_237)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional289=*info->p==47&&*(info->p+1)!=61,            _if_conditional289) {
                info->p++;
                skip_spaces_and_lf(info);
                right_239=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=mult_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
                if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value337;
                __freed_obj__ = 0;
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2212, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sDivNode*)(right_value339=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value338=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2212, "struct sDivNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_239),(_Bool)0,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDivNode_finalize;
                _inf_value4->clone=(void*)sDivNode_clone;
                _inf_value4->compile=(void*)sDivNode_compile;
                _inf_value4->sline=(void*)sDivNode_sline;
                _inf_value4->sname=(void*)sDivNode_sname;
                _inf_value4->terminated=(void*)sDivNode_terminated;
                _inf_value4->kind=(void*)sDivNode_kind;
                __result242__ = __result_obj__ = ((struct sNode*)(right_value344=_inf_value4));
                if(right_239 && !__freed_obj__) { right_239 = come_decrement_ref_count(right_239, ((struct sNode*)right_239)->finalize, ((struct sNode*)right_239)->_protocol_obj, 0, 0, 0); } 
                if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value338);
                if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value338, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value338;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value339);
                if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value339;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value344);
                if(right_value344 && right_value344 != __result_obj__ && !__freed_obj__) { right_value344 = come_decrement_ref_count(right_value344, ((struct sNode*)right_value344)->finalize, ((struct sNode*)right_value344)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value344;
                __freed_obj__ = 0;
                return __result242__;
                if(right_239 && !__freed_obj__) { right_239 = come_decrement_ref_count(right_239, ((struct sNode*)right_239)->finalize, ((struct sNode*)right_239)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional299=*info->p==37&&*(info->p+1)!=61,                _if_conditional299) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_241=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value345=expression_node_v99(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value345);
                    if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value345;
                    __freed_obj__ = 0;
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2220, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sModNode*)(right_value347=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value346=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2220, "struct sModNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_241),(_Bool)0,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sModNode_finalize;
                    _inf_value5->clone=(void*)sModNode_clone;
                    _inf_value5->compile=(void*)sModNode_compile;
                    _inf_value5->sline=(void*)sModNode_sline;
                    _inf_value5->sname=(void*)sModNode_sname;
                    _inf_value5->terminated=(void*)sModNode_terminated;
                    _inf_value5->kind=(void*)sModNode_kind;
                    __result245__ = __result_obj__ = ((struct sNode*)(right_value352=_inf_value5));
                    if(right_241 && !__freed_obj__) { right_241 = come_decrement_ref_count(right_241, ((struct sNode*)right_241)->finalize, ((struct sNode*)right_241)->_protocol_obj, 0, 0, 0); } 
                    if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value346);
                    if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value346, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value346;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value347);
                    if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value347;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value352);
                    if(right_value352 && right_value352 != __result_obj__ && !__freed_obj__) { right_value352 = come_decrement_ref_count(right_value352, ((struct sNode*)right_value352)->finalize, ((struct sNode*)right_value352)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value352;
                    __freed_obj__ = 0;
                    return __result245__;
                    if(right_241 && !__freed_obj__) { right_241 = come_decrement_ref_count(right_241, ((struct sNode*)right_241)->finalize, ((struct sNode*)right_241)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional309=!node_236->terminated(node_236->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional309) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_243=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value353=mult_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value353);
                        if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value353;
                        __freed_obj__ = 0;
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2228, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sMultNode*)(right_value355=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value354=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2228, "struct sMultNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_243),(_Bool)1,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sMultNode_finalize;
                        _inf_value6->clone=(void*)sMultNode_clone;
                        _inf_value6->compile=(void*)sMultNode_compile;
                        _inf_value6->sline=(void*)sMultNode_sline;
                        _inf_value6->sname=(void*)sMultNode_sname;
                        _inf_value6->terminated=(void*)sMultNode_terminated;
                        _inf_value6->kind=(void*)sMultNode_kind;
                        __result248__ = __result_obj__ = ((struct sNode*)(right_value360=_inf_value6));
                        if(right_243 && !__freed_obj__) { right_243 = come_decrement_ref_count(right_243, ((struct sNode*)right_243)->finalize, ((struct sNode*)right_243)->_protocol_obj, 0, 0, 0); } 
                        if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value354);
                        if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value354, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value354;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value355);
                        if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value355;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value360);
                        if(right_value360 && right_value360 != __result_obj__ && !__freed_obj__) { right_value360 = come_decrement_ref_count(right_value360, ((struct sNode*)right_value360)->finalize, ((struct sNode*)right_value360)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value360;
                        __freed_obj__ = 0;
                        return __result248__;
                        if(right_243 && !__freed_obj__) { right_243 = come_decrement_ref_count(right_243, ((struct sNode*)right_243)->finalize, ((struct sNode*)right_243)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional319=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional319) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value361=mult_exp(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value361);
                            if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value361;
                            __freed_obj__ = 0;
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2236, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sDivNode*)(right_value363=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value362=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2236, "struct sDivNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_245),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sDivNode_finalize;
                            _inf_value7->clone=(void*)sDivNode_clone;
                            _inf_value7->compile=(void*)sDivNode_compile;
                            _inf_value7->sline=(void*)sDivNode_sline;
                            _inf_value7->sname=(void*)sDivNode_sname;
                            _inf_value7->terminated=(void*)sDivNode_terminated;
                            _inf_value7->kind=(void*)sDivNode_kind;
                            __result251__ = __result_obj__ = ((struct sNode*)(right_value368=_inf_value7));
                            if(right_245 && !__freed_obj__) { right_245 = come_decrement_ref_count(right_245, ((struct sNode*)right_245)->finalize, ((struct sNode*)right_245)->_protocol_obj, 0, 0, 0); } 
                            if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value362);
                            if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value362, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value362;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value363);
                            if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value363;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value368);
                            if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[3] = right_value368;
                            __freed_obj__ = 0;
                            return __result251__;
                            if(right_245 && !__freed_obj__) { right_245 = come_decrement_ref_count(right_245, ((struct sNode*)right_245)->finalize, ((struct sNode*)right_245)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional329=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional329) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=expression_node_v99(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
                                if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value369;
                                __freed_obj__ = 0;
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2244, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sModNode*)(right_value371=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value370=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2244, "struct sModNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_247),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sModNode_finalize;
                                _inf_value8->clone=(void*)sModNode_clone;
                                _inf_value8->compile=(void*)sModNode_compile;
                                _inf_value8->sline=(void*)sModNode_sline;
                                _inf_value8->sname=(void*)sModNode_sname;
                                _inf_value8->terminated=(void*)sModNode_terminated;
                                _inf_value8->kind=(void*)sModNode_kind;
                                __result254__ = __result_obj__ = ((struct sNode*)(right_value376=_inf_value8));
                                if(right_247 && !__freed_obj__) { right_247 = come_decrement_ref_count(right_247, ((struct sNode*)right_247)->finalize, ((struct sNode*)right_247)->_protocol_obj, 0, 0, 0); } 
                                if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value370);
                                if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value370, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value370;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value371);
                                if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value371;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value376);
                                if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[3] = right_value376;
                                __freed_obj__ = 0;
                                return __result254__;
                                if(right_247 && !__freed_obj__) { right_247 = come_decrement_ref_count(right_247, ((struct sNode*)right_247)->finalize, ((struct sNode*)right_247)->_protocol_obj, 0, 0, 0); } 
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
    __result255__ = __result_obj__ = node_236;
    if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 1, 0); } 
    return __result255__;
    if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional310;
_Bool _if_conditional311;
_Bool _if_conditional312;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional310=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional310) {
                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional311=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional311) {
                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional312=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional312) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional313;
struct sMultNode* __result246__;
void* right_value356;
struct sMultNode* result_244;
_Bool _if_conditional314;
void* right_value357;
struct sNode* __dec_obj171;
_Bool _if_conditional315;
void* right_value358;
struct sNode* __dec_obj172;
_Bool _if_conditional316;
_Bool _if_conditional317;
_Bool _if_conditional318;
void* right_value359;
char* __dec_obj173;
struct sMultNode* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value356, 0, sizeof(void*));
memset(&result_244, 0, sizeof(struct sMultNode*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value359, 0, sizeof(void*));
                            if(_if_conditional313=self==(void*)0,                            _if_conditional313) {
                                __result246__ = __result_obj__ = (void*)0;
                                return __result246__;
                            }
                            result_244=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value356=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                            if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value356;
                            __freed_obj__ = 0;
                            if(_if_conditional314=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional314) {
                                __dec_obj171=result_244->mLeft;
                                result_244->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value357=sNode_clone(self->mLeft))));
                                if(__dec_obj171) { __dec_obj171 = come_decrement_ref_count(__dec_obj171, ((struct sNode*)__dec_obj171)->finalize, ((struct sNode*)__dec_obj171)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
                                if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { right_value357 = come_decrement_ref_count(right_value357, ((struct sNode*)right_value357)->finalize, ((struct sNode*)right_value357)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value357;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional315=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional315) {
                                __dec_obj172=result_244->mRight;
                                result_244->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value358=sNode_clone(self->mRight))));
                                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value358);
                                if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { right_value358 = come_decrement_ref_count(right_value358, ((struct sNode*)right_value358)->finalize, ((struct sNode*)right_value358)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value358;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional316=self!=((void*)0),                            _if_conditional316) {
                                result_244->mQuote=self->mQuote;
                            }
                            if(_if_conditional317=self!=((void*)0),                            _if_conditional317) {
                                result_244->sline=self->sline;
                            }
                            if(_if_conditional318=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional318) {
                                __dec_obj173=result_244->sname;
                                result_244->sname=(char*)come_increment_ref_count(((char*)(right_value359=string_clone(self->sname))));
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value359);
                                if(right_value359 && right_value359 != __result_obj__ && !__freed_obj__) { right_value359 = come_decrement_ref_count(right_value359, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value359;
                                __freed_obj__ = 0;
                            }
                            __result247__ = __result_obj__ = result_244;
                            if(result_244 && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,result_244, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result247__;
                            if(result_244 && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,result_244, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional320;
_Bool _if_conditional321;
_Bool _if_conditional322;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional320=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional320) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional321=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional321) {
                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional322=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional322) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional323;
struct sDivNode* __result249__;
void* right_value364;
struct sDivNode* result_246;
_Bool _if_conditional324;
void* right_value365;
struct sNode* __dec_obj174;
_Bool _if_conditional325;
void* right_value366;
struct sNode* __dec_obj175;
_Bool _if_conditional326;
_Bool _if_conditional327;
_Bool _if_conditional328;
void* right_value367;
char* __dec_obj176;
struct sDivNode* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value364, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct sDivNode*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value367, 0, sizeof(void*));
                                if(_if_conditional323=self==(void*)0,                                _if_conditional323) {
                                    __result249__ = __result_obj__ = (void*)0;
                                    return __result249__;
                                }
                                result_246=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value364=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                                if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value364;
                                __freed_obj__ = 0;
                                if(_if_conditional324=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional324) {
                                    __dec_obj174=result_246->mLeft;
                                    result_246->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value365=sNode_clone(self->mLeft))));
                                    if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, ((struct sNode*)__dec_obj174)->finalize, ((struct sNode*)__dec_obj174)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                                    if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { right_value365 = come_decrement_ref_count(right_value365, ((struct sNode*)right_value365)->finalize, ((struct sNode*)right_value365)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value365;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional325=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional325) {
                                    __dec_obj175=result_246->mRight;
                                    result_246->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=sNode_clone(self->mRight))));
                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                                    if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value366;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional326=self!=((void*)0),                                _if_conditional326) {
                                    result_246->mQuote=self->mQuote;
                                }
                                if(_if_conditional327=self!=((void*)0),                                _if_conditional327) {
                                    result_246->sline=self->sline;
                                }
                                if(_if_conditional328=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional328) {
                                    __dec_obj176=result_246->sname;
                                    result_246->sname=(char*)come_increment_ref_count(((char*)(right_value367=string_clone(self->sname))));
                                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
                                    if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value367;
                                    __freed_obj__ = 0;
                                }
                                __result250__ = __result_obj__ = result_246;
                                if(result_246 && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result250__;
                                if(result_246 && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,result_246, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional330;
_Bool _if_conditional331;
_Bool _if_conditional332;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional330=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional330) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional331=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional331) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional332=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional332) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional333;
struct sModNode* __result252__;
void* right_value372;
struct sModNode* result_248;
_Bool _if_conditional334;
void* right_value373;
struct sNode* __dec_obj177;
_Bool _if_conditional335;
void* right_value374;
struct sNode* __dec_obj178;
_Bool _if_conditional336;
_Bool _if_conditional337;
_Bool _if_conditional338;
void* right_value375;
char* __dec_obj179;
struct sModNode* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value372, 0, sizeof(void*));
memset(&result_248, 0, sizeof(struct sModNode*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value375, 0, sizeof(void*));
                                    if(_if_conditional333=self==(void*)0,                                    _if_conditional333) {
                                        __result252__ = __result_obj__ = (void*)0;
                                        return __result252__;
                                    }
                                    result_248=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value372=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
                                    if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value372;
                                    __freed_obj__ = 0;
                                    if(_if_conditional334=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional334) {
                                        __dec_obj177=result_248->mLeft;
                                        result_248->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value373=sNode_clone(self->mLeft))));
                                        if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, ((struct sNode*)__dec_obj177)->finalize, ((struct sNode*)__dec_obj177)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
                                        if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { right_value373 = come_decrement_ref_count(right_value373, ((struct sNode*)right_value373)->finalize, ((struct sNode*)right_value373)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value373;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional335=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional335) {
                                        __dec_obj178=result_248->mRight;
                                        result_248->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=sNode_clone(self->mRight))));
                                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                                        if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value374;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional336=self!=((void*)0),                                    _if_conditional336) {
                                        result_248->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional337=self!=((void*)0),                                    _if_conditional337) {
                                        result_248->sline=self->sline;
                                    }
                                    if(_if_conditional338=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional338) {
                                        __dec_obj179=result_248->sname;
                                        result_248->sname=(char*)come_increment_ref_count(((char*)(right_value375=string_clone(self->sname))));
                                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
                                        if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value375;
                                        __freed_obj__ = 0;
                                    }
                                    __result253__ = __result_obj__ = result_248;
                                    if(result_248 && !__freed_obj__) { come_call_finalizer(sModNode_finalize,result_248, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result253__;
                                    if(result_248 && !__freed_obj__) { come_call_finalizer(sModNode_finalize,result_248, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value377;
struct sNode* node_249;
_Bool _while_condtional11;
_Bool _if_conditional339;
void* right_value378;
struct sNode* right_250;
void* right_value379;
void* right_value380;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value385;
struct sNode* __result258__;
_Bool _if_conditional349;
void* right_value386;
struct sNode* right_252;
void* right_value387;
void* right_value388;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value393;
struct sNode* __result261__;
_Bool _if_conditional359;
void* right_value394;
struct sNode* right_254;
void* right_value395;
void* right_value396;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* right_value401;
struct sNode* __result264__;
_Bool _if_conditional369;
void* right_value402;
struct sNode* right_256;
void* right_value403;
void* right_value404;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* right_value409;
struct sNode* __result267__;
struct sNode* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value377, 0, sizeof(void*));
memset(&node_249, 0, sizeof(struct sNode*));
memset(&right_value378, 0, sizeof(void*));
memset(&right_250, 0, sizeof(struct sNode*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
memset(&right_252, 0, sizeof(struct sNode*));
memset(&right_value387, 0, sizeof(void*));
memset(&right_value388, 0, sizeof(void*));
memset(&right_value393, 0, sizeof(void*));
memset(&right_value394, 0, sizeof(void*));
memset(&right_254, 0, sizeof(struct sNode*));
memset(&right_value395, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value401, 0, sizeof(void*));
memset(&right_value402, 0, sizeof(void*));
memset(&right_256, 0, sizeof(struct sNode*));
memset(&right_value403, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value409, 0, sizeof(void*));
    node_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=mult_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value377);
    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value377;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional11=*info->p,    _while_condtional11) {
        if(_if_conditional339=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional339) {
            info->p++;
            skip_spaces_and_lf(info);
            right_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=add_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
            if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value378;
            __freed_obj__ = 0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2270, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value380=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value379=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2270, "struct sAddNode")))),(struct sNode*)come_increment_ref_count(node_249),(struct sNode*)come_increment_ref_count(right_250),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sAddNode_sline;
            _inf_value9->sname=(void*)sAddNode_sname;
            _inf_value9->terminated=(void*)sAddNode_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result258__ = __result_obj__ = ((struct sNode*)(right_value385=_inf_value9));
            if(right_250 && !__freed_obj__) { right_250 = come_decrement_ref_count(right_250, ((struct sNode*)right_250)->finalize, ((struct sNode*)right_250)->_protocol_obj, 0, 0, 0); } 
            if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value379);
            if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value379;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value380);
            if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value380;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value385);
            if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value385;
            __freed_obj__ = 0;
            return __result258__;
            if(right_250 && !__freed_obj__) { right_250 = come_decrement_ref_count(right_250, ((struct sNode*)right_250)->finalize, ((struct sNode*)right_250)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional349=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional349) {
                info->p++;
                skip_spaces_and_lf(info);
                right_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=add_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
                if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value386;
                __freed_obj__ = 0;
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2279, "struct sNode");
                _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value388=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value387=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2279, "struct sSubNode")))),(struct sNode*)come_increment_ref_count(node_249),(struct sNode*)come_increment_ref_count(right_252),(_Bool)0,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sSubNode_finalize;
                _inf_value10->clone=(void*)sSubNode_clone;
                _inf_value10->compile=(void*)sSubNode_compile;
                _inf_value10->sline=(void*)sSubNode_sline;
                _inf_value10->sname=(void*)sSubNode_sname;
                _inf_value10->terminated=(void*)sSubNode_terminated;
                _inf_value10->kind=(void*)sSubNode_kind;
                __result261__ = __result_obj__ = ((struct sNode*)(right_value393=_inf_value10));
                if(right_252 && !__freed_obj__) { right_252 = come_decrement_ref_count(right_252, ((struct sNode*)right_252)->finalize, ((struct sNode*)right_252)->_protocol_obj, 0, 0, 0); } 
                if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value387);
                if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value387, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value387;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value388);
                if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value388;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value393);
                if(right_value393 && right_value393 != __result_obj__ && !__freed_obj__) { right_value393 = come_decrement_ref_count(right_value393, ((struct sNode*)right_value393)->finalize, ((struct sNode*)right_value393)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value393;
                __freed_obj__ = 0;
                return __result261__;
                if(right_252 && !__freed_obj__) { right_252 = come_decrement_ref_count(right_252, ((struct sNode*)right_252)->finalize, ((struct sNode*)right_252)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional359=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional359) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value394=add_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value394);
                    if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value394;
                    __freed_obj__ = 0;
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2288, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sAddNode*)(right_value396=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value395=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2288, "struct sAddNode")))),(struct sNode*)come_increment_ref_count(node_249),(struct sNode*)come_increment_ref_count(right_254),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sAddNode_finalize;
                    _inf_value11->clone=(void*)sAddNode_clone;
                    _inf_value11->compile=(void*)sAddNode_compile;
                    _inf_value11->sline=(void*)sAddNode_sline;
                    _inf_value11->sname=(void*)sAddNode_sname;
                    _inf_value11->terminated=(void*)sAddNode_terminated;
                    _inf_value11->kind=(void*)sAddNode_kind;
                    __result264__ = __result_obj__ = ((struct sNode*)(right_value401=_inf_value11));
                    if(right_254 && !__freed_obj__) { right_254 = come_decrement_ref_count(right_254, ((struct sNode*)right_254)->finalize, ((struct sNode*)right_254)->_protocol_obj, 0, 0, 0); } 
                    if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value395);
                    if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value395, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value395;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value396);
                    if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value396;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value401);
                    if(right_value401 && right_value401 != __result_obj__ && !__freed_obj__) { right_value401 = come_decrement_ref_count(right_value401, ((struct sNode*)right_value401)->finalize, ((struct sNode*)right_value401)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value401;
                    __freed_obj__ = 0;
                    return __result264__;
                    if(right_254 && !__freed_obj__) { right_254 = come_decrement_ref_count(right_254, ((struct sNode*)right_254)->finalize, ((struct sNode*)right_254)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional369=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional369) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value402=add_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value402);
                        if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value402;
                        __freed_obj__ = 0;
                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2297, "struct sNode");
                        _inf_obj_value12=come_increment_ref_count(((struct sSubNode*)(right_value404=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value403=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2297, "struct sSubNode")))),(struct sNode*)come_increment_ref_count(node_249),(struct sNode*)come_increment_ref_count(right_256),(_Bool)1,info))));
                        _inf_value12->_protocol_obj=_inf_obj_value12;
                        _inf_value12->finalize=(void*)sSubNode_finalize;
                        _inf_value12->clone=(void*)sSubNode_clone;
                        _inf_value12->compile=(void*)sSubNode_compile;
                        _inf_value12->sline=(void*)sSubNode_sline;
                        _inf_value12->sname=(void*)sSubNode_sname;
                        _inf_value12->terminated=(void*)sSubNode_terminated;
                        _inf_value12->kind=(void*)sSubNode_kind;
                        __result267__ = __result_obj__ = ((struct sNode*)(right_value409=_inf_value12));
                        if(right_256 && !__freed_obj__) { right_256 = come_decrement_ref_count(right_256, ((struct sNode*)right_256)->finalize, ((struct sNode*)right_256)->_protocol_obj, 0, 0, 0); } 
                        if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value403);
                        if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value403, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value403;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value404);
                        if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value404;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value409);
                        if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { right_value409 = come_decrement_ref_count(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value409;
                        __freed_obj__ = 0;
                        return __result267__;
                        if(right_256 && !__freed_obj__) { right_256 = come_decrement_ref_count(right_256, ((struct sNode*)right_256)->finalize, ((struct sNode*)right_256)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result268__ = __result_obj__ = node_249;
    if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 1, 0); } 
    return __result268__;
    if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional360=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional360) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional361=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional361) {
                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional362) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional363;
struct sAddNode* __result262__;
void* right_value397;
struct sAddNode* result_255;
_Bool _if_conditional364;
void* right_value398;
struct sNode* __dec_obj186;
_Bool _if_conditional365;
void* right_value399;
struct sNode* __dec_obj187;
_Bool _if_conditional366;
_Bool _if_conditional367;
_Bool _if_conditional368;
void* right_value400;
char* __dec_obj188;
struct sAddNode* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value397, 0, sizeof(void*));
memset(&result_255, 0, sizeof(struct sAddNode*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value400, 0, sizeof(void*));
                        if(_if_conditional363=self==(void*)0,                        _if_conditional363) {
                            __result262__ = __result_obj__ = (void*)0;
                            return __result262__;
                        }
                        result_255=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value397=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value397);
                        if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value397;
                        __freed_obj__ = 0;
                        if(_if_conditional364=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional364) {
                            __dec_obj186=result_255->mLeft;
                            result_255->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value398=sNode_clone(self->mLeft))));
                            if(__dec_obj186) { __dec_obj186 = come_decrement_ref_count(__dec_obj186, ((struct sNode*)__dec_obj186)->finalize, ((struct sNode*)__dec_obj186)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value398);
                            if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { right_value398 = come_decrement_ref_count(right_value398, ((struct sNode*)right_value398)->finalize, ((struct sNode*)right_value398)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value398;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional365=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional365) {
                            __dec_obj187=result_255->mRight;
                            result_255->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value399=sNode_clone(self->mRight))));
                            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value399);
                            if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { right_value399 = come_decrement_ref_count(right_value399, ((struct sNode*)right_value399)->finalize, ((struct sNode*)right_value399)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value399;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional366=self!=((void*)0),                        _if_conditional366) {
                            result_255->mQuote=self->mQuote;
                        }
                        if(_if_conditional367=self!=((void*)0),                        _if_conditional367) {
                            result_255->sline=self->sline;
                        }
                        if(_if_conditional368=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional368) {
                            __dec_obj188=result_255->sname;
                            result_255->sname=(char*)come_increment_ref_count(((char*)(right_value400=string_clone(self->sname))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value400);
                            if(right_value400 && right_value400 != __result_obj__ && !__freed_obj__) { right_value400 = come_decrement_ref_count(right_value400, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value400;
                            __freed_obj__ = 0;
                        }
                        __result263__ = __result_obj__ = result_255;
                        if(result_255 && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,result_255, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result263__;
                        if(result_255 && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,result_255, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional370;
_Bool _if_conditional371;
_Bool _if_conditional372;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional370=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional370) {
                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional371=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional371) {
                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional372=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional372) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional373;
struct sSubNode* __result265__;
void* right_value405;
struct sSubNode* result_257;
_Bool _if_conditional374;
void* right_value406;
struct sNode* __dec_obj189;
_Bool _if_conditional375;
void* right_value407;
struct sNode* __dec_obj190;
_Bool _if_conditional376;
_Bool _if_conditional377;
_Bool _if_conditional378;
void* right_value408;
char* __dec_obj191;
struct sSubNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value405, 0, sizeof(void*));
memset(&result_257, 0, sizeof(struct sSubNode*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value408, 0, sizeof(void*));
                            if(_if_conditional373=self==(void*)0,                            _if_conditional373) {
                                __result265__ = __result_obj__ = (void*)0;
                                return __result265__;
                            }
                            result_257=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value405=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
                            if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value405;
                            __freed_obj__ = 0;
                            if(_if_conditional374=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional374) {
                                __dec_obj189=result_257->mLeft;
                                result_257->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value406=sNode_clone(self->mLeft))));
                                if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, ((struct sNode*)__dec_obj189)->finalize, ((struct sNode*)__dec_obj189)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value406);
                                if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { right_value406 = come_decrement_ref_count(right_value406, ((struct sNode*)right_value406)->finalize, ((struct sNode*)right_value406)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value406;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional375=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional375) {
                                __dec_obj190=result_257->mRight;
                                result_257->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNode_clone(self->mRight))));
                                if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value407);
                                if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { right_value407 = come_decrement_ref_count(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value407;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional376=self!=((void*)0),                            _if_conditional376) {
                                result_257->mQuote=self->mQuote;
                            }
                            if(_if_conditional377=self!=((void*)0),                            _if_conditional377) {
                                result_257->sline=self->sline;
                            }
                            if(_if_conditional378=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional378) {
                                __dec_obj191=result_257->sname;
                                result_257->sname=(char*)come_increment_ref_count(((char*)(right_value408=string_clone(self->sname))));
                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value408);
                                if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value408;
                                __freed_obj__ = 0;
                            }
                            __result266__ = __result_obj__ = result_257;
                            if(result_257 && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,result_257, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result266__;
                            if(result_257 && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,result_257, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value410;
struct sNode* node_258;
_Bool _while_condtional12;
_Bool _if_conditional379;
void* right_value411;
struct sNode* right_259;
void* right_value412;
void* right_value413;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value418;
struct sNode* __result271__;
_Bool _if_conditional389;
void* right_value419;
struct sNode* right_261;
void* right_value420;
void* right_value421;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value426;
struct sNode* __result274__;
_Bool _if_conditional399;
void* right_value427;
struct sNode* right_263;
void* right_value428;
void* right_value429;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* right_value434;
struct sNode* __result277__;
_Bool _if_conditional409;
void* right_value435;
struct sNode* right_265;
void* right_value436;
void* right_value437;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* right_value442;
struct sNode* __result280__;
struct sNode* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value410, 0, sizeof(void*));
memset(&node_258, 0, sizeof(struct sNode*));
memset(&right_value411, 0, sizeof(void*));
memset(&right_259, 0, sizeof(struct sNode*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
memset(&right_261, 0, sizeof(struct sNode*));
memset(&right_value420, 0, sizeof(void*));
memset(&right_value421, 0, sizeof(void*));
memset(&right_value426, 0, sizeof(void*));
memset(&right_value427, 0, sizeof(void*));
memset(&right_263, 0, sizeof(struct sNode*));
memset(&right_value428, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value434, 0, sizeof(void*));
memset(&right_value435, 0, sizeof(void*));
memset(&right_265, 0, sizeof(struct sNode*));
memset(&right_value436, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value442, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=add_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value410);
    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { right_value410 = come_decrement_ref_count(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value410;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional12=*info->p,    _while_condtional12) {
        if(_if_conditional379=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional379) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=shift_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value411);
            if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { right_value411 = come_decrement_ref_count(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value411;
            __freed_obj__ = 0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2324, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value413=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value412=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2324, "struct sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_258),(struct sNode*)come_increment_ref_count(right_259),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sLShiftNode_sline;
            _inf_value13->sname=(void*)sLShiftNode_sname;
            _inf_value13->terminated=(void*)sLShiftNode_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result271__ = __result_obj__ = ((struct sNode*)(right_value418=_inf_value13));
            if(right_259 && !__freed_obj__) { right_259 = come_decrement_ref_count(right_259, ((struct sNode*)right_259)->finalize, ((struct sNode*)right_259)->_protocol_obj, 0, 0, 0); } 
            if(node_258 && !__freed_obj__) { node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value412);
            if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value412;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value413);
            if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value413;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value418);
            if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { right_value418 = come_decrement_ref_count(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value418;
            __freed_obj__ = 0;
            return __result271__;
            if(right_259 && !__freed_obj__) { right_259 = come_decrement_ref_count(right_259, ((struct sNode*)right_259)->finalize, ((struct sNode*)right_259)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional389=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional389) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value419=shift_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value419);
                if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value419;
                __freed_obj__ = 0;
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2332, "struct sNode");
                _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value421=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value420=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2332, "struct sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_258),(struct sNode*)come_increment_ref_count(right_261),(_Bool)0,info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sRShiftNode_finalize;
                _inf_value14->clone=(void*)sRShiftNode_clone;
                _inf_value14->compile=(void*)sRShiftNode_compile;
                _inf_value14->sline=(void*)sRShiftNode_sline;
                _inf_value14->sname=(void*)sRShiftNode_sname;
                _inf_value14->terminated=(void*)sRShiftNode_terminated;
                _inf_value14->kind=(void*)sRShiftNode_kind;
                __result274__ = __result_obj__ = ((struct sNode*)(right_value426=_inf_value14));
                if(right_261 && !__freed_obj__) { right_261 = come_decrement_ref_count(right_261, ((struct sNode*)right_261)->finalize, ((struct sNode*)right_261)->_protocol_obj, 0, 0, 0); } 
                if(node_258 && !__freed_obj__) { node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value420);
                if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value420, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value420;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value421);
                if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value421;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value426);
                if(right_value426 && right_value426 != __result_obj__ && !__freed_obj__) { right_value426 = come_decrement_ref_count(right_value426, ((struct sNode*)right_value426)->finalize, ((struct sNode*)right_value426)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value426;
                __freed_obj__ = 0;
                return __result274__;
                if(right_261 && !__freed_obj__) { right_261 = come_decrement_ref_count(right_261, ((struct sNode*)right_261)->finalize, ((struct sNode*)right_261)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional399=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional399) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value427=shift_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value427);
                    if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value427;
                    __freed_obj__ = 0;
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2340, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sLShiftNode*)(right_value429=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value428=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2340, "struct sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_258),(struct sNode*)come_increment_ref_count(right_263),(_Bool)1,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sLShiftNode_finalize;
                    _inf_value15->clone=(void*)sLShiftNode_clone;
                    _inf_value15->compile=(void*)sLShiftNode_compile;
                    _inf_value15->sline=(void*)sLShiftNode_sline;
                    _inf_value15->sname=(void*)sLShiftNode_sname;
                    _inf_value15->terminated=(void*)sLShiftNode_terminated;
                    _inf_value15->kind=(void*)sLShiftNode_kind;
                    __result277__ = __result_obj__ = ((struct sNode*)(right_value434=_inf_value15));
                    if(right_263 && !__freed_obj__) { right_263 = come_decrement_ref_count(right_263, ((struct sNode*)right_263)->finalize, ((struct sNode*)right_263)->_protocol_obj, 0, 0, 0); } 
                    if(node_258 && !__freed_obj__) { node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value428);
                    if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value428, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value428;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value429);
                    if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value429;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value434);
                    if(right_value434 && right_value434 != __result_obj__ && !__freed_obj__) { right_value434 = come_decrement_ref_count(right_value434, ((struct sNode*)right_value434)->finalize, ((struct sNode*)right_value434)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value434;
                    __freed_obj__ = 0;
                    return __result277__;
                    if(right_263 && !__freed_obj__) { right_263 = come_decrement_ref_count(right_263, ((struct sNode*)right_263)->finalize, ((struct sNode*)right_263)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional409=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional409) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value435=shift_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value435);
                        if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value435;
                        __freed_obj__ = 0;
                        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2348, "struct sNode");
                        _inf_obj_value16=come_increment_ref_count(((struct sRShiftNode*)(right_value437=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value436=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2348, "struct sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_258),(struct sNode*)come_increment_ref_count(right_265),(_Bool)1,info))));
                        _inf_value16->_protocol_obj=_inf_obj_value16;
                        _inf_value16->finalize=(void*)sRShiftNode_finalize;
                        _inf_value16->clone=(void*)sRShiftNode_clone;
                        _inf_value16->compile=(void*)sRShiftNode_compile;
                        _inf_value16->sline=(void*)sRShiftNode_sline;
                        _inf_value16->sname=(void*)sRShiftNode_sname;
                        _inf_value16->terminated=(void*)sRShiftNode_terminated;
                        _inf_value16->kind=(void*)sRShiftNode_kind;
                        __result280__ = __result_obj__ = ((struct sNode*)(right_value442=_inf_value16));
                        if(right_265 && !__freed_obj__) { right_265 = come_decrement_ref_count(right_265, ((struct sNode*)right_265)->finalize, ((struct sNode*)right_265)->_protocol_obj, 0, 0, 0); } 
                        if(node_258 && !__freed_obj__) { node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value436);
                        if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value436, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value436;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value437);
                        if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value437;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value442);
                        if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value442;
                        __freed_obj__ = 0;
                        return __result280__;
                        if(right_265 && !__freed_obj__) { right_265 = come_decrement_ref_count(right_265, ((struct sNode*)right_265)->finalize, ((struct sNode*)right_265)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result281__ = __result_obj__ = node_258;
    if(node_258 && !__freed_obj__) { node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 1, 0); } 
    return __result281__;
    if(node_258 && !__freed_obj__) { node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional400=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional400) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional401=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional401) {
                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional402=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional402) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional403;
struct sLShiftNode* __result275__;
void* right_value430;
struct sLShiftNode* result_264;
_Bool _if_conditional404;
void* right_value431;
struct sNode* __dec_obj198;
_Bool _if_conditional405;
void* right_value432;
struct sNode* __dec_obj199;
_Bool _if_conditional406;
_Bool _if_conditional407;
_Bool _if_conditional408;
void* right_value433;
char* __dec_obj200;
struct sLShiftNode* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value430, 0, sizeof(void*));
memset(&result_264, 0, sizeof(struct sLShiftNode*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value433, 0, sizeof(void*));
                        if(_if_conditional403=self==(void*)0,                        _if_conditional403) {
                            __result275__ = __result_obj__ = (void*)0;
                            return __result275__;
                        }
                        result_264=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value430=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value430);
                        if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value430;
                        __freed_obj__ = 0;
                        if(_if_conditional404=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional404) {
                            __dec_obj198=result_264->mLeft;
                            result_264->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value431=sNode_clone(self->mLeft))));
                            if(__dec_obj198) { __dec_obj198 = come_decrement_ref_count(__dec_obj198, ((struct sNode*)__dec_obj198)->finalize, ((struct sNode*)__dec_obj198)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value431);
                            if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { right_value431 = come_decrement_ref_count(right_value431, ((struct sNode*)right_value431)->finalize, ((struct sNode*)right_value431)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value431;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional405=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional405) {
                            __dec_obj199=result_264->mRight;
                            result_264->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value432=sNode_clone(self->mRight))));
                            if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value432);
                            if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { right_value432 = come_decrement_ref_count(right_value432, ((struct sNode*)right_value432)->finalize, ((struct sNode*)right_value432)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value432;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional406=self!=((void*)0),                        _if_conditional406) {
                            result_264->mQuote=self->mQuote;
                        }
                        if(_if_conditional407=self!=((void*)0),                        _if_conditional407) {
                            result_264->sline=self->sline;
                        }
                        if(_if_conditional408=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional408) {
                            __dec_obj200=result_264->sname;
                            result_264->sname=(char*)come_increment_ref_count(((char*)(right_value433=string_clone(self->sname))));
                            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value433);
                            if(right_value433 && right_value433 != __result_obj__ && !__freed_obj__) { right_value433 = come_decrement_ref_count(right_value433, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value433;
                            __freed_obj__ = 0;
                        }
                        __result276__ = __result_obj__ = result_264;
                        if(result_264 && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result276__;
                        if(result_264 && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,result_264, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional410;
_Bool _if_conditional411;
_Bool _if_conditional412;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional410=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional410) {
                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional411=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional411) {
                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional412=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional412) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional413;
struct sRShiftNode* __result278__;
void* right_value438;
struct sRShiftNode* result_266;
_Bool _if_conditional414;
void* right_value439;
struct sNode* __dec_obj201;
_Bool _if_conditional415;
void* right_value440;
struct sNode* __dec_obj202;
_Bool _if_conditional416;
_Bool _if_conditional417;
_Bool _if_conditional418;
void* right_value441;
char* __dec_obj203;
struct sRShiftNode* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value438, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct sRShiftNode*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value441, 0, sizeof(void*));
                            if(_if_conditional413=self==(void*)0,                            _if_conditional413) {
                                __result278__ = __result_obj__ = (void*)0;
                                return __result278__;
                            }
                            result_266=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value438=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value438);
                            if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value438;
                            __freed_obj__ = 0;
                            if(_if_conditional414=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional414) {
                                __dec_obj201=result_266->mLeft;
                                result_266->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value439=sNode_clone(self->mLeft))));
                                if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, ((struct sNode*)__dec_obj201)->finalize, ((struct sNode*)__dec_obj201)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value439);
                                if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { right_value439 = come_decrement_ref_count(right_value439, ((struct sNode*)right_value439)->finalize, ((struct sNode*)right_value439)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value439;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional415=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional415) {
                                __dec_obj202=result_266->mRight;
                                result_266->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=sNode_clone(self->mRight))));
                                if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value440);
                                if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { right_value440 = come_decrement_ref_count(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value440;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional416=self!=((void*)0),                            _if_conditional416) {
                                result_266->mQuote=self->mQuote;
                            }
                            if(_if_conditional417=self!=((void*)0),                            _if_conditional417) {
                                result_266->sline=self->sline;
                            }
                            if(_if_conditional418=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional418) {
                                __dec_obj203=result_266->sname;
                                result_266->sname=(char*)come_increment_ref_count(((char*)(right_value441=string_clone(self->sname))));
                                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count(__dec_obj203, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value441);
                                if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { right_value441 = come_decrement_ref_count(right_value441, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value441;
                                __freed_obj__ = 0;
                            }
                            __result279__ = __result_obj__ = result_266;
                            if(result_266 && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,result_266, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result279__;
                            if(result_266 && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,result_266, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value443;
struct sNode* node_267;
_Bool _while_condtional13;
_Bool _if_conditional419;
void* right_value444;
struct sNode* right_268;
void* right_value445;
void* right_value446;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* right_value451;
struct sNode* __result284__;
_Bool _if_conditional429;
void* right_value452;
struct sNode* right_270;
void* right_value453;
void* right_value454;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* right_value459;
struct sNode* __result287__;
_Bool _if_conditional439;
void* right_value460;
struct sNode* right_272;
void* right_value461;
void* right_value462;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* right_value467;
struct sNode* __result290__;
_Bool _if_conditional449;
void* right_value468;
struct sNode* right_274;
void* right_value469;
void* right_value470;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* right_value475;
struct sNode* __result293__;
_Bool _if_conditional459;
void* right_value476;
struct sNode* right_276;
void* right_value477;
void* right_value478;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* right_value483;
struct sNode* __result296__;
_Bool _if_conditional469;
void* right_value484;
struct sNode* right_278;
void* right_value485;
void* right_value486;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* right_value491;
struct sNode* __result299__;
_Bool _if_conditional479;
void* right_value492;
struct sNode* right_280;
void* right_value493;
void* right_value494;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* right_value499;
struct sNode* __result302__;
_Bool _if_conditional489;
void* right_value500;
struct sNode* right_282;
void* right_value501;
void* right_value502;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* right_value507;
struct sNode* __result305__;
struct sNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value443, 0, sizeof(void*));
memset(&node_267, 0, sizeof(struct sNode*));
memset(&right_value444, 0, sizeof(void*));
memset(&right_268, 0, sizeof(struct sNode*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
memset(&right_270, 0, sizeof(struct sNode*));
memset(&right_value453, 0, sizeof(void*));
memset(&right_value454, 0, sizeof(void*));
memset(&right_value459, 0, sizeof(void*));
memset(&right_value460, 0, sizeof(void*));
memset(&right_272, 0, sizeof(struct sNode*));
memset(&right_value461, 0, sizeof(void*));
memset(&right_value462, 0, sizeof(void*));
memset(&right_value467, 0, sizeof(void*));
memset(&right_value468, 0, sizeof(void*));
memset(&right_274, 0, sizeof(struct sNode*));
memset(&right_value469, 0, sizeof(void*));
memset(&right_value470, 0, sizeof(void*));
memset(&right_value475, 0, sizeof(void*));
memset(&right_value476, 0, sizeof(void*));
memset(&right_276, 0, sizeof(struct sNode*));
memset(&right_value477, 0, sizeof(void*));
memset(&right_value478, 0, sizeof(void*));
memset(&right_value483, 0, sizeof(void*));
memset(&right_value484, 0, sizeof(void*));
memset(&right_278, 0, sizeof(struct sNode*));
memset(&right_value485, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value491, 0, sizeof(void*));
memset(&right_value492, 0, sizeof(void*));
memset(&right_280, 0, sizeof(struct sNode*));
memset(&right_value493, 0, sizeof(void*));
memset(&right_value494, 0, sizeof(void*));
memset(&right_value499, 0, sizeof(void*));
memset(&right_value500, 0, sizeof(void*));
memset(&right_282, 0, sizeof(struct sNode*));
memset(&right_value501, 0, sizeof(void*));
memset(&right_value502, 0, sizeof(void*));
memset(&right_value507, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=shift_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value443);
    if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { right_value443 = come_decrement_ref_count(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value443;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional13=*info->p,    _while_condtional13) {
        if(_if_conditional419=*info->p==62&&*(info->p+1)==61,        _if_conditional419) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=shift_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value444);
            if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { right_value444 = come_decrement_ref_count(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value444;
            __freed_obj__ = 0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2375, "struct sNode");
            _inf_obj_value17=come_increment_ref_count(((struct sGtEqNode*)(right_value446=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value445=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2375, "struct sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_268),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sGtEqNode_sline;
            _inf_value17->sname=(void*)sGtEqNode_sname;
            _inf_value17->terminated=(void*)sGtEqNode_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result284__ = __result_obj__ = ((struct sNode*)(right_value451=_inf_value17));
            if(right_268 && !__freed_obj__) { right_268 = come_decrement_ref_count(right_268, ((struct sNode*)right_268)->finalize, ((struct sNode*)right_268)->_protocol_obj, 0, 0, 0); } 
            if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value445);
            if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value445;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value446);
            if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value446;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value451);
            if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { right_value451 = come_decrement_ref_count(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value451;
            __freed_obj__ = 0;
            return __result284__;
            if(right_268 && !__freed_obj__) { right_268 = come_decrement_ref_count(right_268, ((struct sNode*)right_268)->finalize, ((struct sNode*)right_268)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional429=*info->p==60&&*(info->p+1)==61,            _if_conditional429) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value452=shift_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value452);
                if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value452;
                __freed_obj__ = 0;
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2383, "struct sNode");
                _inf_obj_value18=come_increment_ref_count(((struct sLtEqNode*)(right_value454=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value453=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2383, "struct sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_270),(_Bool)0,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLtEqNode_finalize;
                _inf_value18->clone=(void*)sLtEqNode_clone;
                _inf_value18->compile=(void*)sLtEqNode_compile;
                _inf_value18->sline=(void*)sLtEqNode_sline;
                _inf_value18->sname=(void*)sLtEqNode_sname;
                _inf_value18->terminated=(void*)sLtEqNode_terminated;
                _inf_value18->kind=(void*)sLtEqNode_kind;
                __result287__ = __result_obj__ = ((struct sNode*)(right_value459=_inf_value18));
                if(right_270 && !__freed_obj__) { right_270 = come_decrement_ref_count(right_270, ((struct sNode*)right_270)->finalize, ((struct sNode*)right_270)->_protocol_obj, 0, 0, 0); } 
                if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value453);
                if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value453, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value453;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value454);
                if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value454;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value459);
                if(right_value459 && right_value459 != __result_obj__ && !__freed_obj__) { right_value459 = come_decrement_ref_count(right_value459, ((struct sNode*)right_value459)->finalize, ((struct sNode*)right_value459)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value459;
                __freed_obj__ = 0;
                return __result287__;
                if(right_270 && !__freed_obj__) { right_270 = come_decrement_ref_count(right_270, ((struct sNode*)right_270)->finalize, ((struct sNode*)right_270)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional439=*info->p==62&&*(info->p+1)!=62,                _if_conditional439) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value460=shift_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value460);
                    if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { right_value460 = come_decrement_ref_count(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value460;
                    __freed_obj__ = 0;
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2391, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sGtNode*)(right_value462=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value461=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2391, "struct sGtNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_272),(_Bool)0,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sGtNode_finalize;
                    _inf_value19->clone=(void*)sGtNode_clone;
                    _inf_value19->compile=(void*)sGtNode_compile;
                    _inf_value19->sline=(void*)sGtNode_sline;
                    _inf_value19->sname=(void*)sGtNode_sname;
                    _inf_value19->terminated=(void*)sGtNode_terminated;
                    _inf_value19->kind=(void*)sGtNode_kind;
                    __result290__ = __result_obj__ = ((struct sNode*)(right_value467=_inf_value19));
                    if(right_272 && !__freed_obj__) { right_272 = come_decrement_ref_count(right_272, ((struct sNode*)right_272)->finalize, ((struct sNode*)right_272)->_protocol_obj, 0, 0, 0); } 
                    if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value461);
                    if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value461, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value461;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value462);
                    if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value462;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value467);
                    if(right_value467 && right_value467 != __result_obj__ && !__freed_obj__) { right_value467 = come_decrement_ref_count(right_value467, ((struct sNode*)right_value467)->finalize, ((struct sNode*)right_value467)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value467;
                    __freed_obj__ = 0;
                    return __result290__;
                    if(right_272 && !__freed_obj__) { right_272 = come_decrement_ref_count(right_272, ((struct sNode*)right_272)->finalize, ((struct sNode*)right_272)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional449=*info->p==60&&*(info->p+1)!=60,                    _if_conditional449) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value468=shift_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value468);
                        if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { right_value468 = come_decrement_ref_count(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value468;
                        __freed_obj__ = 0;
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2399, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sLtNode*)(right_value470=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value469=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2399, "struct sLtNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_274),(_Bool)0,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sLtNode_finalize;
                        _inf_value20->clone=(void*)sLtNode_clone;
                        _inf_value20->compile=(void*)sLtNode_compile;
                        _inf_value20->sline=(void*)sLtNode_sline;
                        _inf_value20->sname=(void*)sLtNode_sname;
                        _inf_value20->terminated=(void*)sLtNode_terminated;
                        _inf_value20->kind=(void*)sLtNode_kind;
                        __result293__ = __result_obj__ = ((struct sNode*)(right_value475=_inf_value20));
                        if(right_274 && !__freed_obj__) { right_274 = come_decrement_ref_count(right_274, ((struct sNode*)right_274)->finalize, ((struct sNode*)right_274)->_protocol_obj, 0, 0, 0); } 
                        if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value469);
                        if(right_value469 && right_value469 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value469, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value469;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value470);
                        if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value470;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value475);
                        if(right_value475 && right_value475 != __result_obj__ && !__freed_obj__) { right_value475 = come_decrement_ref_count(right_value475, ((struct sNode*)right_value475)->finalize, ((struct sNode*)right_value475)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value475;
                        __freed_obj__ = 0;
                        return __result293__;
                        if(right_274 && !__freed_obj__) { right_274 = come_decrement_ref_count(right_274, ((struct sNode*)right_274)->finalize, ((struct sNode*)right_274)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional459=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional459) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_276=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value476=shift_exp(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value476);
                            if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { right_value476 = come_decrement_ref_count(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value476;
                            __freed_obj__ = 0;
                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2407, "struct sNode");
                            _inf_obj_value21=come_increment_ref_count(((struct sGtEqNode*)(right_value478=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value477=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2407, "struct sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_276),(_Bool)1,info))));
                            _inf_value21->_protocol_obj=_inf_obj_value21;
                            _inf_value21->finalize=(void*)sGtEqNode_finalize;
                            _inf_value21->clone=(void*)sGtEqNode_clone;
                            _inf_value21->compile=(void*)sGtEqNode_compile;
                            _inf_value21->sline=(void*)sGtEqNode_sline;
                            _inf_value21->sname=(void*)sGtEqNode_sname;
                            _inf_value21->terminated=(void*)sGtEqNode_terminated;
                            _inf_value21->kind=(void*)sGtEqNode_kind;
                            __result296__ = __result_obj__ = ((struct sNode*)(right_value483=_inf_value21));
                            if(right_276 && !__freed_obj__) { right_276 = come_decrement_ref_count(right_276, ((struct sNode*)right_276)->finalize, ((struct sNode*)right_276)->_protocol_obj, 0, 0, 0); } 
                            if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value477);
                            if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value477, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value477;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value478);
                            if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value478;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value483);
                            if(right_value483 && right_value483 != __result_obj__ && !__freed_obj__) { right_value483 = come_decrement_ref_count(right_value483, ((struct sNode*)right_value483)->finalize, ((struct sNode*)right_value483)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[3] = right_value483;
                            __freed_obj__ = 0;
                            return __result296__;
                            if(right_276 && !__freed_obj__) { right_276 = come_decrement_ref_count(right_276, ((struct sNode*)right_276)->finalize, ((struct sNode*)right_276)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional469=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional469) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value484=shift_exp(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value484);
                                if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { right_value484 = come_decrement_ref_count(right_value484, ((struct sNode*)right_value484)->finalize, ((struct sNode*)right_value484)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value484;
                                __freed_obj__ = 0;
                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2415, "struct sNode");
                                _inf_obj_value22=come_increment_ref_count(((struct sLtEqNode*)(right_value486=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value485=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2415, "struct sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_278),(_Bool)1,info))));
                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                _inf_value22->finalize=(void*)sLtEqNode_finalize;
                                _inf_value22->clone=(void*)sLtEqNode_clone;
                                _inf_value22->compile=(void*)sLtEqNode_compile;
                                _inf_value22->sline=(void*)sLtEqNode_sline;
                                _inf_value22->sname=(void*)sLtEqNode_sname;
                                _inf_value22->terminated=(void*)sLtEqNode_terminated;
                                _inf_value22->kind=(void*)sLtEqNode_kind;
                                __result299__ = __result_obj__ = ((struct sNode*)(right_value491=_inf_value22));
                                if(right_278 && !__freed_obj__) { right_278 = come_decrement_ref_count(right_278, ((struct sNode*)right_278)->finalize, ((struct sNode*)right_278)->_protocol_obj, 0, 0, 0); } 
                                if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value485);
                                if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value485, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value485;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value486);
                                if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value486;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value491);
                                if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { right_value491 = come_decrement_ref_count(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[3] = right_value491;
                                __freed_obj__ = 0;
                                return __result299__;
                                if(right_278 && !__freed_obj__) { right_278 = come_decrement_ref_count(right_278, ((struct sNode*)right_278)->finalize, ((struct sNode*)right_278)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional479=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional479) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_280=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value492=shift_exp(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value492);
                                    if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { right_value492 = come_decrement_ref_count(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value492;
                                    __freed_obj__ = 0;
                                    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2423, "struct sNode");
                                    _inf_obj_value23=come_increment_ref_count(((struct sGtNode*)(right_value494=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value493=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2423, "struct sGtNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_280),(_Bool)1,info))));
                                    _inf_value23->_protocol_obj=_inf_obj_value23;
                                    _inf_value23->finalize=(void*)sGtNode_finalize;
                                    _inf_value23->clone=(void*)sGtNode_clone;
                                    _inf_value23->compile=(void*)sGtNode_compile;
                                    _inf_value23->sline=(void*)sGtNode_sline;
                                    _inf_value23->sname=(void*)sGtNode_sname;
                                    _inf_value23->terminated=(void*)sGtNode_terminated;
                                    _inf_value23->kind=(void*)sGtNode_kind;
                                    __result302__ = __result_obj__ = ((struct sNode*)(right_value499=_inf_value23));
                                    if(right_280 && !__freed_obj__) { right_280 = come_decrement_ref_count(right_280, ((struct sNode*)right_280)->finalize, ((struct sNode*)right_280)->_protocol_obj, 0, 0, 0); } 
                                    if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value493);
                                    if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value493, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value493;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value494);
                                    if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value494;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value499);
                                    if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { right_value499 = come_decrement_ref_count(right_value499, ((struct sNode*)right_value499)->finalize, ((struct sNode*)right_value499)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[3] = right_value499;
                                    __freed_obj__ = 0;
                                    return __result302__;
                                    if(right_280 && !__freed_obj__) { right_280 = come_decrement_ref_count(right_280, ((struct sNode*)right_280)->finalize, ((struct sNode*)right_280)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional489=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional489) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value500=shift_exp(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value500);
                                        if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { right_value500 = come_decrement_ref_count(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value500;
                                        __freed_obj__ = 0;
                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2431, "struct sNode");
                                        _inf_obj_value24=come_increment_ref_count(((struct sLtNode*)(right_value502=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value501=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2431, "struct sLtNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_282),(_Bool)1,info))));
                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                        _inf_value24->finalize=(void*)sLtNode_finalize;
                                        _inf_value24->clone=(void*)sLtNode_clone;
                                        _inf_value24->compile=(void*)sLtNode_compile;
                                        _inf_value24->sline=(void*)sLtNode_sline;
                                        _inf_value24->sname=(void*)sLtNode_sname;
                                        _inf_value24->terminated=(void*)sLtNode_terminated;
                                        _inf_value24->kind=(void*)sLtNode_kind;
                                        __result305__ = __result_obj__ = ((struct sNode*)(right_value507=_inf_value24));
                                        if(right_282 && !__freed_obj__) { right_282 = come_decrement_ref_count(right_282, ((struct sNode*)right_282)->finalize, ((struct sNode*)right_282)->_protocol_obj, 0, 0, 0); } 
                                        if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value501);
                                        if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value501, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value501;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value502);
                                        if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value502;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value507);
                                        if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { right_value507 = come_decrement_ref_count(right_value507, ((struct sNode*)right_value507)->finalize, ((struct sNode*)right_value507)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[3] = right_value507;
                                        __freed_obj__ = 0;
                                        return __result305__;
                                        if(right_282 && !__freed_obj__) { right_282 = come_decrement_ref_count(right_282, ((struct sNode*)right_282)->finalize, ((struct sNode*)right_282)->_protocol_obj, 0, 0, 0); } 
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
    __result306__ = __result_obj__ = node_267;
    if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 1, 0); } 
    return __result306__;
    if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional460;
_Bool _if_conditional461;
_Bool _if_conditional462;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional460=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional460) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional461=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional461) {
                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional462=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional462) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional463;
struct sGtEqNode* __result294__;
void* right_value479;
struct sGtEqNode* result_277;
_Bool _if_conditional464;
void* right_value480;
struct sNode* __dec_obj216;
_Bool _if_conditional465;
void* right_value481;
struct sNode* __dec_obj217;
_Bool _if_conditional466;
_Bool _if_conditional467;
_Bool _if_conditional468;
void* right_value482;
char* __dec_obj218;
struct sGtEqNode* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value479, 0, sizeof(void*));
memset(&result_277, 0, sizeof(struct sGtEqNode*));
memset(&right_value480, 0, sizeof(void*));
memset(&right_value481, 0, sizeof(void*));
memset(&right_value482, 0, sizeof(void*));
                                if(_if_conditional463=self==(void*)0,                                _if_conditional463) {
                                    __result294__ = __result_obj__ = (void*)0;
                                    return __result294__;
                                }
                                result_277=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value479=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value479);
                                if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value479;
                                __freed_obj__ = 0;
                                if(_if_conditional464=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional464) {
                                    __dec_obj216=result_277->mLeft;
                                    result_277->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value480=sNode_clone(self->mLeft))));
                                    if(__dec_obj216) { __dec_obj216 = come_decrement_ref_count(__dec_obj216, ((struct sNode*)__dec_obj216)->finalize, ((struct sNode*)__dec_obj216)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value480);
                                    if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { right_value480 = come_decrement_ref_count(right_value480, ((struct sNode*)right_value480)->finalize, ((struct sNode*)right_value480)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value480;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional465=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional465) {
                                    __dec_obj217=result_277->mRight;
                                    result_277->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value481=sNode_clone(self->mRight))));
                                    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value481);
                                    if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { right_value481 = come_decrement_ref_count(right_value481, ((struct sNode*)right_value481)->finalize, ((struct sNode*)right_value481)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value481;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional466=self!=((void*)0),                                _if_conditional466) {
                                    result_277->mQuote=self->mQuote;
                                }
                                if(_if_conditional467=self!=((void*)0),                                _if_conditional467) {
                                    result_277->sline=self->sline;
                                }
                                if(_if_conditional468=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional468) {
                                    __dec_obj218=result_277->sname;
                                    result_277->sname=(char*)come_increment_ref_count(((char*)(right_value482=string_clone(self->sname))));
                                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count(__dec_obj218, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value482);
                                    if(right_value482 && right_value482 != __result_obj__ && !__freed_obj__) { right_value482 = come_decrement_ref_count(right_value482, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value482;
                                    __freed_obj__ = 0;
                                }
                                __result295__ = __result_obj__ = result_277;
                                if(result_277 && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,result_277, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result295__;
                                if(result_277 && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,result_277, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional470;
_Bool _if_conditional471;
_Bool _if_conditional472;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional470=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional470) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional471=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional471) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional472=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional472) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional473;
struct sLtEqNode* __result297__;
void* right_value487;
struct sLtEqNode* result_279;
_Bool _if_conditional474;
void* right_value488;
struct sNode* __dec_obj219;
_Bool _if_conditional475;
void* right_value489;
struct sNode* __dec_obj220;
_Bool _if_conditional476;
_Bool _if_conditional477;
_Bool _if_conditional478;
void* right_value490;
char* __dec_obj221;
struct sLtEqNode* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value487, 0, sizeof(void*));
memset(&result_279, 0, sizeof(struct sLtEqNode*));
memset(&right_value488, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
memset(&right_value490, 0, sizeof(void*));
                                    if(_if_conditional473=self==(void*)0,                                    _if_conditional473) {
                                        __result297__ = __result_obj__ = (void*)0;
                                        return __result297__;
                                    }
                                    result_279=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value487=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value487);
                                    if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value487;
                                    __freed_obj__ = 0;
                                    if(_if_conditional474=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional474) {
                                        __dec_obj219=result_279->mLeft;
                                        result_279->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value488=sNode_clone(self->mLeft))));
                                        if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count(__dec_obj219, ((struct sNode*)__dec_obj219)->finalize, ((struct sNode*)__dec_obj219)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value488);
                                        if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { right_value488 = come_decrement_ref_count(right_value488, ((struct sNode*)right_value488)->finalize, ((struct sNode*)right_value488)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value488;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional475=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional475) {
                                        __dec_obj220=result_279->mRight;
                                        result_279->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value489=sNode_clone(self->mRight))));
                                        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value489);
                                        if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { right_value489 = come_decrement_ref_count(right_value489, ((struct sNode*)right_value489)->finalize, ((struct sNode*)right_value489)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value489;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional476=self!=((void*)0),                                    _if_conditional476) {
                                        result_279->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional477=self!=((void*)0),                                    _if_conditional477) {
                                        result_279->sline=self->sline;
                                    }
                                    if(_if_conditional478=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional478) {
                                        __dec_obj221=result_279->sname;
                                        result_279->sname=(char*)come_increment_ref_count(((char*)(right_value490=string_clone(self->sname))));
                                        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count(__dec_obj221, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value490);
                                        if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { right_value490 = come_decrement_ref_count(right_value490, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value490;
                                        __freed_obj__ = 0;
                                    }
                                    __result298__ = __result_obj__ = result_279;
                                    if(result_279 && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result298__;
                                    if(result_279 && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,result_279, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional480;
_Bool _if_conditional481;
_Bool _if_conditional482;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional480=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional480) {
                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional481=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional481) {
                                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional482=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional482) {
                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional483;
struct sGtNode* __result300__;
void* right_value495;
struct sGtNode* result_281;
_Bool _if_conditional484;
void* right_value496;
struct sNode* __dec_obj222;
_Bool _if_conditional485;
void* right_value497;
struct sNode* __dec_obj223;
_Bool _if_conditional486;
_Bool _if_conditional487;
_Bool _if_conditional488;
void* right_value498;
char* __dec_obj224;
struct sGtNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value495, 0, sizeof(void*));
memset(&result_281, 0, sizeof(struct sGtNode*));
memset(&right_value496, 0, sizeof(void*));
memset(&right_value497, 0, sizeof(void*));
memset(&right_value498, 0, sizeof(void*));
                                        if(_if_conditional483=self==(void*)0,                                        _if_conditional483) {
                                            __result300__ = __result_obj__ = (void*)0;
                                            return __result300__;
                                        }
                                        result_281=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value495=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value495);
                                        if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value495;
                                        __freed_obj__ = 0;
                                        if(_if_conditional484=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional484) {
                                            __dec_obj222=result_281->mLeft;
                                            result_281->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value496=sNode_clone(self->mLeft))));
                                            if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count(__dec_obj222, ((struct sNode*)__dec_obj222)->finalize, ((struct sNode*)__dec_obj222)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value496);
                                            if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { right_value496 = come_decrement_ref_count(right_value496, ((struct sNode*)right_value496)->finalize, ((struct sNode*)right_value496)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value496;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional485=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional485) {
                                            __dec_obj223=result_281->mRight;
                                            result_281->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value497=sNode_clone(self->mRight))));
                                            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value497);
                                            if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { right_value497 = come_decrement_ref_count(right_value497, ((struct sNode*)right_value497)->finalize, ((struct sNode*)right_value497)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value497;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional486=self!=((void*)0),                                        _if_conditional486) {
                                            result_281->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional487=self!=((void*)0),                                        _if_conditional487) {
                                            result_281->sline=self->sline;
                                        }
                                        if(_if_conditional488=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional488) {
                                            __dec_obj224=result_281->sname;
                                            result_281->sname=(char*)come_increment_ref_count(((char*)(right_value498=string_clone(self->sname))));
                                            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count(__dec_obj224, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value498);
                                            if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { right_value498 = come_decrement_ref_count(right_value498, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value498;
                                            __freed_obj__ = 0;
                                        }
                                        __result301__ = __result_obj__ = result_281;
                                        if(result_281 && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result301__;
                                        if(result_281 && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,result_281, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional490;
_Bool _if_conditional491;
_Bool _if_conditional492;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional490=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional490) {
                                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional491=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional491) {
                                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional492=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional492) {
                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional493;
struct sLtNode* __result303__;
void* right_value503;
struct sLtNode* result_283;
_Bool _if_conditional494;
void* right_value504;
struct sNode* __dec_obj225;
_Bool _if_conditional495;
void* right_value505;
struct sNode* __dec_obj226;
_Bool _if_conditional496;
_Bool _if_conditional497;
_Bool _if_conditional498;
void* right_value506;
char* __dec_obj227;
struct sLtNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value503, 0, sizeof(void*));
memset(&result_283, 0, sizeof(struct sLtNode*));
memset(&right_value504, 0, sizeof(void*));
memset(&right_value505, 0, sizeof(void*));
memset(&right_value506, 0, sizeof(void*));
                                            if(_if_conditional493=self==(void*)0,                                            _if_conditional493) {
                                                __result303__ = __result_obj__ = (void*)0;
                                                return __result303__;
                                            }
                                            result_283=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value503=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode"))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value503);
                                            if(right_value503 && right_value503 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value503;
                                            __freed_obj__ = 0;
                                            if(_if_conditional494=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional494) {
                                                __dec_obj225=result_283->mLeft;
                                                result_283->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value504=sNode_clone(self->mLeft))));
                                                if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count(__dec_obj225, ((struct sNode*)__dec_obj225)->finalize, ((struct sNode*)__dec_obj225)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value504);
                                                if(right_value504 && right_value504 != __result_obj__ && !__freed_obj__) { right_value504 = come_decrement_ref_count(right_value504, ((struct sNode*)right_value504)->finalize, ((struct sNode*)right_value504)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value504;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional495=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional495) {
                                                __dec_obj226=result_283->mRight;
                                                result_283->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value505=sNode_clone(self->mRight))));
                                                if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value505);
                                                if(right_value505 && right_value505 != __result_obj__ && !__freed_obj__) { right_value505 = come_decrement_ref_count(right_value505, ((struct sNode*)right_value505)->finalize, ((struct sNode*)right_value505)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value505;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional496=self!=((void*)0),                                            _if_conditional496) {
                                                result_283->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional497=self!=((void*)0),                                            _if_conditional497) {
                                                result_283->sline=self->sline;
                                            }
                                            if(_if_conditional498=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional498) {
                                                __dec_obj227=result_283->sname;
                                                result_283->sname=(char*)come_increment_ref_count(((char*)(right_value506=string_clone(self->sname))));
                                                if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count(__dec_obj227, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value506);
                                                if(right_value506 && right_value506 != __result_obj__ && !__freed_obj__) { right_value506 = come_decrement_ref_count(right_value506, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value506;
                                                __freed_obj__ = 0;
                                            }
                                            __result304__ = __result_obj__ = result_283;
                                            if(result_283 && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,result_283, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result304__;
                                            if(result_283 && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,result_283, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value508;
struct sNode* node_284;
_Bool _while_condtional14;
_Bool _if_conditional499;
void* right_value509;
struct sNode* right_285;
void* right_value510;
void* right_value511;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* right_value516;
struct sNode* __result309__;
_Bool _if_conditional509;
void* right_value517;
struct sNode* right_287;
void* right_value518;
void* right_value519;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* right_value524;
struct sNode* __result312__;
_Bool _if_conditional519;
void* right_value525;
struct sNode* right_289;
void* right_value526;
void* right_value527;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* right_value532;
struct sNode* __result315__;
_Bool _if_conditional529;
void* right_value533;
struct sNode* right_291;
void* right_value534;
void* right_value535;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* right_value540;
struct sNode* __result318__;
_Bool _if_conditional539;
void* right_value541;
struct sNode* right_293;
void* right_value542;
void* right_value543;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* right_value548;
struct sNode* __result321__;
_Bool _if_conditional549;
void* right_value549;
struct sNode* right_295;
void* right_value550;
void* right_value551;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* right_value556;
struct sNode* __result324__;
_Bool _if_conditional559;
void* right_value557;
struct sNode* right_297;
void* right_value558;
void* right_value559;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* right_value564;
struct sNode* __result327__;
_Bool _if_conditional569;
void* right_value565;
struct sNode* right_299;
void* right_value566;
void* right_value567;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* right_value572;
struct sNode* __result330__;
struct sNode* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value508, 0, sizeof(void*));
memset(&node_284, 0, sizeof(struct sNode*));
memset(&right_value509, 0, sizeof(void*));
memset(&right_285, 0, sizeof(struct sNode*));
memset(&right_value510, 0, sizeof(void*));
memset(&right_value511, 0, sizeof(void*));
memset(&right_value516, 0, sizeof(void*));
memset(&right_value517, 0, sizeof(void*));
memset(&right_287, 0, sizeof(struct sNode*));
memset(&right_value518, 0, sizeof(void*));
memset(&right_value519, 0, sizeof(void*));
memset(&right_value524, 0, sizeof(void*));
memset(&right_value525, 0, sizeof(void*));
memset(&right_289, 0, sizeof(struct sNode*));
memset(&right_value526, 0, sizeof(void*));
memset(&right_value527, 0, sizeof(void*));
memset(&right_value532, 0, sizeof(void*));
memset(&right_value533, 0, sizeof(void*));
memset(&right_291, 0, sizeof(struct sNode*));
memset(&right_value534, 0, sizeof(void*));
memset(&right_value535, 0, sizeof(void*));
memset(&right_value540, 0, sizeof(void*));
memset(&right_value541, 0, sizeof(void*));
memset(&right_293, 0, sizeof(struct sNode*));
memset(&right_value542, 0, sizeof(void*));
memset(&right_value543, 0, sizeof(void*));
memset(&right_value548, 0, sizeof(void*));
memset(&right_value549, 0, sizeof(void*));
memset(&right_295, 0, sizeof(struct sNode*));
memset(&right_value550, 0, sizeof(void*));
memset(&right_value551, 0, sizeof(void*));
memset(&right_value556, 0, sizeof(void*));
memset(&right_value557, 0, sizeof(void*));
memset(&right_297, 0, sizeof(struct sNode*));
memset(&right_value558, 0, sizeof(void*));
memset(&right_value559, 0, sizeof(void*));
memset(&right_value564, 0, sizeof(void*));
memset(&right_value565, 0, sizeof(void*));
memset(&right_299, 0, sizeof(struct sNode*));
memset(&right_value566, 0, sizeof(void*));
memset(&right_value567, 0, sizeof(void*));
memset(&right_value572, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=comparison_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value508);
    if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { right_value508 = come_decrement_ref_count(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value508;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional14=*info->p,    _while_condtional14) {
        if(_if_conditional499=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional499) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=eq_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value509);
            if(right_value509 && right_value509 != __result_obj__ && !__freed_obj__) { right_value509 = come_decrement_ref_count(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value509;
            __freed_obj__ = 0;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2458, "struct sNode");
            _inf_obj_value25=come_increment_ref_count(((struct sEq2Node*)(right_value511=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value510=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2458, "struct sEq2Node")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_285),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sEq2Node_sline;
            _inf_value25->sname=(void*)sEq2Node_sname;
            _inf_value25->terminated=(void*)sEq2Node_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result309__ = __result_obj__ = ((struct sNode*)(right_value516=_inf_value25));
            if(right_285 && !__freed_obj__) { right_285 = come_decrement_ref_count(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0); } 
            if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value510);
            if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value510;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value511);
            if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value511;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value516);
            if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { right_value516 = come_decrement_ref_count(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value516;
            __freed_obj__ = 0;
            return __result309__;
            if(right_285 && !__freed_obj__) { right_285 = come_decrement_ref_count(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional509=*info->p==61&&*(info->p+1)==61,            _if_conditional509) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value517=eq_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value517);
                if(right_value517 && right_value517 != __result_obj__ && !__freed_obj__) { right_value517 = come_decrement_ref_count(right_value517, ((struct sNode*)right_value517)->finalize, ((struct sNode*)right_value517)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value517;
                __freed_obj__ = 0;
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2466, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sEqNode*)(right_value519=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value518=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2466, "struct sEqNode")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_287),(_Bool)0,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sEqNode_finalize;
                _inf_value26->clone=(void*)sEqNode_clone;
                _inf_value26->compile=(void*)sEqNode_compile;
                _inf_value26->sline=(void*)sEqNode_sline;
                _inf_value26->sname=(void*)sEqNode_sname;
                _inf_value26->terminated=(void*)sEqNode_terminated;
                _inf_value26->kind=(void*)sEqNode_kind;
                __result312__ = __result_obj__ = ((struct sNode*)(right_value524=_inf_value26));
                if(right_287 && !__freed_obj__) { right_287 = come_decrement_ref_count(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0); } 
                if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value518);
                if(right_value518 && right_value518 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value518, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value518;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value519);
                if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value519;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value524);
                if(right_value524 && right_value524 != __result_obj__ && !__freed_obj__) { right_value524 = come_decrement_ref_count(right_value524, ((struct sNode*)right_value524)->finalize, ((struct sNode*)right_value524)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value524;
                __freed_obj__ = 0;
                return __result312__;
                if(right_287 && !__freed_obj__) { right_287 = come_decrement_ref_count(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional519=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional519) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value525=eq_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value525);
                    if(right_value525 && right_value525 != __result_obj__ && !__freed_obj__) { right_value525 = come_decrement_ref_count(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value525;
                    __freed_obj__ = 0;
                    _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2474, "struct sNode");
                    _inf_obj_value27=come_increment_ref_count(((struct sNotEq2Node*)(right_value527=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value526=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2474, "struct sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_289),(_Bool)0,info))));
                    _inf_value27->_protocol_obj=_inf_obj_value27;
                    _inf_value27->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value27->clone=(void*)sNotEq2Node_clone;
                    _inf_value27->compile=(void*)sNotEq2Node_compile;
                    _inf_value27->sline=(void*)sNotEq2Node_sline;
                    _inf_value27->sname=(void*)sNotEq2Node_sname;
                    _inf_value27->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value27->kind=(void*)sNotEq2Node_kind;
                    __result315__ = __result_obj__ = ((struct sNode*)(right_value532=_inf_value27));
                    if(right_289 && !__freed_obj__) { right_289 = come_decrement_ref_count(right_289, ((struct sNode*)right_289)->finalize, ((struct sNode*)right_289)->_protocol_obj, 0, 0, 0); } 
                    if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value526);
                    if(right_value526 && right_value526 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value526, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value526;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value527);
                    if(right_value527 && right_value527 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[2] = right_value527;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value532);
                    if(right_value532 && right_value532 != __result_obj__ && !__freed_obj__) { right_value532 = come_decrement_ref_count(right_value532, ((struct sNode*)right_value532)->finalize, ((struct sNode*)right_value532)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[3] = right_value532;
                    __freed_obj__ = 0;
                    return __result315__;
                    if(right_289 && !__freed_obj__) { right_289 = come_decrement_ref_count(right_289, ((struct sNode*)right_289)->finalize, ((struct sNode*)right_289)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional529=*info->p==33&&*(info->p+1)==61,                    _if_conditional529) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value533=eq_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value533);
                        if(right_value533 && right_value533 != __result_obj__ && !__freed_obj__) { right_value533 = come_decrement_ref_count(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value533;
                        __freed_obj__ = 0;
                        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2482, "struct sNode");
                        _inf_obj_value28=come_increment_ref_count(((struct sNotEqNode*)(right_value535=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value534=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2482, "struct sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_291),(_Bool)0,info))));
                        _inf_value28->_protocol_obj=_inf_obj_value28;
                        _inf_value28->finalize=(void*)sNotEqNode_finalize;
                        _inf_value28->clone=(void*)sNotEqNode_clone;
                        _inf_value28->compile=(void*)sNotEqNode_compile;
                        _inf_value28->sline=(void*)sNotEqNode_sline;
                        _inf_value28->sname=(void*)sNotEqNode_sname;
                        _inf_value28->terminated=(void*)sNotEqNode_terminated;
                        _inf_value28->kind=(void*)sNotEqNode_kind;
                        __result318__ = __result_obj__ = ((struct sNode*)(right_value540=_inf_value28));
                        if(right_291 && !__freed_obj__) { right_291 = come_decrement_ref_count(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0, 0, 0); } 
                        if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value534);
                        if(right_value534 && right_value534 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value534, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value534;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value535);
                        if(right_value535 && right_value535 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[2] = right_value535;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value540);
                        if(right_value540 && right_value540 != __result_obj__ && !__freed_obj__) { right_value540 = come_decrement_ref_count(right_value540, ((struct sNode*)right_value540)->finalize, ((struct sNode*)right_value540)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[3] = right_value540;
                        __freed_obj__ = 0;
                        return __result318__;
                        if(right_291 && !__freed_obj__) { right_291 = come_decrement_ref_count(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional539=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional539) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value541=eq_exp(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value541);
                            if(right_value541 && right_value541 != __result_obj__ && !__freed_obj__) { right_value541 = come_decrement_ref_count(right_value541, ((struct sNode*)right_value541)->finalize, ((struct sNode*)right_value541)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value541;
                            __freed_obj__ = 0;
                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2490, "struct sNode");
                            _inf_obj_value29=come_increment_ref_count(((struct sEq2Node*)(right_value543=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value542=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2490, "struct sEq2Node")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_293),(_Bool)1,info))));
                            _inf_value29->_protocol_obj=_inf_obj_value29;
                            _inf_value29->finalize=(void*)sEq2Node_finalize;
                            _inf_value29->clone=(void*)sEq2Node_clone;
                            _inf_value29->compile=(void*)sEq2Node_compile;
                            _inf_value29->sline=(void*)sEq2Node_sline;
                            _inf_value29->sname=(void*)sEq2Node_sname;
                            _inf_value29->terminated=(void*)sEq2Node_terminated;
                            _inf_value29->kind=(void*)sEq2Node_kind;
                            __result321__ = __result_obj__ = ((struct sNode*)(right_value548=_inf_value29));
                            if(right_293 && !__freed_obj__) { right_293 = come_decrement_ref_count(right_293, ((struct sNode*)right_293)->finalize, ((struct sNode*)right_293)->_protocol_obj, 0, 0, 0); } 
                            if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value542);
                            if(right_value542 && right_value542 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value542, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value542;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value543);
                            if(right_value543 && right_value543 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[2] = right_value543;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value548);
                            if(right_value548 && right_value548 != __result_obj__ && !__freed_obj__) { right_value548 = come_decrement_ref_count(right_value548, ((struct sNode*)right_value548)->finalize, ((struct sNode*)right_value548)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[3] = right_value548;
                            __freed_obj__ = 0;
                            return __result321__;
                            if(right_293 && !__freed_obj__) { right_293 = come_decrement_ref_count(right_293, ((struct sNode*)right_293)->finalize, ((struct sNode*)right_293)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional549=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional549) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value549=eq_exp(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value549);
                                if(right_value549 && right_value549 != __result_obj__ && !__freed_obj__) { right_value549 = come_decrement_ref_count(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value549;
                                __freed_obj__ = 0;
                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2498, "struct sNode");
                                _inf_obj_value30=come_increment_ref_count(((struct sEqNode*)(right_value551=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value550=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2498, "struct sEqNode")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_295),(_Bool)1,info))));
                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                _inf_value30->finalize=(void*)sEqNode_finalize;
                                _inf_value30->clone=(void*)sEqNode_clone;
                                _inf_value30->compile=(void*)sEqNode_compile;
                                _inf_value30->sline=(void*)sEqNode_sline;
                                _inf_value30->sname=(void*)sEqNode_sname;
                                _inf_value30->terminated=(void*)sEqNode_terminated;
                                _inf_value30->kind=(void*)sEqNode_kind;
                                __result324__ = __result_obj__ = ((struct sNode*)(right_value556=_inf_value30));
                                if(right_295 && !__freed_obj__) { right_295 = come_decrement_ref_count(right_295, ((struct sNode*)right_295)->finalize, ((struct sNode*)right_295)->_protocol_obj, 0, 0, 0); } 
                                if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value550);
                                if(right_value550 && right_value550 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value550, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value550;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value551);
                                if(right_value551 && right_value551 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[2] = right_value551;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value556);
                                if(right_value556 && right_value556 != __result_obj__ && !__freed_obj__) { right_value556 = come_decrement_ref_count(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[3] = right_value556;
                                __freed_obj__ = 0;
                                return __result324__;
                                if(right_295 && !__freed_obj__) { right_295 = come_decrement_ref_count(right_295, ((struct sNode*)right_295)->finalize, ((struct sNode*)right_295)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional559=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional559) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value557=eq_exp(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value557);
                                    if(right_value557 && right_value557 != __result_obj__ && !__freed_obj__) { right_value557 = come_decrement_ref_count(right_value557, ((struct sNode*)right_value557)->finalize, ((struct sNode*)right_value557)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value557;
                                    __freed_obj__ = 0;
                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2506, "struct sNode");
                                    _inf_obj_value31=come_increment_ref_count(((struct sNotEq2Node*)(right_value559=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value558=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2506, "struct sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_297),(_Bool)1,info))));
                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                    _inf_value31->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value31->clone=(void*)sNotEq2Node_clone;
                                    _inf_value31->compile=(void*)sNotEq2Node_compile;
                                    _inf_value31->sline=(void*)sNotEq2Node_sline;
                                    _inf_value31->sname=(void*)sNotEq2Node_sname;
                                    _inf_value31->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value31->kind=(void*)sNotEq2Node_kind;
                                    __result327__ = __result_obj__ = ((struct sNode*)(right_value564=_inf_value31));
                                    if(right_297 && !__freed_obj__) { right_297 = come_decrement_ref_count(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0); } 
                                    if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value558);
                                    if(right_value558 && right_value558 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value558, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value558;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value559);
                                    if(right_value559 && right_value559 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[2] = right_value559;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value564);
                                    if(right_value564 && right_value564 != __result_obj__ && !__freed_obj__) { right_value564 = come_decrement_ref_count(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[3] = right_value564;
                                    __freed_obj__ = 0;
                                    return __result327__;
                                    if(right_297 && !__freed_obj__) { right_297 = come_decrement_ref_count(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional569=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional569) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value565=eq_exp(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value565);
                                        if(right_value565 && right_value565 != __result_obj__ && !__freed_obj__) { right_value565 = come_decrement_ref_count(right_value565, ((struct sNode*)right_value565)->finalize, ((struct sNode*)right_value565)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value565;
                                        __freed_obj__ = 0;
                                        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2514, "struct sNode");
                                        _inf_obj_value32=come_increment_ref_count(((struct sNotEqNode*)(right_value567=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value566=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2514, "struct sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_299),(_Bool)1,info))));
                                        _inf_value32->_protocol_obj=_inf_obj_value32;
                                        _inf_value32->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value32->clone=(void*)sNotEqNode_clone;
                                        _inf_value32->compile=(void*)sNotEqNode_compile;
                                        _inf_value32->sline=(void*)sNotEqNode_sline;
                                        _inf_value32->sname=(void*)sNotEqNode_sname;
                                        _inf_value32->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value32->kind=(void*)sNotEqNode_kind;
                                        __result330__ = __result_obj__ = ((struct sNode*)(right_value572=_inf_value32));
                                        if(right_299 && !__freed_obj__) { right_299 = come_decrement_ref_count(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0); } 
                                        if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value566);
                                        if(right_value566 && right_value566 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value566, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value566;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value567);
                                        if(right_value567 && right_value567 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[2] = right_value567;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value572);
                                        if(right_value572 && right_value572 != __result_obj__ && !__freed_obj__) { right_value572 = come_decrement_ref_count(right_value572, ((struct sNode*)right_value572)->finalize, ((struct sNode*)right_value572)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[3] = right_value572;
                                        __freed_obj__ = 0;
                                        return __result330__;
                                        if(right_299 && !__freed_obj__) { right_299 = come_decrement_ref_count(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0); } 
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
    __result331__ = __result_obj__ = node_284;
    if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 1, 0); } 
    return __result331__;
    if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional540;
_Bool _if_conditional541;
_Bool _if_conditional542;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional540=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional540) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional541=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional541) {
                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional542=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional542) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional543;
struct sEq2Node* __result319__;
void* right_value544;
struct sEq2Node* result_294;
_Bool _if_conditional544;
void* right_value545;
struct sNode* __dec_obj240;
_Bool _if_conditional545;
void* right_value546;
struct sNode* __dec_obj241;
_Bool _if_conditional546;
_Bool _if_conditional547;
_Bool _if_conditional548;
void* right_value547;
char* __dec_obj242;
struct sEq2Node* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value544, 0, sizeof(void*));
memset(&result_294, 0, sizeof(struct sEq2Node*));
memset(&right_value545, 0, sizeof(void*));
memset(&right_value546, 0, sizeof(void*));
memset(&right_value547, 0, sizeof(void*));
                                if(_if_conditional543=self==(void*)0,                                _if_conditional543) {
                                    __result319__ = __result_obj__ = (void*)0;
                                    return __result319__;
                                }
                                result_294=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value544=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value544);
                                if(right_value544 && right_value544 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value544;
                                __freed_obj__ = 0;
                                if(_if_conditional544=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional544) {
                                    __dec_obj240=result_294->mLeft;
                                    result_294->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value545=sNode_clone(self->mLeft))));
                                    if(__dec_obj240) { __dec_obj240 = come_decrement_ref_count(__dec_obj240, ((struct sNode*)__dec_obj240)->finalize, ((struct sNode*)__dec_obj240)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value545);
                                    if(right_value545 && right_value545 != __result_obj__ && !__freed_obj__) { right_value545 = come_decrement_ref_count(right_value545, ((struct sNode*)right_value545)->finalize, ((struct sNode*)right_value545)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value545;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional545=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional545) {
                                    __dec_obj241=result_294->mRight;
                                    result_294->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value546=sNode_clone(self->mRight))));
                                    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value546);
                                    if(right_value546 && right_value546 != __result_obj__ && !__freed_obj__) { right_value546 = come_decrement_ref_count(right_value546, ((struct sNode*)right_value546)->finalize, ((struct sNode*)right_value546)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value546;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional546=self!=((void*)0),                                _if_conditional546) {
                                    result_294->mQuote=self->mQuote;
                                }
                                if(_if_conditional547=self!=((void*)0),                                _if_conditional547) {
                                    result_294->sline=self->sline;
                                }
                                if(_if_conditional548=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional548) {
                                    __dec_obj242=result_294->sname;
                                    result_294->sname=(char*)come_increment_ref_count(((char*)(right_value547=string_clone(self->sname))));
                                    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count(__dec_obj242, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value547);
                                    if(right_value547 && right_value547 != __result_obj__ && !__freed_obj__) { right_value547 = come_decrement_ref_count(right_value547, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value547;
                                    __freed_obj__ = 0;
                                }
                                __result320__ = __result_obj__ = result_294;
                                if(result_294 && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,result_294, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result320__;
                                if(result_294 && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,result_294, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional550;
_Bool _if_conditional551;
_Bool _if_conditional552;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional550=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional550) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional551=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional551) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional552=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional552) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional553;
struct sEqNode* __result322__;
void* right_value552;
struct sEqNode* result_296;
_Bool _if_conditional554;
void* right_value553;
struct sNode* __dec_obj243;
_Bool _if_conditional555;
void* right_value554;
struct sNode* __dec_obj244;
_Bool _if_conditional556;
_Bool _if_conditional557;
_Bool _if_conditional558;
void* right_value555;
char* __dec_obj245;
struct sEqNode* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value552, 0, sizeof(void*));
memset(&result_296, 0, sizeof(struct sEqNode*));
memset(&right_value553, 0, sizeof(void*));
memset(&right_value554, 0, sizeof(void*));
memset(&right_value555, 0, sizeof(void*));
                                    if(_if_conditional553=self==(void*)0,                                    _if_conditional553) {
                                        __result322__ = __result_obj__ = (void*)0;
                                        return __result322__;
                                    }
                                    result_296=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value552=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value552);
                                    if(right_value552 && right_value552 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value552;
                                    __freed_obj__ = 0;
                                    if(_if_conditional554=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional554) {
                                        __dec_obj243=result_296->mLeft;
                                        result_296->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value553=sNode_clone(self->mLeft))));
                                        if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count(__dec_obj243, ((struct sNode*)__dec_obj243)->finalize, ((struct sNode*)__dec_obj243)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value553);
                                        if(right_value553 && right_value553 != __result_obj__ && !__freed_obj__) { right_value553 = come_decrement_ref_count(right_value553, ((struct sNode*)right_value553)->finalize, ((struct sNode*)right_value553)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value553;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional555=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional555) {
                                        __dec_obj244=result_296->mRight;
                                        result_296->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value554=sNode_clone(self->mRight))));
                                        if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value554);
                                        if(right_value554 && right_value554 != __result_obj__ && !__freed_obj__) { right_value554 = come_decrement_ref_count(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value554;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional556=self!=((void*)0),                                    _if_conditional556) {
                                        result_296->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional557=self!=((void*)0),                                    _if_conditional557) {
                                        result_296->sline=self->sline;
                                    }
                                    if(_if_conditional558=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional558) {
                                        __dec_obj245=result_296->sname;
                                        result_296->sname=(char*)come_increment_ref_count(((char*)(right_value555=string_clone(self->sname))));
                                        if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count(__dec_obj245, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value555);
                                        if(right_value555 && right_value555 != __result_obj__ && !__freed_obj__) { right_value555 = come_decrement_ref_count(right_value555, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value555;
                                        __freed_obj__ = 0;
                                    }
                                    __result323__ = __result_obj__ = result_296;
                                    if(result_296 && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,result_296, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result323__;
                                    if(result_296 && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,result_296, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional560;
_Bool _if_conditional561;
_Bool _if_conditional562;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional560=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional560) {
                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional561=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional561) {
                                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional562=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional562) {
                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional563;
struct sNotEq2Node* __result325__;
void* right_value560;
struct sNotEq2Node* result_298;
_Bool _if_conditional564;
void* right_value561;
struct sNode* __dec_obj246;
_Bool _if_conditional565;
void* right_value562;
struct sNode* __dec_obj247;
_Bool _if_conditional566;
_Bool _if_conditional567;
_Bool _if_conditional568;
void* right_value563;
char* __dec_obj248;
struct sNotEq2Node* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value560, 0, sizeof(void*));
memset(&result_298, 0, sizeof(struct sNotEq2Node*));
memset(&right_value561, 0, sizeof(void*));
memset(&right_value562, 0, sizeof(void*));
memset(&right_value563, 0, sizeof(void*));
                                        if(_if_conditional563=self==(void*)0,                                        _if_conditional563) {
                                            __result325__ = __result_obj__ = (void*)0;
                                            return __result325__;
                                        }
                                        result_298=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value560=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value560);
                                        if(right_value560 && right_value560 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value560;
                                        __freed_obj__ = 0;
                                        if(_if_conditional564=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional564) {
                                            __dec_obj246=result_298->mLeft;
                                            result_298->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value561=sNode_clone(self->mLeft))));
                                            if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count(__dec_obj246, ((struct sNode*)__dec_obj246)->finalize, ((struct sNode*)__dec_obj246)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value561);
                                            if(right_value561 && right_value561 != __result_obj__ && !__freed_obj__) { right_value561 = come_decrement_ref_count(right_value561, ((struct sNode*)right_value561)->finalize, ((struct sNode*)right_value561)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value561;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional565=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional565) {
                                            __dec_obj247=result_298->mRight;
                                            result_298->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value562=sNode_clone(self->mRight))));
                                            if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value562);
                                            if(right_value562 && right_value562 != __result_obj__ && !__freed_obj__) { right_value562 = come_decrement_ref_count(right_value562, ((struct sNode*)right_value562)->finalize, ((struct sNode*)right_value562)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value562;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional566=self!=((void*)0),                                        _if_conditional566) {
                                            result_298->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional567=self!=((void*)0),                                        _if_conditional567) {
                                            result_298->sline=self->sline;
                                        }
                                        if(_if_conditional568=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional568) {
                                            __dec_obj248=result_298->sname;
                                            result_298->sname=(char*)come_increment_ref_count(((char*)(right_value563=string_clone(self->sname))));
                                            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count(__dec_obj248, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value563);
                                            if(right_value563 && right_value563 != __result_obj__ && !__freed_obj__) { right_value563 = come_decrement_ref_count(right_value563, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value563;
                                            __freed_obj__ = 0;
                                        }
                                        __result326__ = __result_obj__ = result_298;
                                        if(result_298 && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,result_298, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result326__;
                                        if(result_298 && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,result_298, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional570;
_Bool _if_conditional571;
_Bool _if_conditional572;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional570=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional570) {
                                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional571=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional571) {
                                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional572=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional572) {
                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional573;
struct sNotEqNode* __result328__;
void* right_value568;
struct sNotEqNode* result_300;
_Bool _if_conditional574;
void* right_value569;
struct sNode* __dec_obj249;
_Bool _if_conditional575;
void* right_value570;
struct sNode* __dec_obj250;
_Bool _if_conditional576;
_Bool _if_conditional577;
_Bool _if_conditional578;
void* right_value571;
char* __dec_obj251;
struct sNotEqNode* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value568, 0, sizeof(void*));
memset(&result_300, 0, sizeof(struct sNotEqNode*));
memset(&right_value569, 0, sizeof(void*));
memset(&right_value570, 0, sizeof(void*));
memset(&right_value571, 0, sizeof(void*));
                                            if(_if_conditional573=self==(void*)0,                                            _if_conditional573) {
                                                __result328__ = __result_obj__ = (void*)0;
                                                return __result328__;
                                            }
                                            result_300=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value568=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode"))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value568);
                                            if(right_value568 && right_value568 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value568;
                                            __freed_obj__ = 0;
                                            if(_if_conditional574=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional574) {
                                                __dec_obj249=result_300->mLeft;
                                                result_300->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value569=sNode_clone(self->mLeft))));
                                                if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count(__dec_obj249, ((struct sNode*)__dec_obj249)->finalize, ((struct sNode*)__dec_obj249)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value569);
                                                if(right_value569 && right_value569 != __result_obj__ && !__freed_obj__) { right_value569 = come_decrement_ref_count(right_value569, ((struct sNode*)right_value569)->finalize, ((struct sNode*)right_value569)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value569;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional575=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional575) {
                                                __dec_obj250=result_300->mRight;
                                                result_300->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value570=sNode_clone(self->mRight))));
                                                if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value570);
                                                if(right_value570 && right_value570 != __result_obj__ && !__freed_obj__) { right_value570 = come_decrement_ref_count(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value570;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional576=self!=((void*)0),                                            _if_conditional576) {
                                                result_300->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional577=self!=((void*)0),                                            _if_conditional577) {
                                                result_300->sline=self->sline;
                                            }
                                            if(_if_conditional578=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional578) {
                                                __dec_obj251=result_300->sname;
                                                result_300->sname=(char*)come_increment_ref_count(((char*)(right_value571=string_clone(self->sname))));
                                                if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count(__dec_obj251, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value571);
                                                if(right_value571 && right_value571 != __result_obj__ && !__freed_obj__) { right_value571 = come_decrement_ref_count(right_value571, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value571;
                                                __freed_obj__ = 0;
                                            }
                                            __result329__ = __result_obj__ = result_300;
                                            if(result_300 && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,result_300, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result329__;
                                            if(result_300 && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,result_300, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value573;
struct sNode* node_301;
_Bool _while_condtional15;
_Bool _if_conditional579;
void* right_value574;
struct sNode* right_302;
void* right_value575;
void* right_value576;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value581;
struct sNode* __result334__;
_Bool _if_conditional589;
void* right_value582;
struct sNode* right_304;
void* right_value583;
void* right_value584;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* right_value589;
struct sNode* __result337__;
struct sNode* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value573, 0, sizeof(void*));
memset(&node_301, 0, sizeof(struct sNode*));
memset(&right_value574, 0, sizeof(void*));
memset(&right_302, 0, sizeof(struct sNode*));
memset(&right_value575, 0, sizeof(void*));
memset(&right_value576, 0, sizeof(void*));
memset(&right_value581, 0, sizeof(void*));
memset(&right_value582, 0, sizeof(void*));
memset(&right_304, 0, sizeof(struct sNode*));
memset(&right_value583, 0, sizeof(void*));
memset(&right_value584, 0, sizeof(void*));
memset(&right_value589, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value573=eq_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value573);
    if(right_value573 && right_value573 != __result_obj__ && !__freed_obj__) { right_value573 = come_decrement_ref_count(right_value573, ((struct sNode*)right_value573)->finalize, ((struct sNode*)right_value573)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value573;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional15=*info->p,    _while_condtional15) {
        if(_if_conditional579=*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional579) {
            info->p++;
            skip_spaces_and_lf(info);
            right_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value574=and_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value574);
            if(right_value574 && right_value574 != __result_obj__ && !__freed_obj__) { right_value574 = come_decrement_ref_count(right_value574, ((struct sNode*)right_value574)->finalize, ((struct sNode*)right_value574)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value574;
            __freed_obj__ = 0;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2541, "struct sNode");
            _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value576=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value575=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2541, "struct sAndNode")))),(struct sNode*)come_increment_ref_count(node_301),(struct sNode*)come_increment_ref_count(right_302),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sAndNode_sline;
            _inf_value33->sname=(void*)sAndNode_sname;
            _inf_value33->terminated=(void*)sAndNode_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result334__ = __result_obj__ = ((struct sNode*)(right_value581=_inf_value33));
            if(right_302 && !__freed_obj__) { right_302 = come_decrement_ref_count(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0); } 
            if(node_301 && !__freed_obj__) { node_301 = come_decrement_ref_count(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value575);
            if(right_value575 && right_value575 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value575;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value576);
            if(right_value576 && right_value576 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value576;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value581);
            if(right_value581 && right_value581 != __result_obj__ && !__freed_obj__) { right_value581 = come_decrement_ref_count(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value581;
            __freed_obj__ = 0;
            return __result334__;
            if(right_302 && !__freed_obj__) { right_302 = come_decrement_ref_count(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional589=*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional589) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value582=and_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value582);
                if(right_value582 && right_value582 != __result_obj__ && !__freed_obj__) { right_value582 = come_decrement_ref_count(right_value582, ((struct sNode*)right_value582)->finalize, ((struct sNode*)right_value582)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value582;
                __freed_obj__ = 0;
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2549, "struct sNode");
                _inf_obj_value34=come_increment_ref_count(((struct sAndNode*)(right_value584=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value583=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2549, "struct sAndNode")))),(struct sNode*)come_increment_ref_count(node_301),(struct sNode*)come_increment_ref_count(right_304),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sAndNode_finalize;
                _inf_value34->clone=(void*)sAndNode_clone;
                _inf_value34->compile=(void*)sAndNode_compile;
                _inf_value34->sline=(void*)sAndNode_sline;
                _inf_value34->sname=(void*)sAndNode_sname;
                _inf_value34->terminated=(void*)sAndNode_terminated;
                _inf_value34->kind=(void*)sAndNode_kind;
                __result337__ = __result_obj__ = ((struct sNode*)(right_value589=_inf_value34));
                if(right_304 && !__freed_obj__) { right_304 = come_decrement_ref_count(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0); } 
                if(node_301 && !__freed_obj__) { node_301 = come_decrement_ref_count(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value583);
                if(right_value583 && right_value583 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value583, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value583;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value584);
                if(right_value584 && right_value584 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value584;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value589);
                if(right_value589 && right_value589 != __result_obj__ && !__freed_obj__) { right_value589 = come_decrement_ref_count(right_value589, ((struct sNode*)right_value589)->finalize, ((struct sNode*)right_value589)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value589;
                __freed_obj__ = 0;
                return __result337__;
                if(right_304 && !__freed_obj__) { right_304 = come_decrement_ref_count(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result338__ = __result_obj__ = node_301;
    if(node_301 && !__freed_obj__) { node_301 = come_decrement_ref_count(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 1, 0); } 
    return __result338__;
    if(node_301 && !__freed_obj__) { node_301 = come_decrement_ref_count(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional590;
_Bool _if_conditional591;
_Bool _if_conditional592;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional590=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional590) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional591=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional591) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional592=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional592) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional593;
struct sAndNode* __result335__;
void* right_value585;
struct sAndNode* result_305;
_Bool _if_conditional594;
void* right_value586;
struct sNode* __dec_obj255;
_Bool _if_conditional595;
void* right_value587;
struct sNode* __dec_obj256;
_Bool _if_conditional596;
_Bool _if_conditional597;
_Bool _if_conditional598;
void* right_value588;
char* __dec_obj257;
struct sAndNode* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value585, 0, sizeof(void*));
memset(&result_305, 0, sizeof(struct sAndNode*));
memset(&right_value586, 0, sizeof(void*));
memset(&right_value587, 0, sizeof(void*));
memset(&right_value588, 0, sizeof(void*));
                    if(_if_conditional593=self==(void*)0,                    _if_conditional593) {
                        __result335__ = __result_obj__ = (void*)0;
                        return __result335__;
                    }
                    result_305=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value585=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value585);
                    if(right_value585 && right_value585 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value585;
                    __freed_obj__ = 0;
                    if(_if_conditional594=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional594) {
                        __dec_obj255=result_305->mLeft;
                        result_305->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value586=sNode_clone(self->mLeft))));
                        if(__dec_obj255) { __dec_obj255 = come_decrement_ref_count(__dec_obj255, ((struct sNode*)__dec_obj255)->finalize, ((struct sNode*)__dec_obj255)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value586);
                        if(right_value586 && right_value586 != __result_obj__ && !__freed_obj__) { right_value586 = come_decrement_ref_count(right_value586, ((struct sNode*)right_value586)->finalize, ((struct sNode*)right_value586)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value586;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional595=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional595) {
                        __dec_obj256=result_305->mRight;
                        result_305->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value587=sNode_clone(self->mRight))));
                        if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value587);
                        if(right_value587 && right_value587 != __result_obj__ && !__freed_obj__) { right_value587 = come_decrement_ref_count(right_value587, ((struct sNode*)right_value587)->finalize, ((struct sNode*)right_value587)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value587;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional596=self!=((void*)0),                    _if_conditional596) {
                        result_305->mQuote=self->mQuote;
                    }
                    if(_if_conditional597=self!=((void*)0),                    _if_conditional597) {
                        result_305->sline=self->sline;
                    }
                    if(_if_conditional598=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional598) {
                        __dec_obj257=result_305->sname;
                        result_305->sname=(char*)come_increment_ref_count(((char*)(right_value588=string_clone(self->sname))));
                        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count(__dec_obj257, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value588);
                        if(right_value588 && right_value588 != __result_obj__ && !__freed_obj__) { right_value588 = come_decrement_ref_count(right_value588, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value588;
                        __freed_obj__ = 0;
                    }
                    __result336__ = __result_obj__ = result_305;
                    if(result_305 && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,result_305, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result336__;
                    if(result_305 && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,result_305, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value590;
struct sNode* node_306;
_Bool _while_condtional16;
_Bool _if_conditional599;
void* right_value591;
struct sNode* right_307;
void* right_value592;
void* right_value593;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value598;
struct sNode* __result341__;
_Bool _if_conditional609;
void* right_value599;
struct sNode* right_309;
void* right_value600;
void* right_value601;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* right_value606;
struct sNode* __result344__;
struct sNode* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value590, 0, sizeof(void*));
memset(&node_306, 0, sizeof(struct sNode*));
memset(&right_value591, 0, sizeof(void*));
memset(&right_307, 0, sizeof(struct sNode*));
memset(&right_value592, 0, sizeof(void*));
memset(&right_value593, 0, sizeof(void*));
memset(&right_value598, 0, sizeof(void*));
memset(&right_value599, 0, sizeof(void*));
memset(&right_309, 0, sizeof(struct sNode*));
memset(&right_value600, 0, sizeof(void*));
memset(&right_value601, 0, sizeof(void*));
memset(&right_value606, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value590=and_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value590);
    if(right_value590 && right_value590 != __result_obj__ && !__freed_obj__) { right_value590 = come_decrement_ref_count(right_value590, ((struct sNode*)right_value590)->finalize, ((struct sNode*)right_value590)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value590;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional16=*info->p,    _while_condtional16) {
        if(_if_conditional599=*info->p==94&&*(info->p+1)!=61,        _if_conditional599) {
            info->p++;
            skip_spaces_and_lf(info);
            right_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value591=xor_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value591);
            if(right_value591 && right_value591 != __result_obj__ && !__freed_obj__) { right_value591 = come_decrement_ref_count(right_value591, ((struct sNode*)right_value591)->finalize, ((struct sNode*)right_value591)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value591;
            __freed_obj__ = 0;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2576, "struct sNode");
            _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value593=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value592=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2576, "struct sXOrNode")))),(struct sNode*)come_increment_ref_count(node_306),(struct sNode*)come_increment_ref_count(right_307),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sXOrNode_sline;
            _inf_value35->sname=(void*)sXOrNode_sname;
            _inf_value35->terminated=(void*)sXOrNode_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result341__ = __result_obj__ = ((struct sNode*)(right_value598=_inf_value35));
            if(right_307 && !__freed_obj__) { right_307 = come_decrement_ref_count(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0); } 
            if(node_306 && !__freed_obj__) { node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value592);
            if(right_value592 && right_value592 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value592;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value593);
            if(right_value593 && right_value593 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value593;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value598);
            if(right_value598 && right_value598 != __result_obj__ && !__freed_obj__) { right_value598 = come_decrement_ref_count(right_value598, ((struct sNode*)right_value598)->finalize, ((struct sNode*)right_value598)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value598;
            __freed_obj__ = 0;
            return __result341__;
            if(right_307 && !__freed_obj__) { right_307 = come_decrement_ref_count(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional609=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional609) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value599=xor_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value599);
                if(right_value599 && right_value599 != __result_obj__ && !__freed_obj__) { right_value599 = come_decrement_ref_count(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value599;
                __freed_obj__ = 0;
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2584, "struct sNode");
                _inf_obj_value36=come_increment_ref_count(((struct sXOrNode*)(right_value601=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value600=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2584, "struct sXOrNode")))),(struct sNode*)come_increment_ref_count(node_306),(struct sNode*)come_increment_ref_count(right_309),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sXOrNode_finalize;
                _inf_value36->clone=(void*)sXOrNode_clone;
                _inf_value36->compile=(void*)sXOrNode_compile;
                _inf_value36->sline=(void*)sXOrNode_sline;
                _inf_value36->sname=(void*)sXOrNode_sname;
                _inf_value36->terminated=(void*)sXOrNode_terminated;
                _inf_value36->kind=(void*)sXOrNode_kind;
                __result344__ = __result_obj__ = ((struct sNode*)(right_value606=_inf_value36));
                if(right_309 && !__freed_obj__) { right_309 = come_decrement_ref_count(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0); } 
                if(node_306 && !__freed_obj__) { node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value600);
                if(right_value600 && right_value600 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value600, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value600;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value601);
                if(right_value601 && right_value601 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value601;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value606);
                if(right_value606 && right_value606 != __result_obj__ && !__freed_obj__) { right_value606 = come_decrement_ref_count(right_value606, ((struct sNode*)right_value606)->finalize, ((struct sNode*)right_value606)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value606;
                __freed_obj__ = 0;
                return __result344__;
                if(right_309 && !__freed_obj__) { right_309 = come_decrement_ref_count(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result345__ = __result_obj__ = node_306;
    if(node_306 && !__freed_obj__) { node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 1, 0); } 
    return __result345__;
    if(node_306 && !__freed_obj__) { node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional610;
_Bool _if_conditional611;
_Bool _if_conditional612;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional610=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional610) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional611=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional611) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional612=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional612) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional613;
struct sXOrNode* __result342__;
void* right_value602;
struct sXOrNode* result_310;
_Bool _if_conditional614;
void* right_value603;
struct sNode* __dec_obj261;
_Bool _if_conditional615;
void* right_value604;
struct sNode* __dec_obj262;
_Bool _if_conditional616;
_Bool _if_conditional617;
_Bool _if_conditional618;
void* right_value605;
char* __dec_obj263;
struct sXOrNode* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value602, 0, sizeof(void*));
memset(&result_310, 0, sizeof(struct sXOrNode*));
memset(&right_value603, 0, sizeof(void*));
memset(&right_value604, 0, sizeof(void*));
memset(&right_value605, 0, sizeof(void*));
                    if(_if_conditional613=self==(void*)0,                    _if_conditional613) {
                        __result342__ = __result_obj__ = (void*)0;
                        return __result342__;
                    }
                    result_310=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value602=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value602);
                    if(right_value602 && right_value602 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value602;
                    __freed_obj__ = 0;
                    if(_if_conditional614=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional614) {
                        __dec_obj261=result_310->mLeft;
                        result_310->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value603=sNode_clone(self->mLeft))));
                        if(__dec_obj261) { __dec_obj261 = come_decrement_ref_count(__dec_obj261, ((struct sNode*)__dec_obj261)->finalize, ((struct sNode*)__dec_obj261)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value603);
                        if(right_value603 && right_value603 != __result_obj__ && !__freed_obj__) { right_value603 = come_decrement_ref_count(right_value603, ((struct sNode*)right_value603)->finalize, ((struct sNode*)right_value603)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value603;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional615=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional615) {
                        __dec_obj262=result_310->mRight;
                        result_310->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value604=sNode_clone(self->mRight))));
                        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value604);
                        if(right_value604 && right_value604 != __result_obj__ && !__freed_obj__) { right_value604 = come_decrement_ref_count(right_value604, ((struct sNode*)right_value604)->finalize, ((struct sNode*)right_value604)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value604;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional616=self!=((void*)0),                    _if_conditional616) {
                        result_310->mQuote=self->mQuote;
                    }
                    if(_if_conditional617=self!=((void*)0),                    _if_conditional617) {
                        result_310->sline=self->sline;
                    }
                    if(_if_conditional618=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional618) {
                        __dec_obj263=result_310->sname;
                        result_310->sname=(char*)come_increment_ref_count(((char*)(right_value605=string_clone(self->sname))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count(__dec_obj263, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value605);
                        if(right_value605 && right_value605 != __result_obj__ && !__freed_obj__) { right_value605 = come_decrement_ref_count(right_value605, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value605;
                        __freed_obj__ = 0;
                    }
                    __result343__ = __result_obj__ = result_310;
                    if(result_310 && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,result_310, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result343__;
                    if(result_310 && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,result_310, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value607;
struct sNode* node_311;
_Bool _while_condtional17;
_Bool _if_conditional619;
void* right_value608;
struct sNode* right_312;
void* right_value609;
void* right_value610;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value615;
struct sNode* __result348__;
_Bool _if_conditional629;
void* right_value616;
struct sNode* right_314;
void* right_value617;
void* right_value618;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* right_value623;
struct sNode* __result351__;
struct sNode* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value607, 0, sizeof(void*));
memset(&node_311, 0, sizeof(struct sNode*));
memset(&right_value608, 0, sizeof(void*));
memset(&right_312, 0, sizeof(struct sNode*));
memset(&right_value609, 0, sizeof(void*));
memset(&right_value610, 0, sizeof(void*));
memset(&right_value615, 0, sizeof(void*));
memset(&right_value616, 0, sizeof(void*));
memset(&right_314, 0, sizeof(struct sNode*));
memset(&right_value617, 0, sizeof(void*));
memset(&right_value618, 0, sizeof(void*));
memset(&right_value623, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value607=xor_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value607);
    if(right_value607 && right_value607 != __result_obj__ && !__freed_obj__) { right_value607 = come_decrement_ref_count(right_value607, ((struct sNode*)right_value607)->finalize, ((struct sNode*)right_value607)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value607;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional17=*info->p,    _while_condtional17) {
        if(_if_conditional619=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional619) {
            info->p++;
            skip_spaces_and_lf(info);
            right_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value608=or_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value608);
            if(right_value608 && right_value608 != __result_obj__ && !__freed_obj__) { right_value608 = come_decrement_ref_count(right_value608, ((struct sNode*)right_value608)->finalize, ((struct sNode*)right_value608)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value608;
            __freed_obj__ = 0;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2611, "struct sNode");
            _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value610=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value609=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2611, "struct sOrNode")))),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_312),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sOrNode_sline;
            _inf_value37->sname=(void*)sOrNode_sname;
            _inf_value37->terminated=(void*)sOrNode_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result348__ = __result_obj__ = ((struct sNode*)(right_value615=_inf_value37));
            if(right_312 && !__freed_obj__) { right_312 = come_decrement_ref_count(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0); } 
            if(node_311 && !__freed_obj__) { node_311 = come_decrement_ref_count(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value609);
            if(right_value609 && right_value609 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value609;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value610);
            if(right_value610 && right_value610 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value610;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value615);
            if(right_value615 && right_value615 != __result_obj__ && !__freed_obj__) { right_value615 = come_decrement_ref_count(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value615;
            __freed_obj__ = 0;
            return __result348__;
            if(right_312 && !__freed_obj__) { right_312 = come_decrement_ref_count(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional629=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional629) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value616=or_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value616);
                if(right_value616 && right_value616 != __result_obj__ && !__freed_obj__) { right_value616 = come_decrement_ref_count(right_value616, ((struct sNode*)right_value616)->finalize, ((struct sNode*)right_value616)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value616;
                __freed_obj__ = 0;
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2619, "struct sNode");
                _inf_obj_value38=come_increment_ref_count(((struct sOrNode*)(right_value618=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value617=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2619, "struct sOrNode")))),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_314),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sOrNode_finalize;
                _inf_value38->clone=(void*)sOrNode_clone;
                _inf_value38->compile=(void*)sOrNode_compile;
                _inf_value38->sline=(void*)sOrNode_sline;
                _inf_value38->sname=(void*)sOrNode_sname;
                _inf_value38->terminated=(void*)sOrNode_terminated;
                _inf_value38->kind=(void*)sOrNode_kind;
                __result351__ = __result_obj__ = ((struct sNode*)(right_value623=_inf_value38));
                if(right_314 && !__freed_obj__) { right_314 = come_decrement_ref_count(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0); } 
                if(node_311 && !__freed_obj__) { node_311 = come_decrement_ref_count(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value617);
                if(right_value617 && right_value617 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value617, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value617;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value618);
                if(right_value618 && right_value618 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value618;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value623);
                if(right_value623 && right_value623 != __result_obj__ && !__freed_obj__) { right_value623 = come_decrement_ref_count(right_value623, ((struct sNode*)right_value623)->finalize, ((struct sNode*)right_value623)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value623;
                __freed_obj__ = 0;
                return __result351__;
                if(right_314 && !__freed_obj__) { right_314 = come_decrement_ref_count(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result352__ = __result_obj__ = node_311;
    if(node_311 && !__freed_obj__) { node_311 = come_decrement_ref_count(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 1, 0); } 
    return __result352__;
    if(node_311 && !__freed_obj__) { node_311 = come_decrement_ref_count(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional630;
_Bool _if_conditional631;
_Bool _if_conditional632;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional630=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional630) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional631=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional631) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional632=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional632) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional633;
struct sOrNode* __result349__;
void* right_value619;
struct sOrNode* result_315;
_Bool _if_conditional634;
void* right_value620;
struct sNode* __dec_obj267;
_Bool _if_conditional635;
void* right_value621;
struct sNode* __dec_obj268;
_Bool _if_conditional636;
_Bool _if_conditional637;
_Bool _if_conditional638;
void* right_value622;
char* __dec_obj269;
struct sOrNode* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value619, 0, sizeof(void*));
memset(&result_315, 0, sizeof(struct sOrNode*));
memset(&right_value620, 0, sizeof(void*));
memset(&right_value621, 0, sizeof(void*));
memset(&right_value622, 0, sizeof(void*));
                    if(_if_conditional633=self==(void*)0,                    _if_conditional633) {
                        __result349__ = __result_obj__ = (void*)0;
                        return __result349__;
                    }
                    result_315=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value619=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value619);
                    if(right_value619 && right_value619 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value619, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value619;
                    __freed_obj__ = 0;
                    if(_if_conditional634=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional634) {
                        __dec_obj267=result_315->mLeft;
                        result_315->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value620=sNode_clone(self->mLeft))));
                        if(__dec_obj267) { __dec_obj267 = come_decrement_ref_count(__dec_obj267, ((struct sNode*)__dec_obj267)->finalize, ((struct sNode*)__dec_obj267)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value620);
                        if(right_value620 && right_value620 != __result_obj__ && !__freed_obj__) { right_value620 = come_decrement_ref_count(right_value620, ((struct sNode*)right_value620)->finalize, ((struct sNode*)right_value620)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value620;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional635=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional635) {
                        __dec_obj268=result_315->mRight;
                        result_315->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value621=sNode_clone(self->mRight))));
                        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value621);
                        if(right_value621 && right_value621 != __result_obj__ && !__freed_obj__) { right_value621 = come_decrement_ref_count(right_value621, ((struct sNode*)right_value621)->finalize, ((struct sNode*)right_value621)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value621;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional636=self!=((void*)0),                    _if_conditional636) {
                        result_315->mQuote=self->mQuote;
                    }
                    if(_if_conditional637=self!=((void*)0),                    _if_conditional637) {
                        result_315->sline=self->sline;
                    }
                    if(_if_conditional638=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional638) {
                        __dec_obj269=result_315->sname;
                        result_315->sname=(char*)come_increment_ref_count(((char*)(right_value622=string_clone(self->sname))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count(__dec_obj269, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value622);
                        if(right_value622 && right_value622 != __result_obj__ && !__freed_obj__) { right_value622 = come_decrement_ref_count(right_value622, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value622;
                        __freed_obj__ = 0;
                    }
                    __result350__ = __result_obj__ = result_315;
                    if(result_315 && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result350__;
                    if(result_315 && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,result_315, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value624;
struct sNode* node_316;
_Bool _while_condtional18;
_Bool _if_conditional639;
void* right_value625;
struct sNode* right_317;
void* right_value626;
void* right_value627;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value632;
struct sNode* __result355__;
_Bool _if_conditional649;
void* right_value633;
struct sNode* right_319;
void* right_value634;
void* right_value635;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* right_value640;
struct sNode* __result358__;
struct sNode* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value624, 0, sizeof(void*));
memset(&node_316, 0, sizeof(struct sNode*));
memset(&right_value625, 0, sizeof(void*));
memset(&right_317, 0, sizeof(struct sNode*));
memset(&right_value626, 0, sizeof(void*));
memset(&right_value627, 0, sizeof(void*));
memset(&right_value632, 0, sizeof(void*));
memset(&right_value633, 0, sizeof(void*));
memset(&right_319, 0, sizeof(struct sNode*));
memset(&right_value634, 0, sizeof(void*));
memset(&right_value635, 0, sizeof(void*));
memset(&right_value640, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value624=or_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value624);
    if(right_value624 && right_value624 != __result_obj__ && !__freed_obj__) { right_value624 = come_decrement_ref_count(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value624;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional18=*info->p,    _while_condtional18) {
        if(_if_conditional639=*info->p==38&&*(info->p+1)==38,        _if_conditional639) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value625=andand_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value625);
            if(right_value625 && right_value625 != __result_obj__ && !__freed_obj__) { right_value625 = come_decrement_ref_count(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value625;
            __freed_obj__ = 0;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2646, "struct sNode");
            _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value627=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value626=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2646, "struct sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_316),(struct sNode*)come_increment_ref_count(right_317),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sAndAndNode_sline;
            _inf_value39->sname=(void*)sAndAndNode_sname;
            _inf_value39->terminated=(void*)sAndAndNode_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result355__ = __result_obj__ = ((struct sNode*)(right_value632=_inf_value39));
            if(right_317 && !__freed_obj__) { right_317 = come_decrement_ref_count(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0); } 
            if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value626);
            if(right_value626 && right_value626 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value626;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value627);
            if(right_value627 && right_value627 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value627, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value627;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value632);
            if(right_value632 && right_value632 != __result_obj__ && !__freed_obj__) { right_value632 = come_decrement_ref_count(right_value632, ((struct sNode*)right_value632)->finalize, ((struct sNode*)right_value632)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value632;
            __freed_obj__ = 0;
            return __result355__;
            if(right_317 && !__freed_obj__) { right_317 = come_decrement_ref_count(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional649=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional649) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value633=andand_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value633);
                if(right_value633 && right_value633 != __result_obj__ && !__freed_obj__) { right_value633 = come_decrement_ref_count(right_value633, ((struct sNode*)right_value633)->finalize, ((struct sNode*)right_value633)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value633;
                __freed_obj__ = 0;
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2654, "struct sNode");
                _inf_obj_value40=come_increment_ref_count(((struct sAndAndNode*)(right_value635=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value634=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2654, "struct sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_316),(struct sNode*)come_increment_ref_count(right_319),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sAndAndNode_finalize;
                _inf_value40->clone=(void*)sAndAndNode_clone;
                _inf_value40->compile=(void*)sAndAndNode_compile;
                _inf_value40->sline=(void*)sAndAndNode_sline;
                _inf_value40->sname=(void*)sAndAndNode_sname;
                _inf_value40->terminated=(void*)sAndAndNode_terminated;
                _inf_value40->kind=(void*)sAndAndNode_kind;
                __result358__ = __result_obj__ = ((struct sNode*)(right_value640=_inf_value40));
                if(right_319 && !__freed_obj__) { right_319 = come_decrement_ref_count(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0); } 
                if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value634);
                if(right_value634 && right_value634 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value634, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value634;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value635);
                if(right_value635 && right_value635 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value635;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value640);
                if(right_value640 && right_value640 != __result_obj__ && !__freed_obj__) { right_value640 = come_decrement_ref_count(right_value640, ((struct sNode*)right_value640)->finalize, ((struct sNode*)right_value640)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value640;
                __freed_obj__ = 0;
                return __result358__;
                if(right_319 && !__freed_obj__) { right_319 = come_decrement_ref_count(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result359__ = __result_obj__ = node_316;
    if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 1, 0); } 
    return __result359__;
    if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional650;
_Bool _if_conditional651;
_Bool _if_conditional652;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional650=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional650) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional651=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional651) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional652=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional652) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional653;
struct sAndAndNode* __result356__;
void* right_value636;
struct sAndAndNode* result_320;
_Bool _if_conditional654;
void* right_value637;
struct sNode* __dec_obj273;
_Bool _if_conditional655;
void* right_value638;
struct sNode* __dec_obj274;
_Bool _if_conditional656;
_Bool _if_conditional657;
_Bool _if_conditional658;
void* right_value639;
char* __dec_obj275;
struct sAndAndNode* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value636, 0, sizeof(void*));
memset(&result_320, 0, sizeof(struct sAndAndNode*));
memset(&right_value637, 0, sizeof(void*));
memset(&right_value638, 0, sizeof(void*));
memset(&right_value639, 0, sizeof(void*));
                    if(_if_conditional653=self==(void*)0,                    _if_conditional653) {
                        __result356__ = __result_obj__ = (void*)0;
                        return __result356__;
                    }
                    result_320=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value636=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value636);
                    if(right_value636 && right_value636 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value636;
                    __freed_obj__ = 0;
                    if(_if_conditional654=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional654) {
                        __dec_obj273=result_320->mLeft;
                        result_320->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value637=sNode_clone(self->mLeft))));
                        if(__dec_obj273) { __dec_obj273 = come_decrement_ref_count(__dec_obj273, ((struct sNode*)__dec_obj273)->finalize, ((struct sNode*)__dec_obj273)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value637);
                        if(right_value637 && right_value637 != __result_obj__ && !__freed_obj__) { right_value637 = come_decrement_ref_count(right_value637, ((struct sNode*)right_value637)->finalize, ((struct sNode*)right_value637)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value637;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional655=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional655) {
                        __dec_obj274=result_320->mRight;
                        result_320->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value638=sNode_clone(self->mRight))));
                        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value638);
                        if(right_value638 && right_value638 != __result_obj__ && !__freed_obj__) { right_value638 = come_decrement_ref_count(right_value638, ((struct sNode*)right_value638)->finalize, ((struct sNode*)right_value638)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value638;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional656=self!=((void*)0),                    _if_conditional656) {
                        result_320->mQuote=self->mQuote;
                    }
                    if(_if_conditional657=self!=((void*)0),                    _if_conditional657) {
                        result_320->sline=self->sline;
                    }
                    if(_if_conditional658=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional658) {
                        __dec_obj275=result_320->sname;
                        result_320->sname=(char*)come_increment_ref_count(((char*)(right_value639=string_clone(self->sname))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count(__dec_obj275, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value639);
                        if(right_value639 && right_value639 != __result_obj__ && !__freed_obj__) { right_value639 = come_decrement_ref_count(right_value639, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value639;
                        __freed_obj__ = 0;
                    }
                    __result357__ = __result_obj__ = result_320;
                    if(result_320 && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,result_320, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result357__;
                    if(result_320 && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,result_320, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value641;
struct sNode* node_321;
_Bool _while_condtional19;
_Bool _if_conditional659;
void* right_value642;
struct sNode* right_322;
void* right_value643;
void* right_value644;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value649;
struct sNode* __result362__;
_Bool _if_conditional669;
void* right_value650;
struct sNode* right_324;
void* right_value651;
void* right_value652;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* right_value657;
struct sNode* __result365__;
struct sNode* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value641, 0, sizeof(void*));
memset(&node_321, 0, sizeof(struct sNode*));
memset(&right_value642, 0, sizeof(void*));
memset(&right_322, 0, sizeof(struct sNode*));
memset(&right_value643, 0, sizeof(void*));
memset(&right_value644, 0, sizeof(void*));
memset(&right_value649, 0, sizeof(void*));
memset(&right_value650, 0, sizeof(void*));
memset(&right_324, 0, sizeof(struct sNode*));
memset(&right_value651, 0, sizeof(void*));
memset(&right_value652, 0, sizeof(void*));
memset(&right_value657, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value641=andand_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value641);
    if(right_value641 && right_value641 != __result_obj__ && !__freed_obj__) { right_value641 = come_decrement_ref_count(right_value641, ((struct sNode*)right_value641)->finalize, ((struct sNode*)right_value641)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value641;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional19=*info->p,    _while_condtional19) {
        if(_if_conditional659=*info->p==124&&*(info->p+1)==124,        _if_conditional659) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value642=oror_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value642);
            if(right_value642 && right_value642 != __result_obj__ && !__freed_obj__) { right_value642 = come_decrement_ref_count(right_value642, ((struct sNode*)right_value642)->finalize, ((struct sNode*)right_value642)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value642;
            __freed_obj__ = 0;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2681, "struct sNode");
            _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value644=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value643=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2681, "struct sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_321),(struct sNode*)come_increment_ref_count(right_322),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sOrOrNode_sline;
            _inf_value41->sname=(void*)sOrOrNode_sname;
            _inf_value41->terminated=(void*)sOrOrNode_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result362__ = __result_obj__ = ((struct sNode*)(right_value649=_inf_value41));
            if(right_322 && !__freed_obj__) { right_322 = come_decrement_ref_count(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0); } 
            if(node_321 && !__freed_obj__) { node_321 = come_decrement_ref_count(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value643);
            if(right_value643 && right_value643 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value643;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value644);
            if(right_value644 && right_value644 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value644;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value649);
            if(right_value649 && right_value649 != __result_obj__ && !__freed_obj__) { right_value649 = come_decrement_ref_count(right_value649, ((struct sNode*)right_value649)->finalize, ((struct sNode*)right_value649)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value649;
            __freed_obj__ = 0;
            return __result362__;
            if(right_322 && !__freed_obj__) { right_322 = come_decrement_ref_count(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional669=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional669) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value650=oror_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value650);
                if(right_value650 && right_value650 != __result_obj__ && !__freed_obj__) { right_value650 = come_decrement_ref_count(right_value650, ((struct sNode*)right_value650)->finalize, ((struct sNode*)right_value650)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value650;
                __freed_obj__ = 0;
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2689, "struct sNode");
                _inf_obj_value42=come_increment_ref_count(((struct sOrOrNode*)(right_value652=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value651=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2689, "struct sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_321),(struct sNode*)come_increment_ref_count(right_324),(_Bool)1,info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sOrOrNode_finalize;
                _inf_value42->clone=(void*)sOrOrNode_clone;
                _inf_value42->compile=(void*)sOrOrNode_compile;
                _inf_value42->sline=(void*)sOrOrNode_sline;
                _inf_value42->sname=(void*)sOrOrNode_sname;
                _inf_value42->terminated=(void*)sOrOrNode_terminated;
                _inf_value42->kind=(void*)sOrOrNode_kind;
                __result365__ = __result_obj__ = ((struct sNode*)(right_value657=_inf_value42));
                if(right_324 && !__freed_obj__) { right_324 = come_decrement_ref_count(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0); } 
                if(node_321 && !__freed_obj__) { node_321 = come_decrement_ref_count(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value651);
                if(right_value651 && right_value651 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value651, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value651;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value652);
                if(right_value652 && right_value652 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value652, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[2] = right_value652;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value657);
                if(right_value657 && right_value657 != __result_obj__ && !__freed_obj__) { right_value657 = come_decrement_ref_count(right_value657, ((struct sNode*)right_value657)->finalize, ((struct sNode*)right_value657)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[3] = right_value657;
                __freed_obj__ = 0;
                return __result365__;
                if(right_324 && !__freed_obj__) { right_324 = come_decrement_ref_count(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result366__ = __result_obj__ = node_321;
    if(node_321 && !__freed_obj__) { node_321 = come_decrement_ref_count(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 1, 0); } 
    return __result366__;
    if(node_321 && !__freed_obj__) { node_321 = come_decrement_ref_count(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional670;
_Bool _if_conditional671;
_Bool _if_conditional672;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional670=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional670) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional671=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional671) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional672=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional672) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional673;
struct sOrOrNode* __result363__;
void* right_value653;
struct sOrOrNode* result_325;
_Bool _if_conditional674;
void* right_value654;
struct sNode* __dec_obj279;
_Bool _if_conditional675;
void* right_value655;
struct sNode* __dec_obj280;
_Bool _if_conditional676;
_Bool _if_conditional677;
_Bool _if_conditional678;
void* right_value656;
char* __dec_obj281;
struct sOrOrNode* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value653, 0, sizeof(void*));
memset(&result_325, 0, sizeof(struct sOrOrNode*));
memset(&right_value654, 0, sizeof(void*));
memset(&right_value655, 0, sizeof(void*));
memset(&right_value656, 0, sizeof(void*));
                    if(_if_conditional673=self==(void*)0,                    _if_conditional673) {
                        __result363__ = __result_obj__ = (void*)0;
                        return __result363__;
                    }
                    result_325=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value653=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value653);
                    if(right_value653 && right_value653 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value653;
                    __freed_obj__ = 0;
                    if(_if_conditional674=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional674) {
                        __dec_obj279=result_325->mLeft;
                        result_325->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value654=sNode_clone(self->mLeft))));
                        if(__dec_obj279) { __dec_obj279 = come_decrement_ref_count(__dec_obj279, ((struct sNode*)__dec_obj279)->finalize, ((struct sNode*)__dec_obj279)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value654);
                        if(right_value654 && right_value654 != __result_obj__ && !__freed_obj__) { right_value654 = come_decrement_ref_count(right_value654, ((struct sNode*)right_value654)->finalize, ((struct sNode*)right_value654)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value654;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional675=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional675) {
                        __dec_obj280=result_325->mRight;
                        result_325->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value655=sNode_clone(self->mRight))));
                        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value655);
                        if(right_value655 && right_value655 != __result_obj__ && !__freed_obj__) { right_value655 = come_decrement_ref_count(right_value655, ((struct sNode*)right_value655)->finalize, ((struct sNode*)right_value655)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value655;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional676=self!=((void*)0),                    _if_conditional676) {
                        result_325->mQuote=self->mQuote;
                    }
                    if(_if_conditional677=self!=((void*)0),                    _if_conditional677) {
                        result_325->sline=self->sline;
                    }
                    if(_if_conditional678=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional678) {
                        __dec_obj281=result_325->sname;
                        result_325->sname=(char*)come_increment_ref_count(((char*)(right_value656=string_clone(self->sname))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count(__dec_obj281, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value656);
                        if(right_value656 && right_value656 != __result_obj__ && !__freed_obj__) { right_value656 = come_decrement_ref_count(right_value656, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value656;
                        __freed_obj__ = 0;
                    }
                    __result364__ = __result_obj__ = result_325;
                    if(result_325 && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,result_325, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result364__;
                    if(result_325 && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,result_325, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value658;
struct sNode* node_326;
_Bool _while_condtional20;
_Bool _if_conditional679;
void* right_value659;
struct sNode* node2_327;
void* right_value660;
void* right_value661;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* right_value666;
struct sNode* __result369__;
struct sNode* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value658, 0, sizeof(void*));
memset(&node_326, 0, sizeof(struct sNode*));
memset(&right_value659, 0, sizeof(void*));
memset(&node2_327, 0, sizeof(struct sNode*));
memset(&right_value660, 0, sizeof(void*));
memset(&right_value661, 0, sizeof(void*));
memset(&right_value666, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value658=oror_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value658);
    if(right_value658 && right_value658 != __result_obj__ && !__freed_obj__) { right_value658 = come_decrement_ref_count(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value658;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional20=*info->p,    _while_condtional20) {
        if(_if_conditional679=!info->no_comma&&*info->p==44,        _if_conditional679) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value659=oror_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value659);
            if(right_value659 && right_value659 != __result_obj__ && !__freed_obj__) { right_value659 = come_decrement_ref_count(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value659;
            __freed_obj__ = 0;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2716, "struct sNode");
            _inf_obj_value43=come_increment_ref_count(((struct sCommaNode*)(right_value661=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value660=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2716, "struct sCommaNode")))),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(node2_327),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sCommaNode_sline;
            _inf_value43->sname=(void*)sCommaNode_sname;
            _inf_value43->terminated=(void*)sCommaNode_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result369__ = __result_obj__ = ((struct sNode*)(right_value666=_inf_value43));
            if(node2_327 && !__freed_obj__) { node2_327 = come_decrement_ref_count(node2_327, ((struct sNode*)node2_327)->finalize, ((struct sNode*)node2_327)->_protocol_obj, 0, 0, 0); } 
            if(node_326 && !__freed_obj__) { node_326 = come_decrement_ref_count(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value660);
            if(right_value660 && right_value660 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value660;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value661);
            if(right_value661 && right_value661 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value661, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value661;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value666);
            if(right_value666 && right_value666 != __result_obj__ && !__freed_obj__) { right_value666 = come_decrement_ref_count(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value666;
            __freed_obj__ = 0;
            return __result369__;
            if(node2_327 && !__freed_obj__) { node2_327 = come_decrement_ref_count(node2_327, ((struct sNode*)node2_327)->finalize, ((struct sNode*)node2_327)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result370__ = __result_obj__ = node_326;
    if(node_326 && !__freed_obj__) { node_326 = come_decrement_ref_count(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 1, 0); } 
    return __result370__;
    if(node_326 && !__freed_obj__) { node_326 = come_decrement_ref_count(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional680;
_Bool _if_conditional681;
_Bool _if_conditional682;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional680=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional680) {
                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional681=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional681) {
                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional682=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional682) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional683;
struct sCommaNode* __result367__;
void* right_value662;
struct sCommaNode* result_328;
_Bool _if_conditional684;
void* right_value663;
struct sNode* __dec_obj282;
_Bool _if_conditional685;
void* right_value664;
struct sNode* __dec_obj283;
_Bool _if_conditional686;
_Bool _if_conditional687;
void* right_value665;
char* __dec_obj284;
struct sCommaNode* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value662, 0, sizeof(void*));
memset(&result_328, 0, sizeof(struct sCommaNode*));
memset(&right_value663, 0, sizeof(void*));
memset(&right_value664, 0, sizeof(void*));
memset(&right_value665, 0, sizeof(void*));
                if(_if_conditional683=self==(void*)0,                _if_conditional683) {
                    __result367__ = __result_obj__ = (void*)0;
                    return __result367__;
                }
                result_328=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value662=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value662);
                if(right_value662 && right_value662 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value662;
                __freed_obj__ = 0;
                if(_if_conditional684=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional684) {
                    __dec_obj282=result_328->mLeft;
                    result_328->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value663=sNode_clone(self->mLeft))));
                    if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count(__dec_obj282, ((struct sNode*)__dec_obj282)->finalize, ((struct sNode*)__dec_obj282)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value663);
                    if(right_value663 && right_value663 != __result_obj__ && !__freed_obj__) { right_value663 = come_decrement_ref_count(right_value663, ((struct sNode*)right_value663)->finalize, ((struct sNode*)right_value663)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value663;
                    __freed_obj__ = 0;
                }
                if(_if_conditional685=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional685) {
                    __dec_obj283=result_328->mRight;
                    result_328->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value664=sNode_clone(self->mRight))));
                    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value664);
                    if(right_value664 && right_value664 != __result_obj__ && !__freed_obj__) { right_value664 = come_decrement_ref_count(right_value664, ((struct sNode*)right_value664)->finalize, ((struct sNode*)right_value664)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value664;
                    __freed_obj__ = 0;
                }
                if(_if_conditional686=self!=((void*)0),                _if_conditional686) {
                    result_328->sline=self->sline;
                }
                if(_if_conditional687=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional687) {
                    __dec_obj284=result_328->sname;
                    result_328->sname=(char*)come_increment_ref_count(((char*)(right_value665=string_clone(self->sname))));
                    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count(__dec_obj284, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value665);
                    if(right_value665 && right_value665 != __result_obj__ && !__freed_obj__) { right_value665 = come_decrement_ref_count(right_value665, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value665;
                    __freed_obj__ = 0;
                }
                __result368__ = __result_obj__ = result_328;
                if(result_328 && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,result_328, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result368__;
                if(result_328 && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,result_328, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value667;
struct sNode* node_329;
_Bool _while_condtional21;
_Bool _if_conditional688;
struct sNode* value1_330;
_Bool _if_conditional689;
void* right_value668;
void* right_value669;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value672;
struct sNode* __dec_obj286;
void* right_value673;
struct sNode* __dec_obj287;
void* right_value674;
struct sNode* value2_332;
void* right_value675;
void* right_value676;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* right_value682;
struct sNode* __result375__;
struct sNode* __result376__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value667, 0, sizeof(void*));
memset(&node_329, 0, sizeof(struct sNode*));
memset(&value1_330, 0, sizeof(struct sNode*));
memset(&right_value668, 0, sizeof(void*));
memset(&right_value669, 0, sizeof(void*));
memset(&right_value672, 0, sizeof(void*));
memset(&right_value673, 0, sizeof(void*));
memset(&right_value674, 0, sizeof(void*));
memset(&value2_332, 0, sizeof(struct sNode*));
memset(&right_value675, 0, sizeof(void*));
memset(&right_value676, 0, sizeof(void*));
memset(&right_value682, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value667=comma_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value667);
    if(right_value667 && right_value667 != __result_obj__ && !__freed_obj__) { right_value667 = come_decrement_ref_count(right_value667, ((struct sNode*)right_value667)->finalize, ((struct sNode*)right_value667)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value667;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional21=*info->p,    _while_condtional21) {
        if(_if_conditional688=*info->p==63,        _if_conditional688) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional689=*info->p==58,            _if_conditional689) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2745, "struct sNode");
                _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value669=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value668=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2745, "struct sNullNode")))),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNullNode_sline;
                _inf_value44->sname=(void*)sNullNode_sname;
                _inf_value44->terminated=(void*)sNullNode_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj286=value1_330;
                value1_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value672=_inf_value44)));
                if(__dec_obj286) { __dec_obj286 = come_decrement_ref_count(__dec_obj286, ((struct sNode*)__dec_obj286)->finalize, ((struct sNode*)__dec_obj286)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value668);
                if(right_value668 && right_value668 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value668, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value668;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value669);
                if(right_value669 && right_value669 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value669;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value672);
                if(right_value672 && right_value672 != __result_obj__ && !__freed_obj__) { right_value672 = come_decrement_ref_count(right_value672, ((struct sNode*)right_value672)->finalize, ((struct sNode*)right_value672)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value672;
                __freed_obj__ = 0;
            }
            else {
                __dec_obj287=value1_330;
                value1_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value673=comma_exp(info))));
                if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value673);
                if(right_value673 && right_value673 != __result_obj__ && !__freed_obj__) { right_value673 = come_decrement_ref_count(right_value673, ((struct sNode*)right_value673)->finalize, ((struct sNode*)right_value673)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value673;
                __freed_obj__ = 0;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value674=comma_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value674);
            if(right_value674 && right_value674 != __result_obj__ && !__freed_obj__) { right_value674 = come_decrement_ref_count(right_value674, ((struct sNode*)right_value674)->finalize, ((struct sNode*)right_value674)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value674;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2759, "struct sNode");
            _inf_obj_value45=come_increment_ref_count(((struct sConditionalNode*)(right_value676=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value675=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2759, "struct sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(value1_330),(struct sNode*)come_increment_ref_count(value2_332),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sConditionalNode_sline;
            _inf_value45->sname=(void*)sConditionalNode_sname;
            _inf_value45->terminated=(void*)sConditionalNode_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result375__ = __result_obj__ = ((struct sNode*)(right_value682=_inf_value45));
            if(value1_330 && !__freed_obj__) { value1_330 = come_decrement_ref_count(value1_330, ((struct sNode*)value1_330)->finalize, ((struct sNode*)value1_330)->_protocol_obj, 0, 0, 0); } 
            if(value2_332 && !__freed_obj__) { value2_332 = come_decrement_ref_count(value2_332, ((struct sNode*)value2_332)->finalize, ((struct sNode*)value2_332)->_protocol_obj, 0, 0, 0); } 
            if(node_329 && !__freed_obj__) { node_329 = come_decrement_ref_count(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value675);
            if(right_value675 && right_value675 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value675, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value675;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value676);
            if(right_value676 && right_value676 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value676, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[2] = right_value676;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value682);
            if(right_value682 && right_value682 != __result_obj__ && !__freed_obj__) { right_value682 = come_decrement_ref_count(right_value682, ((struct sNode*)right_value682)->finalize, ((struct sNode*)right_value682)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[3] = right_value682;
            __freed_obj__ = 0;
            return __result375__;
            if(value1_330 && !__freed_obj__) { value1_330 = come_decrement_ref_count(value1_330, ((struct sNode*)value1_330)->finalize, ((struct sNode*)value1_330)->_protocol_obj, 0, 0, 0); } 
            if(value2_332 && !__freed_obj__) { value2_332 = come_decrement_ref_count(value2_332, ((struct sNode*)value2_332)->finalize, ((struct sNode*)value2_332)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result376__ = __result_obj__ = node_329;
    if(node_329 && !__freed_obj__) { node_329 = come_decrement_ref_count(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 1, 0); } 
    return __result376__;
    if(node_329 && !__freed_obj__) { node_329 = come_decrement_ref_count(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0); } 
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional694;
_Bool _if_conditional695;
_Bool _if_conditional696;
_Bool _if_conditional697;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional694=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional694) {
                    if(self->mValue1 && !__freed_obj__) { self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional695=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional695) {
                    if(self->mValue2 && !__freed_obj__) { self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional696=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional696) {
                    if(self->mValue3 && !__freed_obj__) { self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional697=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional697) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional698;
struct sConditionalNode* __result373__;
void* right_value677;
struct sConditionalNode* result_333;
_Bool _if_conditional699;
void* right_value678;
struct sNode* __dec_obj288;
_Bool _if_conditional700;
void* right_value679;
struct sNode* __dec_obj289;
_Bool _if_conditional701;
void* right_value680;
struct sNode* __dec_obj290;
_Bool _if_conditional702;
_Bool _if_conditional703;
void* right_value681;
char* __dec_obj291;
struct sConditionalNode* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value677, 0, sizeof(void*));
memset(&result_333, 0, sizeof(struct sConditionalNode*));
memset(&right_value678, 0, sizeof(void*));
memset(&right_value679, 0, sizeof(void*));
memset(&right_value680, 0, sizeof(void*));
memset(&right_value681, 0, sizeof(void*));
                if(_if_conditional698=self==(void*)0,                _if_conditional698) {
                    __result373__ = __result_obj__ = (void*)0;
                    return __result373__;
                }
                result_333=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value677=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value677);
                if(right_value677 && right_value677 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value677;
                __freed_obj__ = 0;
                if(_if_conditional699=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional699) {
                    __dec_obj288=result_333->mValue1;
                    result_333->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value678=sNode_clone(self->mValue1))));
                    if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value678);
                    if(right_value678 && right_value678 != __result_obj__ && !__freed_obj__) { right_value678 = come_decrement_ref_count(right_value678, ((struct sNode*)right_value678)->finalize, ((struct sNode*)right_value678)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value678;
                    __freed_obj__ = 0;
                }
                if(_if_conditional700=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional700) {
                    __dec_obj289=result_333->mValue2;
                    result_333->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value679=sNode_clone(self->mValue2))));
                    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value679);
                    if(right_value679 && right_value679 != __result_obj__ && !__freed_obj__) { right_value679 = come_decrement_ref_count(right_value679, ((struct sNode*)right_value679)->finalize, ((struct sNode*)right_value679)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value679;
                    __freed_obj__ = 0;
                }
                if(_if_conditional701=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional701) {
                    __dec_obj290=result_333->mValue3;
                    result_333->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value680=sNode_clone(self->mValue3))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value680);
                    if(right_value680 && right_value680 != __result_obj__ && !__freed_obj__) { right_value680 = come_decrement_ref_count(right_value680, ((struct sNode*)right_value680)->finalize, ((struct sNode*)right_value680)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value680;
                    __freed_obj__ = 0;
                }
                if(_if_conditional702=self!=((void*)0),                _if_conditional702) {
                    result_333->sline=self->sline;
                }
                if(_if_conditional703=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional703) {
                    __dec_obj291=result_333->sname;
                    result_333->sname=(char*)come_increment_ref_count(((char*)(right_value681=string_clone(self->sname))));
                    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count(__dec_obj291, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value681);
                    if(right_value681 && right_value681 != __result_obj__ && !__freed_obj__) { right_value681 = come_decrement_ref_count(right_value681, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value681;
                    __freed_obj__ = 0;
                }
                __result374__ = __result_obj__ = result_333;
                if(result_333 && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result374__;
                if(result_333 && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,result_333, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value683;
struct sNode* node_334;
struct sNode* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value683, 0, sizeof(void*));
memset(&node_334, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value683=conditional_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value683);
    if(right_value683 && right_value683 != __result_obj__ && !__freed_obj__) { right_value683 = come_decrement_ref_count(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value683;
    __freed_obj__ = 0;
    __result377__ = __result_obj__ = node_334;
    if(node_334 && !__freed_obj__) { node_334 = come_decrement_ref_count(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 1, 0); } 
    return __result377__;
    if(node_334 && !__freed_obj__) { node_334 = come_decrement_ref_count(node_334, ((struct sNode*)node_334)->finalize, ((struct sNode*)node_334)->_protocol_obj, 0, 0, 0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional704;
void* right_value684;
void* right_value685;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* right_value688;
struct sNode* __result380__;
_Bool _if_conditional709;
void* right_value689;
void* right_value690;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* right_value693;
struct sNode* __result383__;
void* right_value694;
struct sNode* __result384__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value684, 0, sizeof(void*));
memset(&right_value685, 0, sizeof(void*));
memset(&right_value688, 0, sizeof(void*));
memset(&right_value689, 0, sizeof(void*));
memset(&right_value690, 0, sizeof(void*));
memset(&right_value693, 0, sizeof(void*));
memset(&right_value694, 0, sizeof(void*));
    if(_if_conditional704=charp_operator_equals(buf,"null"),    _if_conditional704) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2783, "struct sNode");
        _inf_obj_value46=come_increment_ref_count(((struct sNullNode*)(right_value685=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value684=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2783, "struct sNullNode")))),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNullNode_sline;
        _inf_value46->sname=(void*)sNullNode_sname;
        _inf_value46->terminated=(void*)sNullNode_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result380__ = __result_obj__ = ((struct sNode*)(right_value688=_inf_value46));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value684);
        if(right_value684 && right_value684 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value684, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value684;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value685);
        if(right_value685 && right_value685 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value685;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value688);
        if(right_value688 && right_value688 != __result_obj__ && !__freed_obj__) { right_value688 = come_decrement_ref_count(right_value688, ((struct sNode*)right_value688)->finalize, ((struct sNode*)right_value688)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value688;
        __freed_obj__ = 0;
        return __result380__;
    }
    else {
        if(_if_conditional709=charp_operator_equals(buf,"nil"),        _if_conditional709) {
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2786, "struct sNode");
            _inf_obj_value47=come_increment_ref_count(((struct sNilNode*)(right_value690=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value689=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2786, "struct sNilNode")))),info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sNilNode_finalize;
            _inf_value47->clone=(void*)sNilNode_clone;
            _inf_value47->compile=(void*)sNilNode_compile;
            _inf_value47->sline=(void*)sNilNode_sline;
            _inf_value47->sname=(void*)sNilNode_sname;
            _inf_value47->terminated=(void*)sNilNode_terminated;
            _inf_value47->kind=(void*)sNilNode_kind;
            __result383__ = __result_obj__ = ((struct sNode*)(right_value693=_inf_value47));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value689);
            if(right_value689 && right_value689 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value689, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value689;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value690);
            if(right_value690 && right_value690 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value690, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value690;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value693);
            if(right_value693 && right_value693 != __result_obj__ && !__freed_obj__) { right_value693 = come_decrement_ref_count(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value693;
            __freed_obj__ = 0;
            return __result383__;
        }
    }
    __result384__ = __result_obj__ = ((struct sNode*)(right_value694=string_node_v12(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value694);
    if(right_value694 && right_value694 != __result_obj__ && !__freed_obj__) { right_value694 = come_decrement_ref_count(right_value694, ((struct sNode*)right_value694)->finalize, ((struct sNode*)right_value694)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value694;
    __freed_obj__ = 0;
    return __result384__;
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional705;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional705=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional705) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional706;
struct sNullNode* __result378__;
void* right_value686;
struct sNullNode* result_335;
_Bool _if_conditional707;
_Bool _if_conditional708;
void* right_value687;
char* __dec_obj292;
struct sNullNode* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value686, 0, sizeof(void*));
memset(&result_335, 0, sizeof(struct sNullNode*));
memset(&right_value687, 0, sizeof(void*));
            if(_if_conditional706=self==(void*)0,            _if_conditional706) {
                __result378__ = __result_obj__ = (void*)0;
                return __result378__;
            }
            result_335=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value686=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value686);
            if(right_value686 && right_value686 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value686;
            __freed_obj__ = 0;
            if(_if_conditional707=self!=((void*)0),            _if_conditional707) {
                result_335->sline=self->sline;
            }
            if(_if_conditional708=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional708) {
                __dec_obj292=result_335->sname;
                result_335->sname=(char*)come_increment_ref_count(((char*)(right_value687=string_clone(self->sname))));
                if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count(__dec_obj292, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value687);
                if(right_value687 && right_value687 != __result_obj__ && !__freed_obj__) { right_value687 = come_decrement_ref_count(right_value687, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value687;
                __freed_obj__ = 0;
            }
            __result379__ = __result_obj__ = result_335;
            if(result_335 && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result379__;
            if(result_335 && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNilNode_finalize(struct sNilNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional710;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional710=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional710) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional711;
struct sNilNode* __result381__;
void* right_value691;
struct sNilNode* result_336;
_Bool _if_conditional712;
_Bool _if_conditional713;
void* right_value692;
char* __dec_obj293;
struct sNilNode* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value691, 0, sizeof(void*));
memset(&result_336, 0, sizeof(struct sNilNode*));
memset(&right_value692, 0, sizeof(void*));
                if(_if_conditional711=self==(void*)0,                _if_conditional711) {
                    __result381__ = __result_obj__ = (void*)0;
                    return __result381__;
                }
                result_336=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value691=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value691);
                if(right_value691 && right_value691 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value691, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value691;
                __freed_obj__ = 0;
                if(_if_conditional712=self!=((void*)0),                _if_conditional712) {
                    result_336->sline=self->sline;
                }
                if(_if_conditional713=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional713) {
                    __dec_obj293=result_336->sname;
                    result_336->sname=(char*)come_increment_ref_count(((char*)(right_value692=string_clone(self->sname))));
                    if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count(__dec_obj293, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value692);
                    if(right_value692 && right_value692 != __result_obj__ && !__freed_obj__) { right_value692 = come_decrement_ref_count(right_value692, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value692;
                    __freed_obj__ = 0;
                }
                __result382__ = __result_obj__ = result_336;
                if(result_336 && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result382__;
                if(result_336 && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 0, 0); }
}

