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
struct optional$2sFunphbool
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
static void sGenericsFun_finalize(struct sGenericsFun* self);
static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key);
static void sFun_finalize(struct sFun* self);
static void sBlock_finalize(struct sBlock* self);
static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2);
static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self);
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
void* right_value49;
struct sGenericsFun* generics_fun_39;
_Bool _if_conditional107;
void* right_value50;
_Bool _if_conditional108;
_Bool __result30__;
void* right_value53;
_Bool _if_conditional129;
void* right_value54;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_43;
char* fun_name_44;
void* right_value55;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_45;
char* fun_name2_46;
_Bool _if_conditional131;
void* right_value56;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_47;
char* fun_name_48;
void* right_value57;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_49;
char* fun_name2_50;
void* right_value58;
void* right_value59;
char* __dec_obj31;
int i_51;
_Bool _for_condtionalA1;
void* right_value60;
char* new_fun_name_52;
void* right_value61;
_Bool _if_conditional132;
void* right_value62;
char* __dec_obj32;
_Bool _if_conditional133;
void* right_value63;
_Bool result_53;
_Bool _if_conditional134;
void* right_value64;
struct CVALUE* come_value_54;
char* left_value2_55;
void* right_value65;
void* right_value66;
void* right_value67;
void* right_value68;
_Bool _if_conditional139;
void* right_value69;
void* right_value70;
char* __dec_obj33;
void* right_value71;
char* __dec_obj34;
char* right_value2_59;
void* right_value72;
void* right_value73;
void* right_value74;
void* right_value75;
_Bool _if_conditional140;
void* right_value76;
void* right_value77;
char* __dec_obj35;
void* right_value78;
char* __dec_obj36;
void* right_value79;
void* right_value80;
void* right_value81;
void* right_value82;
char* __dec_obj37;
void* right_value83;
struct sType* type2_60;
void* right_value84;
struct sType* type3_61;
void* right_value85;
struct sType* __dec_obj38;
_Bool _if_conditional141;
void* right_value86;
char* __dec_obj39;
void* right_value87;
char* __dec_obj40;
_Bool __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
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
right_value53 = (void*)0;
right_value54 = (void*)0;
memset(&fun_43, 0, sizeof(struct sFun*));
memset(&fun_name_44, 0, sizeof(char*));
memset(&fun_43, 0, sizeof(struct sFun*));
memset(&fun_name_44, 0, sizeof(char*));
right_value55 = (void*)0;
memset(&fun2_45, 0, sizeof(struct sFun*));
memset(&fun_name2_46, 0, sizeof(char*));
memset(&fun2_45, 0, sizeof(struct sFun*));
memset(&fun_name2_46, 0, sizeof(char*));
right_value56 = (void*)0;
memset(&fun_47, 0, sizeof(struct sFun*));
memset(&fun_name_48, 0, sizeof(char*));
memset(&fun_47, 0, sizeof(struct sFun*));
memset(&fun_name_48, 0, sizeof(char*));
right_value57 = (void*)0;
memset(&fun2_49, 0, sizeof(struct sFun*));
memset(&fun_name2_50, 0, sizeof(char*));
memset(&fun2_49, 0, sizeof(struct sFun*));
memset(&fun_name2_50, 0, sizeof(char*));
right_value58 = (void*)0;
right_value59 = (void*)0;
memset(&i_51, 0, sizeof(int));
right_value60 = (void*)0;
memset(&new_fun_name_52, 0, sizeof(char*));
right_value61 = (void*)0;
right_value62 = (void*)0;
right_value63 = (void*)0;
memset(&result_53, 0, sizeof(_Bool));
right_value64 = (void*)0;
memset(&come_value_54, 0, sizeof(struct CVALUE*));
memset(&left_value2_55, 0, sizeof(char*));
right_value65 = (void*)0;
right_value66 = (void*)0;
right_value67 = (void*)0;
right_value68 = (void*)0;
right_value69 = (void*)0;
right_value70 = (void*)0;
right_value71 = (void*)0;
memset(&right_value2_59, 0, sizeof(char*));
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
right_value82 = (void*)0;
right_value83 = (void*)0;
memset(&type2_60, 0, sizeof(struct sType*));
right_value84 = (void*)0;
memset(&type3_61, 0, sizeof(struct sType*));
right_value85 = (void*)0;
right_value86 = (void*)0;
right_value87 = (void*)0;
    generics_type_29=(struct sType*)come_increment_ref_count(((struct sType*)(right_value44=sType_clone(type))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value44);
    if(right_value44 && right_value44 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value44, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value44, right_value44 = (void*)0;
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
        __right_value_freed_obj[0] = right_value45, right_value45 = (void*)0;
        __freed_obj__ = 0;
        obj_type_35=(struct sType*)come_increment_ref_count(((struct sType*)(right_value46=solve_generics(type,info->generics_type,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value46, right_value46 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj29=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value47, right_value47 = (void*)0;
        __freed_obj__ = 0;
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value48, right_value48 = (void*)0;
        __freed_obj__ = 0;
        generics_fun_39=((struct sGenericsFun*)(right_value49=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value49);
        if(right_value49 && right_value49 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value49, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value49, right_value49 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional107=generics_fun_39,        _if_conditional107) {
            if(_if_conditional108=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value50=__builtin_string(fun_name2_33)))),generics_fun_39,obj_type_35,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50),
            (right_value50 && right_value50 != __result_obj__ && !__freed_obj__) ? right_value50 = come_decrement_ref_count(right_value50, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value50, right_value50 = (void*)0, 
            __freed_obj__ = 0, 
            _if_conditional108) {
                __result30__ = (_Bool)0;
                if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_33 && !__freed_obj__) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
                return __result30__;
            }
            operator_fun_32=((struct sFun*)(right_value53=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
            if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value53, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value53, right_value53 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional129=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional129) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value54=create_equals_automatically(obj_type_35,"equals",info)));
                fun_43=multiple_assign_var1->v1;
                fun_name_44=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value54, right_value54 = (void*)0;
                __freed_obj__ = 0;
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value55=create_operator_equals_automatically(obj_type_35,"operator_equals",info)));
                fun2_45=multiple_assign_var2->v1;
                fun_name2_46=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
                if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value55, right_value55 = (void*)0;
                __freed_obj__ = 0;
                operator_fun_32=fun2_45;
                if(fun_name_44 && !__freed_obj__) { fun_name_44 = come_decrement_ref_count(fun_name_44, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_46 && !__freed_obj__) { fun_name2_46 = come_decrement_ref_count(fun_name2_46, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional131=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional131) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value56=create_equals_automatically(obj_type_35,"not_equals",info)));
                    fun_47=multiple_assign_var3->v1;
                    fun_name_48=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                    if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value56, right_value56 = (void*)0;
                    __freed_obj__ = 0;
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value57=create_operator_not_equals_automatically(obj_type_35,"operator_not_equals",info)));
                    fun2_49=multiple_assign_var4->v1;
                    fun_name2_50=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                    if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value57, right_value57 = (void*)0;
                    __freed_obj__ = 0;
                    operator_fun_32=fun2_49;
                    if(fun_name_48 && !__freed_obj__) { fun_name_48 = come_decrement_ref_count(fun_name_48, (void*)0, (void*)0, 0, 0, 0); }
                    if(fun_name2_50 && !__freed_obj__) { fun_name2_50 = come_decrement_ref_count(fun_name2_50, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    operator_fun_32=((struct sFun*)(right_value58=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value58, right_value58 = (void*)0;
                    __freed_obj__ = 0;
                }
            }
        }
        if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
        if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
    }
    else {
        __dec_obj31=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value59=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
        if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { right_value59 = come_decrement_ref_count(right_value59, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value59, right_value59 = (void*)0;
        __freed_obj__ = 0;
        for(
        i_51=128-1 ,        0;        _for_condtionalA1=        i_51>=1 ,        _for_condtionalA1;        i_51-- ,        0        ){
            new_fun_name_52=(char*)come_increment_ref_count(((char*)(right_value60=xsprintf("%s_v%d",fun_name2_33,i_51))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
            if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { right_value60 = come_decrement_ref_count(right_value60, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value60, right_value60 = (void*)0;
            __freed_obj__ = 0;
            operator_fun_32=((struct sFun*)(right_value61=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_52)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
            if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value61, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value61, right_value61 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional132=operator_fun_32,            _if_conditional132) {
                __dec_obj32=fun_name2_33;
                fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value62=__builtin_string(new_fun_name_52))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
                if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value62, right_value62 = (void*)0;
                __freed_obj__ = 0;
                if(new_fun_name_52 && !__freed_obj__) { new_fun_name_52 = come_decrement_ref_count(new_fun_name_52, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_52 && !__freed_obj__) { new_fun_name_52 = come_decrement_ref_count(new_fun_name_52, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional133=operator_fun_32==((void*)0),        _if_conditional133) {
            operator_fun_32=((struct sFun*)(right_value63=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value63, right_value63 = (void*)0;
            __freed_obj__ = 0;
        }
    }
    result_53=(_Bool)0;
    if(_if_conditional134=operator_fun_32&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional134) {
        come_value_54=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value64=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
        if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value64, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value64, right_value64 = (void*)0;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value66=xsprintf("\%s is assigned to",((char*)(right_value65=string_to_string(fun_name2_33)))))),((struct sType*)(right_value67=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0))),left_value->type,left_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
        if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { right_value65 = come_decrement_ref_count(right_value65, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value65, right_value65 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { right_value66 = come_decrement_ref_count(right_value66, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value66, right_value66 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value67, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value67, right_value67 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional139=((struct sType*)(right_value68=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0)))->mHeap&&left_value->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value68),
        (right_value68 && right_value68 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value68, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value68, right_value68 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional139) {
            std_move(((struct sType*)(right_value69=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0))),left_value->type,left_value,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value69);
            if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value69, right_value69 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj33=left_value2_55;
            left_value2_55=(char*)come_increment_ref_count(((char*)(right_value70=xsprintf("%s",left_value->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70);
            if(right_value70 && right_value70 != __result_obj__ && !__freed_obj__) { right_value70 = come_decrement_ref_count(right_value70, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value70, right_value70 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj34=left_value2_55;
            left_value2_55=(char*)come_increment_ref_count(((char*)(right_value71=string_clone(left_value->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { right_value71 = come_decrement_ref_count(right_value71, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value71, right_value71 = (void*)0;
            __freed_obj__ = 0;
        }
        check_assign_type(((char*)(right_value73=xsprintf("\%s is assigned to",((char*)(right_value72=string_to_string(fun_name2_33)))))),((struct sType*)(right_value74=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1))),right_value->type,right_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
        if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value72, right_value72 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value73);
        if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value73, right_value73 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value74, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value74, right_value74 = (void*)0;
        __freed_obj__ = 0;
        if(_if_conditional140=((struct sType*)(right_value75=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1)))->mHeap&&right_value->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value75),
        (right_value75 && right_value75 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value75, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value75, right_value75 = (void*)0, 
        __freed_obj__ = 0, 
        _if_conditional140) {
            std_move(((struct sType*)(right_value76=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1))),right_value->type,right_value,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value76);
            if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value76, right_value76 = (void*)0;
            __freed_obj__ = 0;
            __dec_obj35=right_value2_59;
            right_value2_59=(char*)come_increment_ref_count(((char*)(right_value77=xsprintf("%s",right_value->c_value))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77);
            if(right_value77 && right_value77 != __result_obj__ && !__freed_obj__) { right_value77 = come_decrement_ref_count(right_value77, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value77, right_value77 = (void*)0;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj36=right_value2_59;
            right_value2_59=(char*)come_increment_ref_count(((char*)(right_value78=string_clone(right_value->c_value))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { right_value78 = come_decrement_ref_count(right_value78, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value78, right_value78 = (void*)0;
            __freed_obj__ = 0;
        }
        __dec_obj37=come_value_54->c_value;
        come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value82=xsprintf("\%s(\%s,\%s)",((char*)(right_value79=string_to_string(fun_name2_33))),((char*)(right_value80=string_to_string(left_value2_55))),((char*)(right_value81=string_to_string(right_value2_59)))))));
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
        if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value79, right_value79 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value80);
        if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value80, right_value80 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value81, right_value81 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value82, right_value82 = (void*)0;
        __freed_obj__ = 0;
        type2_60=(struct sType*)come_increment_ref_count(((struct sType*)(right_value83=sType_clone(operator_fun_32->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value83, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value83, right_value83 = (void*)0;
        __freed_obj__ = 0;
        type3_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value84=solve_generics(type2_60,generics_type_29,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value84, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value84, right_value84 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj38=come_value_54->type;
        come_value_54->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(type3_61))));
        if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value85, right_value85 = (void*)0;
        __freed_obj__ = 0;
        come_value_54->var=((void*)0);
        if(_if_conditional141=type3_61->mHeap,        _if_conditional141) {
            __dec_obj39=come_value_54->c_value;
            come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value86=append_object_to_right_values(come_value_54->c_value,(struct sType*)come_increment_ref_count(type3_61),info))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
            if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { right_value86 = come_decrement_ref_count(right_value86, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value86, right_value86 = (void*)0;
            __freed_obj__ = 0;
        }
        __dec_obj40=come_value_54->c_value;
        come_value_54->c_value=(char*)come_increment_ref_count(((char*)(right_value87=append_exception_value(come_value_54->c_value,come_value_54->type,info))));
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { right_value87 = come_decrement_ref_count(right_value87, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value87, right_value87 = (void*)0;
        __freed_obj__ = 0;
        add_come_last_code(info,"%s;\n",come_value_54->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_54));
        result_53=(_Bool)1;
        if(come_value_54 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_54, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(left_value2_55 && !__freed_obj__) { left_value2_55 = come_decrement_ref_count(left_value2_55, (void*)0, (void*)0, 0, 0, 0); }
        if(right_value2_59 && !__freed_obj__) { right_value2_59 = come_decrement_ref_count(right_value2_59, (void*)0, (void*)0, 0, 0, 0); }
        if(type2_60 && !__freed_obj__) { come_call_finalizer(sType_finalize,type2_60, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(type3_61 && !__freed_obj__) { come_call_finalizer(sType_finalize,type3_61, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result39__ = result_53;
    if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(fun_name2_33 && !__freed_obj__) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
    return __result39__;
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
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value10);
        if(right_value10 && right_value10 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value10, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value10, right_value10 = (void*)0;
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
            __right_value_freed_obj[0] = right_value13, right_value13 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional27=self!=((void*)0)&&self->mOriginalLoadVarType!=((void*)0),        _if_conditional27) {
            __dec_obj8=result_5->mOriginalLoadVarType;
            result_5->mOriginalLoadVarType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value14=tuple1$1sTypephp_clone(self->mOriginalLoadVarType))));
            if(__dec_obj8) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj8, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value14);
            if(right_value14 && right_value14 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value14, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value14, right_value14 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional28=self!=((void*)0)&&self->mGenericsName!=((void*)0),        _if_conditional28) {
            __dec_obj9=result_5->mGenericsName;
            result_5->mGenericsName=(char*)come_increment_ref_count(((char*)(right_value15=string_clone(self->mGenericsName))));
            if(__dec_obj9) { __dec_obj9 = come_decrement_ref_count(__dec_obj9, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value15);
            if(right_value15 && right_value15 != __result_obj__ && !__freed_obj__) { right_value15 = come_decrement_ref_count(right_value15, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value15, right_value15 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional29=self!=((void*)0)&&self->mGenericsTypes!=((void*)0),        _if_conditional29) {
            __dec_obj13=result_5->mGenericsTypes;
            result_5->mGenericsTypes=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value22=list$1sTypephp_clone(self->mGenericsTypes))));
            if(__dec_obj13) { come_call_finalizer(list$1sTypeph_finalize,__dec_obj13, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value22);
            if(right_value22 && right_value22 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value22, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value22, right_value22 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional33=self!=((void*)0)&&self->mArrayNum!=((void*)0),        _if_conditional33) {
            __dec_obj17=result_5->mArrayNum;
            result_5->mArrayNum=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value30=list$1sNodephp_clone(self->mArrayNum))));
            if(__dec_obj17) { come_call_finalizer(list$1sNodeph_finalize,__dec_obj17, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value30);
            if(right_value30 && right_value30 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value30, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value30, right_value30 = (void*)0;
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
            __right_value_freed_obj[0] = right_value31, right_value31 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional48=self!=((void*)0)&&self->mParamNames!=((void*)0),        _if_conditional48) {
            __dec_obj22=result_5->mParamNames;
            result_5->mParamNames=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value38=list$1charphp_clone(self->mParamNames))));
            if(__dec_obj22) { come_call_finalizer(list$1charph_finalize,__dec_obj22, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value38);
            if(right_value38 && right_value38 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value38, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value38, right_value38 = (void*)0;
            __freed_obj__ = 0;
        }
        if(_if_conditional52=self!=((void*)0)&&self->mResultType!=((void*)0),        _if_conditional52) {
            __dec_obj23=result_5->mResultType;
            result_5->mResultType=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value39=tuple1$1sTypephp_clone(self->mResultType))));
            if(__dec_obj23) { come_call_finalizer(tuple1$1sTypeph_finalize,__dec_obj23, (void*)0, (void*)0, 0, 0, 0, 0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value39);
            if(right_value39 && right_value39 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypephp_finalize,right_value39, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value39, right_value39 = (void*)0;
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
            __right_value_freed_obj[0] = right_value40, right_value40 = (void*)0;
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
            __right_value_freed_obj[0] = right_value41, right_value41 = (void*)0;
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
            __right_value_freed_obj[0] = right_value42, right_value42 = (void*)0;
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
            __right_value_freed_obj[0] = right_value43, right_value43 = (void*)0;
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
right_value11 = (void*)0;
memset(&result_12, 0, sizeof(struct tuple1$1sTypeph*));
right_value12 = (void*)0;
                if(_if_conditional24=self==(void*)0,                _if_conditional24) {
                    __result8__ = __result_obj__ = (void*)0;
                    return __result8__;
                }
                result_12=(struct tuple1$1sTypeph*)come_increment_ref_count(((struct tuple1$1sTypeph*)(right_value11=(struct tuple1$1sTypeph*)come_calloc(1, sizeof(struct tuple1$1sTypeph)*(1), "tuple1$1sTypephp_clone", 3, "struct tuple1$1sTypeph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value11);
                if(right_value11 && right_value11 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple1$1sTypeph_finalize,right_value11, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value11, right_value11 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional26=self!=((void*)0)&&self->v1!=((void*)0),                _if_conditional26) {
                    __dec_obj6=result_12->v1;
                    result_12->v1=(struct sType*)come_increment_ref_count(((struct sType*)(right_value12=sType_clone(self->v1))));
                    if(__dec_obj6) { come_call_finalizer(sType_finalize,__dec_obj6, (void*)0, (void*)0, 0, 0, 0, 0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value12);
                    if(right_value12 && right_value12 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value12, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value12, right_value12 = (void*)0;
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
right_value16 = (void*)0;
right_value17 = (void*)0;
memset(&result_13, 0, sizeof(struct list$1sTypeph*));
memset(&it_14, 0, sizeof(struct list_item$1sTypeph*));
right_value21 = (void*)0;
                if(_if_conditional30=self==((void*)0),                _if_conditional30) {
                    __result10__ = __result_obj__ = ((void*)0);
                    return __result10__;
                }
                result_13=(struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value17=list$1sTypeph_initialize((struct list$1sTypeph*)come_increment_ref_count(((struct list$1sTypeph*)(right_value16=(struct list$1sTypeph*)come_calloc(1, sizeof(struct list$1sTypeph)*(1), "./comelang2.h", 198, "struct list$1sTypeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value16);
                if(right_value16 && right_value16 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value16, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value16, right_value16 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value17);
                if(right_value17 && right_value17 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,right_value17, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value17, right_value17 = (void*)0;
                __freed_obj__ = 0;
                it_14=self->head;
                while(_while_condtional4=it_14!=((void*)0),                _while_condtional4) {
                    list$1sTypeph_add(result_13,(struct sType*)come_increment_ref_count(((struct sType*)(right_value21=sType_clone(it_14->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value21);
                    if(right_value21 && right_value21 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value21, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value21, right_value21 = (void*)0;
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
right_value18 = (void*)0;
memset(&litem_15, 0, sizeof(struct list_item$1sTypeph*));
right_value19 = (void*)0;
memset(&litem_16, 0, sizeof(struct list_item$1sTypeph*));
right_value20 = (void*)0;
memset(&litem_17, 0, sizeof(struct list_item$1sTypeph*));
                        if(_if_conditional31=self->len==0,                        _if_conditional31) {
                            litem_15=(struct list_item$1sTypeph*)come_increment_ref_count(((struct list_item$1sTypeph*)(right_value18=(struct list_item$1sTypeph*)come_calloc(1, sizeof(struct list_item$1sTypeph)*(1), "./comelang2.h", 212, "struct list_item$1sTypeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value18);
                            if(right_value18 && right_value18 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sTypephp_finalize,right_value18, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value18, right_value18 = (void*)0;
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
                                __right_value_freed_obj[0] = right_value19, right_value19 = (void*)0;
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
                                __right_value_freed_obj[0] = right_value20, right_value20 = (void*)0;
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
right_value23 = (void*)0;
right_value24 = (void*)0;
memset(&result_18, 0, sizeof(struct list$1sNodeph*));
memset(&it_19, 0, sizeof(struct list_item$1sNodeph*));
right_value29 = (void*)0;
                if(_if_conditional34=self==((void*)0),                _if_conditional34) {
                    __result14__ = __result_obj__ = ((void*)0);
                    return __result14__;
                }
                result_18=(struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value24=list$1sNodeph_initialize((struct list$1sNodeph*)come_increment_ref_count(((struct list$1sNodeph*)(right_value23=(struct list$1sNodeph*)come_calloc(1, sizeof(struct list$1sNodeph)*(1), "./comelang2.h", 198, "struct list$1sNodeph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value23);
                if(right_value23 && right_value23 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value23, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value23, right_value23 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value24);
                if(right_value24 && right_value24 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,right_value24, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value24, right_value24 = (void*)0;
                __freed_obj__ = 0;
                it_19=self->head;
                while(_while_condtional5=it_19!=((void*)0),                _while_condtional5) {
                    list$1sNodeph_add(result_18,(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value29=sNode_clone(it_19->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value29);
                    if(right_value29 && right_value29 != __result_obj__ && !__freed_obj__) { right_value29 = come_decrement_ref_count(right_value29, ((struct sNode*)right_value29)->finalize, ((struct sNode*)right_value29)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value29, right_value29 = (void*)0;
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
right_value25 = (void*)0;
memset(&litem_20, 0, sizeof(struct list_item$1sNodeph*));
right_value26 = (void*)0;
memset(&litem_21, 0, sizeof(struct list_item$1sNodeph*));
right_value27 = (void*)0;
memset(&litem_22, 0, sizeof(struct list_item$1sNodeph*));
                        if(_if_conditional35=self->len==0,                        _if_conditional35) {
                            litem_20=(struct list_item$1sNodeph*)come_increment_ref_count(((struct list_item$1sNodeph*)(right_value25=(struct list_item$1sNodeph*)come_calloc(1, sizeof(struct list_item$1sNodeph)*(1), "./comelang2.h", 212, "struct list_item$1sNodeph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value25);
                            if(right_value25 && right_value25 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1sNodephp_finalize,right_value25, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value25, right_value25 = (void*)0;
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
                                __right_value_freed_obj[0] = right_value26, right_value26 = (void*)0;
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
                                __right_value_freed_obj[0] = right_value27, right_value27 = (void*)0;
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
right_value28 = (void*)0;
memset(&result_23, 0, sizeof(struct sNode*));
                        if(_if_conditional37=self==(void*)0,                        _if_conditional37) {
                            __result17__ = __result_obj__ = (void*)0;
                            return __result17__;
                        }
                        result_23=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode)*(1), "sNode_clone", 3, "struct sNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value28);
                        if(right_value28 && right_value28 != __result_obj__ && !__freed_obj__) { right_value28 = come_decrement_ref_count(right_value28, ((struct sNode*)right_value28)->finalize, ((struct sNode*)right_value28)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value28, right_value28 = (void*)0;
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
right_value32 = (void*)0;
right_value33 = (void*)0;
memset(&result_24, 0, sizeof(struct list$1charph*));
memset(&it_25, 0, sizeof(struct list_item$1charph*));
right_value37 = (void*)0;
                if(_if_conditional49=self==((void*)0),                _if_conditional49) {
                    __result20__ = __result_obj__ = ((void*)0);
                    return __result20__;
                }
                result_24=(struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value33=list$1charph_initialize((struct list$1charph*)come_increment_ref_count(((struct list$1charph*)(right_value32=(struct list$1charph*)come_calloc(1, sizeof(struct list$1charph)*(1), "./comelang2.h", 198, "struct list$1charph"))))))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value32);
                if(right_value32 && right_value32 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value32, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value32, right_value32 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value33);
                if(right_value33 && right_value33 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,right_value33, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value33, right_value33 = (void*)0;
                __freed_obj__ = 0;
                it_25=self->head;
                while(_while_condtional6=it_25!=((void*)0),                _while_condtional6) {
                    list$1charph_add(result_24,(char*)come_increment_ref_count(((char*)(right_value37=string_clone(it_25->item)))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value37);
                    if(right_value37 && right_value37 != __result_obj__ && !__freed_obj__) { right_value37 = come_decrement_ref_count(right_value37, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value37, right_value37 = (void*)0;
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
right_value34 = (void*)0;
memset(&litem_26, 0, sizeof(struct list_item$1charph*));
right_value35 = (void*)0;
memset(&litem_27, 0, sizeof(struct list_item$1charph*));
right_value36 = (void*)0;
memset(&litem_28, 0, sizeof(struct list_item$1charph*));
                        if(_if_conditional50=self->len==0,                        _if_conditional50) {
                            litem_26=(struct list_item$1charph*)come_increment_ref_count(((struct list_item$1charph*)(right_value34=(struct list_item$1charph*)come_calloc(1, sizeof(struct list_item$1charph)*(1), "./comelang2.h", 212, "struct list_item$1charph"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value34);
                            if(right_value34 && right_value34 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1charphp_finalize,right_value34, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value34, right_value34 = (void*)0;
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
                                __right_value_freed_obj[0] = right_value35, right_value35 = (void*)0;
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
                                __right_value_freed_obj[0] = right_value36, right_value36 = (void*)0;
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
_Bool _if_conditional95;
struct sGenericsFun* __result26__;
_Bool _if_conditional105;
_Bool _if_conditional106;
struct sGenericsFun* __result27__;
struct sGenericsFun* __result28__;
struct sGenericsFun* __result29__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&hash_37, 0, sizeof(unsigned int));
memset(&it_38, 0, sizeof(unsigned int));
            hash_37=string_get_hash_key(((char*)key))%self->size;
            it_38=hash_37;
            while(_while_condtional7=(_Bool)1,            _while_condtional7) {
                if(_if_conditional94=self->item_existance[it_38],                _if_conditional94) {
                    if(_if_conditional95=string_equals(self->keys[it_38],key),                    _if_conditional95) {
                        __result26__ = __result_obj__ = self->items[it_38];
                        if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result26__;
                    }
                    it_38++;
                    if(_if_conditional105=it_38>=self->size,                    _if_conditional105) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional106=it_38==hash_37,                        _if_conditional106) {
                            __result27__ = __result_obj__ = default_value;
                            if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result27__;
                        }
                    }
                }
                else {
                    __result28__ = __result_obj__ = default_value;
                    if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result28__;
                }
            }
            __result29__ = __result_obj__ = default_value;
            if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result29__;
            if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional96=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional96) {
                                if(self->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional97=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional97) {
                                if(self->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional98=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional98) {
                                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional99=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional99) {
                                if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional100=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional100) {
                                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional101) {
                                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional102) {
                                if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional103) {
                                if(self->mBlock && !__freed_obj__) { self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional104) {
                                if(self->mGenericsSName && !__freed_obj__) { self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
void* right_value51;
void* right_value52;
struct sFun* __result35__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_40, 0, sizeof(struct sFun*));
memset(&hash_41, 0, sizeof(unsigned int));
memset(&it_42, 0, sizeof(unsigned int));
right_value51 = (void*)0;
right_value52 = (void*)0;
                memset(&default_value_40,0,sizeof(struct sFun*));
                hash_41=string_get_hash_key(((char*)key))%self->size;
                it_42=hash_41;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional109=self->item_existance[it_42],                    _if_conditional109) {
                        if(_if_conditional110=string_equals(self->keys[it_42],key),                        _if_conditional110) {
                            __result31__ = __result_obj__ = self->items[it_42];
                            if(default_value_40 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0); }
                            return __result31__;
                        }
                        it_42++;
                        if(_if_conditional126=it_42>=self->size,                        _if_conditional126) {
                            it_42=0;
                        }
                        else {
                            if(_if_conditional127=it_42==hash_41,                            _if_conditional127) {
                                __result32__ = __result_obj__ = default_value_40;
                                if(default_value_40 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result32__;
                            }
                        }
                    }
                    else {
                        __result33__ = __result_obj__ = default_value_40;
                        if(default_value_40 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result33__;
                    }
                }
                __result35__ = __result_obj__ = ((struct optional$2sFunphbool*)(right_value52=optional$2sFunphbool_initialize(((struct optional$2sFunphbool*)(right_value51=(struct optional$2sFunphbool*)come_calloc(1, sizeof(struct optional$2sFunphbool)*(1), "./comelang2.h", 1630, "struct optional$2sFunphbool"))),(struct sFun*)come_increment_ref_count(default_value_40),(_Bool)0)));
                if(default_value_40 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51);
                if(right_value51 && right_value51 != __result_obj__ && !__freed_obj__) { right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value51, right_value51 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value52);
                if(right_value52 && right_value52 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value52, right_value52 = (void*)0;
                __freed_obj__ = 0;
                return __result35__;
                if(default_value_40 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_40, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
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
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional111=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional111) {
                                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional112=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional112) {
                                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional113=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional113) {
                                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional114=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional114) {
                                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional115=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional115) {
                                    if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional116=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional116) {
                                    if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional117=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional117) {
                                    if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional120=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional120) {
                                    if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional121=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional121) {
                                    if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional122=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional122) {
                                    if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional123=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional123) {
                                    if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional124=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional124) {
                                    if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional125=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional125) {
                                    if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional118;
_Bool _if_conditional119;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional118=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional118) {
                                            if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional119=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional119) {
                                            if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* __dec_obj30;
struct optional$2sFunphbool* __result34__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj30=self->v1;
                    self->v1=(struct sFun*)come_increment_ref_count(v1);
                    if(__dec_obj30) { come_call_finalizer(sFun_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->v2=v2;
                    __result34__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result34__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional128;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional128=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional128) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional130;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional130=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional130) {
                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional135;
_Bool _if_conditional136;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional135=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional135) {
                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional136=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional136) {
                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional137;
struct list_item$1sTypeph* it_56;
int i_57;
_Bool _while_condtional9;
_Bool _if_conditional138;
struct sType* __result36__;
struct sType* default_value_58;
struct sType* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_56, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_57, 0, sizeof(int));
memset(&default_value_58, 0, sizeof(struct sType*));
            if(_if_conditional137=position<0,            _if_conditional137) {
                position+=self->len;
            }
            it_56=self->head;
            i_57=0;
            while(_while_condtional9=it_56!=((void*)0),            _while_condtional9) {
                if(_if_conditional138=position==i_57,                _if_conditional138) {
                    __result36__ = __result_obj__ = it_56->item;
                    return __result36__;
                }
                it_56=it_56->next;
                i_57++;
            }
            memset(&default_value_58,0,sizeof(struct sType*));
            __result37__ = __result_obj__ = default_value_58;
            if(default_value_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result37__;
            if(default_value_58 && !__freed_obj__) { come_call_finalizer(sType_finalize,default_value_58, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static struct list$1CVALUEph* list$1CVALUEph_push_back(struct list$1CVALUEph* self, struct CVALUE* item){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional142;
void* right_value88;
struct list_item$1CVALUEph* litem_62;
struct CVALUE* __dec_obj41;
_Bool _if_conditional144;
void* right_value89;
struct list_item$1CVALUEph* litem_63;
struct CVALUE* __dec_obj42;
void* right_value90;
struct list_item$1CVALUEph* litem_64;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result38__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value88 = (void*)0;
memset(&litem_62, 0, sizeof(struct list_item$1CVALUEph*));
right_value89 = (void*)0;
memset(&litem_63, 0, sizeof(struct list_item$1CVALUEph*));
right_value90 = (void*)0;
memset(&litem_64, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional142=self->len==0,            _if_conditional142) {
                litem_62=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value88=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
                if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value88, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value88, right_value88 = (void*)0;
                __freed_obj__ = 0;
                litem_62->prev=((void*)0);
                litem_62->next=((void*)0);
                __dec_obj41=litem_62->item;
                litem_62->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_62;
                self->head=litem_62;
            }
            else {
                if(_if_conditional144=self->len==1,                _if_conditional144) {
                    litem_63=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value89=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
                    if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value89, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value89, right_value89 = (void*)0;
                    __freed_obj__ = 0;
                    litem_63->prev=self->head;
                    litem_63->next=((void*)0);
                    __dec_obj42=litem_63->item;
                    litem_63->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_63;
                    self->head->next=litem_63;
                }
                else {
                    litem_64=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value90=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 302, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                    if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value90, right_value90 = (void*)0;
                    __freed_obj__ = 0;
                    litem_64->prev=self->tail;
                    litem_64->next=((void*)0);
                    __dec_obj43=litem_64->item;
                    litem_64->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj43) { come_call_finalizer(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail->next=litem_64;
                    self->tail=litem_64;
                }
            }
            self->len++;
            __result38__ = __result_obj__ = self;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result38__;
            if(item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,item, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void list_item$1CVALUEphp_finalize(struct list_item$1CVALUEph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional143;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional143=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional143) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value91;
char* __dec_obj44;
struct sNullNode* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value91 = (void*)0;
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value91=__builtin_string(info->sname))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { right_value91 = come_decrement_ref_count(right_value91, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value91, right_value91 = (void*)0;
    __freed_obj__ = 0;
    __result40__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result40__;
    if(self && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNullNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result41__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result41__ = (_Bool)0;
    return __result41__;
}

char* sNullNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value92;
char* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value92 = (void*)0;
    __result42__ = __result_obj__ = ((char*)(right_value92=__builtin_string("sNullNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { right_value92 = come_decrement_ref_count(right_value92, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value92, right_value92 = (void*)0;
    __freed_obj__ = 0;
    return __result42__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value93;
struct CVALUE* come_value_65;
void* right_value94;
char* __dec_obj45;
void* right_value95;
void* right_value96;
struct sType* __dec_obj46;
_Bool __result43__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value93 = (void*)0;
memset(&come_value_65, 0, sizeof(struct CVALUE*));
right_value94 = (void*)0;
right_value95 = (void*)0;
right_value96 = (void*)0;
    come_value_65=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value93=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 150, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value93, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93, right_value93 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj45=come_value_65->c_value;
    come_value_65->c_value=(char*)come_increment_ref_count(((char*)(right_value94=xsprintf("((void*)0)"))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94, right_value94 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj46=come_value_65->type;
    come_value_65->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value96=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value95=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 153, "struct sType")))),"void*",(_Bool)0,info))));
    if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95, right_value95 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value96, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value96, right_value96 = (void*)0;
    __freed_obj__ = 0;
    come_value_65->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_65->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_65));
    __result43__ = (_Bool)1;
    if(come_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result43__;
    if(come_value_65 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_65, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNullNode_sline(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result44__ = self->sline;
    return __result44__;
}

char* sNullNode_sname(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value97;
char* __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value97 = (void*)0;
    __result45__ = __result_obj__ = ((char*)(right_value97=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { right_value97 = come_decrement_ref_count(right_value97, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97, right_value97 = (void*)0;
    __freed_obj__ = 0;
    return __result45__;
}

struct sNode* create_null_object(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value98;
void* right_value99;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value102;
struct sNode* __result48__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value98 = (void*)0;
right_value99 = (void*)0;
right_value102 = (void*)0;
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 175, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value99=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value98=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 175, "struct sNullNode")))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNullNode_sline;
    _inf_value1->sname=(void*)sNullNode_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result48__ = __result_obj__ = ((struct sNode*)(right_value102=_inf_value1));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value98, right_value98 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value99, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value99, right_value99 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value102);
    if(right_value102 && right_value102 != __result_obj__ && !__freed_obj__) { right_value102 = come_decrement_ref_count(right_value102, ((struct sNode*)right_value102)->finalize, ((struct sNode*)right_value102)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value102, right_value102 = (void*)0;
    __freed_obj__ = 0;
    return __result48__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value103;
char* __dec_obj48;
struct sNilNode* __result49__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value103 = (void*)0;
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value103=__builtin_string(info->sname))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value103);
    if(right_value103 && right_value103 != __result_obj__ && !__freed_obj__) { right_value103 = come_decrement_ref_count(right_value103, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value103, right_value103 = (void*)0;
    __freed_obj__ = 0;
    __result49__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    return __result49__;
    if(self && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
}

_Bool sNilNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result50__ = (_Bool)0;
    return __result50__;
}

char* sNilNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value104;
char* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value104 = (void*)0;
    __result51__ = __result_obj__ = ((char*)(right_value104=__builtin_string("sNilNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value104, right_value104 = (void*)0;
    __freed_obj__ = 0;
    return __result51__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value105;
struct CVALUE* come_value_67;
void* right_value106;
char* __dec_obj49;
void* right_value107;
void* right_value108;
struct sType* __dec_obj50;
_Bool __result52__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value105 = (void*)0;
memset(&come_value_67, 0, sizeof(struct CVALUE*));
right_value106 = (void*)0;
right_value107 = (void*)0;
right_value108 = (void*)0;
    come_value_67=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value105=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 205, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value105, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value105, right_value105 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj49=come_value_67->c_value;
    come_value_67->c_value=(char*)come_increment_ref_count(((char*)(right_value106=xsprintf("((void*)0)"))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106, right_value106 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj50=come_value_67->type;
    come_value_67->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value108=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value107=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 208, "struct sType")))),"void*",(_Bool)0,info))));
    if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107, right_value107 = (void*)0;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value108, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value108, right_value108 = (void*)0;
    __freed_obj__ = 0;
    come_value_67->type->mNullValue=(_Bool)1;
    come_value_67->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_67->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_67));
    __result52__ = (_Bool)1;
    if(come_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result52__;
    if(come_value_67 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_67, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNilNode_sline(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result53__ = self->sline;
    return __result53__;
}

char* sNilNode_sname(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value109;
char* __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value109 = (void*)0;
    __result54__ = __result_obj__ = ((char*)(right_value109=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { right_value109 = come_decrement_ref_count(right_value109, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109, right_value109 = (void*)0;
    __freed_obj__ = 0;
    return __result54__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value115;
char* __dec_obj52;
void* right_value116;
struct sNode* __dec_obj53;
void* right_value117;
struct sNode* __dec_obj54;
struct sAddNode* __result58__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value115 = (void*)0;
right_value116 = (void*)0;
right_value117 = (void*)0;
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value115=__builtin_string(info->sname))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value115);
    if(right_value115 && right_value115 != __result_obj__ && !__freed_obj__) { right_value115 = come_decrement_ref_count(right_value115, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value115, right_value115 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj53=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value116=sNode_clone(left))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value116);
    if(right_value116 && right_value116 != __result_obj__ && !__freed_obj__) { right_value116 = come_decrement_ref_count(right_value116, ((struct sNode*)right_value116)->finalize, ((struct sNode*)right_value116)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value116, right_value116 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj54=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value117=sNode_clone(right))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, ((struct sNode*)right_value117)->finalize, ((struct sNode*)right_value117)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value117, right_value117 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __result58__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result58__;
    if(self && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAddNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result59__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result59__ = (_Bool)0;
    return __result59__;
}

char* sAddNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value118;
char* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value118 = (void*)0;
    __result60__ = __result_obj__ = ((char*)(right_value118=__builtin_string("sAddNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value118, right_value118 = (void*)0;
    __freed_obj__ = 0;
    return __result60__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_69;
_Bool _if_conditional158;
_Bool __result61__;
void* right_value119;
struct CVALUE* left_value_70;
struct sNode* right_node_71;
_Bool _if_conditional159;
_Bool __result62__;
void* right_value120;
struct CVALUE* right_value_72;
struct sType* type_73;
char* fun_name_74;
_Bool calling_fun_75;
_Bool _if_conditional160;
_Bool _if_conditional161;
void* right_value121;
struct CVALUE* come_value_76;
void* right_value122;
char* __dec_obj55;
void* right_value123;
struct sType* __dec_obj56;
_Bool __result63__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_69, 0, sizeof(struct sNode*));
right_value119 = (void*)0;
memset(&left_value_70, 0, sizeof(struct CVALUE*));
memset(&right_node_71, 0, sizeof(struct sNode*));
right_value120 = (void*)0;
memset(&right_value_72, 0, sizeof(struct CVALUE*));
memset(&type_73, 0, sizeof(struct sType*));
memset(&fun_name_74, 0, sizeof(char*));
memset(&calling_fun_75, 0, sizeof(_Bool));
right_value121 = (void*)0;
memset(&come_value_76, 0, sizeof(struct CVALUE*));
right_value122 = (void*)0;
right_value123 = (void*)0;
    left_node_69=self->mLeft;
    if(_if_conditional158=!node_compile(left_node_69,info),    _if_conditional158) {
        __result61__ = (_Bool)0;
        return __result61__;
    }
    left_value_70=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value119=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value119, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value119, right_value119 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_71=self->mRight;
    if(_if_conditional159=!node_compile(right_node_71,info),    _if_conditional159) {
        __result62__ = (_Bool)0;
        if(left_value_70 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result62__;
    }
    right_value_72=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value120=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value120, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120, right_value120 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_73=(struct sType*)come_increment_ref_count(left_value_70->type);
    fun_name_74="operator_add";
    if(_if_conditional160=self->mQuote,    _if_conditional160) {
        calling_fun_75=(_Bool)0;
    }
    else {
        calling_fun_75=operator_overload_fun(type_73,fun_name_74,left_value_70,right_value_72,info);
    }
    if(_if_conditional161=!calling_fun_75,    _if_conditional161) {
        come_value_76=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 301, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
        if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value121, right_value121 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj55=come_value_76->c_value;
        come_value_76->c_value=(char*)come_increment_ref_count(((char*)(right_value122=xsprintf("%s+%s",left_value_70->c_value,right_value_72->c_value))));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
        if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { right_value122 = come_decrement_ref_count(right_value122, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value122, right_value122 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj56=come_value_76->type;
        come_value_76->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value123=sType_clone(left_value_70->type))));
        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value123, right_value123 = (void*)0;
        __freed_obj__ = 0;
        come_value_76->type->mHeap=(_Bool)0;
        come_value_76->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_76->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_76));
        if(come_value_76 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_76, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result63__ = (_Bool)1;
    if(left_value_70 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_72 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_73 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_73, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result63__;
    if(left_value_70 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_70, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_72 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_72, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_73 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_73, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAddNode_sline(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result64__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result64__ = self->sline;
    return __result64__;
}

char* sAddNode_sname(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value124;
char* __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value124 = (void*)0;
    __result65__ = __result_obj__ = ((char*)(right_value124=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
    if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value124, right_value124 = (void*)0;
    __freed_obj__ = 0;
    return __result65__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value125;
char* __dec_obj57;
void* right_value126;
struct sNode* __dec_obj58;
void* right_value127;
struct sNode* __dec_obj59;
struct sSubNode* __result66__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value125 = (void*)0;
right_value126 = (void*)0;
right_value127 = (void*)0;
    self->sline=info->sline;
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value125=__builtin_string(info->sname))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
    if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { right_value125 = come_decrement_ref_count(right_value125, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value125, right_value125 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj58=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value126=sNode_clone(left))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, ((struct sNode*)right_value126)->finalize, ((struct sNode*)right_value126)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value126, right_value126 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj59=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value127=sNode_clone(right))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, ((struct sNode*)right_value127)->finalize, ((struct sNode*)right_value127)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value127, right_value127 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __result66__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result66__;
    if(self && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sSubNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result67__ = (_Bool)0;
    return __result67__;
}

char* sSubNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value128;
char* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value128 = (void*)0;
    __result68__ = __result_obj__ = ((char*)(right_value128=__builtin_string("sSubNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value128, right_value128 = (void*)0;
    __freed_obj__ = 0;
    return __result68__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_77;
_Bool _if_conditional165;
_Bool __result69__;
void* right_value129;
struct CVALUE* left_value_78;
struct sNode* right_node_79;
_Bool _if_conditional166;
_Bool __result70__;
void* right_value130;
struct CVALUE* right_value_80;
struct sType* type_81;
char* fun_name_82;
_Bool calling_fun_83;
_Bool _if_conditional167;
_Bool _if_conditional168;
void* right_value131;
struct CVALUE* come_value_84;
void* right_value132;
char* __dec_obj60;
void* right_value133;
struct sType* __dec_obj61;
_Bool __result71__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_77, 0, sizeof(struct sNode*));
right_value129 = (void*)0;
memset(&left_value_78, 0, sizeof(struct CVALUE*));
memset(&right_node_79, 0, sizeof(struct sNode*));
right_value130 = (void*)0;
memset(&right_value_80, 0, sizeof(struct CVALUE*));
memset(&type_81, 0, sizeof(struct sType*));
memset(&fun_name_82, 0, sizeof(char*));
memset(&calling_fun_83, 0, sizeof(_Bool));
right_value131 = (void*)0;
memset(&come_value_84, 0, sizeof(struct CVALUE*));
right_value132 = (void*)0;
right_value133 = (void*)0;
    left_node_77=self->mLeft;
    if(_if_conditional165=!node_compile(left_node_77,info),    _if_conditional165) {
        __result69__ = (_Bool)0;
        return __result69__;
    }
    left_value_78=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value129=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value129, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value129, right_value129 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_79=self->mRight;
    if(_if_conditional166=!node_compile(right_node_79,info),    _if_conditional166) {
        __result70__ = (_Bool)0;
        if(left_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result70__;
    }
    right_value_80=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value130=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value130, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value130, right_value130 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_81=(struct sType*)come_increment_ref_count(left_value_78->type);
    fun_name_82="operator_sub";
    if(_if_conditional167=self->mQuote,    _if_conditional167) {
        calling_fun_83=(_Bool)0;
    }
    else {
        calling_fun_83=operator_overload_fun(type_81,fun_name_82,left_value_78,right_value_80,info);
    }
    if(_if_conditional168=!calling_fun_83,    _if_conditional168) {
        come_value_84=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 392, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
        if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value131, right_value131 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj60=come_value_84->c_value;
        come_value_84->c_value=(char*)come_increment_ref_count(((char*)(right_value132=xsprintf("%s-%s",left_value_78->c_value,right_value_80->c_value))));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
        if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { right_value132 = come_decrement_ref_count(right_value132, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value132, right_value132 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj61=come_value_84->type;
        come_value_84->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value133=sType_clone(left_value_78->type))));
        if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value133, right_value133 = (void*)0;
        __freed_obj__ = 0;
        come_value_84->type->mHeap=(_Bool)0;
        come_value_84->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_84->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_84));
        if(come_value_84 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_84, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result71__ = (_Bool)1;
    if(left_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_81, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result71__;
    if(left_value_78 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_78, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_80 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_80, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_81 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_81, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sSubNode_sline(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result72__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result72__ = self->sline;
    return __result72__;
}

char* sSubNode_sname(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value134;
char* __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value134 = (void*)0;
    __result73__ = __result_obj__ = ((char*)(right_value134=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
    if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value134, right_value134 = (void*)0;
    __freed_obj__ = 0;
    return __result73__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value135;
char* __dec_obj62;
void* right_value136;
struct sNode* __dec_obj63;
void* right_value137;
struct sNode* __dec_obj64;
struct sMultNode* __result74__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value135 = (void*)0;
right_value136 = (void*)0;
right_value137 = (void*)0;
    self->sline=info->sline;
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value135=__builtin_string(info->sname))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
    if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { right_value135 = come_decrement_ref_count(right_value135, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value135, right_value135 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj63=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value136=sNode_clone(left))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, ((struct sNode*)right_value136)->finalize, ((struct sNode*)right_value136)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value136, right_value136 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj64=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value137=sNode_clone(right))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, ((struct sNode*)right_value137)->finalize, ((struct sNode*)right_value137)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value137, right_value137 = (void*)0;
    __freed_obj__ = 0;
    __result74__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result74__;
    if(self && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sMultNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result75__ = (_Bool)0;
    return __result75__;
}

char* sMultNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value138;
char* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value138 = (void*)0;
    __result76__ = __result_obj__ = ((char*)(right_value138=__builtin_string("sMultNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value138, right_value138 = (void*)0;
    __freed_obj__ = 0;
    return __result76__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_85;
_Bool _if_conditional172;
_Bool __result77__;
void* right_value139;
struct CVALUE* left_value_86;
struct sNode* right_node_87;
_Bool _if_conditional173;
_Bool __result78__;
void* right_value140;
struct CVALUE* right_value_88;
struct sType* type_89;
char* fun_name_90;
_Bool calling_fun_91;
_Bool _if_conditional174;
_Bool _if_conditional175;
void* right_value141;
struct CVALUE* come_value_92;
void* right_value142;
char* __dec_obj65;
void* right_value143;
struct sType* __dec_obj66;
_Bool __result79__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_85, 0, sizeof(struct sNode*));
right_value139 = (void*)0;
memset(&left_value_86, 0, sizeof(struct CVALUE*));
memset(&right_node_87, 0, sizeof(struct sNode*));
right_value140 = (void*)0;
memset(&right_value_88, 0, sizeof(struct CVALUE*));
memset(&type_89, 0, sizeof(struct sType*));
memset(&fun_name_90, 0, sizeof(char*));
memset(&calling_fun_91, 0, sizeof(_Bool));
right_value141 = (void*)0;
memset(&come_value_92, 0, sizeof(struct CVALUE*));
right_value142 = (void*)0;
right_value143 = (void*)0;
    left_node_85=self->mLeft;
    if(_if_conditional172=!node_compile(left_node_85,info),    _if_conditional172) {
        __result77__ = (_Bool)0;
        return __result77__;
    }
    left_value_86=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value139=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value139, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value139, right_value139 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_87=self->mRight;
    if(_if_conditional173=!node_compile(right_node_87,info),    _if_conditional173) {
        __result78__ = (_Bool)0;
        if(left_value_86 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_86, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result78__;
    }
    right_value_88=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value140=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value140, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140, right_value140 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_89=(struct sType*)come_increment_ref_count(left_value_86->type);
    fun_name_90="operator_mult";
    if(_if_conditional174=self->mQuote,    _if_conditional174) {
        calling_fun_91=(_Bool)0;
    }
    else {
        calling_fun_91=operator_overload_fun(type_89,fun_name_90,left_value_86,right_value_88,info);
    }
    if(_if_conditional175=!calling_fun_91,    _if_conditional175) {
        come_value_92=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 483, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
        if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value141, right_value141 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj65=come_value_92->c_value;
        come_value_92->c_value=(char*)come_increment_ref_count(((char*)(right_value142=xsprintf("%s*%s",left_value_86->c_value,right_value_88->c_value))));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
        if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { right_value142 = come_decrement_ref_count(right_value142, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value142, right_value142 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj66=come_value_92->type;
        come_value_92->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value143=sType_clone(left_value_86->type))));
        if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value143, right_value143 = (void*)0;
        __freed_obj__ = 0;
        come_value_92->type->mHeap=(_Bool)0;
        come_value_92->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_92->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_92));
        if(come_value_92 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_92, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result79__ = (_Bool)1;
    if(left_value_86 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_88 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_89 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result79__;
    if(left_value_86 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_86, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_88 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_88, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_89 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_89, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sMultNode_sline(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result80__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result80__ = self->sline;
    return __result80__;
}

char* sMultNode_sname(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value144;
char* __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value144 = (void*)0;
    __result81__ = __result_obj__ = ((char*)(right_value144=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
    if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value144, right_value144 = (void*)0;
    __freed_obj__ = 0;
    return __result81__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value145;
char* __dec_obj67;
void* right_value146;
struct sNode* __dec_obj68;
void* right_value147;
struct sNode* __dec_obj69;
struct sDivNode* __result82__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value145 = (void*)0;
right_value146 = (void*)0;
right_value147 = (void*)0;
    self->sline=info->sline;
    __dec_obj67=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value145=__builtin_string(info->sname))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
    if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { right_value145 = come_decrement_ref_count(right_value145, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value145, right_value145 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj68=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value146=sNode_clone(left))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, ((struct sNode*)right_value146)->finalize, ((struct sNode*)right_value146)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value146, right_value146 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj69=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value147=sNode_clone(right))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, ((struct sNode*)right_value147)->finalize, ((struct sNode*)right_value147)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value147, right_value147 = (void*)0;
    __freed_obj__ = 0;
    __result82__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result82__;
    if(self && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sDivNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result83__ = (_Bool)0;
    return __result83__;
}

char* sDivNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value148;
char* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value148 = (void*)0;
    __result84__ = __result_obj__ = ((char*)(right_value148=__builtin_string("sDivNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value148, right_value148 = (void*)0;
    __freed_obj__ = 0;
    return __result84__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_93;
_Bool _if_conditional179;
_Bool __result85__;
void* right_value149;
struct CVALUE* left_value_94;
struct sNode* right_node_95;
_Bool _if_conditional180;
_Bool __result86__;
void* right_value150;
struct CVALUE* right_value_96;
struct sType* type_97;
char* fun_name_98;
_Bool calling_fun_99;
_Bool _if_conditional181;
_Bool _if_conditional182;
void* right_value151;
struct CVALUE* come_value_100;
void* right_value152;
char* __dec_obj70;
void* right_value153;
struct sType* __dec_obj71;
_Bool __result87__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_93, 0, sizeof(struct sNode*));
right_value149 = (void*)0;
memset(&left_value_94, 0, sizeof(struct CVALUE*));
memset(&right_node_95, 0, sizeof(struct sNode*));
right_value150 = (void*)0;
memset(&right_value_96, 0, sizeof(struct CVALUE*));
memset(&type_97, 0, sizeof(struct sType*));
memset(&fun_name_98, 0, sizeof(char*));
memset(&calling_fun_99, 0, sizeof(_Bool));
right_value151 = (void*)0;
memset(&come_value_100, 0, sizeof(struct CVALUE*));
right_value152 = (void*)0;
right_value153 = (void*)0;
    left_node_93=self->mLeft;
    if(_if_conditional179=!node_compile(left_node_93,info),    _if_conditional179) {
        __result85__ = (_Bool)0;
        return __result85__;
    }
    left_value_94=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value149=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value149, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value149, right_value149 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_95=self->mRight;
    if(_if_conditional180=!node_compile(right_node_95,info),    _if_conditional180) {
        __result86__ = (_Bool)0;
        if(left_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result86__;
    }
    right_value_96=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value150=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value150, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value150, right_value150 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_97=(struct sType*)come_increment_ref_count(left_value_94->type);
    fun_name_98="operator_div";
    if(_if_conditional181=self->mQuote,    _if_conditional181) {
        calling_fun_99=(_Bool)0;
    }
    else {
        calling_fun_99=operator_overload_fun(type_97,fun_name_98,left_value_94,right_value_96,info);
    }
    if(_if_conditional182=!calling_fun_99,    _if_conditional182) {
        come_value_100=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value151=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 574, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
        if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value151, right_value151 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj70=come_value_100->c_value;
        come_value_100->c_value=(char*)come_increment_ref_count(((char*)(right_value152=xsprintf("%s/%s",left_value_94->c_value,right_value_96->c_value))));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
        if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { right_value152 = come_decrement_ref_count(right_value152, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value152, right_value152 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj71=come_value_100->type;
        come_value_100->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value153=sType_clone(left_value_94->type))));
        if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value153, right_value153 = (void*)0;
        __freed_obj__ = 0;
        come_value_100->type->mHeap=(_Bool)0;
        come_value_100->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_100->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_100));
        if(come_value_100 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_100, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result87__ = (_Bool)1;
    if(left_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result87__;
    if(left_value_94 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_94, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_96 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_96, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_97 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_97, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sDivNode_sline(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result88__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result88__ = self->sline;
    return __result88__;
}

char* sDivNode_sname(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value154;
char* __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value154 = (void*)0;
    __result89__ = __result_obj__ = ((char*)(right_value154=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
    if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value154, right_value154 = (void*)0;
    __freed_obj__ = 0;
    return __result89__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value155;
char* __dec_obj72;
void* right_value156;
struct sNode* __dec_obj73;
void* right_value157;
struct sNode* __dec_obj74;
struct sModNode* __result90__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value155 = (void*)0;
right_value156 = (void*)0;
right_value157 = (void*)0;
    self->sline=info->sline;
    __dec_obj72=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value155=__builtin_string(info->sname))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
    if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { right_value155 = come_decrement_ref_count(right_value155, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value155, right_value155 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj73=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value156=sNode_clone(left))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, ((struct sNode*)right_value156)->finalize, ((struct sNode*)right_value156)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value156, right_value156 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj74=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value157=sNode_clone(right))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, ((struct sNode*)right_value157)->finalize, ((struct sNode*)right_value157)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value157, right_value157 = (void*)0;
    __freed_obj__ = 0;
    __result90__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result90__;
    if(self && !__freed_obj__) { come_call_finalizer(sModNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sModNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result91__ = (_Bool)0;
    return __result91__;
}

char* sModNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value158;
char* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value158 = (void*)0;
    __result92__ = __result_obj__ = ((char*)(right_value158=__builtin_string("sModNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value158, right_value158 = (void*)0;
    __freed_obj__ = 0;
    return __result92__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_101;
_Bool _if_conditional186;
_Bool __result93__;
void* right_value159;
struct CVALUE* left_value_102;
struct sNode* right_node_103;
_Bool _if_conditional187;
_Bool __result94__;
void* right_value160;
struct CVALUE* right_value_104;
struct sType* type_105;
char* fun_name_106;
_Bool calling_fun_107;
_Bool _if_conditional188;
_Bool _if_conditional189;
void* right_value161;
struct CVALUE* come_value_108;
void* right_value162;
char* __dec_obj75;
void* right_value163;
struct sType* __dec_obj76;
_Bool __result95__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_101, 0, sizeof(struct sNode*));
right_value159 = (void*)0;
memset(&left_value_102, 0, sizeof(struct CVALUE*));
memset(&right_node_103, 0, sizeof(struct sNode*));
right_value160 = (void*)0;
memset(&right_value_104, 0, sizeof(struct CVALUE*));
memset(&type_105, 0, sizeof(struct sType*));
memset(&fun_name_106, 0, sizeof(char*));
memset(&calling_fun_107, 0, sizeof(_Bool));
right_value161 = (void*)0;
memset(&come_value_108, 0, sizeof(struct CVALUE*));
right_value162 = (void*)0;
right_value163 = (void*)0;
    left_node_101=self->mLeft;
    if(_if_conditional186=!node_compile(left_node_101,info),    _if_conditional186) {
        __result93__ = (_Bool)0;
        return __result93__;
    }
    left_value_102=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value159=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value159, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value159, right_value159 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_103=self->mRight;
    if(_if_conditional187=!node_compile(right_node_103,info),    _if_conditional187) {
        __result94__ = (_Bool)0;
        if(left_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result94__;
    }
    right_value_104=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value160=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value160, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160, right_value160 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_105=(struct sType*)come_increment_ref_count(left_value_102->type);
    fun_name_106="operator_mod";
    if(_if_conditional188=self->mQuote,    _if_conditional188) {
        calling_fun_107=(_Bool)0;
    }
    else {
        calling_fun_107=operator_overload_fun(type_105,fun_name_106,left_value_102,right_value_104,info);
    }
    if(_if_conditional189=!calling_fun_107,    _if_conditional189) {
        come_value_108=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 665, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
        if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value161, right_value161 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj75=come_value_108->c_value;
        come_value_108->c_value=(char*)come_increment_ref_count(((char*)(right_value162=xsprintf("%s%%%s",left_value_102->c_value,right_value_104->c_value))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
        if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { right_value162 = come_decrement_ref_count(right_value162, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value162, right_value162 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj76=come_value_108->type;
        come_value_108->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value163=sType_clone(left_value_102->type))));
        if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value163, right_value163 = (void*)0;
        __freed_obj__ = 0;
        come_value_108->type->mHeap=(_Bool)0;
        come_value_108->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_108->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_108));
        if(come_value_108 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_108, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result95__ = (_Bool)1;
    if(left_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_105 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_105, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result95__;
    if(left_value_102 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_102, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_104 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_104, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_105 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_105, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sModNode_sline(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result96__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result96__ = self->sline;
    return __result96__;
}

char* sModNode_sname(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value164;
char* __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value164 = (void*)0;
    __result97__ = __result_obj__ = ((char*)(right_value164=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
    if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value164, right_value164 = (void*)0;
    __freed_obj__ = 0;
    return __result97__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value165;
char* __dec_obj77;
void* right_value166;
struct sNode* __dec_obj78;
void* right_value167;
struct sNode* __dec_obj79;
struct sLShiftNode* __result98__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value165 = (void*)0;
right_value166 = (void*)0;
right_value167 = (void*)0;
    self->sline=info->sline;
    __dec_obj77=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value165=__builtin_string(info->sname))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
    if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { right_value165 = come_decrement_ref_count(right_value165, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value165, right_value165 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj78=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value166=sNode_clone(left))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, ((struct sNode*)right_value166)->finalize, ((struct sNode*)right_value166)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value166, right_value166 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj79=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value167=sNode_clone(right))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, ((struct sNode*)right_value167)->finalize, ((struct sNode*)right_value167)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value167, right_value167 = (void*)0;
    __freed_obj__ = 0;
    __result98__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result98__;
    if(self && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLShiftNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result99__ = (_Bool)0;
    return __result99__;
}

char* sLShiftNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value168;
char* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value168 = (void*)0;
    __result100__ = __result_obj__ = ((char*)(right_value168=__builtin_string("sLShiftNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value168, right_value168 = (void*)0;
    __freed_obj__ = 0;
    return __result100__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_109;
_Bool _if_conditional193;
_Bool __result101__;
void* right_value169;
struct CVALUE* left_value_110;
struct sNode* right_node_111;
_Bool _if_conditional194;
_Bool __result102__;
void* right_value170;
struct CVALUE* right_value_112;
struct sType* type_113;
char* fun_name_114;
_Bool calling_fun_115;
_Bool _if_conditional195;
_Bool _if_conditional196;
void* right_value171;
struct CVALUE* come_value_116;
void* right_value172;
char* __dec_obj80;
void* right_value173;
struct sType* __dec_obj81;
_Bool __result103__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_109, 0, sizeof(struct sNode*));
right_value169 = (void*)0;
memset(&left_value_110, 0, sizeof(struct CVALUE*));
memset(&right_node_111, 0, sizeof(struct sNode*));
right_value170 = (void*)0;
memset(&right_value_112, 0, sizeof(struct CVALUE*));
memset(&type_113, 0, sizeof(struct sType*));
memset(&fun_name_114, 0, sizeof(char*));
memset(&calling_fun_115, 0, sizeof(_Bool));
right_value171 = (void*)0;
memset(&come_value_116, 0, sizeof(struct CVALUE*));
right_value172 = (void*)0;
right_value173 = (void*)0;
    left_node_109=self->mLeft;
    if(_if_conditional193=!node_compile(left_node_109,info),    _if_conditional193) {
        __result101__ = (_Bool)0;
        return __result101__;
    }
    left_value_110=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value169=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value169, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value169, right_value169 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_111=self->mRight;
    if(_if_conditional194=!node_compile(right_node_111,info),    _if_conditional194) {
        __result102__ = (_Bool)0;
        if(left_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result102__;
    }
    right_value_112=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value170=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value170, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value170, right_value170 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_113=(struct sType*)come_increment_ref_count(left_value_110->type);
    fun_name_114="operator_lshift";
    if(_if_conditional195=self->mQuote,    _if_conditional195) {
        calling_fun_115=(_Bool)0;
    }
    else {
        calling_fun_115=operator_overload_fun(type_113,fun_name_114,left_value_110,right_value_112,info);
    }
    if(_if_conditional196=!calling_fun_115,    _if_conditional196) {
        come_value_116=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 756, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
        if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value171, right_value171 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj80=come_value_116->c_value;
        come_value_116->c_value=(char*)come_increment_ref_count(((char*)(right_value172=xsprintf("%s<<%s",left_value_110->c_value,right_value_112->c_value))));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
        if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { right_value172 = come_decrement_ref_count(right_value172, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value172, right_value172 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj81=come_value_116->type;
        come_value_116->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value173=sType_clone(left_value_110->type))));
        if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value173, right_value173 = (void*)0;
        __freed_obj__ = 0;
        come_value_116->type->mHeap=(_Bool)0;
        come_value_116->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_116->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_116));
        if(come_value_116 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_116, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result103__ = (_Bool)1;
    if(left_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_113, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result103__;
    if(left_value_110 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_110, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_112 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_112, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_113 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_113, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLShiftNode_sline(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result104__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result104__ = self->sline;
    return __result104__;
}

char* sLShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value174;
char* __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value174 = (void*)0;
    __result105__ = __result_obj__ = ((char*)(right_value174=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
    if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value174, right_value174 = (void*)0;
    __freed_obj__ = 0;
    return __result105__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value175;
char* __dec_obj82;
void* right_value176;
struct sNode* __dec_obj83;
void* right_value177;
struct sNode* __dec_obj84;
struct sRShiftNode* __result106__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value175 = (void*)0;
right_value176 = (void*)0;
right_value177 = (void*)0;
    self->sline=info->sline;
    __dec_obj82=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value175=__builtin_string(info->sname))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
    if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { right_value175 = come_decrement_ref_count(right_value175, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value175, right_value175 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value176=sNode_clone(left))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, ((struct sNode*)right_value176)->finalize, ((struct sNode*)right_value176)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value176, right_value176 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj84=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value177=sNode_clone(right))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, ((struct sNode*)right_value177)->finalize, ((struct sNode*)right_value177)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value177, right_value177 = (void*)0;
    __freed_obj__ = 0;
    __result106__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result106__;
    if(self && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sRShiftNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result107__ = (_Bool)0;
    return __result107__;
}

char* sRShiftNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value178;
char* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value178 = (void*)0;
    __result108__ = __result_obj__ = ((char*)(right_value178=__builtin_string("sRShiftNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value178, right_value178 = (void*)0;
    __freed_obj__ = 0;
    return __result108__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_117;
_Bool _if_conditional200;
_Bool __result109__;
void* right_value179;
struct CVALUE* left_value_118;
struct sNode* right_node_119;
_Bool _if_conditional201;
_Bool __result110__;
void* right_value180;
struct CVALUE* right_value_120;
struct sType* type_121;
char* fun_name_122;
_Bool calling_fun_123;
_Bool _if_conditional202;
_Bool _if_conditional203;
void* right_value181;
struct CVALUE* come_value_124;
void* right_value182;
char* __dec_obj85;
void* right_value183;
struct sType* __dec_obj86;
_Bool __result111__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_117, 0, sizeof(struct sNode*));
right_value179 = (void*)0;
memset(&left_value_118, 0, sizeof(struct CVALUE*));
memset(&right_node_119, 0, sizeof(struct sNode*));
right_value180 = (void*)0;
memset(&right_value_120, 0, sizeof(struct CVALUE*));
memset(&type_121, 0, sizeof(struct sType*));
memset(&fun_name_122, 0, sizeof(char*));
memset(&calling_fun_123, 0, sizeof(_Bool));
right_value181 = (void*)0;
memset(&come_value_124, 0, sizeof(struct CVALUE*));
right_value182 = (void*)0;
right_value183 = (void*)0;
    left_node_117=self->mLeft;
    if(_if_conditional200=!node_compile(left_node_117,info),    _if_conditional200) {
        __result109__ = (_Bool)0;
        return __result109__;
    }
    left_value_118=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value179=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value179, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value179, right_value179 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_119=self->mRight;
    if(_if_conditional201=!node_compile(right_node_119,info),    _if_conditional201) {
        __result110__ = (_Bool)0;
        if(left_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result110__;
    }
    right_value_120=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value180=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value180, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180, right_value180 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_121=(struct sType*)come_increment_ref_count(left_value_118->type);
    fun_name_122="operator_rshift";
    if(_if_conditional202=self->mQuote,    _if_conditional202) {
        calling_fun_123=(_Bool)0;
    }
    else {
        calling_fun_123=operator_overload_fun(type_121,fun_name_122,left_value_118,right_value_120,info);
    }
    if(_if_conditional203=!calling_fun_123,    _if_conditional203) {
        come_value_124=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 847, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
        if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value181, right_value181 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj85=come_value_124->c_value;
        come_value_124->c_value=(char*)come_increment_ref_count(((char*)(right_value182=xsprintf("%s>>%s",left_value_118->c_value,right_value_120->c_value))));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
        if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { right_value182 = come_decrement_ref_count(right_value182, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value182, right_value182 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj86=come_value_124->type;
        come_value_124->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value183=sType_clone(left_value_118->type))));
        if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value183, right_value183 = (void*)0;
        __freed_obj__ = 0;
        come_value_124->type->mHeap=(_Bool)0;
        come_value_124->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_124->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_124));
        if(come_value_124 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_124, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result111__ = (_Bool)1;
    if(left_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_121 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_121, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result111__;
    if(left_value_118 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_118, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_120 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_120, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_121 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_121, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sRShiftNode_sline(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result112__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result112__ = self->sline;
    return __result112__;
}

char* sRShiftNode_sname(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value184;
char* __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value184 = (void*)0;
    __result113__ = __result_obj__ = ((char*)(right_value184=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
    if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value184, right_value184 = (void*)0;
    __freed_obj__ = 0;
    return __result113__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value185;
char* __dec_obj87;
void* right_value186;
struct sNode* __dec_obj88;
void* right_value187;
struct sNode* __dec_obj89;
struct sGtEqNode* __result114__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value185 = (void*)0;
right_value186 = (void*)0;
right_value187 = (void*)0;
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value185=__builtin_string(info->sname))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
    if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { right_value185 = come_decrement_ref_count(right_value185, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value185, right_value185 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value186=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, ((struct sNode*)right_value186)->finalize, ((struct sNode*)right_value186)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value186, right_value186 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj89=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value187=sNode_clone(right))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, ((struct sNode*)right_value187)->finalize, ((struct sNode*)right_value187)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value187, right_value187 = (void*)0;
    __freed_obj__ = 0;
    __result114__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result114__;
    if(self && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sGtEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result115__ = (_Bool)0;
    return __result115__;
}

char* sGtEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value188;
char* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value188 = (void*)0;
    __result116__ = __result_obj__ = ((char*)(right_value188=__builtin_string("sGtEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value188, right_value188 = (void*)0;
    __freed_obj__ = 0;
    return __result116__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_125;
_Bool _if_conditional207;
_Bool __result117__;
void* right_value189;
struct CVALUE* left_value_126;
struct sNode* right_node_127;
_Bool _if_conditional208;
_Bool __result118__;
void* right_value190;
struct CVALUE* right_value_128;
struct sType* type_129;
char* fun_name_130;
_Bool calling_fun_131;
_Bool _if_conditional209;
_Bool _if_conditional210;
void* right_value191;
struct CVALUE* come_value_132;
void* right_value192;
char* __dec_obj90;
void* right_value193;
struct sType* __dec_obj91;
_Bool __result119__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_125, 0, sizeof(struct sNode*));
right_value189 = (void*)0;
memset(&left_value_126, 0, sizeof(struct CVALUE*));
memset(&right_node_127, 0, sizeof(struct sNode*));
right_value190 = (void*)0;
memset(&right_value_128, 0, sizeof(struct CVALUE*));
memset(&type_129, 0, sizeof(struct sType*));
memset(&fun_name_130, 0, sizeof(char*));
memset(&calling_fun_131, 0, sizeof(_Bool));
right_value191 = (void*)0;
memset(&come_value_132, 0, sizeof(struct CVALUE*));
right_value192 = (void*)0;
right_value193 = (void*)0;
    left_node_125=self->mLeft;
    if(_if_conditional207=!node_compile(left_node_125,info),    _if_conditional207) {
        __result117__ = (_Bool)0;
        return __result117__;
    }
    left_value_126=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value189=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value189, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value189, right_value189 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_127=self->mRight;
    if(_if_conditional208=!node_compile(right_node_127,info),    _if_conditional208) {
        __result118__ = (_Bool)0;
        if(left_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result118__;
    }
    right_value_128=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value190=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value190, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value190, right_value190 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_129=(struct sType*)come_increment_ref_count(left_value_126->type);
    fun_name_130="operator_gteq";
    if(_if_conditional209=self->mQuote,    _if_conditional209) {
        calling_fun_131=(_Bool)0;
    }
    else {
        calling_fun_131=operator_overload_fun(type_129,fun_name_130,left_value_126,right_value_128,info);
    }
    if(_if_conditional210=!calling_fun_131,    _if_conditional210) {
        come_value_132=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 938, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
        if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value191, right_value191 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj90=come_value_132->c_value;
        come_value_132->c_value=(char*)come_increment_ref_count(((char*)(right_value192=xsprintf("%s>=%s",left_value_126->c_value,right_value_128->c_value))));
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
        if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { right_value192 = come_decrement_ref_count(right_value192, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value192, right_value192 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj91=come_value_132->type;
        come_value_132->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value193=sType_clone(left_value_126->type))));
        if(__dec_obj91) { come_call_finalizer(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value193, right_value193 = (void*)0;
        __freed_obj__ = 0;
        come_value_132->type->mHeap=(_Bool)0;
        come_value_132->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_132->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_132));
        if(come_value_132 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_132, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result119__ = (_Bool)1;
    if(left_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_129, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result119__;
    if(left_value_126 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_126, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_128 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_128, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_129 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_129, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sGtEqNode_sline(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result120__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result120__ = self->sline;
    return __result120__;
}

char* sGtEqNode_sname(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value194;
char* __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value194 = (void*)0;
    __result121__ = __result_obj__ = ((char*)(right_value194=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
    if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value194, right_value194 = (void*)0;
    __freed_obj__ = 0;
    return __result121__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value195;
char* __dec_obj92;
void* right_value196;
struct sNode* __dec_obj93;
void* right_value197;
struct sNode* __dec_obj94;
struct sLtEqNode* __result122__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value195 = (void*)0;
right_value196 = (void*)0;
right_value197 = (void*)0;
    self->sline=info->sline;
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value195=__builtin_string(info->sname))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
    if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { right_value195 = come_decrement_ref_count(right_value195, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value195, right_value195 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj93=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value196=sNode_clone(left))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, ((struct sNode*)right_value196)->finalize, ((struct sNode*)right_value196)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value196, right_value196 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj94=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value197=sNode_clone(right))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, ((struct sNode*)right_value197)->finalize, ((struct sNode*)right_value197)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value197, right_value197 = (void*)0;
    __freed_obj__ = 0;
    __result122__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result122__;
    if(self && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLtEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result123__ = (_Bool)0;
    return __result123__;
}

char* sLtEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value198;
char* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value198 = (void*)0;
    __result124__ = __result_obj__ = ((char*)(right_value198=__builtin_string("sLtEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value198, right_value198 = (void*)0;
    __freed_obj__ = 0;
    return __result124__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_133;
_Bool _if_conditional214;
_Bool __result125__;
void* right_value199;
struct CVALUE* left_value_134;
struct sNode* right_node_135;
_Bool _if_conditional215;
_Bool __result126__;
void* right_value200;
struct CVALUE* right_value_136;
struct sType* type_137;
char* fun_name_138;
_Bool calling_fun_139;
_Bool _if_conditional216;
_Bool _if_conditional217;
void* right_value201;
struct CVALUE* come_value_140;
void* right_value202;
char* __dec_obj95;
void* right_value203;
struct sType* __dec_obj96;
_Bool __result127__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_133, 0, sizeof(struct sNode*));
right_value199 = (void*)0;
memset(&left_value_134, 0, sizeof(struct CVALUE*));
memset(&right_node_135, 0, sizeof(struct sNode*));
right_value200 = (void*)0;
memset(&right_value_136, 0, sizeof(struct CVALUE*));
memset(&type_137, 0, sizeof(struct sType*));
memset(&fun_name_138, 0, sizeof(char*));
memset(&calling_fun_139, 0, sizeof(_Bool));
right_value201 = (void*)0;
memset(&come_value_140, 0, sizeof(struct CVALUE*));
right_value202 = (void*)0;
right_value203 = (void*)0;
    left_node_133=self->mLeft;
    if(_if_conditional214=!node_compile(left_node_133,info),    _if_conditional214) {
        __result125__ = (_Bool)0;
        return __result125__;
    }
    left_value_134=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value199=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value199, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value199, right_value199 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_135=self->mRight;
    if(_if_conditional215=!node_compile(right_node_135,info),    _if_conditional215) {
        __result126__ = (_Bool)0;
        if(left_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result126__;
    }
    right_value_136=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value200=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value200, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value200, right_value200 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_137=(struct sType*)come_increment_ref_count(left_value_134->type);
    fun_name_138="operator_lteq";
    if(_if_conditional216=self->mQuote,    _if_conditional216) {
        calling_fun_139=(_Bool)0;
    }
    else {
        calling_fun_139=operator_overload_fun(type_137,fun_name_138,left_value_134,right_value_136,info);
    }
    if(_if_conditional217=!calling_fun_139,    _if_conditional217) {
        come_value_140=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1029, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
        if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value201, right_value201 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj95=come_value_140->c_value;
        come_value_140->c_value=(char*)come_increment_ref_count(((char*)(right_value202=xsprintf("%s<=%s",left_value_134->c_value,right_value_136->c_value))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
        if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { right_value202 = come_decrement_ref_count(right_value202, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value202, right_value202 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj96=come_value_140->type;
        come_value_140->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value203=sType_clone(left_value_134->type))));
        if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value203, right_value203 = (void*)0;
        __freed_obj__ = 0;
        come_value_140->type->mHeap=(_Bool)0;
        come_value_140->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_140->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_140));
        if(come_value_140 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_140, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result127__ = (_Bool)1;
    if(left_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_136 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result127__;
    if(left_value_134 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_134, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_136 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_136, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_137 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_137, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLtEqNode_sline(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result128__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result128__ = self->sline;
    return __result128__;
}

char* sLtEqNode_sname(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value204;
char* __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value204 = (void*)0;
    __result129__ = __result_obj__ = ((char*)(right_value204=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
    if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value204, right_value204 = (void*)0;
    __freed_obj__ = 0;
    return __result129__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value205;
char* __dec_obj97;
void* right_value206;
struct sNode* __dec_obj98;
void* right_value207;
struct sNode* __dec_obj99;
struct sLtNode* __result130__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value205 = (void*)0;
right_value206 = (void*)0;
right_value207 = (void*)0;
    self->sline=info->sline;
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value205=__builtin_string(info->sname))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
    if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { right_value205 = come_decrement_ref_count(right_value205, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value205, right_value205 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj98=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value206=sNode_clone(left))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, ((struct sNode*)right_value206)->finalize, ((struct sNode*)right_value206)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value206, right_value206 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj99=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value207=sNode_clone(right))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, ((struct sNode*)right_value207)->finalize, ((struct sNode*)right_value207)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value207, right_value207 = (void*)0;
    __freed_obj__ = 0;
    __result130__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result130__;
    if(self && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sLtNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result131__ = (_Bool)0;
    return __result131__;
}

char* sLtNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value208;
char* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value208 = (void*)0;
    __result132__ = __result_obj__ = ((char*)(right_value208=__builtin_string("sLtNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value208, right_value208 = (void*)0;
    __freed_obj__ = 0;
    return __result132__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_141;
_Bool _if_conditional221;
_Bool __result133__;
void* right_value209;
struct CVALUE* left_value_142;
struct sNode* right_node_143;
_Bool _if_conditional222;
_Bool __result134__;
void* right_value210;
struct CVALUE* right_value_144;
struct sType* type_145;
char* fun_name_146;
_Bool calling_fun_147;
_Bool _if_conditional223;
_Bool _if_conditional224;
void* right_value211;
struct CVALUE* come_value_148;
void* right_value212;
char* __dec_obj100;
void* right_value213;
struct sType* __dec_obj101;
_Bool __result135__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_141, 0, sizeof(struct sNode*));
right_value209 = (void*)0;
memset(&left_value_142, 0, sizeof(struct CVALUE*));
memset(&right_node_143, 0, sizeof(struct sNode*));
right_value210 = (void*)0;
memset(&right_value_144, 0, sizeof(struct CVALUE*));
memset(&type_145, 0, sizeof(struct sType*));
memset(&fun_name_146, 0, sizeof(char*));
memset(&calling_fun_147, 0, sizeof(_Bool));
right_value211 = (void*)0;
memset(&come_value_148, 0, sizeof(struct CVALUE*));
right_value212 = (void*)0;
right_value213 = (void*)0;
    left_node_141=self->mLeft;
    if(_if_conditional221=!node_compile(left_node_141,info),    _if_conditional221) {
        __result133__ = (_Bool)0;
        return __result133__;
    }
    left_value_142=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value209=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value209, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value209, right_value209 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_143=self->mRight;
    if(_if_conditional222=!node_compile(right_node_143,info),    _if_conditional222) {
        __result134__ = (_Bool)0;
        if(left_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result134__;
    }
    right_value_144=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value210=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value210, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value210, right_value210 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_145=(struct sType*)come_increment_ref_count(left_value_142->type);
    fun_name_146="operator_lt";
    if(_if_conditional223=self->mQuote,    _if_conditional223) {
        calling_fun_147=(_Bool)0;
    }
    else {
        calling_fun_147=operator_overload_fun(type_145,fun_name_146,left_value_142,right_value_144,info);
    }
    if(_if_conditional224=!calling_fun_147,    _if_conditional224) {
        come_value_148=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1120, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
        if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value211, right_value211 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj100=come_value_148->c_value;
        come_value_148->c_value=(char*)come_increment_ref_count(((char*)(right_value212=xsprintf("%s<%s",left_value_142->c_value,right_value_144->c_value))));
        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
        if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { right_value212 = come_decrement_ref_count(right_value212, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value212, right_value212 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj101=come_value_148->type;
        come_value_148->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value213=sType_clone(left_value_142->type))));
        if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value213, right_value213 = (void*)0;
        __freed_obj__ = 0;
        come_value_148->type->mHeap=(_Bool)0;
        come_value_148->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_148->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_148));
        if(come_value_148 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_148, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result135__ = (_Bool)1;
    if(left_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_144 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_145 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_145, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result135__;
    if(left_value_142 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_142, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_144 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_144, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_145 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_145, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sLtNode_sline(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result136__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result136__ = self->sline;
    return __result136__;
}

char* sLtNode_sname(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value214;
char* __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value214 = (void*)0;
    __result137__ = __result_obj__ = ((char*)(right_value214=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
    if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value214, right_value214 = (void*)0;
    __freed_obj__ = 0;
    return __result137__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value215;
char* __dec_obj102;
void* right_value216;
struct sNode* __dec_obj103;
void* right_value217;
struct sNode* __dec_obj104;
struct sGtNode* __result138__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value215 = (void*)0;
right_value216 = (void*)0;
right_value217 = (void*)0;
    self->sline=info->sline;
    __dec_obj102=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value215=__builtin_string(info->sname))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
    if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { right_value215 = come_decrement_ref_count(right_value215, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value215, right_value215 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj103=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value216=sNode_clone(left))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, ((struct sNode*)right_value216)->finalize, ((struct sNode*)right_value216)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value216, right_value216 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj104=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value217=sNode_clone(right))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, ((struct sNode*)right_value217)->finalize, ((struct sNode*)right_value217)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value217, right_value217 = (void*)0;
    __freed_obj__ = 0;
    __result138__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result138__;
    if(self && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sGtNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result139__ = (_Bool)0;
    return __result139__;
}

char* sGtNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value218;
char* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value218 = (void*)0;
    __result140__ = __result_obj__ = ((char*)(right_value218=__builtin_string("sGtNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value218, right_value218 = (void*)0;
    __freed_obj__ = 0;
    return __result140__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_149;
_Bool _if_conditional228;
_Bool __result141__;
void* right_value219;
struct CVALUE* left_value_150;
struct sNode* right_node_151;
_Bool _if_conditional229;
_Bool __result142__;
void* right_value220;
struct CVALUE* right_value_152;
struct sType* type_153;
char* fun_name_154;
_Bool calling_fun_155;
_Bool _if_conditional230;
_Bool _if_conditional231;
void* right_value221;
struct CVALUE* come_value_156;
void* right_value222;
char* __dec_obj105;
void* right_value223;
struct sType* __dec_obj106;
_Bool __result143__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_149, 0, sizeof(struct sNode*));
right_value219 = (void*)0;
memset(&left_value_150, 0, sizeof(struct CVALUE*));
memset(&right_node_151, 0, sizeof(struct sNode*));
right_value220 = (void*)0;
memset(&right_value_152, 0, sizeof(struct CVALUE*));
memset(&type_153, 0, sizeof(struct sType*));
memset(&fun_name_154, 0, sizeof(char*));
memset(&calling_fun_155, 0, sizeof(_Bool));
right_value221 = (void*)0;
memset(&come_value_156, 0, sizeof(struct CVALUE*));
right_value222 = (void*)0;
right_value223 = (void*)0;
    left_node_149=self->mLeft;
    if(_if_conditional228=!node_compile(left_node_149,info),    _if_conditional228) {
        __result141__ = (_Bool)0;
        return __result141__;
    }
    left_value_150=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value219=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value219, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value219, right_value219 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_151=self->mRight;
    if(_if_conditional229=!node_compile(right_node_151,info),    _if_conditional229) {
        __result142__ = (_Bool)0;
        if(left_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result142__;
    }
    right_value_152=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value220=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value220, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220, right_value220 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_153=(struct sType*)come_increment_ref_count(left_value_150->type);
    fun_name_154="operator_gt";
    if(_if_conditional230=self->mQuote,    _if_conditional230) {
        calling_fun_155=(_Bool)0;
    }
    else {
        calling_fun_155=operator_overload_fun(type_153,fun_name_154,left_value_150,right_value_152,info);
    }
    if(_if_conditional231=!calling_fun_155,    _if_conditional231) {
        come_value_156=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1211, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
        if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value221, right_value221 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj105=come_value_156->c_value;
        come_value_156->c_value=(char*)come_increment_ref_count(((char*)(right_value222=xsprintf("%s>%s",left_value_150->c_value,right_value_152->c_value))));
        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
        if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { right_value222 = come_decrement_ref_count(right_value222, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value222, right_value222 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj106=come_value_156->type;
        come_value_156->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value223=sType_clone(left_value_150->type))));
        if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value223, right_value223 = (void*)0;
        __freed_obj__ = 0;
        come_value_156->type->mHeap=(_Bool)0;
        come_value_156->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_156->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_156));
        if(come_value_156 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_156, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result143__ = (_Bool)1;
    if(left_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_152 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_153 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_153, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result143__;
    if(left_value_150 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_150, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_152 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_152, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_153 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_153, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sGtNode_sline(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result144__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result144__ = self->sline;
    return __result144__;
}

char* sGtNode_sname(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value224;
char* __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value224 = (void*)0;
    __result145__ = __result_obj__ = ((char*)(right_value224=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
    if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value224, right_value224 = (void*)0;
    __freed_obj__ = 0;
    return __result145__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value225;
char* __dec_obj107;
void* right_value226;
struct sNode* __dec_obj108;
void* right_value227;
struct sNode* __dec_obj109;
struct sEqNode* __result146__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value225 = (void*)0;
right_value226 = (void*)0;
right_value227 = (void*)0;
    self->sline=info->sline;
    __dec_obj107=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value225=__builtin_string(info->sname))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
    if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { right_value225 = come_decrement_ref_count(right_value225, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value225, right_value225 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj108=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value226=sNode_clone(left))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, ((struct sNode*)right_value226)->finalize, ((struct sNode*)right_value226)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value226, right_value226 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj109=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value227=sNode_clone(right))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, ((struct sNode*)right_value227)->finalize, ((struct sNode*)right_value227)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value227, right_value227 = (void*)0;
    __freed_obj__ = 0;
    __result146__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result146__;
    if(self && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

int sEqNode_sline(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result147__ = self->sline;
    return __result147__;
}

char* sEqNode_sname(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value228;
char* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value228 = (void*)0;
    __result148__ = __result_obj__ = ((char*)(right_value228=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value228, right_value228 = (void*)0;
    __freed_obj__ = 0;
    return __result148__;
}

_Bool sEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result149__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result149__ = (_Bool)0;
    return __result149__;
}

char* sEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value229;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value229 = (void*)0;
    __result150__ = __result_obj__ = ((char*)(right_value229=__builtin_string("sEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value229, right_value229 = (void*)0;
    __freed_obj__ = 0;
    return __result150__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_157;
_Bool _if_conditional235;
_Bool __result151__;
void* right_value230;
struct CVALUE* left_value_158;
struct sNode* right_node_159;
_Bool _if_conditional236;
_Bool __result152__;
void* right_value231;
struct CVALUE* right_value_160;
void* right_value232;
struct CVALUE* come_value_161;
void* right_value233;
char* __dec_obj110;
void* right_value234;
struct sType* __dec_obj111;
_Bool __result153__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_157, 0, sizeof(struct sNode*));
right_value230 = (void*)0;
memset(&left_value_158, 0, sizeof(struct CVALUE*));
memset(&right_node_159, 0, sizeof(struct sNode*));
right_value231 = (void*)0;
memset(&right_value_160, 0, sizeof(struct CVALUE*));
right_value232 = (void*)0;
memset(&come_value_161, 0, sizeof(struct CVALUE*));
right_value233 = (void*)0;
right_value234 = (void*)0;
    left_node_157=self->mLeft;
    if(_if_conditional235=!node_compile(left_node_157,info),    _if_conditional235) {
        __result151__ = (_Bool)0;
        return __result151__;
    }
    left_value_158=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value230=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value230, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value230, right_value230 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_159=self->mRight;
    if(_if_conditional236=!node_compile(right_node_159,info),    _if_conditional236) {
        __result152__ = (_Bool)0;
        if(left_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result152__;
    }
    right_value_160=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value231=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value231, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value231, right_value231 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1300, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value232, right_value232 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj110=come_value_161->c_value;
    come_value_161->c_value=(char*)come_increment_ref_count(((char*)(right_value233=xsprintf("%s==%s",left_value_158->c_value,right_value_160->c_value))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { right_value233 = come_decrement_ref_count(right_value233, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value233, right_value233 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj111=come_value_161->type;
    come_value_161->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value234=sType_clone(left_value_158->type))));
    if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value234, right_value234 = (void*)0;
    __freed_obj__ = 0;
    come_value_161->type->mHeap=(_Bool)0;
    come_value_161->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_161->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_161));
    __result153__ = (_Bool)1;
    if(left_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_160 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_160, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result153__;
    if(left_value_158 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_158, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_160 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_160, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_161 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_161, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNotEqNode* sNotEqNode_initialize(struct sNotEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value235;
char* __dec_obj112;
void* right_value236;
struct sNode* __dec_obj113;
void* right_value237;
struct sNode* __dec_obj114;
struct sNotEqNode* __result154__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value235 = (void*)0;
right_value236 = (void*)0;
right_value237 = (void*)0;
    self->sline=info->sline;
    __dec_obj112=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value235=__builtin_string(info->sname))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value235, right_value235 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj113=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value236=sNode_clone(left))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { right_value236 = come_decrement_ref_count(right_value236, ((struct sNode*)right_value236)->finalize, ((struct sNode*)right_value236)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value236, right_value236 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj114=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value237=sNode_clone(right))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, ((struct sNode*)right_value237)->finalize, ((struct sNode*)right_value237)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value237, right_value237 = (void*)0;
    __freed_obj__ = 0;
    __result154__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result154__;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sNotEqNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result155__ = (_Bool)0;
    return __result155__;
}

char* sNotEqNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value238;
char* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value238 = (void*)0;
    __result156__ = __result_obj__ = ((char*)(right_value238=__builtin_string("sNotEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value238, right_value238 = (void*)0;
    __freed_obj__ = 0;
    return __result156__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_162;
_Bool _if_conditional240;
_Bool __result157__;
void* right_value239;
struct CVALUE* left_value_163;
struct sNode* right_node_164;
_Bool _if_conditional241;
_Bool __result158__;
void* right_value240;
struct CVALUE* right_value_165;
void* right_value241;
struct CVALUE* come_value_166;
void* right_value242;
char* __dec_obj115;
void* right_value243;
struct sType* __dec_obj116;
_Bool __result159__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_162, 0, sizeof(struct sNode*));
right_value239 = (void*)0;
memset(&left_value_163, 0, sizeof(struct CVALUE*));
memset(&right_node_164, 0, sizeof(struct sNode*));
right_value240 = (void*)0;
memset(&right_value_165, 0, sizeof(struct CVALUE*));
right_value241 = (void*)0;
memset(&come_value_166, 0, sizeof(struct CVALUE*));
right_value242 = (void*)0;
right_value243 = (void*)0;
    left_node_162=self->mLeft;
    if(_if_conditional240=!node_compile(left_node_162,info),    _if_conditional240) {
        __result157__ = (_Bool)0;
        return __result157__;
    }
    left_value_163=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value239=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value239, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value239, right_value239 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_164=self->mRight;
    if(_if_conditional241=!node_compile(right_node_164,info),    _if_conditional241) {
        __result158__ = (_Bool)0;
        if(left_value_163 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_163, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result158__;
    }
    right_value_165=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value240=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value240, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value240, right_value240 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1368, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value241, right_value241 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj115=come_value_166->c_value;
    come_value_166->c_value=(char*)come_increment_ref_count(((char*)(right_value242=xsprintf("%s!=%s",left_value_163->c_value,right_value_165->c_value))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { right_value242 = come_decrement_ref_count(right_value242, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242, right_value242 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj116=come_value_166->type;
    come_value_166->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value243=sType_clone(left_value_163->type))));
    if(__dec_obj116) { come_call_finalizer(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value243, right_value243 = (void*)0;
    __freed_obj__ = 0;
    come_value_166->type->mHeap=(_Bool)0;
    come_value_166->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_166->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_166));
    __result159__ = (_Bool)1;
    if(left_value_163 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_165 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_165, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result159__;
    if(left_value_163 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_163, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_165 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_165, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_166 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_166, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNotEqNode_sline(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result160__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result160__ = self->sline;
    return __result160__;
}

char* sNotEqNode_sname(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value244;
char* __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value244 = (void*)0;
    __result161__ = __result_obj__ = ((char*)(right_value244=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value244, right_value244 = (void*)0;
    __freed_obj__ = 0;
    return __result161__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value245;
char* __dec_obj117;
void* right_value246;
struct sNode* __dec_obj118;
void* right_value247;
struct sNode* __dec_obj119;
struct sEq2Node* __result162__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value245 = (void*)0;
right_value246 = (void*)0;
right_value247 = (void*)0;
    self->sline=info->sline;
    __dec_obj117=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value245=__builtin_string(info->sname))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { right_value245 = come_decrement_ref_count(right_value245, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value245, right_value245 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj118=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value246=sNode_clone(left))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, ((struct sNode*)right_value246)->finalize, ((struct sNode*)right_value246)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value246, right_value246 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj119=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value247=sNode_clone(right))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, ((struct sNode*)right_value247)->finalize, ((struct sNode*)right_value247)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value247, right_value247 = (void*)0;
    __freed_obj__ = 0;
    __result162__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result162__;
    if(self && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sEq2Node_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result163__ = (_Bool)0;
    return __result163__;
}

char* sEq2Node_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value248;
char* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value248 = (void*)0;
    __result164__ = __result_obj__ = ((char*)(right_value248=__builtin_string("sEq2Node")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value248, right_value248 = (void*)0;
    __freed_obj__ = 0;
    return __result164__;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_167;
_Bool _if_conditional245;
_Bool __result165__;
void* right_value249;
struct CVALUE* left_value_168;
struct sNode* right_node_169;
_Bool _if_conditional246;
_Bool __result166__;
void* right_value250;
struct CVALUE* right_value_170;
struct sType* type_171;
char* fun_name_172;
_Bool calling_fun_173;
_Bool _if_conditional247;
_Bool _if_conditional248;
void* right_value251;
struct CVALUE* come_value_174;
void* right_value252;
char* __dec_obj120;
void* right_value253;
struct sType* __dec_obj121;
_Bool __result167__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_167, 0, sizeof(struct sNode*));
right_value249 = (void*)0;
memset(&left_value_168, 0, sizeof(struct CVALUE*));
memset(&right_node_169, 0, sizeof(struct sNode*));
right_value250 = (void*)0;
memset(&right_value_170, 0, sizeof(struct CVALUE*));
memset(&type_171, 0, sizeof(struct sType*));
memset(&fun_name_172, 0, sizeof(char*));
memset(&calling_fun_173, 0, sizeof(_Bool));
right_value251 = (void*)0;
memset(&come_value_174, 0, sizeof(struct CVALUE*));
right_value252 = (void*)0;
right_value253 = (void*)0;
    left_node_167=self->mLeft;
    if(_if_conditional245=!node_compile(left_node_167,info),    _if_conditional245) {
        __result165__ = (_Bool)0;
        return __result165__;
    }
    left_value_168=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value249=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value249, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value249, right_value249 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_169=self->mRight;
    if(_if_conditional246=!node_compile(right_node_169,info),    _if_conditional246) {
        __result166__ = (_Bool)0;
        if(left_value_168 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result166__;
    }
    right_value_170=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value250=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value250, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value250, right_value250 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_171=(struct sType*)come_increment_ref_count(left_value_168->type);
    fun_name_172="operator_equals";
    if(_if_conditional247=self->mQuote,    _if_conditional247) {
        calling_fun_173=(_Bool)0;
    }
    else {
        calling_fun_173=operator_overload_fun(type_171,fun_name_172,left_value_168,right_value_170,info);
    }
    if(_if_conditional248=!calling_fun_173,    _if_conditional248) {
        come_value_174=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1459, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
        if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value251, right_value251 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj120=come_value_174->c_value;
        come_value_174->c_value=(char*)come_increment_ref_count(((char*)(right_value252=xsprintf("%s==%s",left_value_168->c_value,right_value_170->c_value))));
        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
        if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { right_value252 = come_decrement_ref_count(right_value252, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value252, right_value252 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj121=come_value_174->type;
        come_value_174->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value253=sType_clone(left_value_168->type))));
        if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253, right_value253 = (void*)0;
        __freed_obj__ = 0;
        come_value_174->type->mHeap=(_Bool)0;
        come_value_174->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_174->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_174));
        if(come_value_174 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_174, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result167__ = (_Bool)1;
    if(left_value_168 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_170 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_171 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result167__;
    if(left_value_168 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_168, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_170 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_170, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_171 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_171, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sEq2Node_sline(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result168__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result168__ = self->sline;
    return __result168__;
}

char* sEq2Node_sname(struct sEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value254;
char* __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value254 = (void*)0;
    __result169__ = __result_obj__ = ((char*)(right_value254=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
    if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value254, right_value254 = (void*)0;
    __freed_obj__ = 0;
    return __result169__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value255;
char* __dec_obj122;
void* right_value256;
struct sNode* __dec_obj123;
void* right_value257;
struct sNode* __dec_obj124;
struct sNotEq2Node* __result170__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value255 = (void*)0;
right_value256 = (void*)0;
right_value257 = (void*)0;
    self->sline=info->sline;
    __dec_obj122=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value255=__builtin_string(info->sname))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
    if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { right_value255 = come_decrement_ref_count(right_value255, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value255, right_value255 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj123=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value256=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, ((struct sNode*)right_value256)->finalize, ((struct sNode*)right_value256)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value256, right_value256 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj124=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value257=sNode_clone(right))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, ((struct sNode*)right_value257)->finalize, ((struct sNode*)right_value257)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value257, right_value257 = (void*)0;
    __freed_obj__ = 0;
    __result170__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result170__;
    if(self && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sNotEq2Node_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result171__ = (_Bool)0;
    return __result171__;
}

char* sNotEq2Node_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value258;
char* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value258 = (void*)0;
    __result172__ = __result_obj__ = ((char*)(right_value258=__builtin_string("sNotEq2Node")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value258, right_value258 = (void*)0;
    __freed_obj__ = 0;
    return __result172__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_175;
_Bool _if_conditional252;
_Bool __result173__;
void* right_value259;
struct CVALUE* left_value_176;
struct sNode* right_node_177;
_Bool _if_conditional253;
_Bool __result174__;
void* right_value260;
struct CVALUE* right_value_178;
struct sType* type_179;
char* fun_name_180;
_Bool calling_fun_181;
_Bool _if_conditional254;
_Bool _if_conditional255;
void* right_value261;
struct CVALUE* come_value_182;
void* right_value262;
char* __dec_obj125;
void* right_value263;
struct sType* __dec_obj126;
_Bool __result175__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_175, 0, sizeof(struct sNode*));
right_value259 = (void*)0;
memset(&left_value_176, 0, sizeof(struct CVALUE*));
memset(&right_node_177, 0, sizeof(struct sNode*));
right_value260 = (void*)0;
memset(&right_value_178, 0, sizeof(struct CVALUE*));
memset(&type_179, 0, sizeof(struct sType*));
memset(&fun_name_180, 0, sizeof(char*));
memset(&calling_fun_181, 0, sizeof(_Bool));
right_value261 = (void*)0;
memset(&come_value_182, 0, sizeof(struct CVALUE*));
right_value262 = (void*)0;
right_value263 = (void*)0;
    left_node_175=self->mLeft;
    if(_if_conditional252=!node_compile(left_node_175,info),    _if_conditional252) {
        __result173__ = (_Bool)0;
        return __result173__;
    }
    left_value_176=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value259=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value259, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value259, right_value259 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_177=self->mRight;
    if(_if_conditional253=!node_compile(right_node_177,info),    _if_conditional253) {
        __result174__ = (_Bool)0;
        if(left_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result174__;
    }
    right_value_178=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value260=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value260, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value260, right_value260 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_179=(struct sType*)come_increment_ref_count(left_value_176->type);
    fun_name_180="operator_not_equals";
    if(_if_conditional254=self->mQuote,    _if_conditional254) {
        calling_fun_181=(_Bool)0;
    }
    else {
        calling_fun_181=operator_overload_fun(type_179,fun_name_180,left_value_176,right_value_178,info);
    }
    if(_if_conditional255=!calling_fun_181,    _if_conditional255) {
        come_value_182=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1550, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
        if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value261, right_value261 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj125=come_value_182->c_value;
        come_value_182->c_value=(char*)come_increment_ref_count(((char*)(right_value262=xsprintf("%s!=%s",left_value_176->c_value,right_value_178->c_value))));
        if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
        if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { right_value262 = come_decrement_ref_count(right_value262, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value262, right_value262 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj126=come_value_182->type;
        come_value_182->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value263=sType_clone(left_value_176->type))));
        if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value263, right_value263 = (void*)0;
        __freed_obj__ = 0;
        come_value_182->type->mHeap=(_Bool)0;
        come_value_182->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_182->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_182));
        if(come_value_182 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_182, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result175__ = (_Bool)1;
    if(left_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_179 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result175__;
    if(left_value_176 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_176, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_178 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_178, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_179 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_179, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sNotEq2Node_sline(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result176__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result176__ = self->sline;
    return __result176__;
}

char* sNotEq2Node_sname(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value264;
char* __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value264 = (void*)0;
    __result177__ = __result_obj__ = ((char*)(right_value264=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
    if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value264, right_value264 = (void*)0;
    __freed_obj__ = 0;
    return __result177__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value265;
char* __dec_obj127;
void* right_value266;
struct sNode* __dec_obj128;
void* right_value267;
struct sNode* __dec_obj129;
struct sAndNode* __result178__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value265 = (void*)0;
right_value266 = (void*)0;
right_value267 = (void*)0;
    self->sline=info->sline;
    __dec_obj127=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value265=__builtin_string(info->sname))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
    if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { right_value265 = come_decrement_ref_count(right_value265, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value265, right_value265 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj128=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value266=sNode_clone(left))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, ((struct sNode*)right_value266)->finalize, ((struct sNode*)right_value266)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value266, right_value266 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj129=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value267=sNode_clone(right))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, ((struct sNode*)right_value267)->finalize, ((struct sNode*)right_value267)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value267, right_value267 = (void*)0;
    __freed_obj__ = 0;
    __result178__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result178__;
    if(self && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result179__ = (_Bool)0;
    return __result179__;
}

char* sAndNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value268;
char* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value268 = (void*)0;
    __result180__ = __result_obj__ = ((char*)(right_value268=__builtin_string("sAndNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value268, right_value268 = (void*)0;
    __freed_obj__ = 0;
    return __result180__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_183;
_Bool _if_conditional259;
_Bool __result181__;
void* right_value269;
struct CVALUE* left_value_184;
struct sNode* right_node_185;
_Bool _if_conditional260;
_Bool __result182__;
void* right_value270;
struct CVALUE* right_value_186;
struct sType* type_187;
char* fun_name_188;
_Bool calling_fun_189;
_Bool _if_conditional261;
_Bool _if_conditional262;
void* right_value271;
struct CVALUE* come_value_190;
void* right_value272;
char* __dec_obj130;
void* right_value273;
struct sType* __dec_obj131;
_Bool __result183__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_183, 0, sizeof(struct sNode*));
right_value269 = (void*)0;
memset(&left_value_184, 0, sizeof(struct CVALUE*));
memset(&right_node_185, 0, sizeof(struct sNode*));
right_value270 = (void*)0;
memset(&right_value_186, 0, sizeof(struct CVALUE*));
memset(&type_187, 0, sizeof(struct sType*));
memset(&fun_name_188, 0, sizeof(char*));
memset(&calling_fun_189, 0, sizeof(_Bool));
right_value271 = (void*)0;
memset(&come_value_190, 0, sizeof(struct CVALUE*));
right_value272 = (void*)0;
right_value273 = (void*)0;
    left_node_183=self->mLeft;
    if(_if_conditional259=!node_compile(left_node_183,info),    _if_conditional259) {
        __result181__ = (_Bool)0;
        return __result181__;
    }
    left_value_184=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value269=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value269, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value269, right_value269 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_185=self->mRight;
    if(_if_conditional260=!node_compile(right_node_185,info),    _if_conditional260) {
        __result182__ = (_Bool)0;
        if(left_value_184 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result182__;
    }
    right_value_186=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value270=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value270, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value270, right_value270 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_187=(struct sType*)come_increment_ref_count(left_value_184->type);
    fun_name_188="operator_and";
    if(_if_conditional261=self->mQuote,    _if_conditional261) {
        calling_fun_189=(_Bool)0;
    }
    else {
        calling_fun_189=operator_overload_fun(type_187,fun_name_188,left_value_184,right_value_186,info);
    }
    if(_if_conditional262=!calling_fun_189,    _if_conditional262) {
        come_value_190=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1642, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
        if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value271, right_value271 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj130=come_value_190->c_value;
        come_value_190->c_value=(char*)come_increment_ref_count(((char*)(right_value272=xsprintf("%s&%s",left_value_184->c_value,right_value_186->c_value))));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
        if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { right_value272 = come_decrement_ref_count(right_value272, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value272, right_value272 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj131=come_value_190->type;
        come_value_190->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value273=sType_clone(left_value_184->type))));
        if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value273, right_value273 = (void*)0;
        __freed_obj__ = 0;
        come_value_190->type->mHeap=(_Bool)0;
        come_value_190->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_190->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_190));
        if(come_value_190 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_190, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result183__ = (_Bool)1;
    if(left_value_184 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_186 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_186, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result183__;
    if(left_value_184 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_184, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_186 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_186, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_187 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_187, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndNode_sline(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result184__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result184__ = self->sline;
    return __result184__;
}

char* sAndNode_sname(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value274;
char* __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value274 = (void*)0;
    __result185__ = __result_obj__ = ((char*)(right_value274=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
    if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value274, right_value274 = (void*)0;
    __freed_obj__ = 0;
    return __result185__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value275;
char* __dec_obj132;
void* right_value276;
struct sNode* __dec_obj133;
void* right_value277;
struct sNode* __dec_obj134;
struct sXOrNode* __result186__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value275 = (void*)0;
right_value276 = (void*)0;
right_value277 = (void*)0;
    self->sline=info->sline;
    __dec_obj132=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value275=__builtin_string(info->sname))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
    if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { right_value275 = come_decrement_ref_count(right_value275, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value275, right_value275 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj133=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value276=sNode_clone(left))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, ((struct sNode*)right_value276)->finalize, ((struct sNode*)right_value276)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value276, right_value276 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj134=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value277=sNode_clone(right))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, ((struct sNode*)right_value277)->finalize, ((struct sNode*)right_value277)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value277, right_value277 = (void*)0;
    __freed_obj__ = 0;
    __result186__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result186__;
    if(self && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sXOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result187__ = (_Bool)0;
    return __result187__;
}

char* sXOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value278;
char* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value278 = (void*)0;
    __result188__ = __result_obj__ = ((char*)(right_value278=__builtin_string("sXOrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value278, right_value278 = (void*)0;
    __freed_obj__ = 0;
    return __result188__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_191;
_Bool _if_conditional266;
_Bool __result189__;
void* right_value279;
struct CVALUE* left_value_192;
struct sNode* right_node_193;
_Bool _if_conditional267;
_Bool __result190__;
void* right_value280;
struct CVALUE* right_value_194;
struct sType* type_195;
char* fun_name_196;
_Bool calling_fun_197;
_Bool _if_conditional268;
_Bool _if_conditional269;
void* right_value281;
struct CVALUE* come_value_198;
void* right_value282;
char* __dec_obj135;
void* right_value283;
struct sType* __dec_obj136;
_Bool __result191__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_191, 0, sizeof(struct sNode*));
right_value279 = (void*)0;
memset(&left_value_192, 0, sizeof(struct CVALUE*));
memset(&right_node_193, 0, sizeof(struct sNode*));
right_value280 = (void*)0;
memset(&right_value_194, 0, sizeof(struct CVALUE*));
memset(&type_195, 0, sizeof(struct sType*));
memset(&fun_name_196, 0, sizeof(char*));
memset(&calling_fun_197, 0, sizeof(_Bool));
right_value281 = (void*)0;
memset(&come_value_198, 0, sizeof(struct CVALUE*));
right_value282 = (void*)0;
right_value283 = (void*)0;
    left_node_191=self->mLeft;
    if(_if_conditional266=!node_compile(left_node_191,info),    _if_conditional266) {
        __result189__ = (_Bool)0;
        return __result189__;
    }
    left_value_192=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value279=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value279, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value279, right_value279 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_193=self->mRight;
    if(_if_conditional267=!node_compile(right_node_193,info),    _if_conditional267) {
        __result190__ = (_Bool)0;
        if(left_value_192 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_192, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result190__;
    }
    right_value_194=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value280=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value280, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value280, right_value280 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_195=(struct sType*)come_increment_ref_count(left_value_192->type);
    fun_name_196="operator_xor";
    if(_if_conditional268=self->mQuote,    _if_conditional268) {
        calling_fun_197=(_Bool)0;
    }
    else {
        calling_fun_197=operator_overload_fun(type_195,fun_name_196,left_value_192,right_value_194,info);
    }
    if(_if_conditional269=!calling_fun_197,    _if_conditional269) {
        come_value_198=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1733, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
        if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value281, right_value281 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj135=come_value_198->c_value;
        come_value_198->c_value=(char*)come_increment_ref_count(((char*)(right_value282=xsprintf("%s^%s",left_value_192->c_value,right_value_194->c_value))));
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
        if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { right_value282 = come_decrement_ref_count(right_value282, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value282, right_value282 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj136=come_value_198->type;
        come_value_198->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value283=sType_clone(left_value_192->type))));
        if(__dec_obj136) { come_call_finalizer(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value283, right_value283 = (void*)0;
        __freed_obj__ = 0;
        come_value_198->type->mHeap=(_Bool)0;
        come_value_198->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_198->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_198));
        if(come_value_198 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_198, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result191__ = (_Bool)1;
    if(left_value_192 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_192, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_194 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_194, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_195, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result191__;
    if(left_value_192 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_192, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_194 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_194, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_195 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_195, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sXOrNode_sline(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result192__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result192__ = self->sline;
    return __result192__;
}

char* sXOrNode_sname(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value284;
char* __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value284 = (void*)0;
    __result193__ = __result_obj__ = ((char*)(right_value284=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
    if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value284, right_value284 = (void*)0;
    __freed_obj__ = 0;
    return __result193__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value285;
char* __dec_obj137;
void* right_value286;
struct sNode* __dec_obj138;
void* right_value287;
struct sNode* __dec_obj139;
struct sOrNode* __result194__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value285 = (void*)0;
right_value286 = (void*)0;
right_value287 = (void*)0;
    self->sline=info->sline;
    __dec_obj137=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value285=__builtin_string(info->sname))));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
    if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { right_value285 = come_decrement_ref_count(right_value285, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value285, right_value285 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj138=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value286=sNode_clone(left))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, ((struct sNode*)right_value286)->finalize, ((struct sNode*)right_value286)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value286, right_value286 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj139=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value287=sNode_clone(right))));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, ((struct sNode*)right_value287)->finalize, ((struct sNode*)right_value287)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value287, right_value287 = (void*)0;
    __freed_obj__ = 0;
    __result194__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result194__;
    if(self && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result195__ = (_Bool)0;
    return __result195__;
}

char* sOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value288;
char* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value288 = (void*)0;
    __result196__ = __result_obj__ = ((char*)(right_value288=__builtin_string("sOrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value288, right_value288 = (void*)0;
    __freed_obj__ = 0;
    return __result196__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_199;
_Bool _if_conditional273;
_Bool __result197__;
void* right_value289;
struct CVALUE* left_value_200;
struct sNode* right_node_201;
_Bool _if_conditional274;
_Bool __result198__;
void* right_value290;
struct CVALUE* right_value_202;
struct sType* type_203;
char* fun_name_204;
_Bool calling_fun_205;
_Bool _if_conditional275;
_Bool _if_conditional276;
void* right_value291;
struct CVALUE* come_value_206;
void* right_value292;
char* __dec_obj140;
void* right_value293;
struct sType* __dec_obj141;
_Bool __result199__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_199, 0, sizeof(struct sNode*));
right_value289 = (void*)0;
memset(&left_value_200, 0, sizeof(struct CVALUE*));
memset(&right_node_201, 0, sizeof(struct sNode*));
right_value290 = (void*)0;
memset(&right_value_202, 0, sizeof(struct CVALUE*));
memset(&type_203, 0, sizeof(struct sType*));
memset(&fun_name_204, 0, sizeof(char*));
memset(&calling_fun_205, 0, sizeof(_Bool));
right_value291 = (void*)0;
memset(&come_value_206, 0, sizeof(struct CVALUE*));
right_value292 = (void*)0;
right_value293 = (void*)0;
    left_node_199=self->mLeft;
    if(_if_conditional273=!node_compile(left_node_199,info),    _if_conditional273) {
        __result197__ = (_Bool)0;
        return __result197__;
    }
    left_value_200=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value289=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value289, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value289, right_value289 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_201=self->mRight;
    if(_if_conditional274=!node_compile(right_node_201,info),    _if_conditional274) {
        __result198__ = (_Bool)0;
        if(left_value_200 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_200, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result198__;
    }
    right_value_202=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value290=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value290, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value290, right_value290 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_203=(struct sType*)come_increment_ref_count(left_value_200->type);
    fun_name_204="operator_or";
    if(_if_conditional275=self->mQuote,    _if_conditional275) {
        calling_fun_205=(_Bool)0;
    }
    else {
        calling_fun_205=operator_overload_fun(type_203,fun_name_204,left_value_200,right_value_202,info);
    }
    if(_if_conditional276=!calling_fun_205,    _if_conditional276) {
        come_value_206=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1824, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291);
        if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value291, right_value291 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj140=come_value_206->c_value;
        come_value_206->c_value=(char*)come_increment_ref_count(((char*)(right_value292=xsprintf("%s|%s",left_value_200->c_value,right_value_202->c_value))));
        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
        if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { right_value292 = come_decrement_ref_count(right_value292, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value292, right_value292 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj141=come_value_206->type;
        come_value_206->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value293=sType_clone(left_value_200->type))));
        if(__dec_obj141) { come_call_finalizer(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value293);
        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value293, right_value293 = (void*)0;
        __freed_obj__ = 0;
        come_value_206->type->mHeap=(_Bool)0;
        come_value_206->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_206->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_206));
        if(come_value_206 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_206, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result199__ = (_Bool)1;
    if(left_value_200 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_200, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_202 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_202, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result199__;
    if(left_value_200 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_200, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_202 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_202, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_203 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_203, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrNode_sline(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result200__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result200__ = self->sline;
    return __result200__;
}

char* sOrNode_sname(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value294;
char* __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value294 = (void*)0;
    __result201__ = __result_obj__ = ((char*)(right_value294=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
    if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value294, right_value294 = (void*)0;
    __freed_obj__ = 0;
    return __result201__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value295;
char* __dec_obj142;
void* right_value296;
struct sNode* __dec_obj143;
void* right_value297;
struct sNode* __dec_obj144;
struct sAndAndNode* __result202__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value295 = (void*)0;
right_value296 = (void*)0;
right_value297 = (void*)0;
    self->sline=info->sline;
    __dec_obj142=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value295=__builtin_string(info->sname))));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
    if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { right_value295 = come_decrement_ref_count(right_value295, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value295, right_value295 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj143=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value296=sNode_clone(left))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, ((struct sNode*)right_value296)->finalize, ((struct sNode*)right_value296)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value296, right_value296 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj144=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value297=sNode_clone(right))));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, ((struct sNode*)right_value297)->finalize, ((struct sNode*)right_value297)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value297, right_value297 = (void*)0;
    __freed_obj__ = 0;
    __result202__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result202__;
    if(self && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sAndAndNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result203__ = (_Bool)0;
    return __result203__;
}

char* sAndAndNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value298;
char* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value298 = (void*)0;
    __result204__ = __result_obj__ = ((char*)(right_value298=__builtin_string("sAndAndNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value298, right_value298 = (void*)0;
    __freed_obj__ = 0;
    return __result204__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_207;
_Bool _if_conditional280;
_Bool __result205__;
void* right_value299;
struct CVALUE* left_value_208;
struct sNode* right_node_209;
_Bool _if_conditional281;
_Bool __result206__;
void* right_value300;
struct CVALUE* right_value_210;
struct sType* type_211;
char* fun_name_212;
_Bool calling_fun_213;
_Bool _if_conditional282;
_Bool _if_conditional283;
void* right_value301;
struct CVALUE* come_value_214;
void* right_value302;
char* __dec_obj145;
void* right_value303;
struct sType* __dec_obj146;
_Bool __result207__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_207, 0, sizeof(struct sNode*));
right_value299 = (void*)0;
memset(&left_value_208, 0, sizeof(struct CVALUE*));
memset(&right_node_209, 0, sizeof(struct sNode*));
right_value300 = (void*)0;
memset(&right_value_210, 0, sizeof(struct CVALUE*));
memset(&type_211, 0, sizeof(struct sType*));
memset(&fun_name_212, 0, sizeof(char*));
memset(&calling_fun_213, 0, sizeof(_Bool));
right_value301 = (void*)0;
memset(&come_value_214, 0, sizeof(struct CVALUE*));
right_value302 = (void*)0;
right_value303 = (void*)0;
    left_node_207=self->mLeft;
    if(_if_conditional280=!node_compile(left_node_207,info),    _if_conditional280) {
        __result205__ = (_Bool)0;
        return __result205__;
    }
    left_value_208=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value299=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value299, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value299, right_value299 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_209=self->mRight;
    if(_if_conditional281=!node_compile(right_node_209,info),    _if_conditional281) {
        __result206__ = (_Bool)0;
        if(left_value_208 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_208, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result206__;
    }
    right_value_210=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value300=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value300, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value300, right_value300 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_211=(struct sType*)come_increment_ref_count(left_value_208->type);
    fun_name_212="operator_andand";
    if(_if_conditional282=self->mQuote,    _if_conditional282) {
        calling_fun_213=(_Bool)0;
    }
    else {
        calling_fun_213=operator_overload_fun(type_211,fun_name_212,left_value_208,right_value_210,info);
    }
    if(_if_conditional283=!calling_fun_213,    _if_conditional283) {
        come_value_214=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value301=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1915, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
        if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value301, right_value301 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj145=come_value_214->c_value;
        come_value_214->c_value=(char*)come_increment_ref_count(((char*)(right_value302=xsprintf("%s&&%s",left_value_208->c_value,right_value_210->c_value))));
        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
        if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { right_value302 = come_decrement_ref_count(right_value302, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value302, right_value302 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj146=come_value_214->type;
        come_value_214->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value303=sType_clone(left_value_208->type))));
        if(__dec_obj146) { come_call_finalizer(sType_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value303, right_value303 = (void*)0;
        __freed_obj__ = 0;
        come_value_214->type->mHeap=(_Bool)0;
        come_value_214->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_214->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_214));
        if(come_value_214 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_214, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result207__ = (_Bool)1;
    if(left_value_208 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_210 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result207__;
    if(left_value_208 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_208, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_210 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_210, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_211 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_211, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sAndAndNode_sline(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result208__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result208__ = self->sline;
    return __result208__;
}

char* sAndAndNode_sname(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value304;
char* __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value304 = (void*)0;
    __result209__ = __result_obj__ = ((char*)(right_value304=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
    if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value304, right_value304 = (void*)0;
    __freed_obj__ = 0;
    return __result209__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value305;
char* __dec_obj147;
void* right_value306;
struct sNode* __dec_obj148;
void* right_value307;
struct sNode* __dec_obj149;
struct sOrOrNode* __result210__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value305 = (void*)0;
right_value306 = (void*)0;
right_value307 = (void*)0;
    self->sline=info->sline;
    __dec_obj147=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value305=__builtin_string(info->sname))));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
    if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { right_value305 = come_decrement_ref_count(right_value305, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value305, right_value305 = (void*)0;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj148=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value306=sNode_clone(left))));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, ((struct sNode*)right_value306)->finalize, ((struct sNode*)right_value306)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value306, right_value306 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj149=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value307=sNode_clone(right))));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, ((struct sNode*)right_value307)->finalize, ((struct sNode*)right_value307)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value307, right_value307 = (void*)0;
    __freed_obj__ = 0;
    __result210__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result210__;
    if(self && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sOrOrNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result211__ = (_Bool)0;
    return __result211__;
}

char* sOrOrNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value308;
char* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value308 = (void*)0;
    __result212__ = __result_obj__ = ((char*)(right_value308=__builtin_string("sOrOrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value308, right_value308 = (void*)0;
    __freed_obj__ = 0;
    return __result212__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_215;
_Bool _if_conditional287;
_Bool __result213__;
void* right_value309;
struct CVALUE* left_value_216;
struct sNode* right_node_217;
_Bool _if_conditional288;
_Bool __result214__;
void* right_value310;
struct CVALUE* right_value_218;
struct sType* type_219;
char* fun_name_220;
_Bool calling_fun_221;
_Bool _if_conditional289;
_Bool _if_conditional290;
void* right_value311;
struct CVALUE* come_value_222;
void* right_value312;
char* __dec_obj150;
void* right_value313;
struct sType* __dec_obj151;
_Bool __result215__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_215, 0, sizeof(struct sNode*));
right_value309 = (void*)0;
memset(&left_value_216, 0, sizeof(struct CVALUE*));
memset(&right_node_217, 0, sizeof(struct sNode*));
right_value310 = (void*)0;
memset(&right_value_218, 0, sizeof(struct CVALUE*));
memset(&type_219, 0, sizeof(struct sType*));
memset(&fun_name_220, 0, sizeof(char*));
memset(&calling_fun_221, 0, sizeof(_Bool));
right_value311 = (void*)0;
memset(&come_value_222, 0, sizeof(struct CVALUE*));
right_value312 = (void*)0;
right_value313 = (void*)0;
    left_node_215=self->mLeft;
    if(_if_conditional287=!node_compile(left_node_215,info),    _if_conditional287) {
        __result213__ = (_Bool)0;
        return __result213__;
    }
    left_value_216=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value309=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value309, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value309, right_value309 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_217=self->mRight;
    if(_if_conditional288=!node_compile(right_node_217,info),    _if_conditional288) {
        __result214__ = (_Bool)0;
        if(left_value_216 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result214__;
    }
    right_value_218=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value310=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value310, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value310, right_value310 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_219=(struct sType*)come_increment_ref_count(left_value_216->type);
    fun_name_220="operator_oror";
    if(_if_conditional289=self->mQuote,    _if_conditional289) {
        calling_fun_221=(_Bool)0;
    }
    else {
        calling_fun_221=operator_overload_fun(type_219,fun_name_220,left_value_216,right_value_218,info);
    }
    if(_if_conditional290=!calling_fun_221,    _if_conditional290) {
        come_value_222=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2005, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
        if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value311, right_value311 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj150=come_value_222->c_value;
        come_value_222->c_value=(char*)come_increment_ref_count(((char*)(right_value312=xsprintf("%s||%s",left_value_216->c_value,right_value_218->c_value))));
        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
        if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { right_value312 = come_decrement_ref_count(right_value312, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value312, right_value312 = (void*)0;
        __freed_obj__ = 0;
        __dec_obj151=come_value_222->type;
        come_value_222->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value313=sType_clone(left_value_216->type))));
        if(__dec_obj151) { come_call_finalizer(sType_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value313, right_value313 = (void*)0;
        __freed_obj__ = 0;
        come_value_222->type->mHeap=(_Bool)0;
        come_value_222->var=((void*)0);
        add_come_last_code(info,"%s;\n",come_value_222->c_value);
        list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_222));
        if(come_value_222 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_222, (void*)0, (void*)0, 0, 0, 0, 0); }
    }
    __result215__ = (_Bool)1;
    if(left_value_216 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_218 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_219 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_219, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result215__;
    if(left_value_216 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_216, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_218 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_218, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(type_219 && !__freed_obj__) { come_call_finalizer(sType_finalize,type_219, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sOrOrNode_sline(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result216__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result216__ = self->sline;
    return __result216__;
}

char* sOrOrNode_sname(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value314;
char* __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value314 = (void*)0;
    __result217__ = __result_obj__ = ((char*)(right_value314=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
    if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value314, right_value314 = (void*)0;
    __freed_obj__ = 0;
    return __result217__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value315;
char* __dec_obj152;
void* right_value316;
struct sNode* __dec_obj153;
void* right_value317;
struct sNode* __dec_obj154;
struct sCommaNode* __result218__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value315 = (void*)0;
right_value316 = (void*)0;
right_value317 = (void*)0;
    self->sline=info->sline;
    __dec_obj152=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value315=__builtin_string(info->sname))));
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
    if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { right_value315 = come_decrement_ref_count(right_value315, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value315, right_value315 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj153=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value316=sNode_clone(left))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, ((struct sNode*)right_value316)->finalize, ((struct sNode*)right_value316)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value316, right_value316 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj154=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value317=sNode_clone(right))));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317);
    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, ((struct sNode*)right_value317)->finalize, ((struct sNode*)right_value317)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value317, right_value317 = (void*)0;
    __freed_obj__ = 0;
    __result218__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
    return __result218__;
    if(self && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(left && !__freed_obj__) { left = come_decrement_ref_count(left, ((struct sNode*)left)->finalize, ((struct sNode*)left)->_protocol_obj, 0, 1, 0); } 
    if(right && !__freed_obj__) { right = come_decrement_ref_count(right, ((struct sNode*)right)->finalize, ((struct sNode*)right)->_protocol_obj, 0, 1, 0); } 
}

_Bool sCommaNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result219__ = (_Bool)0;
    return __result219__;
}

char* sCommaNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value318;
char* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value318 = (void*)0;
    __result220__ = __result_obj__ = ((char*)(right_value318=__builtin_string("sCommaNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value318);
    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value318, right_value318 = (void*)0;
    __freed_obj__ = 0;
    return __result220__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_223;
_Bool _if_conditional294;
_Bool __result221__;
void* right_value319;
struct CVALUE* left_value_224;
struct sNode* right_node_225;
_Bool _if_conditional295;
_Bool __result222__;
void* right_value320;
struct CVALUE* right_value_226;
void* right_value321;
struct CVALUE* come_value_227;
void* right_value322;
char* __dec_obj155;
void* right_value323;
struct sType* __dec_obj156;
_Bool __result223__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_223, 0, sizeof(struct sNode*));
right_value319 = (void*)0;
memset(&left_value_224, 0, sizeof(struct CVALUE*));
memset(&right_node_225, 0, sizeof(struct sNode*));
right_value320 = (void*)0;
memset(&right_value_226, 0, sizeof(struct CVALUE*));
right_value321 = (void*)0;
memset(&come_value_227, 0, sizeof(struct CVALUE*));
right_value322 = (void*)0;
right_value323 = (void*)0;
    left_node_223=self->mLeft;
    if(_if_conditional294=!node_compile(left_node_223,info),    _if_conditional294) {
        __result221__ = (_Bool)0;
        return __result221__;
    }
    left_value_224=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value319=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319);
    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value319, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value319, right_value319 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_225=self->mRight;
    if(_if_conditional295=!node_compile(right_node_225,info),    _if_conditional295) {
        __result222__ = (_Bool)0;
        if(left_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result222__;
    }
    right_value_226=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value320=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value320, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value320, right_value320 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2082, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321);
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value321, right_value321 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj155=come_value_227->c_value;
    come_value_227->c_value=(char*)come_increment_ref_count(((char*)(right_value322=xsprintf("%s,%s",left_value_224->c_value,right_value_226->c_value))));
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { right_value322 = come_decrement_ref_count(right_value322, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value322, right_value322 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj156=come_value_227->type;
    come_value_227->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value323=sType_clone(left_value_224->type))));
    if(__dec_obj156) { come_call_finalizer(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
    if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value323, right_value323 = (void*)0;
    __freed_obj__ = 0;
    come_value_227->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_227->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_227));
    __result223__ = (_Bool)1;
    if(left_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_226 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_227 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result223__;
    if(left_value_224 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_224, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(right_value_226 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value_226, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_227 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_227, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sCommaNode_sline(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result224__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result224__ = self->sline;
    return __result224__;
}

char* sCommaNode_sname(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value324;
char* __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value324 = (void*)0;
    __result225__ = __result_obj__ = ((char*)(right_value324=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value324, right_value324 = (void*)0;
    __freed_obj__ = 0;
    return __result225__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value325;
char* __dec_obj157;
void* right_value326;
struct sNode* __dec_obj158;
void* right_value327;
struct sNode* __dec_obj159;
void* right_value328;
struct sNode* __dec_obj160;
struct sConditionalNode* __result226__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value325 = (void*)0;
right_value326 = (void*)0;
right_value327 = (void*)0;
right_value328 = (void*)0;
    self->sline=info->sline;
    __dec_obj157=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value325=__builtin_string(info->sname))));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
    if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { right_value325 = come_decrement_ref_count(right_value325, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value325, right_value325 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj158=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value326=sNode_clone(value1))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326);
    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, ((struct sNode*)right_value326)->finalize, ((struct sNode*)right_value326)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value326, right_value326 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj159=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value327=sNode_clone(value2))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, ((struct sNode*)right_value327)->finalize, ((struct sNode*)right_value327)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value327, right_value327 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj160=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(value3))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value328, right_value328 = (void*)0;
    __freed_obj__ = 0;
    __result226__ = __result_obj__ = self;
    if(self && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value1 && !__freed_obj__) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0); } 
    if(value2 && !__freed_obj__) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0); } 
    if(value3 && !__freed_obj__) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0); } 
    return __result226__;
    if(self && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
    if(value1 && !__freed_obj__) { value1 = come_decrement_ref_count(value1, ((struct sNode*)value1)->finalize, ((struct sNode*)value1)->_protocol_obj, 0, 1, 0); } 
    if(value2 && !__freed_obj__) { value2 = come_decrement_ref_count(value2, ((struct sNode*)value2)->finalize, ((struct sNode*)value2)->_protocol_obj, 0, 1, 0); } 
    if(value3 && !__freed_obj__) { value3 = come_decrement_ref_count(value3, ((struct sNode*)value3)->finalize, ((struct sNode*)value3)->_protocol_obj, 0, 1, 0); } 
}

_Bool sConditionalNode_terminated(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result227__ = (_Bool)0;
    return __result227__;
}

char* sConditionalNode_kind(){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value329;
char* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value329 = (void*)0;
    __result228__ = __result_obj__ = ((char*)(right_value329=__builtin_string("sConditionalNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value329, right_value329 = (void*)0;
    __freed_obj__ = 0;
    return __result228__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* value1_228;
_Bool _if_conditional300;
_Bool __result229__;
void* right_value330;
struct CVALUE* value1_value_229;
struct sNode* value2_230;
_Bool _if_conditional301;
_Bool __result230__;
void* right_value331;
struct CVALUE* value2_value_231;
struct sNode* value3_232;
_Bool _if_conditional302;
_Bool __result231__;
void* right_value332;
struct CVALUE* value3_value_233;
void* right_value333;
struct CVALUE* come_value_234;
void* right_value334;
char* __dec_obj161;
void* right_value335;
struct sType* __dec_obj162;
_Bool __result232__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&value1_228, 0, sizeof(struct sNode*));
right_value330 = (void*)0;
memset(&value1_value_229, 0, sizeof(struct CVALUE*));
memset(&value2_230, 0, sizeof(struct sNode*));
right_value331 = (void*)0;
memset(&value2_value_231, 0, sizeof(struct CVALUE*));
memset(&value3_232, 0, sizeof(struct sNode*));
right_value332 = (void*)0;
memset(&value3_value_233, 0, sizeof(struct CVALUE*));
right_value333 = (void*)0;
memset(&come_value_234, 0, sizeof(struct CVALUE*));
right_value334 = (void*)0;
right_value335 = (void*)0;
    value1_228=self->mValue1;
    if(_if_conditional300=!node_compile(value1_228,info),    _if_conditional300) {
        __result229__ = (_Bool)0;
        return __result229__;
    }
    value1_value_229=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value330=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
    if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value330, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value330, right_value330 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    value2_230=self->mValue2;
    if(_if_conditional301=!node_compile(value2_230,info),    _if_conditional301) {
        __result230__ = (_Bool)0;
        if(value1_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result230__;
    }
    value2_value_231=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value331=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value331);
    if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value331, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value331, right_value331 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    value3_232=self->mValue3;
    if(_if_conditional302=!node_compile(value3_232,info),    _if_conditional302) {
        __result231__ = (_Bool)0;
        if(value1_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value2_value_231 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_231, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result231__;
    }
    value3_value_233=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332);
    if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value332, right_value332 = (void*)0;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value333=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2168, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value333, right_value333 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj161=come_value_234->c_value;
    come_value_234->c_value=(char*)come_increment_ref_count(((char*)(right_value334=xsprintf("%s?%s:%s",value1_value_229->c_value,value2_value_231->c_value,value3_value_233->c_value))));
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
    if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { right_value334 = come_decrement_ref_count(right_value334, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value334, right_value334 = (void*)0;
    __freed_obj__ = 0;
    __dec_obj162=come_value_234->type;
    come_value_234->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value335=sType_clone(value1_value_229->type))));
    if(__dec_obj162) { come_call_finalizer(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
    if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value335, right_value335 = (void*)0;
    __freed_obj__ = 0;
    come_value_234->var=((void*)0);
    add_come_last_code(info,"%s;\n",come_value_234->c_value);
    list$1CVALUEph_push_back(info->stack,(struct CVALUE*)come_increment_ref_count(come_value_234));
    __result232__ = (_Bool)1;
    if(value1_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value2_value_231 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value3_value_233 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value3_value_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_234 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_234, (void*)0, (void*)0, 0, 0, 0, 0); }
    return __result232__;
    if(value1_value_229 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_229, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value2_value_231 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_231, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(value3_value_233 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value3_value_233, (void*)0, (void*)0, 0, 0, 0, 0); }
    if(come_value_234 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,come_value_234, (void*)0, (void*)0, 0, 0, 0, 0); }
}

int sConditionalNode_sline(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
int __result233__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
    __result233__ = self->sline;
    return __result233__;
}

char* sConditionalNode_sname(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value336;
char* __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value336 = (void*)0;
    __result234__ = __result_obj__ = ((char*)(right_value336=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
    if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value336, right_value336 = (void*)0;
    __freed_obj__ = 0;
    return __result234__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value337;
struct sNode* node_235;
_Bool _while_condtional10;
_Bool _if_conditional303;
void* right_value338;
struct sNode* right_236;
void* right_value339;
void* right_value340;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* right_value345;
struct sNode* __result237__;
_Bool _if_conditional313;
void* right_value346;
struct sNode* right_238;
void* right_value347;
void* right_value348;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* right_value353;
struct sNode* __result240__;
_Bool _if_conditional323;
void* right_value354;
struct sNode* right_240;
void* right_value355;
void* right_value356;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* right_value361;
struct sNode* __result243__;
_Bool _if_conditional333;
void* right_value362;
struct sNode* right_242;
void* right_value363;
void* right_value364;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* right_value369;
struct sNode* __result246__;
_Bool _if_conditional343;
void* right_value370;
struct sNode* right_244;
void* right_value371;
void* right_value372;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* right_value377;
struct sNode* __result249__;
_Bool _if_conditional353;
void* right_value378;
struct sNode* right_246;
void* right_value379;
void* right_value380;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* right_value385;
struct sNode* __result252__;
struct sNode* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value337 = (void*)0;
memset(&node_235, 0, sizeof(struct sNode*));
right_value338 = (void*)0;
memset(&right_236, 0, sizeof(struct sNode*));
right_value339 = (void*)0;
right_value340 = (void*)0;
right_value345 = (void*)0;
right_value346 = (void*)0;
memset(&right_238, 0, sizeof(struct sNode*));
right_value347 = (void*)0;
right_value348 = (void*)0;
right_value353 = (void*)0;
right_value354 = (void*)0;
memset(&right_240, 0, sizeof(struct sNode*));
right_value355 = (void*)0;
right_value356 = (void*)0;
right_value361 = (void*)0;
right_value362 = (void*)0;
memset(&right_242, 0, sizeof(struct sNode*));
right_value363 = (void*)0;
right_value364 = (void*)0;
right_value369 = (void*)0;
right_value370 = (void*)0;
memset(&right_244, 0, sizeof(struct sNode*));
right_value371 = (void*)0;
right_value372 = (void*)0;
right_value377 = (void*)0;
right_value378 = (void*)0;
memset(&right_246, 0, sizeof(struct sNode*));
right_value379 = (void*)0;
right_value380 = (void*)0;
right_value385 = (void*)0;
    node_235=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value337=expression_node_v99(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { right_value337 = come_decrement_ref_count(right_value337, ((struct sNode*)right_value337)->finalize, ((struct sNode*)right_value337)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value337, right_value337 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional10=*info->p,    _while_condtional10) {
        if(_if_conditional303=!node_235->terminated(node_235->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional303) {
            info->p++;
            skip_spaces_and_lf(info);
            right_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value338=mult_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value338);
            if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, ((struct sNode*)right_value338)->finalize, ((struct sNode*)right_value338)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value338, right_value338 = (void*)0;
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2204, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sMultNode*)(right_value340=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value339=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2204, "struct sMultNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_236),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sMultNode_sline;
            _inf_value3->sname=(void*)sMultNode_sname;
            _inf_value3->terminated=(void*)sMultNode_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result237__ = __result_obj__ = ((struct sNode*)(right_value345=_inf_value3));
            if(right_236 && !__freed_obj__) { right_236 = come_decrement_ref_count(right_236, ((struct sNode*)right_236)->finalize, ((struct sNode*)right_236)->_protocol_obj, 0, 0, 0); } 
            if(node_235 && !__freed_obj__) { node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339);
            if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value339, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value339, right_value339 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value340);
            if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value340, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value340, right_value340 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value345);
            if(right_value345 && right_value345 != __result_obj__ && !__freed_obj__) { right_value345 = come_decrement_ref_count(right_value345, ((struct sNode*)right_value345)->finalize, ((struct sNode*)right_value345)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value345, right_value345 = (void*)0;
            __freed_obj__ = 0;
            return __result237__;
            if(right_236 && !__freed_obj__) { right_236 = come_decrement_ref_count(right_236, ((struct sNode*)right_236)->finalize, ((struct sNode*)right_236)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional313=*info->p==47&&*(info->p+1)!=61,            _if_conditional313) {
                info->p++;
                skip_spaces_and_lf(info);
                right_238=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value346=mult_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value346);
                if(right_value346 && right_value346 != __result_obj__ && !__freed_obj__) { right_value346 = come_decrement_ref_count(right_value346, ((struct sNode*)right_value346)->finalize, ((struct sNode*)right_value346)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value346, right_value346 = (void*)0;
                __freed_obj__ = 0;
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2212, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sDivNode*)(right_value348=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value347=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2212, "struct sDivNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_238),(_Bool)0,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDivNode_finalize;
                _inf_value4->clone=(void*)sDivNode_clone;
                _inf_value4->compile=(void*)sDivNode_compile;
                _inf_value4->sline=(void*)sDivNode_sline;
                _inf_value4->sname=(void*)sDivNode_sname;
                _inf_value4->terminated=(void*)sDivNode_terminated;
                _inf_value4->kind=(void*)sDivNode_kind;
                __result240__ = __result_obj__ = ((struct sNode*)(right_value353=_inf_value4));
                if(right_238 && !__freed_obj__) { right_238 = come_decrement_ref_count(right_238, ((struct sNode*)right_238)->finalize, ((struct sNode*)right_238)->_protocol_obj, 0, 0, 0); } 
                if(node_235 && !__freed_obj__) { node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value347);
                if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value347, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value347, right_value347 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value348);
                if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value348, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value348, right_value348 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value353);
                if(right_value353 && right_value353 != __result_obj__ && !__freed_obj__) { right_value353 = come_decrement_ref_count(right_value353, ((struct sNode*)right_value353)->finalize, ((struct sNode*)right_value353)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value353, right_value353 = (void*)0;
                __freed_obj__ = 0;
                return __result240__;
                if(right_238 && !__freed_obj__) { right_238 = come_decrement_ref_count(right_238, ((struct sNode*)right_238)->finalize, ((struct sNode*)right_238)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional323=*info->p==37&&*(info->p+1)!=61,                _if_conditional323) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_240=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value354=expression_node_v99(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value354);
                    if(right_value354 && right_value354 != __result_obj__ && !__freed_obj__) { right_value354 = come_decrement_ref_count(right_value354, ((struct sNode*)right_value354)->finalize, ((struct sNode*)right_value354)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value354, right_value354 = (void*)0;
                    __freed_obj__ = 0;
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2220, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sModNode*)(right_value356=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value355=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2220, "struct sModNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_240),(_Bool)0,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sModNode_finalize;
                    _inf_value5->clone=(void*)sModNode_clone;
                    _inf_value5->compile=(void*)sModNode_compile;
                    _inf_value5->sline=(void*)sModNode_sline;
                    _inf_value5->sname=(void*)sModNode_sname;
                    _inf_value5->terminated=(void*)sModNode_terminated;
                    _inf_value5->kind=(void*)sModNode_kind;
                    __result243__ = __result_obj__ = ((struct sNode*)(right_value361=_inf_value5));
                    if(right_240 && !__freed_obj__) { right_240 = come_decrement_ref_count(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0, 0); } 
                    if(node_235 && !__freed_obj__) { node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value355);
                    if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value355, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value355, right_value355 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value356);
                    if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value356, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value356, right_value356 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value361);
                    if(right_value361 && right_value361 != __result_obj__ && !__freed_obj__) { right_value361 = come_decrement_ref_count(right_value361, ((struct sNode*)right_value361)->finalize, ((struct sNode*)right_value361)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value361, right_value361 = (void*)0;
                    __freed_obj__ = 0;
                    return __result243__;
                    if(right_240 && !__freed_obj__) { right_240 = come_decrement_ref_count(right_240, ((struct sNode*)right_240)->finalize, ((struct sNode*)right_240)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional333=!node_235->terminated(node_235->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional333) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_242=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value362=mult_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value362);
                        if(right_value362 && right_value362 != __result_obj__ && !__freed_obj__) { right_value362 = come_decrement_ref_count(right_value362, ((struct sNode*)right_value362)->finalize, ((struct sNode*)right_value362)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value362, right_value362 = (void*)0;
                        __freed_obj__ = 0;
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2228, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sMultNode*)(right_value364=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value363=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2228, "struct sMultNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_242),(_Bool)1,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sMultNode_finalize;
                        _inf_value6->clone=(void*)sMultNode_clone;
                        _inf_value6->compile=(void*)sMultNode_compile;
                        _inf_value6->sline=(void*)sMultNode_sline;
                        _inf_value6->sname=(void*)sMultNode_sname;
                        _inf_value6->terminated=(void*)sMultNode_terminated;
                        _inf_value6->kind=(void*)sMultNode_kind;
                        __result246__ = __result_obj__ = ((struct sNode*)(right_value369=_inf_value6));
                        if(right_242 && !__freed_obj__) { right_242 = come_decrement_ref_count(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0); } 
                        if(node_235 && !__freed_obj__) { node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value363);
                        if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value363, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value363, right_value363 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value364);
                        if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value364, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value364, right_value364 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value369);
                        if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value369, right_value369 = (void*)0;
                        __freed_obj__ = 0;
                        return __result246__;
                        if(right_242 && !__freed_obj__) { right_242 = come_decrement_ref_count(right_242, ((struct sNode*)right_242)->finalize, ((struct sNode*)right_242)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional343=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional343) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_244=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value370=mult_exp(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                            if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, ((struct sNode*)right_value370)->finalize, ((struct sNode*)right_value370)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value370, right_value370 = (void*)0;
                            __freed_obj__ = 0;
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2236, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sDivNode*)(right_value372=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value371=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2236, "struct sDivNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_244),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sDivNode_finalize;
                            _inf_value7->clone=(void*)sDivNode_clone;
                            _inf_value7->compile=(void*)sDivNode_compile;
                            _inf_value7->sline=(void*)sDivNode_sline;
                            _inf_value7->sname=(void*)sDivNode_sname;
                            _inf_value7->terminated=(void*)sDivNode_terminated;
                            _inf_value7->kind=(void*)sDivNode_kind;
                            __result249__ = __result_obj__ = ((struct sNode*)(right_value377=_inf_value7));
                            if(right_244 && !__freed_obj__) { right_244 = come_decrement_ref_count(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0); } 
                            if(node_235 && !__freed_obj__) { node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value371);
                            if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value371, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value371, right_value371 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value372);
                            if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value372, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value372, right_value372 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value377);
                            if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value377, right_value377 = (void*)0;
                            __freed_obj__ = 0;
                            return __result249__;
                            if(right_244 && !__freed_obj__) { right_244 = come_decrement_ref_count(right_244, ((struct sNode*)right_244)->finalize, ((struct sNode*)right_244)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional353=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional353) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_246=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value378=expression_node_v99(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
                                if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, ((struct sNode*)right_value378)->finalize, ((struct sNode*)right_value378)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value378, right_value378 = (void*)0;
                                __freed_obj__ = 0;
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2244, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sModNode*)(right_value380=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value379=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2244, "struct sModNode")))),(struct sNode*)come_increment_ref_count(node_235),(struct sNode*)come_increment_ref_count(right_246),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sModNode_finalize;
                                _inf_value8->clone=(void*)sModNode_clone;
                                _inf_value8->compile=(void*)sModNode_compile;
                                _inf_value8->sline=(void*)sModNode_sline;
                                _inf_value8->sname=(void*)sModNode_sname;
                                _inf_value8->terminated=(void*)sModNode_terminated;
                                _inf_value8->kind=(void*)sModNode_kind;
                                __result252__ = __result_obj__ = ((struct sNode*)(right_value385=_inf_value8));
                                if(right_246 && !__freed_obj__) { right_246 = come_decrement_ref_count(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0); } 
                                if(node_235 && !__freed_obj__) { node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value379);
                                if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value379, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value379, right_value379 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value380);
                                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value380, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value380, right_value380 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value385);
                                if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value385, right_value385 = (void*)0;
                                __freed_obj__ = 0;
                                return __result252__;
                                if(right_246 && !__freed_obj__) { right_246 = come_decrement_ref_count(right_246, ((struct sNode*)right_246)->finalize, ((struct sNode*)right_246)->_protocol_obj, 0, 0, 0); } 
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
    __result253__ = __result_obj__ = node_235;
    if(node_235 && !__freed_obj__) { node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 1, 0); } 
    return __result253__;
    if(node_235 && !__freed_obj__) { node_235 = come_decrement_ref_count(node_235, ((struct sNode*)node_235)->finalize, ((struct sNode*)node_235)->_protocol_obj, 0, 0, 0); } 
}

static void sMultNode_finalize(struct sMultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional334;
_Bool _if_conditional335;
_Bool _if_conditional336;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional334=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional334) {
                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional335=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional335) {
                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional336=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional336) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional337;
struct sMultNode* __result244__;
void* right_value365;
struct sMultNode* result_243;
_Bool _if_conditional338;
void* right_value366;
struct sNode* __dec_obj172;
_Bool _if_conditional339;
void* right_value367;
struct sNode* __dec_obj173;
_Bool _if_conditional340;
_Bool _if_conditional341;
_Bool _if_conditional342;
void* right_value368;
char* __dec_obj174;
struct sMultNode* __result245__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value365 = (void*)0;
memset(&result_243, 0, sizeof(struct sMultNode*));
right_value366 = (void*)0;
right_value367 = (void*)0;
right_value368 = (void*)0;
                            if(_if_conditional337=self==(void*)0,                            _if_conditional337) {
                                __result244__ = __result_obj__ = (void*)0;
                                return __result244__;
                            }
                            result_243=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value365=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                            if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value365, right_value365 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional338=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional338) {
                                __dec_obj172=result_243->mLeft;
                                result_243->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value366=sNode_clone(self->mLeft))));
                                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value366);
                                if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { right_value366 = come_decrement_ref_count(right_value366, ((struct sNode*)right_value366)->finalize, ((struct sNode*)right_value366)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value366, right_value366 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional339=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional339) {
                                __dec_obj173=result_243->mRight;
                                result_243->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value367=sNode_clone(self->mRight))));
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
                                if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { right_value367 = come_decrement_ref_count(right_value367, ((struct sNode*)right_value367)->finalize, ((struct sNode*)right_value367)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value367, right_value367 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional340=self!=((void*)0),                            _if_conditional340) {
                                result_243->mQuote=self->mQuote;
                            }
                            if(_if_conditional341=self!=((void*)0),                            _if_conditional341) {
                                result_243->sline=self->sline;
                            }
                            if(_if_conditional342=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional342) {
                                __dec_obj174=result_243->sname;
                                result_243->sname=(char*)come_increment_ref_count(((char*)(right_value368=string_clone(self->sname))));
                                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
                                if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value368, right_value368 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            __result245__ = __result_obj__ = result_243;
                            if(result_243 && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result245__;
                            if(result_243 && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,result_243, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sDivNode_finalize(struct sDivNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional344;
_Bool _if_conditional345;
_Bool _if_conditional346;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional344=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional344) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional345=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional345) {
                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional346=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional346) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional347;
struct sDivNode* __result247__;
void* right_value373;
struct sDivNode* result_245;
_Bool _if_conditional348;
void* right_value374;
struct sNode* __dec_obj175;
_Bool _if_conditional349;
void* right_value375;
struct sNode* __dec_obj176;
_Bool _if_conditional350;
_Bool _if_conditional351;
_Bool _if_conditional352;
void* right_value376;
char* __dec_obj177;
struct sDivNode* __result248__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value373 = (void*)0;
memset(&result_245, 0, sizeof(struct sDivNode*));
right_value374 = (void*)0;
right_value375 = (void*)0;
right_value376 = (void*)0;
                                if(_if_conditional347=self==(void*)0,                                _if_conditional347) {
                                    __result247__ = __result_obj__ = (void*)0;
                                    return __result247__;
                                }
                                result_245=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value373=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
                                if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value373, right_value373 = (void*)0;
                                __freed_obj__ = 0;
                                if(_if_conditional348=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional348) {
                                    __dec_obj175=result_245->mLeft;
                                    result_245->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value374=sNode_clone(self->mLeft))));
                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value374);
                                    if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { right_value374 = come_decrement_ref_count(right_value374, ((struct sNode*)right_value374)->finalize, ((struct sNode*)right_value374)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value374, right_value374 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional349=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional349) {
                                    __dec_obj176=result_245->mRight;
                                    result_245->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value375=sNode_clone(self->mRight))));
                                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
                                    if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { right_value375 = come_decrement_ref_count(right_value375, ((struct sNode*)right_value375)->finalize, ((struct sNode*)right_value375)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value375, right_value375 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional350=self!=((void*)0),                                _if_conditional350) {
                                    result_245->mQuote=self->mQuote;
                                }
                                if(_if_conditional351=self!=((void*)0),                                _if_conditional351) {
                                    result_245->sline=self->sline;
                                }
                                if(_if_conditional352=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional352) {
                                    __dec_obj177=result_245->sname;
                                    result_245->sname=(char*)come_increment_ref_count(((char*)(right_value376=string_clone(self->sname))));
                                    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value376);
                                    if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value376, right_value376 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                __result248__ = __result_obj__ = result_245;
                                if(result_245 && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result248__;
                                if(result_245 && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,result_245, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sModNode_finalize(struct sModNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional354;
_Bool _if_conditional355;
_Bool _if_conditional356;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional354=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional354) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional355=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional355) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional356=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional356) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional357;
struct sModNode* __result250__;
void* right_value381;
struct sModNode* result_247;
_Bool _if_conditional358;
void* right_value382;
struct sNode* __dec_obj178;
_Bool _if_conditional359;
void* right_value383;
struct sNode* __dec_obj179;
_Bool _if_conditional360;
_Bool _if_conditional361;
_Bool _if_conditional362;
void* right_value384;
char* __dec_obj180;
struct sModNode* __result251__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value381 = (void*)0;
memset(&result_247, 0, sizeof(struct sModNode*));
right_value382 = (void*)0;
right_value383 = (void*)0;
right_value384 = (void*)0;
                                    if(_if_conditional357=self==(void*)0,                                    _if_conditional357) {
                                        __result250__ = __result_obj__ = (void*)0;
                                        return __result250__;
                                    }
                                    result_247=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value381=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value381);
                                    if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value381, right_value381 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional358=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional358) {
                                        __dec_obj178=result_247->mLeft;
                                        result_247->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value382=sNode_clone(self->mLeft))));
                                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value382);
                                        if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { right_value382 = come_decrement_ref_count(right_value382, ((struct sNode*)right_value382)->finalize, ((struct sNode*)right_value382)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value382, right_value382 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional359=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional359) {
                                        __dec_obj179=result_247->mRight;
                                        result_247->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value383=sNode_clone(self->mRight))));
                                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value383);
                                        if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { right_value383 = come_decrement_ref_count(right_value383, ((struct sNode*)right_value383)->finalize, ((struct sNode*)right_value383)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value383, right_value383 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional360=self!=((void*)0),                                    _if_conditional360) {
                                        result_247->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional361=self!=((void*)0),                                    _if_conditional361) {
                                        result_247->sline=self->sline;
                                    }
                                    if(_if_conditional362=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional362) {
                                        __dec_obj180=result_247->sname;
                                        result_247->sname=(char*)come_increment_ref_count(((char*)(right_value384=string_clone(self->sname))));
                                        if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
                                        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value384, right_value384 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    __result251__ = __result_obj__ = result_247;
                                    if(result_247 && !__freed_obj__) { come_call_finalizer(sModNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result251__;
                                    if(result_247 && !__freed_obj__) { come_call_finalizer(sModNode_finalize,result_247, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* add_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value386;
struct sNode* node_248;
_Bool _while_condtional11;
_Bool _if_conditional363;
void* right_value387;
struct sNode* right_249;
void* right_value388;
void* right_value389;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value394;
struct sNode* __result256__;
_Bool _if_conditional373;
void* right_value395;
struct sNode* right_251;
void* right_value396;
void* right_value397;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value402;
struct sNode* __result259__;
_Bool _if_conditional383;
void* right_value403;
struct sNode* right_253;
void* right_value404;
void* right_value405;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* right_value410;
struct sNode* __result262__;
_Bool _if_conditional393;
void* right_value411;
struct sNode* right_255;
void* right_value412;
void* right_value413;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* right_value418;
struct sNode* __result265__;
struct sNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value386 = (void*)0;
memset(&node_248, 0, sizeof(struct sNode*));
right_value387 = (void*)0;
memset(&right_249, 0, sizeof(struct sNode*));
right_value388 = (void*)0;
right_value389 = (void*)0;
right_value394 = (void*)0;
right_value395 = (void*)0;
memset(&right_251, 0, sizeof(struct sNode*));
right_value396 = (void*)0;
right_value397 = (void*)0;
right_value402 = (void*)0;
right_value403 = (void*)0;
memset(&right_253, 0, sizeof(struct sNode*));
right_value404 = (void*)0;
right_value405 = (void*)0;
right_value410 = (void*)0;
right_value411 = (void*)0;
memset(&right_255, 0, sizeof(struct sNode*));
right_value412 = (void*)0;
right_value413 = (void*)0;
right_value418 = (void*)0;
    node_248=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value386=mult_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
    if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, ((struct sNode*)right_value386)->finalize, ((struct sNode*)right_value386)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value386, right_value386 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional11=*info->p,    _while_condtional11) {
        if(_if_conditional363=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional363) {
            info->p++;
            skip_spaces_and_lf(info);
            right_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value387=add_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value387);
            if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value387, right_value387 = (void*)0;
            __freed_obj__ = 0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2270, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value389=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value388=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2270, "struct sAddNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_249),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sAddNode_sline;
            _inf_value9->sname=(void*)sAddNode_sname;
            _inf_value9->terminated=(void*)sAddNode_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result256__ = __result_obj__ = ((struct sNode*)(right_value394=_inf_value9));
            if(right_249 && !__freed_obj__) { right_249 = come_decrement_ref_count(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0, 0); } 
            if(node_248 && !__freed_obj__) { node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value388);
            if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value388, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value388, right_value388 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value389);
            if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value389, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value389, right_value389 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value394);
            if(right_value394 && right_value394 != __result_obj__ && !__freed_obj__) { right_value394 = come_decrement_ref_count(right_value394, ((struct sNode*)right_value394)->finalize, ((struct sNode*)right_value394)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value394, right_value394 = (void*)0;
            __freed_obj__ = 0;
            return __result256__;
            if(right_249 && !__freed_obj__) { right_249 = come_decrement_ref_count(right_249, ((struct sNode*)right_249)->finalize, ((struct sNode*)right_249)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional373=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional373) {
                info->p++;
                skip_spaces_and_lf(info);
                right_251=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value395=add_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value395);
                if(right_value395 && right_value395 != __result_obj__ && !__freed_obj__) { right_value395 = come_decrement_ref_count(right_value395, ((struct sNode*)right_value395)->finalize, ((struct sNode*)right_value395)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value395, right_value395 = (void*)0;
                __freed_obj__ = 0;
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2279, "struct sNode");
                _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value397=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value396=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2279, "struct sSubNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_251),(_Bool)0,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sSubNode_finalize;
                _inf_value10->clone=(void*)sSubNode_clone;
                _inf_value10->compile=(void*)sSubNode_compile;
                _inf_value10->sline=(void*)sSubNode_sline;
                _inf_value10->sname=(void*)sSubNode_sname;
                _inf_value10->terminated=(void*)sSubNode_terminated;
                _inf_value10->kind=(void*)sSubNode_kind;
                __result259__ = __result_obj__ = ((struct sNode*)(right_value402=_inf_value10));
                if(right_251 && !__freed_obj__) { right_251 = come_decrement_ref_count(right_251, ((struct sNode*)right_251)->finalize, ((struct sNode*)right_251)->_protocol_obj, 0, 0, 0); } 
                if(node_248 && !__freed_obj__) { node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value396);
                if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value396, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value396, right_value396 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value397);
                if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value397, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value397, right_value397 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value402);
                if(right_value402 && right_value402 != __result_obj__ && !__freed_obj__) { right_value402 = come_decrement_ref_count(right_value402, ((struct sNode*)right_value402)->finalize, ((struct sNode*)right_value402)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value402, right_value402 = (void*)0;
                __freed_obj__ = 0;
                return __result259__;
                if(right_251 && !__freed_obj__) { right_251 = come_decrement_ref_count(right_251, ((struct sNode*)right_251)->finalize, ((struct sNode*)right_251)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional383=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional383) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_253=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value403=add_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value403);
                    if(right_value403 && right_value403 != __result_obj__ && !__freed_obj__) { right_value403 = come_decrement_ref_count(right_value403, ((struct sNode*)right_value403)->finalize, ((struct sNode*)right_value403)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value403, right_value403 = (void*)0;
                    __freed_obj__ = 0;
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2288, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sAddNode*)(right_value405=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value404=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2288, "struct sAddNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_253),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sAddNode_finalize;
                    _inf_value11->clone=(void*)sAddNode_clone;
                    _inf_value11->compile=(void*)sAddNode_compile;
                    _inf_value11->sline=(void*)sAddNode_sline;
                    _inf_value11->sname=(void*)sAddNode_sname;
                    _inf_value11->terminated=(void*)sAddNode_terminated;
                    _inf_value11->kind=(void*)sAddNode_kind;
                    __result262__ = __result_obj__ = ((struct sNode*)(right_value410=_inf_value11));
                    if(right_253 && !__freed_obj__) { right_253 = come_decrement_ref_count(right_253, ((struct sNode*)right_253)->finalize, ((struct sNode*)right_253)->_protocol_obj, 0, 0, 0); } 
                    if(node_248 && !__freed_obj__) { node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value404);
                    if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value404, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value404, right_value404 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value405);
                    if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value405, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value405, right_value405 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value410);
                    if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { right_value410 = come_decrement_ref_count(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value410, right_value410 = (void*)0;
                    __freed_obj__ = 0;
                    return __result262__;
                    if(right_253 && !__freed_obj__) { right_253 = come_decrement_ref_count(right_253, ((struct sNode*)right_253)->finalize, ((struct sNode*)right_253)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional393=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional393) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_255=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value411=add_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value411);
                        if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { right_value411 = come_decrement_ref_count(right_value411, ((struct sNode*)right_value411)->finalize, ((struct sNode*)right_value411)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value411, right_value411 = (void*)0;
                        __freed_obj__ = 0;
                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2297, "struct sNode");
                        _inf_obj_value12=come_increment_ref_count(((struct sSubNode*)(right_value413=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value412=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2297, "struct sSubNode")))),(struct sNode*)come_increment_ref_count(node_248),(struct sNode*)come_increment_ref_count(right_255),(_Bool)1,info))));
                        _inf_value12->_protocol_obj=_inf_obj_value12;
                        _inf_value12->finalize=(void*)sSubNode_finalize;
                        _inf_value12->clone=(void*)sSubNode_clone;
                        _inf_value12->compile=(void*)sSubNode_compile;
                        _inf_value12->sline=(void*)sSubNode_sline;
                        _inf_value12->sname=(void*)sSubNode_sname;
                        _inf_value12->terminated=(void*)sSubNode_terminated;
                        _inf_value12->kind=(void*)sSubNode_kind;
                        __result265__ = __result_obj__ = ((struct sNode*)(right_value418=_inf_value12));
                        if(right_255 && !__freed_obj__) { right_255 = come_decrement_ref_count(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0); } 
                        if(node_248 && !__freed_obj__) { node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value412);
                        if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value412, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value412, right_value412 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value413);
                        if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value413, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value413, right_value413 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value418);
                        if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { right_value418 = come_decrement_ref_count(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value418, right_value418 = (void*)0;
                        __freed_obj__ = 0;
                        return __result265__;
                        if(right_255 && !__freed_obj__) { right_255 = come_decrement_ref_count(right_255, ((struct sNode*)right_255)->finalize, ((struct sNode*)right_255)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result266__ = __result_obj__ = node_248;
    if(node_248 && !__freed_obj__) { node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 1, 0); } 
    return __result266__;
    if(node_248 && !__freed_obj__) { node_248 = come_decrement_ref_count(node_248, ((struct sNode*)node_248)->finalize, ((struct sNode*)node_248)->_protocol_obj, 0, 0, 0); } 
}

static void sAddNode_finalize(struct sAddNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional384;
_Bool _if_conditional385;
_Bool _if_conditional386;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional384=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional384) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional385=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional385) {
                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional386=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional386) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional387;
struct sAddNode* __result260__;
void* right_value406;
struct sAddNode* result_254;
_Bool _if_conditional388;
void* right_value407;
struct sNode* __dec_obj187;
_Bool _if_conditional389;
void* right_value408;
struct sNode* __dec_obj188;
_Bool _if_conditional390;
_Bool _if_conditional391;
_Bool _if_conditional392;
void* right_value409;
char* __dec_obj189;
struct sAddNode* __result261__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value406 = (void*)0;
memset(&result_254, 0, sizeof(struct sAddNode*));
right_value407 = (void*)0;
right_value408 = (void*)0;
right_value409 = (void*)0;
                        if(_if_conditional387=self==(void*)0,                        _if_conditional387) {
                            __result260__ = __result_obj__ = (void*)0;
                            return __result260__;
                        }
                        result_254=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value406=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value406);
                        if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value406, right_value406 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional388=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional388) {
                            __dec_obj187=result_254->mLeft;
                            result_254->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value407=sNode_clone(self->mLeft))));
                            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value407);
                            if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { right_value407 = come_decrement_ref_count(right_value407, ((struct sNode*)right_value407)->finalize, ((struct sNode*)right_value407)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value407, right_value407 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional389=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional389) {
                            __dec_obj188=result_254->mRight;
                            result_254->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value408=sNode_clone(self->mRight))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value408);
                            if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { right_value408 = come_decrement_ref_count(right_value408, ((struct sNode*)right_value408)->finalize, ((struct sNode*)right_value408)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value408, right_value408 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional390=self!=((void*)0),                        _if_conditional390) {
                            result_254->mQuote=self->mQuote;
                        }
                        if(_if_conditional391=self!=((void*)0),                        _if_conditional391) {
                            result_254->sline=self->sline;
                        }
                        if(_if_conditional392=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional392) {
                            __dec_obj189=result_254->sname;
                            result_254->sname=(char*)come_increment_ref_count(((char*)(right_value409=string_clone(self->sname))));
                            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value409);
                            if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { right_value409 = come_decrement_ref_count(right_value409, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value409, right_value409 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        __result261__ = __result_obj__ = result_254;
                        if(result_254 && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,result_254, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result261__;
                        if(result_254 && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,result_254, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sSubNode_finalize(struct sSubNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional394;
_Bool _if_conditional395;
_Bool _if_conditional396;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional394=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional394) {
                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional395=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional395) {
                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional396=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional396) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional397;
struct sSubNode* __result263__;
void* right_value414;
struct sSubNode* result_256;
_Bool _if_conditional398;
void* right_value415;
struct sNode* __dec_obj190;
_Bool _if_conditional399;
void* right_value416;
struct sNode* __dec_obj191;
_Bool _if_conditional400;
_Bool _if_conditional401;
_Bool _if_conditional402;
void* right_value417;
char* __dec_obj192;
struct sSubNode* __result264__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value414 = (void*)0;
memset(&result_256, 0, sizeof(struct sSubNode*));
right_value415 = (void*)0;
right_value416 = (void*)0;
right_value417 = (void*)0;
                            if(_if_conditional397=self==(void*)0,                            _if_conditional397) {
                                __result263__ = __result_obj__ = (void*)0;
                                return __result263__;
                            }
                            result_256=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value414=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414);
                            if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value414, right_value414 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional398=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional398) {
                                __dec_obj190=result_256->mLeft;
                                result_256->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value415=sNode_clone(self->mLeft))));
                                if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value415);
                                if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { right_value415 = come_decrement_ref_count(right_value415, ((struct sNode*)right_value415)->finalize, ((struct sNode*)right_value415)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value415, right_value415 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional399=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional399) {
                                __dec_obj191=result_256->mRight;
                                result_256->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value416=sNode_clone(self->mRight))));
                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value416);
                                if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { right_value416 = come_decrement_ref_count(right_value416, ((struct sNode*)right_value416)->finalize, ((struct sNode*)right_value416)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value416, right_value416 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional400=self!=((void*)0),                            _if_conditional400) {
                                result_256->mQuote=self->mQuote;
                            }
                            if(_if_conditional401=self!=((void*)0),                            _if_conditional401) {
                                result_256->sline=self->sline;
                            }
                            if(_if_conditional402=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional402) {
                                __dec_obj192=result_256->sname;
                                result_256->sname=(char*)come_increment_ref_count(((char*)(right_value417=string_clone(self->sname))));
                                if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value417);
                                if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value417, right_value417 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            __result264__ = __result_obj__ = result_256;
                            if(result_256 && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result264__;
                            if(result_256 && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,result_256, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* shift_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value419;
struct sNode* node_257;
_Bool _while_condtional12;
_Bool _if_conditional403;
void* right_value420;
struct sNode* right_258;
void* right_value421;
void* right_value422;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value427;
struct sNode* __result269__;
_Bool _if_conditional413;
void* right_value428;
struct sNode* right_260;
void* right_value429;
void* right_value430;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value435;
struct sNode* __result272__;
_Bool _if_conditional423;
void* right_value436;
struct sNode* right_262;
void* right_value437;
void* right_value438;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* right_value443;
struct sNode* __result275__;
_Bool _if_conditional433;
void* right_value444;
struct sNode* right_264;
void* right_value445;
void* right_value446;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* right_value451;
struct sNode* __result278__;
struct sNode* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value419 = (void*)0;
memset(&node_257, 0, sizeof(struct sNode*));
right_value420 = (void*)0;
memset(&right_258, 0, sizeof(struct sNode*));
right_value421 = (void*)0;
right_value422 = (void*)0;
right_value427 = (void*)0;
right_value428 = (void*)0;
memset(&right_260, 0, sizeof(struct sNode*));
right_value429 = (void*)0;
right_value430 = (void*)0;
right_value435 = (void*)0;
right_value436 = (void*)0;
memset(&right_262, 0, sizeof(struct sNode*));
right_value437 = (void*)0;
right_value438 = (void*)0;
right_value443 = (void*)0;
right_value444 = (void*)0;
memset(&right_264, 0, sizeof(struct sNode*));
right_value445 = (void*)0;
right_value446 = (void*)0;
right_value451 = (void*)0;
    parse_sharp_v5(info);
    node_257=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value419=add_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value419);
    if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, ((struct sNode*)right_value419)->finalize, ((struct sNode*)right_value419)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value419, right_value419 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional12=*info->p,    _while_condtional12) {
        if(_if_conditional403=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional403) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value420=shift_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value420);
            if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { right_value420 = come_decrement_ref_count(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value420, right_value420 = (void*)0;
            __freed_obj__ = 0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2324, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value422=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value421=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2324, "struct sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_258),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sLShiftNode_sline;
            _inf_value13->sname=(void*)sLShiftNode_sname;
            _inf_value13->terminated=(void*)sLShiftNode_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result269__ = __result_obj__ = ((struct sNode*)(right_value427=_inf_value13));
            if(right_258 && !__freed_obj__) { right_258 = come_decrement_ref_count(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0, 0); } 
            if(node_257 && !__freed_obj__) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value421);
            if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value421, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value421, right_value421 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value422);
            if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value422, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value422, right_value422 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value427);
            if(right_value427 && right_value427 != __result_obj__ && !__freed_obj__) { right_value427 = come_decrement_ref_count(right_value427, ((struct sNode*)right_value427)->finalize, ((struct sNode*)right_value427)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value427, right_value427 = (void*)0;
            __freed_obj__ = 0;
            return __result269__;
            if(right_258 && !__freed_obj__) { right_258 = come_decrement_ref_count(right_258, ((struct sNode*)right_258)->finalize, ((struct sNode*)right_258)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional413=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional413) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_260=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value428=shift_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value428);
                if(right_value428 && right_value428 != __result_obj__ && !__freed_obj__) { right_value428 = come_decrement_ref_count(right_value428, ((struct sNode*)right_value428)->finalize, ((struct sNode*)right_value428)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value428, right_value428 = (void*)0;
                __freed_obj__ = 0;
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2332, "struct sNode");
                _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value430=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value429=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2332, "struct sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_260),(_Bool)0,info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sRShiftNode_finalize;
                _inf_value14->clone=(void*)sRShiftNode_clone;
                _inf_value14->compile=(void*)sRShiftNode_compile;
                _inf_value14->sline=(void*)sRShiftNode_sline;
                _inf_value14->sname=(void*)sRShiftNode_sname;
                _inf_value14->terminated=(void*)sRShiftNode_terminated;
                _inf_value14->kind=(void*)sRShiftNode_kind;
                __result272__ = __result_obj__ = ((struct sNode*)(right_value435=_inf_value14));
                if(right_260 && !__freed_obj__) { right_260 = come_decrement_ref_count(right_260, ((struct sNode*)right_260)->finalize, ((struct sNode*)right_260)->_protocol_obj, 0, 0, 0); } 
                if(node_257 && !__freed_obj__) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value429);
                if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value429, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value429, right_value429 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value430);
                if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value430, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value430, right_value430 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value435);
                if(right_value435 && right_value435 != __result_obj__ && !__freed_obj__) { right_value435 = come_decrement_ref_count(right_value435, ((struct sNode*)right_value435)->finalize, ((struct sNode*)right_value435)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value435, right_value435 = (void*)0;
                __freed_obj__ = 0;
                return __result272__;
                if(right_260 && !__freed_obj__) { right_260 = come_decrement_ref_count(right_260, ((struct sNode*)right_260)->finalize, ((struct sNode*)right_260)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional423=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional423) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_262=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value436=shift_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value436);
                    if(right_value436 && right_value436 != __result_obj__ && !__freed_obj__) { right_value436 = come_decrement_ref_count(right_value436, ((struct sNode*)right_value436)->finalize, ((struct sNode*)right_value436)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value436, right_value436 = (void*)0;
                    __freed_obj__ = 0;
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2340, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sLShiftNode*)(right_value438=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value437=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2340, "struct sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_262),(_Bool)1,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sLShiftNode_finalize;
                    _inf_value15->clone=(void*)sLShiftNode_clone;
                    _inf_value15->compile=(void*)sLShiftNode_compile;
                    _inf_value15->sline=(void*)sLShiftNode_sline;
                    _inf_value15->sname=(void*)sLShiftNode_sname;
                    _inf_value15->terminated=(void*)sLShiftNode_terminated;
                    _inf_value15->kind=(void*)sLShiftNode_kind;
                    __result275__ = __result_obj__ = ((struct sNode*)(right_value443=_inf_value15));
                    if(right_262 && !__freed_obj__) { right_262 = come_decrement_ref_count(right_262, ((struct sNode*)right_262)->finalize, ((struct sNode*)right_262)->_protocol_obj, 0, 0, 0); } 
                    if(node_257 && !__freed_obj__) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value437);
                    if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value437, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value437, right_value437 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value438);
                    if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value438, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value438, right_value438 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value443);
                    if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { right_value443 = come_decrement_ref_count(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value443, right_value443 = (void*)0;
                    __freed_obj__ = 0;
                    return __result275__;
                    if(right_262 && !__freed_obj__) { right_262 = come_decrement_ref_count(right_262, ((struct sNode*)right_262)->finalize, ((struct sNode*)right_262)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional433=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional433) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_264=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value444=shift_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value444);
                        if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { right_value444 = come_decrement_ref_count(right_value444, ((struct sNode*)right_value444)->finalize, ((struct sNode*)right_value444)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value444, right_value444 = (void*)0;
                        __freed_obj__ = 0;
                        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2348, "struct sNode");
                        _inf_obj_value16=come_increment_ref_count(((struct sRShiftNode*)(right_value446=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value445=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2348, "struct sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_257),(struct sNode*)come_increment_ref_count(right_264),(_Bool)1,info))));
                        _inf_value16->_protocol_obj=_inf_obj_value16;
                        _inf_value16->finalize=(void*)sRShiftNode_finalize;
                        _inf_value16->clone=(void*)sRShiftNode_clone;
                        _inf_value16->compile=(void*)sRShiftNode_compile;
                        _inf_value16->sline=(void*)sRShiftNode_sline;
                        _inf_value16->sname=(void*)sRShiftNode_sname;
                        _inf_value16->terminated=(void*)sRShiftNode_terminated;
                        _inf_value16->kind=(void*)sRShiftNode_kind;
                        __result278__ = __result_obj__ = ((struct sNode*)(right_value451=_inf_value16));
                        if(right_264 && !__freed_obj__) { right_264 = come_decrement_ref_count(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0); } 
                        if(node_257 && !__freed_obj__) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value445);
                        if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value445, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value445, right_value445 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value446);
                        if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value446, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value446, right_value446 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value451);
                        if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { right_value451 = come_decrement_ref_count(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value451, right_value451 = (void*)0;
                        __freed_obj__ = 0;
                        return __result278__;
                        if(right_264 && !__freed_obj__) { right_264 = come_decrement_ref_count(right_264, ((struct sNode*)right_264)->finalize, ((struct sNode*)right_264)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        break;
                    }
                }
            }
        }
    }
    parse_sharp_v5(info);
    __result279__ = __result_obj__ = node_257;
    if(node_257 && !__freed_obj__) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 1, 0); } 
    return __result279__;
    if(node_257 && !__freed_obj__) { node_257 = come_decrement_ref_count(node_257, ((struct sNode*)node_257)->finalize, ((struct sNode*)node_257)->_protocol_obj, 0, 0, 0); } 
}

static void sLShiftNode_finalize(struct sLShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional424;
_Bool _if_conditional425;
_Bool _if_conditional426;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional424=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional424) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional425=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional425) {
                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional426=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional426) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional427;
struct sLShiftNode* __result273__;
void* right_value439;
struct sLShiftNode* result_263;
_Bool _if_conditional428;
void* right_value440;
struct sNode* __dec_obj199;
_Bool _if_conditional429;
void* right_value441;
struct sNode* __dec_obj200;
_Bool _if_conditional430;
_Bool _if_conditional431;
_Bool _if_conditional432;
void* right_value442;
char* __dec_obj201;
struct sLShiftNode* __result274__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value439 = (void*)0;
memset(&result_263, 0, sizeof(struct sLShiftNode*));
right_value440 = (void*)0;
right_value441 = (void*)0;
right_value442 = (void*)0;
                        if(_if_conditional427=self==(void*)0,                        _if_conditional427) {
                            __result273__ = __result_obj__ = (void*)0;
                            return __result273__;
                        }
                        result_263=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value439=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value439);
                        if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value439, right_value439 = (void*)0;
                        __freed_obj__ = 0;
                        if(_if_conditional428=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional428) {
                            __dec_obj199=result_263->mLeft;
                            result_263->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value440=sNode_clone(self->mLeft))));
                            if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value440);
                            if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { right_value440 = come_decrement_ref_count(right_value440, ((struct sNode*)right_value440)->finalize, ((struct sNode*)right_value440)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value440, right_value440 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional429=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional429) {
                            __dec_obj200=result_263->mRight;
                            result_263->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value441=sNode_clone(self->mRight))));
                            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value441);
                            if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { right_value441 = come_decrement_ref_count(right_value441, ((struct sNode*)right_value441)->finalize, ((struct sNode*)right_value441)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value441, right_value441 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional430=self!=((void*)0),                        _if_conditional430) {
                            result_263->mQuote=self->mQuote;
                        }
                        if(_if_conditional431=self!=((void*)0),                        _if_conditional431) {
                            result_263->sline=self->sline;
                        }
                        if(_if_conditional432=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional432) {
                            __dec_obj201=result_263->sname;
                            result_263->sname=(char*)come_increment_ref_count(((char*)(right_value442=string_clone(self->sname))));
                            if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value442);
                            if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value442, right_value442 = (void*)0;
                            __freed_obj__ = 0;
                        }
                        __result274__ = __result_obj__ = result_263;
                        if(result_263 && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result274__;
                        if(result_263 && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,result_263, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sRShiftNode_finalize(struct sRShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional434;
_Bool _if_conditional435;
_Bool _if_conditional436;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional434=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional434) {
                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional435=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional435) {
                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional436=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional436) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional437;
struct sRShiftNode* __result276__;
void* right_value447;
struct sRShiftNode* result_265;
_Bool _if_conditional438;
void* right_value448;
struct sNode* __dec_obj202;
_Bool _if_conditional439;
void* right_value449;
struct sNode* __dec_obj203;
_Bool _if_conditional440;
_Bool _if_conditional441;
_Bool _if_conditional442;
void* right_value450;
char* __dec_obj204;
struct sRShiftNode* __result277__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value447 = (void*)0;
memset(&result_265, 0, sizeof(struct sRShiftNode*));
right_value448 = (void*)0;
right_value449 = (void*)0;
right_value450 = (void*)0;
                            if(_if_conditional437=self==(void*)0,                            _if_conditional437) {
                                __result276__ = __result_obj__ = (void*)0;
                                return __result276__;
                            }
                            result_265=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value447=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
                            if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value447, right_value447 = (void*)0;
                            __freed_obj__ = 0;
                            if(_if_conditional438=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional438) {
                                __dec_obj202=result_265->mLeft;
                                result_265->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value448=sNode_clone(self->mLeft))));
                                if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value448);
                                if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { right_value448 = come_decrement_ref_count(right_value448, ((struct sNode*)right_value448)->finalize, ((struct sNode*)right_value448)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value448, right_value448 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional439=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional439) {
                                __dec_obj203=result_265->mRight;
                                result_265->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value449=sNode_clone(self->mRight))));
                                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value449);
                                if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { right_value449 = come_decrement_ref_count(right_value449, ((struct sNode*)right_value449)->finalize, ((struct sNode*)right_value449)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value449, right_value449 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional440=self!=((void*)0),                            _if_conditional440) {
                                result_265->mQuote=self->mQuote;
                            }
                            if(_if_conditional441=self!=((void*)0),                            _if_conditional441) {
                                result_265->sline=self->sline;
                            }
                            if(_if_conditional442=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional442) {
                                __dec_obj204=result_265->sname;
                                result_265->sname=(char*)come_increment_ref_count(((char*)(right_value450=string_clone(self->sname))));
                                if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value450);
                                if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { right_value450 = come_decrement_ref_count(right_value450, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value450, right_value450 = (void*)0;
                                __freed_obj__ = 0;
                            }
                            __result277__ = __result_obj__ = result_265;
                            if(result_265 && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result277__;
                            if(result_265 && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,result_265, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* comparison_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value452;
struct sNode* node_266;
_Bool _while_condtional13;
_Bool _if_conditional443;
void* right_value453;
struct sNode* right_267;
void* right_value454;
void* right_value455;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* right_value460;
struct sNode* __result282__;
_Bool _if_conditional453;
void* right_value461;
struct sNode* right_269;
void* right_value462;
void* right_value463;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* right_value468;
struct sNode* __result285__;
_Bool _if_conditional463;
void* right_value469;
struct sNode* right_271;
void* right_value470;
void* right_value471;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* right_value476;
struct sNode* __result288__;
_Bool _if_conditional473;
void* right_value477;
struct sNode* right_273;
void* right_value478;
void* right_value479;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* right_value484;
struct sNode* __result291__;
_Bool _if_conditional483;
void* right_value485;
struct sNode* right_275;
void* right_value486;
void* right_value487;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* right_value492;
struct sNode* __result294__;
_Bool _if_conditional493;
void* right_value493;
struct sNode* right_277;
void* right_value494;
void* right_value495;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* right_value500;
struct sNode* __result297__;
_Bool _if_conditional503;
void* right_value501;
struct sNode* right_279;
void* right_value502;
void* right_value503;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* right_value508;
struct sNode* __result300__;
_Bool _if_conditional513;
void* right_value509;
struct sNode* right_281;
void* right_value510;
void* right_value511;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* right_value516;
struct sNode* __result303__;
struct sNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value452 = (void*)0;
memset(&node_266, 0, sizeof(struct sNode*));
right_value453 = (void*)0;
memset(&right_267, 0, sizeof(struct sNode*));
right_value454 = (void*)0;
right_value455 = (void*)0;
right_value460 = (void*)0;
right_value461 = (void*)0;
memset(&right_269, 0, sizeof(struct sNode*));
right_value462 = (void*)0;
right_value463 = (void*)0;
right_value468 = (void*)0;
right_value469 = (void*)0;
memset(&right_271, 0, sizeof(struct sNode*));
right_value470 = (void*)0;
right_value471 = (void*)0;
right_value476 = (void*)0;
right_value477 = (void*)0;
memset(&right_273, 0, sizeof(struct sNode*));
right_value478 = (void*)0;
right_value479 = (void*)0;
right_value484 = (void*)0;
right_value485 = (void*)0;
memset(&right_275, 0, sizeof(struct sNode*));
right_value486 = (void*)0;
right_value487 = (void*)0;
right_value492 = (void*)0;
right_value493 = (void*)0;
memset(&right_277, 0, sizeof(struct sNode*));
right_value494 = (void*)0;
right_value495 = (void*)0;
right_value500 = (void*)0;
right_value501 = (void*)0;
memset(&right_279, 0, sizeof(struct sNode*));
right_value502 = (void*)0;
right_value503 = (void*)0;
right_value508 = (void*)0;
right_value509 = (void*)0;
memset(&right_281, 0, sizeof(struct sNode*));
right_value510 = (void*)0;
right_value511 = (void*)0;
right_value516 = (void*)0;
    parse_sharp_v5(info);
    node_266=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value452=shift_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value452);
    if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, ((struct sNode*)right_value452)->finalize, ((struct sNode*)right_value452)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value452, right_value452 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional13=*info->p,    _while_condtional13) {
        if(_if_conditional443=*info->p==62&&*(info->p+1)==61,        _if_conditional443) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value453=shift_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value453);
            if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { right_value453 = come_decrement_ref_count(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value453, right_value453 = (void*)0;
            __freed_obj__ = 0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2375, "struct sNode");
            _inf_obj_value17=come_increment_ref_count(((struct sGtEqNode*)(right_value455=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value454=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2375, "struct sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_267),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sGtEqNode_sline;
            _inf_value17->sname=(void*)sGtEqNode_sname;
            _inf_value17->terminated=(void*)sGtEqNode_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result282__ = __result_obj__ = ((struct sNode*)(right_value460=_inf_value17));
            if(right_267 && !__freed_obj__) { right_267 = come_decrement_ref_count(right_267, ((struct sNode*)right_267)->finalize, ((struct sNode*)right_267)->_protocol_obj, 0, 0, 0); } 
            if(node_266 && !__freed_obj__) { node_266 = come_decrement_ref_count(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value454);
            if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value454, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value454, right_value454 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value455);
            if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value455, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value455, right_value455 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value460);
            if(right_value460 && right_value460 != __result_obj__ && !__freed_obj__) { right_value460 = come_decrement_ref_count(right_value460, ((struct sNode*)right_value460)->finalize, ((struct sNode*)right_value460)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value460, right_value460 = (void*)0;
            __freed_obj__ = 0;
            return __result282__;
            if(right_267 && !__freed_obj__) { right_267 = come_decrement_ref_count(right_267, ((struct sNode*)right_267)->finalize, ((struct sNode*)right_267)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional453=*info->p==60&&*(info->p+1)==61,            _if_conditional453) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_269=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value461=shift_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value461);
                if(right_value461 && right_value461 != __result_obj__ && !__freed_obj__) { right_value461 = come_decrement_ref_count(right_value461, ((struct sNode*)right_value461)->finalize, ((struct sNode*)right_value461)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value461, right_value461 = (void*)0;
                __freed_obj__ = 0;
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2383, "struct sNode");
                _inf_obj_value18=come_increment_ref_count(((struct sLtEqNode*)(right_value463=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value462=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2383, "struct sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_269),(_Bool)0,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLtEqNode_finalize;
                _inf_value18->clone=(void*)sLtEqNode_clone;
                _inf_value18->compile=(void*)sLtEqNode_compile;
                _inf_value18->sline=(void*)sLtEqNode_sline;
                _inf_value18->sname=(void*)sLtEqNode_sname;
                _inf_value18->terminated=(void*)sLtEqNode_terminated;
                _inf_value18->kind=(void*)sLtEqNode_kind;
                __result285__ = __result_obj__ = ((struct sNode*)(right_value468=_inf_value18));
                if(right_269 && !__freed_obj__) { right_269 = come_decrement_ref_count(right_269, ((struct sNode*)right_269)->finalize, ((struct sNode*)right_269)->_protocol_obj, 0, 0, 0); } 
                if(node_266 && !__freed_obj__) { node_266 = come_decrement_ref_count(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value462);
                if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value462, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value462, right_value462 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value463);
                if(right_value463 && right_value463 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value463, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value463, right_value463 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value468);
                if(right_value468 && right_value468 != __result_obj__ && !__freed_obj__) { right_value468 = come_decrement_ref_count(right_value468, ((struct sNode*)right_value468)->finalize, ((struct sNode*)right_value468)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value468, right_value468 = (void*)0;
                __freed_obj__ = 0;
                return __result285__;
                if(right_269 && !__freed_obj__) { right_269 = come_decrement_ref_count(right_269, ((struct sNode*)right_269)->finalize, ((struct sNode*)right_269)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional463=*info->p==62&&*(info->p+1)!=62,                _if_conditional463) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_271=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value469=shift_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value469);
                    if(right_value469 && right_value469 != __result_obj__ && !__freed_obj__) { right_value469 = come_decrement_ref_count(right_value469, ((struct sNode*)right_value469)->finalize, ((struct sNode*)right_value469)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value469, right_value469 = (void*)0;
                    __freed_obj__ = 0;
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2391, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sGtNode*)(right_value471=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value470=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2391, "struct sGtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_271),(_Bool)0,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sGtNode_finalize;
                    _inf_value19->clone=(void*)sGtNode_clone;
                    _inf_value19->compile=(void*)sGtNode_compile;
                    _inf_value19->sline=(void*)sGtNode_sline;
                    _inf_value19->sname=(void*)sGtNode_sname;
                    _inf_value19->terminated=(void*)sGtNode_terminated;
                    _inf_value19->kind=(void*)sGtNode_kind;
                    __result288__ = __result_obj__ = ((struct sNode*)(right_value476=_inf_value19));
                    if(right_271 && !__freed_obj__) { right_271 = come_decrement_ref_count(right_271, ((struct sNode*)right_271)->finalize, ((struct sNode*)right_271)->_protocol_obj, 0, 0, 0); } 
                    if(node_266 && !__freed_obj__) { node_266 = come_decrement_ref_count(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value470);
                    if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value470, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value470, right_value470 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value471);
                    if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value471, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value471, right_value471 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value476);
                    if(right_value476 && right_value476 != __result_obj__ && !__freed_obj__) { right_value476 = come_decrement_ref_count(right_value476, ((struct sNode*)right_value476)->finalize, ((struct sNode*)right_value476)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value476, right_value476 = (void*)0;
                    __freed_obj__ = 0;
                    return __result288__;
                    if(right_271 && !__freed_obj__) { right_271 = come_decrement_ref_count(right_271, ((struct sNode*)right_271)->finalize, ((struct sNode*)right_271)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional473=*info->p==60&&*(info->p+1)!=60,                    _if_conditional473) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_273=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value477=shift_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value477);
                        if(right_value477 && right_value477 != __result_obj__ && !__freed_obj__) { right_value477 = come_decrement_ref_count(right_value477, ((struct sNode*)right_value477)->finalize, ((struct sNode*)right_value477)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value477, right_value477 = (void*)0;
                        __freed_obj__ = 0;
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2399, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sLtNode*)(right_value479=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value478=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2399, "struct sLtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_273),(_Bool)0,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sLtNode_finalize;
                        _inf_value20->clone=(void*)sLtNode_clone;
                        _inf_value20->compile=(void*)sLtNode_compile;
                        _inf_value20->sline=(void*)sLtNode_sline;
                        _inf_value20->sname=(void*)sLtNode_sname;
                        _inf_value20->terminated=(void*)sLtNode_terminated;
                        _inf_value20->kind=(void*)sLtNode_kind;
                        __result291__ = __result_obj__ = ((struct sNode*)(right_value484=_inf_value20));
                        if(right_273 && !__freed_obj__) { right_273 = come_decrement_ref_count(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0); } 
                        if(node_266 && !__freed_obj__) { node_266 = come_decrement_ref_count(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value478);
                        if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value478, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value478, right_value478 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value479);
                        if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value479, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value479, right_value479 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value484);
                        if(right_value484 && right_value484 != __result_obj__ && !__freed_obj__) { right_value484 = come_decrement_ref_count(right_value484, ((struct sNode*)right_value484)->finalize, ((struct sNode*)right_value484)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value484, right_value484 = (void*)0;
                        __freed_obj__ = 0;
                        return __result291__;
                        if(right_273 && !__freed_obj__) { right_273 = come_decrement_ref_count(right_273, ((struct sNode*)right_273)->finalize, ((struct sNode*)right_273)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional483=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional483) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_275=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value485=shift_exp(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value485);
                            if(right_value485 && right_value485 != __result_obj__ && !__freed_obj__) { right_value485 = come_decrement_ref_count(right_value485, ((struct sNode*)right_value485)->finalize, ((struct sNode*)right_value485)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value485, right_value485 = (void*)0;
                            __freed_obj__ = 0;
                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2407, "struct sNode");
                            _inf_obj_value21=come_increment_ref_count(((struct sGtEqNode*)(right_value487=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value486=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2407, "struct sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_275),(_Bool)1,info))));
                            _inf_value21->_protocol_obj=_inf_obj_value21;
                            _inf_value21->finalize=(void*)sGtEqNode_finalize;
                            _inf_value21->clone=(void*)sGtEqNode_clone;
                            _inf_value21->compile=(void*)sGtEqNode_compile;
                            _inf_value21->sline=(void*)sGtEqNode_sline;
                            _inf_value21->sname=(void*)sGtEqNode_sname;
                            _inf_value21->terminated=(void*)sGtEqNode_terminated;
                            _inf_value21->kind=(void*)sGtEqNode_kind;
                            __result294__ = __result_obj__ = ((struct sNode*)(right_value492=_inf_value21));
                            if(right_275 && !__freed_obj__) { right_275 = come_decrement_ref_count(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0); } 
                            if(node_266 && !__freed_obj__) { node_266 = come_decrement_ref_count(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value486);
                            if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value486, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value486, right_value486 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value487);
                            if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value487, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value487, right_value487 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value492);
                            if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { right_value492 = come_decrement_ref_count(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value492, right_value492 = (void*)0;
                            __freed_obj__ = 0;
                            return __result294__;
                            if(right_275 && !__freed_obj__) { right_275 = come_decrement_ref_count(right_275, ((struct sNode*)right_275)->finalize, ((struct sNode*)right_275)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional493=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional493) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_277=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value493=shift_exp(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value493);
                                if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { right_value493 = come_decrement_ref_count(right_value493, ((struct sNode*)right_value493)->finalize, ((struct sNode*)right_value493)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value493, right_value493 = (void*)0;
                                __freed_obj__ = 0;
                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2415, "struct sNode");
                                _inf_obj_value22=come_increment_ref_count(((struct sLtEqNode*)(right_value495=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value494=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2415, "struct sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_277),(_Bool)1,info))));
                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                _inf_value22->finalize=(void*)sLtEqNode_finalize;
                                _inf_value22->clone=(void*)sLtEqNode_clone;
                                _inf_value22->compile=(void*)sLtEqNode_compile;
                                _inf_value22->sline=(void*)sLtEqNode_sline;
                                _inf_value22->sname=(void*)sLtEqNode_sname;
                                _inf_value22->terminated=(void*)sLtEqNode_terminated;
                                _inf_value22->kind=(void*)sLtEqNode_kind;
                                __result297__ = __result_obj__ = ((struct sNode*)(right_value500=_inf_value22));
                                if(right_277 && !__freed_obj__) { right_277 = come_decrement_ref_count(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0); } 
                                if(node_266 && !__freed_obj__) { node_266 = come_decrement_ref_count(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value494);
                                if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value494, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value494, right_value494 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value495);
                                if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value495, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value495, right_value495 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value500);
                                if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { right_value500 = come_decrement_ref_count(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value500, right_value500 = (void*)0;
                                __freed_obj__ = 0;
                                return __result297__;
                                if(right_277 && !__freed_obj__) { right_277 = come_decrement_ref_count(right_277, ((struct sNode*)right_277)->finalize, ((struct sNode*)right_277)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional503=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional503) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_279=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value501=shift_exp(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value501);
                                    if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { right_value501 = come_decrement_ref_count(right_value501, ((struct sNode*)right_value501)->finalize, ((struct sNode*)right_value501)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value501, right_value501 = (void*)0;
                                    __freed_obj__ = 0;
                                    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2423, "struct sNode");
                                    _inf_obj_value23=come_increment_ref_count(((struct sGtNode*)(right_value503=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value502=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2423, "struct sGtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_279),(_Bool)1,info))));
                                    _inf_value23->_protocol_obj=_inf_obj_value23;
                                    _inf_value23->finalize=(void*)sGtNode_finalize;
                                    _inf_value23->clone=(void*)sGtNode_clone;
                                    _inf_value23->compile=(void*)sGtNode_compile;
                                    _inf_value23->sline=(void*)sGtNode_sline;
                                    _inf_value23->sname=(void*)sGtNode_sname;
                                    _inf_value23->terminated=(void*)sGtNode_terminated;
                                    _inf_value23->kind=(void*)sGtNode_kind;
                                    __result300__ = __result_obj__ = ((struct sNode*)(right_value508=_inf_value23));
                                    if(right_279 && !__freed_obj__) { right_279 = come_decrement_ref_count(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0); } 
                                    if(node_266 && !__freed_obj__) { node_266 = come_decrement_ref_count(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value502);
                                    if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value502, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value502, right_value502 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value503);
                                    if(right_value503 && right_value503 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value503, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value503, right_value503 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value508);
                                    if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { right_value508 = come_decrement_ref_count(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[2] = right_value508, right_value508 = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result300__;
                                    if(right_279 && !__freed_obj__) { right_279 = come_decrement_ref_count(right_279, ((struct sNode*)right_279)->finalize, ((struct sNode*)right_279)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional513=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional513) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_281=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value509=shift_exp(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value509);
                                        if(right_value509 && right_value509 != __result_obj__ && !__freed_obj__) { right_value509 = come_decrement_ref_count(right_value509, ((struct sNode*)right_value509)->finalize, ((struct sNode*)right_value509)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value509, right_value509 = (void*)0;
                                        __freed_obj__ = 0;
                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2431, "struct sNode");
                                        _inf_obj_value24=come_increment_ref_count(((struct sLtNode*)(right_value511=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value510=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2431, "struct sLtNode")))),(struct sNode*)come_increment_ref_count(node_266),(struct sNode*)come_increment_ref_count(right_281),(_Bool)1,info))));
                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                        _inf_value24->finalize=(void*)sLtNode_finalize;
                                        _inf_value24->clone=(void*)sLtNode_clone;
                                        _inf_value24->compile=(void*)sLtNode_compile;
                                        _inf_value24->sline=(void*)sLtNode_sline;
                                        _inf_value24->sname=(void*)sLtNode_sname;
                                        _inf_value24->terminated=(void*)sLtNode_terminated;
                                        _inf_value24->kind=(void*)sLtNode_kind;
                                        __result303__ = __result_obj__ = ((struct sNode*)(right_value516=_inf_value24));
                                        if(right_281 && !__freed_obj__) { right_281 = come_decrement_ref_count(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0); } 
                                        if(node_266 && !__freed_obj__) { node_266 = come_decrement_ref_count(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value510);
                                        if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value510, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value510, right_value510 = (void*)0;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value511);
                                        if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value511, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value511, right_value511 = (void*)0;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value516);
                                        if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { right_value516 = come_decrement_ref_count(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[2] = right_value516, right_value516 = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result303__;
                                        if(right_281 && !__freed_obj__) { right_281 = come_decrement_ref_count(right_281, ((struct sNode*)right_281)->finalize, ((struct sNode*)right_281)->_protocol_obj, 0, 0, 0); } 
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
    __result304__ = __result_obj__ = node_266;
    if(node_266 && !__freed_obj__) { node_266 = come_decrement_ref_count(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 1, 0); } 
    return __result304__;
    if(node_266 && !__freed_obj__) { node_266 = come_decrement_ref_count(node_266, ((struct sNode*)node_266)->finalize, ((struct sNode*)node_266)->_protocol_obj, 0, 0, 0); } 
}

static void sGtEqNode_finalize(struct sGtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional484;
_Bool _if_conditional485;
_Bool _if_conditional486;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional484=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional484) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional485=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional485) {
                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional486=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional486) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional487;
struct sGtEqNode* __result292__;
void* right_value488;
struct sGtEqNode* result_276;
_Bool _if_conditional488;
void* right_value489;
struct sNode* __dec_obj217;
_Bool _if_conditional489;
void* right_value490;
struct sNode* __dec_obj218;
_Bool _if_conditional490;
_Bool _if_conditional491;
_Bool _if_conditional492;
void* right_value491;
char* __dec_obj219;
struct sGtEqNode* __result293__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value488 = (void*)0;
memset(&result_276, 0, sizeof(struct sGtEqNode*));
right_value489 = (void*)0;
right_value490 = (void*)0;
right_value491 = (void*)0;
                                if(_if_conditional487=self==(void*)0,                                _if_conditional487) {
                                    __result292__ = __result_obj__ = (void*)0;
                                    return __result292__;
                                }
                                result_276=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value488=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value488);
                                if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value488, right_value488 = (void*)0;
                                __freed_obj__ = 0;
                                if(_if_conditional488=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional488) {
                                    __dec_obj217=result_276->mLeft;
                                    result_276->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value489=sNode_clone(self->mLeft))));
                                    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value489);
                                    if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { right_value489 = come_decrement_ref_count(right_value489, ((struct sNode*)right_value489)->finalize, ((struct sNode*)right_value489)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value489, right_value489 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional489=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional489) {
                                    __dec_obj218=result_276->mRight;
                                    result_276->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value490=sNode_clone(self->mRight))));
                                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value490);
                                    if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { right_value490 = come_decrement_ref_count(right_value490, ((struct sNode*)right_value490)->finalize, ((struct sNode*)right_value490)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value490, right_value490 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional490=self!=((void*)0),                                _if_conditional490) {
                                    result_276->mQuote=self->mQuote;
                                }
                                if(_if_conditional491=self!=((void*)0),                                _if_conditional491) {
                                    result_276->sline=self->sline;
                                }
                                if(_if_conditional492=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional492) {
                                    __dec_obj219=result_276->sname;
                                    result_276->sname=(char*)come_increment_ref_count(((char*)(right_value491=string_clone(self->sname))));
                                    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value491);
                                    if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { right_value491 = come_decrement_ref_count(right_value491, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value491, right_value491 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                __result293__ = __result_obj__ = result_276;
                                if(result_276 && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result293__;
                                if(result_276 && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,result_276, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLtEqNode_finalize(struct sLtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional494;
_Bool _if_conditional495;
_Bool _if_conditional496;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional494=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional494) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional495=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional495) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional496=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional496) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional497;
struct sLtEqNode* __result295__;
void* right_value496;
struct sLtEqNode* result_278;
_Bool _if_conditional498;
void* right_value497;
struct sNode* __dec_obj220;
_Bool _if_conditional499;
void* right_value498;
struct sNode* __dec_obj221;
_Bool _if_conditional500;
_Bool _if_conditional501;
_Bool _if_conditional502;
void* right_value499;
char* __dec_obj222;
struct sLtEqNode* __result296__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value496 = (void*)0;
memset(&result_278, 0, sizeof(struct sLtEqNode*));
right_value497 = (void*)0;
right_value498 = (void*)0;
right_value499 = (void*)0;
                                    if(_if_conditional497=self==(void*)0,                                    _if_conditional497) {
                                        __result295__ = __result_obj__ = (void*)0;
                                        return __result295__;
                                    }
                                    result_278=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value496=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value496);
                                    if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value496, right_value496 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional498=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional498) {
                                        __dec_obj220=result_278->mLeft;
                                        result_278->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value497=sNode_clone(self->mLeft))));
                                        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value497);
                                        if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { right_value497 = come_decrement_ref_count(right_value497, ((struct sNode*)right_value497)->finalize, ((struct sNode*)right_value497)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value497, right_value497 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional499=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional499) {
                                        __dec_obj221=result_278->mRight;
                                        result_278->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value498=sNode_clone(self->mRight))));
                                        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value498);
                                        if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { right_value498 = come_decrement_ref_count(right_value498, ((struct sNode*)right_value498)->finalize, ((struct sNode*)right_value498)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value498, right_value498 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional500=self!=((void*)0),                                    _if_conditional500) {
                                        result_278->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional501=self!=((void*)0),                                    _if_conditional501) {
                                        result_278->sline=self->sline;
                                    }
                                    if(_if_conditional502=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional502) {
                                        __dec_obj222=result_278->sname;
                                        result_278->sname=(char*)come_increment_ref_count(((char*)(right_value499=string_clone(self->sname))));
                                        if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value499);
                                        if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { right_value499 = come_decrement_ref_count(right_value499, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value499, right_value499 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    __result296__ = __result_obj__ = result_278;
                                    if(result_278 && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result296__;
                                    if(result_278 && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,result_278, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sGtNode_finalize(struct sGtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional504;
_Bool _if_conditional505;
_Bool _if_conditional506;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional504=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional504) {
                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional505=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional505) {
                                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional506=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional506) {
                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional507;
struct sGtNode* __result298__;
void* right_value504;
struct sGtNode* result_280;
_Bool _if_conditional508;
void* right_value505;
struct sNode* __dec_obj223;
_Bool _if_conditional509;
void* right_value506;
struct sNode* __dec_obj224;
_Bool _if_conditional510;
_Bool _if_conditional511;
_Bool _if_conditional512;
void* right_value507;
char* __dec_obj225;
struct sGtNode* __result299__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value504 = (void*)0;
memset(&result_280, 0, sizeof(struct sGtNode*));
right_value505 = (void*)0;
right_value506 = (void*)0;
right_value507 = (void*)0;
                                        if(_if_conditional507=self==(void*)0,                                        _if_conditional507) {
                                            __result298__ = __result_obj__ = (void*)0;
                                            return __result298__;
                                        }
                                        result_280=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value504=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value504);
                                        if(right_value504 && right_value504 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value504, right_value504 = (void*)0;
                                        __freed_obj__ = 0;
                                        if(_if_conditional508=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional508) {
                                            __dec_obj223=result_280->mLeft;
                                            result_280->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value505=sNode_clone(self->mLeft))));
                                            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value505);
                                            if(right_value505 && right_value505 != __result_obj__ && !__freed_obj__) { right_value505 = come_decrement_ref_count(right_value505, ((struct sNode*)right_value505)->finalize, ((struct sNode*)right_value505)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value505, right_value505 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional509=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional509) {
                                            __dec_obj224=result_280->mRight;
                                            result_280->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value506=sNode_clone(self->mRight))));
                                            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value506);
                                            if(right_value506 && right_value506 != __result_obj__ && !__freed_obj__) { right_value506 = come_decrement_ref_count(right_value506, ((struct sNode*)right_value506)->finalize, ((struct sNode*)right_value506)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value506, right_value506 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional510=self!=((void*)0),                                        _if_conditional510) {
                                            result_280->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional511=self!=((void*)0),                                        _if_conditional511) {
                                            result_280->sline=self->sline;
                                        }
                                        if(_if_conditional512=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional512) {
                                            __dec_obj225=result_280->sname;
                                            result_280->sname=(char*)come_increment_ref_count(((char*)(right_value507=string_clone(self->sname))));
                                            if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value507);
                                            if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { right_value507 = come_decrement_ref_count(right_value507, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value507, right_value507 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        __result299__ = __result_obj__ = result_280;
                                        if(result_280 && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result299__;
                                        if(result_280 && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,result_280, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sLtNode_finalize(struct sLtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional514;
_Bool _if_conditional515;
_Bool _if_conditional516;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional514=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional514) {
                                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional515=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional515) {
                                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional516=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional516) {
                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional517;
struct sLtNode* __result301__;
void* right_value512;
struct sLtNode* result_282;
_Bool _if_conditional518;
void* right_value513;
struct sNode* __dec_obj226;
_Bool _if_conditional519;
void* right_value514;
struct sNode* __dec_obj227;
_Bool _if_conditional520;
_Bool _if_conditional521;
_Bool _if_conditional522;
void* right_value515;
char* __dec_obj228;
struct sLtNode* __result302__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value512 = (void*)0;
memset(&result_282, 0, sizeof(struct sLtNode*));
right_value513 = (void*)0;
right_value514 = (void*)0;
right_value515 = (void*)0;
                                            if(_if_conditional517=self==(void*)0,                                            _if_conditional517) {
                                                __result301__ = __result_obj__ = (void*)0;
                                                return __result301__;
                                            }
                                            result_282=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value512=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode"))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value512);
                                            if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value512, right_value512 = (void*)0;
                                            __freed_obj__ = 0;
                                            if(_if_conditional518=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional518) {
                                                __dec_obj226=result_282->mLeft;
                                                result_282->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value513=sNode_clone(self->mLeft))));
                                                if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value513);
                                                if(right_value513 && right_value513 != __result_obj__ && !__freed_obj__) { right_value513 = come_decrement_ref_count(right_value513, ((struct sNode*)right_value513)->finalize, ((struct sNode*)right_value513)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value513, right_value513 = (void*)0;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional519=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional519) {
                                                __dec_obj227=result_282->mRight;
                                                result_282->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value514=sNode_clone(self->mRight))));
                                                if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value514);
                                                if(right_value514 && right_value514 != __result_obj__ && !__freed_obj__) { right_value514 = come_decrement_ref_count(right_value514, ((struct sNode*)right_value514)->finalize, ((struct sNode*)right_value514)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value514, right_value514 = (void*)0;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional520=self!=((void*)0),                                            _if_conditional520) {
                                                result_282->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional521=self!=((void*)0),                                            _if_conditional521) {
                                                result_282->sline=self->sline;
                                            }
                                            if(_if_conditional522=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional522) {
                                                __dec_obj228=result_282->sname;
                                                result_282->sname=(char*)come_increment_ref_count(((char*)(right_value515=string_clone(self->sname))));
                                                if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value515);
                                                if(right_value515 && right_value515 != __result_obj__ && !__freed_obj__) { right_value515 = come_decrement_ref_count(right_value515, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value515, right_value515 = (void*)0;
                                                __freed_obj__ = 0;
                                            }
                                            __result302__ = __result_obj__ = result_282;
                                            if(result_282 && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result302__;
                                            if(result_282 && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,result_282, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* eq_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value517;
struct sNode* node_283;
_Bool _while_condtional14;
_Bool _if_conditional523;
void* right_value518;
struct sNode* right_284;
void* right_value519;
void* right_value520;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* right_value525;
struct sNode* __result307__;
_Bool _if_conditional533;
void* right_value526;
struct sNode* right_286;
void* right_value527;
void* right_value528;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* right_value533;
struct sNode* __result310__;
_Bool _if_conditional543;
void* right_value534;
struct sNode* right_288;
void* right_value535;
void* right_value536;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* right_value541;
struct sNode* __result313__;
_Bool _if_conditional553;
void* right_value542;
struct sNode* right_290;
void* right_value543;
void* right_value544;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* right_value549;
struct sNode* __result316__;
_Bool _if_conditional563;
void* right_value550;
struct sNode* right_292;
void* right_value551;
void* right_value552;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* right_value557;
struct sNode* __result319__;
_Bool _if_conditional573;
void* right_value558;
struct sNode* right_294;
void* right_value559;
void* right_value560;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* right_value565;
struct sNode* __result322__;
_Bool _if_conditional583;
void* right_value566;
struct sNode* right_296;
void* right_value567;
void* right_value568;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* right_value573;
struct sNode* __result325__;
_Bool _if_conditional593;
void* right_value574;
struct sNode* right_298;
void* right_value575;
void* right_value576;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* right_value581;
struct sNode* __result328__;
struct sNode* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value517 = (void*)0;
memset(&node_283, 0, sizeof(struct sNode*));
right_value518 = (void*)0;
memset(&right_284, 0, sizeof(struct sNode*));
right_value519 = (void*)0;
right_value520 = (void*)0;
right_value525 = (void*)0;
right_value526 = (void*)0;
memset(&right_286, 0, sizeof(struct sNode*));
right_value527 = (void*)0;
right_value528 = (void*)0;
right_value533 = (void*)0;
right_value534 = (void*)0;
memset(&right_288, 0, sizeof(struct sNode*));
right_value535 = (void*)0;
right_value536 = (void*)0;
right_value541 = (void*)0;
right_value542 = (void*)0;
memset(&right_290, 0, sizeof(struct sNode*));
right_value543 = (void*)0;
right_value544 = (void*)0;
right_value549 = (void*)0;
right_value550 = (void*)0;
memset(&right_292, 0, sizeof(struct sNode*));
right_value551 = (void*)0;
right_value552 = (void*)0;
right_value557 = (void*)0;
right_value558 = (void*)0;
memset(&right_294, 0, sizeof(struct sNode*));
right_value559 = (void*)0;
right_value560 = (void*)0;
right_value565 = (void*)0;
right_value566 = (void*)0;
memset(&right_296, 0, sizeof(struct sNode*));
right_value567 = (void*)0;
right_value568 = (void*)0;
right_value573 = (void*)0;
right_value574 = (void*)0;
memset(&right_298, 0, sizeof(struct sNode*));
right_value575 = (void*)0;
right_value576 = (void*)0;
right_value581 = (void*)0;
    parse_sharp_v5(info);
    node_283=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value517=comparison_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value517);
    if(right_value517 && right_value517 != __result_obj__ && !__freed_obj__) { right_value517 = come_decrement_ref_count(right_value517, ((struct sNode*)right_value517)->finalize, ((struct sNode*)right_value517)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value517, right_value517 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional14=*info->p,    _while_condtional14) {
        if(_if_conditional523=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional523) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value518=eq_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value518);
            if(right_value518 && right_value518 != __result_obj__ && !__freed_obj__) { right_value518 = come_decrement_ref_count(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value518, right_value518 = (void*)0;
            __freed_obj__ = 0;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2458, "struct sNode");
            _inf_obj_value25=come_increment_ref_count(((struct sEq2Node*)(right_value520=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value519=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2458, "struct sEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_284),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sEq2Node_sline;
            _inf_value25->sname=(void*)sEq2Node_sname;
            _inf_value25->terminated=(void*)sEq2Node_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result307__ = __result_obj__ = ((struct sNode*)(right_value525=_inf_value25));
            if(right_284 && !__freed_obj__) { right_284 = come_decrement_ref_count(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0); } 
            if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value519);
            if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value519, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value519, right_value519 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value520);
            if(right_value520 && right_value520 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value520, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value520, right_value520 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value525);
            if(right_value525 && right_value525 != __result_obj__ && !__freed_obj__) { right_value525 = come_decrement_ref_count(right_value525, ((struct sNode*)right_value525)->finalize, ((struct sNode*)right_value525)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value525, right_value525 = (void*)0;
            __freed_obj__ = 0;
            return __result307__;
            if(right_284 && !__freed_obj__) { right_284 = come_decrement_ref_count(right_284, ((struct sNode*)right_284)->finalize, ((struct sNode*)right_284)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional533=*info->p==61&&*(info->p+1)==61,            _if_conditional533) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_286=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value526=eq_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value526);
                if(right_value526 && right_value526 != __result_obj__ && !__freed_obj__) { right_value526 = come_decrement_ref_count(right_value526, ((struct sNode*)right_value526)->finalize, ((struct sNode*)right_value526)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value526, right_value526 = (void*)0;
                __freed_obj__ = 0;
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2466, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sEqNode*)(right_value528=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value527=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2466, "struct sEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_286),(_Bool)0,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sEqNode_finalize;
                _inf_value26->clone=(void*)sEqNode_clone;
                _inf_value26->compile=(void*)sEqNode_compile;
                _inf_value26->sline=(void*)sEqNode_sline;
                _inf_value26->sname=(void*)sEqNode_sname;
                _inf_value26->terminated=(void*)sEqNode_terminated;
                _inf_value26->kind=(void*)sEqNode_kind;
                __result310__ = __result_obj__ = ((struct sNode*)(right_value533=_inf_value26));
                if(right_286 && !__freed_obj__) { right_286 = come_decrement_ref_count(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0); } 
                if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value527);
                if(right_value527 && right_value527 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value527, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value527, right_value527 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value528);
                if(right_value528 && right_value528 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value528, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value528, right_value528 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value533);
                if(right_value533 && right_value533 != __result_obj__ && !__freed_obj__) { right_value533 = come_decrement_ref_count(right_value533, ((struct sNode*)right_value533)->finalize, ((struct sNode*)right_value533)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value533, right_value533 = (void*)0;
                __freed_obj__ = 0;
                return __result310__;
                if(right_286 && !__freed_obj__) { right_286 = come_decrement_ref_count(right_286, ((struct sNode*)right_286)->finalize, ((struct sNode*)right_286)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional543=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional543) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_288=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value534=eq_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value534);
                    if(right_value534 && right_value534 != __result_obj__ && !__freed_obj__) { right_value534 = come_decrement_ref_count(right_value534, ((struct sNode*)right_value534)->finalize, ((struct sNode*)right_value534)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value534, right_value534 = (void*)0;
                    __freed_obj__ = 0;
                    _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2474, "struct sNode");
                    _inf_obj_value27=come_increment_ref_count(((struct sNotEq2Node*)(right_value536=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value535=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2474, "struct sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_288),(_Bool)0,info))));
                    _inf_value27->_protocol_obj=_inf_obj_value27;
                    _inf_value27->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value27->clone=(void*)sNotEq2Node_clone;
                    _inf_value27->compile=(void*)sNotEq2Node_compile;
                    _inf_value27->sline=(void*)sNotEq2Node_sline;
                    _inf_value27->sname=(void*)sNotEq2Node_sname;
                    _inf_value27->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value27->kind=(void*)sNotEq2Node_kind;
                    __result313__ = __result_obj__ = ((struct sNode*)(right_value541=_inf_value27));
                    if(right_288 && !__freed_obj__) { right_288 = come_decrement_ref_count(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0); } 
                    if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value535);
                    if(right_value535 && right_value535 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value535, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value535, right_value535 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value536);
                    if(right_value536 && right_value536 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value536, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value536, right_value536 = (void*)0;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value541);
                    if(right_value541 && right_value541 != __result_obj__ && !__freed_obj__) { right_value541 = come_decrement_ref_count(right_value541, ((struct sNode*)right_value541)->finalize, ((struct sNode*)right_value541)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value541, right_value541 = (void*)0;
                    __freed_obj__ = 0;
                    return __result313__;
                    if(right_288 && !__freed_obj__) { right_288 = come_decrement_ref_count(right_288, ((struct sNode*)right_288)->finalize, ((struct sNode*)right_288)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional553=*info->p==33&&*(info->p+1)==61,                    _if_conditional553) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_290=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value542=eq_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value542);
                        if(right_value542 && right_value542 != __result_obj__ && !__freed_obj__) { right_value542 = come_decrement_ref_count(right_value542, ((struct sNode*)right_value542)->finalize, ((struct sNode*)right_value542)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value542, right_value542 = (void*)0;
                        __freed_obj__ = 0;
                        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2482, "struct sNode");
                        _inf_obj_value28=come_increment_ref_count(((struct sNotEqNode*)(right_value544=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value543=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2482, "struct sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_290),(_Bool)0,info))));
                        _inf_value28->_protocol_obj=_inf_obj_value28;
                        _inf_value28->finalize=(void*)sNotEqNode_finalize;
                        _inf_value28->clone=(void*)sNotEqNode_clone;
                        _inf_value28->compile=(void*)sNotEqNode_compile;
                        _inf_value28->sline=(void*)sNotEqNode_sline;
                        _inf_value28->sname=(void*)sNotEqNode_sname;
                        _inf_value28->terminated=(void*)sNotEqNode_terminated;
                        _inf_value28->kind=(void*)sNotEqNode_kind;
                        __result316__ = __result_obj__ = ((struct sNode*)(right_value549=_inf_value28));
                        if(right_290 && !__freed_obj__) { right_290 = come_decrement_ref_count(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0); } 
                        if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value543);
                        if(right_value543 && right_value543 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value543, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value543, right_value543 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value544);
                        if(right_value544 && right_value544 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value544, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value544, right_value544 = (void*)0;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value549);
                        if(right_value549 && right_value549 != __result_obj__ && !__freed_obj__) { right_value549 = come_decrement_ref_count(right_value549, ((struct sNode*)right_value549)->finalize, ((struct sNode*)right_value549)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value549, right_value549 = (void*)0;
                        __freed_obj__ = 0;
                        return __result316__;
                        if(right_290 && !__freed_obj__) { right_290 = come_decrement_ref_count(right_290, ((struct sNode*)right_290)->finalize, ((struct sNode*)right_290)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional563=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional563) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_292=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value550=eq_exp(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value550);
                            if(right_value550 && right_value550 != __result_obj__ && !__freed_obj__) { right_value550 = come_decrement_ref_count(right_value550, ((struct sNode*)right_value550)->finalize, ((struct sNode*)right_value550)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value550, right_value550 = (void*)0;
                            __freed_obj__ = 0;
                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2490, "struct sNode");
                            _inf_obj_value29=come_increment_ref_count(((struct sEq2Node*)(right_value552=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value551=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2490, "struct sEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_292),(_Bool)1,info))));
                            _inf_value29->_protocol_obj=_inf_obj_value29;
                            _inf_value29->finalize=(void*)sEq2Node_finalize;
                            _inf_value29->clone=(void*)sEq2Node_clone;
                            _inf_value29->compile=(void*)sEq2Node_compile;
                            _inf_value29->sline=(void*)sEq2Node_sline;
                            _inf_value29->sname=(void*)sEq2Node_sname;
                            _inf_value29->terminated=(void*)sEq2Node_terminated;
                            _inf_value29->kind=(void*)sEq2Node_kind;
                            __result319__ = __result_obj__ = ((struct sNode*)(right_value557=_inf_value29));
                            if(right_292 && !__freed_obj__) { right_292 = come_decrement_ref_count(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0); } 
                            if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value551);
                            if(right_value551 && right_value551 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value551, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value551, right_value551 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value552);
                            if(right_value552 && right_value552 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value552, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value552, right_value552 = (void*)0;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value557);
                            if(right_value557 && right_value557 != __result_obj__ && !__freed_obj__) { right_value557 = come_decrement_ref_count(right_value557, ((struct sNode*)right_value557)->finalize, ((struct sNode*)right_value557)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value557, right_value557 = (void*)0;
                            __freed_obj__ = 0;
                            return __result319__;
                            if(right_292 && !__freed_obj__) { right_292 = come_decrement_ref_count(right_292, ((struct sNode*)right_292)->finalize, ((struct sNode*)right_292)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional573=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional573) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_294=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value558=eq_exp(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value558);
                                if(right_value558 && right_value558 != __result_obj__ && !__freed_obj__) { right_value558 = come_decrement_ref_count(right_value558, ((struct sNode*)right_value558)->finalize, ((struct sNode*)right_value558)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value558, right_value558 = (void*)0;
                                __freed_obj__ = 0;
                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2498, "struct sNode");
                                _inf_obj_value30=come_increment_ref_count(((struct sEqNode*)(right_value560=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value559=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2498, "struct sEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_294),(_Bool)1,info))));
                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                _inf_value30->finalize=(void*)sEqNode_finalize;
                                _inf_value30->clone=(void*)sEqNode_clone;
                                _inf_value30->compile=(void*)sEqNode_compile;
                                _inf_value30->sline=(void*)sEqNode_sline;
                                _inf_value30->sname=(void*)sEqNode_sname;
                                _inf_value30->terminated=(void*)sEqNode_terminated;
                                _inf_value30->kind=(void*)sEqNode_kind;
                                __result322__ = __result_obj__ = ((struct sNode*)(right_value565=_inf_value30));
                                if(right_294 && !__freed_obj__) { right_294 = come_decrement_ref_count(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0); } 
                                if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value559);
                                if(right_value559 && right_value559 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value559, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value559, right_value559 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value560);
                                if(right_value560 && right_value560 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value560, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value560, right_value560 = (void*)0;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value565);
                                if(right_value565 && right_value565 != __result_obj__ && !__freed_obj__) { right_value565 = come_decrement_ref_count(right_value565, ((struct sNode*)right_value565)->finalize, ((struct sNode*)right_value565)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value565, right_value565 = (void*)0;
                                __freed_obj__ = 0;
                                return __result322__;
                                if(right_294 && !__freed_obj__) { right_294 = come_decrement_ref_count(right_294, ((struct sNode*)right_294)->finalize, ((struct sNode*)right_294)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional583=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional583) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_296=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value566=eq_exp(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value566);
                                    if(right_value566 && right_value566 != __result_obj__ && !__freed_obj__) { right_value566 = come_decrement_ref_count(right_value566, ((struct sNode*)right_value566)->finalize, ((struct sNode*)right_value566)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value566, right_value566 = (void*)0;
                                    __freed_obj__ = 0;
                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2506, "struct sNode");
                                    _inf_obj_value31=come_increment_ref_count(((struct sNotEq2Node*)(right_value568=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value567=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2506, "struct sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_296),(_Bool)1,info))));
                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                    _inf_value31->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value31->clone=(void*)sNotEq2Node_clone;
                                    _inf_value31->compile=(void*)sNotEq2Node_compile;
                                    _inf_value31->sline=(void*)sNotEq2Node_sline;
                                    _inf_value31->sname=(void*)sNotEq2Node_sname;
                                    _inf_value31->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value31->kind=(void*)sNotEq2Node_kind;
                                    __result325__ = __result_obj__ = ((struct sNode*)(right_value573=_inf_value31));
                                    if(right_296 && !__freed_obj__) { right_296 = come_decrement_ref_count(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0); } 
                                    if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value567);
                                    if(right_value567 && right_value567 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value567, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value567, right_value567 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value568);
                                    if(right_value568 && right_value568 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value568, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value568, right_value568 = (void*)0;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value573);
                                    if(right_value573 && right_value573 != __result_obj__ && !__freed_obj__) { right_value573 = come_decrement_ref_count(right_value573, ((struct sNode*)right_value573)->finalize, ((struct sNode*)right_value573)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[2] = right_value573, right_value573 = (void*)0;
                                    __freed_obj__ = 0;
                                    return __result325__;
                                    if(right_296 && !__freed_obj__) { right_296 = come_decrement_ref_count(right_296, ((struct sNode*)right_296)->finalize, ((struct sNode*)right_296)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional593=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional593) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_298=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value574=eq_exp(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value574);
                                        if(right_value574 && right_value574 != __result_obj__ && !__freed_obj__) { right_value574 = come_decrement_ref_count(right_value574, ((struct sNode*)right_value574)->finalize, ((struct sNode*)right_value574)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value574, right_value574 = (void*)0;
                                        __freed_obj__ = 0;
                                        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2514, "struct sNode");
                                        _inf_obj_value32=come_increment_ref_count(((struct sNotEqNode*)(right_value576=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value575=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2514, "struct sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_283),(struct sNode*)come_increment_ref_count(right_298),(_Bool)1,info))));
                                        _inf_value32->_protocol_obj=_inf_obj_value32;
                                        _inf_value32->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value32->clone=(void*)sNotEqNode_clone;
                                        _inf_value32->compile=(void*)sNotEqNode_compile;
                                        _inf_value32->sline=(void*)sNotEqNode_sline;
                                        _inf_value32->sname=(void*)sNotEqNode_sname;
                                        _inf_value32->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value32->kind=(void*)sNotEqNode_kind;
                                        __result328__ = __result_obj__ = ((struct sNode*)(right_value581=_inf_value32));
                                        if(right_298 && !__freed_obj__) { right_298 = come_decrement_ref_count(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0); } 
                                        if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value575);
                                        if(right_value575 && right_value575 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value575, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value575, right_value575 = (void*)0;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value576);
                                        if(right_value576 && right_value576 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value576, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value576, right_value576 = (void*)0;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value581);
                                        if(right_value581 && right_value581 != __result_obj__ && !__freed_obj__) { right_value581 = come_decrement_ref_count(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[2] = right_value581, right_value581 = (void*)0;
                                        __freed_obj__ = 0;
                                        return __result328__;
                                        if(right_298 && !__freed_obj__) { right_298 = come_decrement_ref_count(right_298, ((struct sNode*)right_298)->finalize, ((struct sNode*)right_298)->_protocol_obj, 0, 0, 0); } 
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
    __result329__ = __result_obj__ = node_283;
    if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 1, 0); } 
    return __result329__;
    if(node_283 && !__freed_obj__) { node_283 = come_decrement_ref_count(node_283, ((struct sNode*)node_283)->finalize, ((struct sNode*)node_283)->_protocol_obj, 0, 0, 0); } 
}

static void sEq2Node_finalize(struct sEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional564;
_Bool _if_conditional565;
_Bool _if_conditional566;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional564=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional564) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional565=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional565) {
                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional566=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional566) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional567;
struct sEq2Node* __result317__;
void* right_value553;
struct sEq2Node* result_293;
_Bool _if_conditional568;
void* right_value554;
struct sNode* __dec_obj241;
_Bool _if_conditional569;
void* right_value555;
struct sNode* __dec_obj242;
_Bool _if_conditional570;
_Bool _if_conditional571;
_Bool _if_conditional572;
void* right_value556;
char* __dec_obj243;
struct sEq2Node* __result318__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value553 = (void*)0;
memset(&result_293, 0, sizeof(struct sEq2Node*));
right_value554 = (void*)0;
right_value555 = (void*)0;
right_value556 = (void*)0;
                                if(_if_conditional567=self==(void*)0,                                _if_conditional567) {
                                    __result317__ = __result_obj__ = (void*)0;
                                    return __result317__;
                                }
                                result_293=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value553=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value553);
                                if(right_value553 && right_value553 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value553, right_value553 = (void*)0;
                                __freed_obj__ = 0;
                                if(_if_conditional568=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional568) {
                                    __dec_obj241=result_293->mLeft;
                                    result_293->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value554=sNode_clone(self->mLeft))));
                                    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value554);
                                    if(right_value554 && right_value554 != __result_obj__ && !__freed_obj__) { right_value554 = come_decrement_ref_count(right_value554, ((struct sNode*)right_value554)->finalize, ((struct sNode*)right_value554)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value554, right_value554 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional569=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional569) {
                                    __dec_obj242=result_293->mRight;
                                    result_293->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value555=sNode_clone(self->mRight))));
                                    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value555);
                                    if(right_value555 && right_value555 != __result_obj__ && !__freed_obj__) { right_value555 = come_decrement_ref_count(right_value555, ((struct sNode*)right_value555)->finalize, ((struct sNode*)right_value555)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value555, right_value555 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional570=self!=((void*)0),                                _if_conditional570) {
                                    result_293->mQuote=self->mQuote;
                                }
                                if(_if_conditional571=self!=((void*)0),                                _if_conditional571) {
                                    result_293->sline=self->sline;
                                }
                                if(_if_conditional572=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional572) {
                                    __dec_obj243=result_293->sname;
                                    result_293->sname=(char*)come_increment_ref_count(((char*)(right_value556=string_clone(self->sname))));
                                    if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value556);
                                    if(right_value556 && right_value556 != __result_obj__ && !__freed_obj__) { right_value556 = come_decrement_ref_count(right_value556, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value556, right_value556 = (void*)0;
                                    __freed_obj__ = 0;
                                }
                                __result318__ = __result_obj__ = result_293;
                                if(result_293 && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,result_293, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result318__;
                                if(result_293 && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,result_293, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sEqNode_finalize(struct sEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional574;
_Bool _if_conditional575;
_Bool _if_conditional576;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional574=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional574) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional575=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional575) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional576=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional576) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional577;
struct sEqNode* __result320__;
void* right_value561;
struct sEqNode* result_295;
_Bool _if_conditional578;
void* right_value562;
struct sNode* __dec_obj244;
_Bool _if_conditional579;
void* right_value563;
struct sNode* __dec_obj245;
_Bool _if_conditional580;
_Bool _if_conditional581;
_Bool _if_conditional582;
void* right_value564;
char* __dec_obj246;
struct sEqNode* __result321__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value561 = (void*)0;
memset(&result_295, 0, sizeof(struct sEqNode*));
right_value562 = (void*)0;
right_value563 = (void*)0;
right_value564 = (void*)0;
                                    if(_if_conditional577=self==(void*)0,                                    _if_conditional577) {
                                        __result320__ = __result_obj__ = (void*)0;
                                        return __result320__;
                                    }
                                    result_295=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value561=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value561);
                                    if(right_value561 && right_value561 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value561, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value561, right_value561 = (void*)0;
                                    __freed_obj__ = 0;
                                    if(_if_conditional578=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional578) {
                                        __dec_obj244=result_295->mLeft;
                                        result_295->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value562=sNode_clone(self->mLeft))));
                                        if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value562);
                                        if(right_value562 && right_value562 != __result_obj__ && !__freed_obj__) { right_value562 = come_decrement_ref_count(right_value562, ((struct sNode*)right_value562)->finalize, ((struct sNode*)right_value562)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value562, right_value562 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional579=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional579) {
                                        __dec_obj245=result_295->mRight;
                                        result_295->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value563=sNode_clone(self->mRight))));
                                        if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value563);
                                        if(right_value563 && right_value563 != __result_obj__ && !__freed_obj__) { right_value563 = come_decrement_ref_count(right_value563, ((struct sNode*)right_value563)->finalize, ((struct sNode*)right_value563)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value563, right_value563 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional580=self!=((void*)0),                                    _if_conditional580) {
                                        result_295->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional581=self!=((void*)0),                                    _if_conditional581) {
                                        result_295->sline=self->sline;
                                    }
                                    if(_if_conditional582=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional582) {
                                        __dec_obj246=result_295->sname;
                                        result_295->sname=(char*)come_increment_ref_count(((char*)(right_value564=string_clone(self->sname))));
                                        if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value564);
                                        if(right_value564 && right_value564 != __result_obj__ && !__freed_obj__) { right_value564 = come_decrement_ref_count(right_value564, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value564, right_value564 = (void*)0;
                                        __freed_obj__ = 0;
                                    }
                                    __result321__ = __result_obj__ = result_295;
                                    if(result_295 && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 1, 0); }
                                    return __result321__;
                                    if(result_295 && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,result_295, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNotEq2Node_finalize(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional584;
_Bool _if_conditional585;
_Bool _if_conditional586;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional584=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional584) {
                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional585=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional585) {
                                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional586=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional586) {
                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional587;
struct sNotEq2Node* __result323__;
void* right_value569;
struct sNotEq2Node* result_297;
_Bool _if_conditional588;
void* right_value570;
struct sNode* __dec_obj247;
_Bool _if_conditional589;
void* right_value571;
struct sNode* __dec_obj248;
_Bool _if_conditional590;
_Bool _if_conditional591;
_Bool _if_conditional592;
void* right_value572;
char* __dec_obj249;
struct sNotEq2Node* __result324__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value569 = (void*)0;
memset(&result_297, 0, sizeof(struct sNotEq2Node*));
right_value570 = (void*)0;
right_value571 = (void*)0;
right_value572 = (void*)0;
                                        if(_if_conditional587=self==(void*)0,                                        _if_conditional587) {
                                            __result323__ = __result_obj__ = (void*)0;
                                            return __result323__;
                                        }
                                        result_297=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value569=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value569);
                                        if(right_value569 && right_value569 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value569, right_value569 = (void*)0;
                                        __freed_obj__ = 0;
                                        if(_if_conditional588=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional588) {
                                            __dec_obj247=result_297->mLeft;
                                            result_297->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value570=sNode_clone(self->mLeft))));
                                            if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value570);
                                            if(right_value570 && right_value570 != __result_obj__ && !__freed_obj__) { right_value570 = come_decrement_ref_count(right_value570, ((struct sNode*)right_value570)->finalize, ((struct sNode*)right_value570)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value570, right_value570 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional589=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional589) {
                                            __dec_obj248=result_297->mRight;
                                            result_297->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value571=sNode_clone(self->mRight))));
                                            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value571);
                                            if(right_value571 && right_value571 != __result_obj__ && !__freed_obj__) { right_value571 = come_decrement_ref_count(right_value571, ((struct sNode*)right_value571)->finalize, ((struct sNode*)right_value571)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value571, right_value571 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional590=self!=((void*)0),                                        _if_conditional590) {
                                            result_297->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional591=self!=((void*)0),                                        _if_conditional591) {
                                            result_297->sline=self->sline;
                                        }
                                        if(_if_conditional592=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional592) {
                                            __dec_obj249=result_297->sname;
                                            result_297->sname=(char*)come_increment_ref_count(((char*)(right_value572=string_clone(self->sname))));
                                            if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value572);
                                            if(right_value572 && right_value572 != __result_obj__ && !__freed_obj__) { right_value572 = come_decrement_ref_count(right_value572, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value572, right_value572 = (void*)0;
                                            __freed_obj__ = 0;
                                        }
                                        __result324__ = __result_obj__ = result_297;
                                        if(result_297 && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,result_297, (void*)0, (void*)0, 0, 0, 1, 0); }
                                        return __result324__;
                                        if(result_297 && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,result_297, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNotEqNode_finalize(struct sNotEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional594;
_Bool _if_conditional595;
_Bool _if_conditional596;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional594=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional594) {
                                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional595=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional595) {
                                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional596=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional596) {
                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional597;
struct sNotEqNode* __result326__;
void* right_value577;
struct sNotEqNode* result_299;
_Bool _if_conditional598;
void* right_value578;
struct sNode* __dec_obj250;
_Bool _if_conditional599;
void* right_value579;
struct sNode* __dec_obj251;
_Bool _if_conditional600;
_Bool _if_conditional601;
_Bool _if_conditional602;
void* right_value580;
char* __dec_obj252;
struct sNotEqNode* __result327__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value577 = (void*)0;
memset(&result_299, 0, sizeof(struct sNotEqNode*));
right_value578 = (void*)0;
right_value579 = (void*)0;
right_value580 = (void*)0;
                                            if(_if_conditional597=self==(void*)0,                                            _if_conditional597) {
                                                __result326__ = __result_obj__ = (void*)0;
                                                return __result326__;
                                            }
                                            result_299=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value577=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode"))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value577);
                                            if(right_value577 && right_value577 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value577, right_value577 = (void*)0;
                                            __freed_obj__ = 0;
                                            if(_if_conditional598=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional598) {
                                                __dec_obj250=result_299->mLeft;
                                                result_299->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value578=sNode_clone(self->mLeft))));
                                                if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value578);
                                                if(right_value578 && right_value578 != __result_obj__ && !__freed_obj__) { right_value578 = come_decrement_ref_count(right_value578, ((struct sNode*)right_value578)->finalize, ((struct sNode*)right_value578)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value578, right_value578 = (void*)0;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional599=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional599) {
                                                __dec_obj251=result_299->mRight;
                                                result_299->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value579=sNode_clone(self->mRight))));
                                                if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value579);
                                                if(right_value579 && right_value579 != __result_obj__ && !__freed_obj__) { right_value579 = come_decrement_ref_count(right_value579, ((struct sNode*)right_value579)->finalize, ((struct sNode*)right_value579)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value579, right_value579 = (void*)0;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional600=self!=((void*)0),                                            _if_conditional600) {
                                                result_299->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional601=self!=((void*)0),                                            _if_conditional601) {
                                                result_299->sline=self->sline;
                                            }
                                            if(_if_conditional602=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional602) {
                                                __dec_obj252=result_299->sname;
                                                result_299->sname=(char*)come_increment_ref_count(((char*)(right_value580=string_clone(self->sname))));
                                                if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value580);
                                                if(right_value580 && right_value580 != __result_obj__ && !__freed_obj__) { right_value580 = come_decrement_ref_count(right_value580, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value580, right_value580 = (void*)0;
                                                __freed_obj__ = 0;
                                            }
                                            __result327__ = __result_obj__ = result_299;
                                            if(result_299 && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 1, 0); }
                                            return __result327__;
                                            if(result_299 && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,result_299, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* and_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value582;
struct sNode* node_300;
_Bool _while_condtional15;
_Bool _if_conditional603;
void* right_value583;
struct sNode* right_301;
void* right_value584;
void* right_value585;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value590;
struct sNode* __result332__;
_Bool _if_conditional613;
void* right_value591;
struct sNode* right_303;
void* right_value592;
void* right_value593;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* right_value598;
struct sNode* __result335__;
struct sNode* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value582 = (void*)0;
memset(&node_300, 0, sizeof(struct sNode*));
right_value583 = (void*)0;
memset(&right_301, 0, sizeof(struct sNode*));
right_value584 = (void*)0;
right_value585 = (void*)0;
right_value590 = (void*)0;
right_value591 = (void*)0;
memset(&right_303, 0, sizeof(struct sNode*));
right_value592 = (void*)0;
right_value593 = (void*)0;
right_value598 = (void*)0;
    parse_sharp_v5(info);
    node_300=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value582=eq_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value582);
    if(right_value582 && right_value582 != __result_obj__ && !__freed_obj__) { right_value582 = come_decrement_ref_count(right_value582, ((struct sNode*)right_value582)->finalize, ((struct sNode*)right_value582)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value582, right_value582 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional15=*info->p,    _while_condtional15) {
        if(_if_conditional603=*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional603) {
            info->p++;
            skip_spaces_and_lf(info);
            right_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value583=and_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value583);
            if(right_value583 && right_value583 != __result_obj__ && !__freed_obj__) { right_value583 = come_decrement_ref_count(right_value583, ((struct sNode*)right_value583)->finalize, ((struct sNode*)right_value583)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value583, right_value583 = (void*)0;
            __freed_obj__ = 0;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2541, "struct sNode");
            _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value585=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value584=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2541, "struct sAndNode")))),(struct sNode*)come_increment_ref_count(node_300),(struct sNode*)come_increment_ref_count(right_301),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sAndNode_sline;
            _inf_value33->sname=(void*)sAndNode_sname;
            _inf_value33->terminated=(void*)sAndNode_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result332__ = __result_obj__ = ((struct sNode*)(right_value590=_inf_value33));
            if(right_301 && !__freed_obj__) { right_301 = come_decrement_ref_count(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0); } 
            if(node_300 && !__freed_obj__) { node_300 = come_decrement_ref_count(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value584);
            if(right_value584 && right_value584 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value584, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value584, right_value584 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value585);
            if(right_value585 && right_value585 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value585, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value585, right_value585 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value590);
            if(right_value590 && right_value590 != __result_obj__ && !__freed_obj__) { right_value590 = come_decrement_ref_count(right_value590, ((struct sNode*)right_value590)->finalize, ((struct sNode*)right_value590)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value590, right_value590 = (void*)0;
            __freed_obj__ = 0;
            return __result332__;
            if(right_301 && !__freed_obj__) { right_301 = come_decrement_ref_count(right_301, ((struct sNode*)right_301)->finalize, ((struct sNode*)right_301)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional613=*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional613) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_303=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value591=and_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value591);
                if(right_value591 && right_value591 != __result_obj__ && !__freed_obj__) { right_value591 = come_decrement_ref_count(right_value591, ((struct sNode*)right_value591)->finalize, ((struct sNode*)right_value591)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value591, right_value591 = (void*)0;
                __freed_obj__ = 0;
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2549, "struct sNode");
                _inf_obj_value34=come_increment_ref_count(((struct sAndNode*)(right_value593=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value592=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2549, "struct sAndNode")))),(struct sNode*)come_increment_ref_count(node_300),(struct sNode*)come_increment_ref_count(right_303),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sAndNode_finalize;
                _inf_value34->clone=(void*)sAndNode_clone;
                _inf_value34->compile=(void*)sAndNode_compile;
                _inf_value34->sline=(void*)sAndNode_sline;
                _inf_value34->sname=(void*)sAndNode_sname;
                _inf_value34->terminated=(void*)sAndNode_terminated;
                _inf_value34->kind=(void*)sAndNode_kind;
                __result335__ = __result_obj__ = ((struct sNode*)(right_value598=_inf_value34));
                if(right_303 && !__freed_obj__) { right_303 = come_decrement_ref_count(right_303, ((struct sNode*)right_303)->finalize, ((struct sNode*)right_303)->_protocol_obj, 0, 0, 0); } 
                if(node_300 && !__freed_obj__) { node_300 = come_decrement_ref_count(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value592);
                if(right_value592 && right_value592 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value592, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value592, right_value592 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value593);
                if(right_value593 && right_value593 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value593, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value593, right_value593 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value598);
                if(right_value598 && right_value598 != __result_obj__ && !__freed_obj__) { right_value598 = come_decrement_ref_count(right_value598, ((struct sNode*)right_value598)->finalize, ((struct sNode*)right_value598)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value598, right_value598 = (void*)0;
                __freed_obj__ = 0;
                return __result335__;
                if(right_303 && !__freed_obj__) { right_303 = come_decrement_ref_count(right_303, ((struct sNode*)right_303)->finalize, ((struct sNode*)right_303)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result336__ = __result_obj__ = node_300;
    if(node_300 && !__freed_obj__) { node_300 = come_decrement_ref_count(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 1, 0); } 
    return __result336__;
    if(node_300 && !__freed_obj__) { node_300 = come_decrement_ref_count(node_300, ((struct sNode*)node_300)->finalize, ((struct sNode*)node_300)->_protocol_obj, 0, 0, 0); } 
}

static void sAndNode_finalize(struct sAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional614;
_Bool _if_conditional615;
_Bool _if_conditional616;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional614=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional614) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional615=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional615) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional616=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional616) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional617;
struct sAndNode* __result333__;
void* right_value594;
struct sAndNode* result_304;
_Bool _if_conditional618;
void* right_value595;
struct sNode* __dec_obj256;
_Bool _if_conditional619;
void* right_value596;
struct sNode* __dec_obj257;
_Bool _if_conditional620;
_Bool _if_conditional621;
_Bool _if_conditional622;
void* right_value597;
char* __dec_obj258;
struct sAndNode* __result334__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value594 = (void*)0;
memset(&result_304, 0, sizeof(struct sAndNode*));
right_value595 = (void*)0;
right_value596 = (void*)0;
right_value597 = (void*)0;
                    if(_if_conditional617=self==(void*)0,                    _if_conditional617) {
                        __result333__ = __result_obj__ = (void*)0;
                        return __result333__;
                    }
                    result_304=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value594=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value594);
                    if(right_value594 && right_value594 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value594, right_value594 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional618=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional618) {
                        __dec_obj256=result_304->mLeft;
                        result_304->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value595=sNode_clone(self->mLeft))));
                        if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value595);
                        if(right_value595 && right_value595 != __result_obj__ && !__freed_obj__) { right_value595 = come_decrement_ref_count(right_value595, ((struct sNode*)right_value595)->finalize, ((struct sNode*)right_value595)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value595, right_value595 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional619=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional619) {
                        __dec_obj257=result_304->mRight;
                        result_304->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value596=sNode_clone(self->mRight))));
                        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value596);
                        if(right_value596 && right_value596 != __result_obj__ && !__freed_obj__) { right_value596 = come_decrement_ref_count(right_value596, ((struct sNode*)right_value596)->finalize, ((struct sNode*)right_value596)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value596, right_value596 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional620=self!=((void*)0),                    _if_conditional620) {
                        result_304->mQuote=self->mQuote;
                    }
                    if(_if_conditional621=self!=((void*)0),                    _if_conditional621) {
                        result_304->sline=self->sline;
                    }
                    if(_if_conditional622=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional622) {
                        __dec_obj258=result_304->sname;
                        result_304->sname=(char*)come_increment_ref_count(((char*)(right_value597=string_clone(self->sname))));
                        if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value597);
                        if(right_value597 && right_value597 != __result_obj__ && !__freed_obj__) { right_value597 = come_decrement_ref_count(right_value597, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value597, right_value597 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    __result334__ = __result_obj__ = result_304;
                    if(result_304 && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,result_304, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result334__;
                    if(result_304 && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,result_304, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* xor_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value599;
struct sNode* node_305;
_Bool _while_condtional16;
_Bool _if_conditional623;
void* right_value600;
struct sNode* right_306;
void* right_value601;
void* right_value602;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value607;
struct sNode* __result339__;
_Bool _if_conditional633;
void* right_value608;
struct sNode* right_308;
void* right_value609;
void* right_value610;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* right_value615;
struct sNode* __result342__;
struct sNode* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value599 = (void*)0;
memset(&node_305, 0, sizeof(struct sNode*));
right_value600 = (void*)0;
memset(&right_306, 0, sizeof(struct sNode*));
right_value601 = (void*)0;
right_value602 = (void*)0;
right_value607 = (void*)0;
right_value608 = (void*)0;
memset(&right_308, 0, sizeof(struct sNode*));
right_value609 = (void*)0;
right_value610 = (void*)0;
right_value615 = (void*)0;
    parse_sharp_v5(info);
    node_305=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value599=and_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value599);
    if(right_value599 && right_value599 != __result_obj__ && !__freed_obj__) { right_value599 = come_decrement_ref_count(right_value599, ((struct sNode*)right_value599)->finalize, ((struct sNode*)right_value599)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value599, right_value599 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional16=*info->p,    _while_condtional16) {
        if(_if_conditional623=*info->p==94&&*(info->p+1)!=61,        _if_conditional623) {
            info->p++;
            skip_spaces_and_lf(info);
            right_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value600=xor_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value600);
            if(right_value600 && right_value600 != __result_obj__ && !__freed_obj__) { right_value600 = come_decrement_ref_count(right_value600, ((struct sNode*)right_value600)->finalize, ((struct sNode*)right_value600)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value600, right_value600 = (void*)0;
            __freed_obj__ = 0;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2576, "struct sNode");
            _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value602=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value601=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2576, "struct sXOrNode")))),(struct sNode*)come_increment_ref_count(node_305),(struct sNode*)come_increment_ref_count(right_306),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sXOrNode_sline;
            _inf_value35->sname=(void*)sXOrNode_sname;
            _inf_value35->terminated=(void*)sXOrNode_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result339__ = __result_obj__ = ((struct sNode*)(right_value607=_inf_value35));
            if(right_306 && !__freed_obj__) { right_306 = come_decrement_ref_count(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0); } 
            if(node_305 && !__freed_obj__) { node_305 = come_decrement_ref_count(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value601);
            if(right_value601 && right_value601 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value601, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value601, right_value601 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value602);
            if(right_value602 && right_value602 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value602, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value602, right_value602 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value607);
            if(right_value607 && right_value607 != __result_obj__ && !__freed_obj__) { right_value607 = come_decrement_ref_count(right_value607, ((struct sNode*)right_value607)->finalize, ((struct sNode*)right_value607)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value607, right_value607 = (void*)0;
            __freed_obj__ = 0;
            return __result339__;
            if(right_306 && !__freed_obj__) { right_306 = come_decrement_ref_count(right_306, ((struct sNode*)right_306)->finalize, ((struct sNode*)right_306)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional633=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional633) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_308=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value608=xor_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value608);
                if(right_value608 && right_value608 != __result_obj__ && !__freed_obj__) { right_value608 = come_decrement_ref_count(right_value608, ((struct sNode*)right_value608)->finalize, ((struct sNode*)right_value608)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value608, right_value608 = (void*)0;
                __freed_obj__ = 0;
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2584, "struct sNode");
                _inf_obj_value36=come_increment_ref_count(((struct sXOrNode*)(right_value610=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value609=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2584, "struct sXOrNode")))),(struct sNode*)come_increment_ref_count(node_305),(struct sNode*)come_increment_ref_count(right_308),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sXOrNode_finalize;
                _inf_value36->clone=(void*)sXOrNode_clone;
                _inf_value36->compile=(void*)sXOrNode_compile;
                _inf_value36->sline=(void*)sXOrNode_sline;
                _inf_value36->sname=(void*)sXOrNode_sname;
                _inf_value36->terminated=(void*)sXOrNode_terminated;
                _inf_value36->kind=(void*)sXOrNode_kind;
                __result342__ = __result_obj__ = ((struct sNode*)(right_value615=_inf_value36));
                if(right_308 && !__freed_obj__) { right_308 = come_decrement_ref_count(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0); } 
                if(node_305 && !__freed_obj__) { node_305 = come_decrement_ref_count(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value609);
                if(right_value609 && right_value609 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value609, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value609, right_value609 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value610);
                if(right_value610 && right_value610 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value610, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value610, right_value610 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value615);
                if(right_value615 && right_value615 != __result_obj__ && !__freed_obj__) { right_value615 = come_decrement_ref_count(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value615, right_value615 = (void*)0;
                __freed_obj__ = 0;
                return __result342__;
                if(right_308 && !__freed_obj__) { right_308 = come_decrement_ref_count(right_308, ((struct sNode*)right_308)->finalize, ((struct sNode*)right_308)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result343__ = __result_obj__ = node_305;
    if(node_305 && !__freed_obj__) { node_305 = come_decrement_ref_count(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 1, 0); } 
    return __result343__;
    if(node_305 && !__freed_obj__) { node_305 = come_decrement_ref_count(node_305, ((struct sNode*)node_305)->finalize, ((struct sNode*)node_305)->_protocol_obj, 0, 0, 0); } 
}

static void sXOrNode_finalize(struct sXOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional634;
_Bool _if_conditional635;
_Bool _if_conditional636;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional634=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional634) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional635=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional635) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional636=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional636) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional637;
struct sXOrNode* __result340__;
void* right_value611;
struct sXOrNode* result_309;
_Bool _if_conditional638;
void* right_value612;
struct sNode* __dec_obj262;
_Bool _if_conditional639;
void* right_value613;
struct sNode* __dec_obj263;
_Bool _if_conditional640;
_Bool _if_conditional641;
_Bool _if_conditional642;
void* right_value614;
char* __dec_obj264;
struct sXOrNode* __result341__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value611 = (void*)0;
memset(&result_309, 0, sizeof(struct sXOrNode*));
right_value612 = (void*)0;
right_value613 = (void*)0;
right_value614 = (void*)0;
                    if(_if_conditional637=self==(void*)0,                    _if_conditional637) {
                        __result340__ = __result_obj__ = (void*)0;
                        return __result340__;
                    }
                    result_309=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value611=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value611);
                    if(right_value611 && right_value611 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value611, right_value611 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional638=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional638) {
                        __dec_obj262=result_309->mLeft;
                        result_309->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value612=sNode_clone(self->mLeft))));
                        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value612);
                        if(right_value612 && right_value612 != __result_obj__ && !__freed_obj__) { right_value612 = come_decrement_ref_count(right_value612, ((struct sNode*)right_value612)->finalize, ((struct sNode*)right_value612)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value612, right_value612 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional639=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional639) {
                        __dec_obj263=result_309->mRight;
                        result_309->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value613=sNode_clone(self->mRight))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value613);
                        if(right_value613 && right_value613 != __result_obj__ && !__freed_obj__) { right_value613 = come_decrement_ref_count(right_value613, ((struct sNode*)right_value613)->finalize, ((struct sNode*)right_value613)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value613, right_value613 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional640=self!=((void*)0),                    _if_conditional640) {
                        result_309->mQuote=self->mQuote;
                    }
                    if(_if_conditional641=self!=((void*)0),                    _if_conditional641) {
                        result_309->sline=self->sline;
                    }
                    if(_if_conditional642=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional642) {
                        __dec_obj264=result_309->sname;
                        result_309->sname=(char*)come_increment_ref_count(((char*)(right_value614=string_clone(self->sname))));
                        if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value614);
                        if(right_value614 && right_value614 != __result_obj__ && !__freed_obj__) { right_value614 = come_decrement_ref_count(right_value614, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value614, right_value614 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    __result341__ = __result_obj__ = result_309;
                    if(result_309 && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result341__;
                    if(result_309 && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,result_309, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* or_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value616;
struct sNode* node_310;
_Bool _while_condtional17;
_Bool _if_conditional643;
void* right_value617;
struct sNode* right_311;
void* right_value618;
void* right_value619;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value624;
struct sNode* __result346__;
_Bool _if_conditional653;
void* right_value625;
struct sNode* right_313;
void* right_value626;
void* right_value627;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* right_value632;
struct sNode* __result349__;
struct sNode* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value616 = (void*)0;
memset(&node_310, 0, sizeof(struct sNode*));
right_value617 = (void*)0;
memset(&right_311, 0, sizeof(struct sNode*));
right_value618 = (void*)0;
right_value619 = (void*)0;
right_value624 = (void*)0;
right_value625 = (void*)0;
memset(&right_313, 0, sizeof(struct sNode*));
right_value626 = (void*)0;
right_value627 = (void*)0;
right_value632 = (void*)0;
    parse_sharp_v5(info);
    node_310=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value616=xor_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value616);
    if(right_value616 && right_value616 != __result_obj__ && !__freed_obj__) { right_value616 = come_decrement_ref_count(right_value616, ((struct sNode*)right_value616)->finalize, ((struct sNode*)right_value616)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value616, right_value616 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional17=*info->p,    _while_condtional17) {
        if(_if_conditional643=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional643) {
            info->p++;
            skip_spaces_and_lf(info);
            right_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value617=or_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value617);
            if(right_value617 && right_value617 != __result_obj__ && !__freed_obj__) { right_value617 = come_decrement_ref_count(right_value617, ((struct sNode*)right_value617)->finalize, ((struct sNode*)right_value617)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value617, right_value617 = (void*)0;
            __freed_obj__ = 0;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2611, "struct sNode");
            _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value619=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value618=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2611, "struct sOrNode")))),(struct sNode*)come_increment_ref_count(node_310),(struct sNode*)come_increment_ref_count(right_311),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sOrNode_sline;
            _inf_value37->sname=(void*)sOrNode_sname;
            _inf_value37->terminated=(void*)sOrNode_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result346__ = __result_obj__ = ((struct sNode*)(right_value624=_inf_value37));
            if(right_311 && !__freed_obj__) { right_311 = come_decrement_ref_count(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0); } 
            if(node_310 && !__freed_obj__) { node_310 = come_decrement_ref_count(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value618);
            if(right_value618 && right_value618 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value618, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value618, right_value618 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value619);
            if(right_value619 && right_value619 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value619, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value619, right_value619 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value624);
            if(right_value624 && right_value624 != __result_obj__ && !__freed_obj__) { right_value624 = come_decrement_ref_count(right_value624, ((struct sNode*)right_value624)->finalize, ((struct sNode*)right_value624)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value624, right_value624 = (void*)0;
            __freed_obj__ = 0;
            return __result346__;
            if(right_311 && !__freed_obj__) { right_311 = come_decrement_ref_count(right_311, ((struct sNode*)right_311)->finalize, ((struct sNode*)right_311)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional653=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional653) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_313=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value625=or_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value625);
                if(right_value625 && right_value625 != __result_obj__ && !__freed_obj__) { right_value625 = come_decrement_ref_count(right_value625, ((struct sNode*)right_value625)->finalize, ((struct sNode*)right_value625)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value625, right_value625 = (void*)0;
                __freed_obj__ = 0;
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2619, "struct sNode");
                _inf_obj_value38=come_increment_ref_count(((struct sOrNode*)(right_value627=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value626=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2619, "struct sOrNode")))),(struct sNode*)come_increment_ref_count(node_310),(struct sNode*)come_increment_ref_count(right_313),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sOrNode_finalize;
                _inf_value38->clone=(void*)sOrNode_clone;
                _inf_value38->compile=(void*)sOrNode_compile;
                _inf_value38->sline=(void*)sOrNode_sline;
                _inf_value38->sname=(void*)sOrNode_sname;
                _inf_value38->terminated=(void*)sOrNode_terminated;
                _inf_value38->kind=(void*)sOrNode_kind;
                __result349__ = __result_obj__ = ((struct sNode*)(right_value632=_inf_value38));
                if(right_313 && !__freed_obj__) { right_313 = come_decrement_ref_count(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0, 0, 0); } 
                if(node_310 && !__freed_obj__) { node_310 = come_decrement_ref_count(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value626);
                if(right_value626 && right_value626 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value626, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value626, right_value626 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value627);
                if(right_value627 && right_value627 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value627, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value627, right_value627 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value632);
                if(right_value632 && right_value632 != __result_obj__ && !__freed_obj__) { right_value632 = come_decrement_ref_count(right_value632, ((struct sNode*)right_value632)->finalize, ((struct sNode*)right_value632)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value632, right_value632 = (void*)0;
                __freed_obj__ = 0;
                return __result349__;
                if(right_313 && !__freed_obj__) { right_313 = come_decrement_ref_count(right_313, ((struct sNode*)right_313)->finalize, ((struct sNode*)right_313)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result350__ = __result_obj__ = node_310;
    if(node_310 && !__freed_obj__) { node_310 = come_decrement_ref_count(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 1, 0); } 
    return __result350__;
    if(node_310 && !__freed_obj__) { node_310 = come_decrement_ref_count(node_310, ((struct sNode*)node_310)->finalize, ((struct sNode*)node_310)->_protocol_obj, 0, 0, 0); } 
}

static void sOrNode_finalize(struct sOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional654;
_Bool _if_conditional655;
_Bool _if_conditional656;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional654=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional654) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional655=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional655) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional656=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional656) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional657;
struct sOrNode* __result347__;
void* right_value628;
struct sOrNode* result_314;
_Bool _if_conditional658;
void* right_value629;
struct sNode* __dec_obj268;
_Bool _if_conditional659;
void* right_value630;
struct sNode* __dec_obj269;
_Bool _if_conditional660;
_Bool _if_conditional661;
_Bool _if_conditional662;
void* right_value631;
char* __dec_obj270;
struct sOrNode* __result348__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value628 = (void*)0;
memset(&result_314, 0, sizeof(struct sOrNode*));
right_value629 = (void*)0;
right_value630 = (void*)0;
right_value631 = (void*)0;
                    if(_if_conditional657=self==(void*)0,                    _if_conditional657) {
                        __result347__ = __result_obj__ = (void*)0;
                        return __result347__;
                    }
                    result_314=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value628=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value628);
                    if(right_value628 && right_value628 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value628, right_value628 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional658=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional658) {
                        __dec_obj268=result_314->mLeft;
                        result_314->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value629=sNode_clone(self->mLeft))));
                        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value629);
                        if(right_value629 && right_value629 != __result_obj__ && !__freed_obj__) { right_value629 = come_decrement_ref_count(right_value629, ((struct sNode*)right_value629)->finalize, ((struct sNode*)right_value629)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value629, right_value629 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional659=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional659) {
                        __dec_obj269=result_314->mRight;
                        result_314->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value630=sNode_clone(self->mRight))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value630);
                        if(right_value630 && right_value630 != __result_obj__ && !__freed_obj__) { right_value630 = come_decrement_ref_count(right_value630, ((struct sNode*)right_value630)->finalize, ((struct sNode*)right_value630)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value630, right_value630 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional660=self!=((void*)0),                    _if_conditional660) {
                        result_314->mQuote=self->mQuote;
                    }
                    if(_if_conditional661=self!=((void*)0),                    _if_conditional661) {
                        result_314->sline=self->sline;
                    }
                    if(_if_conditional662=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional662) {
                        __dec_obj270=result_314->sname;
                        result_314->sname=(char*)come_increment_ref_count(((char*)(right_value631=string_clone(self->sname))));
                        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value631);
                        if(right_value631 && right_value631 != __result_obj__ && !__freed_obj__) { right_value631 = come_decrement_ref_count(right_value631, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value631, right_value631 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    __result348__ = __result_obj__ = result_314;
                    if(result_314 && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result348__;
                    if(result_314 && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,result_314, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* andand_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value633;
struct sNode* node_315;
_Bool _while_condtional18;
_Bool _if_conditional663;
void* right_value634;
struct sNode* right_316;
void* right_value635;
void* right_value636;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value641;
struct sNode* __result353__;
_Bool _if_conditional673;
void* right_value642;
struct sNode* right_318;
void* right_value643;
void* right_value644;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* right_value649;
struct sNode* __result356__;
struct sNode* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value633 = (void*)0;
memset(&node_315, 0, sizeof(struct sNode*));
right_value634 = (void*)0;
memset(&right_316, 0, sizeof(struct sNode*));
right_value635 = (void*)0;
right_value636 = (void*)0;
right_value641 = (void*)0;
right_value642 = (void*)0;
memset(&right_318, 0, sizeof(struct sNode*));
right_value643 = (void*)0;
right_value644 = (void*)0;
right_value649 = (void*)0;
    parse_sharp_v5(info);
    node_315=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value633=or_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value633);
    if(right_value633 && right_value633 != __result_obj__ && !__freed_obj__) { right_value633 = come_decrement_ref_count(right_value633, ((struct sNode*)right_value633)->finalize, ((struct sNode*)right_value633)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value633, right_value633 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional18=*info->p,    _while_condtional18) {
        if(_if_conditional663=*info->p==38&&*(info->p+1)==38,        _if_conditional663) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value634=andand_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value634);
            if(right_value634 && right_value634 != __result_obj__ && !__freed_obj__) { right_value634 = come_decrement_ref_count(right_value634, ((struct sNode*)right_value634)->finalize, ((struct sNode*)right_value634)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value634, right_value634 = (void*)0;
            __freed_obj__ = 0;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2646, "struct sNode");
            _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value636=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value635=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2646, "struct sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_315),(struct sNode*)come_increment_ref_count(right_316),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sAndAndNode_sline;
            _inf_value39->sname=(void*)sAndAndNode_sname;
            _inf_value39->terminated=(void*)sAndAndNode_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result353__ = __result_obj__ = ((struct sNode*)(right_value641=_inf_value39));
            if(right_316 && !__freed_obj__) { right_316 = come_decrement_ref_count(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0); } 
            if(node_315 && !__freed_obj__) { node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value635);
            if(right_value635 && right_value635 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value635, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value635, right_value635 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value636);
            if(right_value636 && right_value636 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value636, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value636, right_value636 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value641);
            if(right_value641 && right_value641 != __result_obj__ && !__freed_obj__) { right_value641 = come_decrement_ref_count(right_value641, ((struct sNode*)right_value641)->finalize, ((struct sNode*)right_value641)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value641, right_value641 = (void*)0;
            __freed_obj__ = 0;
            return __result353__;
            if(right_316 && !__freed_obj__) { right_316 = come_decrement_ref_count(right_316, ((struct sNode*)right_316)->finalize, ((struct sNode*)right_316)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional673=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional673) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_318=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value642=andand_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value642);
                if(right_value642 && right_value642 != __result_obj__ && !__freed_obj__) { right_value642 = come_decrement_ref_count(right_value642, ((struct sNode*)right_value642)->finalize, ((struct sNode*)right_value642)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value642, right_value642 = (void*)0;
                __freed_obj__ = 0;
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2654, "struct sNode");
                _inf_obj_value40=come_increment_ref_count(((struct sAndAndNode*)(right_value644=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value643=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2654, "struct sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_315),(struct sNode*)come_increment_ref_count(right_318),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sAndAndNode_finalize;
                _inf_value40->clone=(void*)sAndAndNode_clone;
                _inf_value40->compile=(void*)sAndAndNode_compile;
                _inf_value40->sline=(void*)sAndAndNode_sline;
                _inf_value40->sname=(void*)sAndAndNode_sname;
                _inf_value40->terminated=(void*)sAndAndNode_terminated;
                _inf_value40->kind=(void*)sAndAndNode_kind;
                __result356__ = __result_obj__ = ((struct sNode*)(right_value649=_inf_value40));
                if(right_318 && !__freed_obj__) { right_318 = come_decrement_ref_count(right_318, ((struct sNode*)right_318)->finalize, ((struct sNode*)right_318)->_protocol_obj, 0, 0, 0); } 
                if(node_315 && !__freed_obj__) { node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value643);
                if(right_value643 && right_value643 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value643, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value643, right_value643 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value644);
                if(right_value644 && right_value644 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value644, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value644, right_value644 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value649);
                if(right_value649 && right_value649 != __result_obj__ && !__freed_obj__) { right_value649 = come_decrement_ref_count(right_value649, ((struct sNode*)right_value649)->finalize, ((struct sNode*)right_value649)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value649, right_value649 = (void*)0;
                __freed_obj__ = 0;
                return __result356__;
                if(right_318 && !__freed_obj__) { right_318 = come_decrement_ref_count(right_318, ((struct sNode*)right_318)->finalize, ((struct sNode*)right_318)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result357__ = __result_obj__ = node_315;
    if(node_315 && !__freed_obj__) { node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 1, 0); } 
    return __result357__;
    if(node_315 && !__freed_obj__) { node_315 = come_decrement_ref_count(node_315, ((struct sNode*)node_315)->finalize, ((struct sNode*)node_315)->_protocol_obj, 0, 0, 0); } 
}

static void sAndAndNode_finalize(struct sAndAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional674;
_Bool _if_conditional675;
_Bool _if_conditional676;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional674=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional674) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional675=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional675) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional676=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional676) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional677;
struct sAndAndNode* __result354__;
void* right_value645;
struct sAndAndNode* result_319;
_Bool _if_conditional678;
void* right_value646;
struct sNode* __dec_obj274;
_Bool _if_conditional679;
void* right_value647;
struct sNode* __dec_obj275;
_Bool _if_conditional680;
_Bool _if_conditional681;
_Bool _if_conditional682;
void* right_value648;
char* __dec_obj276;
struct sAndAndNode* __result355__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value645 = (void*)0;
memset(&result_319, 0, sizeof(struct sAndAndNode*));
right_value646 = (void*)0;
right_value647 = (void*)0;
right_value648 = (void*)0;
                    if(_if_conditional677=self==(void*)0,                    _if_conditional677) {
                        __result354__ = __result_obj__ = (void*)0;
                        return __result354__;
                    }
                    result_319=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value645=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value645);
                    if(right_value645 && right_value645 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value645, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value645, right_value645 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional678=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional678) {
                        __dec_obj274=result_319->mLeft;
                        result_319->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value646=sNode_clone(self->mLeft))));
                        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value646);
                        if(right_value646 && right_value646 != __result_obj__ && !__freed_obj__) { right_value646 = come_decrement_ref_count(right_value646, ((struct sNode*)right_value646)->finalize, ((struct sNode*)right_value646)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value646, right_value646 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional679=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional679) {
                        __dec_obj275=result_319->mRight;
                        result_319->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value647=sNode_clone(self->mRight))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value647);
                        if(right_value647 && right_value647 != __result_obj__ && !__freed_obj__) { right_value647 = come_decrement_ref_count(right_value647, ((struct sNode*)right_value647)->finalize, ((struct sNode*)right_value647)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value647, right_value647 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional680=self!=((void*)0),                    _if_conditional680) {
                        result_319->mQuote=self->mQuote;
                    }
                    if(_if_conditional681=self!=((void*)0),                    _if_conditional681) {
                        result_319->sline=self->sline;
                    }
                    if(_if_conditional682=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional682) {
                        __dec_obj276=result_319->sname;
                        result_319->sname=(char*)come_increment_ref_count(((char*)(right_value648=string_clone(self->sname))));
                        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value648);
                        if(right_value648 && right_value648 != __result_obj__ && !__freed_obj__) { right_value648 = come_decrement_ref_count(right_value648, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value648, right_value648 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    __result355__ = __result_obj__ = result_319;
                    if(result_319 && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,result_319, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result355__;
                    if(result_319 && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,result_319, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* oror_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value650;
struct sNode* node_320;
_Bool _while_condtional19;
_Bool _if_conditional683;
void* right_value651;
struct sNode* right_321;
void* right_value652;
void* right_value653;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value658;
struct sNode* __result360__;
_Bool _if_conditional693;
void* right_value659;
struct sNode* right_323;
void* right_value660;
void* right_value661;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* right_value666;
struct sNode* __result363__;
struct sNode* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value650 = (void*)0;
memset(&node_320, 0, sizeof(struct sNode*));
right_value651 = (void*)0;
memset(&right_321, 0, sizeof(struct sNode*));
right_value652 = (void*)0;
right_value653 = (void*)0;
right_value658 = (void*)0;
right_value659 = (void*)0;
memset(&right_323, 0, sizeof(struct sNode*));
right_value660 = (void*)0;
right_value661 = (void*)0;
right_value666 = (void*)0;
    parse_sharp_v5(info);
    node_320=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value650=andand_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value650);
    if(right_value650 && right_value650 != __result_obj__ && !__freed_obj__) { right_value650 = come_decrement_ref_count(right_value650, ((struct sNode*)right_value650)->finalize, ((struct sNode*)right_value650)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value650, right_value650 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional19=*info->p,    _while_condtional19) {
        if(_if_conditional683=*info->p==124&&*(info->p+1)==124,        _if_conditional683) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value651=oror_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value651);
            if(right_value651 && right_value651 != __result_obj__ && !__freed_obj__) { right_value651 = come_decrement_ref_count(right_value651, ((struct sNode*)right_value651)->finalize, ((struct sNode*)right_value651)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value651, right_value651 = (void*)0;
            __freed_obj__ = 0;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2681, "struct sNode");
            _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value653=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value652=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2681, "struct sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_320),(struct sNode*)come_increment_ref_count(right_321),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sOrOrNode_sline;
            _inf_value41->sname=(void*)sOrOrNode_sname;
            _inf_value41->terminated=(void*)sOrOrNode_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result360__ = __result_obj__ = ((struct sNode*)(right_value658=_inf_value41));
            if(right_321 && !__freed_obj__) { right_321 = come_decrement_ref_count(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0); } 
            if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value652);
            if(right_value652 && right_value652 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value652, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value652, right_value652 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value653);
            if(right_value653 && right_value653 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value653, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value653, right_value653 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value658);
            if(right_value658 && right_value658 != __result_obj__ && !__freed_obj__) { right_value658 = come_decrement_ref_count(right_value658, ((struct sNode*)right_value658)->finalize, ((struct sNode*)right_value658)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value658, right_value658 = (void*)0;
            __freed_obj__ = 0;
            return __result360__;
            if(right_321 && !__freed_obj__) { right_321 = come_decrement_ref_count(right_321, ((struct sNode*)right_321)->finalize, ((struct sNode*)right_321)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional693=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional693) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_323=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value659=oror_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value659);
                if(right_value659 && right_value659 != __result_obj__ && !__freed_obj__) { right_value659 = come_decrement_ref_count(right_value659, ((struct sNode*)right_value659)->finalize, ((struct sNode*)right_value659)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value659, right_value659 = (void*)0;
                __freed_obj__ = 0;
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2689, "struct sNode");
                _inf_obj_value42=come_increment_ref_count(((struct sOrOrNode*)(right_value661=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value660=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2689, "struct sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_320),(struct sNode*)come_increment_ref_count(right_323),(_Bool)1,info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sOrOrNode_finalize;
                _inf_value42->clone=(void*)sOrOrNode_clone;
                _inf_value42->compile=(void*)sOrOrNode_compile;
                _inf_value42->sline=(void*)sOrOrNode_sline;
                _inf_value42->sname=(void*)sOrOrNode_sname;
                _inf_value42->terminated=(void*)sOrOrNode_terminated;
                _inf_value42->kind=(void*)sOrOrNode_kind;
                __result363__ = __result_obj__ = ((struct sNode*)(right_value666=_inf_value42));
                if(right_323 && !__freed_obj__) { right_323 = come_decrement_ref_count(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0, 0, 0); } 
                if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value660);
                if(right_value660 && right_value660 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value660, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value660, right_value660 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value661);
                if(right_value661 && right_value661 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value661, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value661, right_value661 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value666);
                if(right_value666 && right_value666 != __result_obj__ && !__freed_obj__) { right_value666 = come_decrement_ref_count(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value666, right_value666 = (void*)0;
                __freed_obj__ = 0;
                return __result363__;
                if(right_323 && !__freed_obj__) { right_323 = come_decrement_ref_count(right_323, ((struct sNode*)right_323)->finalize, ((struct sNode*)right_323)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                break;
            }
        }
    }
    parse_sharp_v5(info);
    __result364__ = __result_obj__ = node_320;
    if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 1, 0); } 
    return __result364__;
    if(node_320 && !__freed_obj__) { node_320 = come_decrement_ref_count(node_320, ((struct sNode*)node_320)->finalize, ((struct sNode*)node_320)->_protocol_obj, 0, 0, 0); } 
}

static void sOrOrNode_finalize(struct sOrOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional694;
_Bool _if_conditional695;
_Bool _if_conditional696;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional694=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional694) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional695=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional695) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional696=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional696) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional697;
struct sOrOrNode* __result361__;
void* right_value662;
struct sOrOrNode* result_324;
_Bool _if_conditional698;
void* right_value663;
struct sNode* __dec_obj280;
_Bool _if_conditional699;
void* right_value664;
struct sNode* __dec_obj281;
_Bool _if_conditional700;
_Bool _if_conditional701;
_Bool _if_conditional702;
void* right_value665;
char* __dec_obj282;
struct sOrOrNode* __result362__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value662 = (void*)0;
memset(&result_324, 0, sizeof(struct sOrOrNode*));
right_value663 = (void*)0;
right_value664 = (void*)0;
right_value665 = (void*)0;
                    if(_if_conditional697=self==(void*)0,                    _if_conditional697) {
                        __result361__ = __result_obj__ = (void*)0;
                        return __result361__;
                    }
                    result_324=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value662=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value662);
                    if(right_value662 && right_value662 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value662, right_value662 = (void*)0;
                    __freed_obj__ = 0;
                    if(_if_conditional698=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional698) {
                        __dec_obj280=result_324->mLeft;
                        result_324->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value663=sNode_clone(self->mLeft))));
                        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value663);
                        if(right_value663 && right_value663 != __result_obj__ && !__freed_obj__) { right_value663 = come_decrement_ref_count(right_value663, ((struct sNode*)right_value663)->finalize, ((struct sNode*)right_value663)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value663, right_value663 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional699=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional699) {
                        __dec_obj281=result_324->mRight;
                        result_324->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value664=sNode_clone(self->mRight))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value664);
                        if(right_value664 && right_value664 != __result_obj__ && !__freed_obj__) { right_value664 = come_decrement_ref_count(right_value664, ((struct sNode*)right_value664)->finalize, ((struct sNode*)right_value664)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value664, right_value664 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional700=self!=((void*)0),                    _if_conditional700) {
                        result_324->mQuote=self->mQuote;
                    }
                    if(_if_conditional701=self!=((void*)0),                    _if_conditional701) {
                        result_324->sline=self->sline;
                    }
                    if(_if_conditional702=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional702) {
                        __dec_obj282=result_324->sname;
                        result_324->sname=(char*)come_increment_ref_count(((char*)(right_value665=string_clone(self->sname))));
                        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count(__dec_obj282, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value665);
                        if(right_value665 && right_value665 != __result_obj__ && !__freed_obj__) { right_value665 = come_decrement_ref_count(right_value665, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value665, right_value665 = (void*)0;
                        __freed_obj__ = 0;
                    }
                    __result362__ = __result_obj__ = result_324;
                    if(result_324 && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,result_324, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result362__;
                    if(result_324 && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,result_324, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* comma_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value667;
struct sNode* node_325;
_Bool _while_condtional20;
_Bool _if_conditional703;
void* right_value668;
struct sNode* node2_326;
void* right_value669;
void* right_value670;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* right_value675;
struct sNode* __result367__;
struct sNode* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value667 = (void*)0;
memset(&node_325, 0, sizeof(struct sNode*));
right_value668 = (void*)0;
memset(&node2_326, 0, sizeof(struct sNode*));
right_value669 = (void*)0;
right_value670 = (void*)0;
right_value675 = (void*)0;
    parse_sharp_v5(info);
    node_325=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value667=oror_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value667);
    if(right_value667 && right_value667 != __result_obj__ && !__freed_obj__) { right_value667 = come_decrement_ref_count(right_value667, ((struct sNode*)right_value667)->finalize, ((struct sNode*)right_value667)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value667, right_value667 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional20=*info->p,    _while_condtional20) {
        if(_if_conditional703=!info->no_comma&&*info->p==44,        _if_conditional703) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value668=oror_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value668);
            if(right_value668 && right_value668 != __result_obj__ && !__freed_obj__) { right_value668 = come_decrement_ref_count(right_value668, ((struct sNode*)right_value668)->finalize, ((struct sNode*)right_value668)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value668, right_value668 = (void*)0;
            __freed_obj__ = 0;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2716, "struct sNode");
            _inf_obj_value43=come_increment_ref_count(((struct sCommaNode*)(right_value670=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value669=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2716, "struct sCommaNode")))),(struct sNode*)come_increment_ref_count(node_325),(struct sNode*)come_increment_ref_count(node2_326),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sCommaNode_sline;
            _inf_value43->sname=(void*)sCommaNode_sname;
            _inf_value43->terminated=(void*)sCommaNode_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result367__ = __result_obj__ = ((struct sNode*)(right_value675=_inf_value43));
            if(node2_326 && !__freed_obj__) { node2_326 = come_decrement_ref_count(node2_326, ((struct sNode*)node2_326)->finalize, ((struct sNode*)node2_326)->_protocol_obj, 0, 0, 0); } 
            if(node_325 && !__freed_obj__) { node_325 = come_decrement_ref_count(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value669);
            if(right_value669 && right_value669 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value669, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value669, right_value669 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value670);
            if(right_value670 && right_value670 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value670, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value670, right_value670 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value675);
            if(right_value675 && right_value675 != __result_obj__ && !__freed_obj__) { right_value675 = come_decrement_ref_count(right_value675, ((struct sNode*)right_value675)->finalize, ((struct sNode*)right_value675)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value675, right_value675 = (void*)0;
            __freed_obj__ = 0;
            return __result367__;
            if(node2_326 && !__freed_obj__) { node2_326 = come_decrement_ref_count(node2_326, ((struct sNode*)node2_326)->finalize, ((struct sNode*)node2_326)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result368__ = __result_obj__ = node_325;
    if(node_325 && !__freed_obj__) { node_325 = come_decrement_ref_count(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 1, 0); } 
    return __result368__;
    if(node_325 && !__freed_obj__) { node_325 = come_decrement_ref_count(node_325, ((struct sNode*)node_325)->finalize, ((struct sNode*)node_325)->_protocol_obj, 0, 0, 0); } 
}

static void sCommaNode_finalize(struct sCommaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional704;
_Bool _if_conditional705;
_Bool _if_conditional706;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional704=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional704) {
                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional705=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional705) {
                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional706=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional706) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional707;
struct sCommaNode* __result365__;
void* right_value671;
struct sCommaNode* result_327;
_Bool _if_conditional708;
void* right_value672;
struct sNode* __dec_obj283;
_Bool _if_conditional709;
void* right_value673;
struct sNode* __dec_obj284;
_Bool _if_conditional710;
_Bool _if_conditional711;
void* right_value674;
char* __dec_obj285;
struct sCommaNode* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value671 = (void*)0;
memset(&result_327, 0, sizeof(struct sCommaNode*));
right_value672 = (void*)0;
right_value673 = (void*)0;
right_value674 = (void*)0;
                if(_if_conditional707=self==(void*)0,                _if_conditional707) {
                    __result365__ = __result_obj__ = (void*)0;
                    return __result365__;
                }
                result_327=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value671=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value671);
                if(right_value671 && right_value671 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value671, right_value671 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional708=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional708) {
                    __dec_obj283=result_327->mLeft;
                    result_327->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value672=sNode_clone(self->mLeft))));
                    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value672);
                    if(right_value672 && right_value672 != __result_obj__ && !__freed_obj__) { right_value672 = come_decrement_ref_count(right_value672, ((struct sNode*)right_value672)->finalize, ((struct sNode*)right_value672)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value672, right_value672 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional709=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional709) {
                    __dec_obj284=result_327->mRight;
                    result_327->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value673=sNode_clone(self->mRight))));
                    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value673);
                    if(right_value673 && right_value673 != __result_obj__ && !__freed_obj__) { right_value673 = come_decrement_ref_count(right_value673, ((struct sNode*)right_value673)->finalize, ((struct sNode*)right_value673)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value673, right_value673 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional710=self!=((void*)0),                _if_conditional710) {
                    result_327->sline=self->sline;
                }
                if(_if_conditional711=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional711) {
                    __dec_obj285=result_327->sname;
                    result_327->sname=(char*)come_increment_ref_count(((char*)(right_value674=string_clone(self->sname))));
                    if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count(__dec_obj285, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value674);
                    if(right_value674 && right_value674 != __result_obj__ && !__freed_obj__) { right_value674 = come_decrement_ref_count(right_value674, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value674, right_value674 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result366__ = __result_obj__ = result_327;
                if(result_327 && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result366__;
                if(result_327 && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,result_327, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* conditional_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value676;
struct sNode* node_328;
_Bool _while_condtional21;
_Bool _if_conditional712;
struct sNode* value1_329;
_Bool _if_conditional713;
void* right_value677;
void* right_value678;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value681;
struct sNode* __dec_obj287;
void* right_value682;
struct sNode* __dec_obj288;
void* right_value683;
struct sNode* value2_331;
void* right_value684;
void* right_value685;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* right_value691;
struct sNode* __result373__;
struct sNode* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value676 = (void*)0;
memset(&node_328, 0, sizeof(struct sNode*));
memset(&value1_329, 0, sizeof(struct sNode*));
right_value677 = (void*)0;
right_value678 = (void*)0;
right_value681 = (void*)0;
right_value682 = (void*)0;
right_value683 = (void*)0;
memset(&value2_331, 0, sizeof(struct sNode*));
right_value684 = (void*)0;
right_value685 = (void*)0;
right_value691 = (void*)0;
    parse_sharp_v5(info);
    node_328=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value676=comma_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value676);
    if(right_value676 && right_value676 != __result_obj__ && !__freed_obj__) { right_value676 = come_decrement_ref_count(right_value676, ((struct sNode*)right_value676)->finalize, ((struct sNode*)right_value676)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value676, right_value676 = (void*)0;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional21=*info->p,    _while_condtional21) {
        if(_if_conditional712=*info->p==63,        _if_conditional712) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional713=*info->p==58,            _if_conditional713) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2745, "struct sNode");
                _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value678=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value677=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2745, "struct sNullNode")))),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNullNode_sline;
                _inf_value44->sname=(void*)sNullNode_sname;
                _inf_value44->terminated=(void*)sNullNode_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj287=value1_329;
                value1_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value681=_inf_value44)));
                if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value677);
                if(right_value677 && right_value677 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value677, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value677, right_value677 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value678);
                if(right_value678 && right_value678 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value678, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value678, right_value678 = (void*)0;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value681);
                if(right_value681 && right_value681 != __result_obj__ && !__freed_obj__) { right_value681 = come_decrement_ref_count(right_value681, ((struct sNode*)right_value681)->finalize, ((struct sNode*)right_value681)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value681, right_value681 = (void*)0;
                __freed_obj__ = 0;
            }
            else {
                __dec_obj288=value1_329;
                value1_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value682=comma_exp(info))));
                if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value682);
                if(right_value682 && right_value682 != __result_obj__ && !__freed_obj__) { right_value682 = come_decrement_ref_count(right_value682, ((struct sNode*)right_value682)->finalize, ((struct sNode*)right_value682)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value682, right_value682 = (void*)0;
                __freed_obj__ = 0;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_331=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value683=comma_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value683);
            if(right_value683 && right_value683 != __result_obj__ && !__freed_obj__) { right_value683 = come_decrement_ref_count(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value683, right_value683 = (void*)0;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2759, "struct sNode");
            _inf_obj_value45=come_increment_ref_count(((struct sConditionalNode*)(right_value685=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value684=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2759, "struct sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_328),(struct sNode*)come_increment_ref_count(value1_329),(struct sNode*)come_increment_ref_count(value2_331),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sConditionalNode_sline;
            _inf_value45->sname=(void*)sConditionalNode_sname;
            _inf_value45->terminated=(void*)sConditionalNode_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result373__ = __result_obj__ = ((struct sNode*)(right_value691=_inf_value45));
            if(value1_329 && !__freed_obj__) { value1_329 = come_decrement_ref_count(value1_329, ((struct sNode*)value1_329)->finalize, ((struct sNode*)value1_329)->_protocol_obj, 0, 0, 0); } 
            if(value2_331 && !__freed_obj__) { value2_331 = come_decrement_ref_count(value2_331, ((struct sNode*)value2_331)->finalize, ((struct sNode*)value2_331)->_protocol_obj, 0, 0, 0); } 
            if(node_328 && !__freed_obj__) { node_328 = come_decrement_ref_count(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value684);
            if(right_value684 && right_value684 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value684, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value684, right_value684 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value685);
            if(right_value685 && right_value685 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value685, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value685, right_value685 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value691);
            if(right_value691 && right_value691 != __result_obj__ && !__freed_obj__) { right_value691 = come_decrement_ref_count(right_value691, ((struct sNode*)right_value691)->finalize, ((struct sNode*)right_value691)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value691, right_value691 = (void*)0;
            __freed_obj__ = 0;
            return __result373__;
            if(value1_329 && !__freed_obj__) { value1_329 = come_decrement_ref_count(value1_329, ((struct sNode*)value1_329)->finalize, ((struct sNode*)value1_329)->_protocol_obj, 0, 0, 0); } 
            if(value2_331 && !__freed_obj__) { value2_331 = come_decrement_ref_count(value2_331, ((struct sNode*)value2_331)->finalize, ((struct sNode*)value2_331)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            break;
        }
    }
    parse_sharp_v5(info);
    __result374__ = __result_obj__ = node_328;
    if(node_328 && !__freed_obj__) { node_328 = come_decrement_ref_count(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 1, 0); } 
    return __result374__;
    if(node_328 && !__freed_obj__) { node_328 = come_decrement_ref_count(node_328, ((struct sNode*)node_328)->finalize, ((struct sNode*)node_328)->_protocol_obj, 0, 0, 0); } 
}

static void sConditionalNode_finalize(struct sConditionalNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional718;
_Bool _if_conditional719;
_Bool _if_conditional720;
_Bool _if_conditional721;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional718=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional718) {
                    if(self->mValue1 && !__freed_obj__) { self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional719=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional719) {
                    if(self->mValue2 && !__freed_obj__) { self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional720=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional720) {
                    if(self->mValue3 && !__freed_obj__) { self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional721=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional721) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional722;
struct sConditionalNode* __result371__;
void* right_value686;
struct sConditionalNode* result_332;
_Bool _if_conditional723;
void* right_value687;
struct sNode* __dec_obj289;
_Bool _if_conditional724;
void* right_value688;
struct sNode* __dec_obj290;
_Bool _if_conditional725;
void* right_value689;
struct sNode* __dec_obj291;
_Bool _if_conditional726;
_Bool _if_conditional727;
void* right_value690;
char* __dec_obj292;
struct sConditionalNode* __result372__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value686 = (void*)0;
memset(&result_332, 0, sizeof(struct sConditionalNode*));
right_value687 = (void*)0;
right_value688 = (void*)0;
right_value689 = (void*)0;
right_value690 = (void*)0;
                if(_if_conditional722=self==(void*)0,                _if_conditional722) {
                    __result371__ = __result_obj__ = (void*)0;
                    return __result371__;
                }
                result_332=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value686=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value686);
                if(right_value686 && right_value686 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value686, right_value686 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional723=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional723) {
                    __dec_obj289=result_332->mValue1;
                    result_332->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value687=sNode_clone(self->mValue1))));
                    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value687);
                    if(right_value687 && right_value687 != __result_obj__ && !__freed_obj__) { right_value687 = come_decrement_ref_count(right_value687, ((struct sNode*)right_value687)->finalize, ((struct sNode*)right_value687)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value687, right_value687 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional724=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional724) {
                    __dec_obj290=result_332->mValue2;
                    result_332->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value688=sNode_clone(self->mValue2))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value688);
                    if(right_value688 && right_value688 != __result_obj__ && !__freed_obj__) { right_value688 = come_decrement_ref_count(right_value688, ((struct sNode*)right_value688)->finalize, ((struct sNode*)right_value688)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value688, right_value688 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional725=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional725) {
                    __dec_obj291=result_332->mValue3;
                    result_332->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value689=sNode_clone(self->mValue3))));
                    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value689);
                    if(right_value689 && right_value689 != __result_obj__ && !__freed_obj__) { right_value689 = come_decrement_ref_count(right_value689, ((struct sNode*)right_value689)->finalize, ((struct sNode*)right_value689)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value689, right_value689 = (void*)0;
                    __freed_obj__ = 0;
                }
                if(_if_conditional726=self!=((void*)0),                _if_conditional726) {
                    result_332->sline=self->sline;
                }
                if(_if_conditional727=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional727) {
                    __dec_obj292=result_332->sname;
                    result_332->sname=(char*)come_increment_ref_count(((char*)(right_value690=string_clone(self->sname))));
                    if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count(__dec_obj292, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value690);
                    if(right_value690 && right_value690 != __result_obj__ && !__freed_obj__) { right_value690 = come_decrement_ref_count(right_value690, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value690, right_value690 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result372__ = __result_obj__ = result_332;
                if(result_332 && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,result_332, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result372__;
                if(result_332 && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,result_332, (void*)0, (void*)0, 0, 0, 0, 0); }
}

struct sNode* expression_v13(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value692;
struct sNode* node_333;
struct sNode* __result375__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value692 = (void*)0;
memset(&node_333, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_333=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value692=conditional_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value692);
    if(right_value692 && right_value692 != __result_obj__ && !__freed_obj__) { right_value692 = come_decrement_ref_count(right_value692, ((struct sNode*)right_value692)->finalize, ((struct sNode*)right_value692)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value692, right_value692 = (void*)0;
    __freed_obj__ = 0;
    __result375__ = __result_obj__ = node_333;
    if(node_333 && !__freed_obj__) { node_333 = come_decrement_ref_count(node_333, ((struct sNode*)node_333)->finalize, ((struct sNode*)node_333)->_protocol_obj, 0, 1, 0); } 
    return __result375__;
    if(node_333 && !__freed_obj__) { node_333 = come_decrement_ref_count(node_333, ((struct sNode*)node_333)->finalize, ((struct sNode*)node_333)->_protocol_obj, 0, 0, 0); } 
}

struct sNode* string_node_v13(char* buf, char* head, int head_sline, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional728;
void* right_value693;
void* right_value694;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* right_value697;
struct sNode* __result378__;
_Bool _if_conditional733;
void* right_value698;
void* right_value699;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* right_value702;
struct sNode* __result381__;
void* right_value703;
struct sNode* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value693 = (void*)0;
right_value694 = (void*)0;
right_value697 = (void*)0;
right_value698 = (void*)0;
right_value699 = (void*)0;
right_value702 = (void*)0;
right_value703 = (void*)0;
    if(_if_conditional728=charp_operator_equals(buf,"null"),    _if_conditional728) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2783, "struct sNode");
        _inf_obj_value46=come_increment_ref_count(((struct sNullNode*)(right_value694=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value693=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2783, "struct sNullNode")))),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNullNode_sline;
        _inf_value46->sname=(void*)sNullNode_sname;
        _inf_value46->terminated=(void*)sNullNode_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result378__ = __result_obj__ = ((struct sNode*)(right_value697=_inf_value46));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value693);
        if(right_value693 && right_value693 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value693, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value693, right_value693 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value694);
        if(right_value694 && right_value694 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value694, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value694, right_value694 = (void*)0;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value697);
        if(right_value697 && right_value697 != __result_obj__ && !__freed_obj__) { right_value697 = come_decrement_ref_count(right_value697, ((struct sNode*)right_value697)->finalize, ((struct sNode*)right_value697)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value697, right_value697 = (void*)0;
        __freed_obj__ = 0;
        return __result378__;
    }
    else {
        if(_if_conditional733=charp_operator_equals(buf,"nil"),        _if_conditional733) {
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2786, "struct sNode");
            _inf_obj_value47=come_increment_ref_count(((struct sNilNode*)(right_value699=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value698=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2786, "struct sNilNode")))),info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sNilNode_finalize;
            _inf_value47->clone=(void*)sNilNode_clone;
            _inf_value47->compile=(void*)sNilNode_compile;
            _inf_value47->sline=(void*)sNilNode_sline;
            _inf_value47->sname=(void*)sNilNode_sname;
            _inf_value47->terminated=(void*)sNilNode_terminated;
            _inf_value47->kind=(void*)sNilNode_kind;
            __result381__ = __result_obj__ = ((struct sNode*)(right_value702=_inf_value47));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value698);
            if(right_value698 && right_value698 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value698, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value698, right_value698 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value699);
            if(right_value699 && right_value699 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value699, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value699, right_value699 = (void*)0;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value702);
            if(right_value702 && right_value702 != __result_obj__ && !__freed_obj__) { right_value702 = come_decrement_ref_count(right_value702, ((struct sNode*)right_value702)->finalize, ((struct sNode*)right_value702)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value702, right_value702 = (void*)0;
            __freed_obj__ = 0;
            return __result381__;
        }
    }
    __result382__ = __result_obj__ = ((struct sNode*)(right_value703=string_node_v12(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value703);
    if(right_value703 && right_value703 != __result_obj__ && !__freed_obj__) { right_value703 = come_decrement_ref_count(right_value703, ((struct sNode*)right_value703)->finalize, ((struct sNode*)right_value703)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value703, right_value703 = (void*)0;
    __freed_obj__ = 0;
    return __result382__;
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional729;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional729=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional729) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional730;
struct sNullNode* __result376__;
void* right_value695;
struct sNullNode* result_334;
_Bool _if_conditional731;
_Bool _if_conditional732;
void* right_value696;
char* __dec_obj293;
struct sNullNode* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value695 = (void*)0;
memset(&result_334, 0, sizeof(struct sNullNode*));
right_value696 = (void*)0;
            if(_if_conditional730=self==(void*)0,            _if_conditional730) {
                __result376__ = __result_obj__ = (void*)0;
                return __result376__;
            }
            result_334=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value695=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value695);
            if(right_value695 && right_value695 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value695, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value695, right_value695 = (void*)0;
            __freed_obj__ = 0;
            if(_if_conditional731=self!=((void*)0),            _if_conditional731) {
                result_334->sline=self->sline;
            }
            if(_if_conditional732=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional732) {
                __dec_obj293=result_334->sname;
                result_334->sname=(char*)come_increment_ref_count(((char*)(right_value696=string_clone(self->sname))));
                if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count(__dec_obj293, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value696);
                if(right_value696 && right_value696 != __result_obj__ && !__freed_obj__) { right_value696 = come_decrement_ref_count(right_value696, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value696, right_value696 = (void*)0;
                __freed_obj__ = 0;
            }
            __result377__ = __result_obj__ = result_334;
            if(result_334 && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,result_334, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result377__;
            if(result_334 && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,result_334, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sNilNode_finalize(struct sNilNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional734;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional734=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional734) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional735;
struct sNilNode* __result379__;
void* right_value700;
struct sNilNode* result_335;
_Bool _if_conditional736;
_Bool _if_conditional737;
void* right_value701;
char* __dec_obj294;
struct sNilNode* __result380__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
right_value700 = (void*)0;
memset(&result_335, 0, sizeof(struct sNilNode*));
right_value701 = (void*)0;
                if(_if_conditional735=self==(void*)0,                _if_conditional735) {
                    __result379__ = __result_obj__ = (void*)0;
                    return __result379__;
                }
                result_335=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value700=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value700);
                if(right_value700 && right_value700 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value700, right_value700 = (void*)0;
                __freed_obj__ = 0;
                if(_if_conditional736=self!=((void*)0),                _if_conditional736) {
                    result_335->sline=self->sline;
                }
                if(_if_conditional737=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional737) {
                    __dec_obj294=result_335->sname;
                    result_335->sname=(char*)come_increment_ref_count(((char*)(right_value701=string_clone(self->sname))));
                    if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count(__dec_obj294, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value701);
                    if(right_value701 && right_value701 != __result_obj__ && !__freed_obj__) { right_value701 = come_decrement_ref_count(right_value701, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value701, right_value701 = (void*)0;
                    __freed_obj__ = 0;
                }
                __result380__ = __result_obj__ = result_335;
                if(result_335 && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result380__;
                if(result_335 && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,result_335, (void*)0, (void*)0, 0, 0, 0, 0); }
}

