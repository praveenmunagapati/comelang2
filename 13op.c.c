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
memset(&right_value0, 0, sizeof(void*));
memset(&result_0, 0, sizeof(struct smart_pointer$1char*));
memset(&right_value1, 0, sizeof(void*));
    result_0=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value0=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2017, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value0);
    if(right_value0 && right_value0 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value0, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value0;
    __freed_obj__ = 0;
    __dec_obj1=result_0->memory;
    result_0->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value1=buffer_clone(self))));
    if(__dec_obj1) { come_call_finalizer(buffer_finalize,__dec_obj1, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value1);
    if(right_value1 && right_value1 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value1, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value1;
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
    result_1=(struct smart_pointer$1char*)come_increment_ref_count(((struct smart_pointer$1char*)(right_value2=(struct smart_pointer$1char*)come_calloc(1, sizeof(struct smart_pointer$1char)*(1), "./comelang2.h", 2027, "struct smart_pointer$1char"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value2);
    if(right_value2 && right_value2 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1charp_finalize,right_value2, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value2;
    __freed_obj__ = 0;
    __dec_obj2=result_1->memory;
    result_1->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value3=buffer_clone(self))));
    if(__dec_obj2) { come_call_finalizer(buffer_finalize,__dec_obj2, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value3);
    if(right_value3 && right_value3 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value3, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value3;
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
    result_2=(struct smart_pointer$1short*)come_increment_ref_count(((struct smart_pointer$1short*)(right_value4=(struct smart_pointer$1short*)come_calloc(1, sizeof(struct smart_pointer$1short)*(1), "./comelang2.h", 2037, "struct smart_pointer$1short"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value4);
    if(right_value4 && right_value4 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1shortp_finalize,right_value4, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value4;
    __freed_obj__ = 0;
    __dec_obj3=result_2->memory;
    result_2->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value5=buffer_clone(self))));
    if(__dec_obj3) { come_call_finalizer(buffer_finalize,__dec_obj3, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value5);
    if(right_value5 && right_value5 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value5, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value5;
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
    result_3=(struct smart_pointer$1int*)come_increment_ref_count(((struct smart_pointer$1int*)(right_value6=(struct smart_pointer$1int*)come_calloc(1, sizeof(struct smart_pointer$1int)*(1), "./comelang2.h", 2047, "struct smart_pointer$1int"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value6);
    if(right_value6 && right_value6 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1intp_finalize,right_value6, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value6;
    __freed_obj__ = 0;
    __dec_obj4=result_3->memory;
    result_3->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value7=buffer_clone(self))));
    if(__dec_obj4) { come_call_finalizer(buffer_finalize,__dec_obj4, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value7);
    if(right_value7 && right_value7 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value7, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value7;
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
    result_4=(struct smart_pointer$1long*)come_increment_ref_count(((struct smart_pointer$1long*)(right_value8=(struct smart_pointer$1long*)come_calloc(1, sizeof(struct smart_pointer$1long)*(1), "./comelang2.h", 2057, "struct smart_pointer$1long"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value8);
    if(right_value8 && right_value8 != __result_obj__ && !__freed_obj__) { come_call_finalizer(smart_pointer$1longp_finalize,right_value8, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value8;
    __freed_obj__ = 0;
    __dec_obj5=result_4->memory;
    result_4->memory=(struct buffer*)come_increment_ref_count(((struct buffer*)(right_value9=buffer_clone(self))));
    if(__dec_obj5) { come_call_finalizer(buffer_finalize,__dec_obj5, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value9);
    if(right_value9 && right_value9 != __result_obj__ && !__freed_obj__) { come_call_finalizer(buffer_finalize,right_value9, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value9;
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
void* right_value50;
struct sGenericsFun* generics_fun_40;
_Bool _if_conditional108;
void* right_value51;
_Bool _if_conditional109;
_Bool __result32__;
void* right_value55;
_Bool _if_conditional130;
void* right_value56;
struct tuple2$2sFunpcharph* multiple_assign_var1;
struct sFun* fun_44;
char* fun_name_45;
void* right_value57;
struct tuple2$2sFunpcharph* multiple_assign_var2;
struct sFun* fun2_46;
char* fun_name2_47;
_Bool _if_conditional132;
void* right_value58;
struct tuple2$2sFunpcharph* multiple_assign_var3;
struct sFun* fun_48;
char* fun_name_49;
void* right_value59;
struct tuple2$2sFunpcharph* multiple_assign_var4;
struct sFun* fun2_50;
char* fun_name2_51;
void* right_value60;
void* right_value61;
char* __dec_obj31;
int i_52;
_Bool _for_condtionalA1;
void* right_value62;
char* new_fun_name_53;
void* right_value63;
_Bool _if_conditional133;
void* right_value64;
char* __dec_obj32;
_Bool _if_conditional134;
void* right_value65;
_Bool result_54;
_Bool _if_conditional135;
void* right_value66;
struct CVALUE* come_value_55;
char* left_value2_56;
void* right_value67;
void* right_value68;
void* right_value69;
void* right_value70;
_Bool _if_conditional140;
void* right_value71;
void* right_value72;
char* __dec_obj33;
void* right_value73;
char* __dec_obj34;
char* right_value2_60;
void* right_value74;
void* right_value75;
void* right_value76;
void* right_value77;
_Bool _if_conditional141;
void* right_value78;
void* right_value79;
char* __dec_obj35;
void* right_value80;
char* __dec_obj36;
void* right_value81;
void* right_value82;
void* right_value83;
void* right_value84;
char* __dec_obj37;
void* right_value85;
struct sType* type2_61;
void* right_value86;
struct sType* type3_62;
void* right_value87;
struct sType* __dec_obj38;
_Bool _if_conditional142;
void* right_value88;
char* __dec_obj39;
void* right_value89;
char* __dec_obj40;
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
memset(&right_value50, 0, sizeof(void*));
memset(&generics_fun_40, 0, sizeof(struct sGenericsFun*));
memset(&right_value51, 0, sizeof(void*));
memset(&right_value55, 0, sizeof(void*));
memset(&right_value56, 0, sizeof(void*));
memset(&fun_44, 0, sizeof(struct sFun*));
memset(&fun_name_45, 0, sizeof(char*));
memset(&fun_44, 0, sizeof(struct sFun*));
memset(&fun_name_45, 0, sizeof(char*));
memset(&right_value57, 0, sizeof(void*));
memset(&fun2_46, 0, sizeof(struct sFun*));
memset(&fun_name2_47, 0, sizeof(char*));
memset(&fun2_46, 0, sizeof(struct sFun*));
memset(&fun_name2_47, 0, sizeof(char*));
memset(&right_value58, 0, sizeof(void*));
memset(&fun_48, 0, sizeof(struct sFun*));
memset(&fun_name_49, 0, sizeof(char*));
memset(&fun_48, 0, sizeof(struct sFun*));
memset(&fun_name_49, 0, sizeof(char*));
memset(&right_value59, 0, sizeof(void*));
memset(&fun2_50, 0, sizeof(struct sFun*));
memset(&fun_name2_51, 0, sizeof(char*));
memset(&fun2_50, 0, sizeof(struct sFun*));
memset(&fun_name2_51, 0, sizeof(char*));
memset(&right_value60, 0, sizeof(void*));
memset(&right_value61, 0, sizeof(void*));
memset(&i_52, 0, sizeof(int));
memset(&right_value62, 0, sizeof(void*));
memset(&new_fun_name_53, 0, sizeof(char*));
memset(&right_value63, 0, sizeof(void*));
memset(&right_value64, 0, sizeof(void*));
memset(&right_value65, 0, sizeof(void*));
memset(&result_54, 0, sizeof(_Bool));
memset(&right_value66, 0, sizeof(void*));
memset(&come_value_55, 0, sizeof(struct CVALUE*));
memset(&left_value2_56, 0, sizeof(char*));
memset(&right_value67, 0, sizeof(void*));
memset(&right_value68, 0, sizeof(void*));
memset(&right_value69, 0, sizeof(void*));
memset(&right_value70, 0, sizeof(void*));
memset(&right_value71, 0, sizeof(void*));
memset(&right_value72, 0, sizeof(void*));
memset(&right_value73, 0, sizeof(void*));
memset(&right_value2_60, 0, sizeof(char*));
memset(&right_value74, 0, sizeof(void*));
memset(&right_value75, 0, sizeof(void*));
memset(&right_value76, 0, sizeof(void*));
memset(&right_value77, 0, sizeof(void*));
memset(&right_value78, 0, sizeof(void*));
memset(&right_value79, 0, sizeof(void*));
memset(&right_value80, 0, sizeof(void*));
memset(&right_value81, 0, sizeof(void*));
memset(&right_value82, 0, sizeof(void*));
memset(&right_value83, 0, sizeof(void*));
memset(&right_value84, 0, sizeof(void*));
memset(&right_value85, 0, sizeof(void*));
memset(&type2_61, 0, sizeof(struct sType*));
memset(&right_value86, 0, sizeof(void*));
memset(&type3_62, 0, sizeof(struct sType*));
memset(&right_value87, 0, sizeof(void*));
memset(&right_value88, 0, sizeof(void*));
memset(&right_value89, 0, sizeof(void*));
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
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value46);
        if(right_value46 && right_value46 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value46, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value46;
        __freed_obj__ = 0;
        __dec_obj29=fun_name2_33;
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value47=create_method_name(obj_type_35,(_Bool)0,fun_name,info))));
        if(__dec_obj29) { __dec_obj29 = come_decrement_ref_count(__dec_obj29, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value47);
        if(right_value47 && right_value47 != __result_obj__ && !__freed_obj__) { right_value47 = come_decrement_ref_count(right_value47, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value47;
        __freed_obj__ = 0;
        fun_name3_36=(char*)come_increment_ref_count(((char*)(right_value48=xsprintf("%s_%s",none_generics_name_34,fun_name))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value48);
        if(right_value48 && right_value48 != __result_obj__ && !__freed_obj__) { right_value48 = come_decrement_ref_count(right_value48, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value48;
        __freed_obj__ = 0;
        generics_fun_40=((struct sGenericsFun*)(right_value50=map$2charphsGenericsFunph_at(info->generics_funcs,fun_name3_36,((void*)0))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value50);
        if(right_value50 && right_value50 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,right_value50, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value50;
        __freed_obj__ = 0;
        if(_if_conditional108=generics_fun_40,        _if_conditional108) {
            if(_if_conditional109=!create_generics_fun((char*)come_increment_ref_count(((char*)(right_value51=__builtin_string(fun_name2_33)))),generics_fun_40,obj_type_35,info),            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value51),
            (right_value51 && right_value51 != __result_obj__ && !__freed_obj__) ? right_value51 = come_decrement_ref_count(right_value51, (void*)0, (void*)0, 1, 0, 0):0,
            __right_value_freed_obj[0] = right_value51, 
            __freed_obj__ = 0, 
            _if_conditional109) {
                __result32__ = (_Bool)0;
                if(none_generics_name_34 && !__freed_obj__) { none_generics_name_34 = come_decrement_ref_count(none_generics_name_34, (void*)0, (void*)0, 0, 0, 0); }
                if(obj_type_35 && !__freed_obj__) { come_call_finalizer(sType_finalize,obj_type_35, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name3_36 && !__freed_obj__) { fun_name3_36 = come_decrement_ref_count(fun_name3_36, (void*)0, (void*)0, 0, 0, 0); }
                if(generics_type_29 && !__freed_obj__) { come_call_finalizer(sType_finalize,generics_type_29, (void*)0, (void*)0, 0, 0, 0, 0); }
                if(fun_name2_33 && !__freed_obj__) { fun_name2_33 = come_decrement_ref_count(fun_name2_33, (void*)0, (void*)0, 0, 0, 0); }
                return __result32__;
            }
            operator_fun_32=((struct sFun*)(right_value55=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value55);
            if(right_value55 && right_value55 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value55, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value55;
            __freed_obj__ = 0;
        }
        else {
            if(_if_conditional130=charp_operator_equals(fun_name,"operator_equals"),            _if_conditional130) {
                multiple_assign_var1=((struct tuple2$2sFunpcharph*)(right_value56=create_equals_automatically(obj_type_35,"equals",info)));
                fun_44=multiple_assign_var1->v1;
                fun_name_45=(char*)come_increment_ref_count(multiple_assign_var1->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value56);
                if(right_value56 && right_value56 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value56, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value56;
                __freed_obj__ = 0;
                multiple_assign_var2=((struct tuple2$2sFunpcharph*)(right_value57=create_operator_equals_automatically(obj_type_35,"operator_equals",info)));
                fun2_46=multiple_assign_var2->v1;
                fun_name2_47=(char*)come_increment_ref_count(multiple_assign_var2->v2);
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value57);
                if(right_value57 && right_value57 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value57, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value57;
                __freed_obj__ = 0;
                operator_fun_32=fun2_46;
                if(fun_name_45 && !__freed_obj__) { fun_name_45 = come_decrement_ref_count(fun_name_45, (void*)0, (void*)0, 0, 0, 0); }
                if(fun_name2_47 && !__freed_obj__) { fun_name2_47 = come_decrement_ref_count(fun_name2_47, (void*)0, (void*)0, 0, 0, 0); }
            }
            else {
                if(_if_conditional132=charp_operator_equals(fun_name,"operator_not_equals"),                _if_conditional132) {
                    multiple_assign_var3=((struct tuple2$2sFunpcharph*)(right_value58=create_equals_automatically(obj_type_35,"not_equals",info)));
                    fun_48=multiple_assign_var3->v1;
                    fun_name_49=(char*)come_increment_ref_count(multiple_assign_var3->v2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value58);
                    if(right_value58 && right_value58 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value58, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value58;
                    __freed_obj__ = 0;
                    multiple_assign_var4=((struct tuple2$2sFunpcharph*)(right_value59=create_operator_not_equals_automatically(obj_type_35,"operator_not_equals",info)));
                    fun2_50=multiple_assign_var4->v1;
                    fun_name2_51=(char*)come_increment_ref_count(multiple_assign_var4->v2);
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value59);
                    if(right_value59 && right_value59 != __result_obj__ && !__freed_obj__) { come_call_finalizer(tuple2$2sFunpcharphp_finalize,right_value59, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value59;
                    __freed_obj__ = 0;
                    operator_fun_32=fun2_50;
                    if(fun_name_49 && !__freed_obj__) { fun_name_49 = come_decrement_ref_count(fun_name_49, (void*)0, (void*)0, 0, 0, 0); }
                    if(fun_name2_51 && !__freed_obj__) { fun_name2_51 = come_decrement_ref_count(fun_name2_51, (void*)0, (void*)0, 0, 0, 0); }
                }
                else {
                    operator_fun_32=((struct sFun*)(right_value60=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value60);
                    if(right_value60 && right_value60 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value60, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value60;
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
        fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value61=create_method_name(type,(_Bool)0,fun_name,info))));
        if(__dec_obj31) { __dec_obj31 = come_decrement_ref_count(__dec_obj31, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value61);
        if(right_value61 && right_value61 != __result_obj__ && !__freed_obj__) { right_value61 = come_decrement_ref_count(right_value61, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value61;
        __freed_obj__ = 0;
        for(
        i_52=128-1 ,        0;        _for_condtionalA1=        i_52>=1 ,        _for_condtionalA1;        i_52-- ,        0        ){
            new_fun_name_53=(char*)come_increment_ref_count(((char*)(right_value62=xsprintf("%s_v%d",fun_name2_33,i_52))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value62);
            if(right_value62 && right_value62 != __result_obj__ && !__freed_obj__) { right_value62 = come_decrement_ref_count(right_value62, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value62;
            __freed_obj__ = 0;
            operator_fun_32=((struct sFun*)(right_value63=map$2charphsFunphp_operator_load_element(info->funcs,new_fun_name_53)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value63);
            if(right_value63 && right_value63 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value63, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value63;
            __freed_obj__ = 0;
            if(_if_conditional133=operator_fun_32,            _if_conditional133) {
                __dec_obj32=fun_name2_33;
                fun_name2_33=(char*)come_increment_ref_count(((char*)(right_value64=__builtin_string(new_fun_name_53))));
                if(__dec_obj32) { __dec_obj32 = come_decrement_ref_count(__dec_obj32, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value64);
                if(right_value64 && right_value64 != __result_obj__ && !__freed_obj__) { right_value64 = come_decrement_ref_count(right_value64, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value64;
                __freed_obj__ = 0;
                if(new_fun_name_53 && !__freed_obj__) { new_fun_name_53 = come_decrement_ref_count(new_fun_name_53, (void*)0, (void*)0, 0, 0, 0); }
                break;
            }
            if(new_fun_name_53 && !__freed_obj__) { new_fun_name_53 = come_decrement_ref_count(new_fun_name_53, (void*)0, (void*)0, 0, 0, 0); }
        }
        if(_if_conditional134=operator_fun_32==((void*)0),        _if_conditional134) {
            operator_fun_32=((struct sFun*)(right_value65=map$2charphsFunphp_operator_load_element(info->funcs,fun_name2_33)));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value65);
            if(right_value65 && right_value65 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sFun_finalize,right_value65, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value65;
            __freed_obj__ = 0;
        }
    }
    result_54=(_Bool)0;
    if(_if_conditional135=operator_fun_32&&(list$1sTypeph_length(type->mGenericsTypes)>0||(string_operator_equals(left_value->type->mClass->mName,right_value->type->mClass->mName)&&left_value->type->mPointerNum==right_value->type->mPointerNum)||charp_operator_equals(fun_name,"operator_mult")),    _if_conditional135) {
        come_value_55=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value66=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 77, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value66);
        if(right_value66 && right_value66 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value66, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value66;
        __freed_obj__ = 0;
        check_assign_type(((char*)(right_value68=xsprintf("\%s is assigned to",((char*)(right_value67=string_to_string(fun_name2_33)))))),((struct sType*)(right_value69=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0))),left_value->type,left_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value67);
        if(right_value67 && right_value67 != __result_obj__ && !__freed_obj__) { right_value67 = come_decrement_ref_count(right_value67, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value67;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value68);
        if(right_value68 && right_value68 != __result_obj__ && !__freed_obj__) { right_value68 = come_decrement_ref_count(right_value68, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value68;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value69);
        if(right_value69 && right_value69 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value69, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value69;
        __freed_obj__ = 0;
        if(_if_conditional140=((struct sType*)(right_value70=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0)))->mHeap&&left_value->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value70),
        (right_value70 && right_value70 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value70, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value70, 
        __freed_obj__ = 0, 
        _if_conditional140) {
            std_move(((struct sType*)(right_value71=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,0))),left_value->type,left_value,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value71);
            if(right_value71 && right_value71 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value71, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value71;
            __freed_obj__ = 0;
            __dec_obj33=left_value2_56;
            left_value2_56=(char*)come_increment_ref_count(((char*)(right_value72=xsprintf("%s",left_value->c_value))));
            if(__dec_obj33) { __dec_obj33 = come_decrement_ref_count(__dec_obj33, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value72);
            if(right_value72 && right_value72 != __result_obj__ && !__freed_obj__) { right_value72 = come_decrement_ref_count(right_value72, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value72;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj34=left_value2_56;
            left_value2_56=(char*)come_increment_ref_count(((char*)(right_value73=string_clone(left_value->c_value))));
            if(__dec_obj34) { __dec_obj34 = come_decrement_ref_count(__dec_obj34, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value73);
            if(right_value73 && right_value73 != __result_obj__ && !__freed_obj__) { right_value73 = come_decrement_ref_count(right_value73, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value73;
            __freed_obj__ = 0;
        }
        check_assign_type(((char*)(right_value75=xsprintf("\%s is assigned to",((char*)(right_value74=string_to_string(fun_name2_33)))))),((struct sType*)(right_value76=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1))),right_value->type,right_value,(_Bool)0,info);
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value74);
        if(right_value74 && right_value74 != __result_obj__ && !__freed_obj__) { right_value74 = come_decrement_ref_count(right_value74, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value74;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value75);
        if(right_value75 && right_value75 != __result_obj__ && !__freed_obj__) { right_value75 = come_decrement_ref_count(right_value75, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value75;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value76);
        if(right_value76 && right_value76 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value76, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value76;
        __freed_obj__ = 0;
        if(_if_conditional141=((struct sType*)(right_value77=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1)))->mHeap&&right_value->type->mHeap,        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value77),
        (right_value77 && right_value77 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(sType_finalize,right_value77, (void*)0, (void*)0, 0, 1, 0, 0):0,
        __right_value_freed_obj[0] = right_value77, 
        __freed_obj__ = 0, 
        _if_conditional141) {
            std_move(((struct sType*)(right_value78=list$1sTypephp_operator_load_element(operator_fun_32->mParamTypes,1))),right_value->type,right_value,info);
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value78);
            if(right_value78 && right_value78 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value78, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value78;
            __freed_obj__ = 0;
            __dec_obj35=right_value2_60;
            right_value2_60=(char*)come_increment_ref_count(((char*)(right_value79=xsprintf("%s",right_value->c_value))));
            if(__dec_obj35) { __dec_obj35 = come_decrement_ref_count(__dec_obj35, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value79);
            if(right_value79 && right_value79 != __result_obj__ && !__freed_obj__) { right_value79 = come_decrement_ref_count(right_value79, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value79;
            __freed_obj__ = 0;
        }
        else {
            __dec_obj36=right_value2_60;
            right_value2_60=(char*)come_increment_ref_count(((char*)(right_value80=string_clone(right_value->c_value))));
            if(__dec_obj36) { __dec_obj36 = come_decrement_ref_count(__dec_obj36, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value80);
            if(right_value80 && right_value80 != __result_obj__ && !__freed_obj__) { right_value80 = come_decrement_ref_count(right_value80, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value80;
            __freed_obj__ = 0;
        }
        __dec_obj37=come_value_55->c_value;
        come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value84=xsprintf("\%s(\%s,\%s)",((char*)(right_value81=string_to_string(fun_name2_33))),((char*)(right_value82=string_to_string(left_value2_56))),((char*)(right_value83=string_to_string(right_value2_60)))))));
        if(__dec_obj37) { __dec_obj37 = come_decrement_ref_count(__dec_obj37, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value81);
        if(right_value81 && right_value81 != __result_obj__ && !__freed_obj__) { right_value81 = come_decrement_ref_count(right_value81, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value81;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value82);
        if(right_value82 && right_value82 != __result_obj__ && !__freed_obj__) { right_value82 = come_decrement_ref_count(right_value82, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value82;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value83);
        if(right_value83 && right_value83 != __result_obj__ && !__freed_obj__) { right_value83 = come_decrement_ref_count(right_value83, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[2] = right_value83;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 3, right_value84);
        if(right_value84 && right_value84 != __result_obj__ && !__freed_obj__) { right_value84 = come_decrement_ref_count(right_value84, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[3] = right_value84;
        __freed_obj__ = 0;
        type2_61=(struct sType*)come_increment_ref_count(((struct sType*)(right_value85=sType_clone(operator_fun_32->mResultType))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value85);
        if(right_value85 && right_value85 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value85, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value85;
        __freed_obj__ = 0;
        type3_62=(struct sType*)come_increment_ref_count(((struct sType*)(right_value86=solve_generics(type2_61,generics_type_29,info))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value86);
        if(right_value86 && right_value86 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value86, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value86;
        __freed_obj__ = 0;
        __dec_obj38=come_value_55->type;
        come_value_55->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value87=sType_clone(type3_62))));
        if(__dec_obj38) { come_call_finalizer(sType_finalize,__dec_obj38, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value87);
        if(right_value87 && right_value87 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value87, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value87;
        __freed_obj__ = 0;
        come_value_55->var=((void*)0);
        if(_if_conditional142=type3_62->mHeap,        _if_conditional142) {
            __dec_obj39=come_value_55->c_value;
            come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value88=append_object_to_right_values(come_value_55->c_value,(struct sType*)come_increment_ref_count(type3_62),info))));
            if(__dec_obj39) { __dec_obj39 = come_decrement_ref_count(__dec_obj39, (void*)0, (void*)0, 0,0,0); }
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value88);
            if(right_value88 && right_value88 != __result_obj__ && !__freed_obj__) { right_value88 = come_decrement_ref_count(right_value88, (void*)0, (void*)0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value88;
            __freed_obj__ = 0;
        }
        __dec_obj40=come_value_55->c_value;
        come_value_55->c_value=(char*)come_increment_ref_count(((char*)(right_value89=append_exception_value(come_value_55->c_value,come_value_55->type,info))));
        if(__dec_obj40) { __dec_obj40 = come_decrement_ref_count(__dec_obj40, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value89);
        if(right_value89 && right_value89 != __result_obj__ && !__freed_obj__) { right_value89 = come_decrement_ref_count(right_value89, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value89;
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
_Bool _if_conditional106;
_Bool _if_conditional107;
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
                        if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result28__;
                    }
                    it_38++;
                    if(_if_conditional106=it_38>=self->size,                    _if_conditional106) {
                        it_38=0;
                    }
                    else {
                        if(_if_conditional107=it_38==hash_37,                        _if_conditional107) {
                            __result29__ = __result_obj__ = default_value;
                            if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                            return __result29__;
                        }
                    }
                }
                else {
                    __result30__ = __result_obj__ = default_value;
                    if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result30__;
                }
            }
            __result31__ = __result_obj__ = default_value;
            if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
            return __result31__;
            if(default_value && !__freed_obj__) { come_call_finalizer(sGenericsFun_finalize,default_value, (void*)0, (void*)0, 0, 0, 1, 0); }
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

static void sGenericsFun_finalize(struct sGenericsFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional97;
_Bool _if_conditional98;
_Bool _if_conditional99;
_Bool _if_conditional100;
_Bool _if_conditional101;
_Bool _if_conditional102;
_Bool _if_conditional103;
_Bool _if_conditional104;
_Bool _if_conditional105;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional97=self!=((void*)0)&&self->mImplType!=((void*)0),                            _if_conditional97) {
                                if(self->mImplType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mImplType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional98=self!=((void*)0)&&self->mGenericsTypeNames!=((void*)0),                            _if_conditional98) {
                                if(self->mGenericsTypeNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mGenericsTypeNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional99=self!=((void*)0)&&self->mName!=((void*)0),                            _if_conditional99) {
                                if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional100=self!=((void*)0)&&self->mResultType!=((void*)0),                            _if_conditional100) {
                                if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional101=self!=((void*)0)&&self->mParamTypes!=((void*)0),                            _if_conditional101) {
                                if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional102=self!=((void*)0)&&self->mParamNames!=((void*)0),                            _if_conditional102) {
                                if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional103=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                            _if_conditional103) {
                                if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                            }
                            if(_if_conditional104=self!=((void*)0)&&self->mBlock!=((void*)0),                            _if_conditional104) {
                                if(self->mBlock && !__freed_obj__) { self->mBlock = come_decrement_ref_count(self->mBlock, (void*)0, (void*)0, 0, 0, 0); }
                            }
                            if(_if_conditional105=self!=((void*)0)&&self->mGenericsSName!=((void*)0),                            _if_conditional105) {
                                if(self->mGenericsSName && !__freed_obj__) { self->mGenericsSName = come_decrement_ref_count(self->mGenericsSName, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sFun* map$2charphsFunphp_operator_load_element(struct map$2charphsFunph* self, char* key){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* default_value_41;
unsigned int hash_42;
unsigned int it_43;
_Bool _while_condtional8;
_Bool _if_conditional110;
void* right_value52;
_Bool _if_conditional111;
struct sFun* __result33__;
_Bool _if_conditional127;
_Bool _if_conditional128;
struct sFun* __result34__;
struct sFun* __result35__;
void* right_value53;
void* right_value54;
struct sFun* __result37__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&default_value_41, 0, sizeof(struct sFun*));
memset(&hash_42, 0, sizeof(unsigned int));
memset(&it_43, 0, sizeof(unsigned int));
memset(&right_value52, 0, sizeof(void*));
memset(&right_value53, 0, sizeof(void*));
memset(&right_value54, 0, sizeof(void*));
                memset(&default_value_41,0,sizeof(struct sFun*));
                hash_42=string_get_hash_key(((char*)key))%self->size;
                it_43=hash_42;
                while(_while_condtional8=(_Bool)1,                _while_condtional8) {
                    if(_if_conditional110=self->item_existance[it_43],                    _if_conditional110) {
                        if(_if_conditional111=optional$2boolbool_value(((struct optional$2boolbool*)(right_value52=string_equals(self->keys[it_43],key)))),                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value52),
                        (right_value52 && right_value52 != __result_obj__ && !__freed_obj__) ? come_call_finalizer(optional$2boolboolp_finalize,right_value52, (void*)0, (void*)0, 0, 1, 0, 0):0,
                        __right_value_freed_obj[0] = right_value52, 
                        __freed_obj__ = 0, 
                        _if_conditional111) {
                            __result33__ = __result_obj__ = self->items[it_43];
                            if(default_value_41 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_41, (void*)0, (void*)0, 0, 0, 0, 0); }
                            return __result33__;
                        }
                        it_43++;
                        if(_if_conditional127=it_43>=self->size,                        _if_conditional127) {
                            it_43=0;
                        }
                        else {
                            if(_if_conditional128=it_43==hash_42,                            _if_conditional128) {
                                __result34__ = __result_obj__ = default_value_41;
                                if(default_value_41 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_41, (void*)0, (void*)0, 0, 0, 1, 0); }
                                return __result34__;
                            }
                        }
                    }
                    else {
                        __result35__ = __result_obj__ = default_value_41;
                        if(default_value_41 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_41, (void*)0, (void*)0, 0, 0, 1, 0); }
                        return __result35__;
                    }
                }
                __result37__ = __result_obj__ = ((struct optional$2sFunphbool*)(right_value54=optional$2sFunphbool_initialize(((struct optional$2sFunphbool*)(right_value53=(struct optional$2sFunphbool*)come_calloc(1, sizeof(struct optional$2sFunphbool)*(1), "./comelang2.h", 1639, "struct optional$2sFunphbool"))),(struct sFun*)come_increment_ref_count(default_value_41),(_Bool)0)));
                if(default_value_41 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_41, (void*)0, (void*)0, 0, 0, 0, 0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value53);
                if(right_value53 && right_value53 != __result_obj__ && !__freed_obj__) { right_value53 = come_decrement_ref_count(right_value53, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value53;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value54);
                if(right_value54 && right_value54 != __result_obj__ && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,right_value54, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value54;
                __freed_obj__ = 0;
                return __result37__;
                if(default_value_41 && !__freed_obj__) { come_call_finalizer(sFun_finalize,default_value_41, (void*)0, (void*)0, 0, 0, 0, 0); }
}

static void sFun_finalize(struct sFun* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional112;
_Bool _if_conditional113;
_Bool _if_conditional114;
_Bool _if_conditional115;
_Bool _if_conditional116;
_Bool _if_conditional117;
_Bool _if_conditional118;
_Bool _if_conditional121;
_Bool _if_conditional122;
_Bool _if_conditional123;
_Bool _if_conditional124;
_Bool _if_conditional125;
_Bool _if_conditional126;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional112=self!=((void*)0)&&self->mName!=((void*)0),                                _if_conditional112) {
                                    if(self->mName && !__freed_obj__) { self->mName = come_decrement_ref_count(self->mName, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional113=self!=((void*)0)&&self->mResultType!=((void*)0),                                _if_conditional113) {
                                    if(self->mResultType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mResultType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional114=self!=((void*)0)&&self->mParamTypes!=((void*)0),                                _if_conditional114) {
                                    if(self->mParamTypes && !__freed_obj__) { come_call_finalizer(list$1sTypephp_finalize,self->mParamTypes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional115=self!=((void*)0)&&self->mParamNames!=((void*)0),                                _if_conditional115) {
                                    if(self->mParamNames && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamNames, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional116=self!=((void*)0)&&self->mParamDefaultParametors!=((void*)0),                                _if_conditional116) {
                                    if(self->mParamDefaultParametors && !__freed_obj__) { come_call_finalizer(list$1charphp_finalize,self->mParamDefaultParametors, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional117=self!=((void*)0)&&self->mLambdaType!=((void*)0),                                _if_conditional117) {
                                    if(self->mLambdaType && !__freed_obj__) { come_call_finalizer(sType_finalize,self->mLambdaType, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional118=self!=((void*)0)&&self->mBlock!=((void*)0),                                _if_conditional118) {
                                    if(self->mBlock && !__freed_obj__) { come_call_finalizer(sBlock_finalize,self->mBlock, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional121=self!=((void*)0)&&self->mSource!=((void*)0),                                _if_conditional121) {
                                    if(self->mSource && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSource, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional122=self!=((void*)0)&&self->mSourceHead!=((void*)0),                                _if_conditional122) {
                                    if(self->mSourceHead && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional123=self!=((void*)0)&&self->mSourceHead2!=((void*)0),                                _if_conditional123) {
                                    if(self->mSourceHead2 && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceHead2, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional124=self!=((void*)0)&&self->mSourceDefer!=((void*)0),                                _if_conditional124) {
                                    if(self->mSourceDefer && !__freed_obj__) { come_call_finalizer(buffer_finalize,self->mSourceDefer, (void*)0, (void*)0, 0, 0, 0, 0); }
                                }
                                if(_if_conditional125=self!=((void*)0)&&self->mComeHeader!=((void*)0),                                _if_conditional125) {
                                    if(self->mComeHeader && !__freed_obj__) { self->mComeHeader = come_decrement_ref_count(self->mComeHeader, (void*)0, (void*)0, 0, 0, 0); }
                                }
                                if(_if_conditional126=self!=((void*)0)&&self->mDeclareSName!=((void*)0),                                _if_conditional126) {
                                    if(self->mDeclareSName && !__freed_obj__) { self->mDeclareSName = come_decrement_ref_count(self->mDeclareSName, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static void sBlock_finalize(struct sBlock* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional119;
_Bool _if_conditional120;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional119=self!=((void*)0)&&self->mNodes!=((void*)0),                                        _if_conditional119) {
                                            if(self->mNodes && !__freed_obj__) { come_call_finalizer(list$1sNodephp_finalize,self->mNodes, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
                                        if(_if_conditional120=self!=((void*)0)&&self->mVarTable!=((void*)0),                                        _if_conditional120) {
                                            if(self->mVarTable && !__freed_obj__) { come_call_finalizer(sVarTable_finalize,self->mVarTable, (void*)0, (void*)0, 0, 0, 0, 0); }
                                        }
}

static struct optional$2sFunphbool* optional$2sFunphbool_initialize(struct optional$2sFunphbool* self, struct sFun* v1, _Bool v2){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sFun* __dec_obj30;
struct optional$2sFunphbool* __result36__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    __dec_obj30=self->v1;
                    self->v1=(struct sFun*)come_increment_ref_count(v1);
                    if(__dec_obj30) { come_call_finalizer(sFun_finalize,__dec_obj30, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->v2=v2;
                    __result36__ = __result_obj__ = self;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
                    return __result36__;
                    if(self && !__freed_obj__) { come_call_finalizer(optional$2sFunphboolp_finalize,self, (void*)0, (void*)0, 0, 0, 1, 0); }
                    if(v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,v1, (void*)0, (void*)0, 0, 0, 1, 0); }
}

static void optional$2sFunphboolp_finalize(struct optional$2sFunphbool* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional129;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional129=self!=((void*)0)&&self->v1!=((void*)0),                        _if_conditional129) {
                            if(self->v1 && !__freed_obj__) { come_call_finalizer(sFun_finalize,self->v1, (void*)0, (void*)0, 0, 0, 0, 0); }
                        }
}

static void tuple2$2sFunpcharphp_finalize(struct tuple2$2sFunpcharph* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional131;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional131=self!=((void*)0)&&self->v2!=((void*)0),                    _if_conditional131) {
                        if(self->v2 && !__freed_obj__) { self->v2 = come_decrement_ref_count(self->v2, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static void CVALUE_finalize(struct CVALUE* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional136;
_Bool _if_conditional137;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional136=self!=((void*)0)&&self->c_value!=((void*)0),            _if_conditional136) {
                if(self->c_value && !__freed_obj__) { self->c_value = come_decrement_ref_count(self->c_value, (void*)0, (void*)0, 0, 0, 0); }
            }
            if(_if_conditional137=self!=((void*)0)&&self->type!=((void*)0),            _if_conditional137) {
                if(self->type && !__freed_obj__) { come_call_finalizer(sType_finalize,self->type, (void*)0, (void*)0, 0, 0, 0, 0); }
            }
}

static struct sType* list$1sTypephp_operator_load_element(struct list$1sTypeph* self, int position){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional138;
struct list_item$1sTypeph* it_57;
int i_58;
_Bool _while_condtional9;
_Bool _if_conditional139;
struct sType* __result38__;
struct sType* default_value_59;
struct sType* __result39__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&it_57, 0, sizeof(struct list_item$1sTypeph*));
memset(&i_58, 0, sizeof(int));
memset(&default_value_59, 0, sizeof(struct sType*));
            if(_if_conditional138=position<0,            _if_conditional138) {
                position+=self->len;
            }
            it_57=self->head;
            i_58=0;
            while(_while_condtional9=it_57!=((void*)0),            _while_condtional9) {
                if(_if_conditional139=position==i_58,                _if_conditional139) {
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
_Bool _if_conditional143;
void* right_value90;
struct list_item$1CVALUEph* litem_63;
struct CVALUE* __dec_obj41;
_Bool _if_conditional145;
void* right_value91;
struct list_item$1CVALUEph* litem_64;
struct CVALUE* __dec_obj42;
void* right_value92;
struct list_item$1CVALUEph* litem_65;
struct CVALUE* __dec_obj43;
struct list$1CVALUEph* __result40__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value90, 0, sizeof(void*));
memset(&litem_63, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value91, 0, sizeof(void*));
memset(&litem_64, 0, sizeof(struct list_item$1CVALUEph*));
memset(&right_value92, 0, sizeof(void*));
memset(&litem_65, 0, sizeof(struct list_item$1CVALUEph*));
            if(_if_conditional143=self->len==0,            _if_conditional143) {
                litem_63=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value90=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 282, "struct list_item$1CVALUEph"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value90);
                if(right_value90 && right_value90 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value90, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value90;
                __freed_obj__ = 0;
                litem_63->prev=((void*)0);
                litem_63->next=((void*)0);
                __dec_obj41=litem_63->item;
                litem_63->item=(struct CVALUE*)come_increment_ref_count(item);
                if(__dec_obj41) { come_call_finalizer(CVALUE_finalize,__dec_obj41, (void*)0, (void*)0, 0, 0, 0, 0); }
                self->tail=litem_63;
                self->head=litem_63;
            }
            else {
                if(_if_conditional145=self->len==1,                _if_conditional145) {
                    litem_64=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value91=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 292, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value91);
                    if(right_value91 && right_value91 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value91, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value91;
                    __freed_obj__ = 0;
                    litem_64->prev=self->head;
                    litem_64->next=((void*)0);
                    __dec_obj42=litem_64->item;
                    litem_64->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj42) { come_call_finalizer(CVALUE_finalize,__dec_obj42, (void*)0, (void*)0, 0, 0, 0, 0); }
                    self->tail=litem_64;
                    self->head->next=litem_64;
                }
                else {
                    litem_65=(struct list_item$1CVALUEph*)come_increment_ref_count(((struct list_item$1CVALUEph*)(right_value92=(struct list_item$1CVALUEph*)come_calloc(1, sizeof(struct list_item$1CVALUEph)*(1), "./comelang2.h", 302, "struct list_item$1CVALUEph"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value92);
                    if(right_value92 && right_value92 != __result_obj__ && !__freed_obj__) { come_call_finalizer(list_item$1CVALUEphp_finalize,right_value92, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value92;
                    __freed_obj__ = 0;
                    litem_65->prev=self->tail;
                    litem_65->next=((void*)0);
                    __dec_obj43=litem_65->item;
                    litem_65->item=(struct CVALUE*)come_increment_ref_count(item);
                    if(__dec_obj43) { come_call_finalizer(CVALUE_finalize,__dec_obj43, (void*)0, (void*)0, 0, 0, 0, 0); }
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
_Bool _if_conditional144;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional144=self!=((void*)0)&&self->item!=((void*)0),                    _if_conditional144) {
                        if(self->item && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,self->item, (void*)0, (void*)0, 0, 0, 0, 0); }
                    }
}

struct sNullNode* sNullNode_initialize(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value93;
char* __dec_obj44;
struct sNullNode* __result42__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value93, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj44=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value93=__builtin_string(info->sname))));
    if(__dec_obj44) { __dec_obj44 = come_decrement_ref_count(__dec_obj44, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value93);
    if(right_value93 && right_value93 != __result_obj__ && !__freed_obj__) { right_value93 = come_decrement_ref_count(right_value93, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value93;
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
void* right_value94;
char* __result44__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value94, 0, sizeof(void*));
    __result44__ = __result_obj__ = ((char*)(right_value94=__builtin_string("sNullNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value94);
    if(right_value94 && right_value94 != __result_obj__ && !__freed_obj__) { right_value94 = come_decrement_ref_count(right_value94, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value94;
    __freed_obj__ = 0;
    return __result44__;
}

_Bool sNullNode_compile(struct sNullNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value95;
struct CVALUE* come_value_66;
void* right_value96;
char* __dec_obj45;
void* right_value97;
void* right_value98;
struct sType* __dec_obj46;
_Bool __result45__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value95, 0, sizeof(void*));
memset(&come_value_66, 0, sizeof(struct CVALUE*));
memset(&right_value96, 0, sizeof(void*));
memset(&right_value97, 0, sizeof(void*));
memset(&right_value98, 0, sizeof(void*));
    come_value_66=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value95=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 150, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value95);
    if(right_value95 && right_value95 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value95, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value95;
    __freed_obj__ = 0;
    __dec_obj45=come_value_66->c_value;
    come_value_66->c_value=(char*)come_increment_ref_count(((char*)(right_value96=xsprintf("((void*)0)"))));
    if(__dec_obj45) { __dec_obj45 = come_decrement_ref_count(__dec_obj45, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value96);
    if(right_value96 && right_value96 != __result_obj__ && !__freed_obj__) { right_value96 = come_decrement_ref_count(right_value96, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value96;
    __freed_obj__ = 0;
    __dec_obj46=come_value_66->type;
    come_value_66->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value98=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value97=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 153, "struct sType")))),"void*",(_Bool)0,info))));
    if(__dec_obj46) { come_call_finalizer(sType_finalize,__dec_obj46, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value97);
    if(right_value97 && right_value97 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value97, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value97;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value98);
    if(right_value98 && right_value98 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value98, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value98;
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
void* right_value99;
char* __result47__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value99, 0, sizeof(void*));
    __result47__ = __result_obj__ = ((char*)(right_value99=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value99);
    if(right_value99 && right_value99 != __result_obj__ && !__freed_obj__) { right_value99 = come_decrement_ref_count(right_value99, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value99;
    __freed_obj__ = 0;
    return __result47__;
}

struct sNode* create_null_object(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value100;
void* right_value101;
struct sNode* _inf_value1;
struct sNullNode* _inf_obj_value1;
void* right_value104;
struct sNode* __result50__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value100, 0, sizeof(void*));
memset(&right_value101, 0, sizeof(void*));
memset(&right_value104, 0, sizeof(void*));
    _inf_value1=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 175, "struct sNode");
    _inf_obj_value1=come_increment_ref_count(((struct sNullNode*)(right_value101=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value100=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 175, "struct sNullNode")))),info))));
    _inf_value1->_protocol_obj=_inf_obj_value1;
    _inf_value1->finalize=(void*)sNullNode_finalize;
    _inf_value1->clone=(void*)sNullNode_clone;
    _inf_value1->compile=(void*)sNullNode_compile;
    _inf_value1->sline=(void*)sNullNode_sline;
    _inf_value1->sname=(void*)sNullNode_sname;
    _inf_value1->terminated=(void*)sNullNode_terminated;
    _inf_value1->kind=(void*)sNullNode_kind;
    __result50__ = __result_obj__ = ((struct sNode*)(right_value104=_inf_value1));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value100);
    if(right_value100 && right_value100 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value100, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value100;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value101);
    if(right_value101 && right_value101 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value101, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value101;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value104);
    if(right_value104 && right_value104 != __result_obj__ && !__freed_obj__) { right_value104 = come_decrement_ref_count(right_value104, ((struct sNode*)right_value104)->finalize, ((struct sNode*)right_value104)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[2] = right_value104;
    __freed_obj__ = 0;
    return __result50__;
}

struct sNilNode* sNilNode_initialize(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value105;
char* __dec_obj48;
struct sNilNode* __result51__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value105, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj48=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value105=__builtin_string(info->sname))));
    if(__dec_obj48) { __dec_obj48 = come_decrement_ref_count(__dec_obj48, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value105);
    if(right_value105 && right_value105 != __result_obj__ && !__freed_obj__) { right_value105 = come_decrement_ref_count(right_value105, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value105;
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
void* right_value106;
char* __result53__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value106, 0, sizeof(void*));
    __result53__ = __result_obj__ = ((char*)(right_value106=__builtin_string("sNilNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value106);
    if(right_value106 && right_value106 != __result_obj__ && !__freed_obj__) { right_value106 = come_decrement_ref_count(right_value106, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value106;
    __freed_obj__ = 0;
    return __result53__;
}

_Bool sNilNode_compile(struct sNilNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value107;
struct CVALUE* come_value_68;
void* right_value108;
char* __dec_obj49;
void* right_value109;
void* right_value110;
struct sType* __dec_obj50;
_Bool __result54__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value107, 0, sizeof(void*));
memset(&come_value_68, 0, sizeof(struct CVALUE*));
memset(&right_value108, 0, sizeof(void*));
memset(&right_value109, 0, sizeof(void*));
memset(&right_value110, 0, sizeof(void*));
    come_value_68=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value107=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 205, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value107);
    if(right_value107 && right_value107 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value107, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value107;
    __freed_obj__ = 0;
    __dec_obj49=come_value_68->c_value;
    come_value_68->c_value=(char*)come_increment_ref_count(((char*)(right_value108=xsprintf("((void*)0)"))));
    if(__dec_obj49) { __dec_obj49 = come_decrement_ref_count(__dec_obj49, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value108);
    if(right_value108 && right_value108 != __result_obj__ && !__freed_obj__) { right_value108 = come_decrement_ref_count(right_value108, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value108;
    __freed_obj__ = 0;
    __dec_obj50=come_value_68->type;
    come_value_68->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value110=sType_initialize((struct sType*)come_increment_ref_count(((struct sType*)(right_value109=(struct sType*)come_calloc(1, sizeof(struct sType)*(1), "13op.c", 208, "struct sType")))),"void*",(_Bool)0,info))));
    if(__dec_obj50) { come_call_finalizer(sType_finalize,__dec_obj50, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value109);
    if(right_value109 && right_value109 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value109, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value109;
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value110);
    if(right_value110 && right_value110 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value110, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[1] = right_value110;
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
void* right_value111;
char* __result56__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value111, 0, sizeof(void*));
    __result56__ = __result_obj__ = ((char*)(right_value111=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value111);
    if(right_value111 && right_value111 != __result_obj__ && !__freed_obj__) { right_value111 = come_decrement_ref_count(right_value111, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value111;
    __freed_obj__ = 0;
    return __result56__;
}

struct sAddNode* sAddNode_initialize(struct sAddNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value117;
char* __dec_obj52;
void* right_value118;
struct sNode* __dec_obj53;
void* right_value119;
struct sNode* __dec_obj54;
struct sAddNode* __result60__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value117, 0, sizeof(void*));
memset(&right_value118, 0, sizeof(void*));
memset(&right_value119, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj52=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value117=__builtin_string(info->sname))));
    if(__dec_obj52) { __dec_obj52 = come_decrement_ref_count(__dec_obj52, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value117);
    if(right_value117 && right_value117 != __result_obj__ && !__freed_obj__) { right_value117 = come_decrement_ref_count(right_value117, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value117;
    __freed_obj__ = 0;
    __dec_obj53=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value118=sNode_clone(left))));
    if(__dec_obj53) { __dec_obj53 = come_decrement_ref_count(__dec_obj53, ((struct sNode*)__dec_obj53)->finalize, ((struct sNode*)__dec_obj53)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value118);
    if(right_value118 && right_value118 != __result_obj__ && !__freed_obj__) { right_value118 = come_decrement_ref_count(right_value118, ((struct sNode*)right_value118)->finalize, ((struct sNode*)right_value118)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value118;
    __freed_obj__ = 0;
    __dec_obj54=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value119=sNode_clone(right))));
    if(__dec_obj54) { __dec_obj54 = come_decrement_ref_count(__dec_obj54, ((struct sNode*)__dec_obj54)->finalize, ((struct sNode*)__dec_obj54)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value119);
    if(right_value119 && right_value119 != __result_obj__ && !__freed_obj__) { right_value119 = come_decrement_ref_count(right_value119, ((struct sNode*)right_value119)->finalize, ((struct sNode*)right_value119)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value119;
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
void* right_value120;
char* __result62__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value120, 0, sizeof(void*));
    __result62__ = __result_obj__ = ((char*)(right_value120=__builtin_string("sAddNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value120);
    if(right_value120 && right_value120 != __result_obj__ && !__freed_obj__) { right_value120 = come_decrement_ref_count(right_value120, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value120;
    __freed_obj__ = 0;
    return __result62__;
}

_Bool sAddNode_compile(struct sAddNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_70;
_Bool _if_conditional159;
_Bool __result63__;
void* right_value121;
struct CVALUE* left_value_71;
struct sNode* right_node_72;
_Bool _if_conditional160;
_Bool __result64__;
void* right_value122;
struct CVALUE* right_value_73;
struct sType* type_74;
char* fun_name_75;
_Bool calling_fun_76;
_Bool _if_conditional161;
_Bool _if_conditional162;
void* right_value123;
struct CVALUE* come_value_77;
void* right_value124;
char* __dec_obj55;
void* right_value125;
struct sType* __dec_obj56;
_Bool __result65__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_70, 0, sizeof(struct sNode*));
memset(&right_value121, 0, sizeof(void*));
memset(&left_value_71, 0, sizeof(struct CVALUE*));
memset(&right_node_72, 0, sizeof(struct sNode*));
memset(&right_value122, 0, sizeof(void*));
memset(&right_value_73, 0, sizeof(struct CVALUE*));
memset(&type_74, 0, sizeof(struct sType*));
memset(&fun_name_75, 0, sizeof(char*));
memset(&calling_fun_76, 0, sizeof(_Bool));
memset(&right_value123, 0, sizeof(void*));
memset(&come_value_77, 0, sizeof(struct CVALUE*));
memset(&right_value124, 0, sizeof(void*));
memset(&right_value125, 0, sizeof(void*));
    left_node_70=self->mLeft;
    if(_if_conditional159=!node_compile(left_node_70,info),    _if_conditional159) {
        __result63__ = (_Bool)0;
        return __result63__;
    }
    left_value_71=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value121=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value121);
    if(right_value121 && right_value121 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value121, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value121;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_72=self->mRight;
    if(_if_conditional160=!node_compile(right_node_72,info),    _if_conditional160) {
        __result64__ = (_Bool)0;
        if(left_value_71 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_71, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result64__;
    }
    right_value_73=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value122=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value122);
    if(right_value122 && right_value122 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value122, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value122;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_74=(struct sType*)come_increment_ref_count(left_value_71->type);
    fun_name_75="operator_add";
    if(_if_conditional161=self->mQuote,    _if_conditional161) {
        calling_fun_76=(_Bool)0;
    }
    else {
        calling_fun_76=operator_overload_fun(type_74,fun_name_75,left_value_71,right_value_73,info);
    }
    if(_if_conditional162=!calling_fun_76,    _if_conditional162) {
        come_value_77=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value123=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 301, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value123);
        if(right_value123 && right_value123 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value123, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value123;
        __freed_obj__ = 0;
        __dec_obj55=come_value_77->c_value;
        come_value_77->c_value=(char*)come_increment_ref_count(((char*)(right_value124=xsprintf("%s+%s",left_value_71->c_value,right_value_73->c_value))));
        if(__dec_obj55) { __dec_obj55 = come_decrement_ref_count(__dec_obj55, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value124);
        if(right_value124 && right_value124 != __result_obj__ && !__freed_obj__) { right_value124 = come_decrement_ref_count(right_value124, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value124;
        __freed_obj__ = 0;
        __dec_obj56=come_value_77->type;
        come_value_77->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value125=sType_clone(left_value_71->type))));
        if(__dec_obj56) { come_call_finalizer(sType_finalize,__dec_obj56, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value125);
        if(right_value125 && right_value125 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value125, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value125;
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
void* right_value126;
char* __result67__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value126, 0, sizeof(void*));
    __result67__ = __result_obj__ = ((char*)(right_value126=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value126);
    if(right_value126 && right_value126 != __result_obj__ && !__freed_obj__) { right_value126 = come_decrement_ref_count(right_value126, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value126;
    __freed_obj__ = 0;
    return __result67__;
}

struct sSubNode* sSubNode_initialize(struct sSubNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value127;
char* __dec_obj57;
void* right_value128;
struct sNode* __dec_obj58;
void* right_value129;
struct sNode* __dec_obj59;
struct sSubNode* __result68__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value127, 0, sizeof(void*));
memset(&right_value128, 0, sizeof(void*));
memset(&right_value129, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj57=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value127=__builtin_string(info->sname))));
    if(__dec_obj57) { __dec_obj57 = come_decrement_ref_count(__dec_obj57, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value127);
    if(right_value127 && right_value127 != __result_obj__ && !__freed_obj__) { right_value127 = come_decrement_ref_count(right_value127, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value127;
    __freed_obj__ = 0;
    __dec_obj58=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value128=sNode_clone(left))));
    if(__dec_obj58) { __dec_obj58 = come_decrement_ref_count(__dec_obj58, ((struct sNode*)__dec_obj58)->finalize, ((struct sNode*)__dec_obj58)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value128);
    if(right_value128 && right_value128 != __result_obj__ && !__freed_obj__) { right_value128 = come_decrement_ref_count(right_value128, ((struct sNode*)right_value128)->finalize, ((struct sNode*)right_value128)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value128;
    __freed_obj__ = 0;
    __dec_obj59=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value129=sNode_clone(right))));
    if(__dec_obj59) { __dec_obj59 = come_decrement_ref_count(__dec_obj59, ((struct sNode*)__dec_obj59)->finalize, ((struct sNode*)__dec_obj59)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value129);
    if(right_value129 && right_value129 != __result_obj__ && !__freed_obj__) { right_value129 = come_decrement_ref_count(right_value129, ((struct sNode*)right_value129)->finalize, ((struct sNode*)right_value129)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value129;
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
void* right_value130;
char* __result70__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value130, 0, sizeof(void*));
    __result70__ = __result_obj__ = ((char*)(right_value130=__builtin_string("sSubNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value130);
    if(right_value130 && right_value130 != __result_obj__ && !__freed_obj__) { right_value130 = come_decrement_ref_count(right_value130, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value130;
    __freed_obj__ = 0;
    return __result70__;
}

_Bool sSubNode_compile(struct sSubNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_78;
_Bool _if_conditional166;
_Bool __result71__;
void* right_value131;
struct CVALUE* left_value_79;
struct sNode* right_node_80;
_Bool _if_conditional167;
_Bool __result72__;
void* right_value132;
struct CVALUE* right_value_81;
struct sType* type_82;
char* fun_name_83;
_Bool calling_fun_84;
_Bool _if_conditional168;
_Bool _if_conditional169;
void* right_value133;
struct CVALUE* come_value_85;
void* right_value134;
char* __dec_obj60;
void* right_value135;
struct sType* __dec_obj61;
_Bool __result73__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_78, 0, sizeof(struct sNode*));
memset(&right_value131, 0, sizeof(void*));
memset(&left_value_79, 0, sizeof(struct CVALUE*));
memset(&right_node_80, 0, sizeof(struct sNode*));
memset(&right_value132, 0, sizeof(void*));
memset(&right_value_81, 0, sizeof(struct CVALUE*));
memset(&type_82, 0, sizeof(struct sType*));
memset(&fun_name_83, 0, sizeof(char*));
memset(&calling_fun_84, 0, sizeof(_Bool));
memset(&right_value133, 0, sizeof(void*));
memset(&come_value_85, 0, sizeof(struct CVALUE*));
memset(&right_value134, 0, sizeof(void*));
memset(&right_value135, 0, sizeof(void*));
    left_node_78=self->mLeft;
    if(_if_conditional166=!node_compile(left_node_78,info),    _if_conditional166) {
        __result71__ = (_Bool)0;
        return __result71__;
    }
    left_value_79=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value131=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value131);
    if(right_value131 && right_value131 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value131, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value131;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_80=self->mRight;
    if(_if_conditional167=!node_compile(right_node_80,info),    _if_conditional167) {
        __result72__ = (_Bool)0;
        if(left_value_79 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_79, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result72__;
    }
    right_value_81=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value132=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value132);
    if(right_value132 && right_value132 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value132, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value132;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_82=(struct sType*)come_increment_ref_count(left_value_79->type);
    fun_name_83="operator_sub";
    if(_if_conditional168=self->mQuote,    _if_conditional168) {
        calling_fun_84=(_Bool)0;
    }
    else {
        calling_fun_84=operator_overload_fun(type_82,fun_name_83,left_value_79,right_value_81,info);
    }
    if(_if_conditional169=!calling_fun_84,    _if_conditional169) {
        come_value_85=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value133=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 392, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value133);
        if(right_value133 && right_value133 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value133, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value133;
        __freed_obj__ = 0;
        __dec_obj60=come_value_85->c_value;
        come_value_85->c_value=(char*)come_increment_ref_count(((char*)(right_value134=xsprintf("%s-%s",left_value_79->c_value,right_value_81->c_value))));
        if(__dec_obj60) { __dec_obj60 = come_decrement_ref_count(__dec_obj60, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value134);
        if(right_value134 && right_value134 != __result_obj__ && !__freed_obj__) { right_value134 = come_decrement_ref_count(right_value134, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value134;
        __freed_obj__ = 0;
        __dec_obj61=come_value_85->type;
        come_value_85->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value135=sType_clone(left_value_79->type))));
        if(__dec_obj61) { come_call_finalizer(sType_finalize,__dec_obj61, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value135);
        if(right_value135 && right_value135 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value135, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value135;
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
void* right_value136;
char* __result75__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value136, 0, sizeof(void*));
    __result75__ = __result_obj__ = ((char*)(right_value136=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value136);
    if(right_value136 && right_value136 != __result_obj__ && !__freed_obj__) { right_value136 = come_decrement_ref_count(right_value136, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value136;
    __freed_obj__ = 0;
    return __result75__;
}

struct sMultNode* sMultNode_initialize(struct sMultNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value137;
char* __dec_obj62;
void* right_value138;
struct sNode* __dec_obj63;
void* right_value139;
struct sNode* __dec_obj64;
struct sMultNode* __result76__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value137, 0, sizeof(void*));
memset(&right_value138, 0, sizeof(void*));
memset(&right_value139, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj62=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value137=__builtin_string(info->sname))));
    if(__dec_obj62) { __dec_obj62 = come_decrement_ref_count(__dec_obj62, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value137);
    if(right_value137 && right_value137 != __result_obj__ && !__freed_obj__) { right_value137 = come_decrement_ref_count(right_value137, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value137;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj63=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value138=sNode_clone(left))));
    if(__dec_obj63) { __dec_obj63 = come_decrement_ref_count(__dec_obj63, ((struct sNode*)__dec_obj63)->finalize, ((struct sNode*)__dec_obj63)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value138);
    if(right_value138 && right_value138 != __result_obj__ && !__freed_obj__) { right_value138 = come_decrement_ref_count(right_value138, ((struct sNode*)right_value138)->finalize, ((struct sNode*)right_value138)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value138;
    __freed_obj__ = 0;
    __dec_obj64=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value139=sNode_clone(right))));
    if(__dec_obj64) { __dec_obj64 = come_decrement_ref_count(__dec_obj64, ((struct sNode*)__dec_obj64)->finalize, ((struct sNode*)__dec_obj64)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value139);
    if(right_value139 && right_value139 != __result_obj__ && !__freed_obj__) { right_value139 = come_decrement_ref_count(right_value139, ((struct sNode*)right_value139)->finalize, ((struct sNode*)right_value139)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value139;
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
void* right_value140;
char* __result78__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value140, 0, sizeof(void*));
    __result78__ = __result_obj__ = ((char*)(right_value140=__builtin_string("sMultNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value140);
    if(right_value140 && right_value140 != __result_obj__ && !__freed_obj__) { right_value140 = come_decrement_ref_count(right_value140, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value140;
    __freed_obj__ = 0;
    return __result78__;
}

_Bool sMultNode_compile(struct sMultNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_86;
_Bool _if_conditional173;
_Bool __result79__;
void* right_value141;
struct CVALUE* left_value_87;
struct sNode* right_node_88;
_Bool _if_conditional174;
_Bool __result80__;
void* right_value142;
struct CVALUE* right_value_89;
struct sType* type_90;
char* fun_name_91;
_Bool calling_fun_92;
_Bool _if_conditional175;
_Bool _if_conditional176;
void* right_value143;
struct CVALUE* come_value_93;
void* right_value144;
char* __dec_obj65;
void* right_value145;
struct sType* __dec_obj66;
_Bool __result81__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_86, 0, sizeof(struct sNode*));
memset(&right_value141, 0, sizeof(void*));
memset(&left_value_87, 0, sizeof(struct CVALUE*));
memset(&right_node_88, 0, sizeof(struct sNode*));
memset(&right_value142, 0, sizeof(void*));
memset(&right_value_89, 0, sizeof(struct CVALUE*));
memset(&type_90, 0, sizeof(struct sType*));
memset(&fun_name_91, 0, sizeof(char*));
memset(&calling_fun_92, 0, sizeof(_Bool));
memset(&right_value143, 0, sizeof(void*));
memset(&come_value_93, 0, sizeof(struct CVALUE*));
memset(&right_value144, 0, sizeof(void*));
memset(&right_value145, 0, sizeof(void*));
    left_node_86=self->mLeft;
    if(_if_conditional173=!node_compile(left_node_86,info),    _if_conditional173) {
        __result79__ = (_Bool)0;
        return __result79__;
    }
    left_value_87=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value141=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value141);
    if(right_value141 && right_value141 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value141, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value141;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_88=self->mRight;
    if(_if_conditional174=!node_compile(right_node_88,info),    _if_conditional174) {
        __result80__ = (_Bool)0;
        if(left_value_87 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_87, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result80__;
    }
    right_value_89=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value142=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value142);
    if(right_value142 && right_value142 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value142, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value142;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_90=(struct sType*)come_increment_ref_count(left_value_87->type);
    fun_name_91="operator_mult";
    if(_if_conditional175=self->mQuote,    _if_conditional175) {
        calling_fun_92=(_Bool)0;
    }
    else {
        calling_fun_92=operator_overload_fun(type_90,fun_name_91,left_value_87,right_value_89,info);
    }
    if(_if_conditional176=!calling_fun_92,    _if_conditional176) {
        come_value_93=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value143=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 483, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value143);
        if(right_value143 && right_value143 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value143, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value143;
        __freed_obj__ = 0;
        __dec_obj65=come_value_93->c_value;
        come_value_93->c_value=(char*)come_increment_ref_count(((char*)(right_value144=xsprintf("%s*%s",left_value_87->c_value,right_value_89->c_value))));
        if(__dec_obj65) { __dec_obj65 = come_decrement_ref_count(__dec_obj65, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value144);
        if(right_value144 && right_value144 != __result_obj__ && !__freed_obj__) { right_value144 = come_decrement_ref_count(right_value144, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value144;
        __freed_obj__ = 0;
        __dec_obj66=come_value_93->type;
        come_value_93->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value145=sType_clone(left_value_87->type))));
        if(__dec_obj66) { come_call_finalizer(sType_finalize,__dec_obj66, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value145);
        if(right_value145 && right_value145 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value145, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value145;
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
void* right_value146;
char* __result83__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value146, 0, sizeof(void*));
    __result83__ = __result_obj__ = ((char*)(right_value146=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value146);
    if(right_value146 && right_value146 != __result_obj__ && !__freed_obj__) { right_value146 = come_decrement_ref_count(right_value146, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value146;
    __freed_obj__ = 0;
    return __result83__;
}

struct sDivNode* sDivNode_initialize(struct sDivNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value147;
char* __dec_obj67;
void* right_value148;
struct sNode* __dec_obj68;
void* right_value149;
struct sNode* __dec_obj69;
struct sDivNode* __result84__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value147, 0, sizeof(void*));
memset(&right_value148, 0, sizeof(void*));
memset(&right_value149, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj67=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value147=__builtin_string(info->sname))));
    if(__dec_obj67) { __dec_obj67 = come_decrement_ref_count(__dec_obj67, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value147);
    if(right_value147 && right_value147 != __result_obj__ && !__freed_obj__) { right_value147 = come_decrement_ref_count(right_value147, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value147;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj68=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value148=sNode_clone(left))));
    if(__dec_obj68) { __dec_obj68 = come_decrement_ref_count(__dec_obj68, ((struct sNode*)__dec_obj68)->finalize, ((struct sNode*)__dec_obj68)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value148);
    if(right_value148 && right_value148 != __result_obj__ && !__freed_obj__) { right_value148 = come_decrement_ref_count(right_value148, ((struct sNode*)right_value148)->finalize, ((struct sNode*)right_value148)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value148;
    __freed_obj__ = 0;
    __dec_obj69=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value149=sNode_clone(right))));
    if(__dec_obj69) { __dec_obj69 = come_decrement_ref_count(__dec_obj69, ((struct sNode*)__dec_obj69)->finalize, ((struct sNode*)__dec_obj69)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value149);
    if(right_value149 && right_value149 != __result_obj__ && !__freed_obj__) { right_value149 = come_decrement_ref_count(right_value149, ((struct sNode*)right_value149)->finalize, ((struct sNode*)right_value149)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value149;
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
void* right_value150;
char* __result86__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value150, 0, sizeof(void*));
    __result86__ = __result_obj__ = ((char*)(right_value150=__builtin_string("sDivNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value150);
    if(right_value150 && right_value150 != __result_obj__ && !__freed_obj__) { right_value150 = come_decrement_ref_count(right_value150, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value150;
    __freed_obj__ = 0;
    return __result86__;
}

_Bool sDivNode_compile(struct sDivNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_94;
_Bool _if_conditional180;
_Bool __result87__;
void* right_value151;
struct CVALUE* left_value_95;
struct sNode* right_node_96;
_Bool _if_conditional181;
_Bool __result88__;
void* right_value152;
struct CVALUE* right_value_97;
struct sType* type_98;
char* fun_name_99;
_Bool calling_fun_100;
_Bool _if_conditional182;
_Bool _if_conditional183;
void* right_value153;
struct CVALUE* come_value_101;
void* right_value154;
char* __dec_obj70;
void* right_value155;
struct sType* __dec_obj71;
_Bool __result89__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_94, 0, sizeof(struct sNode*));
memset(&right_value151, 0, sizeof(void*));
memset(&left_value_95, 0, sizeof(struct CVALUE*));
memset(&right_node_96, 0, sizeof(struct sNode*));
memset(&right_value152, 0, sizeof(void*));
memset(&right_value_97, 0, sizeof(struct CVALUE*));
memset(&type_98, 0, sizeof(struct sType*));
memset(&fun_name_99, 0, sizeof(char*));
memset(&calling_fun_100, 0, sizeof(_Bool));
memset(&right_value153, 0, sizeof(void*));
memset(&come_value_101, 0, sizeof(struct CVALUE*));
memset(&right_value154, 0, sizeof(void*));
memset(&right_value155, 0, sizeof(void*));
    left_node_94=self->mLeft;
    if(_if_conditional180=!node_compile(left_node_94,info),    _if_conditional180) {
        __result87__ = (_Bool)0;
        return __result87__;
    }
    left_value_95=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value151=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value151);
    if(right_value151 && right_value151 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value151, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value151;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_96=self->mRight;
    if(_if_conditional181=!node_compile(right_node_96,info),    _if_conditional181) {
        __result88__ = (_Bool)0;
        if(left_value_95 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_95, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result88__;
    }
    right_value_97=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value152=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value152);
    if(right_value152 && right_value152 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value152, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value152;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_98=(struct sType*)come_increment_ref_count(left_value_95->type);
    fun_name_99="operator_div";
    if(_if_conditional182=self->mQuote,    _if_conditional182) {
        calling_fun_100=(_Bool)0;
    }
    else {
        calling_fun_100=operator_overload_fun(type_98,fun_name_99,left_value_95,right_value_97,info);
    }
    if(_if_conditional183=!calling_fun_100,    _if_conditional183) {
        come_value_101=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value153=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 574, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value153);
        if(right_value153 && right_value153 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value153, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value153;
        __freed_obj__ = 0;
        __dec_obj70=come_value_101->c_value;
        come_value_101->c_value=(char*)come_increment_ref_count(((char*)(right_value154=xsprintf("%s/%s",left_value_95->c_value,right_value_97->c_value))));
        if(__dec_obj70) { __dec_obj70 = come_decrement_ref_count(__dec_obj70, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value154);
        if(right_value154 && right_value154 != __result_obj__ && !__freed_obj__) { right_value154 = come_decrement_ref_count(right_value154, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value154;
        __freed_obj__ = 0;
        __dec_obj71=come_value_101->type;
        come_value_101->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value155=sType_clone(left_value_95->type))));
        if(__dec_obj71) { come_call_finalizer(sType_finalize,__dec_obj71, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value155);
        if(right_value155 && right_value155 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value155, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value155;
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
void* right_value156;
char* __result91__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value156, 0, sizeof(void*));
    __result91__ = __result_obj__ = ((char*)(right_value156=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value156);
    if(right_value156 && right_value156 != __result_obj__ && !__freed_obj__) { right_value156 = come_decrement_ref_count(right_value156, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value156;
    __freed_obj__ = 0;
    return __result91__;
}

struct sModNode* sModNode_initialize(struct sModNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value157;
char* __dec_obj72;
void* right_value158;
struct sNode* __dec_obj73;
void* right_value159;
struct sNode* __dec_obj74;
struct sModNode* __result92__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value157, 0, sizeof(void*));
memset(&right_value158, 0, sizeof(void*));
memset(&right_value159, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj72=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value157=__builtin_string(info->sname))));
    if(__dec_obj72) { __dec_obj72 = come_decrement_ref_count(__dec_obj72, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value157);
    if(right_value157 && right_value157 != __result_obj__ && !__freed_obj__) { right_value157 = come_decrement_ref_count(right_value157, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value157;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj73=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value158=sNode_clone(left))));
    if(__dec_obj73) { __dec_obj73 = come_decrement_ref_count(__dec_obj73, ((struct sNode*)__dec_obj73)->finalize, ((struct sNode*)__dec_obj73)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value158);
    if(right_value158 && right_value158 != __result_obj__ && !__freed_obj__) { right_value158 = come_decrement_ref_count(right_value158, ((struct sNode*)right_value158)->finalize, ((struct sNode*)right_value158)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value158;
    __freed_obj__ = 0;
    __dec_obj74=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value159=sNode_clone(right))));
    if(__dec_obj74) { __dec_obj74 = come_decrement_ref_count(__dec_obj74, ((struct sNode*)__dec_obj74)->finalize, ((struct sNode*)__dec_obj74)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value159);
    if(right_value159 && right_value159 != __result_obj__ && !__freed_obj__) { right_value159 = come_decrement_ref_count(right_value159, ((struct sNode*)right_value159)->finalize, ((struct sNode*)right_value159)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value159;
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
void* right_value160;
char* __result94__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value160, 0, sizeof(void*));
    __result94__ = __result_obj__ = ((char*)(right_value160=__builtin_string("sModNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value160);
    if(right_value160 && right_value160 != __result_obj__ && !__freed_obj__) { right_value160 = come_decrement_ref_count(right_value160, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value160;
    __freed_obj__ = 0;
    return __result94__;
}

_Bool sModNode_compile(struct sModNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_102;
_Bool _if_conditional187;
_Bool __result95__;
void* right_value161;
struct CVALUE* left_value_103;
struct sNode* right_node_104;
_Bool _if_conditional188;
_Bool __result96__;
void* right_value162;
struct CVALUE* right_value_105;
struct sType* type_106;
char* fun_name_107;
_Bool calling_fun_108;
_Bool _if_conditional189;
_Bool _if_conditional190;
void* right_value163;
struct CVALUE* come_value_109;
void* right_value164;
char* __dec_obj75;
void* right_value165;
struct sType* __dec_obj76;
_Bool __result97__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_102, 0, sizeof(struct sNode*));
memset(&right_value161, 0, sizeof(void*));
memset(&left_value_103, 0, sizeof(struct CVALUE*));
memset(&right_node_104, 0, sizeof(struct sNode*));
memset(&right_value162, 0, sizeof(void*));
memset(&right_value_105, 0, sizeof(struct CVALUE*));
memset(&type_106, 0, sizeof(struct sType*));
memset(&fun_name_107, 0, sizeof(char*));
memset(&calling_fun_108, 0, sizeof(_Bool));
memset(&right_value163, 0, sizeof(void*));
memset(&come_value_109, 0, sizeof(struct CVALUE*));
memset(&right_value164, 0, sizeof(void*));
memset(&right_value165, 0, sizeof(void*));
    left_node_102=self->mLeft;
    if(_if_conditional187=!node_compile(left_node_102,info),    _if_conditional187) {
        __result95__ = (_Bool)0;
        return __result95__;
    }
    left_value_103=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value161=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value161);
    if(right_value161 && right_value161 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value161, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value161;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_104=self->mRight;
    if(_if_conditional188=!node_compile(right_node_104,info),    _if_conditional188) {
        __result96__ = (_Bool)0;
        if(left_value_103 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_103, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result96__;
    }
    right_value_105=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value162=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value162);
    if(right_value162 && right_value162 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value162, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value162;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_106=(struct sType*)come_increment_ref_count(left_value_103->type);
    fun_name_107="operator_mod";
    if(_if_conditional189=self->mQuote,    _if_conditional189) {
        calling_fun_108=(_Bool)0;
    }
    else {
        calling_fun_108=operator_overload_fun(type_106,fun_name_107,left_value_103,right_value_105,info);
    }
    if(_if_conditional190=!calling_fun_108,    _if_conditional190) {
        come_value_109=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value163=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 665, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value163);
        if(right_value163 && right_value163 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value163, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value163;
        __freed_obj__ = 0;
        __dec_obj75=come_value_109->c_value;
        come_value_109->c_value=(char*)come_increment_ref_count(((char*)(right_value164=xsprintf("%s%%%s",left_value_103->c_value,right_value_105->c_value))));
        if(__dec_obj75) { __dec_obj75 = come_decrement_ref_count(__dec_obj75, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value164);
        if(right_value164 && right_value164 != __result_obj__ && !__freed_obj__) { right_value164 = come_decrement_ref_count(right_value164, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value164;
        __freed_obj__ = 0;
        __dec_obj76=come_value_109->type;
        come_value_109->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value165=sType_clone(left_value_103->type))));
        if(__dec_obj76) { come_call_finalizer(sType_finalize,__dec_obj76, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value165);
        if(right_value165 && right_value165 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value165, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value165;
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
void* right_value166;
char* __result99__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value166, 0, sizeof(void*));
    __result99__ = __result_obj__ = ((char*)(right_value166=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value166);
    if(right_value166 && right_value166 != __result_obj__ && !__freed_obj__) { right_value166 = come_decrement_ref_count(right_value166, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value166;
    __freed_obj__ = 0;
    return __result99__;
}

struct sLShiftNode* sLShiftNode_initialize(struct sLShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value167;
char* __dec_obj77;
void* right_value168;
struct sNode* __dec_obj78;
void* right_value169;
struct sNode* __dec_obj79;
struct sLShiftNode* __result100__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value167, 0, sizeof(void*));
memset(&right_value168, 0, sizeof(void*));
memset(&right_value169, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj77=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value167=__builtin_string(info->sname))));
    if(__dec_obj77) { __dec_obj77 = come_decrement_ref_count(__dec_obj77, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value167);
    if(right_value167 && right_value167 != __result_obj__ && !__freed_obj__) { right_value167 = come_decrement_ref_count(right_value167, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value167;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj78=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value168=sNode_clone(left))));
    if(__dec_obj78) { __dec_obj78 = come_decrement_ref_count(__dec_obj78, ((struct sNode*)__dec_obj78)->finalize, ((struct sNode*)__dec_obj78)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value168);
    if(right_value168 && right_value168 != __result_obj__ && !__freed_obj__) { right_value168 = come_decrement_ref_count(right_value168, ((struct sNode*)right_value168)->finalize, ((struct sNode*)right_value168)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value168;
    __freed_obj__ = 0;
    __dec_obj79=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value169=sNode_clone(right))));
    if(__dec_obj79) { __dec_obj79 = come_decrement_ref_count(__dec_obj79, ((struct sNode*)__dec_obj79)->finalize, ((struct sNode*)__dec_obj79)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value169);
    if(right_value169 && right_value169 != __result_obj__ && !__freed_obj__) { right_value169 = come_decrement_ref_count(right_value169, ((struct sNode*)right_value169)->finalize, ((struct sNode*)right_value169)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value169;
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
void* right_value170;
char* __result102__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value170, 0, sizeof(void*));
    __result102__ = __result_obj__ = ((char*)(right_value170=__builtin_string("sLShiftNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value170);
    if(right_value170 && right_value170 != __result_obj__ && !__freed_obj__) { right_value170 = come_decrement_ref_count(right_value170, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value170;
    __freed_obj__ = 0;
    return __result102__;
}

_Bool sLShiftNode_compile(struct sLShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_110;
_Bool _if_conditional194;
_Bool __result103__;
void* right_value171;
struct CVALUE* left_value_111;
struct sNode* right_node_112;
_Bool _if_conditional195;
_Bool __result104__;
void* right_value172;
struct CVALUE* right_value_113;
struct sType* type_114;
char* fun_name_115;
_Bool calling_fun_116;
_Bool _if_conditional196;
_Bool _if_conditional197;
void* right_value173;
struct CVALUE* come_value_117;
void* right_value174;
char* __dec_obj80;
void* right_value175;
struct sType* __dec_obj81;
_Bool __result105__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_110, 0, sizeof(struct sNode*));
memset(&right_value171, 0, sizeof(void*));
memset(&left_value_111, 0, sizeof(struct CVALUE*));
memset(&right_node_112, 0, sizeof(struct sNode*));
memset(&right_value172, 0, sizeof(void*));
memset(&right_value_113, 0, sizeof(struct CVALUE*));
memset(&type_114, 0, sizeof(struct sType*));
memset(&fun_name_115, 0, sizeof(char*));
memset(&calling_fun_116, 0, sizeof(_Bool));
memset(&right_value173, 0, sizeof(void*));
memset(&come_value_117, 0, sizeof(struct CVALUE*));
memset(&right_value174, 0, sizeof(void*));
memset(&right_value175, 0, sizeof(void*));
    left_node_110=self->mLeft;
    if(_if_conditional194=!node_compile(left_node_110,info),    _if_conditional194) {
        __result103__ = (_Bool)0;
        return __result103__;
    }
    left_value_111=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value171=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value171);
    if(right_value171 && right_value171 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value171, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value171;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_112=self->mRight;
    if(_if_conditional195=!node_compile(right_node_112,info),    _if_conditional195) {
        __result104__ = (_Bool)0;
        if(left_value_111 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_111, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result104__;
    }
    right_value_113=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value172=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value172);
    if(right_value172 && right_value172 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value172, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value172;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_114=(struct sType*)come_increment_ref_count(left_value_111->type);
    fun_name_115="operator_lshift";
    if(_if_conditional196=self->mQuote,    _if_conditional196) {
        calling_fun_116=(_Bool)0;
    }
    else {
        calling_fun_116=operator_overload_fun(type_114,fun_name_115,left_value_111,right_value_113,info);
    }
    if(_if_conditional197=!calling_fun_116,    _if_conditional197) {
        come_value_117=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value173=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 756, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value173);
        if(right_value173 && right_value173 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value173, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value173;
        __freed_obj__ = 0;
        __dec_obj80=come_value_117->c_value;
        come_value_117->c_value=(char*)come_increment_ref_count(((char*)(right_value174=xsprintf("%s<<%s",left_value_111->c_value,right_value_113->c_value))));
        if(__dec_obj80) { __dec_obj80 = come_decrement_ref_count(__dec_obj80, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value174);
        if(right_value174 && right_value174 != __result_obj__ && !__freed_obj__) { right_value174 = come_decrement_ref_count(right_value174, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value174;
        __freed_obj__ = 0;
        __dec_obj81=come_value_117->type;
        come_value_117->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value175=sType_clone(left_value_111->type))));
        if(__dec_obj81) { come_call_finalizer(sType_finalize,__dec_obj81, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value175);
        if(right_value175 && right_value175 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value175, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value175;
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
void* right_value176;
char* __result107__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value176, 0, sizeof(void*));
    __result107__ = __result_obj__ = ((char*)(right_value176=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value176);
    if(right_value176 && right_value176 != __result_obj__ && !__freed_obj__) { right_value176 = come_decrement_ref_count(right_value176, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value176;
    __freed_obj__ = 0;
    return __result107__;
}

struct sRShiftNode* sRShiftNode_initialize(struct sRShiftNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value177;
char* __dec_obj82;
void* right_value178;
struct sNode* __dec_obj83;
void* right_value179;
struct sNode* __dec_obj84;
struct sRShiftNode* __result108__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value177, 0, sizeof(void*));
memset(&right_value178, 0, sizeof(void*));
memset(&right_value179, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj82=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value177=__builtin_string(info->sname))));
    if(__dec_obj82) { __dec_obj82 = come_decrement_ref_count(__dec_obj82, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value177);
    if(right_value177 && right_value177 != __result_obj__ && !__freed_obj__) { right_value177 = come_decrement_ref_count(right_value177, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value177;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj83=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value178=sNode_clone(left))));
    if(__dec_obj83) { __dec_obj83 = come_decrement_ref_count(__dec_obj83, ((struct sNode*)__dec_obj83)->finalize, ((struct sNode*)__dec_obj83)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value178);
    if(right_value178 && right_value178 != __result_obj__ && !__freed_obj__) { right_value178 = come_decrement_ref_count(right_value178, ((struct sNode*)right_value178)->finalize, ((struct sNode*)right_value178)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value178;
    __freed_obj__ = 0;
    __dec_obj84=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value179=sNode_clone(right))));
    if(__dec_obj84) { __dec_obj84 = come_decrement_ref_count(__dec_obj84, ((struct sNode*)__dec_obj84)->finalize, ((struct sNode*)__dec_obj84)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value179);
    if(right_value179 && right_value179 != __result_obj__ && !__freed_obj__) { right_value179 = come_decrement_ref_count(right_value179, ((struct sNode*)right_value179)->finalize, ((struct sNode*)right_value179)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value179;
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
void* right_value180;
char* __result110__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value180, 0, sizeof(void*));
    __result110__ = __result_obj__ = ((char*)(right_value180=__builtin_string("sRShiftNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value180);
    if(right_value180 && right_value180 != __result_obj__ && !__freed_obj__) { right_value180 = come_decrement_ref_count(right_value180, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value180;
    __freed_obj__ = 0;
    return __result110__;
}

_Bool sRShiftNode_compile(struct sRShiftNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_118;
_Bool _if_conditional201;
_Bool __result111__;
void* right_value181;
struct CVALUE* left_value_119;
struct sNode* right_node_120;
_Bool _if_conditional202;
_Bool __result112__;
void* right_value182;
struct CVALUE* right_value_121;
struct sType* type_122;
char* fun_name_123;
_Bool calling_fun_124;
_Bool _if_conditional203;
_Bool _if_conditional204;
void* right_value183;
struct CVALUE* come_value_125;
void* right_value184;
char* __dec_obj85;
void* right_value185;
struct sType* __dec_obj86;
_Bool __result113__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_118, 0, sizeof(struct sNode*));
memset(&right_value181, 0, sizeof(void*));
memset(&left_value_119, 0, sizeof(struct CVALUE*));
memset(&right_node_120, 0, sizeof(struct sNode*));
memset(&right_value182, 0, sizeof(void*));
memset(&right_value_121, 0, sizeof(struct CVALUE*));
memset(&type_122, 0, sizeof(struct sType*));
memset(&fun_name_123, 0, sizeof(char*));
memset(&calling_fun_124, 0, sizeof(_Bool));
memset(&right_value183, 0, sizeof(void*));
memset(&come_value_125, 0, sizeof(struct CVALUE*));
memset(&right_value184, 0, sizeof(void*));
memset(&right_value185, 0, sizeof(void*));
    left_node_118=self->mLeft;
    if(_if_conditional201=!node_compile(left_node_118,info),    _if_conditional201) {
        __result111__ = (_Bool)0;
        return __result111__;
    }
    left_value_119=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value181=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value181);
    if(right_value181 && right_value181 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value181, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value181;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_120=self->mRight;
    if(_if_conditional202=!node_compile(right_node_120,info),    _if_conditional202) {
        __result112__ = (_Bool)0;
        if(left_value_119 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_119, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result112__;
    }
    right_value_121=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value182=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value182);
    if(right_value182 && right_value182 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value182, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value182;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_122=(struct sType*)come_increment_ref_count(left_value_119->type);
    fun_name_123="operator_rshift";
    if(_if_conditional203=self->mQuote,    _if_conditional203) {
        calling_fun_124=(_Bool)0;
    }
    else {
        calling_fun_124=operator_overload_fun(type_122,fun_name_123,left_value_119,right_value_121,info);
    }
    if(_if_conditional204=!calling_fun_124,    _if_conditional204) {
        come_value_125=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value183=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 847, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value183);
        if(right_value183 && right_value183 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value183, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value183;
        __freed_obj__ = 0;
        __dec_obj85=come_value_125->c_value;
        come_value_125->c_value=(char*)come_increment_ref_count(((char*)(right_value184=xsprintf("%s>>%s",left_value_119->c_value,right_value_121->c_value))));
        if(__dec_obj85) { __dec_obj85 = come_decrement_ref_count(__dec_obj85, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value184);
        if(right_value184 && right_value184 != __result_obj__ && !__freed_obj__) { right_value184 = come_decrement_ref_count(right_value184, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value184;
        __freed_obj__ = 0;
        __dec_obj86=come_value_125->type;
        come_value_125->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value185=sType_clone(left_value_119->type))));
        if(__dec_obj86) { come_call_finalizer(sType_finalize,__dec_obj86, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value185);
        if(right_value185 && right_value185 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value185, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value185;
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
void* right_value186;
char* __result115__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value186, 0, sizeof(void*));
    __result115__ = __result_obj__ = ((char*)(right_value186=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value186);
    if(right_value186 && right_value186 != __result_obj__ && !__freed_obj__) { right_value186 = come_decrement_ref_count(right_value186, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value186;
    __freed_obj__ = 0;
    return __result115__;
}

struct sGtEqNode* sGtEqNode_initialize(struct sGtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value187;
char* __dec_obj87;
void* right_value188;
struct sNode* __dec_obj88;
void* right_value189;
struct sNode* __dec_obj89;
struct sGtEqNode* __result116__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value187, 0, sizeof(void*));
memset(&right_value188, 0, sizeof(void*));
memset(&right_value189, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj87=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value187=__builtin_string(info->sname))));
    if(__dec_obj87) { __dec_obj87 = come_decrement_ref_count(__dec_obj87, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value187);
    if(right_value187 && right_value187 != __result_obj__ && !__freed_obj__) { right_value187 = come_decrement_ref_count(right_value187, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value187;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj88=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value188=sNode_clone(left))));
    if(__dec_obj88) { __dec_obj88 = come_decrement_ref_count(__dec_obj88, ((struct sNode*)__dec_obj88)->finalize, ((struct sNode*)__dec_obj88)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value188);
    if(right_value188 && right_value188 != __result_obj__ && !__freed_obj__) { right_value188 = come_decrement_ref_count(right_value188, ((struct sNode*)right_value188)->finalize, ((struct sNode*)right_value188)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value188;
    __freed_obj__ = 0;
    __dec_obj89=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value189=sNode_clone(right))));
    if(__dec_obj89) { __dec_obj89 = come_decrement_ref_count(__dec_obj89, ((struct sNode*)__dec_obj89)->finalize, ((struct sNode*)__dec_obj89)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value189);
    if(right_value189 && right_value189 != __result_obj__ && !__freed_obj__) { right_value189 = come_decrement_ref_count(right_value189, ((struct sNode*)right_value189)->finalize, ((struct sNode*)right_value189)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value189;
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
void* right_value190;
char* __result118__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value190, 0, sizeof(void*));
    __result118__ = __result_obj__ = ((char*)(right_value190=__builtin_string("sGtEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value190);
    if(right_value190 && right_value190 != __result_obj__ && !__freed_obj__) { right_value190 = come_decrement_ref_count(right_value190, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value190;
    __freed_obj__ = 0;
    return __result118__;
}

_Bool sGtEqNode_compile(struct sGtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_126;
_Bool _if_conditional208;
_Bool __result119__;
void* right_value191;
struct CVALUE* left_value_127;
struct sNode* right_node_128;
_Bool _if_conditional209;
_Bool __result120__;
void* right_value192;
struct CVALUE* right_value_129;
struct sType* type_130;
char* fun_name_131;
_Bool calling_fun_132;
_Bool _if_conditional210;
_Bool _if_conditional211;
void* right_value193;
struct CVALUE* come_value_133;
void* right_value194;
char* __dec_obj90;
void* right_value195;
struct sType* __dec_obj91;
_Bool __result121__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_126, 0, sizeof(struct sNode*));
memset(&right_value191, 0, sizeof(void*));
memset(&left_value_127, 0, sizeof(struct CVALUE*));
memset(&right_node_128, 0, sizeof(struct sNode*));
memset(&right_value192, 0, sizeof(void*));
memset(&right_value_129, 0, sizeof(struct CVALUE*));
memset(&type_130, 0, sizeof(struct sType*));
memset(&fun_name_131, 0, sizeof(char*));
memset(&calling_fun_132, 0, sizeof(_Bool));
memset(&right_value193, 0, sizeof(void*));
memset(&come_value_133, 0, sizeof(struct CVALUE*));
memset(&right_value194, 0, sizeof(void*));
memset(&right_value195, 0, sizeof(void*));
    left_node_126=self->mLeft;
    if(_if_conditional208=!node_compile(left_node_126,info),    _if_conditional208) {
        __result119__ = (_Bool)0;
        return __result119__;
    }
    left_value_127=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value191=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value191);
    if(right_value191 && right_value191 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value191, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value191;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_128=self->mRight;
    if(_if_conditional209=!node_compile(right_node_128,info),    _if_conditional209) {
        __result120__ = (_Bool)0;
        if(left_value_127 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_127, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result120__;
    }
    right_value_129=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value192=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value192);
    if(right_value192 && right_value192 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value192, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value192;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_130=(struct sType*)come_increment_ref_count(left_value_127->type);
    fun_name_131="operator_gteq";
    if(_if_conditional210=self->mQuote,    _if_conditional210) {
        calling_fun_132=(_Bool)0;
    }
    else {
        calling_fun_132=operator_overload_fun(type_130,fun_name_131,left_value_127,right_value_129,info);
    }
    if(_if_conditional211=!calling_fun_132,    _if_conditional211) {
        come_value_133=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value193=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 938, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value193);
        if(right_value193 && right_value193 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value193, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value193;
        __freed_obj__ = 0;
        __dec_obj90=come_value_133->c_value;
        come_value_133->c_value=(char*)come_increment_ref_count(((char*)(right_value194=xsprintf("%s>=%s",left_value_127->c_value,right_value_129->c_value))));
        if(__dec_obj90) { __dec_obj90 = come_decrement_ref_count(__dec_obj90, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value194);
        if(right_value194 && right_value194 != __result_obj__ && !__freed_obj__) { right_value194 = come_decrement_ref_count(right_value194, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value194;
        __freed_obj__ = 0;
        __dec_obj91=come_value_133->type;
        come_value_133->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value195=sType_clone(left_value_127->type))));
        if(__dec_obj91) { come_call_finalizer(sType_finalize,__dec_obj91, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value195);
        if(right_value195 && right_value195 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value195, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value195;
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
void* right_value196;
char* __result123__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value196, 0, sizeof(void*));
    __result123__ = __result_obj__ = ((char*)(right_value196=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value196);
    if(right_value196 && right_value196 != __result_obj__ && !__freed_obj__) { right_value196 = come_decrement_ref_count(right_value196, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value196;
    __freed_obj__ = 0;
    return __result123__;
}

struct sLtEqNode* sLtEqNode_initialize(struct sLtEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value197;
char* __dec_obj92;
void* right_value198;
struct sNode* __dec_obj93;
void* right_value199;
struct sNode* __dec_obj94;
struct sLtEqNode* __result124__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value197, 0, sizeof(void*));
memset(&right_value198, 0, sizeof(void*));
memset(&right_value199, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj92=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value197=__builtin_string(info->sname))));
    if(__dec_obj92) { __dec_obj92 = come_decrement_ref_count(__dec_obj92, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value197);
    if(right_value197 && right_value197 != __result_obj__ && !__freed_obj__) { right_value197 = come_decrement_ref_count(right_value197, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value197;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj93=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value198=sNode_clone(left))));
    if(__dec_obj93) { __dec_obj93 = come_decrement_ref_count(__dec_obj93, ((struct sNode*)__dec_obj93)->finalize, ((struct sNode*)__dec_obj93)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value198);
    if(right_value198 && right_value198 != __result_obj__ && !__freed_obj__) { right_value198 = come_decrement_ref_count(right_value198, ((struct sNode*)right_value198)->finalize, ((struct sNode*)right_value198)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value198;
    __freed_obj__ = 0;
    __dec_obj94=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value199=sNode_clone(right))));
    if(__dec_obj94) { __dec_obj94 = come_decrement_ref_count(__dec_obj94, ((struct sNode*)__dec_obj94)->finalize, ((struct sNode*)__dec_obj94)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value199);
    if(right_value199 && right_value199 != __result_obj__ && !__freed_obj__) { right_value199 = come_decrement_ref_count(right_value199, ((struct sNode*)right_value199)->finalize, ((struct sNode*)right_value199)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value199;
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
void* right_value200;
char* __result126__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value200, 0, sizeof(void*));
    __result126__ = __result_obj__ = ((char*)(right_value200=__builtin_string("sLtEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value200);
    if(right_value200 && right_value200 != __result_obj__ && !__freed_obj__) { right_value200 = come_decrement_ref_count(right_value200, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value200;
    __freed_obj__ = 0;
    return __result126__;
}

_Bool sLtEqNode_compile(struct sLtEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_134;
_Bool _if_conditional215;
_Bool __result127__;
void* right_value201;
struct CVALUE* left_value_135;
struct sNode* right_node_136;
_Bool _if_conditional216;
_Bool __result128__;
void* right_value202;
struct CVALUE* right_value_137;
struct sType* type_138;
char* fun_name_139;
_Bool calling_fun_140;
_Bool _if_conditional217;
_Bool _if_conditional218;
void* right_value203;
struct CVALUE* come_value_141;
void* right_value204;
char* __dec_obj95;
void* right_value205;
struct sType* __dec_obj96;
_Bool __result129__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_134, 0, sizeof(struct sNode*));
memset(&right_value201, 0, sizeof(void*));
memset(&left_value_135, 0, sizeof(struct CVALUE*));
memset(&right_node_136, 0, sizeof(struct sNode*));
memset(&right_value202, 0, sizeof(void*));
memset(&right_value_137, 0, sizeof(struct CVALUE*));
memset(&type_138, 0, sizeof(struct sType*));
memset(&fun_name_139, 0, sizeof(char*));
memset(&calling_fun_140, 0, sizeof(_Bool));
memset(&right_value203, 0, sizeof(void*));
memset(&come_value_141, 0, sizeof(struct CVALUE*));
memset(&right_value204, 0, sizeof(void*));
memset(&right_value205, 0, sizeof(void*));
    left_node_134=self->mLeft;
    if(_if_conditional215=!node_compile(left_node_134,info),    _if_conditional215) {
        __result127__ = (_Bool)0;
        return __result127__;
    }
    left_value_135=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value201=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value201);
    if(right_value201 && right_value201 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value201, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value201;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_136=self->mRight;
    if(_if_conditional216=!node_compile(right_node_136,info),    _if_conditional216) {
        __result128__ = (_Bool)0;
        if(left_value_135 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_135, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result128__;
    }
    right_value_137=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value202=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value202);
    if(right_value202 && right_value202 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value202, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value202;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_138=(struct sType*)come_increment_ref_count(left_value_135->type);
    fun_name_139="operator_lteq";
    if(_if_conditional217=self->mQuote,    _if_conditional217) {
        calling_fun_140=(_Bool)0;
    }
    else {
        calling_fun_140=operator_overload_fun(type_138,fun_name_139,left_value_135,right_value_137,info);
    }
    if(_if_conditional218=!calling_fun_140,    _if_conditional218) {
        come_value_141=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value203=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1029, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value203);
        if(right_value203 && right_value203 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value203, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value203;
        __freed_obj__ = 0;
        __dec_obj95=come_value_141->c_value;
        come_value_141->c_value=(char*)come_increment_ref_count(((char*)(right_value204=xsprintf("%s<=%s",left_value_135->c_value,right_value_137->c_value))));
        if(__dec_obj95) { __dec_obj95 = come_decrement_ref_count(__dec_obj95, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value204);
        if(right_value204 && right_value204 != __result_obj__ && !__freed_obj__) { right_value204 = come_decrement_ref_count(right_value204, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value204;
        __freed_obj__ = 0;
        __dec_obj96=come_value_141->type;
        come_value_141->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value205=sType_clone(left_value_135->type))));
        if(__dec_obj96) { come_call_finalizer(sType_finalize,__dec_obj96, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value205);
        if(right_value205 && right_value205 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value205, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value205;
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
void* right_value206;
char* __result131__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value206, 0, sizeof(void*));
    __result131__ = __result_obj__ = ((char*)(right_value206=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value206);
    if(right_value206 && right_value206 != __result_obj__ && !__freed_obj__) { right_value206 = come_decrement_ref_count(right_value206, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value206;
    __freed_obj__ = 0;
    return __result131__;
}

struct sLtNode* sLtNode_initialize(struct sLtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value207;
char* __dec_obj97;
void* right_value208;
struct sNode* __dec_obj98;
void* right_value209;
struct sNode* __dec_obj99;
struct sLtNode* __result132__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value207, 0, sizeof(void*));
memset(&right_value208, 0, sizeof(void*));
memset(&right_value209, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj97=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value207=__builtin_string(info->sname))));
    if(__dec_obj97) { __dec_obj97 = come_decrement_ref_count(__dec_obj97, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value207);
    if(right_value207 && right_value207 != __result_obj__ && !__freed_obj__) { right_value207 = come_decrement_ref_count(right_value207, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value207;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj98=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value208=sNode_clone(left))));
    if(__dec_obj98) { __dec_obj98 = come_decrement_ref_count(__dec_obj98, ((struct sNode*)__dec_obj98)->finalize, ((struct sNode*)__dec_obj98)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value208);
    if(right_value208 && right_value208 != __result_obj__ && !__freed_obj__) { right_value208 = come_decrement_ref_count(right_value208, ((struct sNode*)right_value208)->finalize, ((struct sNode*)right_value208)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value208;
    __freed_obj__ = 0;
    __dec_obj99=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value209=sNode_clone(right))));
    if(__dec_obj99) { __dec_obj99 = come_decrement_ref_count(__dec_obj99, ((struct sNode*)__dec_obj99)->finalize, ((struct sNode*)__dec_obj99)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value209);
    if(right_value209 && right_value209 != __result_obj__ && !__freed_obj__) { right_value209 = come_decrement_ref_count(right_value209, ((struct sNode*)right_value209)->finalize, ((struct sNode*)right_value209)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value209;
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
void* right_value210;
char* __result134__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value210, 0, sizeof(void*));
    __result134__ = __result_obj__ = ((char*)(right_value210=__builtin_string("sLtNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value210);
    if(right_value210 && right_value210 != __result_obj__ && !__freed_obj__) { right_value210 = come_decrement_ref_count(right_value210, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value210;
    __freed_obj__ = 0;
    return __result134__;
}

_Bool sLtNode_compile(struct sLtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_142;
_Bool _if_conditional222;
_Bool __result135__;
void* right_value211;
struct CVALUE* left_value_143;
struct sNode* right_node_144;
_Bool _if_conditional223;
_Bool __result136__;
void* right_value212;
struct CVALUE* right_value_145;
struct sType* type_146;
char* fun_name_147;
_Bool calling_fun_148;
_Bool _if_conditional224;
_Bool _if_conditional225;
void* right_value213;
struct CVALUE* come_value_149;
void* right_value214;
char* __dec_obj100;
void* right_value215;
struct sType* __dec_obj101;
_Bool __result137__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_142, 0, sizeof(struct sNode*));
memset(&right_value211, 0, sizeof(void*));
memset(&left_value_143, 0, sizeof(struct CVALUE*));
memset(&right_node_144, 0, sizeof(struct sNode*));
memset(&right_value212, 0, sizeof(void*));
memset(&right_value_145, 0, sizeof(struct CVALUE*));
memset(&type_146, 0, sizeof(struct sType*));
memset(&fun_name_147, 0, sizeof(char*));
memset(&calling_fun_148, 0, sizeof(_Bool));
memset(&right_value213, 0, sizeof(void*));
memset(&come_value_149, 0, sizeof(struct CVALUE*));
memset(&right_value214, 0, sizeof(void*));
memset(&right_value215, 0, sizeof(void*));
    left_node_142=self->mLeft;
    if(_if_conditional222=!node_compile(left_node_142,info),    _if_conditional222) {
        __result135__ = (_Bool)0;
        return __result135__;
    }
    left_value_143=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value211=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value211);
    if(right_value211 && right_value211 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value211, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value211;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_144=self->mRight;
    if(_if_conditional223=!node_compile(right_node_144,info),    _if_conditional223) {
        __result136__ = (_Bool)0;
        if(left_value_143 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_143, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result136__;
    }
    right_value_145=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value212=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value212);
    if(right_value212 && right_value212 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value212, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value212;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_146=(struct sType*)come_increment_ref_count(left_value_143->type);
    fun_name_147="operator_lt";
    if(_if_conditional224=self->mQuote,    _if_conditional224) {
        calling_fun_148=(_Bool)0;
    }
    else {
        calling_fun_148=operator_overload_fun(type_146,fun_name_147,left_value_143,right_value_145,info);
    }
    if(_if_conditional225=!calling_fun_148,    _if_conditional225) {
        come_value_149=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value213=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1120, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value213);
        if(right_value213 && right_value213 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value213, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value213;
        __freed_obj__ = 0;
        __dec_obj100=come_value_149->c_value;
        come_value_149->c_value=(char*)come_increment_ref_count(((char*)(right_value214=xsprintf("%s<%s",left_value_143->c_value,right_value_145->c_value))));
        if(__dec_obj100) { __dec_obj100 = come_decrement_ref_count(__dec_obj100, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value214);
        if(right_value214 && right_value214 != __result_obj__ && !__freed_obj__) { right_value214 = come_decrement_ref_count(right_value214, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value214;
        __freed_obj__ = 0;
        __dec_obj101=come_value_149->type;
        come_value_149->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value215=sType_clone(left_value_143->type))));
        if(__dec_obj101) { come_call_finalizer(sType_finalize,__dec_obj101, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value215);
        if(right_value215 && right_value215 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value215, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value215;
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
void* right_value216;
char* __result139__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value216, 0, sizeof(void*));
    __result139__ = __result_obj__ = ((char*)(right_value216=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value216);
    if(right_value216 && right_value216 != __result_obj__ && !__freed_obj__) { right_value216 = come_decrement_ref_count(right_value216, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value216;
    __freed_obj__ = 0;
    return __result139__;
}

struct sGtNode* sGtNode_initialize(struct sGtNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value217;
char* __dec_obj102;
void* right_value218;
struct sNode* __dec_obj103;
void* right_value219;
struct sNode* __dec_obj104;
struct sGtNode* __result140__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value217, 0, sizeof(void*));
memset(&right_value218, 0, sizeof(void*));
memset(&right_value219, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj102=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value217=__builtin_string(info->sname))));
    if(__dec_obj102) { __dec_obj102 = come_decrement_ref_count(__dec_obj102, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value217);
    if(right_value217 && right_value217 != __result_obj__ && !__freed_obj__) { right_value217 = come_decrement_ref_count(right_value217, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value217;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj103=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value218=sNode_clone(left))));
    if(__dec_obj103) { __dec_obj103 = come_decrement_ref_count(__dec_obj103, ((struct sNode*)__dec_obj103)->finalize, ((struct sNode*)__dec_obj103)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value218);
    if(right_value218 && right_value218 != __result_obj__ && !__freed_obj__) { right_value218 = come_decrement_ref_count(right_value218, ((struct sNode*)right_value218)->finalize, ((struct sNode*)right_value218)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value218;
    __freed_obj__ = 0;
    __dec_obj104=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value219=sNode_clone(right))));
    if(__dec_obj104) { __dec_obj104 = come_decrement_ref_count(__dec_obj104, ((struct sNode*)__dec_obj104)->finalize, ((struct sNode*)__dec_obj104)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value219);
    if(right_value219 && right_value219 != __result_obj__ && !__freed_obj__) { right_value219 = come_decrement_ref_count(right_value219, ((struct sNode*)right_value219)->finalize, ((struct sNode*)right_value219)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value219;
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
void* right_value220;
char* __result142__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value220, 0, sizeof(void*));
    __result142__ = __result_obj__ = ((char*)(right_value220=__builtin_string("sGtNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value220);
    if(right_value220 && right_value220 != __result_obj__ && !__freed_obj__) { right_value220 = come_decrement_ref_count(right_value220, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value220;
    __freed_obj__ = 0;
    return __result142__;
}

_Bool sGtNode_compile(struct sGtNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_150;
_Bool _if_conditional229;
_Bool __result143__;
void* right_value221;
struct CVALUE* left_value_151;
struct sNode* right_node_152;
_Bool _if_conditional230;
_Bool __result144__;
void* right_value222;
struct CVALUE* right_value_153;
struct sType* type_154;
char* fun_name_155;
_Bool calling_fun_156;
_Bool _if_conditional231;
_Bool _if_conditional232;
void* right_value223;
struct CVALUE* come_value_157;
void* right_value224;
char* __dec_obj105;
void* right_value225;
struct sType* __dec_obj106;
_Bool __result145__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_150, 0, sizeof(struct sNode*));
memset(&right_value221, 0, sizeof(void*));
memset(&left_value_151, 0, sizeof(struct CVALUE*));
memset(&right_node_152, 0, sizeof(struct sNode*));
memset(&right_value222, 0, sizeof(void*));
memset(&right_value_153, 0, sizeof(struct CVALUE*));
memset(&type_154, 0, sizeof(struct sType*));
memset(&fun_name_155, 0, sizeof(char*));
memset(&calling_fun_156, 0, sizeof(_Bool));
memset(&right_value223, 0, sizeof(void*));
memset(&come_value_157, 0, sizeof(struct CVALUE*));
memset(&right_value224, 0, sizeof(void*));
memset(&right_value225, 0, sizeof(void*));
    left_node_150=self->mLeft;
    if(_if_conditional229=!node_compile(left_node_150,info),    _if_conditional229) {
        __result143__ = (_Bool)0;
        return __result143__;
    }
    left_value_151=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value221=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value221);
    if(right_value221 && right_value221 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value221, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value221;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_152=self->mRight;
    if(_if_conditional230=!node_compile(right_node_152,info),    _if_conditional230) {
        __result144__ = (_Bool)0;
        if(left_value_151 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_151, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result144__;
    }
    right_value_153=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value222=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value222);
    if(right_value222 && right_value222 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value222, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value222;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_154=(struct sType*)come_increment_ref_count(left_value_151->type);
    fun_name_155="operator_gt";
    if(_if_conditional231=self->mQuote,    _if_conditional231) {
        calling_fun_156=(_Bool)0;
    }
    else {
        calling_fun_156=operator_overload_fun(type_154,fun_name_155,left_value_151,right_value_153,info);
    }
    if(_if_conditional232=!calling_fun_156,    _if_conditional232) {
        come_value_157=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value223=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1211, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value223);
        if(right_value223 && right_value223 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value223, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value223;
        __freed_obj__ = 0;
        __dec_obj105=come_value_157->c_value;
        come_value_157->c_value=(char*)come_increment_ref_count(((char*)(right_value224=xsprintf("%s>%s",left_value_151->c_value,right_value_153->c_value))));
        if(__dec_obj105) { __dec_obj105 = come_decrement_ref_count(__dec_obj105, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value224);
        if(right_value224 && right_value224 != __result_obj__ && !__freed_obj__) { right_value224 = come_decrement_ref_count(right_value224, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value224;
        __freed_obj__ = 0;
        __dec_obj106=come_value_157->type;
        come_value_157->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value225=sType_clone(left_value_151->type))));
        if(__dec_obj106) { come_call_finalizer(sType_finalize,__dec_obj106, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value225);
        if(right_value225 && right_value225 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value225, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value225;
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
void* right_value226;
char* __result147__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value226, 0, sizeof(void*));
    __result147__ = __result_obj__ = ((char*)(right_value226=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value226);
    if(right_value226 && right_value226 != __result_obj__ && !__freed_obj__) { right_value226 = come_decrement_ref_count(right_value226, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value226;
    __freed_obj__ = 0;
    return __result147__;
}

struct sEqNode* sEqNode_initialize(struct sEqNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value227;
char* __dec_obj107;
void* right_value228;
struct sNode* __dec_obj108;
void* right_value229;
struct sNode* __dec_obj109;
struct sEqNode* __result148__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value227, 0, sizeof(void*));
memset(&right_value228, 0, sizeof(void*));
memset(&right_value229, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj107=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value227=__builtin_string(info->sname))));
    if(__dec_obj107) { __dec_obj107 = come_decrement_ref_count(__dec_obj107, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value227);
    if(right_value227 && right_value227 != __result_obj__ && !__freed_obj__) { right_value227 = come_decrement_ref_count(right_value227, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value227;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj108=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value228=sNode_clone(left))));
    if(__dec_obj108) { __dec_obj108 = come_decrement_ref_count(__dec_obj108, ((struct sNode*)__dec_obj108)->finalize, ((struct sNode*)__dec_obj108)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value228);
    if(right_value228 && right_value228 != __result_obj__ && !__freed_obj__) { right_value228 = come_decrement_ref_count(right_value228, ((struct sNode*)right_value228)->finalize, ((struct sNode*)right_value228)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value228;
    __freed_obj__ = 0;
    __dec_obj109=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value229=sNode_clone(right))));
    if(__dec_obj109) { __dec_obj109 = come_decrement_ref_count(__dec_obj109, ((struct sNode*)__dec_obj109)->finalize, ((struct sNode*)__dec_obj109)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value229);
    if(right_value229 && right_value229 != __result_obj__ && !__freed_obj__) { right_value229 = come_decrement_ref_count(right_value229, ((struct sNode*)right_value229)->finalize, ((struct sNode*)right_value229)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value229;
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
void* right_value230;
char* __result150__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value230, 0, sizeof(void*));
    __result150__ = __result_obj__ = ((char*)(right_value230=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value230);
    if(right_value230 && right_value230 != __result_obj__ && !__freed_obj__) { right_value230 = come_decrement_ref_count(right_value230, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value230;
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
void* right_value231;
char* __result152__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value231, 0, sizeof(void*));
    __result152__ = __result_obj__ = ((char*)(right_value231=__builtin_string("sEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value231);
    if(right_value231 && right_value231 != __result_obj__ && !__freed_obj__) { right_value231 = come_decrement_ref_count(right_value231, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value231;
    __freed_obj__ = 0;
    return __result152__;
}

_Bool sEqNode_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_158;
_Bool _if_conditional236;
_Bool __result153__;
void* right_value232;
struct CVALUE* left_value_159;
struct sNode* right_node_160;
_Bool _if_conditional237;
_Bool __result154__;
void* right_value233;
struct CVALUE* right_value_161;
void* right_value234;
struct CVALUE* come_value_162;
void* right_value235;
char* __dec_obj110;
void* right_value236;
struct sType* __dec_obj111;
_Bool __result155__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_158, 0, sizeof(struct sNode*));
memset(&right_value232, 0, sizeof(void*));
memset(&left_value_159, 0, sizeof(struct CVALUE*));
memset(&right_node_160, 0, sizeof(struct sNode*));
memset(&right_value233, 0, sizeof(void*));
memset(&right_value_161, 0, sizeof(struct CVALUE*));
memset(&right_value234, 0, sizeof(void*));
memset(&come_value_162, 0, sizeof(struct CVALUE*));
memset(&right_value235, 0, sizeof(void*));
memset(&right_value236, 0, sizeof(void*));
    left_node_158=self->mLeft;
    if(_if_conditional236=!node_compile(left_node_158,info),    _if_conditional236) {
        __result153__ = (_Bool)0;
        return __result153__;
    }
    left_value_159=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value232=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value232);
    if(right_value232 && right_value232 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value232, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value232;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_160=self->mRight;
    if(_if_conditional237=!node_compile(right_node_160,info),    _if_conditional237) {
        __result154__ = (_Bool)0;
        if(left_value_159 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_159, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result154__;
    }
    right_value_161=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value233=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value233);
    if(right_value233 && right_value233 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value233, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value233;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_162=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value234=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1300, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value234);
    if(right_value234 && right_value234 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value234, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value234;
    __freed_obj__ = 0;
    __dec_obj110=come_value_162->c_value;
    come_value_162->c_value=(char*)come_increment_ref_count(((char*)(right_value235=xsprintf("%s==%s",left_value_159->c_value,right_value_161->c_value))));
    if(__dec_obj110) { __dec_obj110 = come_decrement_ref_count(__dec_obj110, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value235);
    if(right_value235 && right_value235 != __result_obj__ && !__freed_obj__) { right_value235 = come_decrement_ref_count(right_value235, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value235;
    __freed_obj__ = 0;
    __dec_obj111=come_value_162->type;
    come_value_162->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value236=sType_clone(left_value_159->type))));
    if(__dec_obj111) { come_call_finalizer(sType_finalize,__dec_obj111, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value236);
    if(right_value236 && right_value236 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value236, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value236;
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
void* right_value237;
char* __dec_obj112;
void* right_value238;
struct sNode* __dec_obj113;
void* right_value239;
struct sNode* __dec_obj114;
struct sNotEqNode* __result156__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value237, 0, sizeof(void*));
memset(&right_value238, 0, sizeof(void*));
memset(&right_value239, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj112=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value237=__builtin_string(info->sname))));
    if(__dec_obj112) { __dec_obj112 = come_decrement_ref_count(__dec_obj112, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value237);
    if(right_value237 && right_value237 != __result_obj__ && !__freed_obj__) { right_value237 = come_decrement_ref_count(right_value237, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value237;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj113=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value238=sNode_clone(left))));
    if(__dec_obj113) { __dec_obj113 = come_decrement_ref_count(__dec_obj113, ((struct sNode*)__dec_obj113)->finalize, ((struct sNode*)__dec_obj113)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value238);
    if(right_value238 && right_value238 != __result_obj__ && !__freed_obj__) { right_value238 = come_decrement_ref_count(right_value238, ((struct sNode*)right_value238)->finalize, ((struct sNode*)right_value238)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value238;
    __freed_obj__ = 0;
    __dec_obj114=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value239=sNode_clone(right))));
    if(__dec_obj114) { __dec_obj114 = come_decrement_ref_count(__dec_obj114, ((struct sNode*)__dec_obj114)->finalize, ((struct sNode*)__dec_obj114)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value239);
    if(right_value239 && right_value239 != __result_obj__ && !__freed_obj__) { right_value239 = come_decrement_ref_count(right_value239, ((struct sNode*)right_value239)->finalize, ((struct sNode*)right_value239)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value239;
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
void* right_value240;
char* __result158__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value240, 0, sizeof(void*));
    __result158__ = __result_obj__ = ((char*)(right_value240=__builtin_string("sNotEqNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value240);
    if(right_value240 && right_value240 != __result_obj__ && !__freed_obj__) { right_value240 = come_decrement_ref_count(right_value240, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value240;
    __freed_obj__ = 0;
    return __result158__;
}

_Bool sNotEqNode_compile(struct sNotEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_163;
_Bool _if_conditional241;
_Bool __result159__;
void* right_value241;
struct CVALUE* left_value_164;
struct sNode* right_node_165;
_Bool _if_conditional242;
_Bool __result160__;
void* right_value242;
struct CVALUE* right_value_166;
void* right_value243;
struct CVALUE* come_value_167;
void* right_value244;
char* __dec_obj115;
void* right_value245;
struct sType* __dec_obj116;
_Bool __result161__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_163, 0, sizeof(struct sNode*));
memset(&right_value241, 0, sizeof(void*));
memset(&left_value_164, 0, sizeof(struct CVALUE*));
memset(&right_node_165, 0, sizeof(struct sNode*));
memset(&right_value242, 0, sizeof(void*));
memset(&right_value_166, 0, sizeof(struct CVALUE*));
memset(&right_value243, 0, sizeof(void*));
memset(&come_value_167, 0, sizeof(struct CVALUE*));
memset(&right_value244, 0, sizeof(void*));
memset(&right_value245, 0, sizeof(void*));
    left_node_163=self->mLeft;
    if(_if_conditional241=!node_compile(left_node_163,info),    _if_conditional241) {
        __result159__ = (_Bool)0;
        return __result159__;
    }
    left_value_164=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value241=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value241);
    if(right_value241 && right_value241 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value241, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value241;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_165=self->mRight;
    if(_if_conditional242=!node_compile(right_node_165,info),    _if_conditional242) {
        __result160__ = (_Bool)0;
        if(left_value_164 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_164, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result160__;
    }
    right_value_166=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value242=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value242);
    if(right_value242 && right_value242 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value242, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value242;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_167=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value243=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1368, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value243);
    if(right_value243 && right_value243 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value243, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value243;
    __freed_obj__ = 0;
    __dec_obj115=come_value_167->c_value;
    come_value_167->c_value=(char*)come_increment_ref_count(((char*)(right_value244=xsprintf("%s!=%s",left_value_164->c_value,right_value_166->c_value))));
    if(__dec_obj115) { __dec_obj115 = come_decrement_ref_count(__dec_obj115, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value244);
    if(right_value244 && right_value244 != __result_obj__ && !__freed_obj__) { right_value244 = come_decrement_ref_count(right_value244, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value244;
    __freed_obj__ = 0;
    __dec_obj116=come_value_167->type;
    come_value_167->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value245=sType_clone(left_value_164->type))));
    if(__dec_obj116) { come_call_finalizer(sType_finalize,__dec_obj116, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value245);
    if(right_value245 && right_value245 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value245, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value245;
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
void* right_value246;
char* __result163__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value246, 0, sizeof(void*));
    __result163__ = __result_obj__ = ((char*)(right_value246=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value246);
    if(right_value246 && right_value246 != __result_obj__ && !__freed_obj__) { right_value246 = come_decrement_ref_count(right_value246, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value246;
    __freed_obj__ = 0;
    return __result163__;
}

struct sEq2Node* sEq2Node_initialize(struct sEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value247;
char* __dec_obj117;
void* right_value248;
struct sNode* __dec_obj118;
void* right_value249;
struct sNode* __dec_obj119;
struct sEq2Node* __result164__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value247, 0, sizeof(void*));
memset(&right_value248, 0, sizeof(void*));
memset(&right_value249, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj117=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value247=__builtin_string(info->sname))));
    if(__dec_obj117) { __dec_obj117 = come_decrement_ref_count(__dec_obj117, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value247);
    if(right_value247 && right_value247 != __result_obj__ && !__freed_obj__) { right_value247 = come_decrement_ref_count(right_value247, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value247;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj118=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value248=sNode_clone(left))));
    if(__dec_obj118) { __dec_obj118 = come_decrement_ref_count(__dec_obj118, ((struct sNode*)__dec_obj118)->finalize, ((struct sNode*)__dec_obj118)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value248);
    if(right_value248 && right_value248 != __result_obj__ && !__freed_obj__) { right_value248 = come_decrement_ref_count(right_value248, ((struct sNode*)right_value248)->finalize, ((struct sNode*)right_value248)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value248;
    __freed_obj__ = 0;
    __dec_obj119=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value249=sNode_clone(right))));
    if(__dec_obj119) { __dec_obj119 = come_decrement_ref_count(__dec_obj119, ((struct sNode*)__dec_obj119)->finalize, ((struct sNode*)__dec_obj119)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value249);
    if(right_value249 && right_value249 != __result_obj__ && !__freed_obj__) { right_value249 = come_decrement_ref_count(right_value249, ((struct sNode*)right_value249)->finalize, ((struct sNode*)right_value249)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value249;
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
void* right_value250;
char* __result166__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value250, 0, sizeof(void*));
    __result166__ = __result_obj__ = ((char*)(right_value250=__builtin_string("sEq2Node")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value250);
    if(right_value250 && right_value250 != __result_obj__ && !__freed_obj__) { right_value250 = come_decrement_ref_count(right_value250, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value250;
    __freed_obj__ = 0;
    return __result166__;
}

_Bool sEq2Node_compile(struct sEqNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_168;
_Bool _if_conditional246;
_Bool __result167__;
void* right_value251;
struct CVALUE* left_value_169;
struct sNode* right_node_170;
_Bool _if_conditional247;
_Bool __result168__;
void* right_value252;
struct CVALUE* right_value_171;
struct sType* type_172;
char* fun_name_173;
_Bool calling_fun_174;
_Bool _if_conditional248;
_Bool _if_conditional249;
void* right_value253;
struct CVALUE* come_value_175;
void* right_value254;
char* __dec_obj120;
void* right_value255;
struct sType* __dec_obj121;
_Bool __result169__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_168, 0, sizeof(struct sNode*));
memset(&right_value251, 0, sizeof(void*));
memset(&left_value_169, 0, sizeof(struct CVALUE*));
memset(&right_node_170, 0, sizeof(struct sNode*));
memset(&right_value252, 0, sizeof(void*));
memset(&right_value_171, 0, sizeof(struct CVALUE*));
memset(&type_172, 0, sizeof(struct sType*));
memset(&fun_name_173, 0, sizeof(char*));
memset(&calling_fun_174, 0, sizeof(_Bool));
memset(&right_value253, 0, sizeof(void*));
memset(&come_value_175, 0, sizeof(struct CVALUE*));
memset(&right_value254, 0, sizeof(void*));
memset(&right_value255, 0, sizeof(void*));
    left_node_168=self->mLeft;
    if(_if_conditional246=!node_compile(left_node_168,info),    _if_conditional246) {
        __result167__ = (_Bool)0;
        return __result167__;
    }
    left_value_169=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value251=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value251);
    if(right_value251 && right_value251 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value251, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value251;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_170=self->mRight;
    if(_if_conditional247=!node_compile(right_node_170,info),    _if_conditional247) {
        __result168__ = (_Bool)0;
        if(left_value_169 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_169, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result168__;
    }
    right_value_171=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value252=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value252);
    if(right_value252 && right_value252 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value252, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value252;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_172=(struct sType*)come_increment_ref_count(left_value_169->type);
    fun_name_173="operator_equals";
    if(_if_conditional248=self->mQuote,    _if_conditional248) {
        calling_fun_174=(_Bool)0;
    }
    else {
        calling_fun_174=operator_overload_fun(type_172,fun_name_173,left_value_169,right_value_171,info);
    }
    if(_if_conditional249=!calling_fun_174,    _if_conditional249) {
        come_value_175=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value253=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1459, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value253);
        if(right_value253 && right_value253 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value253, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value253;
        __freed_obj__ = 0;
        __dec_obj120=come_value_175->c_value;
        come_value_175->c_value=(char*)come_increment_ref_count(((char*)(right_value254=xsprintf("%s==%s",left_value_169->c_value,right_value_171->c_value))));
        if(__dec_obj120) { __dec_obj120 = come_decrement_ref_count(__dec_obj120, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value254);
        if(right_value254 && right_value254 != __result_obj__ && !__freed_obj__) { right_value254 = come_decrement_ref_count(right_value254, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value254;
        __freed_obj__ = 0;
        __dec_obj121=come_value_175->type;
        come_value_175->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value255=sType_clone(left_value_169->type))));
        if(__dec_obj121) { come_call_finalizer(sType_finalize,__dec_obj121, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value255);
        if(right_value255 && right_value255 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value255, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value255;
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
void* right_value256;
char* __result171__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value256, 0, sizeof(void*));
    __result171__ = __result_obj__ = ((char*)(right_value256=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value256);
    if(right_value256 && right_value256 != __result_obj__ && !__freed_obj__) { right_value256 = come_decrement_ref_count(right_value256, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value256;
    __freed_obj__ = 0;
    return __result171__;
}

struct sNotEq2Node* sNotEq2Node_initialize(struct sNotEq2Node* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value257;
char* __dec_obj122;
void* right_value258;
struct sNode* __dec_obj123;
void* right_value259;
struct sNode* __dec_obj124;
struct sNotEq2Node* __result172__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value257, 0, sizeof(void*));
memset(&right_value258, 0, sizeof(void*));
memset(&right_value259, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj122=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value257=__builtin_string(info->sname))));
    if(__dec_obj122) { __dec_obj122 = come_decrement_ref_count(__dec_obj122, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value257);
    if(right_value257 && right_value257 != __result_obj__ && !__freed_obj__) { right_value257 = come_decrement_ref_count(right_value257, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value257;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj123=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value258=sNode_clone(left))));
    if(__dec_obj123) { __dec_obj123 = come_decrement_ref_count(__dec_obj123, ((struct sNode*)__dec_obj123)->finalize, ((struct sNode*)__dec_obj123)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value258);
    if(right_value258 && right_value258 != __result_obj__ && !__freed_obj__) { right_value258 = come_decrement_ref_count(right_value258, ((struct sNode*)right_value258)->finalize, ((struct sNode*)right_value258)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value258;
    __freed_obj__ = 0;
    __dec_obj124=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value259=sNode_clone(right))));
    if(__dec_obj124) { __dec_obj124 = come_decrement_ref_count(__dec_obj124, ((struct sNode*)__dec_obj124)->finalize, ((struct sNode*)__dec_obj124)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value259);
    if(right_value259 && right_value259 != __result_obj__ && !__freed_obj__) { right_value259 = come_decrement_ref_count(right_value259, ((struct sNode*)right_value259)->finalize, ((struct sNode*)right_value259)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value259;
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
void* right_value260;
char* __result174__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value260, 0, sizeof(void*));
    __result174__ = __result_obj__ = ((char*)(right_value260=__builtin_string("sNotEq2Node")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value260);
    if(right_value260 && right_value260 != __result_obj__ && !__freed_obj__) { right_value260 = come_decrement_ref_count(right_value260, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value260;
    __freed_obj__ = 0;
    return __result174__;
}

_Bool sNotEq2Node_compile(struct sNotEq2Node* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_176;
_Bool _if_conditional253;
_Bool __result175__;
void* right_value261;
struct CVALUE* left_value_177;
struct sNode* right_node_178;
_Bool _if_conditional254;
_Bool __result176__;
void* right_value262;
struct CVALUE* right_value_179;
struct sType* type_180;
char* fun_name_181;
_Bool calling_fun_182;
_Bool _if_conditional255;
_Bool _if_conditional256;
void* right_value263;
struct CVALUE* come_value_183;
void* right_value264;
char* __dec_obj125;
void* right_value265;
struct sType* __dec_obj126;
_Bool __result177__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_176, 0, sizeof(struct sNode*));
memset(&right_value261, 0, sizeof(void*));
memset(&left_value_177, 0, sizeof(struct CVALUE*));
memset(&right_node_178, 0, sizeof(struct sNode*));
memset(&right_value262, 0, sizeof(void*));
memset(&right_value_179, 0, sizeof(struct CVALUE*));
memset(&type_180, 0, sizeof(struct sType*));
memset(&fun_name_181, 0, sizeof(char*));
memset(&calling_fun_182, 0, sizeof(_Bool));
memset(&right_value263, 0, sizeof(void*));
memset(&come_value_183, 0, sizeof(struct CVALUE*));
memset(&right_value264, 0, sizeof(void*));
memset(&right_value265, 0, sizeof(void*));
    left_node_176=self->mLeft;
    if(_if_conditional253=!node_compile(left_node_176,info),    _if_conditional253) {
        __result175__ = (_Bool)0;
        return __result175__;
    }
    left_value_177=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value261=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value261);
    if(right_value261 && right_value261 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value261, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value261;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_178=self->mRight;
    if(_if_conditional254=!node_compile(right_node_178,info),    _if_conditional254) {
        __result176__ = (_Bool)0;
        if(left_value_177 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_177, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result176__;
    }
    right_value_179=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value262=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value262);
    if(right_value262 && right_value262 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value262, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value262;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_180=(struct sType*)come_increment_ref_count(left_value_177->type);
    fun_name_181="operator_not_equals";
    if(_if_conditional255=self->mQuote,    _if_conditional255) {
        calling_fun_182=(_Bool)0;
    }
    else {
        calling_fun_182=operator_overload_fun(type_180,fun_name_181,left_value_177,right_value_179,info);
    }
    if(_if_conditional256=!calling_fun_182,    _if_conditional256) {
        come_value_183=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value263=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1550, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value263);
        if(right_value263 && right_value263 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value263, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value263;
        __freed_obj__ = 0;
        __dec_obj125=come_value_183->c_value;
        come_value_183->c_value=(char*)come_increment_ref_count(((char*)(right_value264=xsprintf("%s!=%s",left_value_177->c_value,right_value_179->c_value))));
        if(__dec_obj125) { __dec_obj125 = come_decrement_ref_count(__dec_obj125, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value264);
        if(right_value264 && right_value264 != __result_obj__ && !__freed_obj__) { right_value264 = come_decrement_ref_count(right_value264, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value264;
        __freed_obj__ = 0;
        __dec_obj126=come_value_183->type;
        come_value_183->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value265=sType_clone(left_value_177->type))));
        if(__dec_obj126) { come_call_finalizer(sType_finalize,__dec_obj126, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value265);
        if(right_value265 && right_value265 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value265, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value265;
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
void* right_value266;
char* __result179__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value266, 0, sizeof(void*));
    __result179__ = __result_obj__ = ((char*)(right_value266=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value266);
    if(right_value266 && right_value266 != __result_obj__ && !__freed_obj__) { right_value266 = come_decrement_ref_count(right_value266, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value266;
    __freed_obj__ = 0;
    return __result179__;
}

struct sAndNode* sAndNode_initialize(struct sAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value267;
char* __dec_obj127;
void* right_value268;
struct sNode* __dec_obj128;
void* right_value269;
struct sNode* __dec_obj129;
struct sAndNode* __result180__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value267, 0, sizeof(void*));
memset(&right_value268, 0, sizeof(void*));
memset(&right_value269, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj127=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value267=__builtin_string(info->sname))));
    if(__dec_obj127) { __dec_obj127 = come_decrement_ref_count(__dec_obj127, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value267);
    if(right_value267 && right_value267 != __result_obj__ && !__freed_obj__) { right_value267 = come_decrement_ref_count(right_value267, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value267;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj128=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value268=sNode_clone(left))));
    if(__dec_obj128) { __dec_obj128 = come_decrement_ref_count(__dec_obj128, ((struct sNode*)__dec_obj128)->finalize, ((struct sNode*)__dec_obj128)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value268);
    if(right_value268 && right_value268 != __result_obj__ && !__freed_obj__) { right_value268 = come_decrement_ref_count(right_value268, ((struct sNode*)right_value268)->finalize, ((struct sNode*)right_value268)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value268;
    __freed_obj__ = 0;
    __dec_obj129=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value269=sNode_clone(right))));
    if(__dec_obj129) { __dec_obj129 = come_decrement_ref_count(__dec_obj129, ((struct sNode*)__dec_obj129)->finalize, ((struct sNode*)__dec_obj129)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value269);
    if(right_value269 && right_value269 != __result_obj__ && !__freed_obj__) { right_value269 = come_decrement_ref_count(right_value269, ((struct sNode*)right_value269)->finalize, ((struct sNode*)right_value269)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value269;
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
void* right_value270;
char* __result182__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value270, 0, sizeof(void*));
    __result182__ = __result_obj__ = ((char*)(right_value270=__builtin_string("sAndNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value270);
    if(right_value270 && right_value270 != __result_obj__ && !__freed_obj__) { right_value270 = come_decrement_ref_count(right_value270, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value270;
    __freed_obj__ = 0;
    return __result182__;
}

_Bool sAndNode_compile(struct sAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_184;
_Bool _if_conditional260;
_Bool __result183__;
void* right_value271;
struct CVALUE* left_value_185;
struct sNode* right_node_186;
_Bool _if_conditional261;
_Bool __result184__;
void* right_value272;
struct CVALUE* right_value_187;
struct sType* type_188;
char* fun_name_189;
_Bool calling_fun_190;
_Bool _if_conditional262;
_Bool _if_conditional263;
void* right_value273;
struct CVALUE* come_value_191;
void* right_value274;
char* __dec_obj130;
void* right_value275;
struct sType* __dec_obj131;
_Bool __result185__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_184, 0, sizeof(struct sNode*));
memset(&right_value271, 0, sizeof(void*));
memset(&left_value_185, 0, sizeof(struct CVALUE*));
memset(&right_node_186, 0, sizeof(struct sNode*));
memset(&right_value272, 0, sizeof(void*));
memset(&right_value_187, 0, sizeof(struct CVALUE*));
memset(&type_188, 0, sizeof(struct sType*));
memset(&fun_name_189, 0, sizeof(char*));
memset(&calling_fun_190, 0, sizeof(_Bool));
memset(&right_value273, 0, sizeof(void*));
memset(&come_value_191, 0, sizeof(struct CVALUE*));
memset(&right_value274, 0, sizeof(void*));
memset(&right_value275, 0, sizeof(void*));
    left_node_184=self->mLeft;
    if(_if_conditional260=!node_compile(left_node_184,info),    _if_conditional260) {
        __result183__ = (_Bool)0;
        return __result183__;
    }
    left_value_185=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value271=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value271);
    if(right_value271 && right_value271 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value271, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value271;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_186=self->mRight;
    if(_if_conditional261=!node_compile(right_node_186,info),    _if_conditional261) {
        __result184__ = (_Bool)0;
        if(left_value_185 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_185, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result184__;
    }
    right_value_187=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value272=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value272);
    if(right_value272 && right_value272 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value272, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value272;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_188=(struct sType*)come_increment_ref_count(left_value_185->type);
    fun_name_189="operator_and";
    if(_if_conditional262=self->mQuote,    _if_conditional262) {
        calling_fun_190=(_Bool)0;
    }
    else {
        calling_fun_190=operator_overload_fun(type_188,fun_name_189,left_value_185,right_value_187,info);
    }
    if(_if_conditional263=!calling_fun_190,    _if_conditional263) {
        come_value_191=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value273=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1642, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value273);
        if(right_value273 && right_value273 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value273, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value273;
        __freed_obj__ = 0;
        __dec_obj130=come_value_191->c_value;
        come_value_191->c_value=(char*)come_increment_ref_count(((char*)(right_value274=xsprintf("%s&%s",left_value_185->c_value,right_value_187->c_value))));
        if(__dec_obj130) { __dec_obj130 = come_decrement_ref_count(__dec_obj130, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value274);
        if(right_value274 && right_value274 != __result_obj__ && !__freed_obj__) { right_value274 = come_decrement_ref_count(right_value274, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value274;
        __freed_obj__ = 0;
        __dec_obj131=come_value_191->type;
        come_value_191->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value275=sType_clone(left_value_185->type))));
        if(__dec_obj131) { come_call_finalizer(sType_finalize,__dec_obj131, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value275);
        if(right_value275 && right_value275 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value275, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value275;
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
void* right_value276;
char* __result187__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value276, 0, sizeof(void*));
    __result187__ = __result_obj__ = ((char*)(right_value276=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value276);
    if(right_value276 && right_value276 != __result_obj__ && !__freed_obj__) { right_value276 = come_decrement_ref_count(right_value276, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value276;
    __freed_obj__ = 0;
    return __result187__;
}

struct sXOrNode* sXOrNode_initialize(struct sXOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value277;
char* __dec_obj132;
void* right_value278;
struct sNode* __dec_obj133;
void* right_value279;
struct sNode* __dec_obj134;
struct sXOrNode* __result188__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value277, 0, sizeof(void*));
memset(&right_value278, 0, sizeof(void*));
memset(&right_value279, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj132=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value277=__builtin_string(info->sname))));
    if(__dec_obj132) { __dec_obj132 = come_decrement_ref_count(__dec_obj132, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value277);
    if(right_value277 && right_value277 != __result_obj__ && !__freed_obj__) { right_value277 = come_decrement_ref_count(right_value277, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value277;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj133=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value278=sNode_clone(left))));
    if(__dec_obj133) { __dec_obj133 = come_decrement_ref_count(__dec_obj133, ((struct sNode*)__dec_obj133)->finalize, ((struct sNode*)__dec_obj133)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value278);
    if(right_value278 && right_value278 != __result_obj__ && !__freed_obj__) { right_value278 = come_decrement_ref_count(right_value278, ((struct sNode*)right_value278)->finalize, ((struct sNode*)right_value278)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value278;
    __freed_obj__ = 0;
    __dec_obj134=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value279=sNode_clone(right))));
    if(__dec_obj134) { __dec_obj134 = come_decrement_ref_count(__dec_obj134, ((struct sNode*)__dec_obj134)->finalize, ((struct sNode*)__dec_obj134)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value279);
    if(right_value279 && right_value279 != __result_obj__ && !__freed_obj__) { right_value279 = come_decrement_ref_count(right_value279, ((struct sNode*)right_value279)->finalize, ((struct sNode*)right_value279)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value279;
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
void* right_value280;
char* __result190__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value280, 0, sizeof(void*));
    __result190__ = __result_obj__ = ((char*)(right_value280=__builtin_string("sXOrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value280);
    if(right_value280 && right_value280 != __result_obj__ && !__freed_obj__) { right_value280 = come_decrement_ref_count(right_value280, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value280;
    __freed_obj__ = 0;
    return __result190__;
}

_Bool sXOrNode_compile(struct sXOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_192;
_Bool _if_conditional267;
_Bool __result191__;
void* right_value281;
struct CVALUE* left_value_193;
struct sNode* right_node_194;
_Bool _if_conditional268;
_Bool __result192__;
void* right_value282;
struct CVALUE* right_value_195;
struct sType* type_196;
char* fun_name_197;
_Bool calling_fun_198;
_Bool _if_conditional269;
_Bool _if_conditional270;
void* right_value283;
struct CVALUE* come_value_199;
void* right_value284;
char* __dec_obj135;
void* right_value285;
struct sType* __dec_obj136;
_Bool __result193__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_192, 0, sizeof(struct sNode*));
memset(&right_value281, 0, sizeof(void*));
memset(&left_value_193, 0, sizeof(struct CVALUE*));
memset(&right_node_194, 0, sizeof(struct sNode*));
memset(&right_value282, 0, sizeof(void*));
memset(&right_value_195, 0, sizeof(struct CVALUE*));
memset(&type_196, 0, sizeof(struct sType*));
memset(&fun_name_197, 0, sizeof(char*));
memset(&calling_fun_198, 0, sizeof(_Bool));
memset(&right_value283, 0, sizeof(void*));
memset(&come_value_199, 0, sizeof(struct CVALUE*));
memset(&right_value284, 0, sizeof(void*));
memset(&right_value285, 0, sizeof(void*));
    left_node_192=self->mLeft;
    if(_if_conditional267=!node_compile(left_node_192,info),    _if_conditional267) {
        __result191__ = (_Bool)0;
        return __result191__;
    }
    left_value_193=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value281=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value281);
    if(right_value281 && right_value281 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value281, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value281;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_194=self->mRight;
    if(_if_conditional268=!node_compile(right_node_194,info),    _if_conditional268) {
        __result192__ = (_Bool)0;
        if(left_value_193 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_193, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result192__;
    }
    right_value_195=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value282=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value282);
    if(right_value282 && right_value282 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value282, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value282;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_196=(struct sType*)come_increment_ref_count(left_value_193->type);
    fun_name_197="operator_xor";
    if(_if_conditional269=self->mQuote,    _if_conditional269) {
        calling_fun_198=(_Bool)0;
    }
    else {
        calling_fun_198=operator_overload_fun(type_196,fun_name_197,left_value_193,right_value_195,info);
    }
    if(_if_conditional270=!calling_fun_198,    _if_conditional270) {
        come_value_199=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value283=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1733, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value283);
        if(right_value283 && right_value283 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value283, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value283;
        __freed_obj__ = 0;
        __dec_obj135=come_value_199->c_value;
        come_value_199->c_value=(char*)come_increment_ref_count(((char*)(right_value284=xsprintf("%s^%s",left_value_193->c_value,right_value_195->c_value))));
        if(__dec_obj135) { __dec_obj135 = come_decrement_ref_count(__dec_obj135, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value284);
        if(right_value284 && right_value284 != __result_obj__ && !__freed_obj__) { right_value284 = come_decrement_ref_count(right_value284, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value284;
        __freed_obj__ = 0;
        __dec_obj136=come_value_199->type;
        come_value_199->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value285=sType_clone(left_value_193->type))));
        if(__dec_obj136) { come_call_finalizer(sType_finalize,__dec_obj136, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value285);
        if(right_value285 && right_value285 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value285, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value285;
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
void* right_value286;
char* __result195__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value286, 0, sizeof(void*));
    __result195__ = __result_obj__ = ((char*)(right_value286=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value286);
    if(right_value286 && right_value286 != __result_obj__ && !__freed_obj__) { right_value286 = come_decrement_ref_count(right_value286, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value286;
    __freed_obj__ = 0;
    return __result195__;
}

struct sOrNode* sOrNode_initialize(struct sOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value287;
char* __dec_obj137;
void* right_value288;
struct sNode* __dec_obj138;
void* right_value289;
struct sNode* __dec_obj139;
struct sOrNode* __result196__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value287, 0, sizeof(void*));
memset(&right_value288, 0, sizeof(void*));
memset(&right_value289, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj137=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value287=__builtin_string(info->sname))));
    if(__dec_obj137) { __dec_obj137 = come_decrement_ref_count(__dec_obj137, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value287);
    if(right_value287 && right_value287 != __result_obj__ && !__freed_obj__) { right_value287 = come_decrement_ref_count(right_value287, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value287;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj138=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value288=sNode_clone(left))));
    if(__dec_obj138) { __dec_obj138 = come_decrement_ref_count(__dec_obj138, ((struct sNode*)__dec_obj138)->finalize, ((struct sNode*)__dec_obj138)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value288);
    if(right_value288 && right_value288 != __result_obj__ && !__freed_obj__) { right_value288 = come_decrement_ref_count(right_value288, ((struct sNode*)right_value288)->finalize, ((struct sNode*)right_value288)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value288;
    __freed_obj__ = 0;
    __dec_obj139=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value289=sNode_clone(right))));
    if(__dec_obj139) { __dec_obj139 = come_decrement_ref_count(__dec_obj139, ((struct sNode*)__dec_obj139)->finalize, ((struct sNode*)__dec_obj139)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value289);
    if(right_value289 && right_value289 != __result_obj__ && !__freed_obj__) { right_value289 = come_decrement_ref_count(right_value289, ((struct sNode*)right_value289)->finalize, ((struct sNode*)right_value289)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value289;
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
void* right_value290;
char* __result198__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value290, 0, sizeof(void*));
    __result198__ = __result_obj__ = ((char*)(right_value290=__builtin_string("sOrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value290);
    if(right_value290 && right_value290 != __result_obj__ && !__freed_obj__) { right_value290 = come_decrement_ref_count(right_value290, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value290;
    __freed_obj__ = 0;
    return __result198__;
}

_Bool sOrNode_compile(struct sOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_200;
_Bool _if_conditional274;
_Bool __result199__;
void* right_value291;
struct CVALUE* left_value_201;
struct sNode* right_node_202;
_Bool _if_conditional275;
_Bool __result200__;
void* right_value292;
struct CVALUE* right_value_203;
struct sType* type_204;
char* fun_name_205;
_Bool calling_fun_206;
_Bool _if_conditional276;
_Bool _if_conditional277;
void* right_value293;
struct CVALUE* come_value_207;
void* right_value294;
char* __dec_obj140;
void* right_value295;
struct sType* __dec_obj141;
_Bool __result201__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_200, 0, sizeof(struct sNode*));
memset(&right_value291, 0, sizeof(void*));
memset(&left_value_201, 0, sizeof(struct CVALUE*));
memset(&right_node_202, 0, sizeof(struct sNode*));
memset(&right_value292, 0, sizeof(void*));
memset(&right_value_203, 0, sizeof(struct CVALUE*));
memset(&type_204, 0, sizeof(struct sType*));
memset(&fun_name_205, 0, sizeof(char*));
memset(&calling_fun_206, 0, sizeof(_Bool));
memset(&right_value293, 0, sizeof(void*));
memset(&come_value_207, 0, sizeof(struct CVALUE*));
memset(&right_value294, 0, sizeof(void*));
memset(&right_value295, 0, sizeof(void*));
    left_node_200=self->mLeft;
    if(_if_conditional274=!node_compile(left_node_200,info),    _if_conditional274) {
        __result199__ = (_Bool)0;
        return __result199__;
    }
    left_value_201=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value291=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value291);
    if(right_value291 && right_value291 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value291, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value291;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_202=self->mRight;
    if(_if_conditional275=!node_compile(right_node_202,info),    _if_conditional275) {
        __result200__ = (_Bool)0;
        if(left_value_201 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_201, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result200__;
    }
    right_value_203=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value292=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value292);
    if(right_value292 && right_value292 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value292, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value292;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_204=(struct sType*)come_increment_ref_count(left_value_201->type);
    fun_name_205="operator_or";
    if(_if_conditional276=self->mQuote,    _if_conditional276) {
        calling_fun_206=(_Bool)0;
    }
    else {
        calling_fun_206=operator_overload_fun(type_204,fun_name_205,left_value_201,right_value_203,info);
    }
    if(_if_conditional277=!calling_fun_206,    _if_conditional277) {
        come_value_207=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value293=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1824, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value293);
        if(right_value293 && right_value293 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value293, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value293;
        __freed_obj__ = 0;
        __dec_obj140=come_value_207->c_value;
        come_value_207->c_value=(char*)come_increment_ref_count(((char*)(right_value294=xsprintf("%s|%s",left_value_201->c_value,right_value_203->c_value))));
        if(__dec_obj140) { __dec_obj140 = come_decrement_ref_count(__dec_obj140, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value294);
        if(right_value294 && right_value294 != __result_obj__ && !__freed_obj__) { right_value294 = come_decrement_ref_count(right_value294, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value294;
        __freed_obj__ = 0;
        __dec_obj141=come_value_207->type;
        come_value_207->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value295=sType_clone(left_value_201->type))));
        if(__dec_obj141) { come_call_finalizer(sType_finalize,__dec_obj141, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value295);
        if(right_value295 && right_value295 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value295, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value295;
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
void* right_value296;
char* __result203__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value296, 0, sizeof(void*));
    __result203__ = __result_obj__ = ((char*)(right_value296=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value296);
    if(right_value296 && right_value296 != __result_obj__ && !__freed_obj__) { right_value296 = come_decrement_ref_count(right_value296, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value296;
    __freed_obj__ = 0;
    return __result203__;
}

struct sAndAndNode* sAndAndNode_initialize(struct sAndAndNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value297;
char* __dec_obj142;
void* right_value298;
struct sNode* __dec_obj143;
void* right_value299;
struct sNode* __dec_obj144;
struct sAndAndNode* __result204__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value297, 0, sizeof(void*));
memset(&right_value298, 0, sizeof(void*));
memset(&right_value299, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj142=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value297=__builtin_string(info->sname))));
    if(__dec_obj142) { __dec_obj142 = come_decrement_ref_count(__dec_obj142, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value297);
    if(right_value297 && right_value297 != __result_obj__ && !__freed_obj__) { right_value297 = come_decrement_ref_count(right_value297, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value297;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj143=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value298=sNode_clone(left))));
    if(__dec_obj143) { __dec_obj143 = come_decrement_ref_count(__dec_obj143, ((struct sNode*)__dec_obj143)->finalize, ((struct sNode*)__dec_obj143)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value298);
    if(right_value298 && right_value298 != __result_obj__ && !__freed_obj__) { right_value298 = come_decrement_ref_count(right_value298, ((struct sNode*)right_value298)->finalize, ((struct sNode*)right_value298)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value298;
    __freed_obj__ = 0;
    __dec_obj144=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value299=sNode_clone(right))));
    if(__dec_obj144) { __dec_obj144 = come_decrement_ref_count(__dec_obj144, ((struct sNode*)__dec_obj144)->finalize, ((struct sNode*)__dec_obj144)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value299);
    if(right_value299 && right_value299 != __result_obj__ && !__freed_obj__) { right_value299 = come_decrement_ref_count(right_value299, ((struct sNode*)right_value299)->finalize, ((struct sNode*)right_value299)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value299;
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
void* right_value300;
char* __result206__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value300, 0, sizeof(void*));
    __result206__ = __result_obj__ = ((char*)(right_value300=__builtin_string("sAndAndNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value300);
    if(right_value300 && right_value300 != __result_obj__ && !__freed_obj__) { right_value300 = come_decrement_ref_count(right_value300, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value300;
    __freed_obj__ = 0;
    return __result206__;
}

_Bool sAndAndNode_compile(struct sAndAndNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_208;
_Bool _if_conditional281;
_Bool __result207__;
void* right_value301;
struct CVALUE* left_value_209;
struct sNode* right_node_210;
_Bool _if_conditional282;
_Bool __result208__;
void* right_value302;
struct CVALUE* right_value_211;
struct sType* type_212;
char* fun_name_213;
_Bool calling_fun_214;
_Bool _if_conditional283;
_Bool _if_conditional284;
void* right_value303;
struct CVALUE* come_value_215;
void* right_value304;
char* __dec_obj145;
void* right_value305;
struct sType* __dec_obj146;
_Bool __result209__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_208, 0, sizeof(struct sNode*));
memset(&right_value301, 0, sizeof(void*));
memset(&left_value_209, 0, sizeof(struct CVALUE*));
memset(&right_node_210, 0, sizeof(struct sNode*));
memset(&right_value302, 0, sizeof(void*));
memset(&right_value_211, 0, sizeof(struct CVALUE*));
memset(&type_212, 0, sizeof(struct sType*));
memset(&fun_name_213, 0, sizeof(char*));
memset(&calling_fun_214, 0, sizeof(_Bool));
memset(&right_value303, 0, sizeof(void*));
memset(&come_value_215, 0, sizeof(struct CVALUE*));
memset(&right_value304, 0, sizeof(void*));
memset(&right_value305, 0, sizeof(void*));
    left_node_208=self->mLeft;
    if(_if_conditional281=!node_compile(left_node_208,info),    _if_conditional281) {
        __result207__ = (_Bool)0;
        return __result207__;
    }
    left_value_209=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value301=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value301);
    if(right_value301 && right_value301 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value301, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value301;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_210=self->mRight;
    if(_if_conditional282=!node_compile(right_node_210,info),    _if_conditional282) {
        __result208__ = (_Bool)0;
        if(left_value_209 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_209, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result208__;
    }
    right_value_211=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value302=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value302);
    if(right_value302 && right_value302 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value302, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value302;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_212=(struct sType*)come_increment_ref_count(left_value_209->type);
    fun_name_213="operator_andand";
    if(_if_conditional283=self->mQuote,    _if_conditional283) {
        calling_fun_214=(_Bool)0;
    }
    else {
        calling_fun_214=operator_overload_fun(type_212,fun_name_213,left_value_209,right_value_211,info);
    }
    if(_if_conditional284=!calling_fun_214,    _if_conditional284) {
        come_value_215=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value303=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 1915, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value303);
        if(right_value303 && right_value303 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value303, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value303;
        __freed_obj__ = 0;
        __dec_obj145=come_value_215->c_value;
        come_value_215->c_value=(char*)come_increment_ref_count(((char*)(right_value304=xsprintf("%s&&%s",left_value_209->c_value,right_value_211->c_value))));
        if(__dec_obj145) { __dec_obj145 = come_decrement_ref_count(__dec_obj145, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value304);
        if(right_value304 && right_value304 != __result_obj__ && !__freed_obj__) { right_value304 = come_decrement_ref_count(right_value304, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value304;
        __freed_obj__ = 0;
        __dec_obj146=come_value_215->type;
        come_value_215->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value305=sType_clone(left_value_209->type))));
        if(__dec_obj146) { come_call_finalizer(sType_finalize,__dec_obj146, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value305);
        if(right_value305 && right_value305 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value305, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value305;
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
void* right_value306;
char* __result211__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value306, 0, sizeof(void*));
    __result211__ = __result_obj__ = ((char*)(right_value306=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value306);
    if(right_value306 && right_value306 != __result_obj__ && !__freed_obj__) { right_value306 = come_decrement_ref_count(right_value306, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value306;
    __freed_obj__ = 0;
    return __result211__;
}

struct sOrOrNode* sOrOrNode_initialize(struct sOrOrNode* self, struct sNode* left, struct sNode* right, _Bool quote, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value307;
char* __dec_obj147;
void* right_value308;
struct sNode* __dec_obj148;
void* right_value309;
struct sNode* __dec_obj149;
struct sOrOrNode* __result212__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value307, 0, sizeof(void*));
memset(&right_value308, 0, sizeof(void*));
memset(&right_value309, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj147=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value307=__builtin_string(info->sname))));
    if(__dec_obj147) { __dec_obj147 = come_decrement_ref_count(__dec_obj147, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value307);
    if(right_value307 && right_value307 != __result_obj__ && !__freed_obj__) { right_value307 = come_decrement_ref_count(right_value307, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value307;
    __freed_obj__ = 0;
    self->mQuote=quote;
    __dec_obj148=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value308=sNode_clone(left))));
    if(__dec_obj148) { __dec_obj148 = come_decrement_ref_count(__dec_obj148, ((struct sNode*)__dec_obj148)->finalize, ((struct sNode*)__dec_obj148)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value308);
    if(right_value308 && right_value308 != __result_obj__ && !__freed_obj__) { right_value308 = come_decrement_ref_count(right_value308, ((struct sNode*)right_value308)->finalize, ((struct sNode*)right_value308)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value308;
    __freed_obj__ = 0;
    __dec_obj149=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value309=sNode_clone(right))));
    if(__dec_obj149) { __dec_obj149 = come_decrement_ref_count(__dec_obj149, ((struct sNode*)__dec_obj149)->finalize, ((struct sNode*)__dec_obj149)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value309);
    if(right_value309 && right_value309 != __result_obj__ && !__freed_obj__) { right_value309 = come_decrement_ref_count(right_value309, ((struct sNode*)right_value309)->finalize, ((struct sNode*)right_value309)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value309;
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
void* right_value310;
char* __result214__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value310, 0, sizeof(void*));
    __result214__ = __result_obj__ = ((char*)(right_value310=__builtin_string("sOrOrNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value310);
    if(right_value310 && right_value310 != __result_obj__ && !__freed_obj__) { right_value310 = come_decrement_ref_count(right_value310, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value310;
    __freed_obj__ = 0;
    return __result214__;
}

_Bool sOrOrNode_compile(struct sOrOrNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_216;
_Bool _if_conditional288;
_Bool __result215__;
void* right_value311;
struct CVALUE* left_value_217;
struct sNode* right_node_218;
_Bool _if_conditional289;
_Bool __result216__;
void* right_value312;
struct CVALUE* right_value_219;
struct sType* type_220;
char* fun_name_221;
_Bool calling_fun_222;
_Bool _if_conditional290;
_Bool _if_conditional291;
void* right_value313;
struct CVALUE* come_value_223;
void* right_value314;
char* __dec_obj150;
void* right_value315;
struct sType* __dec_obj151;
_Bool __result217__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_216, 0, sizeof(struct sNode*));
memset(&right_value311, 0, sizeof(void*));
memset(&left_value_217, 0, sizeof(struct CVALUE*));
memset(&right_node_218, 0, sizeof(struct sNode*));
memset(&right_value312, 0, sizeof(void*));
memset(&right_value_219, 0, sizeof(struct CVALUE*));
memset(&type_220, 0, sizeof(struct sType*));
memset(&fun_name_221, 0, sizeof(char*));
memset(&calling_fun_222, 0, sizeof(_Bool));
memset(&right_value313, 0, sizeof(void*));
memset(&come_value_223, 0, sizeof(struct CVALUE*));
memset(&right_value314, 0, sizeof(void*));
memset(&right_value315, 0, sizeof(void*));
    left_node_216=self->mLeft;
    if(_if_conditional288=!node_compile(left_node_216,info),    _if_conditional288) {
        __result215__ = (_Bool)0;
        return __result215__;
    }
    left_value_217=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value311=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value311);
    if(right_value311 && right_value311 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value311, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value311;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_218=self->mRight;
    if(_if_conditional289=!node_compile(right_node_218,info),    _if_conditional289) {
        __result216__ = (_Bool)0;
        if(left_value_217 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_217, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result216__;
    }
    right_value_219=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value312=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value312);
    if(right_value312 && right_value312 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value312, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value312;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    type_220=(struct sType*)come_increment_ref_count(left_value_217->type);
    fun_name_221="operator_oror";
    if(_if_conditional290=self->mQuote,    _if_conditional290) {
        calling_fun_222=(_Bool)0;
    }
    else {
        calling_fun_222=operator_overload_fun(type_220,fun_name_221,left_value_217,right_value_219,info);
    }
    if(_if_conditional291=!calling_fun_222,    _if_conditional291) {
        come_value_223=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value313=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2005, "struct CVALUE"))));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value313);
        if(right_value313 && right_value313 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value313, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value313;
        __freed_obj__ = 0;
        __dec_obj150=come_value_223->c_value;
        come_value_223->c_value=(char*)come_increment_ref_count(((char*)(right_value314=xsprintf("%s||%s",left_value_217->c_value,right_value_219->c_value))));
        if(__dec_obj150) { __dec_obj150 = come_decrement_ref_count(__dec_obj150, (void*)0, (void*)0, 0,0,0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value314);
        if(right_value314 && right_value314 != __result_obj__ && !__freed_obj__) { right_value314 = come_decrement_ref_count(right_value314, (void*)0, (void*)0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value314;
        __freed_obj__ = 0;
        __dec_obj151=come_value_223->type;
        come_value_223->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value315=sType_clone(left_value_217->type))));
        if(__dec_obj151) { come_call_finalizer(sType_finalize,__dec_obj151, (void*)0, (void*)0, 0, 0, 0, 0); }
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value315);
        if(right_value315 && right_value315 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value315, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value315;
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
void* right_value316;
char* __result219__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value316, 0, sizeof(void*));
    __result219__ = __result_obj__ = ((char*)(right_value316=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value316);
    if(right_value316 && right_value316 != __result_obj__ && !__freed_obj__) { right_value316 = come_decrement_ref_count(right_value316, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value316;
    __freed_obj__ = 0;
    return __result219__;
}

struct sCommaNode* sCommaNode_initialize(struct sCommaNode* self, struct sNode* left, struct sNode* right, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value317;
char* __dec_obj152;
void* right_value318;
struct sNode* __dec_obj153;
void* right_value319;
struct sNode* __dec_obj154;
struct sCommaNode* __result220__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value317, 0, sizeof(void*));
memset(&right_value318, 0, sizeof(void*));
memset(&right_value319, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj152=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value317=__builtin_string(info->sname))));
    if(__dec_obj152) { __dec_obj152 = come_decrement_ref_count(__dec_obj152, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value317);
    if(right_value317 && right_value317 != __result_obj__ && !__freed_obj__) { right_value317 = come_decrement_ref_count(right_value317, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value317;
    __freed_obj__ = 0;
    __dec_obj153=self->mLeft;
    self->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value318=sNode_clone(left))));
    if(__dec_obj153) { __dec_obj153 = come_decrement_ref_count(__dec_obj153, ((struct sNode*)__dec_obj153)->finalize, ((struct sNode*)__dec_obj153)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value318);
    if(right_value318 && right_value318 != __result_obj__ && !__freed_obj__) { right_value318 = come_decrement_ref_count(right_value318, ((struct sNode*)right_value318)->finalize, ((struct sNode*)right_value318)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value318;
    __freed_obj__ = 0;
    __dec_obj154=self->mRight;
    self->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value319=sNode_clone(right))));
    if(__dec_obj154) { __dec_obj154 = come_decrement_ref_count(__dec_obj154, ((struct sNode*)__dec_obj154)->finalize, ((struct sNode*)__dec_obj154)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value319);
    if(right_value319 && right_value319 != __result_obj__ && !__freed_obj__) { right_value319 = come_decrement_ref_count(right_value319, ((struct sNode*)right_value319)->finalize, ((struct sNode*)right_value319)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value319;
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
void* right_value320;
char* __result222__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value320, 0, sizeof(void*));
    __result222__ = __result_obj__ = ((char*)(right_value320=__builtin_string("sCommaNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value320);
    if(right_value320 && right_value320 != __result_obj__ && !__freed_obj__) { right_value320 = come_decrement_ref_count(right_value320, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value320;
    __freed_obj__ = 0;
    return __result222__;
}

_Bool sCommaNode_compile(struct sCommaNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* left_node_224;
_Bool _if_conditional295;
_Bool __result223__;
void* right_value321;
struct CVALUE* left_value_225;
struct sNode* right_node_226;
_Bool _if_conditional296;
_Bool __result224__;
void* right_value322;
struct CVALUE* right_value_227;
void* right_value323;
struct CVALUE* come_value_228;
void* right_value324;
char* __dec_obj155;
void* right_value325;
struct sType* __dec_obj156;
_Bool __result225__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&left_node_224, 0, sizeof(struct sNode*));
memset(&right_value321, 0, sizeof(void*));
memset(&left_value_225, 0, sizeof(struct CVALUE*));
memset(&right_node_226, 0, sizeof(struct sNode*));
memset(&right_value322, 0, sizeof(void*));
memset(&right_value_227, 0, sizeof(struct CVALUE*));
memset(&right_value323, 0, sizeof(void*));
memset(&come_value_228, 0, sizeof(struct CVALUE*));
memset(&right_value324, 0, sizeof(void*));
memset(&right_value325, 0, sizeof(void*));
    left_node_224=self->mLeft;
    if(_if_conditional295=!node_compile(left_node_224,info),    _if_conditional295) {
        __result223__ = (_Bool)0;
        return __result223__;
    }
    left_value_225=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value321=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value321);
    if(right_value321 && right_value321 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value321, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value321;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    right_node_226=self->mRight;
    if(_if_conditional296=!node_compile(right_node_226,info),    _if_conditional296) {
        __result224__ = (_Bool)0;
        if(left_value_225 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,left_value_225, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result224__;
    }
    right_value_227=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value322=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value322);
    if(right_value322 && right_value322 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value322, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value322;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_228=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value323=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2082, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value323);
    if(right_value323 && right_value323 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value323, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value323;
    __freed_obj__ = 0;
    __dec_obj155=come_value_228->c_value;
    come_value_228->c_value=(char*)come_increment_ref_count(((char*)(right_value324=xsprintf("%s,%s",left_value_225->c_value,right_value_227->c_value))));
    if(__dec_obj155) { __dec_obj155 = come_decrement_ref_count(__dec_obj155, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value324);
    if(right_value324 && right_value324 != __result_obj__ && !__freed_obj__) { right_value324 = come_decrement_ref_count(right_value324, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value324;
    __freed_obj__ = 0;
    __dec_obj156=come_value_228->type;
    come_value_228->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value325=sType_clone(left_value_225->type))));
    if(__dec_obj156) { come_call_finalizer(sType_finalize,__dec_obj156, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value325);
    if(right_value325 && right_value325 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value325, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value325;
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
void* right_value326;
char* __result227__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value326, 0, sizeof(void*));
    __result227__ = __result_obj__ = ((char*)(right_value326=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value326);
    if(right_value326 && right_value326 != __result_obj__ && !__freed_obj__) { right_value326 = come_decrement_ref_count(right_value326, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value326;
    __freed_obj__ = 0;
    return __result227__;
}

struct sConditionalNode* sConditionalNode_initialize(struct sConditionalNode* self, struct sNode* value1, struct sNode* value2, struct sNode* value3, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value327;
char* __dec_obj157;
void* right_value328;
struct sNode* __dec_obj158;
void* right_value329;
struct sNode* __dec_obj159;
void* right_value330;
struct sNode* __dec_obj160;
struct sConditionalNode* __result228__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value327, 0, sizeof(void*));
memset(&right_value328, 0, sizeof(void*));
memset(&right_value329, 0, sizeof(void*));
memset(&right_value330, 0, sizeof(void*));
    self->sline=info->sline;
    __dec_obj157=self->sname;
    self->sname=(char*)come_increment_ref_count(((char*)(right_value327=__builtin_string(info->sname))));
    if(__dec_obj157) { __dec_obj157 = come_decrement_ref_count(__dec_obj157, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value327);
    if(right_value327 && right_value327 != __result_obj__ && !__freed_obj__) { right_value327 = come_decrement_ref_count(right_value327, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value327;
    __freed_obj__ = 0;
    __dec_obj158=self->mValue1;
    self->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value328=sNode_clone(value1))));
    if(__dec_obj158) { __dec_obj158 = come_decrement_ref_count(__dec_obj158, ((struct sNode*)__dec_obj158)->finalize, ((struct sNode*)__dec_obj158)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value328);
    if(right_value328 && right_value328 != __result_obj__ && !__freed_obj__) { right_value328 = come_decrement_ref_count(right_value328, ((struct sNode*)right_value328)->finalize, ((struct sNode*)right_value328)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value328;
    __freed_obj__ = 0;
    __dec_obj159=self->mValue2;
    self->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value329=sNode_clone(value2))));
    if(__dec_obj159) { __dec_obj159 = come_decrement_ref_count(__dec_obj159, ((struct sNode*)__dec_obj159)->finalize, ((struct sNode*)__dec_obj159)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value329);
    if(right_value329 && right_value329 != __result_obj__ && !__freed_obj__) { right_value329 = come_decrement_ref_count(right_value329, ((struct sNode*)right_value329)->finalize, ((struct sNode*)right_value329)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value329;
    __freed_obj__ = 0;
    __dec_obj160=self->mValue3;
    self->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value330=sNode_clone(value3))));
    if(__dec_obj160) { __dec_obj160 = come_decrement_ref_count(__dec_obj160, ((struct sNode*)__dec_obj160)->finalize, ((struct sNode*)__dec_obj160)->_protocol_obj, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value330);
    if(right_value330 && right_value330 != __result_obj__ && !__freed_obj__) { right_value330 = come_decrement_ref_count(right_value330, ((struct sNode*)right_value330)->finalize, ((struct sNode*)right_value330)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value330;
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
void* right_value331;
char* __result230__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value331, 0, sizeof(void*));
    __result230__ = __result_obj__ = ((char*)(right_value331=__builtin_string("sConditionalNode")));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value331);
    if(right_value331 && right_value331 != __result_obj__ && !__freed_obj__) { right_value331 = come_decrement_ref_count(right_value331, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value331;
    __freed_obj__ = 0;
    return __result230__;
}

_Bool sConditionalNode_compile(struct sConditionalNode* self, struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
struct sNode* value1_229;
_Bool _if_conditional301;
_Bool __result231__;
void* right_value332;
struct CVALUE* value1_value_230;
struct sNode* value2_231;
_Bool _if_conditional302;
_Bool __result232__;
void* right_value333;
struct CVALUE* value2_value_232;
struct sNode* value3_233;
_Bool _if_conditional303;
_Bool __result233__;
void* right_value334;
struct CVALUE* value3_value_234;
void* right_value335;
struct CVALUE* come_value_235;
void* right_value336;
char* __dec_obj161;
void* right_value337;
struct sType* __dec_obj162;
_Bool __result234__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&value1_229, 0, sizeof(struct sNode*));
memset(&right_value332, 0, sizeof(void*));
memset(&value1_value_230, 0, sizeof(struct CVALUE*));
memset(&value2_231, 0, sizeof(struct sNode*));
memset(&right_value333, 0, sizeof(void*));
memset(&value2_value_232, 0, sizeof(struct CVALUE*));
memset(&value3_233, 0, sizeof(struct sNode*));
memset(&right_value334, 0, sizeof(void*));
memset(&value3_value_234, 0, sizeof(struct CVALUE*));
memset(&right_value335, 0, sizeof(void*));
memset(&come_value_235, 0, sizeof(struct CVALUE*));
memset(&right_value336, 0, sizeof(void*));
memset(&right_value337, 0, sizeof(void*));
    value1_229=self->mValue1;
    if(_if_conditional301=!node_compile(value1_229,info),    _if_conditional301) {
        __result231__ = (_Bool)0;
        return __result231__;
    }
    value1_value_230=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value332=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value332);
    if(right_value332 && right_value332 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value332, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value332;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    value2_231=self->mValue2;
    if(_if_conditional302=!node_compile(value2_231,info),    _if_conditional302) {
        __result232__ = (_Bool)0;
        if(value1_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result232__;
    }
    value2_value_232=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value333=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value333);
    if(right_value333 && right_value333 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value333, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value333;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    value3_233=self->mValue3;
    if(_if_conditional303=!node_compile(value3_233,info),    _if_conditional303) {
        __result233__ = (_Bool)0;
        if(value1_value_230 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value1_value_230, (void*)0, (void*)0, 0, 0, 0, 0); }
        if(value2_value_232 && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,value2_value_232, (void*)0, (void*)0, 0, 0, 0, 0); }
        return __result233__;
    }
    value3_value_234=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value334=get_value_from_stack(-1,info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value334);
    if(right_value334 && right_value334 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value334, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value334;
    __freed_obj__ = 0;
    dec_stack_ptr(1,info);
    come_value_235=(struct CVALUE*)come_increment_ref_count(((struct CVALUE*)(right_value335=(struct CVALUE*)come_calloc(1, sizeof(struct CVALUE)*(1), "13op.c", 2168, "struct CVALUE"))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value335);
    if(right_value335 && right_value335 != __result_obj__ && !__freed_obj__) { come_call_finalizer(CVALUE_finalize,right_value335, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value335;
    __freed_obj__ = 0;
    __dec_obj161=come_value_235->c_value;
    come_value_235->c_value=(char*)come_increment_ref_count(((char*)(right_value336=xsprintf("%s?%s:%s",value1_value_230->c_value,value2_value_232->c_value,value3_value_234->c_value))));
    if(__dec_obj161) { __dec_obj161 = come_decrement_ref_count(__dec_obj161, (void*)0, (void*)0, 0,0,0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value336);
    if(right_value336 && right_value336 != __result_obj__ && !__freed_obj__) { right_value336 = come_decrement_ref_count(right_value336, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value336;
    __freed_obj__ = 0;
    __dec_obj162=come_value_235->type;
    come_value_235->type=(struct sType*)come_increment_ref_count(((struct sType*)(right_value337=sType_clone(value1_value_230->type))));
    if(__dec_obj162) { come_call_finalizer(sType_finalize,__dec_obj162, (void*)0, (void*)0, 0, 0, 0, 0); }
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value337);
    if(right_value337 && right_value337 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sType_finalize,right_value337, (void*)0, (void*)0, 0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value337;
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
void* right_value338;
char* __result236__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value338, 0, sizeof(void*));
    __result236__ = __result_obj__ = ((char*)(right_value338=__builtin_string(self->sname)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value338);
    if(right_value338 && right_value338 != __result_obj__ && !__freed_obj__) { right_value338 = come_decrement_ref_count(right_value338, (void*)0, (void*)0, 1, 0, 0); }
    __right_value_freed_obj[0] = right_value338;
    __freed_obj__ = 0;
    return __result236__;
}

struct sNode* mult_exp(struct sInfo* info){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
void* right_value339;
struct sNode* node_236;
_Bool _while_condtional10;
_Bool _if_conditional304;
void* right_value340;
struct sNode* right_237;
void* right_value341;
void* right_value342;
struct sNode* _inf_value3;
struct sMultNode* _inf_obj_value3;
void* right_value347;
struct sNode* __result239__;
_Bool _if_conditional314;
void* right_value348;
struct sNode* right_239;
void* right_value349;
void* right_value350;
struct sNode* _inf_value4;
struct sDivNode* _inf_obj_value4;
void* right_value355;
struct sNode* __result242__;
_Bool _if_conditional324;
void* right_value356;
struct sNode* right_241;
void* right_value357;
void* right_value358;
struct sNode* _inf_value5;
struct sModNode* _inf_obj_value5;
void* right_value363;
struct sNode* __result245__;
_Bool _if_conditional334;
void* right_value364;
struct sNode* right_243;
void* right_value365;
void* right_value366;
struct sNode* _inf_value6;
struct sMultNode* _inf_obj_value6;
void* right_value371;
struct sNode* __result248__;
_Bool _if_conditional344;
void* right_value372;
struct sNode* right_245;
void* right_value373;
void* right_value374;
struct sNode* _inf_value7;
struct sDivNode* _inf_obj_value7;
void* right_value379;
struct sNode* __result251__;
_Bool _if_conditional354;
void* right_value380;
struct sNode* right_247;
void* right_value381;
void* right_value382;
struct sNode* _inf_value8;
struct sModNode* _inf_obj_value8;
void* right_value387;
struct sNode* __result254__;
struct sNode* __result255__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value339, 0, sizeof(void*));
memset(&node_236, 0, sizeof(struct sNode*));
memset(&right_value340, 0, sizeof(void*));
memset(&right_237, 0, sizeof(struct sNode*));
memset(&right_value341, 0, sizeof(void*));
memset(&right_value342, 0, sizeof(void*));
memset(&right_value347, 0, sizeof(void*));
memset(&right_value348, 0, sizeof(void*));
memset(&right_239, 0, sizeof(struct sNode*));
memset(&right_value349, 0, sizeof(void*));
memset(&right_value350, 0, sizeof(void*));
memset(&right_value355, 0, sizeof(void*));
memset(&right_value356, 0, sizeof(void*));
memset(&right_241, 0, sizeof(struct sNode*));
memset(&right_value357, 0, sizeof(void*));
memset(&right_value358, 0, sizeof(void*));
memset(&right_value363, 0, sizeof(void*));
memset(&right_value364, 0, sizeof(void*));
memset(&right_243, 0, sizeof(struct sNode*));
memset(&right_value365, 0, sizeof(void*));
memset(&right_value366, 0, sizeof(void*));
memset(&right_value371, 0, sizeof(void*));
memset(&right_value372, 0, sizeof(void*));
memset(&right_245, 0, sizeof(struct sNode*));
memset(&right_value373, 0, sizeof(void*));
memset(&right_value374, 0, sizeof(void*));
memset(&right_value379, 0, sizeof(void*));
memset(&right_value380, 0, sizeof(void*));
memset(&right_247, 0, sizeof(struct sNode*));
memset(&right_value381, 0, sizeof(void*));
memset(&right_value382, 0, sizeof(void*));
memset(&right_value387, 0, sizeof(void*));
    node_236=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value339=expression_node_v99(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value339);
    if(right_value339 && right_value339 != __result_obj__ && !__freed_obj__) { right_value339 = come_decrement_ref_count(right_value339, ((struct sNode*)right_value339)->finalize, ((struct sNode*)right_value339)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value339;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional10=*info->p,    _while_condtional10) {
        if(_if_conditional304=!node_236->terminated(node_236->_protocol_obj)&&*info->p==42&&*(info->p+1)!=61,        _if_conditional304) {
            info->p++;
            skip_spaces_and_lf(info);
            right_237=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value340=mult_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value340);
            if(right_value340 && right_value340 != __result_obj__ && !__freed_obj__) { right_value340 = come_decrement_ref_count(right_value340, ((struct sNode*)right_value340)->finalize, ((struct sNode*)right_value340)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value340;
            __freed_obj__ = 0;
            _inf_value3=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2204, "struct sNode");
            _inf_obj_value3=come_increment_ref_count(((struct sMultNode*)(right_value342=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value341=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2204, "struct sMultNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_237),(_Bool)0,info))));
            _inf_value3->_protocol_obj=_inf_obj_value3;
            _inf_value3->finalize=(void*)sMultNode_finalize;
            _inf_value3->clone=(void*)sMultNode_clone;
            _inf_value3->compile=(void*)sMultNode_compile;
            _inf_value3->sline=(void*)sMultNode_sline;
            _inf_value3->sname=(void*)sMultNode_sname;
            _inf_value3->terminated=(void*)sMultNode_terminated;
            _inf_value3->kind=(void*)sMultNode_kind;
            __result239__ = __result_obj__ = ((struct sNode*)(right_value347=_inf_value3));
            if(right_237 && !__freed_obj__) { right_237 = come_decrement_ref_count(right_237, ((struct sNode*)right_237)->finalize, ((struct sNode*)right_237)->_protocol_obj, 0, 0, 0); } 
            if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value341);
            if(right_value341 && right_value341 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value341, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value341;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value342);
            if(right_value342 && right_value342 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value342, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value342;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value347);
            if(right_value347 && right_value347 != __result_obj__ && !__freed_obj__) { right_value347 = come_decrement_ref_count(right_value347, ((struct sNode*)right_value347)->finalize, ((struct sNode*)right_value347)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value347;
            __freed_obj__ = 0;
            return __result239__;
            if(right_237 && !__freed_obj__) { right_237 = come_decrement_ref_count(right_237, ((struct sNode*)right_237)->finalize, ((struct sNode*)right_237)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional314=*info->p==47&&*(info->p+1)!=61,            _if_conditional314) {
                info->p++;
                skip_spaces_and_lf(info);
                right_239=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value348=mult_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value348);
                if(right_value348 && right_value348 != __result_obj__ && !__freed_obj__) { right_value348 = come_decrement_ref_count(right_value348, ((struct sNode*)right_value348)->finalize, ((struct sNode*)right_value348)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value348;
                __freed_obj__ = 0;
                _inf_value4=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2212, "struct sNode");
                _inf_obj_value4=come_increment_ref_count(((struct sDivNode*)(right_value350=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value349=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2212, "struct sDivNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_239),(_Bool)0,info))));
                _inf_value4->_protocol_obj=_inf_obj_value4;
                _inf_value4->finalize=(void*)sDivNode_finalize;
                _inf_value4->clone=(void*)sDivNode_clone;
                _inf_value4->compile=(void*)sDivNode_compile;
                _inf_value4->sline=(void*)sDivNode_sline;
                _inf_value4->sname=(void*)sDivNode_sname;
                _inf_value4->terminated=(void*)sDivNode_terminated;
                _inf_value4->kind=(void*)sDivNode_kind;
                __result242__ = __result_obj__ = ((struct sNode*)(right_value355=_inf_value4));
                if(right_239 && !__freed_obj__) { right_239 = come_decrement_ref_count(right_239, ((struct sNode*)right_239)->finalize, ((struct sNode*)right_239)->_protocol_obj, 0, 0, 0); } 
                if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value349);
                if(right_value349 && right_value349 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value349, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value349;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value350);
                if(right_value350 && right_value350 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value350, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value350;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value355);
                if(right_value355 && right_value355 != __result_obj__ && !__freed_obj__) { right_value355 = come_decrement_ref_count(right_value355, ((struct sNode*)right_value355)->finalize, ((struct sNode*)right_value355)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value355;
                __freed_obj__ = 0;
                return __result242__;
                if(right_239 && !__freed_obj__) { right_239 = come_decrement_ref_count(right_239, ((struct sNode*)right_239)->finalize, ((struct sNode*)right_239)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional324=*info->p==37&&*(info->p+1)!=61,                _if_conditional324) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_241=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value356=expression_node_v99(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value356);
                    if(right_value356 && right_value356 != __result_obj__ && !__freed_obj__) { right_value356 = come_decrement_ref_count(right_value356, ((struct sNode*)right_value356)->finalize, ((struct sNode*)right_value356)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value356;
                    __freed_obj__ = 0;
                    _inf_value5=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2220, "struct sNode");
                    _inf_obj_value5=come_increment_ref_count(((struct sModNode*)(right_value358=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value357=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2220, "struct sModNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_241),(_Bool)0,info))));
                    _inf_value5->_protocol_obj=_inf_obj_value5;
                    _inf_value5->finalize=(void*)sModNode_finalize;
                    _inf_value5->clone=(void*)sModNode_clone;
                    _inf_value5->compile=(void*)sModNode_compile;
                    _inf_value5->sline=(void*)sModNode_sline;
                    _inf_value5->sname=(void*)sModNode_sname;
                    _inf_value5->terminated=(void*)sModNode_terminated;
                    _inf_value5->kind=(void*)sModNode_kind;
                    __result245__ = __result_obj__ = ((struct sNode*)(right_value363=_inf_value5));
                    if(right_241 && !__freed_obj__) { right_241 = come_decrement_ref_count(right_241, ((struct sNode*)right_241)->finalize, ((struct sNode*)right_241)->_protocol_obj, 0, 0, 0); } 
                    if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value357);
                    if(right_value357 && right_value357 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value357, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value357;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value358);
                    if(right_value358 && right_value358 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value358, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value358;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value363);
                    if(right_value363 && right_value363 != __result_obj__ && !__freed_obj__) { right_value363 = come_decrement_ref_count(right_value363, ((struct sNode*)right_value363)->finalize, ((struct sNode*)right_value363)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value363;
                    __freed_obj__ = 0;
                    return __result245__;
                    if(right_241 && !__freed_obj__) { right_241 = come_decrement_ref_count(right_241, ((struct sNode*)right_241)->finalize, ((struct sNode*)right_241)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional334=!node_236->terminated(node_236->_protocol_obj)&&*info->p==92&&*(info->p+1)==42&&*(info->p+2)!=61,                    _if_conditional334) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_243=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value364=mult_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value364);
                        if(right_value364 && right_value364 != __result_obj__ && !__freed_obj__) { right_value364 = come_decrement_ref_count(right_value364, ((struct sNode*)right_value364)->finalize, ((struct sNode*)right_value364)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value364;
                        __freed_obj__ = 0;
                        _inf_value6=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2228, "struct sNode");
                        _inf_obj_value6=come_increment_ref_count(((struct sMultNode*)(right_value366=sMultNode_initialize((struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value365=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "13op.c", 2228, "struct sMultNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_243),(_Bool)1,info))));
                        _inf_value6->_protocol_obj=_inf_obj_value6;
                        _inf_value6->finalize=(void*)sMultNode_finalize;
                        _inf_value6->clone=(void*)sMultNode_clone;
                        _inf_value6->compile=(void*)sMultNode_compile;
                        _inf_value6->sline=(void*)sMultNode_sline;
                        _inf_value6->sname=(void*)sMultNode_sname;
                        _inf_value6->terminated=(void*)sMultNode_terminated;
                        _inf_value6->kind=(void*)sMultNode_kind;
                        __result248__ = __result_obj__ = ((struct sNode*)(right_value371=_inf_value6));
                        if(right_243 && !__freed_obj__) { right_243 = come_decrement_ref_count(right_243, ((struct sNode*)right_243)->finalize, ((struct sNode*)right_243)->_protocol_obj, 0, 0, 0); } 
                        if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value365);
                        if(right_value365 && right_value365 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value365, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value365;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value366);
                        if(right_value366 && right_value366 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value366, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value366;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value371);
                        if(right_value371 && right_value371 != __result_obj__ && !__freed_obj__) { right_value371 = come_decrement_ref_count(right_value371, ((struct sNode*)right_value371)->finalize, ((struct sNode*)right_value371)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value371;
                        __freed_obj__ = 0;
                        return __result248__;
                        if(right_243 && !__freed_obj__) { right_243 = come_decrement_ref_count(right_243, ((struct sNode*)right_243)->finalize, ((struct sNode*)right_243)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional344=*info->p==92&&*(info->p+1)==47&&*(info->p+2)!=61,                        _if_conditional344) {
                            info->p+=2;
                            skip_spaces_and_lf(info);
                            right_245=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value372=mult_exp(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value372);
                            if(right_value372 && right_value372 != __result_obj__ && !__freed_obj__) { right_value372 = come_decrement_ref_count(right_value372, ((struct sNode*)right_value372)->finalize, ((struct sNode*)right_value372)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value372;
                            __freed_obj__ = 0;
                            _inf_value7=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2236, "struct sNode");
                            _inf_obj_value7=come_increment_ref_count(((struct sDivNode*)(right_value374=sDivNode_initialize((struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value373=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "13op.c", 2236, "struct sDivNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_245),(_Bool)1,info))));
                            _inf_value7->_protocol_obj=_inf_obj_value7;
                            _inf_value7->finalize=(void*)sDivNode_finalize;
                            _inf_value7->clone=(void*)sDivNode_clone;
                            _inf_value7->compile=(void*)sDivNode_compile;
                            _inf_value7->sline=(void*)sDivNode_sline;
                            _inf_value7->sname=(void*)sDivNode_sname;
                            _inf_value7->terminated=(void*)sDivNode_terminated;
                            _inf_value7->kind=(void*)sDivNode_kind;
                            __result251__ = __result_obj__ = ((struct sNode*)(right_value379=_inf_value7));
                            if(right_245 && !__freed_obj__) { right_245 = come_decrement_ref_count(right_245, ((struct sNode*)right_245)->finalize, ((struct sNode*)right_245)->_protocol_obj, 0, 0, 0); } 
                            if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value373);
                            if(right_value373 && right_value373 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value373, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value373;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value374);
                            if(right_value374 && right_value374 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value374, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value374;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value379);
                            if(right_value379 && right_value379 != __result_obj__ && !__freed_obj__) { right_value379 = come_decrement_ref_count(right_value379, ((struct sNode*)right_value379)->finalize, ((struct sNode*)right_value379)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value379;
                            __freed_obj__ = 0;
                            return __result251__;
                            if(right_245 && !__freed_obj__) { right_245 = come_decrement_ref_count(right_245, ((struct sNode*)right_245)->finalize, ((struct sNode*)right_245)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional354=*info->p==92&&*(info->p+1)==37&&*(info->p+2)!=61,                            _if_conditional354) {
                                info->p+=2;
                                skip_spaces_and_lf(info);
                                right_247=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value380=expression_node_v99(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value380);
                                if(right_value380 && right_value380 != __result_obj__ && !__freed_obj__) { right_value380 = come_decrement_ref_count(right_value380, ((struct sNode*)right_value380)->finalize, ((struct sNode*)right_value380)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value380;
                                __freed_obj__ = 0;
                                _inf_value8=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2244, "struct sNode");
                                _inf_obj_value8=come_increment_ref_count(((struct sModNode*)(right_value382=sModNode_initialize((struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value381=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "13op.c", 2244, "struct sModNode")))),(struct sNode*)come_increment_ref_count(node_236),(struct sNode*)come_increment_ref_count(right_247),(_Bool)1,info))));
                                _inf_value8->_protocol_obj=_inf_obj_value8;
                                _inf_value8->finalize=(void*)sModNode_finalize;
                                _inf_value8->clone=(void*)sModNode_clone;
                                _inf_value8->compile=(void*)sModNode_compile;
                                _inf_value8->sline=(void*)sModNode_sline;
                                _inf_value8->sname=(void*)sModNode_sname;
                                _inf_value8->terminated=(void*)sModNode_terminated;
                                _inf_value8->kind=(void*)sModNode_kind;
                                __result254__ = __result_obj__ = ((struct sNode*)(right_value387=_inf_value8));
                                if(right_247 && !__freed_obj__) { right_247 = come_decrement_ref_count(right_247, ((struct sNode*)right_247)->finalize, ((struct sNode*)right_247)->_protocol_obj, 0, 0, 0); } 
                                if(node_236 && !__freed_obj__) { node_236 = come_decrement_ref_count(node_236, ((struct sNode*)node_236)->finalize, ((struct sNode*)node_236)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value381);
                                if(right_value381 && right_value381 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value381, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value381;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value382);
                                if(right_value382 && right_value382 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value382, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value382;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value387);
                                if(right_value387 && right_value387 != __result_obj__ && !__freed_obj__) { right_value387 = come_decrement_ref_count(right_value387, ((struct sNode*)right_value387)->finalize, ((struct sNode*)right_value387)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value387;
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
_Bool _if_conditional335;
_Bool _if_conditional336;
_Bool _if_conditional337;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional335=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional335) {
                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional336=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional336) {
                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional337=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional337) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sMultNode* sMultNode_clone(struct sMultNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional338;
struct sMultNode* __result246__;
void* right_value367;
struct sMultNode* result_244;
_Bool _if_conditional339;
void* right_value368;
struct sNode* __dec_obj172;
_Bool _if_conditional340;
void* right_value369;
struct sNode* __dec_obj173;
_Bool _if_conditional341;
_Bool _if_conditional342;
_Bool _if_conditional343;
void* right_value370;
char* __dec_obj174;
struct sMultNode* __result247__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value367, 0, sizeof(void*));
memset(&result_244, 0, sizeof(struct sMultNode*));
memset(&right_value368, 0, sizeof(void*));
memset(&right_value369, 0, sizeof(void*));
memset(&right_value370, 0, sizeof(void*));
                            if(_if_conditional338=self==(void*)0,                            _if_conditional338) {
                                __result246__ = __result_obj__ = (void*)0;
                                return __result246__;
                            }
                            result_244=(struct sMultNode*)come_increment_ref_count(((struct sMultNode*)(right_value367=(struct sMultNode*)come_calloc(1, sizeof(struct sMultNode)*(1), "sMultNode_clone", 3, "struct sMultNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value367);
                            if(right_value367 && right_value367 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sMultNode_finalize,right_value367, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value367;
                            __freed_obj__ = 0;
                            if(_if_conditional339=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional339) {
                                __dec_obj172=result_244->mLeft;
                                result_244->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value368=sNode_clone(self->mLeft))));
                                if(__dec_obj172) { __dec_obj172 = come_decrement_ref_count(__dec_obj172, ((struct sNode*)__dec_obj172)->finalize, ((struct sNode*)__dec_obj172)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value368);
                                if(right_value368 && right_value368 != __result_obj__ && !__freed_obj__) { right_value368 = come_decrement_ref_count(right_value368, ((struct sNode*)right_value368)->finalize, ((struct sNode*)right_value368)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value368;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional340=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional340) {
                                __dec_obj173=result_244->mRight;
                                result_244->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value369=sNode_clone(self->mRight))));
                                if(__dec_obj173) { __dec_obj173 = come_decrement_ref_count(__dec_obj173, ((struct sNode*)__dec_obj173)->finalize, ((struct sNode*)__dec_obj173)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value369);
                                if(right_value369 && right_value369 != __result_obj__ && !__freed_obj__) { right_value369 = come_decrement_ref_count(right_value369, ((struct sNode*)right_value369)->finalize, ((struct sNode*)right_value369)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value369;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional341=self!=((void*)0),                            _if_conditional341) {
                                result_244->mQuote=self->mQuote;
                            }
                            if(_if_conditional342=self!=((void*)0),                            _if_conditional342) {
                                result_244->sline=self->sline;
                            }
                            if(_if_conditional343=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional343) {
                                __dec_obj174=result_244->sname;
                                result_244->sname=(char*)come_increment_ref_count(((char*)(right_value370=string_clone(self->sname))));
                                if(__dec_obj174) { __dec_obj174 = come_decrement_ref_count(__dec_obj174, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value370);
                                if(right_value370 && right_value370 != __result_obj__ && !__freed_obj__) { right_value370 = come_decrement_ref_count(right_value370, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value370;
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
_Bool _if_conditional345;
_Bool _if_conditional346;
_Bool _if_conditional347;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional345=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional345) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional346=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional346) {
                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional347=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional347) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sDivNode* sDivNode_clone(struct sDivNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional348;
struct sDivNode* __result249__;
void* right_value375;
struct sDivNode* result_246;
_Bool _if_conditional349;
void* right_value376;
struct sNode* __dec_obj175;
_Bool _if_conditional350;
void* right_value377;
struct sNode* __dec_obj176;
_Bool _if_conditional351;
_Bool _if_conditional352;
_Bool _if_conditional353;
void* right_value378;
char* __dec_obj177;
struct sDivNode* __result250__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value375, 0, sizeof(void*));
memset(&result_246, 0, sizeof(struct sDivNode*));
memset(&right_value376, 0, sizeof(void*));
memset(&right_value377, 0, sizeof(void*));
memset(&right_value378, 0, sizeof(void*));
                                if(_if_conditional348=self==(void*)0,                                _if_conditional348) {
                                    __result249__ = __result_obj__ = (void*)0;
                                    return __result249__;
                                }
                                result_246=(struct sDivNode*)come_increment_ref_count(((struct sDivNode*)(right_value375=(struct sDivNode*)come_calloc(1, sizeof(struct sDivNode)*(1), "sDivNode_clone", 3, "struct sDivNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value375);
                                if(right_value375 && right_value375 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sDivNode_finalize,right_value375, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value375;
                                __freed_obj__ = 0;
                                if(_if_conditional349=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional349) {
                                    __dec_obj175=result_246->mLeft;
                                    result_246->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value376=sNode_clone(self->mLeft))));
                                    if(__dec_obj175) { __dec_obj175 = come_decrement_ref_count(__dec_obj175, ((struct sNode*)__dec_obj175)->finalize, ((struct sNode*)__dec_obj175)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value376);
                                    if(right_value376 && right_value376 != __result_obj__ && !__freed_obj__) { right_value376 = come_decrement_ref_count(right_value376, ((struct sNode*)right_value376)->finalize, ((struct sNode*)right_value376)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value376;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional350=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional350) {
                                    __dec_obj176=result_246->mRight;
                                    result_246->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value377=sNode_clone(self->mRight))));
                                    if(__dec_obj176) { __dec_obj176 = come_decrement_ref_count(__dec_obj176, ((struct sNode*)__dec_obj176)->finalize, ((struct sNode*)__dec_obj176)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value377);
                                    if(right_value377 && right_value377 != __result_obj__ && !__freed_obj__) { right_value377 = come_decrement_ref_count(right_value377, ((struct sNode*)right_value377)->finalize, ((struct sNode*)right_value377)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value377;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional351=self!=((void*)0),                                _if_conditional351) {
                                    result_246->mQuote=self->mQuote;
                                }
                                if(_if_conditional352=self!=((void*)0),                                _if_conditional352) {
                                    result_246->sline=self->sline;
                                }
                                if(_if_conditional353=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional353) {
                                    __dec_obj177=result_246->sname;
                                    result_246->sname=(char*)come_increment_ref_count(((char*)(right_value378=string_clone(self->sname))));
                                    if(__dec_obj177) { __dec_obj177 = come_decrement_ref_count(__dec_obj177, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value378);
                                    if(right_value378 && right_value378 != __result_obj__ && !__freed_obj__) { right_value378 = come_decrement_ref_count(right_value378, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value378;
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
_Bool _if_conditional355;
_Bool _if_conditional356;
_Bool _if_conditional357;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional355=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional355) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional356=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional356) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional357=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional357) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sModNode* sModNode_clone(struct sModNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional358;
struct sModNode* __result252__;
void* right_value383;
struct sModNode* result_248;
_Bool _if_conditional359;
void* right_value384;
struct sNode* __dec_obj178;
_Bool _if_conditional360;
void* right_value385;
struct sNode* __dec_obj179;
_Bool _if_conditional361;
_Bool _if_conditional362;
_Bool _if_conditional363;
void* right_value386;
char* __dec_obj180;
struct sModNode* __result253__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value383, 0, sizeof(void*));
memset(&result_248, 0, sizeof(struct sModNode*));
memset(&right_value384, 0, sizeof(void*));
memset(&right_value385, 0, sizeof(void*));
memset(&right_value386, 0, sizeof(void*));
                                    if(_if_conditional358=self==(void*)0,                                    _if_conditional358) {
                                        __result252__ = __result_obj__ = (void*)0;
                                        return __result252__;
                                    }
                                    result_248=(struct sModNode*)come_increment_ref_count(((struct sModNode*)(right_value383=(struct sModNode*)come_calloc(1, sizeof(struct sModNode)*(1), "sModNode_clone", 3, "struct sModNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value383);
                                    if(right_value383 && right_value383 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sModNode_finalize,right_value383, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value383;
                                    __freed_obj__ = 0;
                                    if(_if_conditional359=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional359) {
                                        __dec_obj178=result_248->mLeft;
                                        result_248->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value384=sNode_clone(self->mLeft))));
                                        if(__dec_obj178) { __dec_obj178 = come_decrement_ref_count(__dec_obj178, ((struct sNode*)__dec_obj178)->finalize, ((struct sNode*)__dec_obj178)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value384);
                                        if(right_value384 && right_value384 != __result_obj__ && !__freed_obj__) { right_value384 = come_decrement_ref_count(right_value384, ((struct sNode*)right_value384)->finalize, ((struct sNode*)right_value384)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value384;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional360=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional360) {
                                        __dec_obj179=result_248->mRight;
                                        result_248->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value385=sNode_clone(self->mRight))));
                                        if(__dec_obj179) { __dec_obj179 = come_decrement_ref_count(__dec_obj179, ((struct sNode*)__dec_obj179)->finalize, ((struct sNode*)__dec_obj179)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value385);
                                        if(right_value385 && right_value385 != __result_obj__ && !__freed_obj__) { right_value385 = come_decrement_ref_count(right_value385, ((struct sNode*)right_value385)->finalize, ((struct sNode*)right_value385)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value385;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional361=self!=((void*)0),                                    _if_conditional361) {
                                        result_248->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional362=self!=((void*)0),                                    _if_conditional362) {
                                        result_248->sline=self->sline;
                                    }
                                    if(_if_conditional363=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional363) {
                                        __dec_obj180=result_248->sname;
                                        result_248->sname=(char*)come_increment_ref_count(((char*)(right_value386=string_clone(self->sname))));
                                        if(__dec_obj180) { __dec_obj180 = come_decrement_ref_count(__dec_obj180, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value386);
                                        if(right_value386 && right_value386 != __result_obj__ && !__freed_obj__) { right_value386 = come_decrement_ref_count(right_value386, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value386;
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
void* right_value388;
struct sNode* node_249;
_Bool _while_condtional11;
_Bool _if_conditional364;
void* right_value389;
struct sNode* right_250;
void* right_value390;
void* right_value391;
struct sNode* _inf_value9;
struct sAddNode* _inf_obj_value9;
void* right_value396;
struct sNode* __result258__;
_Bool _if_conditional374;
void* right_value397;
struct sNode* right_252;
void* right_value398;
void* right_value399;
struct sNode* _inf_value10;
struct sSubNode* _inf_obj_value10;
void* right_value404;
struct sNode* __result261__;
_Bool _if_conditional384;
void* right_value405;
struct sNode* right_254;
void* right_value406;
void* right_value407;
struct sNode* _inf_value11;
struct sAddNode* _inf_obj_value11;
void* right_value412;
struct sNode* __result264__;
_Bool _if_conditional394;
void* right_value413;
struct sNode* right_256;
void* right_value414;
void* right_value415;
struct sNode* _inf_value12;
struct sSubNode* _inf_obj_value12;
void* right_value420;
struct sNode* __result267__;
struct sNode* __result268__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value388, 0, sizeof(void*));
memset(&node_249, 0, sizeof(struct sNode*));
memset(&right_value389, 0, sizeof(void*));
memset(&right_250, 0, sizeof(struct sNode*));
memset(&right_value390, 0, sizeof(void*));
memset(&right_value391, 0, sizeof(void*));
memset(&right_value396, 0, sizeof(void*));
memset(&right_value397, 0, sizeof(void*));
memset(&right_252, 0, sizeof(struct sNode*));
memset(&right_value398, 0, sizeof(void*));
memset(&right_value399, 0, sizeof(void*));
memset(&right_value404, 0, sizeof(void*));
memset(&right_value405, 0, sizeof(void*));
memset(&right_254, 0, sizeof(struct sNode*));
memset(&right_value406, 0, sizeof(void*));
memset(&right_value407, 0, sizeof(void*));
memset(&right_value412, 0, sizeof(void*));
memset(&right_value413, 0, sizeof(void*));
memset(&right_256, 0, sizeof(struct sNode*));
memset(&right_value414, 0, sizeof(void*));
memset(&right_value415, 0, sizeof(void*));
memset(&right_value420, 0, sizeof(void*));
    node_249=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value388=mult_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value388);
    if(right_value388 && right_value388 != __result_obj__ && !__freed_obj__) { right_value388 = come_decrement_ref_count(right_value388, ((struct sNode*)right_value388)->finalize, ((struct sNode*)right_value388)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value388;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional11=*info->p,    _while_condtional11) {
        if(_if_conditional364=*info->p==43&&*(info->p+1)!=61&&*(info->p+1)!=43,        _if_conditional364) {
            info->p++;
            skip_spaces_and_lf(info);
            right_250=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value389=add_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value389);
            if(right_value389 && right_value389 != __result_obj__ && !__freed_obj__) { right_value389 = come_decrement_ref_count(right_value389, ((struct sNode*)right_value389)->finalize, ((struct sNode*)right_value389)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value389;
            __freed_obj__ = 0;
            _inf_value9=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2270, "struct sNode");
            _inf_obj_value9=come_increment_ref_count(((struct sAddNode*)(right_value391=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value390=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2270, "struct sAddNode")))),(struct sNode*)come_increment_ref_count(node_249),(struct sNode*)come_increment_ref_count(right_250),(_Bool)0,info))));
            _inf_value9->_protocol_obj=_inf_obj_value9;
            _inf_value9->finalize=(void*)sAddNode_finalize;
            _inf_value9->clone=(void*)sAddNode_clone;
            _inf_value9->compile=(void*)sAddNode_compile;
            _inf_value9->sline=(void*)sAddNode_sline;
            _inf_value9->sname=(void*)sAddNode_sname;
            _inf_value9->terminated=(void*)sAddNode_terminated;
            _inf_value9->kind=(void*)sAddNode_kind;
            __result258__ = __result_obj__ = ((struct sNode*)(right_value396=_inf_value9));
            if(right_250 && !__freed_obj__) { right_250 = come_decrement_ref_count(right_250, ((struct sNode*)right_250)->finalize, ((struct sNode*)right_250)->_protocol_obj, 0, 0, 0); } 
            if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value390);
            if(right_value390 && right_value390 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value390, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value390;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value391);
            if(right_value391 && right_value391 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value391, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value391;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value396);
            if(right_value396 && right_value396 != __result_obj__ && !__freed_obj__) { right_value396 = come_decrement_ref_count(right_value396, ((struct sNode*)right_value396)->finalize, ((struct sNode*)right_value396)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value396;
            __freed_obj__ = 0;
            return __result258__;
            if(right_250 && !__freed_obj__) { right_250 = come_decrement_ref_count(right_250, ((struct sNode*)right_250)->finalize, ((struct sNode*)right_250)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional374=*info->p==45&&*(info->p+1)!=61&&*(info->p+1)!=45&&*(info->p+1)!=62,            _if_conditional374) {
                info->p++;
                skip_spaces_and_lf(info);
                right_252=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value397=add_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value397);
                if(right_value397 && right_value397 != __result_obj__ && !__freed_obj__) { right_value397 = come_decrement_ref_count(right_value397, ((struct sNode*)right_value397)->finalize, ((struct sNode*)right_value397)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value397;
                __freed_obj__ = 0;
                _inf_value10=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2279, "struct sNode");
                _inf_obj_value10=come_increment_ref_count(((struct sSubNode*)(right_value399=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value398=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2279, "struct sSubNode")))),(struct sNode*)come_increment_ref_count(node_249),(struct sNode*)come_increment_ref_count(right_252),(_Bool)0,info))));
                _inf_value10->_protocol_obj=_inf_obj_value10;
                _inf_value10->finalize=(void*)sSubNode_finalize;
                _inf_value10->clone=(void*)sSubNode_clone;
                _inf_value10->compile=(void*)sSubNode_compile;
                _inf_value10->sline=(void*)sSubNode_sline;
                _inf_value10->sname=(void*)sSubNode_sname;
                _inf_value10->terminated=(void*)sSubNode_terminated;
                _inf_value10->kind=(void*)sSubNode_kind;
                __result261__ = __result_obj__ = ((struct sNode*)(right_value404=_inf_value10));
                if(right_252 && !__freed_obj__) { right_252 = come_decrement_ref_count(right_252, ((struct sNode*)right_252)->finalize, ((struct sNode*)right_252)->_protocol_obj, 0, 0, 0); } 
                if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value398);
                if(right_value398 && right_value398 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value398, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value398;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value399);
                if(right_value399 && right_value399 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value399, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value399;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value404);
                if(right_value404 && right_value404 != __result_obj__ && !__freed_obj__) { right_value404 = come_decrement_ref_count(right_value404, ((struct sNode*)right_value404)->finalize, ((struct sNode*)right_value404)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value404;
                __freed_obj__ = 0;
                return __result261__;
                if(right_252 && !__freed_obj__) { right_252 = come_decrement_ref_count(right_252, ((struct sNode*)right_252)->finalize, ((struct sNode*)right_252)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional384=*info->p==92&&*(info->p+1)==43&&*(info->p+2)!=61&&*(info->p+2)!=43,                _if_conditional384) {
                    info->p+=2;
                    skip_spaces_and_lf(info);
                    right_254=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value405=add_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value405);
                    if(right_value405 && right_value405 != __result_obj__ && !__freed_obj__) { right_value405 = come_decrement_ref_count(right_value405, ((struct sNode*)right_value405)->finalize, ((struct sNode*)right_value405)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value405;
                    __freed_obj__ = 0;
                    _inf_value11=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2288, "struct sNode");
                    _inf_obj_value11=come_increment_ref_count(((struct sAddNode*)(right_value407=sAddNode_initialize((struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value406=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "13op.c", 2288, "struct sAddNode")))),(struct sNode*)come_increment_ref_count(node_249),(struct sNode*)come_increment_ref_count(right_254),(_Bool)1,info))));
                    _inf_value11->_protocol_obj=_inf_obj_value11;
                    _inf_value11->finalize=(void*)sAddNode_finalize;
                    _inf_value11->clone=(void*)sAddNode_clone;
                    _inf_value11->compile=(void*)sAddNode_compile;
                    _inf_value11->sline=(void*)sAddNode_sline;
                    _inf_value11->sname=(void*)sAddNode_sname;
                    _inf_value11->terminated=(void*)sAddNode_terminated;
                    _inf_value11->kind=(void*)sAddNode_kind;
                    __result264__ = __result_obj__ = ((struct sNode*)(right_value412=_inf_value11));
                    if(right_254 && !__freed_obj__) { right_254 = come_decrement_ref_count(right_254, ((struct sNode*)right_254)->finalize, ((struct sNode*)right_254)->_protocol_obj, 0, 0, 0); } 
                    if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value406);
                    if(right_value406 && right_value406 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value406, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value406;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value407);
                    if(right_value407 && right_value407 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value407, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value407;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value412);
                    if(right_value412 && right_value412 != __result_obj__ && !__freed_obj__) { right_value412 = come_decrement_ref_count(right_value412, ((struct sNode*)right_value412)->finalize, ((struct sNode*)right_value412)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value412;
                    __freed_obj__ = 0;
                    return __result264__;
                    if(right_254 && !__freed_obj__) { right_254 = come_decrement_ref_count(right_254, ((struct sNode*)right_254)->finalize, ((struct sNode*)right_254)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional394=*info->p==92&&*(info->p+1)==45&&*(info->p+2)!=61&&*(info->p+2)!=45&&*(info->p+2)!=62,                    _if_conditional394) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_256=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value413=add_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value413);
                        if(right_value413 && right_value413 != __result_obj__ && !__freed_obj__) { right_value413 = come_decrement_ref_count(right_value413, ((struct sNode*)right_value413)->finalize, ((struct sNode*)right_value413)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value413;
                        __freed_obj__ = 0;
                        _inf_value12=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2297, "struct sNode");
                        _inf_obj_value12=come_increment_ref_count(((struct sSubNode*)(right_value415=sSubNode_initialize((struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value414=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "13op.c", 2297, "struct sSubNode")))),(struct sNode*)come_increment_ref_count(node_249),(struct sNode*)come_increment_ref_count(right_256),(_Bool)1,info))));
                        _inf_value12->_protocol_obj=_inf_obj_value12;
                        _inf_value12->finalize=(void*)sSubNode_finalize;
                        _inf_value12->clone=(void*)sSubNode_clone;
                        _inf_value12->compile=(void*)sSubNode_compile;
                        _inf_value12->sline=(void*)sSubNode_sline;
                        _inf_value12->sname=(void*)sSubNode_sname;
                        _inf_value12->terminated=(void*)sSubNode_terminated;
                        _inf_value12->kind=(void*)sSubNode_kind;
                        __result267__ = __result_obj__ = ((struct sNode*)(right_value420=_inf_value12));
                        if(right_256 && !__freed_obj__) { right_256 = come_decrement_ref_count(right_256, ((struct sNode*)right_256)->finalize, ((struct sNode*)right_256)->_protocol_obj, 0, 0, 0); } 
                        if(node_249 && !__freed_obj__) { node_249 = come_decrement_ref_count(node_249, ((struct sNode*)node_249)->finalize, ((struct sNode*)node_249)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value414);
                        if(right_value414 && right_value414 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value414, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value414;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value415);
                        if(right_value415 && right_value415 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value415, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value415;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value420);
                        if(right_value420 && right_value420 != __result_obj__ && !__freed_obj__) { right_value420 = come_decrement_ref_count(right_value420, ((struct sNode*)right_value420)->finalize, ((struct sNode*)right_value420)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value420;
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
_Bool _if_conditional385;
_Bool _if_conditional386;
_Bool _if_conditional387;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional385=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional385) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional386=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional386) {
                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional387=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional387) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sAddNode* sAddNode_clone(struct sAddNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional388;
struct sAddNode* __result262__;
void* right_value408;
struct sAddNode* result_255;
_Bool _if_conditional389;
void* right_value409;
struct sNode* __dec_obj187;
_Bool _if_conditional390;
void* right_value410;
struct sNode* __dec_obj188;
_Bool _if_conditional391;
_Bool _if_conditional392;
_Bool _if_conditional393;
void* right_value411;
char* __dec_obj189;
struct sAddNode* __result263__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value408, 0, sizeof(void*));
memset(&result_255, 0, sizeof(struct sAddNode*));
memset(&right_value409, 0, sizeof(void*));
memset(&right_value410, 0, sizeof(void*));
memset(&right_value411, 0, sizeof(void*));
                        if(_if_conditional388=self==(void*)0,                        _if_conditional388) {
                            __result262__ = __result_obj__ = (void*)0;
                            return __result262__;
                        }
                        result_255=(struct sAddNode*)come_increment_ref_count(((struct sAddNode*)(right_value408=(struct sAddNode*)come_calloc(1, sizeof(struct sAddNode)*(1), "sAddNode_clone", 3, "struct sAddNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value408);
                        if(right_value408 && right_value408 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAddNode_finalize,right_value408, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value408;
                        __freed_obj__ = 0;
                        if(_if_conditional389=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional389) {
                            __dec_obj187=result_255->mLeft;
                            result_255->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value409=sNode_clone(self->mLeft))));
                            if(__dec_obj187) { __dec_obj187 = come_decrement_ref_count(__dec_obj187, ((struct sNode*)__dec_obj187)->finalize, ((struct sNode*)__dec_obj187)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value409);
                            if(right_value409 && right_value409 != __result_obj__ && !__freed_obj__) { right_value409 = come_decrement_ref_count(right_value409, ((struct sNode*)right_value409)->finalize, ((struct sNode*)right_value409)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value409;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional390=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional390) {
                            __dec_obj188=result_255->mRight;
                            result_255->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value410=sNode_clone(self->mRight))));
                            if(__dec_obj188) { __dec_obj188 = come_decrement_ref_count(__dec_obj188, ((struct sNode*)__dec_obj188)->finalize, ((struct sNode*)__dec_obj188)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value410);
                            if(right_value410 && right_value410 != __result_obj__ && !__freed_obj__) { right_value410 = come_decrement_ref_count(right_value410, ((struct sNode*)right_value410)->finalize, ((struct sNode*)right_value410)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value410;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional391=self!=((void*)0),                        _if_conditional391) {
                            result_255->mQuote=self->mQuote;
                        }
                        if(_if_conditional392=self!=((void*)0),                        _if_conditional392) {
                            result_255->sline=self->sline;
                        }
                        if(_if_conditional393=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional393) {
                            __dec_obj189=result_255->sname;
                            result_255->sname=(char*)come_increment_ref_count(((char*)(right_value411=string_clone(self->sname))));
                            if(__dec_obj189) { __dec_obj189 = come_decrement_ref_count(__dec_obj189, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value411);
                            if(right_value411 && right_value411 != __result_obj__ && !__freed_obj__) { right_value411 = come_decrement_ref_count(right_value411, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value411;
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
_Bool _if_conditional395;
_Bool _if_conditional396;
_Bool _if_conditional397;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional395=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional395) {
                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional396=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional396) {
                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional397=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional397) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sSubNode* sSubNode_clone(struct sSubNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional398;
struct sSubNode* __result265__;
void* right_value416;
struct sSubNode* result_257;
_Bool _if_conditional399;
void* right_value417;
struct sNode* __dec_obj190;
_Bool _if_conditional400;
void* right_value418;
struct sNode* __dec_obj191;
_Bool _if_conditional401;
_Bool _if_conditional402;
_Bool _if_conditional403;
void* right_value419;
char* __dec_obj192;
struct sSubNode* __result266__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value416, 0, sizeof(void*));
memset(&result_257, 0, sizeof(struct sSubNode*));
memset(&right_value417, 0, sizeof(void*));
memset(&right_value418, 0, sizeof(void*));
memset(&right_value419, 0, sizeof(void*));
                            if(_if_conditional398=self==(void*)0,                            _if_conditional398) {
                                __result265__ = __result_obj__ = (void*)0;
                                return __result265__;
                            }
                            result_257=(struct sSubNode*)come_increment_ref_count(((struct sSubNode*)(right_value416=(struct sSubNode*)come_calloc(1, sizeof(struct sSubNode)*(1), "sSubNode_clone", 3, "struct sSubNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value416);
                            if(right_value416 && right_value416 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sSubNode_finalize,right_value416, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value416;
                            __freed_obj__ = 0;
                            if(_if_conditional399=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional399) {
                                __dec_obj190=result_257->mLeft;
                                result_257->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value417=sNode_clone(self->mLeft))));
                                if(__dec_obj190) { __dec_obj190 = come_decrement_ref_count(__dec_obj190, ((struct sNode*)__dec_obj190)->finalize, ((struct sNode*)__dec_obj190)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value417);
                                if(right_value417 && right_value417 != __result_obj__ && !__freed_obj__) { right_value417 = come_decrement_ref_count(right_value417, ((struct sNode*)right_value417)->finalize, ((struct sNode*)right_value417)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value417;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional400=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional400) {
                                __dec_obj191=result_257->mRight;
                                result_257->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value418=sNode_clone(self->mRight))));
                                if(__dec_obj191) { __dec_obj191 = come_decrement_ref_count(__dec_obj191, ((struct sNode*)__dec_obj191)->finalize, ((struct sNode*)__dec_obj191)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value418);
                                if(right_value418 && right_value418 != __result_obj__ && !__freed_obj__) { right_value418 = come_decrement_ref_count(right_value418, ((struct sNode*)right_value418)->finalize, ((struct sNode*)right_value418)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value418;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional401=self!=((void*)0),                            _if_conditional401) {
                                result_257->mQuote=self->mQuote;
                            }
                            if(_if_conditional402=self!=((void*)0),                            _if_conditional402) {
                                result_257->sline=self->sline;
                            }
                            if(_if_conditional403=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional403) {
                                __dec_obj192=result_257->sname;
                                result_257->sname=(char*)come_increment_ref_count(((char*)(right_value419=string_clone(self->sname))));
                                if(__dec_obj192) { __dec_obj192 = come_decrement_ref_count(__dec_obj192, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value419);
                                if(right_value419 && right_value419 != __result_obj__ && !__freed_obj__) { right_value419 = come_decrement_ref_count(right_value419, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value419;
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
void* right_value421;
struct sNode* node_258;
_Bool _while_condtional12;
_Bool _if_conditional404;
void* right_value422;
struct sNode* right_259;
void* right_value423;
void* right_value424;
struct sNode* _inf_value13;
struct sLShiftNode* _inf_obj_value13;
void* right_value429;
struct sNode* __result271__;
_Bool _if_conditional414;
void* right_value430;
struct sNode* right_261;
void* right_value431;
void* right_value432;
struct sNode* _inf_value14;
struct sRShiftNode* _inf_obj_value14;
void* right_value437;
struct sNode* __result274__;
_Bool _if_conditional424;
void* right_value438;
struct sNode* right_263;
void* right_value439;
void* right_value440;
struct sNode* _inf_value15;
struct sLShiftNode* _inf_obj_value15;
void* right_value445;
struct sNode* __result277__;
_Bool _if_conditional434;
void* right_value446;
struct sNode* right_265;
void* right_value447;
void* right_value448;
struct sNode* _inf_value16;
struct sRShiftNode* _inf_obj_value16;
void* right_value453;
struct sNode* __result280__;
struct sNode* __result281__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value421, 0, sizeof(void*));
memset(&node_258, 0, sizeof(struct sNode*));
memset(&right_value422, 0, sizeof(void*));
memset(&right_259, 0, sizeof(struct sNode*));
memset(&right_value423, 0, sizeof(void*));
memset(&right_value424, 0, sizeof(void*));
memset(&right_value429, 0, sizeof(void*));
memset(&right_value430, 0, sizeof(void*));
memset(&right_261, 0, sizeof(struct sNode*));
memset(&right_value431, 0, sizeof(void*));
memset(&right_value432, 0, sizeof(void*));
memset(&right_value437, 0, sizeof(void*));
memset(&right_value438, 0, sizeof(void*));
memset(&right_263, 0, sizeof(struct sNode*));
memset(&right_value439, 0, sizeof(void*));
memset(&right_value440, 0, sizeof(void*));
memset(&right_value445, 0, sizeof(void*));
memset(&right_value446, 0, sizeof(void*));
memset(&right_265, 0, sizeof(struct sNode*));
memset(&right_value447, 0, sizeof(void*));
memset(&right_value448, 0, sizeof(void*));
memset(&right_value453, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_258=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value421=add_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value421);
    if(right_value421 && right_value421 != __result_obj__ && !__freed_obj__) { right_value421 = come_decrement_ref_count(right_value421, ((struct sNode*)right_value421)->finalize, ((struct sNode*)right_value421)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value421;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional12=*info->p,    _while_condtional12) {
        if(_if_conditional404=*info->p==60&&*(info->p+1)==60&&*(info->p+2)!=61,        _if_conditional404) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_259=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value422=shift_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value422);
            if(right_value422 && right_value422 != __result_obj__ && !__freed_obj__) { right_value422 = come_decrement_ref_count(right_value422, ((struct sNode*)right_value422)->finalize, ((struct sNode*)right_value422)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value422;
            __freed_obj__ = 0;
            _inf_value13=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2324, "struct sNode");
            _inf_obj_value13=come_increment_ref_count(((struct sLShiftNode*)(right_value424=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value423=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2324, "struct sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_258),(struct sNode*)come_increment_ref_count(right_259),(_Bool)0,info))));
            _inf_value13->_protocol_obj=_inf_obj_value13;
            _inf_value13->finalize=(void*)sLShiftNode_finalize;
            _inf_value13->clone=(void*)sLShiftNode_clone;
            _inf_value13->compile=(void*)sLShiftNode_compile;
            _inf_value13->sline=(void*)sLShiftNode_sline;
            _inf_value13->sname=(void*)sLShiftNode_sname;
            _inf_value13->terminated=(void*)sLShiftNode_terminated;
            _inf_value13->kind=(void*)sLShiftNode_kind;
            __result271__ = __result_obj__ = ((struct sNode*)(right_value429=_inf_value13));
            if(right_259 && !__freed_obj__) { right_259 = come_decrement_ref_count(right_259, ((struct sNode*)right_259)->finalize, ((struct sNode*)right_259)->_protocol_obj, 0, 0, 0); } 
            if(node_258 && !__freed_obj__) { node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value423);
            if(right_value423 && right_value423 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value423, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value423;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value424);
            if(right_value424 && right_value424 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value424, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value424;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value429);
            if(right_value429 && right_value429 != __result_obj__ && !__freed_obj__) { right_value429 = come_decrement_ref_count(right_value429, ((struct sNode*)right_value429)->finalize, ((struct sNode*)right_value429)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value429;
            __freed_obj__ = 0;
            return __result271__;
            if(right_259 && !__freed_obj__) { right_259 = come_decrement_ref_count(right_259, ((struct sNode*)right_259)->finalize, ((struct sNode*)right_259)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional414=*info->p==62&&*(info->p+1)==62&&*(info->p+2)!=61&&*(info->p+2)!=62,            _if_conditional414) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_261=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value430=shift_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value430);
                if(right_value430 && right_value430 != __result_obj__ && !__freed_obj__) { right_value430 = come_decrement_ref_count(right_value430, ((struct sNode*)right_value430)->finalize, ((struct sNode*)right_value430)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value430;
                __freed_obj__ = 0;
                _inf_value14=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2332, "struct sNode");
                _inf_obj_value14=come_increment_ref_count(((struct sRShiftNode*)(right_value432=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value431=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2332, "struct sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_258),(struct sNode*)come_increment_ref_count(right_261),(_Bool)0,info))));
                _inf_value14->_protocol_obj=_inf_obj_value14;
                _inf_value14->finalize=(void*)sRShiftNode_finalize;
                _inf_value14->clone=(void*)sRShiftNode_clone;
                _inf_value14->compile=(void*)sRShiftNode_compile;
                _inf_value14->sline=(void*)sRShiftNode_sline;
                _inf_value14->sname=(void*)sRShiftNode_sname;
                _inf_value14->terminated=(void*)sRShiftNode_terminated;
                _inf_value14->kind=(void*)sRShiftNode_kind;
                __result274__ = __result_obj__ = ((struct sNode*)(right_value437=_inf_value14));
                if(right_261 && !__freed_obj__) { right_261 = come_decrement_ref_count(right_261, ((struct sNode*)right_261)->finalize, ((struct sNode*)right_261)->_protocol_obj, 0, 0, 0); } 
                if(node_258 && !__freed_obj__) { node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value431);
                if(right_value431 && right_value431 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value431, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value431;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value432);
                if(right_value432 && right_value432 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value432, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value432;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value437);
                if(right_value437 && right_value437 != __result_obj__ && !__freed_obj__) { right_value437 = come_decrement_ref_count(right_value437, ((struct sNode*)right_value437)->finalize, ((struct sNode*)right_value437)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value437;
                __freed_obj__ = 0;
                return __result274__;
                if(right_261 && !__freed_obj__) { right_261 = come_decrement_ref_count(right_261, ((struct sNode*)right_261)->finalize, ((struct sNode*)right_261)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional424=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==60&&*(info->p+3)!=61,                _if_conditional424) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_263=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value438=shift_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value438);
                    if(right_value438 && right_value438 != __result_obj__ && !__freed_obj__) { right_value438 = come_decrement_ref_count(right_value438, ((struct sNode*)right_value438)->finalize, ((struct sNode*)right_value438)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value438;
                    __freed_obj__ = 0;
                    _inf_value15=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2340, "struct sNode");
                    _inf_obj_value15=come_increment_ref_count(((struct sLShiftNode*)(right_value440=sLShiftNode_initialize((struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value439=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "13op.c", 2340, "struct sLShiftNode")))),(struct sNode*)come_increment_ref_count(node_258),(struct sNode*)come_increment_ref_count(right_263),(_Bool)1,info))));
                    _inf_value15->_protocol_obj=_inf_obj_value15;
                    _inf_value15->finalize=(void*)sLShiftNode_finalize;
                    _inf_value15->clone=(void*)sLShiftNode_clone;
                    _inf_value15->compile=(void*)sLShiftNode_compile;
                    _inf_value15->sline=(void*)sLShiftNode_sline;
                    _inf_value15->sname=(void*)sLShiftNode_sname;
                    _inf_value15->terminated=(void*)sLShiftNode_terminated;
                    _inf_value15->kind=(void*)sLShiftNode_kind;
                    __result277__ = __result_obj__ = ((struct sNode*)(right_value445=_inf_value15));
                    if(right_263 && !__freed_obj__) { right_263 = come_decrement_ref_count(right_263, ((struct sNode*)right_263)->finalize, ((struct sNode*)right_263)->_protocol_obj, 0, 0, 0); } 
                    if(node_258 && !__freed_obj__) { node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value439);
                    if(right_value439 && right_value439 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value439, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value439;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value440);
                    if(right_value440 && right_value440 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value440, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value440;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value445);
                    if(right_value445 && right_value445 != __result_obj__ && !__freed_obj__) { right_value445 = come_decrement_ref_count(right_value445, ((struct sNode*)right_value445)->finalize, ((struct sNode*)right_value445)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value445;
                    __freed_obj__ = 0;
                    return __result277__;
                    if(right_263 && !__freed_obj__) { right_263 = come_decrement_ref_count(right_263, ((struct sNode*)right_263)->finalize, ((struct sNode*)right_263)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional434=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==62&&*(info->p+3)!=61&&*(info->p+3)!=62,                    _if_conditional434) {
                        info->p+=3;
                        skip_spaces_and_lf(info);
                        right_265=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value446=shift_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value446);
                        if(right_value446 && right_value446 != __result_obj__ && !__freed_obj__) { right_value446 = come_decrement_ref_count(right_value446, ((struct sNode*)right_value446)->finalize, ((struct sNode*)right_value446)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value446;
                        __freed_obj__ = 0;
                        _inf_value16=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2348, "struct sNode");
                        _inf_obj_value16=come_increment_ref_count(((struct sRShiftNode*)(right_value448=sRShiftNode_initialize((struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value447=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "13op.c", 2348, "struct sRShiftNode")))),(struct sNode*)come_increment_ref_count(node_258),(struct sNode*)come_increment_ref_count(right_265),(_Bool)1,info))));
                        _inf_value16->_protocol_obj=_inf_obj_value16;
                        _inf_value16->finalize=(void*)sRShiftNode_finalize;
                        _inf_value16->clone=(void*)sRShiftNode_clone;
                        _inf_value16->compile=(void*)sRShiftNode_compile;
                        _inf_value16->sline=(void*)sRShiftNode_sline;
                        _inf_value16->sname=(void*)sRShiftNode_sname;
                        _inf_value16->terminated=(void*)sRShiftNode_terminated;
                        _inf_value16->kind=(void*)sRShiftNode_kind;
                        __result280__ = __result_obj__ = ((struct sNode*)(right_value453=_inf_value16));
                        if(right_265 && !__freed_obj__) { right_265 = come_decrement_ref_count(right_265, ((struct sNode*)right_265)->finalize, ((struct sNode*)right_265)->_protocol_obj, 0, 0, 0); } 
                        if(node_258 && !__freed_obj__) { node_258 = come_decrement_ref_count(node_258, ((struct sNode*)node_258)->finalize, ((struct sNode*)node_258)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value447);
                        if(right_value447 && right_value447 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value447, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value447;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value448);
                        if(right_value448 && right_value448 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value448, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value448;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value453);
                        if(right_value453 && right_value453 != __result_obj__ && !__freed_obj__) { right_value453 = come_decrement_ref_count(right_value453, ((struct sNode*)right_value453)->finalize, ((struct sNode*)right_value453)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value453;
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
_Bool _if_conditional425;
_Bool _if_conditional426;
_Bool _if_conditional427;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                        if(_if_conditional425=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional425) {
                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional426=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional426) {
                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                        }
                        if(_if_conditional427=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional427) {
                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                        }
}

static struct sLShiftNode* sLShiftNode_clone(struct sLShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional428;
struct sLShiftNode* __result275__;
void* right_value441;
struct sLShiftNode* result_264;
_Bool _if_conditional429;
void* right_value442;
struct sNode* __dec_obj199;
_Bool _if_conditional430;
void* right_value443;
struct sNode* __dec_obj200;
_Bool _if_conditional431;
_Bool _if_conditional432;
_Bool _if_conditional433;
void* right_value444;
char* __dec_obj201;
struct sLShiftNode* __result276__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value441, 0, sizeof(void*));
memset(&result_264, 0, sizeof(struct sLShiftNode*));
memset(&right_value442, 0, sizeof(void*));
memset(&right_value443, 0, sizeof(void*));
memset(&right_value444, 0, sizeof(void*));
                        if(_if_conditional428=self==(void*)0,                        _if_conditional428) {
                            __result275__ = __result_obj__ = (void*)0;
                            return __result275__;
                        }
                        result_264=(struct sLShiftNode*)come_increment_ref_count(((struct sLShiftNode*)(right_value441=(struct sLShiftNode*)come_calloc(1, sizeof(struct sLShiftNode)*(1), "sLShiftNode_clone", 3, "struct sLShiftNode"))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value441);
                        if(right_value441 && right_value441 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLShiftNode_finalize,right_value441, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value441;
                        __freed_obj__ = 0;
                        if(_if_conditional429=self!=((void*)0)&&self->mLeft!=((void*)0),                        _if_conditional429) {
                            __dec_obj199=result_264->mLeft;
                            result_264->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value442=sNode_clone(self->mLeft))));
                            if(__dec_obj199) { __dec_obj199 = come_decrement_ref_count(__dec_obj199, ((struct sNode*)__dec_obj199)->finalize, ((struct sNode*)__dec_obj199)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value442);
                            if(right_value442 && right_value442 != __result_obj__ && !__freed_obj__) { right_value442 = come_decrement_ref_count(right_value442, ((struct sNode*)right_value442)->finalize, ((struct sNode*)right_value442)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value442;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional430=self!=((void*)0)&&self->mRight!=((void*)0),                        _if_conditional430) {
                            __dec_obj200=result_264->mRight;
                            result_264->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value443=sNode_clone(self->mRight))));
                            if(__dec_obj200) { __dec_obj200 = come_decrement_ref_count(__dec_obj200, ((struct sNode*)__dec_obj200)->finalize, ((struct sNode*)__dec_obj200)->_protocol_obj, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value443);
                            if(right_value443 && right_value443 != __result_obj__ && !__freed_obj__) { right_value443 = come_decrement_ref_count(right_value443, ((struct sNode*)right_value443)->finalize, ((struct sNode*)right_value443)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value443;
                            __freed_obj__ = 0;
                        }
                        if(_if_conditional431=self!=((void*)0),                        _if_conditional431) {
                            result_264->mQuote=self->mQuote;
                        }
                        if(_if_conditional432=self!=((void*)0),                        _if_conditional432) {
                            result_264->sline=self->sline;
                        }
                        if(_if_conditional433=self!=((void*)0)&&self->sname!=((void*)0),                        _if_conditional433) {
                            __dec_obj201=result_264->sname;
                            result_264->sname=(char*)come_increment_ref_count(((char*)(right_value444=string_clone(self->sname))));
                            if(__dec_obj201) { __dec_obj201 = come_decrement_ref_count(__dec_obj201, (void*)0, (void*)0, 0,0,0); }
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value444);
                            if(right_value444 && right_value444 != __result_obj__ && !__freed_obj__) { right_value444 = come_decrement_ref_count(right_value444, (void*)0, (void*)0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value444;
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
_Bool _if_conditional435;
_Bool _if_conditional436;
_Bool _if_conditional437;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                            if(_if_conditional435=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional435) {
                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional436=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional436) {
                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                            }
                            if(_if_conditional437=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional437) {
                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                            }
}

static struct sRShiftNode* sRShiftNode_clone(struct sRShiftNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional438;
struct sRShiftNode* __result278__;
void* right_value449;
struct sRShiftNode* result_266;
_Bool _if_conditional439;
void* right_value450;
struct sNode* __dec_obj202;
_Bool _if_conditional440;
void* right_value451;
struct sNode* __dec_obj203;
_Bool _if_conditional441;
_Bool _if_conditional442;
_Bool _if_conditional443;
void* right_value452;
char* __dec_obj204;
struct sRShiftNode* __result279__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value449, 0, sizeof(void*));
memset(&result_266, 0, sizeof(struct sRShiftNode*));
memset(&right_value450, 0, sizeof(void*));
memset(&right_value451, 0, sizeof(void*));
memset(&right_value452, 0, sizeof(void*));
                            if(_if_conditional438=self==(void*)0,                            _if_conditional438) {
                                __result278__ = __result_obj__ = (void*)0;
                                return __result278__;
                            }
                            result_266=(struct sRShiftNode*)come_increment_ref_count(((struct sRShiftNode*)(right_value449=(struct sRShiftNode*)come_calloc(1, sizeof(struct sRShiftNode)*(1), "sRShiftNode_clone", 3, "struct sRShiftNode"))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value449);
                            if(right_value449 && right_value449 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sRShiftNode_finalize,right_value449, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value449;
                            __freed_obj__ = 0;
                            if(_if_conditional439=self!=((void*)0)&&self->mLeft!=((void*)0),                            _if_conditional439) {
                                __dec_obj202=result_266->mLeft;
                                result_266->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value450=sNode_clone(self->mLeft))));
                                if(__dec_obj202) { __dec_obj202 = come_decrement_ref_count(__dec_obj202, ((struct sNode*)__dec_obj202)->finalize, ((struct sNode*)__dec_obj202)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value450);
                                if(right_value450 && right_value450 != __result_obj__ && !__freed_obj__) { right_value450 = come_decrement_ref_count(right_value450, ((struct sNode*)right_value450)->finalize, ((struct sNode*)right_value450)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value450;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional440=self!=((void*)0)&&self->mRight!=((void*)0),                            _if_conditional440) {
                                __dec_obj203=result_266->mRight;
                                result_266->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value451=sNode_clone(self->mRight))));
                                if(__dec_obj203) { __dec_obj203 = come_decrement_ref_count(__dec_obj203, ((struct sNode*)__dec_obj203)->finalize, ((struct sNode*)__dec_obj203)->_protocol_obj, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value451);
                                if(right_value451 && right_value451 != __result_obj__ && !__freed_obj__) { right_value451 = come_decrement_ref_count(right_value451, ((struct sNode*)right_value451)->finalize, ((struct sNode*)right_value451)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value451;
                                __freed_obj__ = 0;
                            }
                            if(_if_conditional441=self!=((void*)0),                            _if_conditional441) {
                                result_266->mQuote=self->mQuote;
                            }
                            if(_if_conditional442=self!=((void*)0),                            _if_conditional442) {
                                result_266->sline=self->sline;
                            }
                            if(_if_conditional443=self!=((void*)0)&&self->sname!=((void*)0),                            _if_conditional443) {
                                __dec_obj204=result_266->sname;
                                result_266->sname=(char*)come_increment_ref_count(((char*)(right_value452=string_clone(self->sname))));
                                if(__dec_obj204) { __dec_obj204 = come_decrement_ref_count(__dec_obj204, (void*)0, (void*)0, 0,0,0); }
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value452);
                                if(right_value452 && right_value452 != __result_obj__ && !__freed_obj__) { right_value452 = come_decrement_ref_count(right_value452, (void*)0, (void*)0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value452;
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
void* right_value454;
struct sNode* node_267;
_Bool _while_condtional13;
_Bool _if_conditional444;
void* right_value455;
struct sNode* right_268;
void* right_value456;
void* right_value457;
struct sNode* _inf_value17;
struct sGtEqNode* _inf_obj_value17;
void* right_value462;
struct sNode* __result284__;
_Bool _if_conditional454;
void* right_value463;
struct sNode* right_270;
void* right_value464;
void* right_value465;
struct sNode* _inf_value18;
struct sLtEqNode* _inf_obj_value18;
void* right_value470;
struct sNode* __result287__;
_Bool _if_conditional464;
void* right_value471;
struct sNode* right_272;
void* right_value472;
void* right_value473;
struct sNode* _inf_value19;
struct sGtNode* _inf_obj_value19;
void* right_value478;
struct sNode* __result290__;
_Bool _if_conditional474;
void* right_value479;
struct sNode* right_274;
void* right_value480;
void* right_value481;
struct sNode* _inf_value20;
struct sLtNode* _inf_obj_value20;
void* right_value486;
struct sNode* __result293__;
_Bool _if_conditional484;
void* right_value487;
struct sNode* right_276;
void* right_value488;
void* right_value489;
struct sNode* _inf_value21;
struct sGtEqNode* _inf_obj_value21;
void* right_value494;
struct sNode* __result296__;
_Bool _if_conditional494;
void* right_value495;
struct sNode* right_278;
void* right_value496;
void* right_value497;
struct sNode* _inf_value22;
struct sLtEqNode* _inf_obj_value22;
void* right_value502;
struct sNode* __result299__;
_Bool _if_conditional504;
void* right_value503;
struct sNode* right_280;
void* right_value504;
void* right_value505;
struct sNode* _inf_value23;
struct sGtNode* _inf_obj_value23;
void* right_value510;
struct sNode* __result302__;
_Bool _if_conditional514;
void* right_value511;
struct sNode* right_282;
void* right_value512;
void* right_value513;
struct sNode* _inf_value24;
struct sLtNode* _inf_obj_value24;
void* right_value518;
struct sNode* __result305__;
struct sNode* __result306__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value454, 0, sizeof(void*));
memset(&node_267, 0, sizeof(struct sNode*));
memset(&right_value455, 0, sizeof(void*));
memset(&right_268, 0, sizeof(struct sNode*));
memset(&right_value456, 0, sizeof(void*));
memset(&right_value457, 0, sizeof(void*));
memset(&right_value462, 0, sizeof(void*));
memset(&right_value463, 0, sizeof(void*));
memset(&right_270, 0, sizeof(struct sNode*));
memset(&right_value464, 0, sizeof(void*));
memset(&right_value465, 0, sizeof(void*));
memset(&right_value470, 0, sizeof(void*));
memset(&right_value471, 0, sizeof(void*));
memset(&right_272, 0, sizeof(struct sNode*));
memset(&right_value472, 0, sizeof(void*));
memset(&right_value473, 0, sizeof(void*));
memset(&right_value478, 0, sizeof(void*));
memset(&right_value479, 0, sizeof(void*));
memset(&right_274, 0, sizeof(struct sNode*));
memset(&right_value480, 0, sizeof(void*));
memset(&right_value481, 0, sizeof(void*));
memset(&right_value486, 0, sizeof(void*));
memset(&right_value487, 0, sizeof(void*));
memset(&right_276, 0, sizeof(struct sNode*));
memset(&right_value488, 0, sizeof(void*));
memset(&right_value489, 0, sizeof(void*));
memset(&right_value494, 0, sizeof(void*));
memset(&right_value495, 0, sizeof(void*));
memset(&right_278, 0, sizeof(struct sNode*));
memset(&right_value496, 0, sizeof(void*));
memset(&right_value497, 0, sizeof(void*));
memset(&right_value502, 0, sizeof(void*));
memset(&right_value503, 0, sizeof(void*));
memset(&right_280, 0, sizeof(struct sNode*));
memset(&right_value504, 0, sizeof(void*));
memset(&right_value505, 0, sizeof(void*));
memset(&right_value510, 0, sizeof(void*));
memset(&right_value511, 0, sizeof(void*));
memset(&right_282, 0, sizeof(struct sNode*));
memset(&right_value512, 0, sizeof(void*));
memset(&right_value513, 0, sizeof(void*));
memset(&right_value518, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_267=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value454=shift_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value454);
    if(right_value454 && right_value454 != __result_obj__ && !__freed_obj__) { right_value454 = come_decrement_ref_count(right_value454, ((struct sNode*)right_value454)->finalize, ((struct sNode*)right_value454)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value454;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional13=*info->p,    _while_condtional13) {
        if(_if_conditional444=*info->p==62&&*(info->p+1)==61,        _if_conditional444) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_268=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value455=shift_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value455);
            if(right_value455 && right_value455 != __result_obj__ && !__freed_obj__) { right_value455 = come_decrement_ref_count(right_value455, ((struct sNode*)right_value455)->finalize, ((struct sNode*)right_value455)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value455;
            __freed_obj__ = 0;
            _inf_value17=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2375, "struct sNode");
            _inf_obj_value17=come_increment_ref_count(((struct sGtEqNode*)(right_value457=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value456=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2375, "struct sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_268),(_Bool)0,info))));
            _inf_value17->_protocol_obj=_inf_obj_value17;
            _inf_value17->finalize=(void*)sGtEqNode_finalize;
            _inf_value17->clone=(void*)sGtEqNode_clone;
            _inf_value17->compile=(void*)sGtEqNode_compile;
            _inf_value17->sline=(void*)sGtEqNode_sline;
            _inf_value17->sname=(void*)sGtEqNode_sname;
            _inf_value17->terminated=(void*)sGtEqNode_terminated;
            _inf_value17->kind=(void*)sGtEqNode_kind;
            __result284__ = __result_obj__ = ((struct sNode*)(right_value462=_inf_value17));
            if(right_268 && !__freed_obj__) { right_268 = come_decrement_ref_count(right_268, ((struct sNode*)right_268)->finalize, ((struct sNode*)right_268)->_protocol_obj, 0, 0, 0); } 
            if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value456);
            if(right_value456 && right_value456 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value456, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value456;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value457);
            if(right_value457 && right_value457 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value457, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value457;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value462);
            if(right_value462 && right_value462 != __result_obj__ && !__freed_obj__) { right_value462 = come_decrement_ref_count(right_value462, ((struct sNode*)right_value462)->finalize, ((struct sNode*)right_value462)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value462;
            __freed_obj__ = 0;
            return __result284__;
            if(right_268 && !__freed_obj__) { right_268 = come_decrement_ref_count(right_268, ((struct sNode*)right_268)->finalize, ((struct sNode*)right_268)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional454=*info->p==60&&*(info->p+1)==61,            _if_conditional454) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_270=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value463=shift_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value463);
                if(right_value463 && right_value463 != __result_obj__ && !__freed_obj__) { right_value463 = come_decrement_ref_count(right_value463, ((struct sNode*)right_value463)->finalize, ((struct sNode*)right_value463)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value463;
                __freed_obj__ = 0;
                _inf_value18=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2383, "struct sNode");
                _inf_obj_value18=come_increment_ref_count(((struct sLtEqNode*)(right_value465=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value464=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2383, "struct sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_270),(_Bool)0,info))));
                _inf_value18->_protocol_obj=_inf_obj_value18;
                _inf_value18->finalize=(void*)sLtEqNode_finalize;
                _inf_value18->clone=(void*)sLtEqNode_clone;
                _inf_value18->compile=(void*)sLtEqNode_compile;
                _inf_value18->sline=(void*)sLtEqNode_sline;
                _inf_value18->sname=(void*)sLtEqNode_sname;
                _inf_value18->terminated=(void*)sLtEqNode_terminated;
                _inf_value18->kind=(void*)sLtEqNode_kind;
                __result287__ = __result_obj__ = ((struct sNode*)(right_value470=_inf_value18));
                if(right_270 && !__freed_obj__) { right_270 = come_decrement_ref_count(right_270, ((struct sNode*)right_270)->finalize, ((struct sNode*)right_270)->_protocol_obj, 0, 0, 0); } 
                if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value464);
                if(right_value464 && right_value464 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value464, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value464;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value465);
                if(right_value465 && right_value465 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value465, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value465;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value470);
                if(right_value470 && right_value470 != __result_obj__ && !__freed_obj__) { right_value470 = come_decrement_ref_count(right_value470, ((struct sNode*)right_value470)->finalize, ((struct sNode*)right_value470)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value470;
                __freed_obj__ = 0;
                return __result287__;
                if(right_270 && !__freed_obj__) { right_270 = come_decrement_ref_count(right_270, ((struct sNode*)right_270)->finalize, ((struct sNode*)right_270)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional464=*info->p==62&&*(info->p+1)!=62,                _if_conditional464) {
                    info->p++;
                    skip_spaces_and_lf(info);
                    right_272=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value471=shift_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value471);
                    if(right_value471 && right_value471 != __result_obj__ && !__freed_obj__) { right_value471 = come_decrement_ref_count(right_value471, ((struct sNode*)right_value471)->finalize, ((struct sNode*)right_value471)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value471;
                    __freed_obj__ = 0;
                    _inf_value19=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2391, "struct sNode");
                    _inf_obj_value19=come_increment_ref_count(((struct sGtNode*)(right_value473=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value472=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2391, "struct sGtNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_272),(_Bool)0,info))));
                    _inf_value19->_protocol_obj=_inf_obj_value19;
                    _inf_value19->finalize=(void*)sGtNode_finalize;
                    _inf_value19->clone=(void*)sGtNode_clone;
                    _inf_value19->compile=(void*)sGtNode_compile;
                    _inf_value19->sline=(void*)sGtNode_sline;
                    _inf_value19->sname=(void*)sGtNode_sname;
                    _inf_value19->terminated=(void*)sGtNode_terminated;
                    _inf_value19->kind=(void*)sGtNode_kind;
                    __result290__ = __result_obj__ = ((struct sNode*)(right_value478=_inf_value19));
                    if(right_272 && !__freed_obj__) { right_272 = come_decrement_ref_count(right_272, ((struct sNode*)right_272)->finalize, ((struct sNode*)right_272)->_protocol_obj, 0, 0, 0); } 
                    if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value472);
                    if(right_value472 && right_value472 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value472, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value472;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value473);
                    if(right_value473 && right_value473 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value473, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value473;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value478);
                    if(right_value478 && right_value478 != __result_obj__ && !__freed_obj__) { right_value478 = come_decrement_ref_count(right_value478, ((struct sNode*)right_value478)->finalize, ((struct sNode*)right_value478)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value478;
                    __freed_obj__ = 0;
                    return __result290__;
                    if(right_272 && !__freed_obj__) { right_272 = come_decrement_ref_count(right_272, ((struct sNode*)right_272)->finalize, ((struct sNode*)right_272)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional474=*info->p==60&&*(info->p+1)!=60,                    _if_conditional474) {
                        info->p++;
                        skip_spaces_and_lf(info);
                        right_274=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value479=shift_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value479);
                        if(right_value479 && right_value479 != __result_obj__ && !__freed_obj__) { right_value479 = come_decrement_ref_count(right_value479, ((struct sNode*)right_value479)->finalize, ((struct sNode*)right_value479)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value479;
                        __freed_obj__ = 0;
                        _inf_value20=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2399, "struct sNode");
                        _inf_obj_value20=come_increment_ref_count(((struct sLtNode*)(right_value481=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value480=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2399, "struct sLtNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_274),(_Bool)0,info))));
                        _inf_value20->_protocol_obj=_inf_obj_value20;
                        _inf_value20->finalize=(void*)sLtNode_finalize;
                        _inf_value20->clone=(void*)sLtNode_clone;
                        _inf_value20->compile=(void*)sLtNode_compile;
                        _inf_value20->sline=(void*)sLtNode_sline;
                        _inf_value20->sname=(void*)sLtNode_sname;
                        _inf_value20->terminated=(void*)sLtNode_terminated;
                        _inf_value20->kind=(void*)sLtNode_kind;
                        __result293__ = __result_obj__ = ((struct sNode*)(right_value486=_inf_value20));
                        if(right_274 && !__freed_obj__) { right_274 = come_decrement_ref_count(right_274, ((struct sNode*)right_274)->finalize, ((struct sNode*)right_274)->_protocol_obj, 0, 0, 0); } 
                        if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value480);
                        if(right_value480 && right_value480 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value480, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value480;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value481);
                        if(right_value481 && right_value481 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value481, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value481;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value486);
                        if(right_value486 && right_value486 != __result_obj__ && !__freed_obj__) { right_value486 = come_decrement_ref_count(right_value486, ((struct sNode*)right_value486)->finalize, ((struct sNode*)right_value486)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value486;
                        __freed_obj__ = 0;
                        return __result293__;
                        if(right_274 && !__freed_obj__) { right_274 = come_decrement_ref_count(right_274, ((struct sNode*)right_274)->finalize, ((struct sNode*)right_274)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional484=*info->p==92&&*(info->p+1)==62&&*(info->p+2)==61,                        _if_conditional484) {
                            info->p+=3;
                            skip_spaces_and_lf(info);
                            right_276=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value487=shift_exp(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value487);
                            if(right_value487 && right_value487 != __result_obj__ && !__freed_obj__) { right_value487 = come_decrement_ref_count(right_value487, ((struct sNode*)right_value487)->finalize, ((struct sNode*)right_value487)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value487;
                            __freed_obj__ = 0;
                            _inf_value21=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2407, "struct sNode");
                            _inf_obj_value21=come_increment_ref_count(((struct sGtEqNode*)(right_value489=sGtEqNode_initialize((struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value488=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "13op.c", 2407, "struct sGtEqNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_276),(_Bool)1,info))));
                            _inf_value21->_protocol_obj=_inf_obj_value21;
                            _inf_value21->finalize=(void*)sGtEqNode_finalize;
                            _inf_value21->clone=(void*)sGtEqNode_clone;
                            _inf_value21->compile=(void*)sGtEqNode_compile;
                            _inf_value21->sline=(void*)sGtEqNode_sline;
                            _inf_value21->sname=(void*)sGtEqNode_sname;
                            _inf_value21->terminated=(void*)sGtEqNode_terminated;
                            _inf_value21->kind=(void*)sGtEqNode_kind;
                            __result296__ = __result_obj__ = ((struct sNode*)(right_value494=_inf_value21));
                            if(right_276 && !__freed_obj__) { right_276 = come_decrement_ref_count(right_276, ((struct sNode*)right_276)->finalize, ((struct sNode*)right_276)->_protocol_obj, 0, 0, 0); } 
                            if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value488);
                            if(right_value488 && right_value488 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value488, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value488;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value489);
                            if(right_value489 && right_value489 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value489, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value489;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value494);
                            if(right_value494 && right_value494 != __result_obj__ && !__freed_obj__) { right_value494 = come_decrement_ref_count(right_value494, ((struct sNode*)right_value494)->finalize, ((struct sNode*)right_value494)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value494;
                            __freed_obj__ = 0;
                            return __result296__;
                            if(right_276 && !__freed_obj__) { right_276 = come_decrement_ref_count(right_276, ((struct sNode*)right_276)->finalize, ((struct sNode*)right_276)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional494=*info->p==92&&*(info->p+1)==60&&*(info->p+2)==61,                            _if_conditional494) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_278=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value495=shift_exp(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value495);
                                if(right_value495 && right_value495 != __result_obj__ && !__freed_obj__) { right_value495 = come_decrement_ref_count(right_value495, ((struct sNode*)right_value495)->finalize, ((struct sNode*)right_value495)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value495;
                                __freed_obj__ = 0;
                                _inf_value22=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2415, "struct sNode");
                                _inf_obj_value22=come_increment_ref_count(((struct sLtEqNode*)(right_value497=sLtEqNode_initialize((struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value496=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "13op.c", 2415, "struct sLtEqNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_278),(_Bool)1,info))));
                                _inf_value22->_protocol_obj=_inf_obj_value22;
                                _inf_value22->finalize=(void*)sLtEqNode_finalize;
                                _inf_value22->clone=(void*)sLtEqNode_clone;
                                _inf_value22->compile=(void*)sLtEqNode_compile;
                                _inf_value22->sline=(void*)sLtEqNode_sline;
                                _inf_value22->sname=(void*)sLtEqNode_sname;
                                _inf_value22->terminated=(void*)sLtEqNode_terminated;
                                _inf_value22->kind=(void*)sLtEqNode_kind;
                                __result299__ = __result_obj__ = ((struct sNode*)(right_value502=_inf_value22));
                                if(right_278 && !__freed_obj__) { right_278 = come_decrement_ref_count(right_278, ((struct sNode*)right_278)->finalize, ((struct sNode*)right_278)->_protocol_obj, 0, 0, 0); } 
                                if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value496);
                                if(right_value496 && right_value496 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value496, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value496;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value497);
                                if(right_value497 && right_value497 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value497, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value497;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value502);
                                if(right_value502 && right_value502 != __result_obj__ && !__freed_obj__) { right_value502 = come_decrement_ref_count(right_value502, ((struct sNode*)right_value502)->finalize, ((struct sNode*)right_value502)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value502;
                                __freed_obj__ = 0;
                                return __result299__;
                                if(right_278 && !__freed_obj__) { right_278 = come_decrement_ref_count(right_278, ((struct sNode*)right_278)->finalize, ((struct sNode*)right_278)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional504=*info->p==92&&*(info->p+1)==62&&*(info->p+2)!=62,                                _if_conditional504) {
                                    info->p+=2;
                                    skip_spaces_and_lf(info);
                                    right_280=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value503=shift_exp(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value503);
                                    if(right_value503 && right_value503 != __result_obj__ && !__freed_obj__) { right_value503 = come_decrement_ref_count(right_value503, ((struct sNode*)right_value503)->finalize, ((struct sNode*)right_value503)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value503;
                                    __freed_obj__ = 0;
                                    _inf_value23=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2423, "struct sNode");
                                    _inf_obj_value23=come_increment_ref_count(((struct sGtNode*)(right_value505=sGtNode_initialize((struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value504=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "13op.c", 2423, "struct sGtNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_280),(_Bool)1,info))));
                                    _inf_value23->_protocol_obj=_inf_obj_value23;
                                    _inf_value23->finalize=(void*)sGtNode_finalize;
                                    _inf_value23->clone=(void*)sGtNode_clone;
                                    _inf_value23->compile=(void*)sGtNode_compile;
                                    _inf_value23->sline=(void*)sGtNode_sline;
                                    _inf_value23->sname=(void*)sGtNode_sname;
                                    _inf_value23->terminated=(void*)sGtNode_terminated;
                                    _inf_value23->kind=(void*)sGtNode_kind;
                                    __result302__ = __result_obj__ = ((struct sNode*)(right_value510=_inf_value23));
                                    if(right_280 && !__freed_obj__) { right_280 = come_decrement_ref_count(right_280, ((struct sNode*)right_280)->finalize, ((struct sNode*)right_280)->_protocol_obj, 0, 0, 0); } 
                                    if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value504);
                                    if(right_value504 && right_value504 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value504, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value504;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value505);
                                    if(right_value505 && right_value505 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value505, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value505;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value510);
                                    if(right_value510 && right_value510 != __result_obj__ && !__freed_obj__) { right_value510 = come_decrement_ref_count(right_value510, ((struct sNode*)right_value510)->finalize, ((struct sNode*)right_value510)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[2] = right_value510;
                                    __freed_obj__ = 0;
                                    return __result302__;
                                    if(right_280 && !__freed_obj__) { right_280 = come_decrement_ref_count(right_280, ((struct sNode*)right_280)->finalize, ((struct sNode*)right_280)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional514=*info->p==92&&*(info->p+1)==60&&*(info->p+2)!=60,                                    _if_conditional514) {
                                        info->p+=2;
                                        skip_spaces_and_lf(info);
                                        right_282=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value511=shift_exp(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value511);
                                        if(right_value511 && right_value511 != __result_obj__ && !__freed_obj__) { right_value511 = come_decrement_ref_count(right_value511, ((struct sNode*)right_value511)->finalize, ((struct sNode*)right_value511)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value511;
                                        __freed_obj__ = 0;
                                        _inf_value24=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2431, "struct sNode");
                                        _inf_obj_value24=come_increment_ref_count(((struct sLtNode*)(right_value513=sLtNode_initialize((struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value512=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "13op.c", 2431, "struct sLtNode")))),(struct sNode*)come_increment_ref_count(node_267),(struct sNode*)come_increment_ref_count(right_282),(_Bool)1,info))));
                                        _inf_value24->_protocol_obj=_inf_obj_value24;
                                        _inf_value24->finalize=(void*)sLtNode_finalize;
                                        _inf_value24->clone=(void*)sLtNode_clone;
                                        _inf_value24->compile=(void*)sLtNode_compile;
                                        _inf_value24->sline=(void*)sLtNode_sline;
                                        _inf_value24->sname=(void*)sLtNode_sname;
                                        _inf_value24->terminated=(void*)sLtNode_terminated;
                                        _inf_value24->kind=(void*)sLtNode_kind;
                                        __result305__ = __result_obj__ = ((struct sNode*)(right_value518=_inf_value24));
                                        if(right_282 && !__freed_obj__) { right_282 = come_decrement_ref_count(right_282, ((struct sNode*)right_282)->finalize, ((struct sNode*)right_282)->_protocol_obj, 0, 0, 0); } 
                                        if(node_267 && !__freed_obj__) { node_267 = come_decrement_ref_count(node_267, ((struct sNode*)node_267)->finalize, ((struct sNode*)node_267)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value512);
                                        if(right_value512 && right_value512 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value512, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value512;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value513);
                                        if(right_value513 && right_value513 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value513, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value513;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value518);
                                        if(right_value518 && right_value518 != __result_obj__ && !__freed_obj__) { right_value518 = come_decrement_ref_count(right_value518, ((struct sNode*)right_value518)->finalize, ((struct sNode*)right_value518)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[2] = right_value518;
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
_Bool _if_conditional485;
_Bool _if_conditional486;
_Bool _if_conditional487;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional485=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional485) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional486=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional486) {
                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional487=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional487) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sGtEqNode* sGtEqNode_clone(struct sGtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional488;
struct sGtEqNode* __result294__;
void* right_value490;
struct sGtEqNode* result_277;
_Bool _if_conditional489;
void* right_value491;
struct sNode* __dec_obj217;
_Bool _if_conditional490;
void* right_value492;
struct sNode* __dec_obj218;
_Bool _if_conditional491;
_Bool _if_conditional492;
_Bool _if_conditional493;
void* right_value493;
char* __dec_obj219;
struct sGtEqNode* __result295__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value490, 0, sizeof(void*));
memset(&result_277, 0, sizeof(struct sGtEqNode*));
memset(&right_value491, 0, sizeof(void*));
memset(&right_value492, 0, sizeof(void*));
memset(&right_value493, 0, sizeof(void*));
                                if(_if_conditional488=self==(void*)0,                                _if_conditional488) {
                                    __result294__ = __result_obj__ = (void*)0;
                                    return __result294__;
                                }
                                result_277=(struct sGtEqNode*)come_increment_ref_count(((struct sGtEqNode*)(right_value490=(struct sGtEqNode*)come_calloc(1, sizeof(struct sGtEqNode)*(1), "sGtEqNode_clone", 3, "struct sGtEqNode"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value490);
                                if(right_value490 && right_value490 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtEqNode_finalize,right_value490, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value490;
                                __freed_obj__ = 0;
                                if(_if_conditional489=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional489) {
                                    __dec_obj217=result_277->mLeft;
                                    result_277->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value491=sNode_clone(self->mLeft))));
                                    if(__dec_obj217) { __dec_obj217 = come_decrement_ref_count(__dec_obj217, ((struct sNode*)__dec_obj217)->finalize, ((struct sNode*)__dec_obj217)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value491);
                                    if(right_value491 && right_value491 != __result_obj__ && !__freed_obj__) { right_value491 = come_decrement_ref_count(right_value491, ((struct sNode*)right_value491)->finalize, ((struct sNode*)right_value491)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value491;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional490=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional490) {
                                    __dec_obj218=result_277->mRight;
                                    result_277->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value492=sNode_clone(self->mRight))));
                                    if(__dec_obj218) { __dec_obj218 = come_decrement_ref_count(__dec_obj218, ((struct sNode*)__dec_obj218)->finalize, ((struct sNode*)__dec_obj218)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value492);
                                    if(right_value492 && right_value492 != __result_obj__ && !__freed_obj__) { right_value492 = come_decrement_ref_count(right_value492, ((struct sNode*)right_value492)->finalize, ((struct sNode*)right_value492)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value492;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional491=self!=((void*)0),                                _if_conditional491) {
                                    result_277->mQuote=self->mQuote;
                                }
                                if(_if_conditional492=self!=((void*)0),                                _if_conditional492) {
                                    result_277->sline=self->sline;
                                }
                                if(_if_conditional493=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional493) {
                                    __dec_obj219=result_277->sname;
                                    result_277->sname=(char*)come_increment_ref_count(((char*)(right_value493=string_clone(self->sname))));
                                    if(__dec_obj219) { __dec_obj219 = come_decrement_ref_count(__dec_obj219, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value493);
                                    if(right_value493 && right_value493 != __result_obj__ && !__freed_obj__) { right_value493 = come_decrement_ref_count(right_value493, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value493;
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
_Bool _if_conditional495;
_Bool _if_conditional496;
_Bool _if_conditional497;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional495=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional495) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional496=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional496) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional497=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional497) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sLtEqNode* sLtEqNode_clone(struct sLtEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional498;
struct sLtEqNode* __result297__;
void* right_value498;
struct sLtEqNode* result_279;
_Bool _if_conditional499;
void* right_value499;
struct sNode* __dec_obj220;
_Bool _if_conditional500;
void* right_value500;
struct sNode* __dec_obj221;
_Bool _if_conditional501;
_Bool _if_conditional502;
_Bool _if_conditional503;
void* right_value501;
char* __dec_obj222;
struct sLtEqNode* __result298__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value498, 0, sizeof(void*));
memset(&result_279, 0, sizeof(struct sLtEqNode*));
memset(&right_value499, 0, sizeof(void*));
memset(&right_value500, 0, sizeof(void*));
memset(&right_value501, 0, sizeof(void*));
                                    if(_if_conditional498=self==(void*)0,                                    _if_conditional498) {
                                        __result297__ = __result_obj__ = (void*)0;
                                        return __result297__;
                                    }
                                    result_279=(struct sLtEqNode*)come_increment_ref_count(((struct sLtEqNode*)(right_value498=(struct sLtEqNode*)come_calloc(1, sizeof(struct sLtEqNode)*(1), "sLtEqNode_clone", 3, "struct sLtEqNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value498);
                                    if(right_value498 && right_value498 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtEqNode_finalize,right_value498, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value498;
                                    __freed_obj__ = 0;
                                    if(_if_conditional499=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional499) {
                                        __dec_obj220=result_279->mLeft;
                                        result_279->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value499=sNode_clone(self->mLeft))));
                                        if(__dec_obj220) { __dec_obj220 = come_decrement_ref_count(__dec_obj220, ((struct sNode*)__dec_obj220)->finalize, ((struct sNode*)__dec_obj220)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value499);
                                        if(right_value499 && right_value499 != __result_obj__ && !__freed_obj__) { right_value499 = come_decrement_ref_count(right_value499, ((struct sNode*)right_value499)->finalize, ((struct sNode*)right_value499)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value499;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional500=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional500) {
                                        __dec_obj221=result_279->mRight;
                                        result_279->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value500=sNode_clone(self->mRight))));
                                        if(__dec_obj221) { __dec_obj221 = come_decrement_ref_count(__dec_obj221, ((struct sNode*)__dec_obj221)->finalize, ((struct sNode*)__dec_obj221)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value500);
                                        if(right_value500 && right_value500 != __result_obj__ && !__freed_obj__) { right_value500 = come_decrement_ref_count(right_value500, ((struct sNode*)right_value500)->finalize, ((struct sNode*)right_value500)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value500;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional501=self!=((void*)0),                                    _if_conditional501) {
                                        result_279->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional502=self!=((void*)0),                                    _if_conditional502) {
                                        result_279->sline=self->sline;
                                    }
                                    if(_if_conditional503=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional503) {
                                        __dec_obj222=result_279->sname;
                                        result_279->sname=(char*)come_increment_ref_count(((char*)(right_value501=string_clone(self->sname))));
                                        if(__dec_obj222) { __dec_obj222 = come_decrement_ref_count(__dec_obj222, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value501);
                                        if(right_value501 && right_value501 != __result_obj__ && !__freed_obj__) { right_value501 = come_decrement_ref_count(right_value501, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value501;
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
_Bool _if_conditional505;
_Bool _if_conditional506;
_Bool _if_conditional507;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional505=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional505) {
                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional506=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional506) {
                                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional507=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional507) {
                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sGtNode* sGtNode_clone(struct sGtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional508;
struct sGtNode* __result300__;
void* right_value506;
struct sGtNode* result_281;
_Bool _if_conditional509;
void* right_value507;
struct sNode* __dec_obj223;
_Bool _if_conditional510;
void* right_value508;
struct sNode* __dec_obj224;
_Bool _if_conditional511;
_Bool _if_conditional512;
_Bool _if_conditional513;
void* right_value509;
char* __dec_obj225;
struct sGtNode* __result301__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value506, 0, sizeof(void*));
memset(&result_281, 0, sizeof(struct sGtNode*));
memset(&right_value507, 0, sizeof(void*));
memset(&right_value508, 0, sizeof(void*));
memset(&right_value509, 0, sizeof(void*));
                                        if(_if_conditional508=self==(void*)0,                                        _if_conditional508) {
                                            __result300__ = __result_obj__ = (void*)0;
                                            return __result300__;
                                        }
                                        result_281=(struct sGtNode*)come_increment_ref_count(((struct sGtNode*)(right_value506=(struct sGtNode*)come_calloc(1, sizeof(struct sGtNode)*(1), "sGtNode_clone", 3, "struct sGtNode"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value506);
                                        if(right_value506 && right_value506 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sGtNode_finalize,right_value506, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value506;
                                        __freed_obj__ = 0;
                                        if(_if_conditional509=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional509) {
                                            __dec_obj223=result_281->mLeft;
                                            result_281->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value507=sNode_clone(self->mLeft))));
                                            if(__dec_obj223) { __dec_obj223 = come_decrement_ref_count(__dec_obj223, ((struct sNode*)__dec_obj223)->finalize, ((struct sNode*)__dec_obj223)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value507);
                                            if(right_value507 && right_value507 != __result_obj__ && !__freed_obj__) { right_value507 = come_decrement_ref_count(right_value507, ((struct sNode*)right_value507)->finalize, ((struct sNode*)right_value507)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value507;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional510=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional510) {
                                            __dec_obj224=result_281->mRight;
                                            result_281->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value508=sNode_clone(self->mRight))));
                                            if(__dec_obj224) { __dec_obj224 = come_decrement_ref_count(__dec_obj224, ((struct sNode*)__dec_obj224)->finalize, ((struct sNode*)__dec_obj224)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value508);
                                            if(right_value508 && right_value508 != __result_obj__ && !__freed_obj__) { right_value508 = come_decrement_ref_count(right_value508, ((struct sNode*)right_value508)->finalize, ((struct sNode*)right_value508)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value508;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional511=self!=((void*)0),                                        _if_conditional511) {
                                            result_281->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional512=self!=((void*)0),                                        _if_conditional512) {
                                            result_281->sline=self->sline;
                                        }
                                        if(_if_conditional513=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional513) {
                                            __dec_obj225=result_281->sname;
                                            result_281->sname=(char*)come_increment_ref_count(((char*)(right_value509=string_clone(self->sname))));
                                            if(__dec_obj225) { __dec_obj225 = come_decrement_ref_count(__dec_obj225, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value509);
                                            if(right_value509 && right_value509 != __result_obj__ && !__freed_obj__) { right_value509 = come_decrement_ref_count(right_value509, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value509;
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
_Bool _if_conditional515;
_Bool _if_conditional516;
_Bool _if_conditional517;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional515=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional515) {
                                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional516=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional516) {
                                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional517=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional517) {
                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sLtNode* sLtNode_clone(struct sLtNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional518;
struct sLtNode* __result303__;
void* right_value514;
struct sLtNode* result_283;
_Bool _if_conditional519;
void* right_value515;
struct sNode* __dec_obj226;
_Bool _if_conditional520;
void* right_value516;
struct sNode* __dec_obj227;
_Bool _if_conditional521;
_Bool _if_conditional522;
_Bool _if_conditional523;
void* right_value517;
char* __dec_obj228;
struct sLtNode* __result304__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value514, 0, sizeof(void*));
memset(&result_283, 0, sizeof(struct sLtNode*));
memset(&right_value515, 0, sizeof(void*));
memset(&right_value516, 0, sizeof(void*));
memset(&right_value517, 0, sizeof(void*));
                                            if(_if_conditional518=self==(void*)0,                                            _if_conditional518) {
                                                __result303__ = __result_obj__ = (void*)0;
                                                return __result303__;
                                            }
                                            result_283=(struct sLtNode*)come_increment_ref_count(((struct sLtNode*)(right_value514=(struct sLtNode*)come_calloc(1, sizeof(struct sLtNode)*(1), "sLtNode_clone", 3, "struct sLtNode"))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value514);
                                            if(right_value514 && right_value514 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sLtNode_finalize,right_value514, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value514;
                                            __freed_obj__ = 0;
                                            if(_if_conditional519=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional519) {
                                                __dec_obj226=result_283->mLeft;
                                                result_283->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value515=sNode_clone(self->mLeft))));
                                                if(__dec_obj226) { __dec_obj226 = come_decrement_ref_count(__dec_obj226, ((struct sNode*)__dec_obj226)->finalize, ((struct sNode*)__dec_obj226)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value515);
                                                if(right_value515 && right_value515 != __result_obj__ && !__freed_obj__) { right_value515 = come_decrement_ref_count(right_value515, ((struct sNode*)right_value515)->finalize, ((struct sNode*)right_value515)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value515;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional520=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional520) {
                                                __dec_obj227=result_283->mRight;
                                                result_283->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value516=sNode_clone(self->mRight))));
                                                if(__dec_obj227) { __dec_obj227 = come_decrement_ref_count(__dec_obj227, ((struct sNode*)__dec_obj227)->finalize, ((struct sNode*)__dec_obj227)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value516);
                                                if(right_value516 && right_value516 != __result_obj__ && !__freed_obj__) { right_value516 = come_decrement_ref_count(right_value516, ((struct sNode*)right_value516)->finalize, ((struct sNode*)right_value516)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value516;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional521=self!=((void*)0),                                            _if_conditional521) {
                                                result_283->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional522=self!=((void*)0),                                            _if_conditional522) {
                                                result_283->sline=self->sline;
                                            }
                                            if(_if_conditional523=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional523) {
                                                __dec_obj228=result_283->sname;
                                                result_283->sname=(char*)come_increment_ref_count(((char*)(right_value517=string_clone(self->sname))));
                                                if(__dec_obj228) { __dec_obj228 = come_decrement_ref_count(__dec_obj228, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value517);
                                                if(right_value517 && right_value517 != __result_obj__ && !__freed_obj__) { right_value517 = come_decrement_ref_count(right_value517, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value517;
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
void* right_value519;
struct sNode* node_284;
_Bool _while_condtional14;
_Bool _if_conditional524;
void* right_value520;
struct sNode* right_285;
void* right_value521;
void* right_value522;
struct sNode* _inf_value25;
struct sEq2Node* _inf_obj_value25;
void* right_value527;
struct sNode* __result309__;
_Bool _if_conditional534;
void* right_value528;
struct sNode* right_287;
void* right_value529;
void* right_value530;
struct sNode* _inf_value26;
struct sEqNode* _inf_obj_value26;
void* right_value535;
struct sNode* __result312__;
_Bool _if_conditional544;
void* right_value536;
struct sNode* right_289;
void* right_value537;
void* right_value538;
struct sNode* _inf_value27;
struct sNotEq2Node* _inf_obj_value27;
void* right_value543;
struct sNode* __result315__;
_Bool _if_conditional554;
void* right_value544;
struct sNode* right_291;
void* right_value545;
void* right_value546;
struct sNode* _inf_value28;
struct sNotEqNode* _inf_obj_value28;
void* right_value551;
struct sNode* __result318__;
_Bool _if_conditional564;
void* right_value552;
struct sNode* right_293;
void* right_value553;
void* right_value554;
struct sNode* _inf_value29;
struct sEq2Node* _inf_obj_value29;
void* right_value559;
struct sNode* __result321__;
_Bool _if_conditional574;
void* right_value560;
struct sNode* right_295;
void* right_value561;
void* right_value562;
struct sNode* _inf_value30;
struct sEqNode* _inf_obj_value30;
void* right_value567;
struct sNode* __result324__;
_Bool _if_conditional584;
void* right_value568;
struct sNode* right_297;
void* right_value569;
void* right_value570;
struct sNode* _inf_value31;
struct sNotEq2Node* _inf_obj_value31;
void* right_value575;
struct sNode* __result327__;
_Bool _if_conditional594;
void* right_value576;
struct sNode* right_299;
void* right_value577;
void* right_value578;
struct sNode* _inf_value32;
struct sNotEqNode* _inf_obj_value32;
void* right_value583;
struct sNode* __result330__;
struct sNode* __result331__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value519, 0, sizeof(void*));
memset(&node_284, 0, sizeof(struct sNode*));
memset(&right_value520, 0, sizeof(void*));
memset(&right_285, 0, sizeof(struct sNode*));
memset(&right_value521, 0, sizeof(void*));
memset(&right_value522, 0, sizeof(void*));
memset(&right_value527, 0, sizeof(void*));
memset(&right_value528, 0, sizeof(void*));
memset(&right_287, 0, sizeof(struct sNode*));
memset(&right_value529, 0, sizeof(void*));
memset(&right_value530, 0, sizeof(void*));
memset(&right_value535, 0, sizeof(void*));
memset(&right_value536, 0, sizeof(void*));
memset(&right_289, 0, sizeof(struct sNode*));
memset(&right_value537, 0, sizeof(void*));
memset(&right_value538, 0, sizeof(void*));
memset(&right_value543, 0, sizeof(void*));
memset(&right_value544, 0, sizeof(void*));
memset(&right_291, 0, sizeof(struct sNode*));
memset(&right_value545, 0, sizeof(void*));
memset(&right_value546, 0, sizeof(void*));
memset(&right_value551, 0, sizeof(void*));
memset(&right_value552, 0, sizeof(void*));
memset(&right_293, 0, sizeof(struct sNode*));
memset(&right_value553, 0, sizeof(void*));
memset(&right_value554, 0, sizeof(void*));
memset(&right_value559, 0, sizeof(void*));
memset(&right_value560, 0, sizeof(void*));
memset(&right_295, 0, sizeof(struct sNode*));
memset(&right_value561, 0, sizeof(void*));
memset(&right_value562, 0, sizeof(void*));
memset(&right_value567, 0, sizeof(void*));
memset(&right_value568, 0, sizeof(void*));
memset(&right_297, 0, sizeof(struct sNode*));
memset(&right_value569, 0, sizeof(void*));
memset(&right_value570, 0, sizeof(void*));
memset(&right_value575, 0, sizeof(void*));
memset(&right_value576, 0, sizeof(void*));
memset(&right_299, 0, sizeof(struct sNode*));
memset(&right_value577, 0, sizeof(void*));
memset(&right_value578, 0, sizeof(void*));
memset(&right_value583, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_284=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value519=comparison_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value519);
    if(right_value519 && right_value519 != __result_obj__ && !__freed_obj__) { right_value519 = come_decrement_ref_count(right_value519, ((struct sNode*)right_value519)->finalize, ((struct sNode*)right_value519)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value519;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional14=*info->p,    _while_condtional14) {
        if(_if_conditional524=*info->p==61&&*(info->p+1)==61&&*(info->p+2)==61,        _if_conditional524) {
            info->p+=3;
            skip_spaces_and_lf(info);
            right_285=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value520=eq_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value520);
            if(right_value520 && right_value520 != __result_obj__ && !__freed_obj__) { right_value520 = come_decrement_ref_count(right_value520, ((struct sNode*)right_value520)->finalize, ((struct sNode*)right_value520)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value520;
            __freed_obj__ = 0;
            _inf_value25=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2458, "struct sNode");
            _inf_obj_value25=come_increment_ref_count(((struct sEq2Node*)(right_value522=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value521=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2458, "struct sEq2Node")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_285),(_Bool)0,info))));
            _inf_value25->_protocol_obj=_inf_obj_value25;
            _inf_value25->finalize=(void*)sEq2Node_finalize;
            _inf_value25->clone=(void*)sEq2Node_clone;
            _inf_value25->compile=(void*)sEq2Node_compile;
            _inf_value25->sline=(void*)sEq2Node_sline;
            _inf_value25->sname=(void*)sEq2Node_sname;
            _inf_value25->terminated=(void*)sEq2Node_terminated;
            _inf_value25->kind=(void*)sEq2Node_kind;
            __result309__ = __result_obj__ = ((struct sNode*)(right_value527=_inf_value25));
            if(right_285 && !__freed_obj__) { right_285 = come_decrement_ref_count(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0); } 
            if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value521);
            if(right_value521 && right_value521 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value521, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value521;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value522);
            if(right_value522 && right_value522 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value522, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value522;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value527);
            if(right_value527 && right_value527 != __result_obj__ && !__freed_obj__) { right_value527 = come_decrement_ref_count(right_value527, ((struct sNode*)right_value527)->finalize, ((struct sNode*)right_value527)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value527;
            __freed_obj__ = 0;
            return __result309__;
            if(right_285 && !__freed_obj__) { right_285 = come_decrement_ref_count(right_285, ((struct sNode*)right_285)->finalize, ((struct sNode*)right_285)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional534=*info->p==61&&*(info->p+1)==61,            _if_conditional534) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_287=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value528=eq_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value528);
                if(right_value528 && right_value528 != __result_obj__ && !__freed_obj__) { right_value528 = come_decrement_ref_count(right_value528, ((struct sNode*)right_value528)->finalize, ((struct sNode*)right_value528)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value528;
                __freed_obj__ = 0;
                _inf_value26=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2466, "struct sNode");
                _inf_obj_value26=come_increment_ref_count(((struct sEqNode*)(right_value530=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value529=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2466, "struct sEqNode")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_287),(_Bool)0,info))));
                _inf_value26->_protocol_obj=_inf_obj_value26;
                _inf_value26->finalize=(void*)sEqNode_finalize;
                _inf_value26->clone=(void*)sEqNode_clone;
                _inf_value26->compile=(void*)sEqNode_compile;
                _inf_value26->sline=(void*)sEqNode_sline;
                _inf_value26->sname=(void*)sEqNode_sname;
                _inf_value26->terminated=(void*)sEqNode_terminated;
                _inf_value26->kind=(void*)sEqNode_kind;
                __result312__ = __result_obj__ = ((struct sNode*)(right_value535=_inf_value26));
                if(right_287 && !__freed_obj__) { right_287 = come_decrement_ref_count(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0); } 
                if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value529);
                if(right_value529 && right_value529 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value529, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value529;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value530);
                if(right_value530 && right_value530 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value530, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value530;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value535);
                if(right_value535 && right_value535 != __result_obj__ && !__freed_obj__) { right_value535 = come_decrement_ref_count(right_value535, ((struct sNode*)right_value535)->finalize, ((struct sNode*)right_value535)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value535;
                __freed_obj__ = 0;
                return __result312__;
                if(right_287 && !__freed_obj__) { right_287 = come_decrement_ref_count(right_287, ((struct sNode*)right_287)->finalize, ((struct sNode*)right_287)->_protocol_obj, 0, 0, 0); } 
            }
            else {
                if(_if_conditional544=*info->p==33&&*(info->p+1)==61&&*(info->p+2)==61,                _if_conditional544) {
                    info->p+=3;
                    skip_spaces_and_lf(info);
                    right_289=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value536=eq_exp(info))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value536);
                    if(right_value536 && right_value536 != __result_obj__ && !__freed_obj__) { right_value536 = come_decrement_ref_count(right_value536, ((struct sNode*)right_value536)->finalize, ((struct sNode*)right_value536)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value536;
                    __freed_obj__ = 0;
                    _inf_value27=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2474, "struct sNode");
                    _inf_obj_value27=come_increment_ref_count(((struct sNotEq2Node*)(right_value538=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value537=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2474, "struct sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_289),(_Bool)0,info))));
                    _inf_value27->_protocol_obj=_inf_obj_value27;
                    _inf_value27->finalize=(void*)sNotEq2Node_finalize;
                    _inf_value27->clone=(void*)sNotEq2Node_clone;
                    _inf_value27->compile=(void*)sNotEq2Node_compile;
                    _inf_value27->sline=(void*)sNotEq2Node_sline;
                    _inf_value27->sname=(void*)sNotEq2Node_sname;
                    _inf_value27->terminated=(void*)sNotEq2Node_terminated;
                    _inf_value27->kind=(void*)sNotEq2Node_kind;
                    __result315__ = __result_obj__ = ((struct sNode*)(right_value543=_inf_value27));
                    if(right_289 && !__freed_obj__) { right_289 = come_decrement_ref_count(right_289, ((struct sNode*)right_289)->finalize, ((struct sNode*)right_289)->_protocol_obj, 0, 0, 0); } 
                    if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value537);
                    if(right_value537 && right_value537 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value537, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value537;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value538);
                    if(right_value538 && right_value538 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value538, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[1] = right_value538;
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value543);
                    if(right_value543 && right_value543 != __result_obj__ && !__freed_obj__) { right_value543 = come_decrement_ref_count(right_value543, ((struct sNode*)right_value543)->finalize, ((struct sNode*)right_value543)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[2] = right_value543;
                    __freed_obj__ = 0;
                    return __result315__;
                    if(right_289 && !__freed_obj__) { right_289 = come_decrement_ref_count(right_289, ((struct sNode*)right_289)->finalize, ((struct sNode*)right_289)->_protocol_obj, 0, 0, 0); } 
                }
                else {
                    if(_if_conditional554=*info->p==33&&*(info->p+1)==61,                    _if_conditional554) {
                        info->p+=2;
                        skip_spaces_and_lf(info);
                        right_291=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value544=eq_exp(info))));
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value544);
                        if(right_value544 && right_value544 != __result_obj__ && !__freed_obj__) { right_value544 = come_decrement_ref_count(right_value544, ((struct sNode*)right_value544)->finalize, ((struct sNode*)right_value544)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value544;
                        __freed_obj__ = 0;
                        _inf_value28=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2482, "struct sNode");
                        _inf_obj_value28=come_increment_ref_count(((struct sNotEqNode*)(right_value546=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value545=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2482, "struct sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_291),(_Bool)0,info))));
                        _inf_value28->_protocol_obj=_inf_obj_value28;
                        _inf_value28->finalize=(void*)sNotEqNode_finalize;
                        _inf_value28->clone=(void*)sNotEqNode_clone;
                        _inf_value28->compile=(void*)sNotEqNode_compile;
                        _inf_value28->sline=(void*)sNotEqNode_sline;
                        _inf_value28->sname=(void*)sNotEqNode_sname;
                        _inf_value28->terminated=(void*)sNotEqNode_terminated;
                        _inf_value28->kind=(void*)sNotEqNode_kind;
                        __result318__ = __result_obj__ = ((struct sNode*)(right_value551=_inf_value28));
                        if(right_291 && !__freed_obj__) { right_291 = come_decrement_ref_count(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0, 0, 0); } 
                        if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value545);
                        if(right_value545 && right_value545 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value545, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value545;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value546);
                        if(right_value546 && right_value546 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value546, (void*)0, (void*)0, 0, 1, 0, 0); }
                        __right_value_freed_obj[1] = right_value546;
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value551);
                        if(right_value551 && right_value551 != __result_obj__ && !__freed_obj__) { right_value551 = come_decrement_ref_count(right_value551, ((struct sNode*)right_value551)->finalize, ((struct sNode*)right_value551)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[2] = right_value551;
                        __freed_obj__ = 0;
                        return __result318__;
                        if(right_291 && !__freed_obj__) { right_291 = come_decrement_ref_count(right_291, ((struct sNode*)right_291)->finalize, ((struct sNode*)right_291)->_protocol_obj, 0, 0, 0); } 
                    }
                    else {
                        if(_if_conditional564=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61&&*(info->p+3)==61,                        _if_conditional564) {
                            info->p+=4;
                            skip_spaces_and_lf(info);
                            right_293=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value552=eq_exp(info))));
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value552);
                            if(right_value552 && right_value552 != __result_obj__ && !__freed_obj__) { right_value552 = come_decrement_ref_count(right_value552, ((struct sNode*)right_value552)->finalize, ((struct sNode*)right_value552)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[0] = right_value552;
                            __freed_obj__ = 0;
                            _inf_value29=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2490, "struct sNode");
                            _inf_obj_value29=come_increment_ref_count(((struct sEq2Node*)(right_value554=sEq2Node_initialize((struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value553=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "13op.c", 2490, "struct sEq2Node")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_293),(_Bool)1,info))));
                            _inf_value29->_protocol_obj=_inf_obj_value29;
                            _inf_value29->finalize=(void*)sEq2Node_finalize;
                            _inf_value29->clone=(void*)sEq2Node_clone;
                            _inf_value29->compile=(void*)sEq2Node_compile;
                            _inf_value29->sline=(void*)sEq2Node_sline;
                            _inf_value29->sname=(void*)sEq2Node_sname;
                            _inf_value29->terminated=(void*)sEq2Node_terminated;
                            _inf_value29->kind=(void*)sEq2Node_kind;
                            __result321__ = __result_obj__ = ((struct sNode*)(right_value559=_inf_value29));
                            if(right_293 && !__freed_obj__) { right_293 = come_decrement_ref_count(right_293, ((struct sNode*)right_293)->finalize, ((struct sNode*)right_293)->_protocol_obj, 0, 0, 0); } 
                            if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value553);
                            if(right_value553 && right_value553 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value553, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[0] = right_value553;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value554);
                            if(right_value554 && right_value554 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value554, (void*)0, (void*)0, 0, 1, 0, 0); }
                            __right_value_freed_obj[1] = right_value554;
                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value559);
                            if(right_value559 && right_value559 != __result_obj__ && !__freed_obj__) { right_value559 = come_decrement_ref_count(right_value559, ((struct sNode*)right_value559)->finalize, ((struct sNode*)right_value559)->_protocol_obj, 1, 0, 0); } 
                            __right_value_freed_obj[2] = right_value559;
                            __freed_obj__ = 0;
                            return __result321__;
                            if(right_293 && !__freed_obj__) { right_293 = come_decrement_ref_count(right_293, ((struct sNode*)right_293)->finalize, ((struct sNode*)right_293)->_protocol_obj, 0, 0, 0); } 
                        }
                        else {
                            if(_if_conditional574=*info->p==92&&*(info->p+1)==61&&*(info->p+2)==61,                            _if_conditional574) {
                                info->p+=3;
                                skip_spaces_and_lf(info);
                                right_295=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value560=eq_exp(info))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value560);
                                if(right_value560 && right_value560 != __result_obj__ && !__freed_obj__) { right_value560 = come_decrement_ref_count(right_value560, ((struct sNode*)right_value560)->finalize, ((struct sNode*)right_value560)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[0] = right_value560;
                                __freed_obj__ = 0;
                                _inf_value30=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2498, "struct sNode");
                                _inf_obj_value30=come_increment_ref_count(((struct sEqNode*)(right_value562=sEqNode_initialize((struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value561=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "13op.c", 2498, "struct sEqNode")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_295),(_Bool)1,info))));
                                _inf_value30->_protocol_obj=_inf_obj_value30;
                                _inf_value30->finalize=(void*)sEqNode_finalize;
                                _inf_value30->clone=(void*)sEqNode_clone;
                                _inf_value30->compile=(void*)sEqNode_compile;
                                _inf_value30->sline=(void*)sEqNode_sline;
                                _inf_value30->sname=(void*)sEqNode_sname;
                                _inf_value30->terminated=(void*)sEqNode_terminated;
                                _inf_value30->kind=(void*)sEqNode_kind;
                                __result324__ = __result_obj__ = ((struct sNode*)(right_value567=_inf_value30));
                                if(right_295 && !__freed_obj__) { right_295 = come_decrement_ref_count(right_295, ((struct sNode*)right_295)->finalize, ((struct sNode*)right_295)->_protocol_obj, 0, 0, 0); } 
                                if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value561);
                                if(right_value561 && right_value561 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value561, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value561;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value562);
                                if(right_value562 && right_value562 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value562, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[1] = right_value562;
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value567);
                                if(right_value567 && right_value567 != __result_obj__ && !__freed_obj__) { right_value567 = come_decrement_ref_count(right_value567, ((struct sNode*)right_value567)->finalize, ((struct sNode*)right_value567)->_protocol_obj, 1, 0, 0); } 
                                __right_value_freed_obj[2] = right_value567;
                                __freed_obj__ = 0;
                                return __result324__;
                                if(right_295 && !__freed_obj__) { right_295 = come_decrement_ref_count(right_295, ((struct sNode*)right_295)->finalize, ((struct sNode*)right_295)->_protocol_obj, 0, 0, 0); } 
                            }
                            else {
                                if(_if_conditional584=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61&&*(info->p+3)==61,                                _if_conditional584) {
                                    info->p+=4;
                                    skip_spaces_and_lf(info);
                                    right_297=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value568=eq_exp(info))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value568);
                                    if(right_value568 && right_value568 != __result_obj__ && !__freed_obj__) { right_value568 = come_decrement_ref_count(right_value568, ((struct sNode*)right_value568)->finalize, ((struct sNode*)right_value568)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value568;
                                    __freed_obj__ = 0;
                                    _inf_value31=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2506, "struct sNode");
                                    _inf_obj_value31=come_increment_ref_count(((struct sNotEq2Node*)(right_value570=sNotEq2Node_initialize((struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value569=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "13op.c", 2506, "struct sNotEq2Node")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_297),(_Bool)1,info))));
                                    _inf_value31->_protocol_obj=_inf_obj_value31;
                                    _inf_value31->finalize=(void*)sNotEq2Node_finalize;
                                    _inf_value31->clone=(void*)sNotEq2Node_clone;
                                    _inf_value31->compile=(void*)sNotEq2Node_compile;
                                    _inf_value31->sline=(void*)sNotEq2Node_sline;
                                    _inf_value31->sname=(void*)sNotEq2Node_sname;
                                    _inf_value31->terminated=(void*)sNotEq2Node_terminated;
                                    _inf_value31->kind=(void*)sNotEq2Node_kind;
                                    __result327__ = __result_obj__ = ((struct sNode*)(right_value575=_inf_value31));
                                    if(right_297 && !__freed_obj__) { right_297 = come_decrement_ref_count(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0); } 
                                    if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value569);
                                    if(right_value569 && right_value569 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value569, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value569;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value570);
                                    if(right_value570 && right_value570 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value570, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[1] = right_value570;
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value575);
                                    if(right_value575 && right_value575 != __result_obj__ && !__freed_obj__) { right_value575 = come_decrement_ref_count(right_value575, ((struct sNode*)right_value575)->finalize, ((struct sNode*)right_value575)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[2] = right_value575;
                                    __freed_obj__ = 0;
                                    return __result327__;
                                    if(right_297 && !__freed_obj__) { right_297 = come_decrement_ref_count(right_297, ((struct sNode*)right_297)->finalize, ((struct sNode*)right_297)->_protocol_obj, 0, 0, 0); } 
                                }
                                else {
                                    if(_if_conditional594=*info->p==92&&*(info->p+1)==33&&*(info->p+2)==61,                                    _if_conditional594) {
                                        info->p+=3;
                                        skip_spaces_and_lf(info);
                                        right_299=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value576=eq_exp(info))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value576);
                                        if(right_value576 && right_value576 != __result_obj__ && !__freed_obj__) { right_value576 = come_decrement_ref_count(right_value576, ((struct sNode*)right_value576)->finalize, ((struct sNode*)right_value576)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value576;
                                        __freed_obj__ = 0;
                                        _inf_value32=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2514, "struct sNode");
                                        _inf_obj_value32=come_increment_ref_count(((struct sNotEqNode*)(right_value578=sNotEqNode_initialize((struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value577=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "13op.c", 2514, "struct sNotEqNode")))),(struct sNode*)come_increment_ref_count(node_284),(struct sNode*)come_increment_ref_count(right_299),(_Bool)1,info))));
                                        _inf_value32->_protocol_obj=_inf_obj_value32;
                                        _inf_value32->finalize=(void*)sNotEqNode_finalize;
                                        _inf_value32->clone=(void*)sNotEqNode_clone;
                                        _inf_value32->compile=(void*)sNotEqNode_compile;
                                        _inf_value32->sline=(void*)sNotEqNode_sline;
                                        _inf_value32->sname=(void*)sNotEqNode_sname;
                                        _inf_value32->terminated=(void*)sNotEqNode_terminated;
                                        _inf_value32->kind=(void*)sNotEqNode_kind;
                                        __result330__ = __result_obj__ = ((struct sNode*)(right_value583=_inf_value32));
                                        if(right_299 && !__freed_obj__) { right_299 = come_decrement_ref_count(right_299, ((struct sNode*)right_299)->finalize, ((struct sNode*)right_299)->_protocol_obj, 0, 0, 0); } 
                                        if(node_284 && !__freed_obj__) { node_284 = come_decrement_ref_count(node_284, ((struct sNode*)node_284)->finalize, ((struct sNode*)node_284)->_protocol_obj, 0, 0, 0); } 
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value577);
                                        if(right_value577 && right_value577 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value577, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value577;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value578);
                                        if(right_value578 && right_value578 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value578, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[1] = right_value578;
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value583);
                                        if(right_value583 && right_value583 != __result_obj__ && !__freed_obj__) { right_value583 = come_decrement_ref_count(right_value583, ((struct sNode*)right_value583)->finalize, ((struct sNode*)right_value583)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[2] = right_value583;
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
_Bool _if_conditional565;
_Bool _if_conditional566;
_Bool _if_conditional567;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                if(_if_conditional565=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional565) {
                                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional566=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional566) {
                                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                }
                                if(_if_conditional567=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional567) {
                                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                }
}

static struct sEq2Node* sEq2Node_clone(struct sEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional568;
struct sEq2Node* __result319__;
void* right_value555;
struct sEq2Node* result_294;
_Bool _if_conditional569;
void* right_value556;
struct sNode* __dec_obj241;
_Bool _if_conditional570;
void* right_value557;
struct sNode* __dec_obj242;
_Bool _if_conditional571;
_Bool _if_conditional572;
_Bool _if_conditional573;
void* right_value558;
char* __dec_obj243;
struct sEq2Node* __result320__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value555, 0, sizeof(void*));
memset(&result_294, 0, sizeof(struct sEq2Node*));
memset(&right_value556, 0, sizeof(void*));
memset(&right_value557, 0, sizeof(void*));
memset(&right_value558, 0, sizeof(void*));
                                if(_if_conditional568=self==(void*)0,                                _if_conditional568) {
                                    __result319__ = __result_obj__ = (void*)0;
                                    return __result319__;
                                }
                                result_294=(struct sEq2Node*)come_increment_ref_count(((struct sEq2Node*)(right_value555=(struct sEq2Node*)come_calloc(1, sizeof(struct sEq2Node)*(1), "sEq2Node_clone", 3, "struct sEq2Node"))));
                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value555);
                                if(right_value555 && right_value555 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEq2Node_finalize,right_value555, (void*)0, (void*)0, 0, 1, 0, 0); }
                                __right_value_freed_obj[0] = right_value555;
                                __freed_obj__ = 0;
                                if(_if_conditional569=self!=((void*)0)&&self->mLeft!=((void*)0),                                _if_conditional569) {
                                    __dec_obj241=result_294->mLeft;
                                    result_294->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value556=sNode_clone(self->mLeft))));
                                    if(__dec_obj241) { __dec_obj241 = come_decrement_ref_count(__dec_obj241, ((struct sNode*)__dec_obj241)->finalize, ((struct sNode*)__dec_obj241)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value556);
                                    if(right_value556 && right_value556 != __result_obj__ && !__freed_obj__) { right_value556 = come_decrement_ref_count(right_value556, ((struct sNode*)right_value556)->finalize, ((struct sNode*)right_value556)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value556;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional570=self!=((void*)0)&&self->mRight!=((void*)0),                                _if_conditional570) {
                                    __dec_obj242=result_294->mRight;
                                    result_294->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value557=sNode_clone(self->mRight))));
                                    if(__dec_obj242) { __dec_obj242 = come_decrement_ref_count(__dec_obj242, ((struct sNode*)__dec_obj242)->finalize, ((struct sNode*)__dec_obj242)->_protocol_obj, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value557);
                                    if(right_value557 && right_value557 != __result_obj__ && !__freed_obj__) { right_value557 = come_decrement_ref_count(right_value557, ((struct sNode*)right_value557)->finalize, ((struct sNode*)right_value557)->_protocol_obj, 1, 0, 0); } 
                                    __right_value_freed_obj[0] = right_value557;
                                    __freed_obj__ = 0;
                                }
                                if(_if_conditional571=self!=((void*)0),                                _if_conditional571) {
                                    result_294->mQuote=self->mQuote;
                                }
                                if(_if_conditional572=self!=((void*)0),                                _if_conditional572) {
                                    result_294->sline=self->sline;
                                }
                                if(_if_conditional573=self!=((void*)0)&&self->sname!=((void*)0),                                _if_conditional573) {
                                    __dec_obj243=result_294->sname;
                                    result_294->sname=(char*)come_increment_ref_count(((char*)(right_value558=string_clone(self->sname))));
                                    if(__dec_obj243) { __dec_obj243 = come_decrement_ref_count(__dec_obj243, (void*)0, (void*)0, 0,0,0); }
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value558);
                                    if(right_value558 && right_value558 != __result_obj__ && !__freed_obj__) { right_value558 = come_decrement_ref_count(right_value558, (void*)0, (void*)0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value558;
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
_Bool _if_conditional575;
_Bool _if_conditional576;
_Bool _if_conditional577;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                    if(_if_conditional575=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional575) {
                                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional576=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional576) {
                                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                    }
                                    if(_if_conditional577=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional577) {
                                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                    }
}

static struct sEqNode* sEqNode_clone(struct sEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional578;
struct sEqNode* __result322__;
void* right_value563;
struct sEqNode* result_296;
_Bool _if_conditional579;
void* right_value564;
struct sNode* __dec_obj244;
_Bool _if_conditional580;
void* right_value565;
struct sNode* __dec_obj245;
_Bool _if_conditional581;
_Bool _if_conditional582;
_Bool _if_conditional583;
void* right_value566;
char* __dec_obj246;
struct sEqNode* __result323__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value563, 0, sizeof(void*));
memset(&result_296, 0, sizeof(struct sEqNode*));
memset(&right_value564, 0, sizeof(void*));
memset(&right_value565, 0, sizeof(void*));
memset(&right_value566, 0, sizeof(void*));
                                    if(_if_conditional578=self==(void*)0,                                    _if_conditional578) {
                                        __result322__ = __result_obj__ = (void*)0;
                                        return __result322__;
                                    }
                                    result_296=(struct sEqNode*)come_increment_ref_count(((struct sEqNode*)(right_value563=(struct sEqNode*)come_calloc(1, sizeof(struct sEqNode)*(1), "sEqNode_clone", 3, "struct sEqNode"))));
                                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value563);
                                    if(right_value563 && right_value563 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sEqNode_finalize,right_value563, (void*)0, (void*)0, 0, 1, 0, 0); }
                                    __right_value_freed_obj[0] = right_value563;
                                    __freed_obj__ = 0;
                                    if(_if_conditional579=self!=((void*)0)&&self->mLeft!=((void*)0),                                    _if_conditional579) {
                                        __dec_obj244=result_296->mLeft;
                                        result_296->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value564=sNode_clone(self->mLeft))));
                                        if(__dec_obj244) { __dec_obj244 = come_decrement_ref_count(__dec_obj244, ((struct sNode*)__dec_obj244)->finalize, ((struct sNode*)__dec_obj244)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value564);
                                        if(right_value564 && right_value564 != __result_obj__ && !__freed_obj__) { right_value564 = come_decrement_ref_count(right_value564, ((struct sNode*)right_value564)->finalize, ((struct sNode*)right_value564)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value564;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional580=self!=((void*)0)&&self->mRight!=((void*)0),                                    _if_conditional580) {
                                        __dec_obj245=result_296->mRight;
                                        result_296->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value565=sNode_clone(self->mRight))));
                                        if(__dec_obj245) { __dec_obj245 = come_decrement_ref_count(__dec_obj245, ((struct sNode*)__dec_obj245)->finalize, ((struct sNode*)__dec_obj245)->_protocol_obj, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value565);
                                        if(right_value565 && right_value565 != __result_obj__ && !__freed_obj__) { right_value565 = come_decrement_ref_count(right_value565, ((struct sNode*)right_value565)->finalize, ((struct sNode*)right_value565)->_protocol_obj, 1, 0, 0); } 
                                        __right_value_freed_obj[0] = right_value565;
                                        __freed_obj__ = 0;
                                    }
                                    if(_if_conditional581=self!=((void*)0),                                    _if_conditional581) {
                                        result_296->mQuote=self->mQuote;
                                    }
                                    if(_if_conditional582=self!=((void*)0),                                    _if_conditional582) {
                                        result_296->sline=self->sline;
                                    }
                                    if(_if_conditional583=self!=((void*)0)&&self->sname!=((void*)0),                                    _if_conditional583) {
                                        __dec_obj246=result_296->sname;
                                        result_296->sname=(char*)come_increment_ref_count(((char*)(right_value566=string_clone(self->sname))));
                                        if(__dec_obj246) { __dec_obj246 = come_decrement_ref_count(__dec_obj246, (void*)0, (void*)0, 0,0,0); }
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value566);
                                        if(right_value566 && right_value566 != __result_obj__ && !__freed_obj__) { right_value566 = come_decrement_ref_count(right_value566, (void*)0, (void*)0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value566;
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
_Bool _if_conditional585;
_Bool _if_conditional586;
_Bool _if_conditional587;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                        if(_if_conditional585=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional585) {
                                            if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional586=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional586) {
                                            if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                        }
                                        if(_if_conditional587=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional587) {
                                            if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                        }
}

static struct sNotEq2Node* sNotEq2Node_clone(struct sNotEq2Node* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional588;
struct sNotEq2Node* __result325__;
void* right_value571;
struct sNotEq2Node* result_298;
_Bool _if_conditional589;
void* right_value572;
struct sNode* __dec_obj247;
_Bool _if_conditional590;
void* right_value573;
struct sNode* __dec_obj248;
_Bool _if_conditional591;
_Bool _if_conditional592;
_Bool _if_conditional593;
void* right_value574;
char* __dec_obj249;
struct sNotEq2Node* __result326__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value571, 0, sizeof(void*));
memset(&result_298, 0, sizeof(struct sNotEq2Node*));
memset(&right_value572, 0, sizeof(void*));
memset(&right_value573, 0, sizeof(void*));
memset(&right_value574, 0, sizeof(void*));
                                        if(_if_conditional588=self==(void*)0,                                        _if_conditional588) {
                                            __result325__ = __result_obj__ = (void*)0;
                                            return __result325__;
                                        }
                                        result_298=(struct sNotEq2Node*)come_increment_ref_count(((struct sNotEq2Node*)(right_value571=(struct sNotEq2Node*)come_calloc(1, sizeof(struct sNotEq2Node)*(1), "sNotEq2Node_clone", 3, "struct sNotEq2Node"))));
                                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value571);
                                        if(right_value571 && right_value571 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEq2Node_finalize,right_value571, (void*)0, (void*)0, 0, 1, 0, 0); }
                                        __right_value_freed_obj[0] = right_value571;
                                        __freed_obj__ = 0;
                                        if(_if_conditional589=self!=((void*)0)&&self->mLeft!=((void*)0),                                        _if_conditional589) {
                                            __dec_obj247=result_298->mLeft;
                                            result_298->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value572=sNode_clone(self->mLeft))));
                                            if(__dec_obj247) { __dec_obj247 = come_decrement_ref_count(__dec_obj247, ((struct sNode*)__dec_obj247)->finalize, ((struct sNode*)__dec_obj247)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value572);
                                            if(right_value572 && right_value572 != __result_obj__ && !__freed_obj__) { right_value572 = come_decrement_ref_count(right_value572, ((struct sNode*)right_value572)->finalize, ((struct sNode*)right_value572)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value572;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional590=self!=((void*)0)&&self->mRight!=((void*)0),                                        _if_conditional590) {
                                            __dec_obj248=result_298->mRight;
                                            result_298->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value573=sNode_clone(self->mRight))));
                                            if(__dec_obj248) { __dec_obj248 = come_decrement_ref_count(__dec_obj248, ((struct sNode*)__dec_obj248)->finalize, ((struct sNode*)__dec_obj248)->_protocol_obj, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value573);
                                            if(right_value573 && right_value573 != __result_obj__ && !__freed_obj__) { right_value573 = come_decrement_ref_count(right_value573, ((struct sNode*)right_value573)->finalize, ((struct sNode*)right_value573)->_protocol_obj, 1, 0, 0); } 
                                            __right_value_freed_obj[0] = right_value573;
                                            __freed_obj__ = 0;
                                        }
                                        if(_if_conditional591=self!=((void*)0),                                        _if_conditional591) {
                                            result_298->mQuote=self->mQuote;
                                        }
                                        if(_if_conditional592=self!=((void*)0),                                        _if_conditional592) {
                                            result_298->sline=self->sline;
                                        }
                                        if(_if_conditional593=self!=((void*)0)&&self->sname!=((void*)0),                                        _if_conditional593) {
                                            __dec_obj249=result_298->sname;
                                            result_298->sname=(char*)come_increment_ref_count(((char*)(right_value574=string_clone(self->sname))));
                                            if(__dec_obj249) { __dec_obj249 = come_decrement_ref_count(__dec_obj249, (void*)0, (void*)0, 0,0,0); }
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value574);
                                            if(right_value574 && right_value574 != __result_obj__ && !__freed_obj__) { right_value574 = come_decrement_ref_count(right_value574, (void*)0, (void*)0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value574;
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
_Bool _if_conditional595;
_Bool _if_conditional596;
_Bool _if_conditional597;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                                            if(_if_conditional595=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional595) {
                                                if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional596=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional596) {
                                                if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                                            }
                                            if(_if_conditional597=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional597) {
                                                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                                            }
}

static struct sNotEqNode* sNotEqNode_clone(struct sNotEqNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional598;
struct sNotEqNode* __result328__;
void* right_value579;
struct sNotEqNode* result_300;
_Bool _if_conditional599;
void* right_value580;
struct sNode* __dec_obj250;
_Bool _if_conditional600;
void* right_value581;
struct sNode* __dec_obj251;
_Bool _if_conditional601;
_Bool _if_conditional602;
_Bool _if_conditional603;
void* right_value582;
char* __dec_obj252;
struct sNotEqNode* __result329__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value579, 0, sizeof(void*));
memset(&result_300, 0, sizeof(struct sNotEqNode*));
memset(&right_value580, 0, sizeof(void*));
memset(&right_value581, 0, sizeof(void*));
memset(&right_value582, 0, sizeof(void*));
                                            if(_if_conditional598=self==(void*)0,                                            _if_conditional598) {
                                                __result328__ = __result_obj__ = (void*)0;
                                                return __result328__;
                                            }
                                            result_300=(struct sNotEqNode*)come_increment_ref_count(((struct sNotEqNode*)(right_value579=(struct sNotEqNode*)come_calloc(1, sizeof(struct sNotEqNode)*(1), "sNotEqNode_clone", 3, "struct sNotEqNode"))));
                                            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value579);
                                            if(right_value579 && right_value579 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNotEqNode_finalize,right_value579, (void*)0, (void*)0, 0, 1, 0, 0); }
                                            __right_value_freed_obj[0] = right_value579;
                                            __freed_obj__ = 0;
                                            if(_if_conditional599=self!=((void*)0)&&self->mLeft!=((void*)0),                                            _if_conditional599) {
                                                __dec_obj250=result_300->mLeft;
                                                result_300->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value580=sNode_clone(self->mLeft))));
                                                if(__dec_obj250) { __dec_obj250 = come_decrement_ref_count(__dec_obj250, ((struct sNode*)__dec_obj250)->finalize, ((struct sNode*)__dec_obj250)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value580);
                                                if(right_value580 && right_value580 != __result_obj__ && !__freed_obj__) { right_value580 = come_decrement_ref_count(right_value580, ((struct sNode*)right_value580)->finalize, ((struct sNode*)right_value580)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value580;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional600=self!=((void*)0)&&self->mRight!=((void*)0),                                            _if_conditional600) {
                                                __dec_obj251=result_300->mRight;
                                                result_300->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value581=sNode_clone(self->mRight))));
                                                if(__dec_obj251) { __dec_obj251 = come_decrement_ref_count(__dec_obj251, ((struct sNode*)__dec_obj251)->finalize, ((struct sNode*)__dec_obj251)->_protocol_obj, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value581);
                                                if(right_value581 && right_value581 != __result_obj__ && !__freed_obj__) { right_value581 = come_decrement_ref_count(right_value581, ((struct sNode*)right_value581)->finalize, ((struct sNode*)right_value581)->_protocol_obj, 1, 0, 0); } 
                                                __right_value_freed_obj[0] = right_value581;
                                                __freed_obj__ = 0;
                                            }
                                            if(_if_conditional601=self!=((void*)0),                                            _if_conditional601) {
                                                result_300->mQuote=self->mQuote;
                                            }
                                            if(_if_conditional602=self!=((void*)0),                                            _if_conditional602) {
                                                result_300->sline=self->sline;
                                            }
                                            if(_if_conditional603=self!=((void*)0)&&self->sname!=((void*)0),                                            _if_conditional603) {
                                                __dec_obj252=result_300->sname;
                                                result_300->sname=(char*)come_increment_ref_count(((char*)(right_value582=string_clone(self->sname))));
                                                if(__dec_obj252) { __dec_obj252 = come_decrement_ref_count(__dec_obj252, (void*)0, (void*)0, 0,0,0); }
                                                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value582);
                                                if(right_value582 && right_value582 != __result_obj__ && !__freed_obj__) { right_value582 = come_decrement_ref_count(right_value582, (void*)0, (void*)0, 1, 0, 0); }
                                                __right_value_freed_obj[0] = right_value582;
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
void* right_value584;
struct sNode* node_301;
_Bool _while_condtional15;
_Bool _if_conditional604;
void* right_value585;
struct sNode* right_302;
void* right_value586;
void* right_value587;
struct sNode* _inf_value33;
struct sAndNode* _inf_obj_value33;
void* right_value592;
struct sNode* __result334__;
_Bool _if_conditional614;
void* right_value593;
struct sNode* right_304;
void* right_value594;
void* right_value595;
struct sNode* _inf_value34;
struct sAndNode* _inf_obj_value34;
void* right_value600;
struct sNode* __result337__;
struct sNode* __result338__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value584, 0, sizeof(void*));
memset(&node_301, 0, sizeof(struct sNode*));
memset(&right_value585, 0, sizeof(void*));
memset(&right_302, 0, sizeof(struct sNode*));
memset(&right_value586, 0, sizeof(void*));
memset(&right_value587, 0, sizeof(void*));
memset(&right_value592, 0, sizeof(void*));
memset(&right_value593, 0, sizeof(void*));
memset(&right_304, 0, sizeof(struct sNode*));
memset(&right_value594, 0, sizeof(void*));
memset(&right_value595, 0, sizeof(void*));
memset(&right_value600, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_301=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value584=eq_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value584);
    if(right_value584 && right_value584 != __result_obj__ && !__freed_obj__) { right_value584 = come_decrement_ref_count(right_value584, ((struct sNode*)right_value584)->finalize, ((struct sNode*)right_value584)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value584;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional15=*info->p,    _while_condtional15) {
        if(_if_conditional604=*info->p==38&&*(info->p+1)!=38&&*(info->p+1)!=61,        _if_conditional604) {
            info->p++;
            skip_spaces_and_lf(info);
            right_302=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value585=and_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value585);
            if(right_value585 && right_value585 != __result_obj__ && !__freed_obj__) { right_value585 = come_decrement_ref_count(right_value585, ((struct sNode*)right_value585)->finalize, ((struct sNode*)right_value585)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value585;
            __freed_obj__ = 0;
            _inf_value33=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2541, "struct sNode");
            _inf_obj_value33=come_increment_ref_count(((struct sAndNode*)(right_value587=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value586=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2541, "struct sAndNode")))),(struct sNode*)come_increment_ref_count(node_301),(struct sNode*)come_increment_ref_count(right_302),(_Bool)0,info))));
            _inf_value33->_protocol_obj=_inf_obj_value33;
            _inf_value33->finalize=(void*)sAndNode_finalize;
            _inf_value33->clone=(void*)sAndNode_clone;
            _inf_value33->compile=(void*)sAndNode_compile;
            _inf_value33->sline=(void*)sAndNode_sline;
            _inf_value33->sname=(void*)sAndNode_sname;
            _inf_value33->terminated=(void*)sAndNode_terminated;
            _inf_value33->kind=(void*)sAndNode_kind;
            __result334__ = __result_obj__ = ((struct sNode*)(right_value592=_inf_value33));
            if(right_302 && !__freed_obj__) { right_302 = come_decrement_ref_count(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0); } 
            if(node_301 && !__freed_obj__) { node_301 = come_decrement_ref_count(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value586);
            if(right_value586 && right_value586 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value586, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value586;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value587);
            if(right_value587 && right_value587 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value587, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value587;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value592);
            if(right_value592 && right_value592 != __result_obj__ && !__freed_obj__) { right_value592 = come_decrement_ref_count(right_value592, ((struct sNode*)right_value592)->finalize, ((struct sNode*)right_value592)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value592;
            __freed_obj__ = 0;
            return __result334__;
            if(right_302 && !__freed_obj__) { right_302 = come_decrement_ref_count(right_302, ((struct sNode*)right_302)->finalize, ((struct sNode*)right_302)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional614=*info->p==92&&*(info->p+1)==38&&*(info->p+2)!=38&&*(info->p+2)!=61,            _if_conditional614) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_304=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value593=and_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value593);
                if(right_value593 && right_value593 != __result_obj__ && !__freed_obj__) { right_value593 = come_decrement_ref_count(right_value593, ((struct sNode*)right_value593)->finalize, ((struct sNode*)right_value593)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value593;
                __freed_obj__ = 0;
                _inf_value34=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2549, "struct sNode");
                _inf_obj_value34=come_increment_ref_count(((struct sAndNode*)(right_value595=sAndNode_initialize((struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value594=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "13op.c", 2549, "struct sAndNode")))),(struct sNode*)come_increment_ref_count(node_301),(struct sNode*)come_increment_ref_count(right_304),(_Bool)1,info))));
                _inf_value34->_protocol_obj=_inf_obj_value34;
                _inf_value34->finalize=(void*)sAndNode_finalize;
                _inf_value34->clone=(void*)sAndNode_clone;
                _inf_value34->compile=(void*)sAndNode_compile;
                _inf_value34->sline=(void*)sAndNode_sline;
                _inf_value34->sname=(void*)sAndNode_sname;
                _inf_value34->terminated=(void*)sAndNode_terminated;
                _inf_value34->kind=(void*)sAndNode_kind;
                __result337__ = __result_obj__ = ((struct sNode*)(right_value600=_inf_value34));
                if(right_304 && !__freed_obj__) { right_304 = come_decrement_ref_count(right_304, ((struct sNode*)right_304)->finalize, ((struct sNode*)right_304)->_protocol_obj, 0, 0, 0); } 
                if(node_301 && !__freed_obj__) { node_301 = come_decrement_ref_count(node_301, ((struct sNode*)node_301)->finalize, ((struct sNode*)node_301)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value594);
                if(right_value594 && right_value594 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value594, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value594;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value595);
                if(right_value595 && right_value595 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value595, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value595;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value600);
                if(right_value600 && right_value600 != __result_obj__ && !__freed_obj__) { right_value600 = come_decrement_ref_count(right_value600, ((struct sNode*)right_value600)->finalize, ((struct sNode*)right_value600)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value600;
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
_Bool _if_conditional615;
_Bool _if_conditional616;
_Bool _if_conditional617;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional615=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional615) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional616=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional616) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional617=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional617) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sAndNode* sAndNode_clone(struct sAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional618;
struct sAndNode* __result335__;
void* right_value596;
struct sAndNode* result_305;
_Bool _if_conditional619;
void* right_value597;
struct sNode* __dec_obj256;
_Bool _if_conditional620;
void* right_value598;
struct sNode* __dec_obj257;
_Bool _if_conditional621;
_Bool _if_conditional622;
_Bool _if_conditional623;
void* right_value599;
char* __dec_obj258;
struct sAndNode* __result336__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value596, 0, sizeof(void*));
memset(&result_305, 0, sizeof(struct sAndNode*));
memset(&right_value597, 0, sizeof(void*));
memset(&right_value598, 0, sizeof(void*));
memset(&right_value599, 0, sizeof(void*));
                    if(_if_conditional618=self==(void*)0,                    _if_conditional618) {
                        __result335__ = __result_obj__ = (void*)0;
                        return __result335__;
                    }
                    result_305=(struct sAndNode*)come_increment_ref_count(((struct sAndNode*)(right_value596=(struct sAndNode*)come_calloc(1, sizeof(struct sAndNode)*(1), "sAndNode_clone", 3, "struct sAndNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value596);
                    if(right_value596 && right_value596 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndNode_finalize,right_value596, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value596;
                    __freed_obj__ = 0;
                    if(_if_conditional619=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional619) {
                        __dec_obj256=result_305->mLeft;
                        result_305->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value597=sNode_clone(self->mLeft))));
                        if(__dec_obj256) { __dec_obj256 = come_decrement_ref_count(__dec_obj256, ((struct sNode*)__dec_obj256)->finalize, ((struct sNode*)__dec_obj256)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value597);
                        if(right_value597 && right_value597 != __result_obj__ && !__freed_obj__) { right_value597 = come_decrement_ref_count(right_value597, ((struct sNode*)right_value597)->finalize, ((struct sNode*)right_value597)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value597;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional620=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional620) {
                        __dec_obj257=result_305->mRight;
                        result_305->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value598=sNode_clone(self->mRight))));
                        if(__dec_obj257) { __dec_obj257 = come_decrement_ref_count(__dec_obj257, ((struct sNode*)__dec_obj257)->finalize, ((struct sNode*)__dec_obj257)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value598);
                        if(right_value598 && right_value598 != __result_obj__ && !__freed_obj__) { right_value598 = come_decrement_ref_count(right_value598, ((struct sNode*)right_value598)->finalize, ((struct sNode*)right_value598)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value598;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional621=self!=((void*)0),                    _if_conditional621) {
                        result_305->mQuote=self->mQuote;
                    }
                    if(_if_conditional622=self!=((void*)0),                    _if_conditional622) {
                        result_305->sline=self->sline;
                    }
                    if(_if_conditional623=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional623) {
                        __dec_obj258=result_305->sname;
                        result_305->sname=(char*)come_increment_ref_count(((char*)(right_value599=string_clone(self->sname))));
                        if(__dec_obj258) { __dec_obj258 = come_decrement_ref_count(__dec_obj258, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value599);
                        if(right_value599 && right_value599 != __result_obj__ && !__freed_obj__) { right_value599 = come_decrement_ref_count(right_value599, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value599;
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
void* right_value601;
struct sNode* node_306;
_Bool _while_condtional16;
_Bool _if_conditional624;
void* right_value602;
struct sNode* right_307;
void* right_value603;
void* right_value604;
struct sNode* _inf_value35;
struct sXOrNode* _inf_obj_value35;
void* right_value609;
struct sNode* __result341__;
_Bool _if_conditional634;
void* right_value610;
struct sNode* right_309;
void* right_value611;
void* right_value612;
struct sNode* _inf_value36;
struct sXOrNode* _inf_obj_value36;
void* right_value617;
struct sNode* __result344__;
struct sNode* __result345__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value601, 0, sizeof(void*));
memset(&node_306, 0, sizeof(struct sNode*));
memset(&right_value602, 0, sizeof(void*));
memset(&right_307, 0, sizeof(struct sNode*));
memset(&right_value603, 0, sizeof(void*));
memset(&right_value604, 0, sizeof(void*));
memset(&right_value609, 0, sizeof(void*));
memset(&right_value610, 0, sizeof(void*));
memset(&right_309, 0, sizeof(struct sNode*));
memset(&right_value611, 0, sizeof(void*));
memset(&right_value612, 0, sizeof(void*));
memset(&right_value617, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_306=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value601=and_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value601);
    if(right_value601 && right_value601 != __result_obj__ && !__freed_obj__) { right_value601 = come_decrement_ref_count(right_value601, ((struct sNode*)right_value601)->finalize, ((struct sNode*)right_value601)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value601;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional16=*info->p,    _while_condtional16) {
        if(_if_conditional624=*info->p==94&&*(info->p+1)!=61,        _if_conditional624) {
            info->p++;
            skip_spaces_and_lf(info);
            right_307=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value602=xor_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value602);
            if(right_value602 && right_value602 != __result_obj__ && !__freed_obj__) { right_value602 = come_decrement_ref_count(right_value602, ((struct sNode*)right_value602)->finalize, ((struct sNode*)right_value602)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value602;
            __freed_obj__ = 0;
            _inf_value35=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2576, "struct sNode");
            _inf_obj_value35=come_increment_ref_count(((struct sXOrNode*)(right_value604=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value603=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2576, "struct sXOrNode")))),(struct sNode*)come_increment_ref_count(node_306),(struct sNode*)come_increment_ref_count(right_307),(_Bool)0,info))));
            _inf_value35->_protocol_obj=_inf_obj_value35;
            _inf_value35->finalize=(void*)sXOrNode_finalize;
            _inf_value35->clone=(void*)sXOrNode_clone;
            _inf_value35->compile=(void*)sXOrNode_compile;
            _inf_value35->sline=(void*)sXOrNode_sline;
            _inf_value35->sname=(void*)sXOrNode_sname;
            _inf_value35->terminated=(void*)sXOrNode_terminated;
            _inf_value35->kind=(void*)sXOrNode_kind;
            __result341__ = __result_obj__ = ((struct sNode*)(right_value609=_inf_value35));
            if(right_307 && !__freed_obj__) { right_307 = come_decrement_ref_count(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0); } 
            if(node_306 && !__freed_obj__) { node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value603);
            if(right_value603 && right_value603 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value603, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value603;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value604);
            if(right_value604 && right_value604 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value604, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value604;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value609);
            if(right_value609 && right_value609 != __result_obj__ && !__freed_obj__) { right_value609 = come_decrement_ref_count(right_value609, ((struct sNode*)right_value609)->finalize, ((struct sNode*)right_value609)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value609;
            __freed_obj__ = 0;
            return __result341__;
            if(right_307 && !__freed_obj__) { right_307 = come_decrement_ref_count(right_307, ((struct sNode*)right_307)->finalize, ((struct sNode*)right_307)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional634=*info->p==92&&*(info->p+1)==94&&*(info->p+2)!=61,            _if_conditional634) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_309=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value610=xor_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value610);
                if(right_value610 && right_value610 != __result_obj__ && !__freed_obj__) { right_value610 = come_decrement_ref_count(right_value610, ((struct sNode*)right_value610)->finalize, ((struct sNode*)right_value610)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value610;
                __freed_obj__ = 0;
                _inf_value36=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2584, "struct sNode");
                _inf_obj_value36=come_increment_ref_count(((struct sXOrNode*)(right_value612=sXOrNode_initialize((struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value611=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "13op.c", 2584, "struct sXOrNode")))),(struct sNode*)come_increment_ref_count(node_306),(struct sNode*)come_increment_ref_count(right_309),(_Bool)1,info))));
                _inf_value36->_protocol_obj=_inf_obj_value36;
                _inf_value36->finalize=(void*)sXOrNode_finalize;
                _inf_value36->clone=(void*)sXOrNode_clone;
                _inf_value36->compile=(void*)sXOrNode_compile;
                _inf_value36->sline=(void*)sXOrNode_sline;
                _inf_value36->sname=(void*)sXOrNode_sname;
                _inf_value36->terminated=(void*)sXOrNode_terminated;
                _inf_value36->kind=(void*)sXOrNode_kind;
                __result344__ = __result_obj__ = ((struct sNode*)(right_value617=_inf_value36));
                if(right_309 && !__freed_obj__) { right_309 = come_decrement_ref_count(right_309, ((struct sNode*)right_309)->finalize, ((struct sNode*)right_309)->_protocol_obj, 0, 0, 0); } 
                if(node_306 && !__freed_obj__) { node_306 = come_decrement_ref_count(node_306, ((struct sNode*)node_306)->finalize, ((struct sNode*)node_306)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value611);
                if(right_value611 && right_value611 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value611, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value611;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value612);
                if(right_value612 && right_value612 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value612, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value612;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value617);
                if(right_value617 && right_value617 != __result_obj__ && !__freed_obj__) { right_value617 = come_decrement_ref_count(right_value617, ((struct sNode*)right_value617)->finalize, ((struct sNode*)right_value617)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value617;
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
_Bool _if_conditional635;
_Bool _if_conditional636;
_Bool _if_conditional637;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional635=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional635) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional636=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional636) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional637=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional637) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sXOrNode* sXOrNode_clone(struct sXOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional638;
struct sXOrNode* __result342__;
void* right_value613;
struct sXOrNode* result_310;
_Bool _if_conditional639;
void* right_value614;
struct sNode* __dec_obj262;
_Bool _if_conditional640;
void* right_value615;
struct sNode* __dec_obj263;
_Bool _if_conditional641;
_Bool _if_conditional642;
_Bool _if_conditional643;
void* right_value616;
char* __dec_obj264;
struct sXOrNode* __result343__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value613, 0, sizeof(void*));
memset(&result_310, 0, sizeof(struct sXOrNode*));
memset(&right_value614, 0, sizeof(void*));
memset(&right_value615, 0, sizeof(void*));
memset(&right_value616, 0, sizeof(void*));
                    if(_if_conditional638=self==(void*)0,                    _if_conditional638) {
                        __result342__ = __result_obj__ = (void*)0;
                        return __result342__;
                    }
                    result_310=(struct sXOrNode*)come_increment_ref_count(((struct sXOrNode*)(right_value613=(struct sXOrNode*)come_calloc(1, sizeof(struct sXOrNode)*(1), "sXOrNode_clone", 3, "struct sXOrNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value613);
                    if(right_value613 && right_value613 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sXOrNode_finalize,right_value613, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value613;
                    __freed_obj__ = 0;
                    if(_if_conditional639=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional639) {
                        __dec_obj262=result_310->mLeft;
                        result_310->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value614=sNode_clone(self->mLeft))));
                        if(__dec_obj262) { __dec_obj262 = come_decrement_ref_count(__dec_obj262, ((struct sNode*)__dec_obj262)->finalize, ((struct sNode*)__dec_obj262)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value614);
                        if(right_value614 && right_value614 != __result_obj__ && !__freed_obj__) { right_value614 = come_decrement_ref_count(right_value614, ((struct sNode*)right_value614)->finalize, ((struct sNode*)right_value614)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value614;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional640=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional640) {
                        __dec_obj263=result_310->mRight;
                        result_310->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value615=sNode_clone(self->mRight))));
                        if(__dec_obj263) { __dec_obj263 = come_decrement_ref_count(__dec_obj263, ((struct sNode*)__dec_obj263)->finalize, ((struct sNode*)__dec_obj263)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value615);
                        if(right_value615 && right_value615 != __result_obj__ && !__freed_obj__) { right_value615 = come_decrement_ref_count(right_value615, ((struct sNode*)right_value615)->finalize, ((struct sNode*)right_value615)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value615;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional641=self!=((void*)0),                    _if_conditional641) {
                        result_310->mQuote=self->mQuote;
                    }
                    if(_if_conditional642=self!=((void*)0),                    _if_conditional642) {
                        result_310->sline=self->sline;
                    }
                    if(_if_conditional643=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional643) {
                        __dec_obj264=result_310->sname;
                        result_310->sname=(char*)come_increment_ref_count(((char*)(right_value616=string_clone(self->sname))));
                        if(__dec_obj264) { __dec_obj264 = come_decrement_ref_count(__dec_obj264, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value616);
                        if(right_value616 && right_value616 != __result_obj__ && !__freed_obj__) { right_value616 = come_decrement_ref_count(right_value616, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value616;
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
void* right_value618;
struct sNode* node_311;
_Bool _while_condtional17;
_Bool _if_conditional644;
void* right_value619;
struct sNode* right_312;
void* right_value620;
void* right_value621;
struct sNode* _inf_value37;
struct sOrNode* _inf_obj_value37;
void* right_value626;
struct sNode* __result348__;
_Bool _if_conditional654;
void* right_value627;
struct sNode* right_314;
void* right_value628;
void* right_value629;
struct sNode* _inf_value38;
struct sOrNode* _inf_obj_value38;
void* right_value634;
struct sNode* __result351__;
struct sNode* __result352__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value618, 0, sizeof(void*));
memset(&node_311, 0, sizeof(struct sNode*));
memset(&right_value619, 0, sizeof(void*));
memset(&right_312, 0, sizeof(struct sNode*));
memset(&right_value620, 0, sizeof(void*));
memset(&right_value621, 0, sizeof(void*));
memset(&right_value626, 0, sizeof(void*));
memset(&right_value627, 0, sizeof(void*));
memset(&right_314, 0, sizeof(struct sNode*));
memset(&right_value628, 0, sizeof(void*));
memset(&right_value629, 0, sizeof(void*));
memset(&right_value634, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_311=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value618=xor_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value618);
    if(right_value618 && right_value618 != __result_obj__ && !__freed_obj__) { right_value618 = come_decrement_ref_count(right_value618, ((struct sNode*)right_value618)->finalize, ((struct sNode*)right_value618)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value618;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional17=*info->p,    _while_condtional17) {
        if(_if_conditional644=*info->p==124&&*(info->p+1)!=61&&*(info->p+1)!=124,        _if_conditional644) {
            info->p++;
            skip_spaces_and_lf(info);
            right_312=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value619=or_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value619);
            if(right_value619 && right_value619 != __result_obj__ && !__freed_obj__) { right_value619 = come_decrement_ref_count(right_value619, ((struct sNode*)right_value619)->finalize, ((struct sNode*)right_value619)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value619;
            __freed_obj__ = 0;
            _inf_value37=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2611, "struct sNode");
            _inf_obj_value37=come_increment_ref_count(((struct sOrNode*)(right_value621=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value620=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2611, "struct sOrNode")))),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_312),(_Bool)0,info))));
            _inf_value37->_protocol_obj=_inf_obj_value37;
            _inf_value37->finalize=(void*)sOrNode_finalize;
            _inf_value37->clone=(void*)sOrNode_clone;
            _inf_value37->compile=(void*)sOrNode_compile;
            _inf_value37->sline=(void*)sOrNode_sline;
            _inf_value37->sname=(void*)sOrNode_sname;
            _inf_value37->terminated=(void*)sOrNode_terminated;
            _inf_value37->kind=(void*)sOrNode_kind;
            __result348__ = __result_obj__ = ((struct sNode*)(right_value626=_inf_value37));
            if(right_312 && !__freed_obj__) { right_312 = come_decrement_ref_count(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0); } 
            if(node_311 && !__freed_obj__) { node_311 = come_decrement_ref_count(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value620);
            if(right_value620 && right_value620 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value620, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value620;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value621);
            if(right_value621 && right_value621 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value621, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value621;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value626);
            if(right_value626 && right_value626 != __result_obj__ && !__freed_obj__) { right_value626 = come_decrement_ref_count(right_value626, ((struct sNode*)right_value626)->finalize, ((struct sNode*)right_value626)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value626;
            __freed_obj__ = 0;
            return __result348__;
            if(right_312 && !__freed_obj__) { right_312 = come_decrement_ref_count(right_312, ((struct sNode*)right_312)->finalize, ((struct sNode*)right_312)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional654=*info->p==92&&*(info->p+1)==124&&*(info->p+2)!=61&&*(info->p+2)!=124,            _if_conditional654) {
                info->p+=2;
                skip_spaces_and_lf(info);
                right_314=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value627=or_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value627);
                if(right_value627 && right_value627 != __result_obj__ && !__freed_obj__) { right_value627 = come_decrement_ref_count(right_value627, ((struct sNode*)right_value627)->finalize, ((struct sNode*)right_value627)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value627;
                __freed_obj__ = 0;
                _inf_value38=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2619, "struct sNode");
                _inf_obj_value38=come_increment_ref_count(((struct sOrNode*)(right_value629=sOrNode_initialize((struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value628=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "13op.c", 2619, "struct sOrNode")))),(struct sNode*)come_increment_ref_count(node_311),(struct sNode*)come_increment_ref_count(right_314),(_Bool)1,info))));
                _inf_value38->_protocol_obj=_inf_obj_value38;
                _inf_value38->finalize=(void*)sOrNode_finalize;
                _inf_value38->clone=(void*)sOrNode_clone;
                _inf_value38->compile=(void*)sOrNode_compile;
                _inf_value38->sline=(void*)sOrNode_sline;
                _inf_value38->sname=(void*)sOrNode_sname;
                _inf_value38->terminated=(void*)sOrNode_terminated;
                _inf_value38->kind=(void*)sOrNode_kind;
                __result351__ = __result_obj__ = ((struct sNode*)(right_value634=_inf_value38));
                if(right_314 && !__freed_obj__) { right_314 = come_decrement_ref_count(right_314, ((struct sNode*)right_314)->finalize, ((struct sNode*)right_314)->_protocol_obj, 0, 0, 0); } 
                if(node_311 && !__freed_obj__) { node_311 = come_decrement_ref_count(node_311, ((struct sNode*)node_311)->finalize, ((struct sNode*)node_311)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value628);
                if(right_value628 && right_value628 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value628, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value628;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value629);
                if(right_value629 && right_value629 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value629, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value629;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value634);
                if(right_value634 && right_value634 != __result_obj__ && !__freed_obj__) { right_value634 = come_decrement_ref_count(right_value634, ((struct sNode*)right_value634)->finalize, ((struct sNode*)right_value634)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value634;
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
_Bool _if_conditional655;
_Bool _if_conditional656;
_Bool _if_conditional657;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional655=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional655) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional656=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional656) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional657=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional657) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sOrNode* sOrNode_clone(struct sOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional658;
struct sOrNode* __result349__;
void* right_value630;
struct sOrNode* result_315;
_Bool _if_conditional659;
void* right_value631;
struct sNode* __dec_obj268;
_Bool _if_conditional660;
void* right_value632;
struct sNode* __dec_obj269;
_Bool _if_conditional661;
_Bool _if_conditional662;
_Bool _if_conditional663;
void* right_value633;
char* __dec_obj270;
struct sOrNode* __result350__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value630, 0, sizeof(void*));
memset(&result_315, 0, sizeof(struct sOrNode*));
memset(&right_value631, 0, sizeof(void*));
memset(&right_value632, 0, sizeof(void*));
memset(&right_value633, 0, sizeof(void*));
                    if(_if_conditional658=self==(void*)0,                    _if_conditional658) {
                        __result349__ = __result_obj__ = (void*)0;
                        return __result349__;
                    }
                    result_315=(struct sOrNode*)come_increment_ref_count(((struct sOrNode*)(right_value630=(struct sOrNode*)come_calloc(1, sizeof(struct sOrNode)*(1), "sOrNode_clone", 3, "struct sOrNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value630);
                    if(right_value630 && right_value630 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrNode_finalize,right_value630, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value630;
                    __freed_obj__ = 0;
                    if(_if_conditional659=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional659) {
                        __dec_obj268=result_315->mLeft;
                        result_315->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value631=sNode_clone(self->mLeft))));
                        if(__dec_obj268) { __dec_obj268 = come_decrement_ref_count(__dec_obj268, ((struct sNode*)__dec_obj268)->finalize, ((struct sNode*)__dec_obj268)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value631);
                        if(right_value631 && right_value631 != __result_obj__ && !__freed_obj__) { right_value631 = come_decrement_ref_count(right_value631, ((struct sNode*)right_value631)->finalize, ((struct sNode*)right_value631)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value631;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional660=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional660) {
                        __dec_obj269=result_315->mRight;
                        result_315->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value632=sNode_clone(self->mRight))));
                        if(__dec_obj269) { __dec_obj269 = come_decrement_ref_count(__dec_obj269, ((struct sNode*)__dec_obj269)->finalize, ((struct sNode*)__dec_obj269)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value632);
                        if(right_value632 && right_value632 != __result_obj__ && !__freed_obj__) { right_value632 = come_decrement_ref_count(right_value632, ((struct sNode*)right_value632)->finalize, ((struct sNode*)right_value632)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value632;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional661=self!=((void*)0),                    _if_conditional661) {
                        result_315->mQuote=self->mQuote;
                    }
                    if(_if_conditional662=self!=((void*)0),                    _if_conditional662) {
                        result_315->sline=self->sline;
                    }
                    if(_if_conditional663=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional663) {
                        __dec_obj270=result_315->sname;
                        result_315->sname=(char*)come_increment_ref_count(((char*)(right_value633=string_clone(self->sname))));
                        if(__dec_obj270) { __dec_obj270 = come_decrement_ref_count(__dec_obj270, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value633);
                        if(right_value633 && right_value633 != __result_obj__ && !__freed_obj__) { right_value633 = come_decrement_ref_count(right_value633, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value633;
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
void* right_value635;
struct sNode* node_316;
_Bool _while_condtional18;
_Bool _if_conditional664;
void* right_value636;
struct sNode* right_317;
void* right_value637;
void* right_value638;
struct sNode* _inf_value39;
struct sAndAndNode* _inf_obj_value39;
void* right_value643;
struct sNode* __result355__;
_Bool _if_conditional674;
void* right_value644;
struct sNode* right_319;
void* right_value645;
void* right_value646;
struct sNode* _inf_value40;
struct sAndAndNode* _inf_obj_value40;
void* right_value651;
struct sNode* __result358__;
struct sNode* __result359__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value635, 0, sizeof(void*));
memset(&node_316, 0, sizeof(struct sNode*));
memset(&right_value636, 0, sizeof(void*));
memset(&right_317, 0, sizeof(struct sNode*));
memset(&right_value637, 0, sizeof(void*));
memset(&right_value638, 0, sizeof(void*));
memset(&right_value643, 0, sizeof(void*));
memset(&right_value644, 0, sizeof(void*));
memset(&right_319, 0, sizeof(struct sNode*));
memset(&right_value645, 0, sizeof(void*));
memset(&right_value646, 0, sizeof(void*));
memset(&right_value651, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_316=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value635=or_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value635);
    if(right_value635 && right_value635 != __result_obj__ && !__freed_obj__) { right_value635 = come_decrement_ref_count(right_value635, ((struct sNode*)right_value635)->finalize, ((struct sNode*)right_value635)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value635;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional18=*info->p,    _while_condtional18) {
        if(_if_conditional664=*info->p==38&&*(info->p+1)==38,        _if_conditional664) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_317=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value636=andand_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value636);
            if(right_value636 && right_value636 != __result_obj__ && !__freed_obj__) { right_value636 = come_decrement_ref_count(right_value636, ((struct sNode*)right_value636)->finalize, ((struct sNode*)right_value636)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value636;
            __freed_obj__ = 0;
            _inf_value39=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2646, "struct sNode");
            _inf_obj_value39=come_increment_ref_count(((struct sAndAndNode*)(right_value638=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value637=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2646, "struct sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_316),(struct sNode*)come_increment_ref_count(right_317),(_Bool)0,info))));
            _inf_value39->_protocol_obj=_inf_obj_value39;
            _inf_value39->finalize=(void*)sAndAndNode_finalize;
            _inf_value39->clone=(void*)sAndAndNode_clone;
            _inf_value39->compile=(void*)sAndAndNode_compile;
            _inf_value39->sline=(void*)sAndAndNode_sline;
            _inf_value39->sname=(void*)sAndAndNode_sname;
            _inf_value39->terminated=(void*)sAndAndNode_terminated;
            _inf_value39->kind=(void*)sAndAndNode_kind;
            __result355__ = __result_obj__ = ((struct sNode*)(right_value643=_inf_value39));
            if(right_317 && !__freed_obj__) { right_317 = come_decrement_ref_count(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0); } 
            if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value637);
            if(right_value637 && right_value637 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value637, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value637;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value638);
            if(right_value638 && right_value638 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value638, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value638;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value643);
            if(right_value643 && right_value643 != __result_obj__ && !__freed_obj__) { right_value643 = come_decrement_ref_count(right_value643, ((struct sNode*)right_value643)->finalize, ((struct sNode*)right_value643)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value643;
            __freed_obj__ = 0;
            return __result355__;
            if(right_317 && !__freed_obj__) { right_317 = come_decrement_ref_count(right_317, ((struct sNode*)right_317)->finalize, ((struct sNode*)right_317)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional674=*info->p==92&&*(info->p+1)==38&&*(info->p+2)==38,            _if_conditional674) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_319=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value644=andand_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value644);
                if(right_value644 && right_value644 != __result_obj__ && !__freed_obj__) { right_value644 = come_decrement_ref_count(right_value644, ((struct sNode*)right_value644)->finalize, ((struct sNode*)right_value644)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value644;
                __freed_obj__ = 0;
                _inf_value40=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2654, "struct sNode");
                _inf_obj_value40=come_increment_ref_count(((struct sAndAndNode*)(right_value646=sAndAndNode_initialize((struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value645=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "13op.c", 2654, "struct sAndAndNode")))),(struct sNode*)come_increment_ref_count(node_316),(struct sNode*)come_increment_ref_count(right_319),(_Bool)1,info))));
                _inf_value40->_protocol_obj=_inf_obj_value40;
                _inf_value40->finalize=(void*)sAndAndNode_finalize;
                _inf_value40->clone=(void*)sAndAndNode_clone;
                _inf_value40->compile=(void*)sAndAndNode_compile;
                _inf_value40->sline=(void*)sAndAndNode_sline;
                _inf_value40->sname=(void*)sAndAndNode_sname;
                _inf_value40->terminated=(void*)sAndAndNode_terminated;
                _inf_value40->kind=(void*)sAndAndNode_kind;
                __result358__ = __result_obj__ = ((struct sNode*)(right_value651=_inf_value40));
                if(right_319 && !__freed_obj__) { right_319 = come_decrement_ref_count(right_319, ((struct sNode*)right_319)->finalize, ((struct sNode*)right_319)->_protocol_obj, 0, 0, 0); } 
                if(node_316 && !__freed_obj__) { node_316 = come_decrement_ref_count(node_316, ((struct sNode*)node_316)->finalize, ((struct sNode*)node_316)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value645);
                if(right_value645 && right_value645 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value645, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value645;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value646);
                if(right_value646 && right_value646 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value646, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value646;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value651);
                if(right_value651 && right_value651 != __result_obj__ && !__freed_obj__) { right_value651 = come_decrement_ref_count(right_value651, ((struct sNode*)right_value651)->finalize, ((struct sNode*)right_value651)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value651;
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
_Bool _if_conditional675;
_Bool _if_conditional676;
_Bool _if_conditional677;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional675=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional675) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional676=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional676) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional677=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional677) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sAndAndNode* sAndAndNode_clone(struct sAndAndNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional678;
struct sAndAndNode* __result356__;
void* right_value647;
struct sAndAndNode* result_320;
_Bool _if_conditional679;
void* right_value648;
struct sNode* __dec_obj274;
_Bool _if_conditional680;
void* right_value649;
struct sNode* __dec_obj275;
_Bool _if_conditional681;
_Bool _if_conditional682;
_Bool _if_conditional683;
void* right_value650;
char* __dec_obj276;
struct sAndAndNode* __result357__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value647, 0, sizeof(void*));
memset(&result_320, 0, sizeof(struct sAndAndNode*));
memset(&right_value648, 0, sizeof(void*));
memset(&right_value649, 0, sizeof(void*));
memset(&right_value650, 0, sizeof(void*));
                    if(_if_conditional678=self==(void*)0,                    _if_conditional678) {
                        __result356__ = __result_obj__ = (void*)0;
                        return __result356__;
                    }
                    result_320=(struct sAndAndNode*)come_increment_ref_count(((struct sAndAndNode*)(right_value647=(struct sAndAndNode*)come_calloc(1, sizeof(struct sAndAndNode)*(1), "sAndAndNode_clone", 3, "struct sAndAndNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value647);
                    if(right_value647 && right_value647 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sAndAndNode_finalize,right_value647, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value647;
                    __freed_obj__ = 0;
                    if(_if_conditional679=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional679) {
                        __dec_obj274=result_320->mLeft;
                        result_320->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value648=sNode_clone(self->mLeft))));
                        if(__dec_obj274) { __dec_obj274 = come_decrement_ref_count(__dec_obj274, ((struct sNode*)__dec_obj274)->finalize, ((struct sNode*)__dec_obj274)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value648);
                        if(right_value648 && right_value648 != __result_obj__ && !__freed_obj__) { right_value648 = come_decrement_ref_count(right_value648, ((struct sNode*)right_value648)->finalize, ((struct sNode*)right_value648)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value648;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional680=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional680) {
                        __dec_obj275=result_320->mRight;
                        result_320->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value649=sNode_clone(self->mRight))));
                        if(__dec_obj275) { __dec_obj275 = come_decrement_ref_count(__dec_obj275, ((struct sNode*)__dec_obj275)->finalize, ((struct sNode*)__dec_obj275)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value649);
                        if(right_value649 && right_value649 != __result_obj__ && !__freed_obj__) { right_value649 = come_decrement_ref_count(right_value649, ((struct sNode*)right_value649)->finalize, ((struct sNode*)right_value649)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value649;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional681=self!=((void*)0),                    _if_conditional681) {
                        result_320->mQuote=self->mQuote;
                    }
                    if(_if_conditional682=self!=((void*)0),                    _if_conditional682) {
                        result_320->sline=self->sline;
                    }
                    if(_if_conditional683=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional683) {
                        __dec_obj276=result_320->sname;
                        result_320->sname=(char*)come_increment_ref_count(((char*)(right_value650=string_clone(self->sname))));
                        if(__dec_obj276) { __dec_obj276 = come_decrement_ref_count(__dec_obj276, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value650);
                        if(right_value650 && right_value650 != __result_obj__ && !__freed_obj__) { right_value650 = come_decrement_ref_count(right_value650, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value650;
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
void* right_value652;
struct sNode* node_321;
_Bool _while_condtional19;
_Bool _if_conditional684;
void* right_value653;
struct sNode* right_322;
void* right_value654;
void* right_value655;
struct sNode* _inf_value41;
struct sOrOrNode* _inf_obj_value41;
void* right_value660;
struct sNode* __result362__;
_Bool _if_conditional694;
void* right_value661;
struct sNode* right_324;
void* right_value662;
void* right_value663;
struct sNode* _inf_value42;
struct sOrOrNode* _inf_obj_value42;
void* right_value668;
struct sNode* __result365__;
struct sNode* __result366__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value652, 0, sizeof(void*));
memset(&node_321, 0, sizeof(struct sNode*));
memset(&right_value653, 0, sizeof(void*));
memset(&right_322, 0, sizeof(struct sNode*));
memset(&right_value654, 0, sizeof(void*));
memset(&right_value655, 0, sizeof(void*));
memset(&right_value660, 0, sizeof(void*));
memset(&right_value661, 0, sizeof(void*));
memset(&right_324, 0, sizeof(struct sNode*));
memset(&right_value662, 0, sizeof(void*));
memset(&right_value663, 0, sizeof(void*));
memset(&right_value668, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_321=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value652=andand_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value652);
    if(right_value652 && right_value652 != __result_obj__ && !__freed_obj__) { right_value652 = come_decrement_ref_count(right_value652, ((struct sNode*)right_value652)->finalize, ((struct sNode*)right_value652)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value652;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional19=*info->p,    _while_condtional19) {
        if(_if_conditional684=*info->p==124&&*(info->p+1)==124,        _if_conditional684) {
            info->p+=2;
            skip_spaces_and_lf(info);
            right_322=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value653=oror_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value653);
            if(right_value653 && right_value653 != __result_obj__ && !__freed_obj__) { right_value653 = come_decrement_ref_count(right_value653, ((struct sNode*)right_value653)->finalize, ((struct sNode*)right_value653)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value653;
            __freed_obj__ = 0;
            _inf_value41=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2681, "struct sNode");
            _inf_obj_value41=come_increment_ref_count(((struct sOrOrNode*)(right_value655=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value654=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2681, "struct sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_321),(struct sNode*)come_increment_ref_count(right_322),(_Bool)0,info))));
            _inf_value41->_protocol_obj=_inf_obj_value41;
            _inf_value41->finalize=(void*)sOrOrNode_finalize;
            _inf_value41->clone=(void*)sOrOrNode_clone;
            _inf_value41->compile=(void*)sOrOrNode_compile;
            _inf_value41->sline=(void*)sOrOrNode_sline;
            _inf_value41->sname=(void*)sOrOrNode_sname;
            _inf_value41->terminated=(void*)sOrOrNode_terminated;
            _inf_value41->kind=(void*)sOrOrNode_kind;
            __result362__ = __result_obj__ = ((struct sNode*)(right_value660=_inf_value41));
            if(right_322 && !__freed_obj__) { right_322 = come_decrement_ref_count(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0); } 
            if(node_321 && !__freed_obj__) { node_321 = come_decrement_ref_count(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value654);
            if(right_value654 && right_value654 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value654, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value654;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value655);
            if(right_value655 && right_value655 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value655, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value655;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value660);
            if(right_value660 && right_value660 != __result_obj__ && !__freed_obj__) { right_value660 = come_decrement_ref_count(right_value660, ((struct sNode*)right_value660)->finalize, ((struct sNode*)right_value660)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value660;
            __freed_obj__ = 0;
            return __result362__;
            if(right_322 && !__freed_obj__) { right_322 = come_decrement_ref_count(right_322, ((struct sNode*)right_322)->finalize, ((struct sNode*)right_322)->_protocol_obj, 0, 0, 0); } 
        }
        else {
            if(_if_conditional694=*info->p==92&&*(info->p+1)==124&&*(info->p+2)==124,            _if_conditional694) {
                info->p+=3;
                skip_spaces_and_lf(info);
                right_324=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value661=oror_exp(info))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value661);
                if(right_value661 && right_value661 != __result_obj__ && !__freed_obj__) { right_value661 = come_decrement_ref_count(right_value661, ((struct sNode*)right_value661)->finalize, ((struct sNode*)right_value661)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value661;
                __freed_obj__ = 0;
                _inf_value42=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2689, "struct sNode");
                _inf_obj_value42=come_increment_ref_count(((struct sOrOrNode*)(right_value663=sOrOrNode_initialize((struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value662=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "13op.c", 2689, "struct sOrOrNode")))),(struct sNode*)come_increment_ref_count(node_321),(struct sNode*)come_increment_ref_count(right_324),(_Bool)1,info))));
                _inf_value42->_protocol_obj=_inf_obj_value42;
                _inf_value42->finalize=(void*)sOrOrNode_finalize;
                _inf_value42->clone=(void*)sOrOrNode_clone;
                _inf_value42->compile=(void*)sOrOrNode_compile;
                _inf_value42->sline=(void*)sOrOrNode_sline;
                _inf_value42->sname=(void*)sOrOrNode_sname;
                _inf_value42->terminated=(void*)sOrOrNode_terminated;
                _inf_value42->kind=(void*)sOrOrNode_kind;
                __result365__ = __result_obj__ = ((struct sNode*)(right_value668=_inf_value42));
                if(right_324 && !__freed_obj__) { right_324 = come_decrement_ref_count(right_324, ((struct sNode*)right_324)->finalize, ((struct sNode*)right_324)->_protocol_obj, 0, 0, 0); } 
                if(node_321 && !__freed_obj__) { node_321 = come_decrement_ref_count(node_321, ((struct sNode*)node_321)->finalize, ((struct sNode*)node_321)->_protocol_obj, 0, 0, 0); } 
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value662);
                if(right_value662 && right_value662 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value662, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value662;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value663);
                if(right_value663 && right_value663 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value663, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value663;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value668);
                if(right_value668 && right_value668 != __result_obj__ && !__freed_obj__) { right_value668 = come_decrement_ref_count(right_value668, ((struct sNode*)right_value668)->finalize, ((struct sNode*)right_value668)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value668;
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
_Bool _if_conditional695;
_Bool _if_conditional696;
_Bool _if_conditional697;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                    if(_if_conditional695=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional695) {
                        if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional696=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional696) {
                        if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                    }
                    if(_if_conditional697=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional697) {
                        if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                    }
}

static struct sOrOrNode* sOrOrNode_clone(struct sOrOrNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional698;
struct sOrOrNode* __result363__;
void* right_value664;
struct sOrOrNode* result_325;
_Bool _if_conditional699;
void* right_value665;
struct sNode* __dec_obj280;
_Bool _if_conditional700;
void* right_value666;
struct sNode* __dec_obj281;
_Bool _if_conditional701;
_Bool _if_conditional702;
_Bool _if_conditional703;
void* right_value667;
char* __dec_obj282;
struct sOrOrNode* __result364__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value664, 0, sizeof(void*));
memset(&result_325, 0, sizeof(struct sOrOrNode*));
memset(&right_value665, 0, sizeof(void*));
memset(&right_value666, 0, sizeof(void*));
memset(&right_value667, 0, sizeof(void*));
                    if(_if_conditional698=self==(void*)0,                    _if_conditional698) {
                        __result363__ = __result_obj__ = (void*)0;
                        return __result363__;
                    }
                    result_325=(struct sOrOrNode*)come_increment_ref_count(((struct sOrOrNode*)(right_value664=(struct sOrOrNode*)come_calloc(1, sizeof(struct sOrOrNode)*(1), "sOrOrNode_clone", 3, "struct sOrOrNode"))));
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value664);
                    if(right_value664 && right_value664 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sOrOrNode_finalize,right_value664, (void*)0, (void*)0, 0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value664;
                    __freed_obj__ = 0;
                    if(_if_conditional699=self!=((void*)0)&&self->mLeft!=((void*)0),                    _if_conditional699) {
                        __dec_obj280=result_325->mLeft;
                        result_325->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value665=sNode_clone(self->mLeft))));
                        if(__dec_obj280) { __dec_obj280 = come_decrement_ref_count(__dec_obj280, ((struct sNode*)__dec_obj280)->finalize, ((struct sNode*)__dec_obj280)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value665);
                        if(right_value665 && right_value665 != __result_obj__ && !__freed_obj__) { right_value665 = come_decrement_ref_count(right_value665, ((struct sNode*)right_value665)->finalize, ((struct sNode*)right_value665)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value665;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional700=self!=((void*)0)&&self->mRight!=((void*)0),                    _if_conditional700) {
                        __dec_obj281=result_325->mRight;
                        result_325->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value666=sNode_clone(self->mRight))));
                        if(__dec_obj281) { __dec_obj281 = come_decrement_ref_count(__dec_obj281, ((struct sNode*)__dec_obj281)->finalize, ((struct sNode*)__dec_obj281)->_protocol_obj, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value666);
                        if(right_value666 && right_value666 != __result_obj__ && !__freed_obj__) { right_value666 = come_decrement_ref_count(right_value666, ((struct sNode*)right_value666)->finalize, ((struct sNode*)right_value666)->_protocol_obj, 1, 0, 0); } 
                        __right_value_freed_obj[0] = right_value666;
                        __freed_obj__ = 0;
                    }
                    if(_if_conditional701=self!=((void*)0),                    _if_conditional701) {
                        result_325->mQuote=self->mQuote;
                    }
                    if(_if_conditional702=self!=((void*)0),                    _if_conditional702) {
                        result_325->sline=self->sline;
                    }
                    if(_if_conditional703=self!=((void*)0)&&self->sname!=((void*)0),                    _if_conditional703) {
                        __dec_obj282=result_325->sname;
                        result_325->sname=(char*)come_increment_ref_count(((char*)(right_value667=string_clone(self->sname))));
                        if(__dec_obj282) { __dec_obj282 = come_decrement_ref_count(__dec_obj282, (void*)0, (void*)0, 0,0,0); }
                        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value667);
                        if(right_value667 && right_value667 != __result_obj__ && !__freed_obj__) { right_value667 = come_decrement_ref_count(right_value667, (void*)0, (void*)0, 1, 0, 0); }
                        __right_value_freed_obj[0] = right_value667;
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
void* right_value669;
struct sNode* node_326;
_Bool _while_condtional20;
_Bool _if_conditional704;
void* right_value670;
struct sNode* node2_327;
void* right_value671;
void* right_value672;
struct sNode* _inf_value43;
struct sCommaNode* _inf_obj_value43;
void* right_value677;
struct sNode* __result369__;
struct sNode* __result370__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value669, 0, sizeof(void*));
memset(&node_326, 0, sizeof(struct sNode*));
memset(&right_value670, 0, sizeof(void*));
memset(&node2_327, 0, sizeof(struct sNode*));
memset(&right_value671, 0, sizeof(void*));
memset(&right_value672, 0, sizeof(void*));
memset(&right_value677, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_326=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value669=oror_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value669);
    if(right_value669 && right_value669 != __result_obj__ && !__freed_obj__) { right_value669 = come_decrement_ref_count(right_value669, ((struct sNode*)right_value669)->finalize, ((struct sNode*)right_value669)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value669;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional20=*info->p,    _while_condtional20) {
        if(_if_conditional704=!info->no_comma&&*info->p==44,        _if_conditional704) {
            info->p++;
            skip_spaces_and_lf(info);
            node2_327=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value670=oror_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value670);
            if(right_value670 && right_value670 != __result_obj__ && !__freed_obj__) { right_value670 = come_decrement_ref_count(right_value670, ((struct sNode*)right_value670)->finalize, ((struct sNode*)right_value670)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value670;
            __freed_obj__ = 0;
            _inf_value43=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2716, "struct sNode");
            _inf_obj_value43=come_increment_ref_count(((struct sCommaNode*)(right_value672=sCommaNode_initialize((struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value671=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "13op.c", 2716, "struct sCommaNode")))),(struct sNode*)come_increment_ref_count(node_326),(struct sNode*)come_increment_ref_count(node2_327),info))));
            _inf_value43->_protocol_obj=_inf_obj_value43;
            _inf_value43->finalize=(void*)sCommaNode_finalize;
            _inf_value43->clone=(void*)sCommaNode_clone;
            _inf_value43->compile=(void*)sCommaNode_compile;
            _inf_value43->sline=(void*)sCommaNode_sline;
            _inf_value43->sname=(void*)sCommaNode_sname;
            _inf_value43->terminated=(void*)sCommaNode_terminated;
            _inf_value43->kind=(void*)sCommaNode_kind;
            __result369__ = __result_obj__ = ((struct sNode*)(right_value677=_inf_value43));
            if(node2_327 && !__freed_obj__) { node2_327 = come_decrement_ref_count(node2_327, ((struct sNode*)node2_327)->finalize, ((struct sNode*)node2_327)->_protocol_obj, 0, 0, 0); } 
            if(node_326 && !__freed_obj__) { node_326 = come_decrement_ref_count(node_326, ((struct sNode*)node_326)->finalize, ((struct sNode*)node_326)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value671);
            if(right_value671 && right_value671 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value671, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value671;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value672);
            if(right_value672 && right_value672 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value672, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value672;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value677);
            if(right_value677 && right_value677 != __result_obj__ && !__freed_obj__) { right_value677 = come_decrement_ref_count(right_value677, ((struct sNode*)right_value677)->finalize, ((struct sNode*)right_value677)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value677;
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
_Bool _if_conditional705;
_Bool _if_conditional706;
_Bool _if_conditional707;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional705=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional705) {
                    if(self->mLeft && !__freed_obj__) { self->mLeft = come_decrement_ref_count(self->mLeft, ((struct sNode*)self->mLeft)->finalize, ((struct sNode*)self->mLeft)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional706=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional706) {
                    if(self->mRight && !__freed_obj__) { self->mRight = come_decrement_ref_count(self->mRight, ((struct sNode*)self->mRight)->finalize, ((struct sNode*)self->mRight)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional707=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional707) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sCommaNode* sCommaNode_clone(struct sCommaNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional708;
struct sCommaNode* __result367__;
void* right_value673;
struct sCommaNode* result_328;
_Bool _if_conditional709;
void* right_value674;
struct sNode* __dec_obj283;
_Bool _if_conditional710;
void* right_value675;
struct sNode* __dec_obj284;
_Bool _if_conditional711;
_Bool _if_conditional712;
void* right_value676;
char* __dec_obj285;
struct sCommaNode* __result368__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value673, 0, sizeof(void*));
memset(&result_328, 0, sizeof(struct sCommaNode*));
memset(&right_value674, 0, sizeof(void*));
memset(&right_value675, 0, sizeof(void*));
memset(&right_value676, 0, sizeof(void*));
                if(_if_conditional708=self==(void*)0,                _if_conditional708) {
                    __result367__ = __result_obj__ = (void*)0;
                    return __result367__;
                }
                result_328=(struct sCommaNode*)come_increment_ref_count(((struct sCommaNode*)(right_value673=(struct sCommaNode*)come_calloc(1, sizeof(struct sCommaNode)*(1), "sCommaNode_clone", 3, "struct sCommaNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value673);
                if(right_value673 && right_value673 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sCommaNode_finalize,right_value673, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value673;
                __freed_obj__ = 0;
                if(_if_conditional709=self!=((void*)0)&&self->mLeft!=((void*)0),                _if_conditional709) {
                    __dec_obj283=result_328->mLeft;
                    result_328->mLeft=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value674=sNode_clone(self->mLeft))));
                    if(__dec_obj283) { __dec_obj283 = come_decrement_ref_count(__dec_obj283, ((struct sNode*)__dec_obj283)->finalize, ((struct sNode*)__dec_obj283)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value674);
                    if(right_value674 && right_value674 != __result_obj__ && !__freed_obj__) { right_value674 = come_decrement_ref_count(right_value674, ((struct sNode*)right_value674)->finalize, ((struct sNode*)right_value674)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value674;
                    __freed_obj__ = 0;
                }
                if(_if_conditional710=self!=((void*)0)&&self->mRight!=((void*)0),                _if_conditional710) {
                    __dec_obj284=result_328->mRight;
                    result_328->mRight=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value675=sNode_clone(self->mRight))));
                    if(__dec_obj284) { __dec_obj284 = come_decrement_ref_count(__dec_obj284, ((struct sNode*)__dec_obj284)->finalize, ((struct sNode*)__dec_obj284)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value675);
                    if(right_value675 && right_value675 != __result_obj__ && !__freed_obj__) { right_value675 = come_decrement_ref_count(right_value675, ((struct sNode*)right_value675)->finalize, ((struct sNode*)right_value675)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value675;
                    __freed_obj__ = 0;
                }
                if(_if_conditional711=self!=((void*)0),                _if_conditional711) {
                    result_328->sline=self->sline;
                }
                if(_if_conditional712=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional712) {
                    __dec_obj285=result_328->sname;
                    result_328->sname=(char*)come_increment_ref_count(((char*)(right_value676=string_clone(self->sname))));
                    if(__dec_obj285) { __dec_obj285 = come_decrement_ref_count(__dec_obj285, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value676);
                    if(right_value676 && right_value676 != __result_obj__ && !__freed_obj__) { right_value676 = come_decrement_ref_count(right_value676, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value676;
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
void* right_value678;
struct sNode* node_329;
_Bool _while_condtional21;
_Bool _if_conditional713;
struct sNode* value1_330;
_Bool _if_conditional714;
void* right_value679;
void* right_value680;
struct sNode* _inf_value44;
struct sNullNode* _inf_obj_value44;
void* right_value683;
struct sNode* __dec_obj287;
void* right_value684;
struct sNode* __dec_obj288;
void* right_value685;
struct sNode* value2_332;
void* right_value686;
void* right_value687;
struct sNode* _inf_value45;
struct sConditionalNode* _inf_obj_value45;
void* right_value693;
struct sNode* __result375__;
struct sNode* __result376__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value678, 0, sizeof(void*));
memset(&node_329, 0, sizeof(struct sNode*));
memset(&value1_330, 0, sizeof(struct sNode*));
memset(&right_value679, 0, sizeof(void*));
memset(&right_value680, 0, sizeof(void*));
memset(&right_value683, 0, sizeof(void*));
memset(&right_value684, 0, sizeof(void*));
memset(&right_value685, 0, sizeof(void*));
memset(&value2_332, 0, sizeof(struct sNode*));
memset(&right_value686, 0, sizeof(void*));
memset(&right_value687, 0, sizeof(void*));
memset(&right_value693, 0, sizeof(void*));
    parse_sharp_v5(info);
    node_329=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value678=comma_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value678);
    if(right_value678 && right_value678 != __result_obj__ && !__freed_obj__) { right_value678 = come_decrement_ref_count(right_value678, ((struct sNode*)right_value678)->finalize, ((struct sNode*)right_value678)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value678;
    __freed_obj__ = 0;
    parse_sharp_v5(info);
    while(_while_condtional21=*info->p,    _while_condtional21) {
        if(_if_conditional713=*info->p==63,        _if_conditional713) {
            info->p++;
            skip_spaces_and_lf(info);
            parse_sharp_v5(info);
            if(_if_conditional714=*info->p==58,            _if_conditional714) {
                _inf_value44=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2745, "struct sNode");
                _inf_obj_value44=come_increment_ref_count(((struct sNullNode*)(right_value680=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value679=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2745, "struct sNullNode")))),info))));
                _inf_value44->_protocol_obj=_inf_obj_value44;
                _inf_value44->finalize=(void*)sNullNode_finalize;
                _inf_value44->clone=(void*)sNullNode_clone;
                _inf_value44->compile=(void*)sNullNode_compile;
                _inf_value44->sline=(void*)sNullNode_sline;
                _inf_value44->sname=(void*)sNullNode_sname;
                _inf_value44->terminated=(void*)sNullNode_terminated;
                _inf_value44->kind=(void*)sNullNode_kind;
                __dec_obj287=value1_330;
                value1_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value683=_inf_value44)));
                if(__dec_obj287) { __dec_obj287 = come_decrement_ref_count(__dec_obj287, ((struct sNode*)__dec_obj287)->finalize, ((struct sNode*)__dec_obj287)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value679);
                if(right_value679 && right_value679 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value679, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value679;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value680);
                if(right_value680 && right_value680 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value680, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[1] = right_value680;
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value683);
                if(right_value683 && right_value683 != __result_obj__ && !__freed_obj__) { right_value683 = come_decrement_ref_count(right_value683, ((struct sNode*)right_value683)->finalize, ((struct sNode*)right_value683)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[2] = right_value683;
                __freed_obj__ = 0;
            }
            else {
                __dec_obj288=value1_330;
                value1_330=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value684=comma_exp(info))));
                if(__dec_obj288) { __dec_obj288 = come_decrement_ref_count(__dec_obj288, ((struct sNode*)__dec_obj288)->finalize, ((struct sNode*)__dec_obj288)->_protocol_obj, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value684);
                if(right_value684 && right_value684 != __result_obj__ && !__freed_obj__) { right_value684 = come_decrement_ref_count(right_value684, ((struct sNode*)right_value684)->finalize, ((struct sNode*)right_value684)->_protocol_obj, 1, 0, 0); } 
                __right_value_freed_obj[0] = right_value684;
                __freed_obj__ = 0;
            }
            parse_sharp_v5(info);
            expected_next_character(58,info);
            value2_332=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value685=comma_exp(info))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value685);
            if(right_value685 && right_value685 != __result_obj__ && !__freed_obj__) { right_value685 = come_decrement_ref_count(right_value685, ((struct sNode*)right_value685)->finalize, ((struct sNode*)right_value685)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[0] = right_value685;
            __freed_obj__ = 0;
            parse_sharp_v5(info);
            _inf_value45=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2759, "struct sNode");
            _inf_obj_value45=come_increment_ref_count(((struct sConditionalNode*)(right_value687=sConditionalNode_initialize((struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value686=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "13op.c", 2759, "struct sConditionalNode")))),(struct sNode*)come_increment_ref_count(node_329),(struct sNode*)come_increment_ref_count(value1_330),(struct sNode*)come_increment_ref_count(value2_332),info))));
            _inf_value45->_protocol_obj=_inf_obj_value45;
            _inf_value45->finalize=(void*)sConditionalNode_finalize;
            _inf_value45->clone=(void*)sConditionalNode_clone;
            _inf_value45->compile=(void*)sConditionalNode_compile;
            _inf_value45->sline=(void*)sConditionalNode_sline;
            _inf_value45->sname=(void*)sConditionalNode_sname;
            _inf_value45->terminated=(void*)sConditionalNode_terminated;
            _inf_value45->kind=(void*)sConditionalNode_kind;
            __result375__ = __result_obj__ = ((struct sNode*)(right_value693=_inf_value45));
            if(value1_330 && !__freed_obj__) { value1_330 = come_decrement_ref_count(value1_330, ((struct sNode*)value1_330)->finalize, ((struct sNode*)value1_330)->_protocol_obj, 0, 0, 0); } 
            if(value2_332 && !__freed_obj__) { value2_332 = come_decrement_ref_count(value2_332, ((struct sNode*)value2_332)->finalize, ((struct sNode*)value2_332)->_protocol_obj, 0, 0, 0); } 
            if(node_329 && !__freed_obj__) { node_329 = come_decrement_ref_count(node_329, ((struct sNode*)node_329)->finalize, ((struct sNode*)node_329)->_protocol_obj, 0, 0, 0); } 
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value686);
            if(right_value686 && right_value686 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value686, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value686;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value687);
            if(right_value687 && right_value687 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value687, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value687;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value693);
            if(right_value693 && right_value693 != __result_obj__ && !__freed_obj__) { right_value693 = come_decrement_ref_count(right_value693, ((struct sNode*)right_value693)->finalize, ((struct sNode*)right_value693)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value693;
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
_Bool _if_conditional719;
_Bool _if_conditional720;
_Bool _if_conditional721;
_Bool _if_conditional722;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional719=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional719) {
                    if(self->mValue1 && !__freed_obj__) { self->mValue1 = come_decrement_ref_count(self->mValue1, ((struct sNode*)self->mValue1)->finalize, ((struct sNode*)self->mValue1)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional720=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional720) {
                    if(self->mValue2 && !__freed_obj__) { self->mValue2 = come_decrement_ref_count(self->mValue2, ((struct sNode*)self->mValue2)->finalize, ((struct sNode*)self->mValue2)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional721=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional721) {
                    if(self->mValue3 && !__freed_obj__) { self->mValue3 = come_decrement_ref_count(self->mValue3, ((struct sNode*)self->mValue3)->finalize, ((struct sNode*)self->mValue3)->_protocol_obj, 0, 0, 0); } 
                }
                if(_if_conditional722=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional722) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sConditionalNode* sConditionalNode_clone(struct sConditionalNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional723;
struct sConditionalNode* __result373__;
void* right_value688;
struct sConditionalNode* result_333;
_Bool _if_conditional724;
void* right_value689;
struct sNode* __dec_obj289;
_Bool _if_conditional725;
void* right_value690;
struct sNode* __dec_obj290;
_Bool _if_conditional726;
void* right_value691;
struct sNode* __dec_obj291;
_Bool _if_conditional727;
_Bool _if_conditional728;
void* right_value692;
char* __dec_obj292;
struct sConditionalNode* __result374__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value688, 0, sizeof(void*));
memset(&result_333, 0, sizeof(struct sConditionalNode*));
memset(&right_value689, 0, sizeof(void*));
memset(&right_value690, 0, sizeof(void*));
memset(&right_value691, 0, sizeof(void*));
memset(&right_value692, 0, sizeof(void*));
                if(_if_conditional723=self==(void*)0,                _if_conditional723) {
                    __result373__ = __result_obj__ = (void*)0;
                    return __result373__;
                }
                result_333=(struct sConditionalNode*)come_increment_ref_count(((struct sConditionalNode*)(right_value688=(struct sConditionalNode*)come_calloc(1, sizeof(struct sConditionalNode)*(1), "sConditionalNode_clone", 3, "struct sConditionalNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value688);
                if(right_value688 && right_value688 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sConditionalNode_finalize,right_value688, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value688;
                __freed_obj__ = 0;
                if(_if_conditional724=self!=((void*)0)&&self->mValue1!=((void*)0),                _if_conditional724) {
                    __dec_obj289=result_333->mValue1;
                    result_333->mValue1=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value689=sNode_clone(self->mValue1))));
                    if(__dec_obj289) { __dec_obj289 = come_decrement_ref_count(__dec_obj289, ((struct sNode*)__dec_obj289)->finalize, ((struct sNode*)__dec_obj289)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value689);
                    if(right_value689 && right_value689 != __result_obj__ && !__freed_obj__) { right_value689 = come_decrement_ref_count(right_value689, ((struct sNode*)right_value689)->finalize, ((struct sNode*)right_value689)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value689;
                    __freed_obj__ = 0;
                }
                if(_if_conditional725=self!=((void*)0)&&self->mValue2!=((void*)0),                _if_conditional725) {
                    __dec_obj290=result_333->mValue2;
                    result_333->mValue2=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value690=sNode_clone(self->mValue2))));
                    if(__dec_obj290) { __dec_obj290 = come_decrement_ref_count(__dec_obj290, ((struct sNode*)__dec_obj290)->finalize, ((struct sNode*)__dec_obj290)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value690);
                    if(right_value690 && right_value690 != __result_obj__ && !__freed_obj__) { right_value690 = come_decrement_ref_count(right_value690, ((struct sNode*)right_value690)->finalize, ((struct sNode*)right_value690)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value690;
                    __freed_obj__ = 0;
                }
                if(_if_conditional726=self!=((void*)0)&&self->mValue3!=((void*)0),                _if_conditional726) {
                    __dec_obj291=result_333->mValue3;
                    result_333->mValue3=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value691=sNode_clone(self->mValue3))));
                    if(__dec_obj291) { __dec_obj291 = come_decrement_ref_count(__dec_obj291, ((struct sNode*)__dec_obj291)->finalize, ((struct sNode*)__dec_obj291)->_protocol_obj, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value691);
                    if(right_value691 && right_value691 != __result_obj__ && !__freed_obj__) { right_value691 = come_decrement_ref_count(right_value691, ((struct sNode*)right_value691)->finalize, ((struct sNode*)right_value691)->_protocol_obj, 1, 0, 0); } 
                    __right_value_freed_obj[0] = right_value691;
                    __freed_obj__ = 0;
                }
                if(_if_conditional727=self!=((void*)0),                _if_conditional727) {
                    result_333->sline=self->sline;
                }
                if(_if_conditional728=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional728) {
                    __dec_obj292=result_333->sname;
                    result_333->sname=(char*)come_increment_ref_count(((char*)(right_value692=string_clone(self->sname))));
                    if(__dec_obj292) { __dec_obj292 = come_decrement_ref_count(__dec_obj292, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value692);
                    if(right_value692 && right_value692 != __result_obj__ && !__freed_obj__) { right_value692 = come_decrement_ref_count(right_value692, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value692;
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
void* right_value694;
struct sNode* node_334;
struct sNode* __result377__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value694, 0, sizeof(void*));
memset(&node_334, 0, sizeof(struct sNode*));
    parse_sharp_v5(info);
    node_334=(struct sNode*)come_increment_ref_count(((struct sNode*)(right_value694=conditional_exp(info))));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value694);
    if(right_value694 && right_value694 != __result_obj__ && !__freed_obj__) { right_value694 = come_decrement_ref_count(right_value694, ((struct sNode*)right_value694)->finalize, ((struct sNode*)right_value694)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value694;
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
_Bool _if_conditional729;
void* right_value695;
void* right_value696;
struct sNode* _inf_value46;
struct sNullNode* _inf_obj_value46;
void* right_value699;
struct sNode* __result380__;
_Bool _if_conditional734;
void* right_value700;
void* right_value701;
struct sNode* _inf_value47;
struct sNilNode* _inf_obj_value47;
void* right_value704;
struct sNode* __result383__;
void* right_value705;
struct sNode* __result384__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value695, 0, sizeof(void*));
memset(&right_value696, 0, sizeof(void*));
memset(&right_value699, 0, sizeof(void*));
memset(&right_value700, 0, sizeof(void*));
memset(&right_value701, 0, sizeof(void*));
memset(&right_value704, 0, sizeof(void*));
memset(&right_value705, 0, sizeof(void*));
    if(_if_conditional729=charp_operator_equals(buf,"null"),    _if_conditional729) {
        _inf_value46=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2783, "struct sNode");
        _inf_obj_value46=come_increment_ref_count(((struct sNullNode*)(right_value696=sNullNode_initialize((struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value695=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "13op.c", 2783, "struct sNullNode")))),info))));
        _inf_value46->_protocol_obj=_inf_obj_value46;
        _inf_value46->finalize=(void*)sNullNode_finalize;
        _inf_value46->clone=(void*)sNullNode_clone;
        _inf_value46->compile=(void*)sNullNode_compile;
        _inf_value46->sline=(void*)sNullNode_sline;
        _inf_value46->sname=(void*)sNullNode_sname;
        _inf_value46->terminated=(void*)sNullNode_terminated;
        _inf_value46->kind=(void*)sNullNode_kind;
        __result380__ = __result_obj__ = ((struct sNode*)(right_value699=_inf_value46));
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value695);
        if(right_value695 && right_value695 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value695, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[0] = right_value695;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value696);
        if(right_value696 && right_value696 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value696, (void*)0, (void*)0, 0, 1, 0, 0); }
        __right_value_freed_obj[1] = right_value696;
        __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value699);
        if(right_value699 && right_value699 != __result_obj__ && !__freed_obj__) { right_value699 = come_decrement_ref_count(right_value699, ((struct sNode*)right_value699)->finalize, ((struct sNode*)right_value699)->_protocol_obj, 1, 0, 0); } 
        __right_value_freed_obj[2] = right_value699;
        __freed_obj__ = 0;
        return __result380__;
    }
    else {
        if(_if_conditional734=charp_operator_equals(buf,"nil"),        _if_conditional734) {
            _inf_value47=(struct sNode*)come_calloc(1, sizeof(struct sNode), "13op.c", 2786, "struct sNode");
            _inf_obj_value47=come_increment_ref_count(((struct sNilNode*)(right_value701=sNilNode_initialize((struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value700=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "13op.c", 2786, "struct sNilNode")))),info))));
            _inf_value47->_protocol_obj=_inf_obj_value47;
            _inf_value47->finalize=(void*)sNilNode_finalize;
            _inf_value47->clone=(void*)sNilNode_clone;
            _inf_value47->compile=(void*)sNilNode_compile;
            _inf_value47->sline=(void*)sNilNode_sline;
            _inf_value47->sname=(void*)sNilNode_sname;
            _inf_value47->terminated=(void*)sNilNode_terminated;
            _inf_value47->kind=(void*)sNilNode_kind;
            __result383__ = __result_obj__ = ((struct sNode*)(right_value704=_inf_value47));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value700);
            if(right_value700 && right_value700 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value700, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value700;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 1, right_value701);
            if(right_value701 && right_value701 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value701, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[1] = right_value701;
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 2, right_value704);
            if(right_value704 && right_value704 != __result_obj__ && !__freed_obj__) { right_value704 = come_decrement_ref_count(right_value704, ((struct sNode*)right_value704)->finalize, ((struct sNode*)right_value704)->_protocol_obj, 1, 0, 0); } 
            __right_value_freed_obj[2] = right_value704;
            __freed_obj__ = 0;
            return __result383__;
        }
    }
    __result384__ = __result_obj__ = ((struct sNode*)(right_value705=string_node_v12(buf,head,head_sline,info)));
    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value705);
    if(right_value705 && right_value705 != __result_obj__ && !__freed_obj__) { right_value705 = come_decrement_ref_count(right_value705, ((struct sNode*)right_value705)->finalize, ((struct sNode*)right_value705)->_protocol_obj, 1, 0, 0); } 
    __right_value_freed_obj[0] = right_value705;
    __freed_obj__ = 0;
    return __result384__;
}

static void sNullNode_finalize(struct sNullNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional730;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
            if(_if_conditional730=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional730) {
                if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
            }
}

static struct sNullNode* sNullNode_clone(struct sNullNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional731;
struct sNullNode* __result378__;
void* right_value697;
struct sNullNode* result_335;
_Bool _if_conditional732;
_Bool _if_conditional733;
void* right_value698;
char* __dec_obj293;
struct sNullNode* __result379__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value697, 0, sizeof(void*));
memset(&result_335, 0, sizeof(struct sNullNode*));
memset(&right_value698, 0, sizeof(void*));
            if(_if_conditional731=self==(void*)0,            _if_conditional731) {
                __result378__ = __result_obj__ = (void*)0;
                return __result378__;
            }
            result_335=(struct sNullNode*)come_increment_ref_count(((struct sNullNode*)(right_value697=(struct sNullNode*)come_calloc(1, sizeof(struct sNullNode)*(1), "sNullNode_clone", 3, "struct sNullNode"))));
            __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value697);
            if(right_value697 && right_value697 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNullNode_finalize,right_value697, (void*)0, (void*)0, 0, 1, 0, 0); }
            __right_value_freed_obj[0] = right_value697;
            __freed_obj__ = 0;
            if(_if_conditional732=self!=((void*)0),            _if_conditional732) {
                result_335->sline=self->sline;
            }
            if(_if_conditional733=self!=((void*)0)&&self->sname!=((void*)0),            _if_conditional733) {
                __dec_obj293=result_335->sname;
                result_335->sname=(char*)come_increment_ref_count(((char*)(right_value698=string_clone(self->sname))));
                if(__dec_obj293) { __dec_obj293 = come_decrement_ref_count(__dec_obj293, (void*)0, (void*)0, 0,0,0); }
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value698);
                if(right_value698 && right_value698 != __result_obj__ && !__freed_obj__) { right_value698 = come_decrement_ref_count(right_value698, (void*)0, (void*)0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value698;
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
_Bool _if_conditional735;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
                if(_if_conditional735=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional735) {
                    if(self->sname && !__freed_obj__) { self->sname = come_decrement_ref_count(self->sname, (void*)0, (void*)0, 0, 0, 0); }
                }
}

static struct sNilNode* sNilNode_clone(struct sNilNode* self){
void* __result_obj__;
_Bool __freed_obj__;
void* __right_value_freed_obj[1024];
_Bool _if_conditional736;
struct sNilNode* __result381__;
void* right_value702;
struct sNilNode* result_336;
_Bool _if_conditional737;
_Bool _if_conditional738;
void* right_value703;
char* __dec_obj294;
struct sNilNode* __result382__;
memset(&__result_obj__, 0, sizeof(void*));
memset(&__freed_obj__, 0, sizeof(_Bool));
memset(&right_value702, 0, sizeof(void*));
memset(&result_336, 0, sizeof(struct sNilNode*));
memset(&right_value703, 0, sizeof(void*));
                if(_if_conditional736=self==(void*)0,                _if_conditional736) {
                    __result381__ = __result_obj__ = (void*)0;
                    return __result381__;
                }
                result_336=(struct sNilNode*)come_increment_ref_count(((struct sNilNode*)(right_value702=(struct sNilNode*)come_calloc(1, sizeof(struct sNilNode)*(1), "sNilNode_clone", 3, "struct sNilNode"))));
                __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value702);
                if(right_value702 && right_value702 != __result_obj__ && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,right_value702, (void*)0, (void*)0, 0, 1, 0, 0); }
                __right_value_freed_obj[0] = right_value702;
                __freed_obj__ = 0;
                if(_if_conditional737=self!=((void*)0),                _if_conditional737) {
                    result_336->sline=self->sline;
                }
                if(_if_conditional738=self!=((void*)0)&&self->sname!=((void*)0),                _if_conditional738) {
                    __dec_obj294=result_336->sname;
                    result_336->sname=(char*)come_increment_ref_count(((char*)(right_value703=string_clone(self->sname))));
                    if(__dec_obj294) { __dec_obj294 = come_decrement_ref_count(__dec_obj294, (void*)0, (void*)0, 0,0,0); }
                    __freed_obj__ = come_is_contained_element(__right_value_freed_obj, 0, right_value703);
                    if(right_value703 && right_value703 != __result_obj__ && !__freed_obj__) { right_value703 = come_decrement_ref_count(right_value703, (void*)0, (void*)0, 1, 0, 0); }
                    __right_value_freed_obj[0] = right_value703;
                    __freed_obj__ = 0;
                }
                __result382__ = __result_obj__ = result_336;
                if(result_336 && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 1, 0); }
                return __result382__;
                if(result_336 && !__freed_obj__) { come_call_finalizer(sNilNode_finalize,result_336, (void*)0, (void*)0, 0, 0, 0, 0); }
}

